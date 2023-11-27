// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/InputManager.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputManager();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UInputManager_NoRegister();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionMapping();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMappingList();
	UPackage* Z_Construct_UPackage__Script_InputSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionMapping;
class UScriptStruct* FInputActionMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionMapping, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("InputActionMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionMapping.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FInputActionMapping>()
{
	return FInputActionMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysArray;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputMapping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionMapping, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputMapping_MetaData), Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputMapping_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionMapping, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions_MetaData), Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray_Inner = { "KeysArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray = { "KeysArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionMapping, KeysArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray_MetaData), Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray_MetaData) }; // 46000949
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames_Inner = { "InputActionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames = { "InputActionNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputActionMapping, InputActionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames_MetaData), Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_KeysArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewProp_InputActionNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"InputActionMapping",
		Z_Construct_UScriptStruct_FInputActionMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::PropPointers),
		sizeof(FInputActionMapping),
		alignof(FInputActionMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputActionMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappingList;
class UScriptStruct* FMappingList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappingList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappingList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingList, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("MappingList"));
	}
	return Z_Registration_Info_UScriptStruct_MappingList.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FMappingList>()
{
	return FMappingList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMappingList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_IAL_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IAL_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IAL_Members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappingList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members_Inner = { "IAL_Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionMapping, METADATA_PARAMS(0, nullptr) }; // 3012070418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MappingList" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members = { "IAL_Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappingList, IAL_Members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members_MetaData), Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members_MetaData) }; // 3012070418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingList_Statics::NewProp_IAL_Members,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"MappingList",
		Z_Construct_UScriptStruct_FMappingList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingList_Statics::PropPointers),
		sizeof(FMappingList),
		alignof(FMappingList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMappingList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMappingList()
	{
		if (!Z_Registration_Info_UScriptStruct_MappingList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappingList.InnerSingleton, Z_Construct_UScriptStruct_FMappingList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MappingList.InnerSingleton;
	}
	DEFINE_FUNCTION(UInputManager::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UInputManager::StaticRegisterNativesUInputManager()
	{
		UClass* Class = UInputManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UInputManager::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputManager_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputManager_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputManager_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputManager, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputManager_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputManager_Initialize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInputManager_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputManager_Initialize_Statics::FuncParams);
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mappingList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingList;
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
		{ &Z_Construct_UFunction_UInputManager_Initialize, "Initialize" }, // 3372635882
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers_Inner = { "PlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers_MetaData[] = {
		{ "Category", "Fighters|InputManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//void Update();\n//UFUNCTION(BlueprintCallable)\n//void SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType);\n//UFUNCTION(BlueprintCallable)\n//void ResetInputKeys();\n//UFUNCTION(BlueprintCallable)\n//bool IsKeyBoard();\n//UFUNCTION(BlueprintCallable)\n//int32 GetPrimaryUserIndex();\n//UFUNCTION(BlueprintCallable)\n//int32 GetPlayerID(int32 ControllerId);\n//UFUNCTION(BlueprintCallable)\n//UInputMappingContext* GetKeyMap();\n//UFUNCTION(BlueprintCallable)\n//EDeviceType GetInputDeviceType(int32 PlayerIndex);\n" },
#endif
		{ "ModuleRelativePath", "InputManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid Update();\nUFUNCTION(BlueprintCallable)\nvoid SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType);\nUFUNCTION(BlueprintCallable)\nvoid ResetInputKeys();\nUFUNCTION(BlueprintCallable)\nbool IsKeyBoard();\nUFUNCTION(BlueprintCallable)\nint32 GetPrimaryUserIndex();\nUFUNCTION(BlueprintCallable)\nint32 GetPlayerID(int32 ControllerId);\nUFUNCTION(BlueprintCallable)\nUInputMappingContext* GetKeyMap();\nUFUNCTION(BlueprintCallable)\nEDeviceType GetInputDeviceType(int32 PlayerIndex);" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers = { "PlayerControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, PlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers_MetaData), Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerLeft_MetaData[] = {
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerLeft = { "ControllerLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, ControllerLeft), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerLeft_MetaData), Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerRight_MetaData[] = {
		{ "Category", "Fighters|InputManager" },
		{ "ModuleRelativePath", "InputManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerRight = { "ControllerRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, ControllerRight), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerRight_MetaData), Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputManager_Statics::NewProp_mappingList_MetaData[] = {
		{ "Category", "Fighters|InputManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//const UInputAction* GetInputAction(APlayerController* MappingNameCtrl, FName ActionName);\n" },
#endif
		{ "ModuleRelativePath", "InputManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nconst UInputAction* GetInputAction(APlayerController* MappingNameCtrl, FName ActionName);" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputManager_Statics::NewProp_mappingList = { "mappingList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputManager, mappingList), Z_Construct_UScriptStruct_FMappingList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputManager_Statics::NewProp_mappingList_MetaData), Z_Construct_UClass_UInputManager_Statics::NewProp_mappingList_MetaData) }; // 4230924323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_PlayerControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_ControllerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputManager_Statics::NewProp_mappingList,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputManager);
	UInputManager::~UInputManager() {}
	struct Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ScriptStructInfo[] = {
		{ FInputActionMapping::StaticStruct, Z_Construct_UScriptStruct_FInputActionMapping_Statics::NewStructOps, TEXT("InputActionMapping"), &Z_Registration_Info_UScriptStruct_InputActionMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionMapping), 3012070418U) },
		{ FMappingList::StaticStruct, Z_Construct_UScriptStruct_FMappingList_Statics::NewStructOps, TEXT("MappingList"), &Z_Registration_Info_UScriptStruct_MappingList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappingList), 4230924323U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputManager, UInputManager::StaticClass, TEXT("UInputManager"), &Z_Registration_Info_UClass_UInputManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputManager), 3361263953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_3637648711(TEXT("/Script/InputSystem"),
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
