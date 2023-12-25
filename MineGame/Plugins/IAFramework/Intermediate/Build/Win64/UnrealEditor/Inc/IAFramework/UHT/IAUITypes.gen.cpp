// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/IAUITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAUITypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUITypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUITypes_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EUILayer();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EUIMaskType();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EUIShowRule();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIProperty();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAUITypes::StaticRegisterNativesUIAUITypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAUITypes);
	UClass* Z_Construct_UClass_UIAUITypes_NoRegister()
	{
		return UIAUITypes::StaticClass();
	}
	struct Z_Construct_UClass_UIAUITypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAUITypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUITypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IAUITypes.h" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAUITypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAUITypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAUITypes_Statics::ClassParams = {
		&UIAUITypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAUITypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUITypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAUITypes()
	{
		if (!Z_Registration_Info_UClass_UIAUITypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAUITypes.OuterSingleton, Z_Construct_UClass_UIAUITypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAUITypes.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAUITypes>()
	{
		return UIAUITypes::StaticClass();
	}
	UIAUITypes::UIAUITypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAUITypes);
	UIAUITypes::~UIAUITypes() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUILayer;
	static UEnum* EUILayer_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUILayer.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUILayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EUILayer, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EUILayer"));
		}
		return Z_Registration_Info_UEnum_EUILayer.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EUILayer>()
	{
		return EUILayer_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EUILayer_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enumerators[] = {
		{ "EUILayer::Base", (int64)EUILayer::Base },
		{ "EUILayer::First", (int64)EUILayer::First },
		{ "EUILayer::Second", (int64)EUILayer::Second },
		{ "EUILayer::Third", (int64)EUILayer::Third },
		{ "EUILayer::Top", (int64)EUILayer::Top },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enum_MetaDataParams[] = {
		{ "Base.Name", "EUILayer::Base" },
		{ "Comment", "//UI\xe5\xb1\x82\xe7\xba\xa7\n" },
		{ "First.Comment", "//\xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x80\xe8\x88\xac\xe6\x94\xbe\xe7\xbd\xae\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\n" },
		{ "First.Name", "EUILayer::First" },
		{ "First.ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x80\xe8\x88\xac\xe6\x94\xbe\xe7\xbd\xae\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "Second.Comment", "//\xe7\x94\xb1\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80\n" },
		{ "Second.Name", "EUILayer::Second" },
		{ "Second.ToolTip", "\xe7\x94\xb1\xe4\xb8\xbb\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80" },
		{ "Third.Comment", "//\xe4\xb8\x80\xe7\xba\xa7\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80\n" },
		{ "Third.Name", "EUILayer::Third" },
		{ "Third.ToolTip", "\xe4\xb8\x80\xe7\xba\xa7\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80" },
		{ "ToolTip", "UI\xe5\xb1\x82\xe7\xba\xa7" },
		{ "Top.Comment", "//\xe4\xba\x8c\xe7\xba\xa7\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80\n" },
		{ "Top.Name", "EUILayer::Top" },
		{ "Top.ToolTip", "\xe4\xba\x8c\xe7\xba\xa7\xe7\x95\x8c\xe9\x9d\xa2\xe6\x89\x93\xe5\xbc\x80" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EUILayer_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EUILayer",
		"EUILayer",
		Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUILayer_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EUILayer()
	{
		if (!Z_Registration_Info_UEnum_EUILayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUILayer.InnerSingleton, Z_Construct_UEnum_IAFramework_EUILayer_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUILayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIShowRule;
	static UEnum* EUIShowRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIShowRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIShowRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EUIShowRule, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EUIShowRule"));
		}
		return Z_Registration_Info_UEnum_EUIShowRule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EUIShowRule>()
	{
		return EUIShowRule_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EUIShowRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enumerators[] = {
		{ "EUIShowRule::DoNothing", (int64)EUIShowRule::DoNothing },
		{ "EUIShowRule::Overlay", (int64)EUIShowRule::Overlay },
		{ "EUIShowRule::Overlay_NoNeedBack", (int64)EUIShowRule::Overlay_NoNeedBack },
		{ "EUIShowRule::HideOther", (int64)EUIShowRule::HideOther },
		{ "EUIShowRule::HideOther_NoNeedBack", (int64)EUIShowRule::HideOther_NoNeedBack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//UI\xe6\x98\xbe\xe7\xa4\xba\xe8\xa7\x84\xe5\x88\x99\n" },
		{ "DoNothing.Name", "EUIShowRule::DoNothing" },
		{ "HideOther.Comment", "//\xe8\xa6\x86\xe7\x9b\x96\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88\n" },
		{ "HideOther.Name", "EUIShowRule::HideOther" },
		{ "HideOther.ToolTip", "\xe8\xa6\x86\xe7\x9b\x96\xef\xbc\x8c\xe4\xb8\x8d\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88" },
		{ "HideOther_NoNeedBack.Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe5\x85\xb6\xe4\xbb\x96\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88\n" },
		{ "HideOther_NoNeedBack.Name", "EUIShowRule::HideOther_NoNeedBack" },
		{ "HideOther_NoNeedBack.ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe5\x85\xb6\xe4\xbb\x96\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "Overlay.Comment", "//\xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe5\x85\xb6\xe4\xbb\x96\xe9\x9d\xa2\xe6\x9d\xbf\n" },
		{ "Overlay.Name", "EUIShowRule::Overlay" },
		{ "Overlay.ToolTip", "\xe4\xb8\x8d\xe5\xbd\xb1\xe5\x93\x8d\xe5\x85\xb6\xe4\xbb\x96\xe9\x9d\xa2\xe6\x9d\xbf" },
		{ "Overlay_NoNeedBack.Comment", "//\xe8\xa6\x86\xe7\x9b\x96\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88\n" },
		{ "Overlay_NoNeedBack.Name", "EUIShowRule::Overlay_NoNeedBack" },
		{ "Overlay_NoNeedBack.ToolTip", "\xe8\xa6\x86\xe7\x9b\x96\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8a\xa0\xe5\x85\xa5\xe7\x95\x8c\xe9\x9d\xa2\xe6\xa0\x88" },
		{ "ToolTip", "UI\xe6\x98\xbe\xe7\xa4\xba\xe8\xa7\x84\xe5\x88\x99" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EUIShowRule",
		"EUIShowRule",
		Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EUIShowRule()
	{
		if (!Z_Registration_Info_UEnum_EUIShowRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIShowRule.InnerSingleton, Z_Construct_UEnum_IAFramework_EUIShowRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIShowRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIMaskType;
	static UEnum* EUIMaskType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIMaskType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIMaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EUIMaskType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EUIMaskType"));
		}
		return Z_Registration_Info_UEnum_EUIMaskType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EUIMaskType>()
	{
		return EUIMaskType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EUIMaskType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enumerators[] = {
		{ "EUIMaskType::Lucency", (int64)EUIMaskType::Lucency },
		{ "EUIMaskType::Translucence", (int64)EUIMaskType::Translucence },
		{ "EUIMaskType::ImPenetrable", (int64)EUIMaskType::ImPenetrable },
		{ "EUIMaskType::Pentrate", (int64)EUIMaskType::Pentrate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//UI\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\n" },
		{ "ImPenetrable.Comment", "//\xe5\x8d\x8a\xe9\x80\x8f\xe6\x98\x8e\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "ImPenetrable.Name", "EUIMaskType::ImPenetrable" },
		{ "ImPenetrable.ToolTip", "\xe5\x8d\x8a\xe9\x80\x8f\xe6\x98\x8e\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
		{ "Lucency.Name", "EUIMaskType::Lucency" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "Pentrate.Comment", "//\xe4\xbd\x8e\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "Pentrate.Name", "EUIMaskType::Pentrate" },
		{ "Pentrate.ToolTip", "\xe4\xbd\x8e\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xef\xbc\x8c\xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
		{ "ToolTip", "UI\xe9\x81\xae\xe7\xbd\xa9\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6" },
		{ "Translucence.Comment", "//\xe5\x85\xa8\xe9\x80\x8f\xe6\x98\x8e, \xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f\n" },
		{ "Translucence.Name", "EUIMaskType::Translucence" },
		{ "Translucence.ToolTip", "\xe5\x85\xa8\xe9\x80\x8f\xe6\x98\x8e, \xe4\xb8\x8d\xe8\x83\xbd\xe7\xa9\xbf\xe9\x80\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EUIMaskType",
		"EUIMaskType",
		Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EUIMaskType()
	{
		if (!Z_Registration_Info_UEnum_EUIMaskType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIMaskType.InnerSingleton, Z_Construct_UEnum_IAFramework_EUIMaskType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIMaskType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIProperty;
class UScriptStruct* FUIProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIProperty, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("UIProperty"));
	}
	return Z_Registration_Info_UScriptStruct_UIProperty.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FUIProperty>()
{
	return FUIProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_UILayer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UILayer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UILayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPanelShowRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPanelShowRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPanelShowRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UIMaskType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMaskType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UIMaskType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\xe9\x9d\xa2\xe6\x9d\xbf\xe5\xb1\x9e\xe6\x80\xa7\n" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "ToolTip", "\xe9\x9d\xa2\xe6\x9d\xbf\xe5\xb1\x9e\xe6\x80\xa7" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIProperty>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer_MetaData[] = {
		{ "Category", "UIProperty" },
		{ "Comment", "//UI\xe5\xb1\x82\xe7\xba\xa7\n" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "ToolTip", "UI\xe5\xb1\x82\xe7\xba\xa7" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer = { "UILayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIProperty, UILayer), Z_Construct_UEnum_IAFramework_EUILayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer_MetaData)) }; // 4199599475
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule_MetaData[] = {
		{ "Category", "UIProperty" },
		{ "Comment", "//UI\xe9\xbb\x98\xe8\xae\xa4\xe6\x98\xbe\xe7\xa4\xba\xe8\xa7\x84\xe5\x88\x99\n" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "ToolTip", "UI\xe9\xbb\x98\xe8\xae\xa4\xe6\x98\xbe\xe7\xa4\xba\xe8\xa7\x84\xe5\x88\x99" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule = { "DefaultPanelShowRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIProperty, DefaultPanelShowRule), Z_Construct_UEnum_IAFramework_EUIShowRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule_MetaData)) }; // 428539520
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType_MetaData[] = {
		{ "Category", "UIProperty" },
		{ "Comment", "//UI\xe6\x98\xbe\xe7\xa4\xba\xe9\xbb\x98\xe8\xae\xa4\xe9\x81\xae\xe7\xbd\xa9\n" },
		{ "ModuleRelativePath", "Public/UI/IAUITypes.h" },
		{ "ToolTip", "UI\xe6\x98\xbe\xe7\xa4\xba\xe9\xbb\x98\xe8\xae\xa4\xe9\x81\xae\xe7\xbd\xa9" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType = { "UIMaskType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIProperty, UIMaskType), Z_Construct_UEnum_IAFramework_EUIMaskType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType_MetaData)) }; // 148761019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UILayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_DefaultPanelShowRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIProperty_Statics::NewProp_UIMaskType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"UIProperty",
		sizeof(FUIProperty),
		alignof(FUIProperty),
		Z_Construct_UScriptStruct_FUIProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_UIProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIProperty.InnerSingleton, Z_Construct_UScriptStruct_FUIProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIProperty.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::EnumInfo[] = {
		{ EUILayer_StaticEnum, TEXT("EUILayer"), &Z_Registration_Info_UEnum_EUILayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4199599475U) },
		{ EUIShowRule_StaticEnum, TEXT("EUIShowRule"), &Z_Registration_Info_UEnum_EUIShowRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 428539520U) },
		{ EUIMaskType_StaticEnum, TEXT("EUIMaskType"), &Z_Registration_Info_UEnum_EUIMaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 148761019U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ScriptStructInfo[] = {
		{ FUIProperty::StaticStruct, Z_Construct_UScriptStruct_FUIProperty_Statics::NewStructOps, TEXT("UIProperty"), &Z_Registration_Info_UScriptStruct_UIProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIProperty), 3345058919U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAUITypes, UIAUITypes::StaticClass, TEXT("UIAUITypes"), &Z_Registration_Info_UClass_UIAUITypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAUITypes), 803489246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_3406246193(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
