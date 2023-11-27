#pragma once
#include "InputActionKeyBinding.h"
#include "EnhancedActionKeyMapping.h"
#include "InputBlueprintLibrary.generated.h"

UCLASS()
class UInputBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Fighters|EnhancedInput")
	static void GetActionMappingsForKey(FKey Key, TArray<FEnhancedActionKeyMapping>& ActionBindings);

	//UFUNCTION(BlueprintPure, Category = "Input|Key Rebinding", DisplayName = "Get Input Action")
	//static FActionKeyBinding GetInputAction(const FKeyEvent& KeyEvent);
	//UFUNCTION(BlueprintPure, Category = "Input|Key Rebinding", DisplayName = "Get All Action Key Bindings")
	//static void GetAllActionKeyBindings(TArray<FActionKeyBinding>& Bindings);
	//UFUNCTION(BlueprintCallable, Category = "Input|Key Rebinding", DisplayName = "Remove Action Key Binding")
	//static void RemoveActionKeyBinding(FActionKeyBinding BindingToRemove);
	//UFUNCTION(BlueprintCallable, Category = "Input|Key Rebinding", DisplayName = "Rebind Action Key Binding", meta = (AllowPrivateAccess = "true"))
	//static bool RebindActionKey(FActionKeyBinding OriginalBinding, FActionKeyBinding NewBinding);

public:

	static FORCEINLINE void UpdateActionMapping(FEnhancedActionKeyMapping& Destination, const FActionKeyBinding& NewInput)
	{
		Destination.Key = NewInput.Key;
	}
};