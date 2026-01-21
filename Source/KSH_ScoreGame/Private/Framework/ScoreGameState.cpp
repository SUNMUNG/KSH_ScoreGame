// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/ScoreGameState.h"
#include "Framework/ScorePlayerState.h"
#include "ScoreActor/ScoreActorBase.h"
#include "NavigationSystem.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"
AScoreGameState::AScoreGameState()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AScoreGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AScoreGameState, GameRemainingTime);
	DOREPLIFETIME(AScoreGameState, CurrentGameState);
}
void AScoreGameState::BeginPlay()
{
	if (HasAuthority())
	{
		SetScoreGameState(EScoreGameState::WaitingToStart);
		GameRemainingTime = DefaultGameTime;
	}
}

void AScoreGameState::Tick(float DeltaTime)
{
	if (HasAuthority() && CurrentGameState == EScoreGameState::InProgress)
	{
		GameRemainingTime -= DeltaTime;

		if (GameRemainingTime <= 0.0f)
		{
			SetScoreGameState(EScoreGameState::GameOver);
		}
	}

}



void AScoreGameState::OnScorePlayerAdded()
{
	if (!HasAuthority()) return;

}

void AScoreGameState::SetScoreGameState(EScoreGameState NewState)
{
	if (!HasAuthority()) return;

	CurrentGameState = NewState;

	OnRep_CurrentGameState();
}

void AScoreGameState::OnRep_CurrentGameState()
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);

	switch (CurrentGameState)
	{
	case EScoreGameState::WaitingToStart:
		//UE_LOG(LogTemp, Log, TEXT("STATE: Waiting For Players..."));
		if (PC)
		{
			PC->SetShowMouseCursor(true);

			FInputModeUIOnly InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PC->SetInputMode(InputMode);
		}
		break;

	case EScoreGameState::Ready:
		//UE_LOG(LogTemp, Log, TEXT("STATE: Ready! Countdown Starts."));
		if (HasAuthority()) StartReadyCountdown(); // 서버에서 준비 카운트다운

		if (PC)
		{
			PC->SetShowMouseCursor(false);

			// 게임만 조작 가능
			FInputModeGameOnly InputMode;
			PC->SetInputMode(InputMode);
		}
		break;

	case EScoreGameState::InProgress:
		//UE_LOG(LogTemp, Log, TEXT("STATE: Game Start!"));
		if (HasAuthority()) StartGamePlay(); // 서버에서 게임시작

		if (PC)
		{
			PC->SetShowMouseCursor(false);

			FInputModeGameOnly InputMode;
			PC->SetInputMode(InputMode);
		}
		break;

	case EScoreGameState::GameOver:
		//UE_LOG(LogTemp, Log, TEXT("STATE: Game Over!"));
		if (HasAuthority()) EndGame();

		if (PC)
		{
			PC->SetShowMouseCursor(true);

			// UI만 조작 가능
			FInputModeUIOnly InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PC->SetInputMode(InputMode);
		}
		break;
	}
}

void AScoreGameState::StartReadyCountdown()
{
	//준비 3초 카운트다운 후 OnReadyTimerFinished 실행
	GetWorldTimerManager().SetTimer(
		StateTimerHandle,
		this,
		&AScoreGameState::OnReadyTimerFinished,
		ReadyCountdownTime, 
		false);
}

void AScoreGameState::StartGamePlay()
{
	//5초에 한번 스코어액터 스폰
	GetWorldTimerManager().SetTimer(
		PropSpawnTimerHandle, 
		this,
		&AScoreGameState::SpawnProps, 
		SpawnPropsInterval,
		true);
}

void AScoreGameState::EndGame()
{
	GetWorldTimerManager().ClearTimer(PropSpawnTimerHandle);
	GetWorldTimerManager().ClearTimer(StateTimerHandle);

	//남은 스코어액터 제거
	for (auto& Prop : SpawnedProps)
	{
		if (Prop) Prop->Destroy();
	}
	SpawnedProps.Empty();

	GetWorldTimerManager().SetTimer(
		RestartTimerHandle,
		this,
		&AScoreGameState::ResetGame,
		5.0f,
		false
	);
}

void AScoreGameState::ResetGame()
{
	//플레이어 초기화
	for (APlayerState* PS : PlayerArray)
	{
		if (AScorePlayerState* ScorePS = Cast<AScorePlayerState>(PS))
		{
			ScorePS->ResetPlayerStatus();
		}
	}

	//시간 초기화
	GameRemainingTime = DefaultGameTime;

	// 상태 변경 -> WaitingToStart
	SetScoreGameState(EScoreGameState::WaitingToStart);
}

void AScoreGameState::OnReadyTimerFinished()
{
	SetScoreGameState(EScoreGameState::InProgress);
}

void AScoreGameState::SpawnProps()
{
	//UE_LOG(LogTemp, Warning, TEXT("스코어 스폰 시작"));

	if (SpawnedProps.Num() > 0)
	{
		for (int i = 0; i < SpawnedProps.Num();i++)
		{
			SpawnedProps[i]->Destroy();
		}
		SpawnedProps.Empty();
	}

	if (ScoreActors.Num()>0)
	{
		if (UWorld* world = GetWorld())
		{
			FActorSpawnParameters params;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			for (int i = 0; i < SpawnAmount; i++)
			{
				int32 SelectIndex = FMath::RandRange(0, ScoreActors.Num()-1);

				AScoreActorBase* SpawnedProp = world->SpawnActor<AScoreActorBase>(
					ScoreActors[SelectIndex],
					FindRandomLocation(),
					FRotator::ZeroRotator,
					params
					);
				if (SpawnedProp) {
					//UE_LOG(LogTemp, Warning, TEXT("스코어 스폰 성공"));
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
			//UE_LOG(LogTemp, Log, TEXT("Found Location: %s"), *RandomLocation.Location.ToString());

			return RandomLocation.Location+FVector::UpVector*100.0f;
		}
	}
	return FVector::ZeroVector;
}

void AScoreGameState::CheckAllPlayersReady()
{
	if (!HasAuthority()) return;

	//현재 게임 상태가 '대기 중'이 아니면 무시 
	if (CurrentGameState != EScoreGameState::WaitingToStart)
	{
		return;
	}

	//최소 인원 체크
	if (PlayerArray.Num() < TargetPlayerCount)
	{
		return;
	}

	//모든 플레이어 순회 검사
	bool bAllReady = true;

	for (APlayerState* PS : PlayerArray)
	{
		if (AScorePlayerState* ScorePS = Cast<AScorePlayerState>(PS))
		{
			if (!ScorePS->IsPlayerReady()) // 한 명이라도 준비 안 했으면
			{
				bAllReady = false;
				break;
			}
		}
	}

	//모두 준비되었다면 상태 변경 -> 카운트다운 시작
	if (bAllReady)
	{
		SetScoreGameState(EScoreGameState::Ready);
	}
}
