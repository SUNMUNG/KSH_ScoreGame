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

        SetScoreText();
    }
}

void UScoreBar::SetScoreText()
{
    //UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] SetScoreText Called on Widget: %s"), *GetNameSafe(this));

    if (!ScoreText)
    {
        //UE_LOG(LogTemp, Error, TEXT("[ScoreBar] ScoreText is NULL! (BindWidget 실패 가능성)"));
        return;
    }


    if (!OwnerPlayerState)
    {
        //UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] OwnerPlayerState is NULL! Waiting for Initialization..."));
        return;
    }

    //점수 
    int32 CurrentScore = OwnerPlayerState->GetMyScore();
    //UE_LOG(LogTemp, Warning, TEXT("[ScoreBar] Updating Score. Player: %s, Score: %d"), *OwnerPlayerState->GetPlayerName(), CurrentScore);


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


