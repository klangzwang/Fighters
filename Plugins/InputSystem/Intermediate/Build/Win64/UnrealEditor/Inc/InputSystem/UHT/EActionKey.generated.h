// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EActionKey.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EActionKey_generated_h
#error "EActionKey.generated.h already included, missing '#pragma once' in EActionKey.h"
#endif
#define INPUTSYSTEM_EActionKey_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EActionKey_h


#define FOREACH_ENUM_EACTIONKEY(op) \
	op(EActionKey::AnyKey) \
	op(EActionKey::Gamepad_LeftX) \
	op(EActionKey::Gamepad_LeftY) \
	op(EActionKey::Gamepad_RightX) \
	op(EActionKey::Gamepad_RightY) \
	op(EActionKey::Gamepad_LeftTriggerAxis) \
	op(EActionKey::Gamepad_RightTriggerAxis) \
	op(EActionKey::Gamepad_LeftThumbstick) \
	op(EActionKey::Gamepad_RightThumbstick) \
	op(EActionKey::Gamepad_Special_Left) \
	op(EActionKey::Gamepad_Special_Left_X) \
	op(EActionKey::Gamepad_Special_Left_Y) \
	op(EActionKey::Gamepad_Special_Right) \
	op(EActionKey::Gamepad_FaceButton_Bottom) \
	op(EActionKey::Gamepad_FaceButton_Right) \
	op(EActionKey::Gamepad_FaceButton_Left) \
	op(EActionKey::Gamepad_FaceButton_Top) \
	op(EActionKey::Gamepad_LeftShoulder) \
	op(EActionKey::Gamepad_RightShoulder) \
	op(EActionKey::Gamepad_LeftTrigger) \
	op(EActionKey::Gamepad_RightTrigger) \
	op(EActionKey::Gamepad_DPad_Up) \
	op(EActionKey::Gamepad_DPad_Down) \
	op(EActionKey::Gamepad_DPad_Right) \
	op(EActionKey::Gamepad_DPad_Left) \
	op(EActionKey::Gamepad_LeftStick_Up) \
	op(EActionKey::Gamepad_LeftStick_Down) \
	op(EActionKey::Gamepad_LeftStick_Right) \
	op(EActionKey::Gamepad_LeftStick_Left) \
	op(EActionKey::Gamepad_RightStick_Up) \
	op(EActionKey::Gamepad_RightStick_Down) \
	op(EActionKey::Gamepad_RightStick_Right) \
	op(EActionKey::Gamepad_RightStick_Left) \
	op(EActionKey::Virtual_Accept) \
	op(EActionKey::Virtual_Back) \
	op(EActionKey::BackSpace) \
	op(EActionKey::Tab) \
	op(EActionKey::Enter) \
	op(EActionKey::Pause) \
	op(EActionKey::CapsLock) \
	op(EActionKey::Escape) \
	op(EActionKey::SpaceBar) \
	op(EActionKey::PageUp) \
	op(EActionKey::PageDown) \
	op(EActionKey::End) \
	op(EActionKey::Home) \
	op(EActionKey::Left) \
	op(EActionKey::Up) \
	op(EActionKey::Right) \
	op(EActionKey::Down) \
	op(EActionKey::Insert) \
	op(EActionKey::Delete) \
	op(EActionKey::Zero) \
	op(EActionKey::One) \
	op(EActionKey::Two) \
	op(EActionKey::Three) \
	op(EActionKey::Four) \
	op(EActionKey::Five) \
	op(EActionKey::Six) \
	op(EActionKey::Seven) \
	op(EActionKey::Eight) \
	op(EActionKey::Nine) \
	op(EActionKey::A) \
	op(EActionKey::B) \
	op(EActionKey::C) \
	op(EActionKey::D) \
	op(EActionKey::E) \
	op(EActionKey::F) \
	op(EActionKey::G) \
	op(EActionKey::H) \
	op(EActionKey::I) \
	op(EActionKey::J) \
	op(EActionKey::K) \
	op(EActionKey::L) \
	op(EActionKey::M) \
	op(EActionKey::N) \
	op(EActionKey::O) \
	op(EActionKey::P) \
	op(EActionKey::Q) \
	op(EActionKey::R) \
	op(EActionKey::S) \
	op(EActionKey::T) \
	op(EActionKey::U) \
	op(EActionKey::V) \
	op(EActionKey::W) \
	op(EActionKey::X) \
	op(EActionKey::Y) \
	op(EActionKey::Z) \
	op(EActionKey::NumPadZero) \
	op(EActionKey::NumPadOne) \
	op(EActionKey::NumPadTwo) \
	op(EActionKey::NumPadThree) \
	op(EActionKey::NumPadFour) \
	op(EActionKey::NumPadFive) \
	op(EActionKey::NumPadSix) \
	op(EActionKey::NumPadSeven) \
	op(EActionKey::NumPadEight) \
	op(EActionKey::NumPadNine) \
	op(EActionKey::Multiply) \
	op(EActionKey::Add) \
	op(EActionKey::Subtract) \
	op(EActionKey::Decimal) \
	op(EActionKey::Divide) \
	op(EActionKey::F1) \
	op(EActionKey::F2) \
	op(EActionKey::F3) \
	op(EActionKey::F4) \
	op(EActionKey::F5) \
	op(EActionKey::F6) \
	op(EActionKey::F7) \
	op(EActionKey::F8) \
	op(EActionKey::F9) \
	op(EActionKey::F10) \
	op(EActionKey::F11) \
	op(EActionKey::F12) \
	op(EActionKey::NumLock) \
	op(EActionKey::ScrollLock) \
	op(EActionKey::LeftShift) \
	op(EActionKey::RightShift) \
	op(EActionKey::LeftControl) \
	op(EActionKey::RightControl) \
	op(EActionKey::LeftAlt) \
	op(EActionKey::RightAlt) \
	op(EActionKey::LeftCommand) \
	op(EActionKey::RightCommand) \
	op(EActionKey::Semicolon) \
	op(EActionKey::Equals) \
	op(EActionKey::Comma) \
	op(EActionKey::Underscore) \
	op(EActionKey::Hyphen) \
	op(EActionKey::Period) \
	op(EActionKey::Slash) \
	op(EActionKey::Tilde) \
	op(EActionKey::LeftBracket) \
	op(EActionKey::Backslash) \
	op(EActionKey::RightBracket) \
	op(EActionKey::Apostrophe) \
	op(EActionKey::Ampersand) \
	op(EActionKey::Asterix) \
	op(EActionKey::Caret) \
	op(EActionKey::Colon) \
	op(EActionKey::Dollar) \
	op(EActionKey::Exclamation) \
	op(EActionKey::LeftParantheses) \
	op(EActionKey::RightParantheses) \
	op(EActionKey::Quote) \
	op(EActionKey::A_AccentGrave) \
	op(EActionKey::E_AccentGrave) \
	op(EActionKey::E_AccentAigu) \
	op(EActionKey::C_Cedille) \
	op(EActionKey::Section) 

enum class EActionKey : uint8;
template<> struct TIsUEnumClass<EActionKey> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EActionKey>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
