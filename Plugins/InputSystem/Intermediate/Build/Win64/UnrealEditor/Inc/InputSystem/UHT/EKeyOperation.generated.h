// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EKeyOperation.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTSYSTEM_EKeyOperation_generated_h
#error "EKeyOperation.generated.h already included, missing '#pragma once' in EKeyOperation.h"
#endif
#define INPUTSYSTEM_EKeyOperation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_Fighters_Plugins_InputSystem_Source_InputSystem_EKeyOperation_h


#define FOREACH_ENUM_EKEYOPERATION(op) \
	op(EKeyOperation::AnyKey) \
	op(EKeyOperation::Gamepad_LeftX) \
	op(EKeyOperation::Gamepad_LeftY) \
	op(EKeyOperation::Gamepad_RightX) \
	op(EKeyOperation::Gamepad_RightY) \
	op(EKeyOperation::Gamepad_LeftTriggerAxis) \
	op(EKeyOperation::Gamepad_RightTriggerAxis) \
	op(EKeyOperation::Gamepad_LeftThumbstick) \
	op(EKeyOperation::Gamepad_RightThumbstick) \
	op(EKeyOperation::Gamepad_Special_Left) \
	op(EKeyOperation::Gamepad_Special_Left_X) \
	op(EKeyOperation::Gamepad_Special_Left_Y) \
	op(EKeyOperation::Gamepad_Special_Right) \
	op(EKeyOperation::Gamepad_FaceButton_Bottom) \
	op(EKeyOperation::Gamepad_FaceButton_Right) \
	op(EKeyOperation::Gamepad_FaceButton_Left) \
	op(EKeyOperation::Gamepad_FaceButton_Top) \
	op(EKeyOperation::Gamepad_LeftShoulder) \
	op(EKeyOperation::Gamepad_RightShoulder) \
	op(EKeyOperation::Gamepad_LeftTrigger) \
	op(EKeyOperation::Gamepad_RightTrigger) \
	op(EKeyOperation::Gamepad_DPad_Up) \
	op(EKeyOperation::Gamepad_DPad_Down) \
	op(EKeyOperation::Gamepad_DPad_Right) \
	op(EKeyOperation::Gamepad_DPad_Left) \
	op(EKeyOperation::Gamepad_LeftStick_Up) \
	op(EKeyOperation::Gamepad_LeftStick_Down) \
	op(EKeyOperation::Gamepad_LeftStick_Right) \
	op(EKeyOperation::Gamepad_LeftStick_Left) \
	op(EKeyOperation::Gamepad_RightStick_Up) \
	op(EKeyOperation::Gamepad_RightStick_Down) \
	op(EKeyOperation::Gamepad_RightStick_Right) \
	op(EKeyOperation::Gamepad_RightStick_Left) \
	op(EKeyOperation::Virtual_Accept) \
	op(EKeyOperation::Virtual_Back) \
	op(EKeyOperation::BackSpace) \
	op(EKeyOperation::Tab) \
	op(EKeyOperation::Enter) \
	op(EKeyOperation::Pause) \
	op(EKeyOperation::CapsLock) \
	op(EKeyOperation::Escape) \
	op(EKeyOperation::SpaceBar) \
	op(EKeyOperation::PageUp) \
	op(EKeyOperation::PageDown) \
	op(EKeyOperation::End) \
	op(EKeyOperation::Home) \
	op(EKeyOperation::Left) \
	op(EKeyOperation::Up) \
	op(EKeyOperation::Right) \
	op(EKeyOperation::Down) \
	op(EKeyOperation::Insert) \
	op(EKeyOperation::Delete) \
	op(EKeyOperation::Zero) \
	op(EKeyOperation::One) \
	op(EKeyOperation::Two) \
	op(EKeyOperation::Three) \
	op(EKeyOperation::Four) \
	op(EKeyOperation::Five) \
	op(EKeyOperation::Six) \
	op(EKeyOperation::Seven) \
	op(EKeyOperation::Eight) \
	op(EKeyOperation::Nine) \
	op(EKeyOperation::A) \
	op(EKeyOperation::B) \
	op(EKeyOperation::C) \
	op(EKeyOperation::D) \
	op(EKeyOperation::E) \
	op(EKeyOperation::F) \
	op(EKeyOperation::G) \
	op(EKeyOperation::H) \
	op(EKeyOperation::I) \
	op(EKeyOperation::J) \
	op(EKeyOperation::K) \
	op(EKeyOperation::L) \
	op(EKeyOperation::M) \
	op(EKeyOperation::N) \
	op(EKeyOperation::O) \
	op(EKeyOperation::P) \
	op(EKeyOperation::Q) \
	op(EKeyOperation::R) \
	op(EKeyOperation::S) \
	op(EKeyOperation::T) \
	op(EKeyOperation::U) \
	op(EKeyOperation::V) \
	op(EKeyOperation::W) \
	op(EKeyOperation::X) \
	op(EKeyOperation::Y) \
	op(EKeyOperation::Z) \
	op(EKeyOperation::NumPadZero) \
	op(EKeyOperation::NumPadOne) \
	op(EKeyOperation::NumPadTwo) \
	op(EKeyOperation::NumPadThree) \
	op(EKeyOperation::NumPadFour) \
	op(EKeyOperation::NumPadFive) \
	op(EKeyOperation::NumPadSix) \
	op(EKeyOperation::NumPadSeven) \
	op(EKeyOperation::NumPadEight) \
	op(EKeyOperation::NumPadNine) \
	op(EKeyOperation::Multiply) \
	op(EKeyOperation::Add) \
	op(EKeyOperation::Subtract) \
	op(EKeyOperation::Decimal) \
	op(EKeyOperation::Divide) \
	op(EKeyOperation::F1) \
	op(EKeyOperation::F2) \
	op(EKeyOperation::F3) \
	op(EKeyOperation::F4) \
	op(EKeyOperation::F5) \
	op(EKeyOperation::F6) \
	op(EKeyOperation::F7) \
	op(EKeyOperation::F8) \
	op(EKeyOperation::F9) \
	op(EKeyOperation::F10) \
	op(EKeyOperation::F11) \
	op(EKeyOperation::F12) \
	op(EKeyOperation::NumLock) \
	op(EKeyOperation::ScrollLock) \
	op(EKeyOperation::LeftShift) \
	op(EKeyOperation::RightShift) \
	op(EKeyOperation::LeftControl) \
	op(EKeyOperation::RightControl) \
	op(EKeyOperation::LeftAlt) \
	op(EKeyOperation::RightAlt) \
	op(EKeyOperation::LeftCommand) \
	op(EKeyOperation::RightCommand) \
	op(EKeyOperation::Semicolon) \
	op(EKeyOperation::Equals) \
	op(EKeyOperation::Comma) \
	op(EKeyOperation::Underscore) \
	op(EKeyOperation::Hyphen) \
	op(EKeyOperation::Period) \
	op(EKeyOperation::Slash) \
	op(EKeyOperation::Tilde) \
	op(EKeyOperation::LeftBracket) \
	op(EKeyOperation::Backslash) \
	op(EKeyOperation::RightBracket) \
	op(EKeyOperation::Apostrophe) \
	op(EKeyOperation::Ampersand) \
	op(EKeyOperation::Asterix) \
	op(EKeyOperation::Caret) \
	op(EKeyOperation::Colon) \
	op(EKeyOperation::Dollar) \
	op(EKeyOperation::Exclamation) \
	op(EKeyOperation::LeftParantheses) \
	op(EKeyOperation::RightParantheses) \
	op(EKeyOperation::Quote) \
	op(EKeyOperation::A_AccentGrave) \
	op(EKeyOperation::E_AccentGrave) \
	op(EKeyOperation::E_AccentAigu) \
	op(EKeyOperation::C_Cedille) \
	op(EKeyOperation::Section) 

enum class EKeyOperation : uint8;
template<> struct TIsUEnumClass<EKeyOperation> { enum { Value = true }; };
template<> INPUTSYSTEM_API UEnum* StaticEnum<EKeyOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
