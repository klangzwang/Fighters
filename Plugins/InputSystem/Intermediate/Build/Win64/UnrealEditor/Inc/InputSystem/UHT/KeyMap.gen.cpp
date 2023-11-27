// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/KeyMap.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMap() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMappingData();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FKeyMappingData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FKeyMappingData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyMappingData;
class UScriptStruct* FKeyMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyMappingData, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("KeyMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_KeyMappingData.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FKeyMappingData>()
{
	return FKeyMappingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyMappingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyMappingData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingData, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName_MetaData), Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingData, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputActionKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputActionKey = { "InputActionKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingData, InputActionKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputActionKey_MetaData), Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputActionKey_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyMappingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputActionKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"KeyMappingData",
		Z_Construct_UScriptStruct_FKeyMappingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::PropPointers),
		sizeof(FKeyMappingData),
		alignof(FKeyMappingData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyMappingData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FKeyMappingData()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyMappingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyMappingData.InnerSingleton, Z_Construct_UScriptStruct_FKeyMappingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyMappingData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo[] = {
		{ FKeyMappingData::StaticStruct, Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewStructOps, TEXT("KeyMappingData"), &Z_Registration_Info_UScriptStruct_KeyMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyMappingData), 2469336389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_4155100299(TEXT("/Script/InputSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
