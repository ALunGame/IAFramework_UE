// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object/IAUserWidget.h"
#include "UI/IAUITypes.h"
#include "IAPanelWidget.generated.h"

class UCanvasPanelSlot;
/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAPanelWidget : public UIAUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FUIProperty UIProperty;

public:

	void InitData(EUIPanelType InPanelType);

	EUIPanelType GetPanelType();

	void ResetPanelOffset();

	//UI面板生命周期
	virtual void Awake();		//初始化
	virtual void Show();		//显示
	virtual void Hide();		//隐藏
	virtual void Destroy();		//销毁

	UFUNCTION(BlueprintCallable, Category="IA", meta=(DisplayName = "关闭自身"))
	void HideSelf();

	//蓝图重写
	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "当初始化界面时"))
	void OnAwake();  
	
	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "当显示界面时"))
	void OnShow(); 

	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "当隐藏界面时"))
	void OnHide();  

	UFUNCTION(BlueprintImplementableEvent, Category="IA", meta=(DisplayName = "当销毁界面时"))
	void OnDestroy();  

	//动画回调函数
	UFUNCTION(BlueprintImplementableEvent)
	float DisplayEnterMovie();

	UFUNCTION(BlueprintImplementableEvent)
	float DisplayLeaveMovie();

		
#if WITH_EDITOR
	//属性修改方法
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:

	//界面枚举
	EUIPanelType PanelType;
	
};
