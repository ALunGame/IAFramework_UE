// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Level/IALevelScriptActor.h"

AIALevelScriptActor::AIALevelScriptActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIALevelScriptActor::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}


