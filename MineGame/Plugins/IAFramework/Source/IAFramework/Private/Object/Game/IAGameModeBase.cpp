// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Game/IAGameModeBase.h"

AIAGameModeBase::AIAGameModeBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}
