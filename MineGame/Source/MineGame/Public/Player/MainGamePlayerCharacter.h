// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainGamePlayerCharacter.generated.h"

class AMainGamePlayerController;

UCLASS()
class MINEGAME_API AMainGamePlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	/*
	* 当前控制器
	*/
	AMainGamePlayerController* MineController;

public:
	// Sets default values for this character's properties
	AMainGamePlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
