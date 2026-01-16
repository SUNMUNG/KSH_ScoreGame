// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ScorePlayerState.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScoreChanged);
/**
 * 
 */
UCLASS()
class KSH_SCOREGAME_API AScorePlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AScorePlayerState();

	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	inline int32 GetMyScore() {
		return MyScore;
			
	}

	void AddMyScore(int32 ScoreAmount);

	UFUNCTION()
	void OnRepNotify_MyScore();


public:
	UPROPERTY(BlueprintAssignable)
	FOnScoreChanged OnScoreChanged;
protected:
	UPROPERTY(ReplicatedUsing = OnRepNotify_MyScore)
	int32 MyScore = 0;
};
