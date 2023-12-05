// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAUITypes.h"
#include "Engine/DataTable.h"
#include "Module/IAModule.h"
#include "IAUIModule.generated.h"


class UIAUIPanelConfig;
class UCanvasPanel;
class UIAPanelWidget;
class UIARootWidget;
class UImage;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIAUIModule : public UIAModule
{
	GENERATED_BODY()

public:
	
	//UI根
	UPROPERTY(EditAnywhere, Category = "IA")
	TSubclassOf<UIARootWidget> UIRootWidgetClass;

	UPROPERTY(EditAnywhere, Category = "IA")
	UIAUIPanelConfig* UIPanelConfig;

public:

	virtual void ModuleInit() override;

	void ShowPanel(EUIPanelType InPanelType);

	void HidePanel(EUIPanelType InPanelType);

	void HideAllPanels();
	
	TSharedPtr<UIARootWidget> GeRootWidget();

	FUIPanelConfig* GetUIPanelConfig(EUIPanelType InPanelType) const;

#if WITH_EDITOR
	//属性修改方法
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	
	TSharedPtr<UIARootWidget> RootWidget;
	
	//保存Canvas控件
	UPROPERTY()
	TMap<EUIPanelType,UIAPanelWidget*> ActivePanels;
	UPROPERTY()
	TMap<EUIPanelType,UIAPanelWidget*> HidePanels;
	
	//界面栈
	UPROPERTY()
	TArray<UIAPanelWidget*> PanelStack;

private:

	UIAPanelWidget* GetOrCreatePanel(FUIPanelConfig* InPanelCfg);
	
	void DealShowPanel(UIAPanelWidget* Panel, EUIShowRule ShowRule);

	void DealHidePanel(UIAPanelWidget* Panel);

	void DealMask(UCanvasPanel* LayerCanvas, EUIMaskType UIMaskType);
};
