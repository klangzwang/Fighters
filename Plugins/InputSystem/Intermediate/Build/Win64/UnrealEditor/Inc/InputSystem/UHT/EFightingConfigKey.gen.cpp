// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/EFightingConfigKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFightingConfigKey() {}
// Cross Module References
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EFightingConfigKey();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFightingConfigKey;
	static UEnum* EFightingConfigKey_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFightingConfigKey.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFightingConfigKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputSystem_EFightingConfigKey, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("EFightingConfigKey"));
		}
		return Z_Registration_Info_UEnum_EFightingConfigKey.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UEnum* StaticEnum<EFightingConfigKey>()
	{
		return EFightingConfigKey_StaticEnum();
	}
	struct Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enumerators[] = {
		{ "EFightingConfigKey::Dir_U", (int64)EFightingConfigKey::Dir_U },
		{ "EFightingConfigKey::Dir_D", (int64)EFightingConfigKey::Dir_D },
		{ "EFightingConfigKey::Dir_L", (int64)EFightingConfigKey::Dir_L },
		{ "EFightingConfigKey::Dir_R", (int64)EFightingConfigKey::Dir_R },
		{ "EFightingConfigKey::LP", (int64)EFightingConfigKey::LP },
		{ "EFightingConfigKey::HP", (int64)EFightingConfigKey::HP },
		{ "EFightingConfigKey::LK", (int64)EFightingConfigKey::LK },
		{ "EFightingConfigKey::HK", (int64)EFightingConfigKey::HK },
		{ "EFightingConfigKey::LP_HP", (int64)EFightingConfigKey::LP_HP },
		{ "EFightingConfigKey::LP_LK", (int64)EFightingConfigKey::LP_LK },
		{ "EFightingConfigKey::LP_HK", (int64)EFightingConfigKey::LP_HK },
		{ "EFightingConfigKey::HP_LK", (int64)EFightingConfigKey::HP_LK },
		{ "EFightingConfigKey::HP_HK", (int64)EFightingConfigKey::HP_HK },
		{ "EFightingConfigKey::LK_HK", (int64)EFightingConfigKey::LK_HK },
		{ "EFightingConfigKey::LP_HP_LK", (int64)EFightingConfigKey::LP_HP_LK },
		{ "EFightingConfigKey::LP_HP_HK", (int64)EFightingConfigKey::LP_HP_HK },
		{ "EFightingConfigKey::LP_LK_HK", (int64)EFightingConfigKey::LP_LK_HK },
		{ "EFightingConfigKey::HP_LK_HK", (int64)EFightingConfigKey::HP_LK_HK },
		{ "EFightingConfigKey::LP_HP_LK_HK", (int64)EFightingConfigKey::LP_HP_LK_HK },
		{ "EFightingConfigKey::REC", (int64)EFightingConfigKey::REC },
		{ "EFightingConfigKey::PLAY", (int64)EFightingConfigKey::PLAY },
		{ "EFightingConfigKey::REPEAT", (int64)EFightingConfigKey::REPEAT },
		{ "EFightingConfigKey::PROVOCATION", (int64)EFightingConfigKey::PROVOCATION },
		{ "EFightingConfigKey::MAX", (int64)EFightingConfigKey::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enum_MetaDataParams[] = {
		{ "Dir_D.Name", "EFightingConfigKey::Dir_D" },
		{ "Dir_L.Name", "EFightingConfigKey::Dir_L" },
		{ "Dir_R.Name", "EFightingConfigKey::Dir_R" },
		{ "Dir_U.Name", "EFightingConfigKey::Dir_U" },
		{ "HK.Name", "EFightingConfigKey::HK" },
		{ "HP.Name", "EFightingConfigKey::HP" },
		{ "HP_HK.Name", "EFightingConfigKey::HP_HK" },
		{ "HP_LK.Name", "EFightingConfigKey::HP_LK" },
		{ "HP_LK_HK.Name", "EFightingConfigKey::HP_LK_HK" },
		{ "LK.Name", "EFightingConfigKey::LK" },
		{ "LK_HK.Name", "EFightingConfigKey::LK_HK" },
		{ "LP.Name", "EFightingConfigKey::LP" },
		{ "LP_HK.Name", "EFightingConfigKey::LP_HK" },
		{ "LP_HP.Name", "EFightingConfigKey::LP_HP" },
		{ "LP_HP_HK.Name", "EFightingConfigKey::LP_HP_HK" },
		{ "LP_HP_LK.Name", "EFightingConfigKey::LP_HP_LK" },
		{ "LP_HP_LK_HK.Name", "EFightingConfigKey::LP_HP_LK_HK" },
		{ "LP_LK.Name", "EFightingConfigKey::LP_LK" },
		{ "LP_LK_HK.Name", "EFightingConfigKey::LP_LK_HK" },
		{ "MAX.Name", "EFightingConfigKey::MAX" },
		{ "ModuleRelativePath", "EFightingConfigKey.h" },
		{ "PLAY.Name", "EFightingConfigKey::PLAY" },
		{ "PROVOCATION.Name", "EFightingConfigKey::PROVOCATION" },
		{ "REC.Name", "EFightingConfigKey::REC" },
		{ "REPEAT.Name", "EFightingConfigKey::REPEAT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		"EFightingConfigKey",
		"EFightingConfigKey",
		Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InputSystem_EFightingConfigKey()
	{
		if (!Z_Registration_Info_UEnum_EFightingConfigKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFightingConfigKey.InnerSingleton, Z_Construct_UEnum_InputSystem_EFightingConfigKey_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFightingConfigKey.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h_Statics::EnumInfo[] = {
		{ EFightingConfigKey_StaticEnum, TEXT("EFightingConfigKey"), &Z_Registration_Info_UEnum_EFightingConfigKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2175666127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h_3389132873(TEXT("/Script/InputSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
