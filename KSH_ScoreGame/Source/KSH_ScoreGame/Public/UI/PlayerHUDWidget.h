// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class KSH_SCOREGAME_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	void UpdateRemainGameTime();

	UFUNCTION(BlueprintCallable)
	void UpdateLeaderboard();


	UFUNCTION(BlueprintCallable)
	void UpdateGameStatusUI();

private:
	UFUNCTION()
	void OnReadyButtonClicked();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> RemainGameTime = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UVerticalBox> RankBox = nullptr;

	//레디 패널
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class USizeBox> ReadyPanel = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> CurrentText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> TotalText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UButton> ReadyButton = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> ReadyText = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> CountdownText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UTextBlock> StatusText;

	UPROPERTY()
	TArray<class AScorePlayerState*> SortedPlayers;

	bool bHasProcessedGameOver = false;


	//스코어보드에 추가될 클래스
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UScoreBoardBar> ScoreBoardBarClass;

private:

	FTimerHandle LeaderboardTimerHandle;

	TWeakObjectPtr<class AScoreGameState> CachedGameState = nullptr;

};
