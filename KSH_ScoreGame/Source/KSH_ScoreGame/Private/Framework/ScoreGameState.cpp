// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/ScoreGameState.h"
#include "ScoreActor/ScoreActorBase.h"
#include "NavigationSystem.h"
#include "Net/UnrealNetwork.h"
AScoreGameState::AScoreGameState()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AScoreGameState::BeginPlay()
{
	GameElapsedTime = 0.0f;
	isGameEnd = false;
	
	ScoreGameStart();
	//isGameStart = false;
}

void AScoreGameState::Tick(float DeltaTime)
{
	/*if (isGameStart && !isGameEnd) {
		GameElapsedTime += DeltaTime;
	}*/
	if (HasAuthority())
	{
		if (!isGameEnd) {
			GameElapsedTime += DeltaTime;
		}
	}
	
}

void AScoreGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AScoreGameState, GameElapsedTime);
}

void AScoreGameState::ScoreGameStart()
{
	GetWorldTimerManager().SetTimer(
		PropSpawnHandle,
		this,
		&AScoreGameState::SpawnProps,
		5.0f,
		true
	);
}

void AScoreGameState::ScoreGameEnd()
{
	GetWorldTimerManager().ClearTimer(PropSpawnHandle);
}

void AScoreGameState::SpawnProps()
{
	UE_LOG(LogTemp, Warning, TEXT("스코어 스폰 시작"));

	if (SpawnedProps.Num() > 0)
	{
		for (int i = 0; i < SpawnedProps.Num();i++)
		{
			SpawnedProps[i]->Destroy();
		}
		SpawnedProps.Empty();
	}

	if (ScoreActor)
	{
		if (UWorld* world = GetWorld())
		{
			FActorSpawnParameters params;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			for (int i = 0; i < SpawnAmount; i++)
			{
				AScoreActorBase* SpawnedProp = world->SpawnActor<AScoreActorBase>(
					ScoreActor,
					FindRandomLocation(),
					FRotator::ZeroRotator,
					params
					);
				if (SpawnedProp) {
					UE_LOG(LogTemp, Warning, TEXT("스코어 스폰 성공"));
					SpawnedProps.Add(SpawnedProp);
				}
				
			}
			
		}
	}

}
FVector AScoreGameState::FindRandomLocation()
{
	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (NavSystem)
	{
		FNavLocation RandomLocation;
		//맵전체
		float SearchRadius = 1700.0f;
		FVector Origin = FVector(1500.0f, 1700.0f, 0.0f);

		//도달 가능한 랜덤 좌표
		bool bFound = NavSystem->GetRandomReachablePointInRadius(Origin, SearchRadius, RandomLocation);

		if (bFound)
		{
			// 찾은 좌표: RandomLocation.Location
			UE_LOG(LogTemp, Log, TEXT("Found Location: %s"), *RandomLocation.Location.ToString());

			return RandomLocation.Location;
		}
	}
	return FVector::ZeroVector;
}