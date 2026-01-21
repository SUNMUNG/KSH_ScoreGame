// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreBar.generated.h"

/**
 * 
 */
UCLASS()
class KSH_SCOREGAME_API UScoreBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	void SetScoreText();

	UFUNCTION(BlueprintCallable)
	void InitializeScoreWidget(class AScorePlayerState* NewPlayerState);

	UFUNCTION(BlueprintCallable)
	inline void SetOwnerCharacter(ACharacter* InCh) {
		OwnerCharacter = InCh;
	}
public:



protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> ScoreText = nullptr;

private:
	TObjectPtr<ACharacter> OwnerCharacter = nullptr;

	TObjectPtr<class AScorePlayerState> OwnerPlayerState = nullptr;
};
