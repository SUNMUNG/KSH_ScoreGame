// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/ScorePlayerState.h"
#include "Framework/ScoreGameState.h"
#include "Net/UnrealNetwork.h"

void AScorePlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void AScorePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AScorePlayerState, MyScore);
	DOREPLIFETIME(AScorePlayerState, bIsReady);
}

void AScorePlayerState::AddMyScore(int32 ScoreAmount)
{
	MyScore += ScoreAmount;

	if (HasAuthority())
	{
		OnRepNotify_MyScore();
	}
}

void AScorePlayerState::SetPlayerReady(bool bReady)
{
	Server_SetPlayerReady(bReady);
}

void AScorePlayerState::Server_SetPlayerReady_Implementation(bool bReady)
{
	bIsReady = bReady;

	// 상태 변경 알림 
	OnRep_IsReady();

	//누군가 준비 상태를 바꿀 때마다, 검사 요청
	if (UWorld* World = GetWorld())
	{
		if (AScoreGameState* GS = World->GetGameState<AScoreGameState>())
		{
			GS->CheckAllPlayersReady();
		}
	}
}

void AScorePlayerState::OnRepNotify_MyScore()
{
	OnScoreChanged.Broadcast();
}

void AScorePlayerState::OnRep_IsReady()
{

}
