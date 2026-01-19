// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ScoreCharacter.generated.h"

UCLASS()
class KSH_SCOREGAME_API AScoreCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AScoreCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	virtual void OnRep_PlayerState() override;
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Score")
	void OnPlayerStateReady(class AScorePlayerState* NewState);
public:

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UWidgetComponent> ScoreBar = nullptr;


};
