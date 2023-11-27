// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/EDeviceType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDeviceType() {}
// Cross Module References
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EDeviceType();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeviceType;
	static UEnum* EDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputSystem_EDeviceType, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("EDeviceType"));
		}
		return Z_Registration_Info_UEnum_EDeviceType.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UEnum* StaticEnum<EDeviceType>()
	{
		return EDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_InputSystem_EDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enumerators[] = {
		{ "EDeviceType::AnyType", (int64)EDeviceType::AnyType },
		{ "EDeviceType::GamePad", (int64)EDeviceType::GamePad },
		{ "EDeviceType::Keyboard", (int64)EDeviceType::Keyboard },
		{ "EDeviceType::Invalid", (int64)EDeviceType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "AnyType.Name", "EDeviceType::AnyType" },
		{ "GamePad.Name", "EDeviceType::GamePad" },
		{ "Invalid.Name", "EDeviceType::Invalid" },
		{ "Keyboard.Name", "EDeviceType::Keyboard" },
		{ "ModuleRelativePath", "EDeviceType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputSystem_EDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		"EDeviceType",
		"EDeviceType",
		Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InputSystem_EDeviceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InputSystem_EDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeviceType.InnerSingleton, Z_Construct_UEnum_InputSystem_EDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeviceType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h_Statics::EnumInfo[] = {
		{ EDeviceType_StaticEnum, TEXT("EDeviceType"), &Z_Registration_Info_UEnum_EDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1528717390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h_3425925783(TEXT("/Script/InputSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
