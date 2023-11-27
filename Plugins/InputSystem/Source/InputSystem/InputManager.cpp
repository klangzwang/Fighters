#include "InputManager.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

UInputManager::UInputManager()
{
}

void UInputManager::SetupInputComponent()
{

}

void UInputManager::Initialize()
{
    FindAllTheActors(GetWorld(), PlayerControllers);
    for (int i = 0; i < PlayerControllers.Num(); i++)
    {
        if (i == NULL)
            return;
        else if (i == 0)
            ControllerLeft = PlayerControllers[0];
        else if (i == 1)
            ControllerRight = PlayerControllers[1];
    }
}

//void UInputManager::Update()
//{
//}

//void UInputManager::SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType)
//{
    //UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PCL->GetLocalPlayer());
    //if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(ControllerLeft->GetLocalPlayer()))
    //{
        //KeysArray = Subsystem->QueryKeysMappedToAction(MoveAction_CL);
        //for (FKey keys : KeysArray)
        //{
        //    Subsystem->AddPlayerMappedKey(MoveAction_CL->GetFName(), keys);
        //}
        //KeysArray = Subsystem->QueryKeysMappedToAction(MoveAction_CR);
        //for (FKey keys : KeysArray)
        //{
        //    Subsystem->AddPlayerMappedKey(MoveAction_CR->GetFName(), keys);
        //}

        //UEnhancedPlayerInput* PlayerInput = Subsystem->GetPlayerInput();
//    }
//}

//void UInputManager::ResetInputKeys()
//{
//    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(ControllerLeft->GetLocalPlayer()))
//    {
        //UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PCL->GetLocalPlayer());
        //UEnhancedInputUserSettings* Settings = Input->getGetUserSettings();
        ////Subsystem->GetAllPlayerMappedKeys()
        //for (auto Mapping : InputMappingLR->GetMappings())
        //{
        //    Subsystem->RemovePlayerMappedKeyInSlot(Mapping.GetMappingName());
        //}
//    }
//}

//bool UInputManager::IsKeyBoard()
//{
//    for (auto Mapping : InputMapping->GetMappings())
//    {
//        return !Mapping.Key.IsGamepadKey() && !Mapping.Key.IsMouseButton();
//    }
//	return false;
//}

//int32 UInputManager::GetPrimaryUserIndex()
//{
//    TArray<ACharacter*> spawnedChars;
//    FindAllTheActors(GetWorld(), spawnedChars);
//    if (spawnedChars.Num() > 0)
//        return spawnedChars.Num();
//    else
//	    return -1;
//}

//int32 UInputManager::GetPlayerID(int32 ControllerId)
//{
//	return UGameplayStatics::GetPlayerControllerID(ControllerId == 0 ? ControllerLeft : ControllerRight);
//}

//UInputMappingContext* UInputManager::GetKeyMap()
//{
//	return InputMapping.Get();
//}

//const UInputAction* UInputManager::GetInputAction(APlayerController* MappingNameCtrl, FName ActionName)
//{
//    for (auto Mapping : InputMapping->GetMappings())
//    {
//        if (MappingNameCtrl->GetFName().ToString().Contains("C_0"))
//        {
//            if (Mapping.Action.Get()->GetName() != ActionName)
//                return nullptr;
//            else
//                return Mapping.Action.Get();
//        }
//        else if(MappingNameCtrl->GetFName().ToString().Contains("C_1"))
//        {
//            if (Mapping.Action.Get()->GetName() != ActionName)
//                return nullptr;
//            else
//                return Mapping.Action.Get();
//        }
//    }
//    return nullptr;
//}

//EDeviceType UInputManager::GetInputDeviceType(int32 PlayerIndex)
//{
//    for (auto Mapping : InputMapping->GetMappings())
//    {
//        if (Mapping.Key.IsGamepadKey())
//            return EDeviceType::GamePad;
//        else
//        {
//            if (!Mapping.Key.IsMouseButton())
//                return EDeviceType::Keyboard;
//            else
//                return EDeviceType::AnyType;
//        }
//    }
//	return EDeviceType::Invalid;
//}

//static ULocalPlayer* GetLocalPlayer(const UEnhancedPlayerInput* PlayerInput)
//{
//    if (PlayerInput)
//    {
//        // Getting the owning Player Controller can also be useful :) 
//        if (APlayerController* PC = Cast<APlayerController>(PlayerInput->GetOuter()))
//        {
//            return Cast<ULocalPlayer>(PC->GetLocalPlayer());
//        }
//    }
//    return nullptr;
//}

//
// DEV: InputCoreTypes

//for (APlayerController* ctrl : spawnedController)
//{
//    if (ctrl->GetFName().ToString().Contains("C_0"))
//    {
//
//    }
//}