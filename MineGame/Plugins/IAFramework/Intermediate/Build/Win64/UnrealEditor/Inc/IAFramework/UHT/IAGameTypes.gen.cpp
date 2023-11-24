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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameTypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAGameTypes_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
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
		{ "EGameModule::Player", (int64)EGameModule::Player },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IAFramework_EGameModule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.DisplayName", "\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Center.Name", "EGameModule::Center" },
		{ "Comment", "/************************************************************************///\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x99\xa8\n//\xe6\xa8\xa1\xe7\xbb\x84\xe7\xba\xa6\xe5\xae\x9a, \xe5\xa6\x82\xe6\x9e\x9c\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""DataDriven\xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84UI\xe6\xa1\x86\xe6\x9e\xb6, \xe8\xaf\xb7\xe4\xb8\x80\xe5\xae\x9a\xe8\xa6\x81\xe6\x8a\x8aHUD\xe6\xa8\xa1\xe7\xbb\x84\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UIFrame\xe6\xa1\x86\xe6\x9e\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xa7\x8b\xe7\xbb\x88\xe5\x9c\xa8HUD\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b\n" },
		{ "HUD.Comment", "//\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "HUD.DisplayName", "UI\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "HUD.Name", "EGameModule::HUD" },
		{ "HUD.ToolTip", "\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/Game/IAGameTypes.h" },
		{ "Null.DisplayName", "\xe7\xa9\xba" },
		{ "Null.Name", "EGameModule::Null" },
		{ "Player.Comment", "//UI\xe6\xa8\xa1\xe7\xbb\x84, \xe7\xba\xa6\xe5\xae\x9a\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UI\xe6\xa1\x86\xe6\x9e\xb6\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe5\xba\x8f\xe5\x8f\xb7""1\xe5\x8e\xbb\xe8\x8e\xb7\xe5\x8f\x96HUD\xe6\xa8\xa1\xe7\xbb\x84, \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8UI\xe6\xa1\x86\xe6\x9e\xb6, \xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xbc\xba\xe5\x88\xb6\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d\n" },
		{ "Player.DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\xa8\xa1\xe7\xbb\x84" },
		{ "Player.Name", "EGameModule::Player" },
		{ "Player.ToolTip", "UI\xe6\xa8\xa1\xe7\xbb\x84, \xe7\xba\xa6\xe5\xae\x9a\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UI\xe6\xa1\x86\xe6\x9e\xb6\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe5\xba\x8f\xe5\x8f\xb7""1\xe5\x8e\xbb\xe8\x8e\xb7\xe5\x8f\x96HUD\xe6\xa8\xa1\xe7\xbb\x84, \xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8UI\xe6\xa1\x86\xe6\x9e\xb6, \xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xbc\xba\xe5\x88\xb6\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d" },
		{ "ToolTip", "********************************************************************//\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8d\xe8\x83\xbd\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa9\xb1\xe5\x8a\xa8\xe5\x99\xa8\n//\xe6\xa8\xa1\xe7\xbb\x84\xe7\xba\xa6\xe5\xae\x9a, \xe5\xa6\x82\xe6\x9e\x9c\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""DataDriven\xe6\x9c\xac\xe8\xba\xab\xe7\x9a\x84UI\xe6\xa1\x86\xe6\x9e\xb6, \xe8\xaf\xb7\xe4\xb8\x80\xe5\xae\x9a\xe8\xa6\x81\xe6\x8a\x8aHUD\xe6\xa8\xa1\xe7\xbb\x84\xe6\x94\xbe\xe5\x9c\xa8\xe7\xac\xac\xe4\xba\x8c\xe4\xbd\x8d, UIFrame\xe6\xa1\x86\xe6\x9e\xb6\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe5\xa7\x8b\xe7\xbb\x88\xe5\x9c\xa8HUD\xe6\xa8\xa1\xe7\xbb\x84\xe4\xb8\x8b" },
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
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo[] = {
		{ EGameModule_StaticEnum, TEXT("EGameModule"), &Z_Registration_Info_UEnum_EGameModule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1814171180U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAGameTypes, UIAGameTypes::StaticClass, TEXT("UIAGameTypes"), &Z_Registration_Info_UClass_UIAGameTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAGameTypes), 1750099574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_1240743546(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Game_IAGameTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
