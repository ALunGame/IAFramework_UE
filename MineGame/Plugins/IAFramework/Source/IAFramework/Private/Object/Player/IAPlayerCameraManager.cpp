// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Player/IAPlayerCameraManager.h"

AIAPlayerCameraManager::AIAPlayerCameraManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAPlayerCameraManager::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}
