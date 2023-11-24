// Fill out your copyright notice in the Description page of Project Settings.

#include "Object/UI/IAUserWidget.h"

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
