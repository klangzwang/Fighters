#pragma once
#include "EngineUtils.h"
#include "GameFramework/Character.h"
#include "InputSystem.h"
#include "EDeviceType.h"
#include "EFightingConfigKey.h"
#include "EKeyOperation.h"
#include "UObject/Object.h"
#include "InputMappingContext.h"
#include "InputManager.generated.h"

USTRUCT(BlueprintType)
struct FInputActionMapping
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|InputManager", meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* InputMapping;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|InputManager", meta = (AllowPrivateAccess = "true"))
    TArray<UInputAction*> InputActions;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|InputManager", meta = (AllowPrivateAccess = "true"))
    TArray<FKey> KeysArray;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fighters|InputManager", meta = (AllowPrivateAccess = "true"))
    TArray<FName> InputActionNames;
};

USTRUCT(BlueprintType)
struct FMappingList
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FInputActionMapping> IAL_Members;
};


UCLASS(Blueprintable)
class INPUTSYSTEM_API UInputManager : public UObject
{
    GENERATED_BODY()

public:

    UInputManager();

    virtual void SetupInputComponent();

public:

    UFUNCTION(BlueprintCallable)
    void Initialize();

    //UFUNCTION(BlueprintCallable)
    //void Update();
    //UFUNCTION(BlueprintCallable)
    //void SetKey(int32 PlayerIndex, EFightingConfigKey FightingConfigKey, EKeyOperation KeyOperation, EDeviceType DeviceType);
    //UFUNCTION(BlueprintCallable)
    //void ResetInputKeys();
    //UFUNCTION(BlueprintCallable)
    //bool IsKeyBoard();
    //UFUNCTION(BlueprintCallable)
    //int32 GetPrimaryUserIndex();
    //UFUNCTION(BlueprintCallable)
    //int32 GetPlayerID(int32 ControllerId);
    //UFUNCTION(BlueprintCallable)
    //UInputMappingContext* GetKeyMap();
    //UFUNCTION(BlueprintCallable)
    //EDeviceType GetInputDeviceType(int32 PlayerIndex);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|InputManager")
    TArray<APlayerController*> PlayerControllers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|InputManager")
    APlayerController* ControllerLeft;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|InputManager")
    APlayerController* ControllerRight;

public:

    //UFUNCTION()
    //const UInputAction* GetInputAction(APlayerController* MappingNameCtrl, FName ActionName);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|InputManager")
    FMappingList mappingList;
};
