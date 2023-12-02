// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/IAObject.h"

#include "Module/IACacheModule.h"

void UIAObject::IARelease()
{
	IIAOO::IARelease();

	//从Root移除
	RemoveFromRoot();
	
	//准备回收资源
	ConditionalBeginDestroy();
}

void UIAObject::SetCacheName(FName InCacheName)
{
	CacheName = InCacheName;
}

FName UIAObject::GetCacheName() const
{
	return CacheName;
}

void UIAObject::Recycle()
{
	UIACommon::Get()->GetCacheModule()->RecycleObject(this);
}
