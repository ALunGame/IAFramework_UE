// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IAModule.h"

UIAModule::UIAModule()
{
	Init = false;
}

void UIAModule::ModuleInit()
{
	Init = true;
}

void UIAModule::ModuleClear()
{
	Init = false;
}
