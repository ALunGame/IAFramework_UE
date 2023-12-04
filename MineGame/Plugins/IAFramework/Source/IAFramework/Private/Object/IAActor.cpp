// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/IAActor.h"

#include "Module/IACacheModule.h"

AIAActor::AIAActor()
{
	//PrimaryActorTick.bCanEverTick = false;
}

void AIAActor::IADestroy()
{
	IIAOO::IADestroy();

	GetIAWorld()->DestroyActor(this);
}

void AIAActor::SetCacheName(FName InCacheName)
{
	CacheName = InCacheName;
}

FName AIAActor::GetCacheName() const
{
	return CacheName;
}

void AIAActor::Recycle()
{
	UIACommon::Get()->GetCacheModule()->RecycleActor(this);
}



