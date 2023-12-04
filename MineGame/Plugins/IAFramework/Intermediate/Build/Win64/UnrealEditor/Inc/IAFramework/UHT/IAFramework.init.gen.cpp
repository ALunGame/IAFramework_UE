// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAFramework_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IAFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IAFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_IAFramework.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IAFramework",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x00704EFC,
				0xC2F18DAD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IAFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IAFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IAFramework(Z_Construct_UPackage__Script_IAFramework, TEXT("/Script/IAFramework"), Z_Registration_Info_UPackage__Script_IAFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x00704EFC, 0xC2F18DAD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
