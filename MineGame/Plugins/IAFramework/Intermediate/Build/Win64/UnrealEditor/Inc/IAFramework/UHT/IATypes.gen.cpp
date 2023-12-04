// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Common/IATypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIATypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATypes_NoRegister();
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
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIATypes, UIATypes::StaticClass, TEXT("UIATypes"), &Z_Registration_Info_UClass_UIATypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIATypes), 209670687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_3517290071(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IATypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
