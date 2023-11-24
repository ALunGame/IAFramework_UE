// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Game/IAGameStateBase.h"

AIAGameStateBase::AIAGameStateBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}
