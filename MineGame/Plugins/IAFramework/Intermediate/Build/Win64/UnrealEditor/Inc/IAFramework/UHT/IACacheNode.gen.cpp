// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/Cache/IACacheNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACacheNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACacheNode::StaticRegisterNativesUIACacheNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACacheNode);
	UClass* Z_Construct_UClass_UIACacheNode_NoRegister()
	{
		return UIACacheNode::StaticClass();
	}
	struct Z_Construct_UClass_UIACacheNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACacheNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Module/Cache/IACacheNode.h" },
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACacheNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACacheNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACacheNode_Statics::ClassParams = {
		&UIACacheNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIACacheNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACacheNode()
	{
		if (!Z_Registration_Info_UClass_UIACacheNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACacheNode.OuterSingleton, Z_Construct_UClass_UIACacheNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACacheNode.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACacheNode>()
	{
		return UIACacheNode::StaticClass();
	}
	UIACacheNode::UIACacheNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACacheNode);
	UIACacheNode::~UIACacheNode() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACacheNode, UIACacheNode::StaticClass, TEXT("UIACacheNode"), &Z_Registration_Info_UClass_UIACacheNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACacheNode), 4202095276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheNode_h_1440875552(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
