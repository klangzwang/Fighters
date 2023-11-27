// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSystem/KeyMap.h"
#include "EnhancedActionKeyMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UKeyMap();
	INPUTSYSTEM_API UClass* Z_Construct_UClass_UKeyMap_NoRegister();
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EActionKey();
	INPUTSYSTEM_API UEnum* Z_Construct_UEnum_InputSystem_EActionType();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMappingData();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputAction();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappingContext();
	INPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUserInputData();
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_mKeyboardMapping_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mKeyboardMapping_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mKeyboardMapping_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mKeyboardMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mKeyboardMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_mKeyboardMapping;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mGamepadMapping_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mGamepadMapping_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mGamepadMapping_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mGamepadMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGamepadMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_mGamepadMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_ValueProp = { "mKeyboardMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_InputSystem_EActionKey, METADATA_PARAMS(0, nullptr) }; // 269790906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_Key_KeyProp = { "mKeyboardMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InputSystem_EActionType, METADATA_PARAMS(0, nullptr) }; // 2259672025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping = { "mKeyboardMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingData, mKeyboardMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_MetaData), Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_MetaData) }; // 2259672025 269790906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_ValueProp = { "mGamepadMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_InputSystem_EActionKey, METADATA_PARAMS(0, nullptr) }; // 269790906
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_Key_KeyProp = { "mGamepadMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InputSystem_EActionType, METADATA_PARAMS(0, nullptr) }; // 2259672025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping = { "mGamepadMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingData, mGamepadMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_MetaData), Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_MetaData) }; // 2259672025 269790906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyMappingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mKeyboardMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewProp_mGamepadMapping,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserInputData;
class UScriptStruct* FUserInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInputData, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("UserInputData"));
	}
	return Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FUserInputData>()
{
	return FUserInputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserInputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyMaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInputData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps_Inner = { "KeyMaps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKeyMappingData, METADATA_PARAMS(0, nullptr) }; // 108731044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps = { "KeyMaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInputData, KeyMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps_MetaData), Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps_MetaData) }; // 108731044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_KeyMaps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"UserInputData",
		Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers),
		sizeof(FUserInputData),
		alignof(FUserInputData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserInputData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUserInputData()
	{
		if (!Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton, Z_Construct_UScriptStruct_FUserInputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappingContext;
class UScriptStruct* FPlayerMappingContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappingContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappingContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappingContext, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("PlayerMappingContext"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappingContext.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FPlayerMappingContext>()
{
	return FPlayerMappingContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerMappingContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingLR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingLR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappingContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewProp_InputMappingLR_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewProp_InputMappingLR = { "InputMappingLR", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappingContext, InputMappingLR), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewProp_InputMappingLR_MetaData), Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewProp_InputMappingLR_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewProp_InputMappingLR,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"PlayerMappingContext",
		Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::PropPointers),
		sizeof(FPlayerMappingContext),
		alignof(FPlayerMappingContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappingContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerMappingContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappingContext.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerMappingContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerInputAction;
class UScriptStruct* FPlayerInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInputAction, (UObject*)Z_Construct_UPackage__Script_InputSystem(), TEXT("PlayerInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerInputAction.OuterSingleton;
}
template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<FPlayerInputAction>()
{
	return FPlayerInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActionsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInputAction>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray_Inner = { "InputActionsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray = { "InputActionsArray", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerInputAction, InputActionsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray_MetaData), Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewProp_InputActionsArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
		nullptr,
		&NewStructOps,
		"PlayerInputAction",
		Z_Construct_UScriptStruct_FPlayerInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputAction_Statics::PropPointers),
		sizeof(FPlayerInputAction),
		alignof(FPlayerInputAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerInputAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerInputAction.InnerSingleton, Z_Construct_UScriptStruct_FPlayerInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerInputAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UKeyMap::execGetLocalPlayerSubsystem)
	{
		P_GET_OBJECT(UClass,Z_Param_inClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnhancedInputLocalPlayerSubsystem**)Z_Param__Result=UKeyMap::GetLocalPlayerSubsystem(Z_Param_inClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyMap::execGetEnhancedActionKeyMapping)
	{
		P_GET_OBJECT(UClass,Z_Param_inClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=UKeyMap::GetEnhancedActionKeyMapping(Z_Param_inClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyMap::execGetPlayerInputAction)
	{
		P_GET_OBJECT(UClass,Z_Param_inClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerInputAction*)Z_Param__Result=UKeyMap::GetPlayerInputAction(Z_Param_inClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyMap::execGetPlayerMappingContext)
	{
		P_GET_OBJECT(UClass,Z_Param_inClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerMappingContext*)Z_Param__Result=UKeyMap::GetPlayerMappingContext(Z_Param_inClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyMap::execGetUserInputData)
	{
		P_GET_OBJECT(UClass,Z_Param_inClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUserInputData*)Z_Param__Result=UKeyMap::GetUserInputData(Z_Param_inClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyMap::execInitialize)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Controller);
		P_NATIVE_END;
	}
	void UKeyMap::StaticRegisterNativesUKeyMap()
	{
		UClass* Class = UKeyMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnhancedActionKeyMapping", &UKeyMap::execGetEnhancedActionKeyMapping },
			{ "GetLocalPlayerSubsystem", &UKeyMap::execGetLocalPlayerSubsystem },
			{ "GetPlayerInputAction", &UKeyMap::execGetPlayerInputAction },
			{ "GetPlayerMappingContext", &UKeyMap::execGetPlayerMappingContext },
			{ "GetUserInputData", &UKeyMap::execGetUserInputData },
			{ "Initialize", &UKeyMap::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics
	{
		struct KeyMap_eventGetEnhancedActionKeyMapping_Parms
		{
			TSubclassOf<UKeyMap>  inClass;
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetEnhancedActionKeyMapping_Parms, inClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetEnhancedActionKeyMapping_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2568609385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_inClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "GetEnhancedActionKeyMapping", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::KeyMap_eventGetEnhancedActionKeyMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::KeyMap_eventGetEnhancedActionKeyMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics
	{
		struct KeyMap_eventGetLocalPlayerSubsystem_Parms
		{
			TSubclassOf<UKeyMap>  inClass;
			UEnhancedInputLocalPlayerSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetLocalPlayerSubsystem_Parms, inClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetLocalPlayerSubsystem_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::NewProp_inClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "GetLocalPlayerSubsystem", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::KeyMap_eventGetLocalPlayerSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::KeyMap_eventGetLocalPlayerSubsystem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics
	{
		struct KeyMap_eventGetPlayerInputAction_Parms
		{
			TSubclassOf<UKeyMap>  inClass;
			FPlayerInputAction ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetPlayerInputAction_Parms, inClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetPlayerInputAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerInputAction, METADATA_PARAMS(0, nullptr) }; // 408025777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::NewProp_inClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "GetPlayerInputAction", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::KeyMap_eventGetPlayerInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::KeyMap_eventGetPlayerInputAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_GetPlayerInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_GetPlayerInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics
	{
		struct KeyMap_eventGetPlayerMappingContext_Parms
		{
			TSubclassOf<UKeyMap>  inClass;
			FPlayerMappingContext ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetPlayerMappingContext_Parms, inClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetPlayerMappingContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerMappingContext, METADATA_PARAMS(0, nullptr) }; // 1029416474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::NewProp_inClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "GetPlayerMappingContext", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::KeyMap_eventGetPlayerMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::KeyMap_eventGetPlayerMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics
	{
		struct KeyMap_eventGetUserInputData_Parms
		{
			TSubclassOf<UKeyMap>  inClass;
			FUserInputData ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetUserInputData_Parms, inClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKeyMap_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventGetUserInputData_Parms, ReturnValue), Z_Construct_UScriptStruct_FUserInputData, METADATA_PARAMS(0, nullptr) }; // 4251582073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::NewProp_inClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "GetUserInputData", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::KeyMap_eventGetUserInputData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::KeyMap_eventGetUserInputData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_GetUserInputData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_GetUserInputData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyMap_Initialize_Statics
	{
		struct KeyMap_eventInitialize_Parms
		{
			APlayerController* Controller;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKeyMap_Initialize_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KeyMap_eventInitialize_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyMap_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyMap_Initialize_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyMap_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyMap_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyMap, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UKeyMap_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKeyMap_Initialize_Statics::KeyMap_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKeyMap_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyMap_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKeyMap_Initialize_Statics::KeyMap_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKeyMap_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKeyMap_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyMap);
	UClass* Z_Construct_UClass_UKeyMap_NoRegister()
	{
		return UKeyMap::StaticClass();
	}
	struct Z_Construct_UClass_UKeyMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputContextMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContextMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputContextMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UKeyMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyMap_GetEnhancedActionKeyMapping, "GetEnhancedActionKeyMapping" }, // 1077702800
		{ &Z_Construct_UFunction_UKeyMap_GetLocalPlayerSubsystem, "GetLocalPlayerSubsystem" }, // 3608626722
		{ &Z_Construct_UFunction_UKeyMap_GetPlayerInputAction, "GetPlayerInputAction" }, // 4288219924
		{ &Z_Construct_UFunction_UKeyMap_GetPlayerMappingContext, "GetPlayerMappingContext" }, // 2651630610
		{ &Z_Construct_UFunction_UKeyMap_GetUserInputData, "GetUserInputData" }, // 841037849
		{ &Z_Construct_UFunction_UKeyMap_Initialize, "Initialize" }, // 2271660616
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeyMap.h" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::NewProp_InputData_MetaData[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyMap, InputData), Z_Construct_UScriptStruct_FUserInputData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::NewProp_InputData_MetaData), Z_Construct_UClass_UKeyMap_Statics::NewProp_InputData_MetaData) }; // 4251582073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContext_MetaData[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyMap, InputContext), Z_Construct_UScriptStruct_FPlayerMappingContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContext_MetaData), Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContext_MetaData) }; // 1029416474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::NewProp_InputActions_MetaData[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyMap, InputActions), Z_Construct_UScriptStruct_FPlayerInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::NewProp_InputActions_MetaData), Z_Construct_UClass_UKeyMap_Statics::NewProp_InputActions_MetaData) }; // 408025777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping_Inner = { "InputContextMapping", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2568609385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping_MetaData[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping = { "InputContextMapping", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyMap, InputContextMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping_MetaData), Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping_MetaData) }; // 2568609385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyMap_Statics::NewProp_SubSystem_MetaData[] = {
		{ "Category", "Fighters|InputSystem" },
		{ "ModuleRelativePath", "KeyMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKeyMap_Statics::NewProp_SubSystem = { "SubSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeyMap, SubSystem), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::NewProp_SubSystem_MetaData), Z_Construct_UClass_UKeyMap_Statics::NewProp_SubSystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_InputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_InputContextMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyMap_Statics::NewProp_SubSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyMap_Statics::ClassParams = {
		&UKeyMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKeyMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeyMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeyMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKeyMap()
	{
		if (!Z_Registration_Info_UClass_UKeyMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyMap.OuterSingleton, Z_Construct_UClass_UKeyMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKeyMap.OuterSingleton;
	}
	template<> INPUTSYSTEM_API UClass* StaticClass<UKeyMap>()
	{
		return UKeyMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyMap);
	UKeyMap::~UKeyMap() {}
	struct Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo[] = {
		{ FKeyMappingData::StaticStruct, Z_Construct_UScriptStruct_FKeyMappingData_Statics::NewStructOps, TEXT("KeyMappingData"), &Z_Registration_Info_UScriptStruct_KeyMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyMappingData), 108731044U) },
		{ FUserInputData::StaticStruct, Z_Construct_UScriptStruct_FUserInputData_Statics::NewStructOps, TEXT("UserInputData"), &Z_Registration_Info_UScriptStruct_UserInputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserInputData), 4251582073U) },
		{ FPlayerMappingContext::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappingContext_Statics::NewStructOps, TEXT("PlayerMappingContext"), &Z_Registration_Info_UScriptStruct_PlayerMappingContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappingContext), 1029416474U) },
		{ FPlayerInputAction::StaticStruct, Z_Construct_UScriptStruct_FPlayerInputAction_Statics::NewStructOps, TEXT("PlayerInputAction"), &Z_Registration_Info_UScriptStruct_PlayerInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerInputAction), 408025777U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKeyMap, UKeyMap::StaticClass, TEXT("UKeyMap"), &Z_Registration_Info_UClass_UKeyMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyMap), 2650200976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_2929279034(TEXT("/Script/InputSystem"),
		Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
