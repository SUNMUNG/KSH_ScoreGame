// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ScoreBar.h"
#include "GameFramework/Character.h"
#include "Components/TextBlock.h"
#include "Framework/ScorePlayerState.h"

void UScoreBar::NativeConstruct()
{


    Super::NativeConstruct();

    if (OwnerCharacter)
    {
        OwnerPlayerState = Cast<AScorePlayerState>(OwnerCharacter->GetPlayerState());
    }

    if (OwnerPlayerState)
    {
        OwnerPlayerState->OnScoreChanged.AddDynamic(this, &UScoreBar::SetScoreText);

        // PlayerState가 있을 때만 초기 갱신을 시도합니다.
        SetScoreText();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] NativeConstruct: PlayerState not ready yet."));
    }
}

void UScoreBar::SetScoreText()
{
    // [디버깅] 호출 시점과 주요 객체 상태 로그 출력
        // 어떤 위젯 인스턴스에서 호출되었는지, 각 포인터가 유효한지 확인합니다.
    UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] SetScoreText Called on Widget: %s"), *GetNameSafe(this));

    // 1. 텍스트 블록(ScoreText)이 유효한지 확인
    if (!ScoreText)
    {
        UE_LOG(LogTemp, Error, TEXT("[ScoreBar] ScoreText is NULL! (BindWidget 실패 가능성)"));
        return;
    }

    // 2. PlayerState가 유효한지 확인 (여기가 핵심 원인일 것입니다)
    if (!OwnerPlayerState)
    {
        // 아직 PlayerState가 도착하지 않았는데 호출된 경우입니다.
        // 크래시를 방지하기 위해 로그만 남기고 함수를 종료합니다.
        UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] OwnerPlayerState is NULL! Waiting for Initialization..."));

        // (선택 사항) 점수를 표시할 수 없으므로 "??" 또는 "0" 등으로 임시 처리할 수도 있습니다.
        // ScoreText->SetText(FText::FromString(TEXT("-")));
        return;
    }

    // 3. 안전하게 점수 가져오기
    int32 CurrentScore = OwnerPlayerState->GetMyScore();
    UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] Updating Score. Player: %s, Score: %d"), *OwnerPlayerState->GetPlayerName(), CurrentScore);

    // 4. 텍스트 갱신
    ScoreText->SetText(FText::AsNumber(CurrentScore));
}

void UScoreBar::InitializeScoreWidget(AScorePlayerState* NewPlayerState)
{
	if (OwnerPlayerState == NewPlayerState)
	{
		return;
	}

	OwnerPlayerState = NewPlayerState;

	if (OwnerPlayerState)
	{
		OwnerPlayerState->OnScoreChanged.AddDynamic(this, &UScoreBar::SetScoreText);


		SetScoreText();

		UE_LOG(LogTemp, Log, TEXT("UI Initialized for %s"), *OwnerPlayerState->GetPlayerName());
	}
}


