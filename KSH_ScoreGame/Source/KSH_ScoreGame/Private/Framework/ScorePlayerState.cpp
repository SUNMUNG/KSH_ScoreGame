// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/ScorePlayerState.h"
#include "Net/UnrealNetwork.h"

AScorePlayerState::AScorePlayerState()
{
}

void AScorePlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void AScorePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AScorePlayerState, MyScore);
}

void AScorePlayerState::AddMyScore(int32 ScoreAmount)
{
	MyScore += ScoreAmount;

	if (HasAuthority())
	{
		OnRepNotify_MyScore();
	}
}

void AScorePlayerState::OnRepNotify_MyScore()
{
	OnScoreChanged.Broadcast();
}
