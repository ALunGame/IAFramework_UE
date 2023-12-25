// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MainGamePlayerCharacter.h"


// Sets default values
AMainGamePlayerCharacter::AMainGamePlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMainGamePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainGamePlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMainGamePlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

