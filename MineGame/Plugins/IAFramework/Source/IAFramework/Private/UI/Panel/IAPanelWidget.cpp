#include "UI/Panel/IAPanelWidget.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "UI/IAUIModule.h"
#include "UI/Panel/IARootWidget.h"

void UIAPanelWidget::InitData(EUIPanelType InPanelType)
{
	PanelType = InPanelType;
}

EUIPanelType UIAPanelWidget::GetPanelType()
{
	return PanelType;
}

void UIAPanelWidget::ResetPanelOffset()
{
	//添加UI面板到父控件
	UCanvasPanelSlot* PanelSlot = UIACommon::Get()->GetUIModule()->GeRootWidget()->GetLayerCanvas(UIProperty.UILayer)->AddChildToCanvas(this);
	PanelSlot->SetAnchors(FAnchors(0, 0, 1, 1));
	PanelSlot->SetOffsets(FMargin(0, 0, 0, 0));
}

void UIAPanelWidget::Awake()
{
}

void UIAPanelWidget::Show()
{
}

void UIAPanelWidget::Hide()
{
}

void UIAPanelWidget::Destroy()
{
}

#if WITH_EDITOR

void UIAPanelWidget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	// if (PropertyChangedEvent.MemberProperty)
	// {
	// 	if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UIAPanelWidget, UIProperty))
	// 	{
	// 		//UIProperty.UIName = FName(GetFName().GetPlainNameString());
	// 		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::White, GetFName().GetPlainNameString());
	// 	}
	// }
}

#endif
