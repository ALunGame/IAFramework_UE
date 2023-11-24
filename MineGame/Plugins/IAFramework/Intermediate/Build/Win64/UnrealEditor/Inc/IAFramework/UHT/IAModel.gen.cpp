// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Core/IAModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAMM_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModel();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAModel::StaticRegisterNativesUIAModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAModel);
	UClass* Z_Construct_UClass_UIAModel_NoRegister()
	{
		return UIAModel::StaticClass();
	}
	struct Z_Construct_UClass_UIAModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe6\x95\xb0\xe6\x8d\xae\xe6\xa8\xa1\xe5\x9e\x8b\n */" },
		{ "IncludePath", "Core/IAModel.h" },
		{ "ModuleRelativePath", "Public/Core/IAModel.h" },
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe6\xa8\xa1\xe5\x9e\x8b" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIAModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAMM_NoRegister, (int32)VTABLE_OFFSET(UIAModel, IIAMM), false },  // 3942511474
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAModel_Statics::ClassParams = {
		&UIAModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAModel()
	{
		if (!Z_Registration_Info_UClass_UIAModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAModel.OuterSingleton, Z_Construct_UClass_UIAModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAModel.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAModel>()
	{
		return UIAModel::StaticClass();
	}
	UIAModel::UIAModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAModel);
	UIAModel::~UIAModel() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAModel, UIAModel::StaticClass, TEXT("UIAModel"), &Z_Registration_Info_UClass_UIAModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAModel), 1854070049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAModel_h_3015603183(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IAModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
