// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Panel/IARootWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

bool UIARootWidget::Initialize()
{
	if (!Super::Initialize()) return false;

	//添加到视图
	AddToViewport();

	//获取根节点
	RootCanvas = Cast<UCanvasPanel>(GetRootWidget());
	RootCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	//创建层级
	CreateLayerCanvas(EUILayer::Base,0);
	CreateLayerCanvas(EUILayer::First,100);
	CreateLayerCanvas(EUILayer::Second,200);
	CreateLayerCanvas(EUILayer::Third,300);
	CreateLayerCanvas(EUILayer::Top,400);
	
	return true;
}

UCanvasPanel* UIARootWidget::GetRootCanvas() const
{
	return RootCanvas;
}

UCanvasPanel* UIARootWidget::GetLayerCanvas(EUILayer Layer)
{
	if (!LayerCanvas.Contains(Layer))
	{
		IA::Error() << "获取层级Canvas失败，没有对应层级" << IA::GetEnumValueAsString(Layer) << IA::Endl();
		return nullptr;
	}

	return LayerCanvas[Layer];
}

void UIARootWidget::CreateLayerCanvas(EUILayer InLayer, int InZOrder)
{
	UCanvasPanel* InstCanvas   = NewObject<UCanvasPanel>(this,UCanvasPanel::StaticClass());
	UCanvasPanelSlot* InstSlot = RootCanvas->AddChildToCanvas(InstCanvas);
	InstSlot->SetZOrder(InZOrder);
	InstCanvas->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	InstSlot->SetAnchors(FAnchors(0,0,1,1));
	InstSlot->SetOffsets(FMargin(0,0,0,0));
	
	LayerCanvas.Add(InLayer, InstCanvas);
}
