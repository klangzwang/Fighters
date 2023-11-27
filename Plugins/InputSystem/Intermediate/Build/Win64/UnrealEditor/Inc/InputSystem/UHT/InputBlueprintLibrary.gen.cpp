// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/InputBlueprintLibrary.h"
#include "EnhancedActionKeyMapping.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputBlueprintLibrary();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	DEFINE_FUNCTION(UInputBlueprintLibrary::execGetActionMappingsForKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FEnhancedActionKeyMapping,Z_Param_Out_ActionBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputBlueprintLibrary::GetActionMappingsForKey(Z_Param_Key,Z_Param_Out_ActionBindings);
		P_NATIVE_END;
	}
	void UInputBlueprintLibrary::StaticRegisterNativesUInputBlueprintLibrary()
	{
		UClass* Class = UInputBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActionMappingsForKey", &UInputBlueprintLibrary::execGetActionMappingsForKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics
	{
		struct InputBlueprintLibrary_eventGetActionMappingsForKey_Parms
		{
			FKey Key;
			TArray<FEnhancedActionKeyMapping> ActionBindings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionBindings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputBlueprintLibrary_eventGetActionMappingsForKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_ActionBindings_Inner = { "ActionBindings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_ActionBindings = { "ActionBindings", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputBlueprintLibrary_eventGetActionMappingsForKey_Parms, ActionBindings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_ActionBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::NewProp_ActionBindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|EnhancedInput" },
		{ "ModuleRelativePath", "InputBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBlueprintLibrary, nullptr, "GetActionMappingsForKey", nullptr, nullptr, Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::InputBlueprintLibrary_eventGetActionMappingsForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::InputBlueprintLibrary_eventGetActionMappingsForKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBlueprintLibrary);
	UClass* Z_Construct_UClass_UInputBlueprintLibrary_NoRegister()
	{
		return UInputBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInputBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputBlueprintLibrary_GetActionMappingsForKey, "GetActionMappingsForKey" }, // 1022953442
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputBlueprintLibrary.h" },
		{ "ModuleRelativePath", "InputBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBlueprintLibrary_Statics::ClassParams = {
		&UInputBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInputBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UInputBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UInputBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputBlueprintLibrary.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UClass* StaticClass<UInputBlueprintLibrary>()
	{
		return UInputBlueprintLibrary::StaticClass();
	}
	UInputBlueprintLibrary::UInputBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBlueprintLibrary);
	UInputBlueprintLibrary::~UInputBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputBlueprintLibrary, UInputBlueprintLibrary::StaticClass, TEXT("UInputBlueprintLibrary"), &Z_Registration_Info_UClass_UInputBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBlueprintLibrary), 2755725387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_1468682349(TEXT("/Script/InputSystem"),
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
