// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHUDWidget.h"
#include "UI/ScoreBoardBar.h"
#include "Framework/ScoreGameState.h"
#include "Framework/ScorePlayerState.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/SizeBox.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void UPlayerHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (UWorld* world = GetWorld())
	{
		world->GetTimerManager().ClearTimer(LeaderboardTimerHandle);

		UpdateLeaderboard();

		world->GetTimerManager().SetTimer(
			LeaderboardTimerHandle,
			this,
			&UPlayerHUDWidget::UpdateLeaderboard,
			0.016f,
			true
		);
	}

	if (ReadyButton)
	{
		ReadyButton->OnClicked.AddDynamic(this, &UPlayerHUDWidget::OnReadyButtonClicked);
	}
}


void UPlayerHUDWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!CachedGameState.IsValid())
	{
		CachedGameState = Cast<AScoreGameState>(UGameplayStatics::GetGameState(this));
	}

	
	UpdateRemainGameTime();
	UpdateGameStatusUI();
}

void UPlayerHUDWidget::UpdateRemainGameTime()
{
	if (CachedGameState.IsValid())
	{

		int32  Total = FMath::FloorToInt(CachedGameState->GetGameRemainingTime());
		int32  Minutes = Total / 60;
		int32  Seconds = Total % 60;
		Minutes = FMath::Max(0.0f, Minutes);
		Seconds = FMath::Max(0.0f, Seconds);
		RemainGameTime->SetText(FText::FromString(FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds)));
	}
}

void UPlayerHUDWidget::UpdateLeaderboard()
{
	if (!RankBox || !ScoreBoardBarClass || !CachedGameState.IsValid())
	{
		return;
	}

	SortedPlayers.Empty();

	//플레이어 목록 가져오기
	for (APlayerState* PS : CachedGameState->PlayerArray)
	{
		if (AScorePlayerState* ScorePS = Cast<AScorePlayerState>(PS))
		{
			SortedPlayers.Add(ScorePS);
		}
	}

	//점수 정렬 (내림차순)
	SortedPlayers.Sort([](const AScorePlayerState& A, const AScorePlayerState& B) {
		return A.GetMyScore() > B.GetMyScore();
		});

	//목록 비우기
	RankBox->ClearChildren();

	//정렬된 순서대로 위젯 생성해서 추가
	for (int32 i = 0; i < SortedPlayers.Num(); i++)
	{
		if (SortedPlayers[i])
		{
			// 위젯 생성
			UScoreBoardBar* RowWidget = CreateWidget<UScoreBoardBar>(this, ScoreBoardBarClass);
			if (RowWidget)
			{
				// 데이터 세팅
				RowWidget->UpdateData(i + 1, SortedPlayers[i]->GetPlayerName(), SortedPlayers[i]->GetMyScore());

				// 박스에 추가
				RankBox->AddChild(RowWidget);
			}
		}
	}
}

