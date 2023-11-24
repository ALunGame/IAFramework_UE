// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/IAModel.h"

void UIAModel::RegisterObject(IIAOO* ObjectInst)
{
	//如果不重复就添加到模组对象
	if (!ObjectGroup.Contains(ObjectInst->GetObjectName()))
	{
		//添加到对象组
		ObjectGroup.Add(ObjectInst->GetObjectName(), ObjectInst);
		//添加到对象类组
		FName ObjectClassName = ObjectInst->GetClassName();
		if (ObjectClassGroup.Contains(ObjectClassName))
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		else
		{
			TArray<IIAOO*> ObjectArray;
			ObjectClassGroup.Add(ObjectClassName, ObjectArray);
			ObjectClassGroup.Find(ObjectClassName)->Push(ObjectInst);
		}
		//添加对象到激活生命周期组
		ObjectActiveGroup.Push(ObjectInst);
	}
	else
		//有重复注册进行Debug
		IA::Debug() << "Object Repeated --> " << ObjectInst->GetObjectName() << IA::Endl();
}

void UIAModel::ModelTick(float DeltaSeconds)
{
	//运行Tick组的Tick函数
	for (int i = 0; i < ObjectTickGroup.Num(); ++i)
		ObjectTickGroup[i]->IATick(DeltaSeconds);

	//临时保存完成某个周期的对象
	TArray<IIAOO*> TempObjectGroup;
	//循环运行激活生命周期函数
	for (int i = 0; i < ObjectActiveGroup.Num(); ++i)
	{
		//如果激活成功
		if (ObjectActiveGroup[i]->ActiveLife())
			TempObjectGroup.Push(ObjectActiveGroup[i]);
	}
	//将运行完生命周期的对象移出生命周期组,并且将运行Tick运行的对象添加到Tick组
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		ObjectActiveGroup.Remove(TempObjectGroup[i]);
		if (TempObjectGroup[i]->IsAllowTickEvent)
			ObjectTickGroup.Push(TempObjectGroup[i]);
	}


	//执行释放对象函数, 清空释放组
	for (int i = 0; i < ObjectReleaseGroup.Num(); ++i)
		ObjectReleaseGroup[i]->IARelease();
	ObjectReleaseGroup.Empty();

	//清空临时对象组
	TempObjectGroup.Empty();
	//运行销毁对象组的销毁生命周期函数
	for (int i = 0; i < ObjectDestroyGroup.Num(); ++i)
	{
		//如果销毁生命周期执行完毕
		if (ObjectDestroyGroup[i]->DestroyLife())
		{
			//添加对象到释放对象组
			ObjectReleaseGroup.Push(ObjectDestroyGroup[i]);
			//添加对象到临时组
			TempObjectGroup.Push(ObjectDestroyGroup[i]);
			//清除掉该销毁的对象
			ObjectGroup.Remove(ObjectDestroyGroup[i]->GetObjectName());
			ObjectClassGroup.Find(ObjectDestroyGroup[i]->GetClassName())->Remove(ObjectDestroyGroup[i]);
			//如果类对象数组为空
			if (ObjectClassGroup.Find(ObjectDestroyGroup[i]->GetClassName())->Num() == 0)
				ObjectClassGroup.Remove(ObjectDestroyGroup[i]->GetClassName());
		}
	}

	//把销毁的对象从销毁对象组移除
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
		ObjectDestroyGroup.Remove(TempObjectGroup[i]);


	//清空临时对象组
	TempObjectGroup.Empty();
	//处理预销毁对象组, 如果对象进入稳定状态, 就转到临时对象组
	for (int i = 0; i < PreObjectDestroyGroup.Num(); ++i)
	{
		if (PreObjectDestroyGroup[i]->RunState == EBaseObjectState::Stable)
		{
			//添加稳定运行状态的对象到临时对象组
			TempObjectGroup.Push(PreObjectDestroyGroup[i]);
		}
	}
	//从预销毁对象组中清除稳定状态对象
	for (int i = 0; i < TempObjectGroup.Num(); ++i)
	{
		PreObjectDestroyGroup.Remove(TempObjectGroup[i]);
		//添加到销毁对象组
		ObjectDestroyGroup.Push(TempObjectGroup[i]);
		//移除出帧函数组
		ObjectTickGroup.Remove(TempObjectGroup[i]);
	}
}

void UIAModel::DestroyObject(FName ObjectName)
{
	//获取需要销毁的对象
	if (ObjectGroup.Contains(ObjectName))
	{
		IIAOO* TargetObject = *ObjectGroup.Find(ObjectName);
		//如果销毁对象组以及预销毁对象组都没有该对象
		if (!ObjectDestroyGroup.Contains(TargetObject) && !PreObjectDestroyGroup.Contains(TargetObject))
		{
			//如果是稳定状态就添加到ObjectDestroyGroup,如果是激活状态就添加到PreObjectDestroyGroup
			switch (TargetObject->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObject);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObject);
				ObjectTickGroup.Remove(TargetObject);
				break;
			}
		}
	}
}

