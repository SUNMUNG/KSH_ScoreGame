// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreBoardBar.generated.h"

/**
 * 
 */
UCLASS()
class KSH_SCOREGAME_API UScoreBoardBar : public UUserWidget
{
	GENERATED_BODY()
public:

	void UpdateData(int32 Rank, FString PlayerName, int32 Score);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> RankText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> NickNameText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> ScoreText = nullptr;
};
