// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ScoreGameState.generated.h"


UENUM(BlueprintType)
enum class EScoreGameState : uint8
{
	WaitingToStart  UMETA(DisplayName = "Waiting To Start"), // 대기 (플레이어 접속 대기)
	Ready           UMETA(DisplayName = "Ready"),            // 준비 (카운트다운)
	InProgress      UMETA(DisplayName = "In Progress"),      // 진행 중 (점수 획득 가능)
	GameOver        UMETA(DisplayName = "Game Over")         // 종료 (결과 창)
};
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
	inline float GetReadyCountdownTime() { return ReadyCountdownTime; }

	// 플레이어가 들어왔을 때
	void OnScorePlayerAdded();

	// 상태 변경 함수
	void SetScoreGameState(EScoreGameState NewState);

	UFUNCTION(BlueprintCallable)
	EScoreGameState GetScoreGameState() const { return CurrentGameState; }

	//레디 체크
	void CheckAllPlayersReady();
protected:

	UFUNCTION()
	void OnRep_CurrentGameState();

private:

	void StartReadyCountdown();
	void StartGamePlay();
	void EndGame();
	void ResetGame();

	UFUNCTION()
	void OnReadyTimerFinished(); 

	//주기적으로 액터 스폰 
	UFUNCTION()
	void SpawnProps();

	//랜덤위치 리턴
	UFUNCTION()
	FVector FindRandomLocation();

	

protected:

	//현재 게임 상태
	UPROPERTY(ReplicatedUsing = OnRep_CurrentGameState, BlueprintReadOnly, Category = "Game State")
	EScoreGameState CurrentGameState = EScoreGameState::WaitingToStart;


	//진행 시간
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game Data")
	float GameRemainingTime = 40.0f;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game Data")
	float DefaultGameTime = 40.0f;

	//소환할 스코어 액터
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Game Data")
	TArray<TSubclassOf<class AScoreActorBase>> ScoreActors;

private:
	//한번에 스폰할 액터 수
	int32 SpawnAmount = 10;
	//최소인원수
	int32 TargetPlayerCount = 2; 
	//시작시 카운트
	float ReadyCountdownTime = 3.0f; 


	FTimerHandle RestartTimerHandle;
	FTimerHandle StateTimerHandle;
	FTimerHandle PropSpawnTimerHandle;
	TArray<TObjectPtr<class AScoreActorBase>> SpawnedProps;
};
