// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHUDWidget.h"
#include "Framework/ScoreGameState.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"

void UPlayerHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();


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
