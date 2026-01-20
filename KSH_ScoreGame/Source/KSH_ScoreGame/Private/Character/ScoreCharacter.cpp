// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ScoreCharacter.h"
#include "Framework/ScorePlayerState.h"
#include "Components/WidgetComponent.h"
#include "UI/ScoreBar.h"
// Sets default values
AScoreCharacter::AScoreCharacter()
{

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ScoreBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("ScoreBar"));
	ScoreBar->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AScoreCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (ScoreBar)
	{
		UScoreBar* ScoreBarWidget = Cast<UScoreBar>(ScoreBar->GetWidget());

		//스코어바 위젯의 오너 설정
		if (ScoreBarWidget)
		{
			ScoreBarWidget->SetOwnerCharacter(this);
		}
	}
	
}


void AScoreCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();


	
	if (AScorePlayerState* PS = GetPlayerState<AScorePlayerState>())
	{
		if (ScoreBar)
		{
			if (UScoreBar* ScoreBarWidget = Cast<UScoreBar>(ScoreBar->GetWidget()))
			{
				ScoreBarWidget->InitializeScoreWidget(PS);
			}
		}
		//플레이어 스테이트가 준비되면 새 스테이트로 연결하는 함수 실행
		OnPlayerStateReady(PS);
	}
}

// Called to bind functionality to input
void AScoreCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AScoreCharacter::OnPlayerStateReady(AScorePlayerState* NewState)
{
	if (ScoreBar)
	{
		//플레이어 스테이트 연결
		Cast<UScoreBar>(ScoreBar->GetUserWidgetObject())->InitializeScoreWidget(NewState);
	}
}



