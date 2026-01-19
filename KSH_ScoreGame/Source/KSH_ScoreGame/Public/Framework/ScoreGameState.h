// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ScoreGameState.generated.h"

/**
 * 
 */
UCLASS()
class KSH_SCOREGAME_API AScoreGameState : public AGameStateBase
{
	GENERATED_BODY()
	

public:
	AScoreGameState();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	inline float GetGameRemainingTime() { return GameRemainingTime; }

	UFUNCTION()
	void ScoreGameStart();

	UFUNCTION()
	void ScoreGameEnd();

	//주기적으로 액터 스폰 
	UFUNCTION()
	void SpawnProps();

	UFUNCTION()
	FVector FindRandomLocation();

protected:
	//진행 시간
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game Data")
	float GameRemainingTime = 300.0f;

	//소환할 스코어 액터
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Game Data")
	TSubclassOf<class AScoreActorBase> ScoreActor = nullptr;

private:
	//한번에 스폰할 액터 수
	int32 SpawnAmount = 10;
	float PlayGameTime = 300.0f;
	bool isGameStart = false;
	bool isGameEnd = false;

	FTimerHandle PropSpawnHandle;
	TArray<TObjectPtr<class AScoreActorBase>> SpawnedProps;
};
