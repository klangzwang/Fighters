// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EActionType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EActionType_generated_h
#error "EActionType.generated.h already included, missing '#pragma once' in EActionType.h"
#endif
#define INPUTSYSTEM_EActionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Fighters_Plugins_InputSystem_Source_InputSystem_EActionType_h


#define FOREACH_ENUM_EACTIONTYPE(op) \
	op(EActionType::None) \
	op(EActionType::MoveRight) \
	op(EActionType::MoveLeft) \
	op(EActionType::MoveUp) \
	op(EActionType::MoveDown) \
	op(EActionType::LP) \
	op(EActionType::RP) \
	op(EActionType::LK) \
	op(EActionType::RK) \
	op(EActionType::LPRP) \
	op(EActionType::LKRK) \
	op(EActionType::LPLK) \
	op(EActionType::RPRK) 

enum class EActionType : uint8;
template<> struct TIsUEnumClass<EActionType> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
