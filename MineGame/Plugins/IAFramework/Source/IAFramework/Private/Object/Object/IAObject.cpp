// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Object/IAObject.h"

void UIAObject::IARelease()
{
	IIAOO::IARelease();

	//从Root移除
	RemoveFromRoot();
	
	//准备回收资源
	ConditionalBeginDestroy();
}
