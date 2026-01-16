// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreActor/ScoreActorBase.h"
#include "Character/ScoreCharacter.h"
#include "Framework/ScorePlayerState.h"
#include "Components/SphereComponent.h"


// Sets default values
AScoreActorBase::AScoreActorBase()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	SetRootComponent(Collision);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);


}

// Called when the game starts or when spawned
void AScoreActorBase::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this, &AScoreActorBase::OnActorOverlap);
}

void AScoreActorBase::OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnActorOverlap"));
	if (AScoreCharacter* character = Cast<AScoreCharacter>(OtherActor))
	{
		//UE_LOG(LogTemp, Warning, TEXT("character있음"));
		if (AScorePlayerState* state = Cast<AScorePlayerState>(character->GetPlayerState()))
		{
			//UE_LOG(LogTemp, Warning, TEXT("state있음"));
			state->AddMyScore(ActorScore);

			Destroy();
		}
	}
}


