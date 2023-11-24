// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAMM.h"
#include "UObject/Object.h"
#include "IAMessage.generated.h"

/**
 * 消息
 */
UCLASS()
class IAFRAMEWORK_API UIAMessage : public UObject, public IIAMM
{
	GENERATED_BODY()

public:

	//事件队列
	IAMsgQuene* MsgQuene;

public:
	
	UIAMessage();

	/*
	* 初始化
	*/
	virtual void MessageInit();

	/*
	 * 开始游戏调用，在UETick第一帧
	 */	
	virtual void MessageBeginPlay();

	/*
	* 每帧调用，在UETick第一帧后的其他帧
	*/	
	virtual void MessageTick(float DeltaSeconds);

	//注册调用方法
	template<typename RetType, typename... VarTypes>
	IACallHandle<RetType, VarTypes...> RegisterCallPort(FName CallName);

	//注册执行方法
	template<typename RetType, typename... VarTypes>
	IAFunHandle RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun);
};

template <typename RetType, typename ... VarTypes>
IACallHandle<RetType, VarTypes...> UIAMessage::RegisterCallPort(FName CallName)
{
	return MsgQuene->RegisterCallPort<RetType, VarTypes...>(CallName);
}

template <typename RetType, typename ... VarTypes>
IAFunHandle UIAMessage::RegisterFunPort(FName CallName, TFunction<RetType(VarTypes...)> InsFun)
{
	return MsgQuene->RegisterFunPort<RetType, VarTypes...>(CallName, InsFun);
}
