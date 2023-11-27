// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/InputActionKeyBinding.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionKeyBinding() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FActionKeyBinding();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionKeyBinding;
class UScriptStruct* FActionKeyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionKeyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionKeyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionKeyBinding, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("ActionKeyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ActionKeyBinding.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FActionKeyBinding>()
{
	return FActionKeyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionKeyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyAsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyAsString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionKeyBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InputActionKeyBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionKeyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "InputActionKeyBinding.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionKeyBinding, ActionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_ActionName_MetaData), Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_ActionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "InputActionKeyBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionKeyBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_KeyAsString_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "InputActionKeyBinding.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_KeyAsString = { "KeyAsString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionKeyBinding, KeyAsString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_KeyAsString_MetaData), Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_KeyAsString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionKeyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewProp_KeyAsString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionKeyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"ActionKeyBinding",
		Z_Construct_UScriptStruct_FActionKeyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::PropPointers),
		sizeof(FActionKeyBinding),
		alignof(FActionKeyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionKeyBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionKeyBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActionKeyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionKeyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionKeyBinding.InnerSingleton, Z_Construct_UScriptStruct_FActionKeyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionKeyBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputActionKeyBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputActionKeyBinding_h_Statics::ScriptStructInfo[] = {
		{ FActionKeyBinding::StaticStruct, Z_Construct_UScriptStruct_FActionKeyBinding_Statics::NewStructOps, TEXT("ActionKeyBinding"), &Z_Registration_Info_UScriptStruct_ActionKeyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionKeyBinding), 2266211132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputActionKeyBinding_h_1659128460(TEXT("/Script/InputSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputActionKeyBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputActionKeyBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
