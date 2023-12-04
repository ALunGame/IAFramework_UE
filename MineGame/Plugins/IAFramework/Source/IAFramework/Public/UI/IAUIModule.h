// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAUITypes.h"
#include "Module/IAModule.h"
#include "IAUIModule.generated.h"


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

public:

	virtual void ModuleInit() override;

	void ShowPanel(FName PanelName);

	void HidePanel(FName PanelName);

	void HideAllPanels();
	
	TSharedPtr<UIARootWidget> GeRootWidget();

private:
	
	TSharedPtr<UIARootWidget> RootWidget;
	
	//保存Canvas控件
	UPROPERTY()
	TMap<FName,UIAPanelWidget*> ActivePanels;
	UPROPERTY()
	TMap<FName,UIAPanelWidget*> HidePanels;
	
	//界面栈
	UPROPERTY()
	TArray<UIAPanelWidget*> PanelStack;

private:

	UIAPanelWidget* GetOrCreatePanel(FName PanelName);
	
	void DealShowPanel(UIAPanelWidget* Panel, EUIShowRule ShowRule);

	void DealHidePanel(UIAPanelWidget* Panel);

	void DealMask(UCanvasPanel* LayerCanvas, EUIMaskType UIMaskType);
};
