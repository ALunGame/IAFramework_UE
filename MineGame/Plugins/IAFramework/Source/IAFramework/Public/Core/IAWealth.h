// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAMM.h"
#include "UObject/Object.h"
#include "Engine/StreamableManager.h"
#include "IAWealth.generated.h"

//加载Object节点
struct ObjectSingleLoadNode;
struct ObjectKindLoadNode;

//加载单个Class
struct ClassSingleLoadNode;
struct ClassKindLoadNode;
struct ClassMultiLoadNode;

/**
 * 资源
 */
UCLASS()
class IAFRAMEWORK_API UIAWealth : public UObject, public IIAMM
{
	GENERATED_BODY()

public:

	/*
	* 初始化
	*/
	virtual void WealthInit() {}

	/*
	* 开始游戏调用，在UETick第一帧
	*/
	virtual void WealthBeginPlay();
	
	/*
	* 每帧调用，在UETick第一帧后的其他帧
	*/	
	virtual void WealthTick(float DeltaSeconds);

	//指定资源组
	void AssignData(TArray<UWealthData*>& InWealthData);

	//外部方法单纯获取资源链接
	FWealthURL* GainWealthURL(FName WealthName);
	void GainWealthURL(FName WealthKind, TArray<FWealthURL*>& OutURL);

	//加载Object类型资源接口
	void LoadObjectWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadObjectWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//加载Class类型资源接口
	void LoadClassWealth(FName WealthName, FName ObjectName, FName FunName);
	void LoadClassWealthKind(FName WealthKind, FName ObjectName, FName FunName);

	//创建一个对象实例
	void BuildSingleClassWealth(EWealthType WealthType, FName WealthName, FName ObjectName, FName FunName, FTransform SpawnTransform);

	//创建同资源种类名的对象实例, 同种类名下的每个资源链接创建一个对象实例
	void BuildKindClassWealth(EWealthType WealthType, FName WealthKind, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);

	//创建多个同资源名的对象实例
	void BuildMultiClassWealth(EWealthType WealthType, FName WealthName, int32 Amount, FName ObjectName, FName FunName, TArray<FTransform> SpawnTransforms);

protected:

	//加载器
	FStreamableManager WealthLoader;

	//资源组
	TArray<UWealthData*> WealthData;

	UPROPERTY()
	TArray<UUserWidget*> GCWidgetGroup;

	//加载节点队列
	TArray<ObjectSingleLoadNode*> ObjectSingleLoadStack;
	TArray<ObjectKindLoadNode*> ObjectKindLoadStack;
	TArray<ClassSingleLoadNode*> ClassSingleLoadStack;
	TArray<ClassKindLoadNode*> ClassKindLoadStack;
	TArray<ClassMultiLoadNode*> ClassMultiLoadStack;

protected:

	//获取Object资源结构体
	FObjectWealthEntry* GetObjectSingleEntry(FName WealthName);
	TArray<FObjectWealthEntry*> GetObjectKindEntry(FName WealthKind);

	//获取Class资源结构体
	FClassWealthEntry* GetClassSingleEntry(FName WealthName);
	TArray<FClassWealthEntry*> GetClassKindEntry(FName WealthKind);

	//处理加载单个Object节点的方法
	void DealObjectSingleLoadStack();
	
	//处理批量加载Object节点的方法
	void DealObjectKindLoadStack();
	
	//处理加载单个Class节点的方法
	void DealClassSingleLoadStack();
	
	//处理批量加载Class节点的方法
	void DealClassKindLoadStack();
	
	//处理创建多个对象的方法
	void DealClassMultiLoadStack();

protected:

	//加载UObject反射回调函数
	IAOBJFUNC_TWO(BackObjectWealth, FName, BackName, UObject*, BackWealth);
	IAOBJFUNC_TWO(BackObjectWealthKind, TArray<FName>, BackNames, TArray<UObject*>, BackWealths);
	
	//加载UClass反射回调函数
	IAOBJFUNC_TWO(BackClassWealth, FName, BackName, UClass*, BackWealth);
	IAOBJFUNC_TWO(BackClassWealthKind, TArray<FName>, BackNames, TArray<UClass*>, BackWealths);
	
	//生成对象反射回调函数
	IAOBJFUNC_TWO(BackObjectSingle, FName, BackName, UObject*, BackObject);
	IAOBJFUNC_TWO(BackObjectKind, TArray<FName>, BackNames, TArray<UObject*>, BackObjects);
	IAOBJFUNC_TWO(BackObjectMulti, FName, BackName, TArray<UObject*>, BackObjects);
	
	IAOBJFUNC_TWO(BackActorSingle, FName, BackName, AActor*, BackActor);
	IAOBJFUNC_TWO(BackActorKind, TArray<FName>, BackNames, TArray<AActor*>, BackActors);
	IAOBJFUNC_TWO(BackActorMulti, FName, BackName, TArray<AActor*>, BackActors);
	
	IAOBJFUNC_TWO(BackWidgetSingle, FName, BackName, UUserWidget*, BackWidget);
	IAOBJFUNC_TWO(BackWidgetKind, TArray<FName>, BackNames, TArray<UUserWidget*>, BackWidgets);
	IAOBJFUNC_TWO(BackWidgetMulti, FName, BackName, TArray<UUserWidget*>, BackWidgets);
};
