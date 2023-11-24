// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Actor/IAActor.h"

AIAActor::AIAActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AIAActor::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}

void AIAActor::IARelease()
{
	IIAOO::IARelease();

	GetIAWorld()->DestroyActor(this);
}



