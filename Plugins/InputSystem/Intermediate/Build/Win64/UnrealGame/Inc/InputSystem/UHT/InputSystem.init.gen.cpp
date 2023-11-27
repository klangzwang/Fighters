// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSystem_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InputSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InputSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_InputSystem.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InputSystem",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0D708E49,
				0x6462743F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InputSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InputSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InputSystem(Z_Construct_UPackage__Script_InputSystem, TEXT("/Script/InputSystem"), Z_Registration_Info_UPackage__Script_InputSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0D708E49, 0x6462743F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
