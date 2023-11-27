// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/EUiOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUiOperation() {}
// Cross Module References
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EUiOperation();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUiOperation;
	static UEnum* EUiOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUiOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUiOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputSystem_EUiOperation, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("EUiOperation"));
		}
		return Z_Registration_Info_UEnum_EUiOperation.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UEnum* StaticEnum<EUiOperation>()
	{
		return EUiOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_InputSystem_EUiOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enumerators[] = {
		{ "EUiOperation::AnyKey", (int64)EUiOperation::AnyKey },
		{ "EUiOperation::Dir_L", (int64)EUiOperation::Dir_L },
		{ "EUiOperation::Dir_D", (int64)EUiOperation::Dir_D },
		{ "EUiOperation::Dir_R", (int64)EUiOperation::Dir_R },
		{ "EUiOperation::Dir_U", (int64)EUiOperation::Dir_U },
		{ "EUiOperation::OK", (int64)EUiOperation::OK },
		{ "EUiOperation::Cancel", (int64)EUiOperation::Cancel },
		{ "EUiOperation::FuncA", (int64)EUiOperation::FuncA },
		{ "EUiOperation::FuncB", (int64)EUiOperation::FuncB },
		{ "EUiOperation::FuncX", (int64)EUiOperation::FuncX },
		{ "EUiOperation::FuncY", (int64)EUiOperation::FuncY },
		{ "EUiOperation::PageBack", (int64)EUiOperation::PageBack },
		{ "EUiOperation::PageNext", (int64)EUiOperation::PageNext },
		{ "EUiOperation::RShift", (int64)EUiOperation::RShift },
		{ "EUiOperation::LShift", (int64)EUiOperation::LShift },
		{ "EUiOperation::GameStart", (int64)EUiOperation::GameStart },
		{ "EUiOperation::TouchPad", (int64)EUiOperation::TouchPad },
		{ "EUiOperation::Cheat", (int64)EUiOperation::Cheat },
		{ "EUiOperation::LStick", (int64)EUiOperation::LStick },
		{ "EUiOperation::RStick", (int64)EUiOperation::RStick },
		{ "EUiOperation::Option", (int64)EUiOperation::Option },
		{ "EUiOperation::Space", (int64)EUiOperation::Space },
		{ "EUiOperation::L1", (int64)EUiOperation::L1 },
		{ "EUiOperation::R1", (int64)EUiOperation::R1 },
		{ "EUiOperation::MAX", (int64)EUiOperation::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enum_MetaDataParams[] = {
		{ "AnyKey.Name", "EUiOperation::AnyKey" },
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EUiOperation::Cancel" },
		{ "Cheat.Name", "EUiOperation::Cheat" },
		{ "Dir_D.Name", "EUiOperation::Dir_D" },
		{ "Dir_L.Name", "EUiOperation::Dir_L" },
		{ "Dir_R.Name", "EUiOperation::Dir_R" },
		{ "Dir_U.Name", "EUiOperation::Dir_U" },
		{ "FuncA.Name", "EUiOperation::FuncA" },
		{ "FuncB.Name", "EUiOperation::FuncB" },
		{ "FuncX.Name", "EUiOperation::FuncX" },
		{ "FuncY.Name", "EUiOperation::FuncY" },
		{ "GameStart.Name", "EUiOperation::GameStart" },
		{ "L1.Name", "EUiOperation::L1" },
		{ "LShift.Name", "EUiOperation::LShift" },
		{ "LStick.Name", "EUiOperation::LStick" },
		{ "MAX.Name", "EUiOperation::MAX" },
		{ "ModuleRelativePath", "EUiOperation.h" },
		{ "OK.Name", "EUiOperation::OK" },
		{ "Option.Name", "EUiOperation::Option" },
		{ "PageBack.Name", "EUiOperation::PageBack" },
		{ "PageNext.Name", "EUiOperation::PageNext" },
		{ "R1.Name", "EUiOperation::R1" },
		{ "RShift.Name", "EUiOperation::RShift" },
		{ "RStick.Name", "EUiOperation::RStick" },
		{ "Space.Name", "EUiOperation::Space" },
		{ "TouchPad.Name", "EUiOperation::TouchPad" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputSystem_EUiOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		"EUiOperation",
		"EUiOperation",
		Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputSystem_EUiOperation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InputSystem_EUiOperation()
	{
		if (!Z_Registration_Info_UEnum_EUiOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUiOperation.InnerSingleton, Z_Construct_UEnum_InputSystem_EUiOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUiOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h_Statics::EnumInfo[] = {
		{ EUiOperation_StaticEnum, TEXT("EUiOperation"), &Z_Registration_Info_UEnum_EUiOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3921483752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h_132597331(TEXT("/Script/InputSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
