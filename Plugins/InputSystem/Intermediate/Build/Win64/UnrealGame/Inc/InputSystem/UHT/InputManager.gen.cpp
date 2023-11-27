// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/InputManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputManager();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputManager_NoRegister();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UKeyMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	DEFINE_FUNCTION(UInputManager::execGetControllerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetControllerID(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputManager::execGetPlayerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerID(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputManager::execGetKeyMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UKeyMap**)Z_Param__Result=P_THIS->GetKeyMap();
		P_NATIVE_END;
	}
	void UInputManager::StaticRegisterNativesUInputManager()
	{
		UClass* Class = UInputManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerID", &UInputManager::execGetControllerID },
			{ "GetKeyMap", &UInputManager::execGetKeyMap },
			{ "GetPlayerID", &UInputManager::execGetPlayerID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputManager_GetControllerID_Statics
	{
		struct InputManager_eventGetControllerID_Parms
		{
			int32 PlayerIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputManager_GetControllerID_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputManager_eventGetControllerID_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputManager_GetControllerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputManager_eventGetControllerID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputManager_GetControllerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputManager_GetControllerID_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputManager_GetControllerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputManager_GetControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputManager_GetControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManager, nullptr, "GetControllerID", nullptr, nullptr, Z_Construct_UFunction_UInputManager_GetControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetControllerID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputManager_GetControllerID_Statics::InputManager_eventGetControllerID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetControllerID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputManager_GetControllerID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetControllerID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputManager_GetControllerID_Statics::InputManager_eventGetControllerID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputManager_GetControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputManager_GetControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputManager_GetKeyMap_Statics
	{
		struct InputManager_eventGetKeyMap_Parms
		{
			UKeyMap* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputManager_eventGetKeyMap_Parms, ReturnValue), Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManager, nullptr, "GetKeyMap", nullptr, nullptr, Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::InputManager_eventGetKeyMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::InputManager_eventGetKeyMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputManager_GetKeyMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputManager_GetKeyMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputManager_GetPlayerID_Statics
	{
		struct InputManager_eventGetPlayerID_Parms
		{
			int32 ControllerId;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputManager_eventGetPlayerID_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputManager_eventGetPlayerID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::NewProp_ControllerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManager, nullptr, "GetPlayerID", nullptr, nullptr, Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::InputManager_eventGetPlayerID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::InputManager_eventGetPlayerID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInputManager_GetPlayerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputManager_GetPlayerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputManager);
	UClass* Z_Construct_UClass_UInputManager_NoRegister()
	{
		return UInputManager::StaticClass();
	}
	struct Z_Construct_UClass_UInputManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputManager_GetControllerID, "GetControllerID" }, // 1294838056
		{ &Z_Construct_UFunction_UInputManager_GetKeyMap, "GetKeyMap" }, // 2888362535
		{ &Z_Construct_UFunction_UInputManager_GetPlayerID, "GetPlayerID" }, // 3332121932
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InputManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::NewProp_KeyMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_KeyMap = { "KeyMap", nullptr, (EPropertyFlags)0x001000000000000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, KeyMap), Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::NewProp_KeyMap_MetaData), Z_Construct_UClass_UInputManager_Statics::NewProp_KeyMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_KeyMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputManager_Statics::ClassParams = {
		&UInputManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInputManager()
	{
		if (!Z_Registration_Info_UClass_UInputManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputManager.OuterSingleton, Z_Construct_UClass_UInputManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputManager.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UClass* StaticClass<UInputManager>()
	{
		return UInputManager::StaticClass();
	}
	UInputManager::UInputManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputManager);
	UInputManager::~UInputManager() {}
	struct Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputManager, UInputManager::StaticClass, TEXT("UInputManager"), &Z_Registration_Info_UClass_UInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputManager), 248476312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_1329203982(TEXT("/Script/InputSystem"),
		Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
