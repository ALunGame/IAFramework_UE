// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Common/IATypes.h"
#include "Layout/Margin.h"
#include "Widgets/Layout/Anchors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIATypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATypes_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UWealthData();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UWealthData_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EAgreementType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EBaseObjectLife();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EBaseObjectState();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_ECallResult();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_ELayoutLevel();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_ELayoutType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EPanelLucenyType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EPanelShowType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EWealthType();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUINature();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWealthActor();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWealthItem();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWealthObject();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWealthURL();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIATypes::StaticRegisterNativesUIATypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIATypes);
	UClass* Z_Construct_UClass_UIATypes_NoRegister()
	{
		return UIATypes::StaticClass();
	}
	struct Z_Construct_UClass_UIATypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIATypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIATypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\xa1\x86\xe6\x9e\xb6\xe7\xbb\x93\xe6\x9e\x84\n */" },
		{ "IncludePath", "Common/IATypes.h" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe6\xa1\x86\xe6\x9e\xb6\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIATypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIATypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIATypes_Statics::ClassParams = {
		&UIATypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIATypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIATypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIATypes()
	{
		if (!Z_Registration_Info_UClass_UIATypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIATypes.OuterSingleton, Z_Construct_UClass_UIATypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIATypes.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIATypes>()
	{
		return UIATypes::StaticClass();
	}
	UIATypes::UIATypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIATypes);
	UIATypes::~UIATypes() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseObjectLife;
	static UEnum* EBaseObjectLife_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBaseObjectLife.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBaseObjectLife.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EBaseObjectLife, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EBaseObjectLife"));
		}
		return Z_Registration_Info_UEnum_EBaseObjectLife.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EBaseObjectLife>()
	{
		return EBaseObjectLife_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enumerators[] = {
		{ "EBaseObjectLife::None", (int64)EBaseObjectLife::None },
		{ "EBaseObjectLife::Init", (int64)EBaseObjectLife::Init },
		{ "EBaseObjectLife::Loading", (int64)EBaseObjectLife::Loading },
		{ "EBaseObjectLife::Register", (int64)EBaseObjectLife::Register },
		{ "EBaseObjectLife::Enable", (int64)EBaseObjectLife::Enable },
		{ "EBaseObjectLife::Disable", (int64)EBaseObjectLife::Disable },
		{ "EBaseObjectLife::UnRegister", (int64)EBaseObjectLife::UnRegister },
		{ "EBaseObjectLife::UnLoading", (int64)EBaseObjectLife::UnLoading },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\n" },
		{ "Disable.Name", "EBaseObjectLife::Disable" },
		{ "Enable.Name", "EBaseObjectLife::Enable" },
		{ "Init.Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Init.Name", "EBaseObjectLife::Init" },
		{ "Init.ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x8a\xb6\xe6\x80\x81" },
		{ "Loading.Name", "EBaseObjectLife::Loading" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "None.Name", "EBaseObjectLife::None" },
		{ "Register.Name", "EBaseObjectLife::Register" },
		{ "ToolTip", "BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f" },
		{ "UnLoading.Name", "EBaseObjectLife::UnLoading" },
		{ "UnRegister.Name", "EBaseObjectLife::UnRegister" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EBaseObjectLife",
		"EBaseObjectLife",
		Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EBaseObjectLife()
	{
		if (!Z_Registration_Info_UEnum_EBaseObjectLife.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseObjectLife.InnerSingleton, Z_Construct_UEnum_IAFramework_EBaseObjectLife_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBaseObjectLife.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseObjectState;
	static UEnum* EBaseObjectState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBaseObjectState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBaseObjectState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EBaseObjectState, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EBaseObjectState"));
		}
		return Z_Registration_Info_UEnum_EBaseObjectState.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EBaseObjectState>()
	{
		return EBaseObjectState_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enumerators[] = {
		{ "EBaseObjectState::Active", (int64)EBaseObjectState::Active },
		{ "EBaseObjectState::Stable", (int64)EBaseObjectState::Stable },
		{ "EBaseObjectState::Destroy", (int64)EBaseObjectState::Destroy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EBaseObjectState::Active" },
		{ "Comment", "//BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Destroy.Comment", "//\xe7\xa8\xb3\xe5\xae\x9a\n" },
		{ "Destroy.Name", "EBaseObjectState::Destroy" },
		{ "Destroy.ToolTip", "\xe7\xa8\xb3\xe5\xae\x9a" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "Stable.Comment", "//\xe6\xbf\x80\xe6\xb4\xbb\n" },
		{ "Stable.Name", "EBaseObjectState::Stable" },
		{ "Stable.ToolTip", "\xe6\xbf\x80\xe6\xb4\xbb" },
		{ "ToolTip", "BaseObject\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EBaseObjectState",
		"EBaseObjectState",
		Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EBaseObjectState()
	{
		if (!Z_Registration_Info_UEnum_EBaseObjectState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseObjectState.InnerSingleton, Z_Construct_UEnum_IAFramework_EBaseObjectState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBaseObjectState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgreementType;
	static UEnum* EAgreementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAgreementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAgreementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EAgreementType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EAgreementType"));
		}
		return Z_Registration_Info_UEnum_EAgreementType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EAgreementType>()
	{
		return EAgreementType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EAgreementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enumerators[] = {
		{ "EAgreementType::SelfObject", (int64)EAgreementType::SelfObject },
		{ "EAgreementType::OtherObject", (int64)EAgreementType::OtherObject },
		{ "EAgreementType::ClassOtherObject", (int64)EAgreementType::ClassOtherObject },
		{ "EAgreementType::SelfClass", (int64)EAgreementType::SelfClass },
		{ "EAgreementType::OtherClass", (int64)EAgreementType::OtherClass },
		{ "EAgreementType::All", (int64)EAgreementType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "//\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe7\xb1\xbb\xe9\x80\x9a\xe4\xbf\xa1\n" },
		{ "All.Name", "EAgreementType::All" },
		{ "All.ToolTip", "\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe7\xb1\xbb\xe9\x80\x9a\xe4\xbf\xa1" },
		{ "ClassOtherObject.Comment", "//\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
		{ "ClassOtherObject.Name", "EAgreementType::ClassOtherObject" },
		{ "ClassOtherObject.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb9\x8b\xe5\xa4\x96\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
		{ "Comment", "//\xe5\xaf\xb9\xe8\xb1\xa1\xe8\xb0\x83\xe7\x94\xa8\xe5\x8d\x8f\xe8\xae\xae\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "OtherClass.Comment", "//\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
		{ "OtherClass.Name", "EAgreementType::OtherClass" },
		{ "OtherClass.ToolTip", "\xe7\xbb\x99\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
		{ "OtherObject.Comment", "//\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
		{ "OtherObject.Name", "EAgreementType::OtherObject" },
		{ "OtherObject.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
		{ "SelfClass.Comment", "//\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe7\x9b\xb8\xe5\x90\x8c\xe7\xb1\xbb\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1,\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbc\xa0\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x83\xbd\xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe7\xb1\xbb\xe7\x9a\x84,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\x90\x8c\xe7\xb1\xbb\xe5\xb0\xb1\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9a\xe4\xbf\xa1\n" },
		{ "SelfClass.Name", "EAgreementType::SelfClass" },
		{ "SelfClass.ToolTip", "\xe7\xbb\x99\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe7\x9b\xb8\xe5\x90\x8c\xe7\xb1\xbb\xe7\x9a\x84\xe5\x85\xb6\xe4\xbb\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x80\x9a\xe4\xbf\xa1,\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x96\xb9\xe6\xb3\x95\xe8\xa6\x81\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbc\xa0\xe8\xbf\x87\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\x83\xbd\xe6\x98\xaf\xe5\x90\x8c\xe4\xb8\x80\xe7\xb1\xbb\xe7\x9a\x84,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe5\x90\x8c\xe7\xb1\xbb\xe5\xb0\xb1\xe5\xa4\x9a\xe6\xac\xa1\xe9\x80\x9a\xe4\xbf\xa1" },
		{ "SelfObject.Name", "EAgreementType::SelfObject" },
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xb1\xa1\xe8\xb0\x83\xe7\x94\xa8\xe5\x8d\x8f\xe8\xae\xae" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EAgreementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EAgreementType",
		"EAgreementType",
		Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EAgreementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EAgreementType()
	{
		if (!Z_Registration_Info_UEnum_EAgreementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgreementType.InnerSingleton, Z_Construct_UEnum_IAFramework_EAgreementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAgreementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECallResult;
	static UEnum* ECallResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECallResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECallResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_ECallResult, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ECallResult"));
		}
		return Z_Registration_Info_UEnum_ECallResult.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<ECallResult>()
	{
		return ECallResult_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_ECallResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enumerators[] = {
		{ "ECallResult::NoModule", (int64)ECallResult::NoModule },
		{ "ECallResult::LackObject", (int64)ECallResult::LackObject },
		{ "ECallResult::NoFunction", (int64)ECallResult::NoFunction },
		{ "ECallResult::Succeed", (int64)ECallResult::Succeed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\xe8\xb0\x83\xe7\x94\xa8\xe7\xbb\x93\xe6\x9e\x9c,\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbc\x80\xe5\x8f\x91\xe6\x97\xb6\xe8\xaf\xb7\xe7\xa1\xae\xe4\xbf\x9d\xe6\xaf\x8f\xe6\xac\xa1\xe9\x83\xbd\xe8\x83\xbd\xe8\xb0\x83\xe7\x94\xa8\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "LackObject.Comment", "//\xe7\xbc\xba\xe5\xa4\xb1\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "LackObject.Name", "ECallResult::LackObject" },
		{ "LackObject.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "NoFunction.Comment", "//\xe7\xbc\xba\xe5\xa4\xb1\xe9\x83\xa8\xe5\x88\x86\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "NoFunction.Name", "ECallResult::NoFunction" },
		{ "NoFunction.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe9\x83\xa8\xe5\x88\x86\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "NoModule.Name", "ECallResult::NoModule" },
		{ "Succeed.Comment", "//\xe7\xbc\xba\xe5\xa4\xb1\xe6\x96\xb9\xe6\xb3\x95\n" },
		{ "Succeed.Name", "ECallResult::Succeed" },
		{ "Succeed.ToolTip", "\xe7\xbc\xba\xe5\xa4\xb1\xe6\x96\xb9\xe6\xb3\x95" },
		{ "ToolTip", "\xe8\xb0\x83\xe7\x94\xa8\xe7\xbb\x93\xe6\x9e\x9c,\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbc\x80\xe5\x8f\x91\xe6\x97\xb6\xe8\xaf\xb7\xe7\xa1\xae\xe4\xbf\x9d\xe6\xaf\x8f\xe6\xac\xa1\xe9\x83\xbd\xe8\x83\xbd\xe8\xb0\x83\xe7\x94\xa8\xe6\x88\x90\xe5\x8a\x9f" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_ECallResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"ECallResult",
		"ECallResult",
		Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ECallResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_ECallResult()
	{
		if (!Z_Registration_Info_UEnum_ECallResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECallResult.InnerSingleton, Z_Construct_UEnum_IAFramework_ECallResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECallResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WealthItem;
class UScriptStruct* FWealthItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WealthItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WealthItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthItem, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("WealthItem"));
	}
	return Z_Registration_Info_UScriptStruct_WealthItem.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FWealthItem>()
{
	return FWealthItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWealthItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "Comment", "//\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthItem, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "WealthItem" },
		{ "Comment", "//\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthItem, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthItem_Statics::NewProp_ClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"WealthItem",
		sizeof(FWealthItem),
		alignof(FWealthItem),
		Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthItem()
	{
		if (!Z_Registration_Info_UScriptStruct_WealthItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WealthItem.InnerSingleton, Z_Construct_UScriptStruct_FWealthItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WealthItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWealthObject>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthObject cannot be polymorphic unless super FWealthItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WealthObject;
class UScriptStruct* FWealthObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WealthObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WealthObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthObject, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("WealthObject"));
	}
	return Z_Registration_Info_UScriptStruct_WealthObject.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FWealthObject>()
{
	return FWealthObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWealthObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthObject" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthObject, WealthClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthObject_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthObject",
		sizeof(FWealthObject),
		alignof(FWealthObject),
		Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthObject()
	{
		if (!Z_Registration_Info_UScriptStruct_WealthObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WealthObject.InnerSingleton, Z_Construct_UScriptStruct_FWealthObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WealthObject.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWealthActor>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthActor cannot be polymorphic unless super FWealthItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WealthActor;
class UScriptStruct* FWealthActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WealthActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WealthActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthActor, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("WealthActor"));
	}
	return Z_Registration_Info_UScriptStruct_WealthActor.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FWealthActor>()
{
	return FWealthActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWealthActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthActor, WealthClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "WealthActor" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthActor, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_WealthClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthActor_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthActor",
		sizeof(FWealthActor),
		alignof(FWealthActor),
		Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthActor()
	{
		if (!Z_Registration_Info_UScriptStruct_WealthActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WealthActor.InnerSingleton, Z_Construct_UScriptStruct_FWealthActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WealthActor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWealthWidget>() == std::is_polymorphic<FWealthItem>(), "USTRUCT FWealthWidget cannot be polymorphic unless super FWealthItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WealthWidget;
class UScriptStruct* FWealthWidget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WealthWidget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WealthWidget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthWidget, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("WealthWidget"));
	}
	return Z_Registration_Info_UScriptStruct_WealthWidget.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FWealthWidget>()
{
	return FWealthWidget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWealthWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthWidget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthWidget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Category", "WealthWidget" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthWidget, WealthClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthWidget_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		Z_Construct_UScriptStruct_FWealthItem,
		&NewStructOps,
		"WealthWidget",
		sizeof(FWealthWidget),
		alignof(FWealthWidget),
		Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthWidget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthWidget()
	{
		if (!Z_Registration_Info_UScriptStruct_WealthWidget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WealthWidget.InnerSingleton, Z_Construct_UScriptStruct_FWealthWidget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WealthWidget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectWealthEntry;
class UScriptStruct* FObjectWealthEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectWealthEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectWealthEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectWealthEntry, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ObjectWealthEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectWealthEntry.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FObjectWealthEntry>()
{
	return FObjectWealthEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectWealthEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WealthObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Object\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Object\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectWealthEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "ObjectWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectWealthEntry, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject = { "WealthObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectWealthEntry, WealthObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewProp_WealthObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"ObjectWealthEntry",
		sizeof(FObjectWealthEntry),
		alignof(FObjectWealthEntry),
		Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectWealthEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectWealthEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectWealthEntry.InnerSingleton, Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectWealthEntry.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWealthType;
	static UEnum* EWealthType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWealthType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWealthType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EWealthType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EWealthType"));
		}
		return Z_Registration_Info_UEnum_EWealthType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EWealthType>()
	{
		return EWealthType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EWealthType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enumerators[] = {
		{ "EWealthType::Object", (int64)EWealthType::Object },
		{ "EWealthType::Actor", (int64)EWealthType::Actor },
		{ "EWealthType::Widget", (int64)EWealthType::Widget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EWealthType::Actor" },
		{ "Comment", "//UClass\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "Object.Name", "EWealthType::Object" },
		{ "ToolTip", "UClass\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
		{ "Widget.Name", "EWealthType::Widget" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EWealthType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EWealthType",
		"EWealthType",
		Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EWealthType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EWealthType()
	{
		if (!Z_Registration_Info_UEnum_EWealthType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWealthType.InnerSingleton, Z_Construct_UEnum_IAFramework_EWealthType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWealthType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassWealthEntry;
class UScriptStruct* FClassWealthEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassWealthEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassWealthEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassWealthEntry, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ClassWealthEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ClassWealthEntry.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FClassWealthEntry>()
{
	return FClassWealthEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassWealthEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_WealthType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WealthType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WealthClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Class\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Class\xe8\xb5\x84\xe6\xba\x90\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassWealthEntry>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x88\xab\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x88\xab" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType = { "WealthType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassWealthEntry, WealthType), Z_Construct_UEnum_IAFramework_EWealthType, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_MetaData)) }; // 2051323371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassWealthEntry, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassWealthEntry, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "ClassWealthEntry" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassWealthEntry, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass = { "WealthClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassWealthEntry, WealthClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewProp_WealthClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"ClassWealthEntry",
		sizeof(FClassWealthEntry),
		alignof(FClassWealthEntry),
		Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassWealthEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassWealthEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassWealthEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassWealthEntry.InnerSingleton, Z_Construct_UScriptStruct_FClassWealthEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassWealthEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WealthURL;
class UScriptStruct* FWealthURL::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WealthURL.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WealthURL.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWealthURL, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("WealthURL"));
	}
	return Z_Registration_Info_UScriptStruct_WealthURL.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FWealthURL>()
{
	return FWealthURL::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWealthURL_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthKind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WealthKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WealthPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\xe7\xba\xaf\xe8\x8e\xb7\xe5\x8f\x96\xe9\x93\xbe\xe6\x8e\xa5\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93, \xe4\xb8\x8d\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x90\x8c\xe5\xbc\x82\xe6\xad\xa5\xe5\x8a\xa0\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe7\xba\xaf\xe8\x8e\xb7\xe5\x8f\x96\xe9\x93\xbe\xe6\x8e\xa5\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93, \xe4\xb8\x8d\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x90\x8c\xe5\xbc\x82\xe6\xad\xa5\xe5\x8a\xa0\xe8\xbd\xbd" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWealthURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWealthURL>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName = { "WealthName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthURL, WealthName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xa7\x8d\xe7\xb1\xbb\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind = { "WealthKind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthURL, WealthKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath = { "WealthPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthURL, WealthPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData[] = {
		{ "Category", "WealthURL" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr = { "WealthPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWealthURL, WealthPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWealthURL_Statics::NewProp_WealthPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWealthURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"WealthURL",
		sizeof(FWealthURL),
		alignof(FWealthURL),
		Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWealthURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWealthURL()
	{
		if (!Z_Registration_Info_UScriptStruct_WealthURL.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WealthURL.InnerSingleton, Z_Construct_UScriptStruct_FWealthURL_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WealthURL.InnerSingleton;
	}
	void UWealthData::StaticRegisterNativesUWealthData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWealthData);
	UClass* Z_Construct_UClass_UWealthData_NoRegister()
	{
		return UWealthData::StaticClass();
	}
	struct Z_Construct_UClass_UWealthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModuleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModuleType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoObjectData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoObjectData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoActorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoActorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoActorData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoWidgetData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoWidgetData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoWidgetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectWealthData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectWealthData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectWealthData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassWealthData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassWealthData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassWealthData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WealthURL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WealthURL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WealthURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWealthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Common/IATypes.h" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//\xe6\xa8\xa1\xe7\xbb\x84\xe5\x90\x8d\xe5\xad\x97, \xe8\xbf\x99\xe4\xb8\xaa""DataAsset\xe4\xb8\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\xbb\x98\xe8\xae\xa4\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0ModuleName\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\n//\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba\xe5\x88\x99\xe8\xaf\xb4\xe6\x98\x8e\xe8\xaf\xa5""Asset\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8e\xe5\xa4\x9a\xe4\xb8\xaa\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b, \xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0\xe8\xaf\xa5""Asset\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe6\xa8\xa1\xe7\xbb\x84\xe5\x90\x8d\xe5\xad\x97, \xe8\xbf\x99\xe4\xb8\xaa""DataAsset\xe4\xb8\x8b\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe9\xbb\x98\xe8\xae\xa4\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0ModuleName\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\n\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba\xe5\x88\x99\xe8\xaf\xb4\xe6\x98\x8e\xe8\xaf\xa5""Asset\xe4\xbd\xbf\xe7\x94\xa8\xe4\xba\x8e\xe5\xa4\x9a\xe4\xb8\xaa\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b, \xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe6\xb3\xa8\xe5\x86\x8c\xe5\x88\xb0\xe8\xaf\xa5""Asset\xe6\x94\xbe\xe7\xbd\xae\xe7\x9a\x84\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, ModuleType), Z_Construct_UEnum_IAFramework_EGameModule, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType_MetaData)) }; // 769984659
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner = { "AutoObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWealthObject, METADATA_PARAMS(nullptr, 0) }; // 131552998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Object\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Object" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData = { "AutoObjectData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, AutoObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_MetaData)) }; // 131552998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner = { "AutoActorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWealthActor, METADATA_PARAMS(nullptr, 0) }; // 3269834968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""Actor\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84""Actor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData = { "AutoActorData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, AutoActorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_MetaData)) }; // 3269834968
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWealthWidget, METADATA_PARAMS(nullptr, 0) }; // 3450235757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Widget\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84Widget" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData = { "AutoWidgetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, AutoWidgetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_MetaData)) }; // 3450235757
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectWealthEntry, METADATA_PARAMS(nullptr, 0) }; // 1786901652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//Object\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Object\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData = { "ObjectWealthData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, ObjectWealthData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_MetaData)) }; // 1786901652
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_Inner = { "ClassWealthData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClassWealthEntry, METADATA_PARAMS(nullptr, 0) }; // 1043770590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//Class\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Class\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData = { "ClassWealthData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, ClassWealthData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_MetaData)) }; // 1043770590
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_Inner = { "WealthURL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWealthURL, METADATA_PARAMS(nullptr, 0) }; // 3096628451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData[] = {
		{ "Category", "WealthData" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\xe9\x9b\x86\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL = { "WealthURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWealthData, WealthURL), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_MetaData)) }; // 3096628451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWealthData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ModuleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_AutoWidgetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ObjectWealthData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_ClassWealthData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWealthData_Statics::NewProp_WealthURL,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWealthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWealthData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWealthData_Statics::ClassParams = {
		&UWealthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWealthData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWealthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWealthData()
	{
		if (!Z_Registration_Info_UClass_UWealthData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWealthData.OuterSingleton, Z_Construct_UClass_UWealthData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWealthData.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UWealthData>()
	{
		return UWealthData::StaticClass();
	}
	UWealthData::UWealthData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWealthData);
	UWealthData::~UWealthData() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayoutType;
	static UEnum* ELayoutType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELayoutType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_ELayoutType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ELayoutType"));
		}
		return Z_Registration_Info_UEnum_ELayoutType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<ELayoutType>()
	{
		return ELayoutType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_ELayoutType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enumerators[] = {
		{ "ELayoutType::Canvas", (int64)ELayoutType::Canvas },
		{ "ELayoutType::Overlay", (int64)ELayoutType::Overlay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enum_MetaDataParams[] = {
		{ "Canvas.Name", "ELayoutType::Canvas" },
		{ "Comment", "//\xe5\xb8\x83\xe5\xb1\x80\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "Overlay.Comment", "//\xe5\xaf\xb9\xe5\xba\x94""CanvasPanel\n" },
		{ "Overlay.Name", "ELayoutType::Overlay" },
		{ "Overlay.ToolTip", "\xe5\xaf\xb9\xe5\xba\x94""CanvasPanel" },
		{ "ToolTip", "\xe5\xb8\x83\xe5\xb1\x80\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_ELayoutType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"ELayoutType",
		"ELayoutType",
		Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ELayoutType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_ELayoutType()
	{
		if (!Z_Registration_Info_UEnum_ELayoutType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayoutType.InnerSingleton, Z_Construct_UEnum_IAFramework_ELayoutType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELayoutType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayoutLevel;
	static UEnum* ELayoutLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELayoutLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELayoutLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_ELayoutLevel, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ELayoutLevel"));
		}
		return Z_Registration_Info_UEnum_ELayoutLevel.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<ELayoutLevel>()
	{
		return ELayoutLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enumerators[] = {
		{ "ELayoutLevel::Level_0", (int64)ELayoutLevel::Level_0 },
		{ "ELayoutLevel::Level_1", (int64)ELayoutLevel::Level_1 },
		{ "ELayoutLevel::Level_2", (int64)ELayoutLevel::Level_2 },
		{ "ELayoutLevel::Level_3", (int64)ELayoutLevel::Level_3 },
		{ "ELayoutLevel::Level_All", (int64)ELayoutLevel::Level_All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//UI\xe5\xb1\x82\xe7\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b, \xe8\x87\xaa\xe5\xb7\xb1\xe5\x8a\xa8\xe6\x80\x81\xe6\xb7\xbb\xe5\x8a\xa0, \xe4\xb8\x80\xe8\x88\xac""6\xe5\xb1\x82\xe5\xa4\x9f\xe7\x94\xa8\xe4\xba\x86\n" },
		{ "Level_0.Name", "ELayoutLevel::Level_0" },
		{ "Level_1.Name", "ELayoutLevel::Level_1" },
		{ "Level_2.Name", "ELayoutLevel::Level_2" },
		{ "Level_3.Name", "ELayoutLevel::Level_3" },
		{ "Level_All.Name", "ELayoutLevel::Level_All" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "UI\xe5\xb1\x82\xe7\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b, \xe8\x87\xaa\xe5\xb7\xb1\xe5\x8a\xa8\xe6\x80\x81\xe6\xb7\xbb\xe5\x8a\xa0, \xe4\xb8\x80\xe8\x88\xac""6\xe5\xb1\x82\xe5\xa4\x9f\xe7\x94\xa8\xe4\xba\x86" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"ELayoutLevel",
		"ELayoutLevel",
		Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_ELayoutLevel()
	{
		if (!Z_Registration_Info_UEnum_ELayoutLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayoutLevel.InnerSingleton, Z_Construct_UEnum_IAFramework_ELayoutLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELayoutLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPanelShowType;
	static UEnum* EPanelShowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPanelShowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPanelShowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EPanelShowType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EPanelShowType"));
		}
		return Z_Registration_Info_UEnum_EPanelShowType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EPanelShowType>()
	{
		return EPanelShowType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EPanelShowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enumerators[] = {
		{ "EPanelShowType::DoNothing", (int64)EPanelShowType::DoNothing },
		{ "EPanelShowType::HideOther", (int64)EPanelShowType::HideOther },
		{ "EPanelShowType::Reverse", (int64)EPanelShowType::Reverse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\xe9\x9d\xa2\xe6\x9d\xbf\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "DoNothing.Name", "EPanelShowType::DoNothing" },
		{ "HideOther.Comment", "//\xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe5\x85\xb6\xe4\xbb\x96\xe9\x9d\xa2\xe6\x9d\xbf\n" },
		{ "HideOther.Name", "EPanelShowType::HideOther" },
		{ "HideOther.ToolTip", "\xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe5\x85\xb6\xe4\xbb\x96\xe9\x9d\xa2\xe6\x9d\xbf" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "Reverse.Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe5\x85\xb6\xe4\xbb\x96\n" },
		{ "Reverse.Name", "EPanelShowType::Reverse" },
		{ "Reverse.ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe5\x85\xb6\xe4\xbb\x96" },
		{ "ToolTip", "\xe9\x9d\xa2\xe6\x9d\xbf\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EPanelShowType",
		"EPanelShowType",
		Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EPanelShowType()
	{
		if (!Z_Registration_Info_UEnum_EPanelShowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPanelShowType.InnerSingleton, Z_Construct_UEnum_IAFramework_EPanelShowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPanelShowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPanelLucenyType;
	static UEnum* EPanelLucenyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPanelLucenyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPanelLucenyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EPanelLucenyType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EPanelLucenyType"));
		}
		return Z_Registration_Info_UEnum_EPanelLucenyType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EPanelLucenyType>()
	{
		return EPanelLucenyType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enumerators[] = {
		{ "EPanelLucenyType::Lucency", (int64)EPanelLucenyType::Lucency },
		{ "EPanelLucenyType::Translucence", (int64)EPanelLucenyType::Translucence },
		{ "EPanelLucenyType::ImPenetrable", (int64)EPanelLucenyType::ImPenetrable },
		{ "EPanelLucenyType::Pentrate", (int64)EPanelLucenyType::Pentrate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\xe5\xbc\xb9\xe7\xaa\x97\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\n" },
		{ "ImPenetrable.Comment", "//\xe5\x8d\x8a\xe9\x80\x8f\xe6\x98\x8e\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "ImPenetrable.Name", "EPanelLucenyType::ImPenetrable" },
		{ "ImPenetrable.ToolTip", "\xe5\x8d\x8a\xe9\x80\x8f\xe6\x98\x8e\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
		{ "Lucency.Name", "EPanelLucenyType::Lucency" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "Pentrate.Comment", "//\xe4\xbd\x8e\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "Pentrate.Name", "EPanelLucenyType::Pentrate" },
		{ "Pentrate.ToolTip", "\xe4\xbd\x8e\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
		{ "ToolTip", "\xe5\xbc\xb9\xe7\xaa\x97\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6" },
		{ "Translucence.Comment", "//\xe5\x85\xa8\xe9\x80\x8f\xe6\x98\x8e, \xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "Translucence.Name", "EPanelLucenyType::Translucence" },
		{ "Translucence.ToolTip", "\xe5\x85\xa8\xe9\x80\x8f\xe6\x98\x8e, \xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EPanelLucenyType",
		"EPanelLucenyType",
		Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EPanelLucenyType()
	{
		if (!Z_Registration_Info_UEnum_EPanelLucenyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPanelLucenyType.InnerSingleton, Z_Construct_UEnum_IAFramework_EPanelLucenyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPanelLucenyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UINature;
class UScriptStruct* FUINature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UINature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UINature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUINature, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("UINature"));
	}
	return Z_Registration_Info_UScriptStruct_UINature.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FUINature>()
{
	return FUINature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUINature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanelShowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelShowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanelShowType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanelLucenyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelLucenyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanelLucenyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VAlign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\xe9\x9d\xa2\xe6\x9d\xbf\xe5\xb1\x9e\xe6\x80\xa7\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe9\x9d\xa2\xe6\x9d\xbf\xe5\xb1\x9e\xe6\x80\xa7" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUINature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUINature>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//\xe5\xb8\x83\xe5\xb1\x80\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe5\xb8\x83\xe5\xb1\x80\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, LayoutType), Z_Construct_UEnum_IAFramework_ELayoutType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_MetaData)) }; // 3482150685
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//UI\xe5\xb1\x82\xe7\xba\xa7, \xe7\xbb\x99HideOther\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe9\x9d\xa2\xe6\x9d\xbf\xe4\xbd\xbf\xe7\x94\xa8, \xe6\x8c\x87\xe5\xae\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "UI\xe5\xb1\x82\xe7\xba\xa7, \xe7\xbb\x99HideOther\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe9\x9d\xa2\xe6\x9d\xbf\xe4\xbd\xbf\xe7\x94\xa8, \xe6\x8c\x87\xe5\xae\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe7\x9a\x84\xe8\x8c\x83\xe5\x9b\xb4" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel = { "LayoutLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, LayoutLevel), Z_Construct_UEnum_IAFramework_ELayoutLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_MetaData)) }; // 590064464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//\xe9\x9d\xa2\xe6\x9d\xbf\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe9\x9d\xa2\xe6\x9d\xbf\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType = { "PanelShowType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, PanelShowType), Z_Construct_UEnum_IAFramework_EPanelShowType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_MetaData)) }; // 1466793649
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//\xe5\xbc\xb9\xe7\xaa\x97\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "\xe5\xbc\xb9\xe7\xaa\x97\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType = { "PanelLucenyType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, PanelLucenyType), Z_Construct_UEnum_IAFramework_EPanelLucenyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_MetaData)) }; // 305126666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//Canvas\xe9\x94\x9a\xe7\x82\xb9\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Canvas\xe9\x94\x9a\xe7\x82\xb9" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors_MetaData)) }; // 3429000087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//Canvas\xe7\x9a\x84Offset(pos, size)  Overlay\xe7\x9a\x84padding\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Canvas\xe7\x9a\x84Offset(pos, size)  Overlay\xe7\x9a\x84padding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//Overlay\xe7\x9a\x84\xe6\xb0\xb4\xe5\xb9\xb3\xe5\xb8\x83\xe5\xb1\x80\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Overlay\xe7\x9a\x84\xe6\xb0\xb4\xe5\xb9\xb3\xe5\xb8\x83\xe5\xb1\x80" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData[] = {
		{ "Category", "UINature" },
		{ "Comment", "//Overlay\xe7\x9a\x84\xe5\x9e\x82\xe7\x9b\xb4\xe5\xb8\x83\xe5\xb1\x80\n" },
		{ "ModuleRelativePath", "Public/Common/IATypes.h" },
		{ "ToolTip", "Overlay\xe7\x9a\x84\xe5\x9e\x82\xe7\x9b\xb4\xe5\xb8\x83\xe5\xb1\x80" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUINature, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUINature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_LayoutLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelShowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_PanelLucenyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Anchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_Offsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_HAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINature_Statics::NewProp_VAlign,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUINature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"UINature",
		sizeof(FUINature),
		alignof(FUINature),
		Z_Construct_UScriptStruct_FUINature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUINature()
	{
		if (!Z_Registration_Info_UScriptStruct_UINature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UINature.InnerSingleton, Z_Construct_UScriptStruct_FUINature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UINature.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::EnumInfo[] = {
		{ EBaseObjectLife_StaticEnum, TEXT("EBaseObjectLife"), &Z_Registration_Info_UEnum_EBaseObjectLife, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2537721823U) },
		{ EBaseObjectState_StaticEnum, TEXT("EBaseObjectState"), &Z_Registration_Info_UEnum_EBaseObjectState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1231647334U) },
		{ EAgreementType_StaticEnum, TEXT("EAgreementType"), &Z_Registration_Info_UEnum_EAgreementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3778841268U) },
		{ ECallResult_StaticEnum, TEXT("ECallResult"), &Z_Registration_Info_UEnum_ECallResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3555039102U) },
		{ EWealthType_StaticEnum, TEXT("EWealthType"), &Z_Registration_Info_UEnum_EWealthType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2051323371U) },
		{ ELayoutType_StaticEnum, TEXT("ELayoutType"), &Z_Registration_Info_UEnum_ELayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3482150685U) },
		{ ELayoutLevel_StaticEnum, TEXT("ELayoutLevel"), &Z_Registration_Info_UEnum_ELayoutLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 590064464U) },
		{ EPanelShowType_StaticEnum, TEXT("EPanelShowType"), &Z_Registration_Info_UEnum_EPanelShowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1466793649U) },
		{ EPanelLucenyType_StaticEnum, TEXT("EPanelLucenyType"), &Z_Registration_Info_UEnum_EPanelLucenyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305126666U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ScriptStructInfo[] = {
		{ FWealthItem::StaticStruct, Z_Construct_UScriptStruct_FWealthItem_Statics::NewStructOps, TEXT("WealthItem"), &Z_Registration_Info_UScriptStruct_WealthItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWealthItem), 3382983061U) },
		{ FWealthObject::StaticStruct, Z_Construct_UScriptStruct_FWealthObject_Statics::NewStructOps, TEXT("WealthObject"), &Z_Registration_Info_UScriptStruct_WealthObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWealthObject), 131552998U) },
		{ FWealthActor::StaticStruct, Z_Construct_UScriptStruct_FWealthActor_Statics::NewStructOps, TEXT("WealthActor"), &Z_Registration_Info_UScriptStruct_WealthActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWealthActor), 3269834968U) },
		{ FWealthWidget::StaticStruct, Z_Construct_UScriptStruct_FWealthWidget_Statics::NewStructOps, TEXT("WealthWidget"), &Z_Registration_Info_UScriptStruct_WealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWealthWidget), 3450235757U) },
		{ FObjectWealthEntry::StaticStruct, Z_Construct_UScriptStruct_FObjectWealthEntry_Statics::NewStructOps, TEXT("ObjectWealthEntry"), &Z_Registration_Info_UScriptStruct_ObjectWealthEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectWealthEntry), 1786901652U) },
		{ FClassWealthEntry::StaticStruct, Z_Construct_UScriptStruct_FClassWealthEntry_Statics::NewStructOps, TEXT("ClassWealthEntry"), &Z_Registration_Info_UScriptStruct_ClassWealthEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassWealthEntry), 1043770590U) },
		{ FWealthURL::StaticStruct, Z_Construct_UScriptStruct_FWealthURL_Statics::NewStructOps, TEXT("WealthURL"), &Z_Registration_Info_UScriptStruct_WealthURL, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWealthURL), 3096628451U) },
		{ FUINature::StaticStruct, Z_Construct_UScriptStruct_FUINature_Statics::NewStructOps, TEXT("UINature"), &Z_Registration_Info_UScriptStruct_UINature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUINature), 2429838510U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIATypes, UIATypes::StaticClass, TEXT("UIATypes"), &Z_Registration_Info_UClass_UIATypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIATypes), 209670687U) },
		{ Z_Construct_UClass_UWealthData, UWealthData::StaticClass, TEXT("UWealthData"), &Z_Registration_Info_UClass_UWealthData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWealthData), 3745012089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_2883879109(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
