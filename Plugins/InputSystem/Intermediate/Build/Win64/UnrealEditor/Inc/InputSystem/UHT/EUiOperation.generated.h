// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EUiOperation.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EUiOperation_generated_h
#error "EUiOperation.generated.h already included, missing '#pragma once' in EUiOperation.h"
#endif
#define INPUTSYSTEM_EUiOperation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EUiOperation_h


#define FOREACH_ENUM_EUIOPERATION(op) \
	op(EUiOperation::AnyKey) \
	op(EUiOperation::Dir_L) \
	op(EUiOperation::Dir_D) \
	op(EUiOperation::Dir_R) \
	op(EUiOperation::Dir_U) \
	op(EUiOperation::OK) \
	op(EUiOperation::Cancel) \
	op(EUiOperation::FuncA) \
	op(EUiOperation::FuncB) \
	op(EUiOperation::FuncX) \
	op(EUiOperation::FuncY) \
	op(EUiOperation::PageBack) \
	op(EUiOperation::PageNext) \
	op(EUiOperation::RShift) \
	op(EUiOperation::LShift) \
	op(EUiOperation::GameStart) \
	op(EUiOperation::TouchPad) \
	op(EUiOperation::Cheat) \
	op(EUiOperation::LStick) \
	op(EUiOperation::RStick) \
	op(EUiOperation::Option) \
	op(EUiOperation::Space) \
	op(EUiOperation::L1) \
	op(EUiOperation::R1) 

enum class EUiOperation : uint8;
template<> struct TIsUEnumClass<EUiOperation> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EUiOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
