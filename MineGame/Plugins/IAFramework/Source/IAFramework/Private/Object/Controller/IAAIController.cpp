// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Controller/IAAIController.h"

AIAAIController::AIAAIController()
{

	PrimaryActorTick.bCanEverTick = false;
}

void AIAAIController::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}


