// Fill out your copyright notice in the Description page of Project Settings.

#include "Object/IAUserWidget.h"

#include "Module/IACacheModule.h"

void UIAUserWidget::IARelease()
{
	IIAOO::IARelease();

	//再检查一次从父类移除
	RemoveFromParent();
	//从Root移除
	RemoveFromRoot();
	//准备回收资源
	ConditionalBeginDestroy();
}

void UIAUserWidget::SetCacheName(FName InCacheName)
{
	CacheName = InCacheName;
}

FName UIAUserWidget::GetCacheName() const
{
	return CacheName;
}

void UIAUserWidget::Recycle()
{
	UIACommon::Get()->GetCacheModule()->RecycleWidget(this);
}
