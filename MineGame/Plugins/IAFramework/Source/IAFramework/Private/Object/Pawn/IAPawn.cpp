// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Pawn/IAPawn.h"

AIAPawn::AIAPawn()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAPawn::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}

void AIAPawn::IARelease()
{
	IIAOO::IARelease();

	//能调用这个方法那么一定是注册到了框架,获取的世界一定不为空
	GetIAWorld()->DestroyActor(this);
}

