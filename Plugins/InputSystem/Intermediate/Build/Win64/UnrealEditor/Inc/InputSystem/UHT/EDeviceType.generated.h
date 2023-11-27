// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EDeviceType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EDeviceType_generated_h
#error "EDeviceType.generated.h already included, missing '#pragma once' in EDeviceType.h"
#endif
#define INPUTSYSTEM_EDeviceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EDeviceType_h


#define FOREACH_ENUM_EDEVICETYPE(op) \
	op(EDeviceType::AnyType) \
	op(EDeviceType::GamePad) \
	op(EDeviceType::Keyboard) \
	op(EDeviceType::Invalid) 

enum class EDeviceType : uint8;
template<> struct TIsUEnumClass<EDeviceType> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
