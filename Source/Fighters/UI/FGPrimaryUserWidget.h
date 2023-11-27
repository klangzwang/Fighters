#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FGPrimaryUserWidget.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FInputActionExecutedDelegate, FName, ActionName);

USTRUCT(BlueprintType)
struct FInputActionBindingHandle
{
    GENERATED_BODY()

public:

    FUIActionBindingHandle Handle;
};

UCLASS(Abstract, Blueprintable, EditInlineNew, meta = (DisableNativeTick))
class FIGHTERS_API UFGPrimaryUserWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:

    UFGPrimaryUserWidget();

private:

    TArray<FUIActionBindingHandle> BindingHandles;

protected:

    virtual void NativeDestruct() override;

    UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
    void RegisterBinding(FDataTableRowHandle InputAction, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandle& BindingHandle);

    UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
    void UnregisterBinding(FInputActionBindingHandle BindingHandle);

    UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
    void UnregisterAllBindings();
};
