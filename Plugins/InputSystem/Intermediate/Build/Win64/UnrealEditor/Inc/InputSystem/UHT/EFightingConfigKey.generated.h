// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFightingConfigKey.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EFightingConfigKey_generated_h
#error "EFightingConfigKey.generated.h already included, missing '#pragma once' in EFightingConfigKey.h"
#endif
#define INPUTSYSTEM_EFightingConfigKey_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EFightingConfigKey_h


#define FOREACH_ENUM_EFIGHTINGCONFIGKEY(op) \
	op(EFightingConfigKey::Dir_U) \
	op(EFightingConfigKey::Dir_D) \
	op(EFightingConfigKey::Dir_L) \
	op(EFightingConfigKey::Dir_R) \
	op(EFightingConfigKey::LP) \
	op(EFightingConfigKey::HP) \
	op(EFightingConfigKey::LK) \
	op(EFightingConfigKey::HK) \
	op(EFightingConfigKey::LP_HP) \
	op(EFightingConfigKey::LP_LK) \
	op(EFightingConfigKey::LP_HK) \
	op(EFightingConfigKey::HP_LK) \
	op(EFightingConfigKey::HP_HK) \
	op(EFightingConfigKey::LK_HK) \
	op(EFightingConfigKey::LP_HP_LK) \
	op(EFightingConfigKey::LP_HP_HK) \
	op(EFightingConfigKey::LP_LK_HK) \
	op(EFightingConfigKey::HP_LK_HK) \
	op(EFightingConfigKey::LP_HP_LK_HK) \
	op(EFightingConfigKey::REC) \
	op(EFightingConfigKey::PLAY) \
	op(EFightingConfigKey::REPEAT) \
	op(EFightingConfigKey::PROVOCATION) 

enum class EFightingConfigKey : uint8;
template<> struct TIsUEnumClass<EFightingConfigKey> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EFightingConfigKey>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
