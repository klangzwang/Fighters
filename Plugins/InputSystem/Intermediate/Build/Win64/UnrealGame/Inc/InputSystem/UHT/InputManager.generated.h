// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKeyMap;
#ifdef INPUTSYSTEM_InputManager_generated_h
#error "InputManager.generated.h already included, missing '#pragma once' in InputManager.h"
#endif
#define INPUTSYSTEM_InputManager_generated_h

#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_SPARSE_DATA
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerID); \
	DECLARE_FUNCTION(execGetPlayerID); \
	DECLARE_FUNCTION(execGetKeyMap);


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_ACCESSORS
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputManager(); \
	friend struct Z_Construct_UClass_UInputManager_Statics; \
public: \
	DECLARE_CLASS(UInputManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSystem"), NO_API) \
	DECLARE_SERIALIZER(UInputManager)


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputManager(UInputManager&&); \
	NO_API UInputManager(const UInputManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputManager) \
	NO_API virtual ~UInputManager();


#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_9_PROLOG
#define FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_SPARSE_DATA \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_ACCESSORS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSYSTEM_API UClass* StaticClass<class UInputManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Fighters_Plugins_InputSystem_Source_InputSystem_InputManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
