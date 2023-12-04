#include "UI/Panel/IAPanelWidget.h"

bool UIAPanelWidget::Initialize()
{
	if (!Super::Initialize()) return false;

	UIProperty.UIName = GetFName();
	
	return true;
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
