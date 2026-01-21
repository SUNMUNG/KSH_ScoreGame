// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/ScoreGameMode.h"
#include "Framework/ScoreGameState.h"

void AScoreGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	if (AScoreGameState* Mygamestate = GetGameState<AScoreGameState>())
	{
		Mygamestate->OnScorePlayerAdded();
	}
}
