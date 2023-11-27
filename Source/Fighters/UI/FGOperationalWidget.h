#pragma once
#include "CoreMinimal.h"
#include "FGBaseWidget.h"
#include "InputSystem/EUiOperation.h"
#include "FGOperationalWidget.generated.h"

class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOperationalWidgetSectionNext, int32, PlayerID, EUiOperation, Operation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOperationalWidgetSectionBack, int32, PlayerID, EUiOperation, Operation);

UCLASS(Abstract, EditInlineNew)
class FIGHTERS_API UFGOperationalWidget : public UFGBaseWidget {
	
    GENERATED_BODY()
	
public:

    UFGOperationalWidget();

    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UWidget*> OptionArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOperationalWidgetSectionNext SectionNext;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOperationalWidgetSectionBack SectionBack;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateUnaryCursor(uint8 CursorIndex);

    UFUNCTION(BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCursor_Grid(int32 PlayerID, EUiOperation Operation, bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCursor(int32 PlayerID, EUiOperation Operation, uint8 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cancel(int32 PlayerID, EUiOperation Operation);
};

