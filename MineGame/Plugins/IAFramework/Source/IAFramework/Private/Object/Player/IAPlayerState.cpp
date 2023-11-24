// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Player/IAPlayerState.h"

AIAPlayerState::AIAPlayerState()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAPlayerState::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}
