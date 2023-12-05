// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Game/IAGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAGameTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameTypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameTypes_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAPanelWidget_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EUIPanelType();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIPanelConfig();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameModule;
	static UEnum* EGameModule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameModule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameModule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EGameModule, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EGameModule"));
		}
		return Z_Registration_Info_UEnum_EGameModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EGameModule>()
	{
		return EGameModule_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EGameModule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enumerators[] = {
		{ "EGameModule::Null", (int64)EGameModule::Null },
		{ "EGameModule::Center", (int64)EGameModule::Center },
		{ "EGameModule::HUD", (int64)EGameModule::HUD },
		{ "EGameModule::Timer", (int64)EGameModule::Timer },
		{ "EGameModule::Player", (int64)EGameModule::Player },
		{ "EGameModule::Cache", (int64)EGameModule::Cache },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cache.Comment", "//\xe7\x8e\xa9\xe5\xae\xb6\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "Cache.DisplayName", "\xe7\xbc\x93\xe5\xad\x98\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Cache.Name", "EGameModule::Cache" },
		{ "Cache.ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Center.DisplayName", "\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Center.Name", "EGameModule::Center" },
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x99\xa8\n//\xe6\xa8\xa1\xe7\xbb\x84\xe7\xba\xa6\xe5\xae\x9a, \xe5\xa6\x82\xe6\x9e\x9c\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""DataDriven\xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84UI\xe6\xa1\x86\xe6\x9e\xb6, \xe8\xaf\xb7\xe4\xb8\x80\xe5\xae\x9a\xe8\xa6\x81\xe6\x8a\x8aHUD\xe6\xa8\xa1\xe7\xbb\x84\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UIFrame\xe6\xa1\x86\xe6\x9e\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xa7\x8b\xe7\xbb\x88\xe5\x9c\xa8HUD\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b\n" },
		{ "HUD.Comment", "//\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "HUD.DisplayName", "UI\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "HUD.Name", "EGameModule::HUD" },
		{ "HUD.ToolTip", "\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
		{ "Null.DisplayName", "\xe7\xa9\xba" },
		{ "Null.Name", "EGameModule::Null" },
		{ "Player.Comment", "//\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "Player.DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Player.Name", "EGameModule::Player" },
		{ "Player.ToolTip", "\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Timer.Comment", "//UI\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "Timer.DisplayName", "\xe8\xae\xa1\xe6\x97\xb6\xe5\x99\xa8\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Timer.Name", "EGameModule::Timer" },
		{ "Timer.ToolTip", "UI\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x99\xa8\n\xe6\xa8\xa1\xe7\xbb\x84\xe7\xba\xa6\xe5\xae\x9a, \xe5\xa6\x82\xe6\x9e\x9c\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""DataDriven\xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84UI\xe6\xa1\x86\xe6\x9e\xb6, \xe8\xaf\xb7\xe4\xb8\x80\xe5\xae\x9a\xe8\xa6\x81\xe6\x8a\x8aHUD\xe6\xa8\xa1\xe7\xbb\x84\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UIFrame\xe6\xa1\x86\xe6\x9e\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xa7\x8b\xe7\xbb\x88\xe5\x9c\xa8HUD\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EGameModule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EGameModule",
		"EGameModule",
		Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EGameModule()
	{
		if (!Z_Registration_Info_UEnum_EGameModule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameModule.InnerSingleton, Z_Construct_UEnum_IAFramework_EGameModule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameModule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIPanelType;
	static UEnum* EUIPanelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIPanelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIPanelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IAFramework_EUIPanelType, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("EUIPanelType"));
		}
		return Z_Registration_Info_UEnum_EUIPanelType.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UEnum* StaticEnum<EUIPanelType>()
	{
		return EUIPanelType_StaticEnum();
	}
	struct Z_Construct_UEnum_IAFramework_EUIPanelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enumerators[] = {
		{ "EUIPanelType::StartMenu", (int64)EUIPanelType::StartMenu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//UI\xe7\x95\x8c\xe9\x9d\xa2\xe6\x9e\x9a\xe4\xb8\xbe\n" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
		{ "StartMenu.DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\x8f\x9c\xe5\x8d\x95" },
		{ "StartMenu.Name", "EUIPanelType::StartMenu" },
		{ "ToolTip", "UI\xe7\x95\x8c\xe9\x9d\xa2\xe6\x9e\x9a\xe4\xb8\xbe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		"EUIPanelType",
		"EUIPanelType",
		Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IAFramework_EUIPanelType()
	{
		if (!Z_Registration_Info_UEnum_EUIPanelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIPanelType.InnerSingleton, Z_Construct_UEnum_IAFramework_EUIPanelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIPanelType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIPanelConfig;
class UScriptStruct* FUIPanelConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIPanelConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIPanelConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIPanelConfig, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("UIPanelConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UIPanelConfig.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FUIPanelConfig>()
{
	return FUIPanelConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIPanelConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanelType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanelType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PanelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIPanelConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//UI\xe7\x95\x8c\xe9\x9d\xa2\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
		{ "ToolTip", "UI\xe7\x95\x8c\xe9\x9d\xa2\xe9\x85\x8d\xe7\xbd\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIPanelConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType_MetaData[] = {
		{ "Category", "UIPanelConfig" },
		{ "DisplayName", "\xe7\x95\x8c\xe9\x9d\xa2\xe6\x9e\x9a\xe4\xb8\xbe" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType = { "PanelType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIPanelConfig, PanelType), Z_Construct_UEnum_IAFramework_EUIPanelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType_MetaData)) }; // 1826853664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelClass_MetaData[] = {
		{ "Category", "UIPanelConfig" },
		{ "DisplayName", "\xe7\x95\x8c\xe9\x9d\xa2\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelClass = { "PanelClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIPanelConfig, PanelClass), Z_Construct_UClass_UIAPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIPanelConfig, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIPanelConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_PanelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIPanelConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"UIPanelConfig",
		sizeof(FUIPanelConfig),
		alignof(FUIPanelConfig),
		Z_Construct_UScriptStruct_FUIPanelConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIPanelConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIPanelConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_UIPanelConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIPanelConfig.InnerSingleton, Z_Construct_UScriptStruct_FUIPanelConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIPanelConfig.InnerSingleton;
	}
	void UIAGameTypes::StaticRegisterNativesUIAGameTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAGameTypes);
	UClass* Z_Construct_UClass_UIAGameTypes_NoRegister()
	{
		return UIAGameTypes::StaticClass();
	}
	struct Z_Construct_UClass_UIAGameTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAGameTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAGameTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/IAGameTypes.h" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAGameTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAGameTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAGameTypes_Statics::ClassParams = {
		&UIAGameTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAGameTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAGameTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAGameTypes()
	{
		if (!Z_Registration_Info_UClass_UIAGameTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAGameTypes.OuterSingleton, Z_Construct_UClass_UIAGameTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAGameTypes.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAGameTypes>()
	{
		return UIAGameTypes::StaticClass();
	}
	UIAGameTypes::UIAGameTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAGameTypes);
	UIAGameTypes::~UIAGameTypes() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo[] = {
		{ EGameModule_StaticEnum, TEXT("EGameModule"), &Z_Registration_Info_UEnum_EGameModule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1084954936U) },
		{ EUIPanelType_StaticEnum, TEXT("EUIPanelType"), &Z_Registration_Info_UEnum_EUIPanelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1826853664U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ScriptStructInfo[] = {
		{ FUIPanelConfig::StaticStruct, Z_Construct_UScriptStruct_FUIPanelConfig_Statics::NewStructOps, TEXT("UIPanelConfig"), &Z_Registration_Info_UScriptStruct_UIPanelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIPanelConfig), 234762852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAGameTypes, UIAGameTypes::StaticClass, TEXT("UIAGameTypes"), &Z_Registration_Info_UClass_UIAGameTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAGameTypes), 1750099574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_567468224(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
