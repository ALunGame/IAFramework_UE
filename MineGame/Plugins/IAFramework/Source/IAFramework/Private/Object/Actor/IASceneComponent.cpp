// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/Actor/IASceneComponent.h"

UIASceneComponent::UIASceneComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	//设置允许销毁
	bAllowAnyoneToDestroyMe = true;
}

void UIASceneComponent::IARelease()
{
	IIAOO::IARelease();

	//从组件中删除自己,并标记为准备被gc回收
	DestroyComponent();
}

void UIASceneComponent::BeginPlay()
{
	Super::BeginPlay();

	//自动注册
	RegisterToModule(ModuleType,ObjectName, ClassName);
}