void UPlayerHUDWidget::UpdateGameStatusUI()
{
	if (!CachedGameState.IsValid()) return;
	
	EScoreGameState CurrentState = CachedGameState->GetScoreGameState();

	// 1. 게임 상태별 UI 로직
	switch (CurrentState)
	{
	case EScoreGameState::WaitingToStart:
	{
		// [대기 상태]
		// 로비 패널 보이기
		bHasProcessedGameOver = false;

		if (ReadyPanel) ReadyPanel->SetVisibility(ESlateVisibility::Visible);
		if (CountdownText) CountdownText->SetVisibility(ESlateVisibility::Hidden);
		if (StatusText) StatusText->SetVisibility(ESlateVisibility::Hidden);

		if (UWorld* World = GetWorld())
		{
			if (!World->GetTimerManager().IsTimerActive(LeaderboardTimerHandle))
			{
				World->GetTimerManager().SetTimer(LeaderboardTimerHandle, this, &UPlayerHUDWidget::UpdateLeaderboard, 0.5f, true);
			}
		}

		// 인원수 계산
		int32 ReadyCount = 0;
		int32 TotalCount = CachedGameState->PlayerArray.Num();

		for (APlayerState* PS : CachedGameState->PlayerArray)
		{
			if (AScorePlayerState* ScorePS = Cast<AScorePlayerState>(PS))
			{
				if (ScorePS->IsPlayerReady())
				{
					ReadyCount++;
				}
			}
		}

		// 텍스트 갱신 (CurrentText / TotalText)
		if (CurrentText) CurrentText->SetText(FText::AsNumber(ReadyCount));
		if (TotalText) TotalText->SetText(FText::AsNumber(TotalCount));

		//단방향 레디
		if (AScorePlayerState* MyPS = Cast<AScorePlayerState>(GetOwningPlayerState()))
		{
			if (ReadyButton && ReadyText)
			{
				if (MyPS->IsPlayerReady())
				{
					// 이미 준비함 -> 버튼 비활성화 & 텍스트 변경 & 취소 불가
					ReadyButton->SetIsEnabled(false);
					ReadyText->SetText(FText::FromString(TEXT("준비중")));
				}
				else
				{
					// 아직 준비 안 함 -> 버튼 활성화 & 기본 텍스트
					ReadyButton->SetIsEnabled(true);
					ReadyText->SetText(FText::FromString(TEXT("준비")));
				}
			}
		}
		break;
	}

	case EScoreGameState::Ready:
	{
		// [카운트다운 상태]
		// 로비 패널 숨기기 (이제 게임 시작 단계이므로)
		if (ReadyPanel) ReadyPanel->SetVisibility(ESlateVisibility::Hidden);

		// 카운트다운 텍스트 표시
		if (CountdownText)
		{
			CountdownText->SetVisibility(ESlateVisibility::Visible);
			CountdownText->SetText(FText::FromString(TEXT("3초뒤 시작...")));
		}
		break;
	}

	case EScoreGameState::InProgress:
	{
		// [게임 진행 중]
		if (ReadyPanel) ReadyPanel->SetVisibility(ESlateVisibility::Hidden);
		if (CountdownText) CountdownText->SetVisibility(ESlateVisibility::Hidden);
		if (StatusText) StatusText->SetVisibility(ESlateVisibility::Hidden);
		

		break;
	}

	case EScoreGameState::GameOver:
	{
		// [게임 종료]
		if (ReadyPanel) ReadyPanel->SetVisibility(ESlateVisibility::Hidden);

		// 한 번만 실행하고 타이머 정지 (점수 고정)
		if (!bHasProcessedGameOver)
		{
			bHasProcessedGameOver = true;

			//자동 갱신 타이머 끄기
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().ClearTimer(LeaderboardTimerHandle);
			}

			//최종 점수 표시
			UpdateLeaderboard();

			//승패 판정 로직
			if (StatusText)
			{
				StatusText->SetVisibility(ESlateVisibility::Visible);
				AScorePlayerState* MyPS = Cast<AScorePlayerState>(GetOwningPlayerState());

				if (MyPS && SortedPlayers.Num() > 0)
				{
					int32 TopScore = SortedPlayers[0]->GetMyScore();
					int32 MyScore = MyPS->GetMyScore();

					// 공동 1등 확인 (2등이 있고, 1등과 점수가 같으면 무승부)
					bool bIsDraw = (SortedPlayers.Num() > 1 && SortedPlayers[1]->GetMyScore() == TopScore);

					if (MyScore >= TopScore)
					{
						if (bIsDraw)
						{
							StatusText->SetText(FText::FromString(TEXT("무승부")));
							StatusText->SetColorAndOpacity(FLinearColor::Yellow);
						}
						else
						{
							StatusText->SetText(FText::FromString(TEXT("승리!")));
							StatusText->SetColorAndOpacity(FLinearColor::Green);
						}
					}
					else
					{
						StatusText->SetText(FText::FromString(TEXT("패배...")));
						StatusText->SetColorAndOpacity(FLinearColor::Red);
					}
				}
			}
		}
		break;
	}
	}
}

void UPlayerHUDWidget::OnReadyButtonClicked()
{
	if (AScorePlayerState* MyPS = Cast<AScorePlayerState>(GetOwningPlayerState()))
	{
		MyPS->SetPlayerReady(true);

		if (ReadyButton)
		{
			ReadyButton->SetIsEnabled(false);
		}
	}
}

