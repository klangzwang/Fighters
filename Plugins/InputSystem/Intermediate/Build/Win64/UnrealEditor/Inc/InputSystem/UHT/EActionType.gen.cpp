// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/EActionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEActionType() {}
// Cross Module References
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EActionType();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionType;
	static UEnum* EActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputSystem_EActionType, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("EActionType"));
		}
		return Z_Registration_Info_UEnum_EActionType.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UEnum* StaticEnum<EActionType>()
	{
		return EActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_InputSystem_EActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputSystem_EActionType_Statics::Enumerators[] = {
		{ "EActionType::None", (int64)EActionType::None },
		{ "EActionType::MoveRight", (int64)EActionType::MoveRight },
		{ "EActionType::MoveLeft", (int64)EActionType::MoveLeft },
		{ "EActionType::MoveUp", (int64)EActionType::MoveUp },
		{ "EActionType::MoveDown", (int64)EActionType::MoveDown },
		{ "EActionType::LP", (int64)EActionType::LP },
		{ "EActionType::RP", (int64)EActionType::RP },
		{ "EActionType::LK", (int64)EActionType::LK },
		{ "EActionType::RK", (int64)EActionType::RK },
		{ "EActionType::LPRP", (int64)EActionType::LPRP },
		{ "EActionType::LKRK", (int64)EActionType::LKRK },
		{ "EActionType::LPLK", (int64)EActionType::LPLK },
		{ "EActionType::RPRK", (int64)EActionType::RPRK },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputSystem_EActionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LK.Name", "EActionType::LK" },
		{ "LKRK.Name", "EActionType::LKRK" },
		{ "LP.Name", "EActionType::LP" },
		{ "LPLK.Name", "EActionType::LPLK" },
		{ "LPRP.Name", "EActionType::LPRP" },
		{ "ModuleRelativePath", "EActionType.h" },
		{ "MoveDown.Name", "EActionType::MoveDown" },
		{ "MoveLeft.Name", "EActionType::MoveLeft" },
		{ "MoveRight.Name", "EActionType::MoveRight" },
		{ "MoveUp.Name", "EActionType::MoveUp" },
		{ "None.Name", "EActionType::None" },
		{ "RK.Name", "EActionType::RK" },
		{ "RP.Name", "EActionType::RP" },
		{ "RPRK.Name", "EActionType::RPRK" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputSystem_EActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		"EActionType",
		"EActionType",
		Z_Construct_UEnum_InputSystem_EActionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EActionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputSystem_EActionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InputSystem_EActionType()
	{
		if (!Z_Registration_Info_UEnum_EActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionType.InnerSingleton, Z_Construct_UEnum_InputSystem_EActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h_Statics::EnumInfo[] = {
		{ EActionType_StaticEnum, TEXT("EActionType"), &Z_Registration_Info_UEnum_EActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2259672025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h_1473433462(TEXT("/Script/InputSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