void UIAModel::DestroyObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//定义获取到的对象数组
	TArray<IIAOO*> TargetObjectGroup;

	//根据协议获取对象
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	//批量销毁对象
	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//如果销毁对象组以及预销毁对象组都没有该对象
		if (!ObjectDestroyGroup.Contains(TargetObjectGroup[i]) && !PreObjectDestroyGroup.Contains(TargetObjectGroup[i]))
		{
			//如果是稳定状态就添加到ObjectDestroyGroup,如果是激活状态就添加到PreObjectDestroyGroup
			switch (TargetObjectGroup[i]->RunState)
			{
			case EBaseObjectState::Active:
				PreObjectDestroyGroup.Push(TargetObjectGroup[i]);
				break;
			case EBaseObjectState::Stable:
				ObjectDestroyGroup.Push(TargetObjectGroup[i]);
				ObjectTickGroup.Remove(TargetObjectGroup[i]);
				break;
			}
		}
	}
}

void UIAModel::EnableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//定义获取到的对象数组
	TArray<IIAOO*> TargetObjectGroup;

	//根据协议获取对象
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//如果这个对象处于稳定与失活状态就运行他的激活状态函数
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Disable)
			TargetObjectGroup[i]->OnEnable();
	}
}

void UIAModel::DisableObject(EAgreementType Agreement, TArray<FName> TargetNameGroup)
{
	//定义获取到的对象数组
	TArray<IIAOO*> TargetObjectGroup;

	//根据协议获取对象
	GetAgreementObject(Agreement, TargetNameGroup, TargetObjectGroup);

	for (int i = 0; i < TargetObjectGroup.Num(); ++i)
	{
		//如果这个对象处于稳定与失活状态就运行他的激活状态函数
		if (TargetObjectGroup[i]->RunState == EBaseObjectState::Stable && TargetObjectGroup[i]->LifeState == EBaseObjectLife::Enable)
			TargetObjectGroup[i]->OnDisable();
	}
}

void UIAModel::GetSelfObject(TArray<FName> TargetNameGroup, TArray<IIAOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
		if (ObjectGroup.Contains(TargetNameGroup[i]))
			TargetObjectGroup.Push(*ObjectGroup.Find(TargetNameGroup[i]));
}

int32 UIAModel::GetOtherObject(TArray<FName> TargetNameGroup, TArray<IIAOO*>& TargetObjectGroup)
{
	for (TMap<FName, IIAOO*>::TIterator It(ObjectGroup); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			//检测名字是否相同, 相同就跳出
			if (TargetNameGroup[i].IsEqual(It->Key))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
			TargetObjectGroup.Push(It->Value);
	}
	//返回全部对象的数量
	return ObjectGroup.Num();
}

int32 UIAModel::GetClassOtherObject(TArray<FName> TargetNameGroup, TArray<IIAOO*>& TargetObjectGroup)
{
	if (!ObjectGroup.Contains(TargetNameGroup[0]))
		return 0;
	//现获取对象类名
	FName ObjectClassName = (*ObjectGroup.Find(TargetNameGroup[0]))->GetClassName();
	//迭代对象类实例数组
	for (TArray<IIAOO*>::TIterator It(*ObjectClassGroup.Find(ObjectClassName)); It; ++It)
	{
		bool IsSame = false;
		for (int i = 0; i < TargetNameGroup.Num(); ++i)
		{
			if ((*It)->GetObjectName().IsEqual(TargetNameGroup[i]))
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
			TargetObjectGroup.Push(*It);
	}
	//返回对象类名对应的对象组的数量
	return (*ObjectClassGroup.Find(ObjectClassName)).Num();
}

void UIAModel::GetSelfClass(TArray<FName> TargetNameGroup, TArray<IIAOO*>& TargetObjectGroup)
{
	for (int i = 0; i < TargetNameGroup.Num(); ++i)
	{
		//如果不包含这个类, 跳到下一个循环
		if(!ObjectClassGroup.Contains(TargetNameGroup[i]))
			continue;
		TargetObjectGroup.Append(*ObjectClassGroup.Find(TargetNameGroup[i]));
	}
}

void UIAModel::GetOtherClass(TArray<FName> TargetNameGroup, TArray<IIAOO*>& TargetObjectGroup)
{
	for (TMap<FName, TArray<IIAOO*>>::TIterator It(ObjectClassGroup); It; ++It)
		if (!TargetNameGroup.Contains(It->Key))
			TargetObjectGroup.Append(It->Value);
}

void UIAModel::GetAll(TArray<IIAOO*>& TargetObjectGroup)
{
	ObjectGroup.GenerateValueArray(TargetObjectGroup);
}

void UIAModel::GetAgreementObject(EAgreementType Agreement, TArray<FName> TargetNameGroup,
	TArray<IIAOO*>& TargetObjectGroup)
{
	switch (Agreement)
	{
	case EAgreementType::SelfObject:
		GetSelfObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherObject:
		GetOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::ClassOtherObject:
		GetClassOtherObject(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::SelfClass:
		GetSelfClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::OtherClass:
		GetOtherClass(TargetNameGroup, TargetObjectGroup);
		break;
	case EAgreementType::All:
		GetAll(TargetObjectGroup);
		break;
	}
}


