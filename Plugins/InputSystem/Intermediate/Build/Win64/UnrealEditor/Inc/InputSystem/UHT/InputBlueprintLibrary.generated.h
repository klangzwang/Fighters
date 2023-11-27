// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEnhancedActionKeyMapping;
struct FKey;
#ifdef INPUTSYSTEM_InputBlueprintLibrary_generated_h
#error "InputBlueprintLibrary.generated.h already included, missing '#pragma once' in InputBlueprintLibrary.h"
#endif
#define INPUTSYSTEM_InputBlueprintLibrary_generated_h

#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_SPARSE_DATA
#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionMappingsForKey);


#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_ACCESSORS
#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UInputBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UInputBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSystem"), NO_API) \
	DECLARE_SERIALIZER(UInputBlueprintLibrary)


#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBlueprintLibrary(UInputBlueprintLibrary&&); \
	NO_API UInputBlueprintLibrary(const UInputBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBlueprintLibrary) \
	NO_API virtual ~UInputBlueprintLibrary();


#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_6_PROLOG
#define FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_SPARSE_DATA \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_ACCESSORS \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSYSTEM_API UClass* StaticClass<class UInputBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_InputBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
