#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputSystem/EUiOperation.h"
#include "FGInputBaseUserWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class FIGHTERS_API UFGInputBaseUserWidget : public UUserWidget {
	
    GENERATED_BODY()
	
public:

    UFGInputBaseUserWidget();
	
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
};
