// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UEnhancedInputLocalPlayerSubsystem;
class UKeyMap;
struct FEnhancedActionKeyMapping;
struct FPlayerInputAction;
struct FPlayerMappingContext;
struct FUserInputData;
#ifdef INPUTSYSTEM_KeyMap_generated_h
#error "KeyMap.generated.h already included, missing '#pragma once' in KeyMap.h"
#endif
#define INPUTSYSTEM_KeyMap_generated_h

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyMappingData_Statics; \
	INPUTSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<struct FKeyMappingData>();

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserInputData_Statics; \
	INPUTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<struct FUserInputData>();

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerMappingContext_Statics; \
	INPUTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<struct FPlayerMappingContext>();

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerInputAction_Statics; \
	INPUTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INPUTSYSTEM_API UScriptStruct* StaticStruct<struct FPlayerInputAction>();

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_SPARSE_DATA
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubsystem); \
	DECLARE_FUNCTION(execGetEnhancedActionKeyMapping); \
	DECLARE_FUNCTION(execGetPlayerInputAction); \
	DECLARE_FUNCTION(execGetPlayerMappingContext); \
	DECLARE_FUNCTION(execGetUserInputData); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyMap(); \
	friend struct Z_Construct_UClass_UKeyMap_Statics; \
public: \
	DECLARE_CLASS(UKeyMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSystem"), NO_API) \
	DECLARE_SERIALIZER(UKeyMap)


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeyMap(UKeyMap&&); \
	NO_API UKeyMap(const UKeyMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKeyMap) \
	NO_API virtual ~UKeyMap();


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_65_PROLOG
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_SPARSE_DATA \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_INCLASS_NO_PURE_DECLS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSYSTEM_API UClass* StaticClass<class UKeyMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Fighters_Plugins_InputSystem_Source_InputSystem_KeyMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
