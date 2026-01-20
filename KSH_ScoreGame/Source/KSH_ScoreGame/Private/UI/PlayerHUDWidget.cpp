// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHUDWidget.h"
#include "UI/ScoreBoardBar.h"
#include "Framework/ScoreGameState.h"
#include "Framework/ScorePlayerState.h"
#include "Components/TextBlock.h"
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
			5.0f,
			true
		);
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
}

void UPlayerHUDWidget::UpdateRemainGameTime()
{
	if (CachedGameState.IsValid())
	{

		int32  Total = FMath::FloorToInt(CachedGameState->GetGameRemainingTime());
		int32  Minutes = Total / 60;
		int32  Seconds = Total % 60;
		RemainGameTime->SetText(FText::FromString(FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds)));
	}
}

void UPlayerHUDWidget::UpdateLeaderboard()
{
	if (!RankBox || !ScoreBoardBarClass || !CachedGameState.IsValid())
	{
		return;
	}

	//플레이어 목록 가져오기
	TArray<AScorePlayerState*> Players;
	for (APlayerState* PS : CachedGameState->PlayerArray)
	{
		if (AScorePlayerState* ScorePS = Cast<AScorePlayerState>(PS))
		{
			Players.Add(ScorePS);
		}
	}

	//점수 정렬 (내림차순)
	Players.Sort([](const AScorePlayerState& A, const AScorePlayerState& B) {
		return A.GetMyScore() > B.GetMyScore();
		});

	//기존 목록 싹 비우기 (새로 그리기 위해)
	RankBox->ClearChildren();

	//정렬된 순서대로 위젯 생성해서 추가
	for (int32 i = 0; i < Players.Num(); i++)
	{
		if (Players[i])
		{
			// 위젯 생성
			UScoreBoardBar* RowWidget = CreateWidget<UScoreBoardBar>(this, ScoreBoardBarClass);
			if (RowWidget)
			{
				// 데이터 세팅
				RowWidget->UpdateData(i + 1, Players[i]->GetPlayerName(), Players[i]->GetMyScore());

				// 박스에 추가
				RankBox->AddChild(RowWidget);
			}
		}
	}
}
