// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/Cache/IACacheUserWidgetNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACacheUserWidgetNode() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheUserWidgetNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheUserWidgetNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACacheUserWidgetNode::StaticRegisterNativesUIACacheUserWidgetNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACacheUserWidgetNode);
	UClass* Z_Construct_UClass_UIACacheUserWidgetNode_NoRegister()
	{
		return UIACacheUserWidgetNode::StaticClass();
	}
	struct Z_Construct_UClass_UIACacheUserWidgetNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACacheUserWidgetNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIACacheNode,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheUserWidgetNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Module/Cache/IACacheUserWidgetNode.h" },
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheUserWidgetNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACacheUserWidgetNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACacheUserWidgetNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACacheUserWidgetNode_Statics::ClassParams = {
		&UIACacheUserWidgetNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIACacheUserWidgetNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheUserWidgetNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACacheUserWidgetNode()
	{
		if (!Z_Registration_Info_UClass_UIACacheUserWidgetNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACacheUserWidgetNode.OuterSingleton, Z_Construct_UClass_UIACacheUserWidgetNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACacheUserWidgetNode.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACacheUserWidgetNode>()
	{
		return UIACacheUserWidgetNode::StaticClass();
	}
	UIACacheUserWidgetNode::UIACacheUserWidgetNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACacheUserWidgetNode);
	UIACacheUserWidgetNode::~UIACacheUserWidgetNode() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheUserWidgetNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheUserWidgetNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACacheUserWidgetNode, UIACacheUserWidgetNode::StaticClass, TEXT("UIACacheUserWidgetNode"), &Z_Registration_Info_UClass_UIACacheUserWidgetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACacheUserWidgetNode), 4047406057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheUserWidgetNode_h_2351302513(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheUserWidgetNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheUserWidgetNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
