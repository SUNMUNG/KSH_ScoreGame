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


	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	//Getter
	UFUNCTION(BlueprintCallable)
	inline int32 GetMyScore() const {
		return MyScore;
			
	}
	//점수 추가 함수 서버만 접근
	void AddMyScore(int32 ScoreAmount);

	//클라이언트(UI)에서 호출할 준비 토글 함수
	UFUNCTION(BlueprintCallable, Category = "Game State")
	void SetPlayerReady(bool bReady);

	//준비 상태 확인용 (UI 바인딩용)
	UFUNCTION(BlueprintCallable, Category = "Game State")
	bool IsPlayerReady() const { return bIsReady; }

	//초기화 함수
	void ResetPlayerStatus();

protected:
	//서버로 준비 신호를 보내는 RPC
	UFUNCTION(Server, Reliable)
	void Server_SetPlayerReady(bool bReady);

	//클라이언트들의 UI 델리게이트 발송
	//서버는 따로
	UFUNCTION()
	void OnRepNotify_MyScore();

public:

	UPROPERTY(BlueprintAssignable)
	FOnScoreChanged OnScoreChanged;

protected:

	//준비여부
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
	bool bIsReady = false;
	//점수
	UPROPERTY(ReplicatedUsing = OnRepNotify_MyScore, BlueprintReadOnly, Category = "Game State")
	int32 MyScore = 0;
};
