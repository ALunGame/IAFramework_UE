// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/UI/IAHUD.h"

AIAHUD::AIAHUD()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAHUD::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}
