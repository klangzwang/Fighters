#include "InputBlueprintLibrary.h"
#include "EnhancedInputSubsystems.h"

void UInputBlueprintLibrary::GetActionMappingsForKey(FKey Key, TArray<FEnhancedActionKeyMapping>& ActionBindings)
{
	ActionBindings.Empty();

	//const UPlayerMappableKeySettings* Settings = GetDefault<UPlayerMappableKeySettings>();
	const UEnhancedInputLocalPlayerSubsystem* Settings = GetDefault<UEnhancedInputLocalPlayerSubsystem>();
	if (!Settings)
	{
		return;
	}

	const TArray<FEnhancedActionKeyMapping>& ActionMappings = Settings->GetAllPlayerMappableActionKeyMappings();

	for (const FEnhancedActionKeyMapping& ActionKeyMapping : ActionMappings)
	{
		if (ActionKeyMapping.Key == Key)
		{
			ActionBindings.Add(ActionKeyMapping);
		}
	}
}

//FFGActionInputBinding UFGInputBlueprintLibrary::GetInputAction(const FKeyEvent& KeyEvent)
//{
//	FFGActionInputBinding Binding;
//
//	Binding.Key = KeyEvent.GetKey();
//	Binding.KeyAsString = Binding.Key.GetDisplayName().ToString();
//
//	Binding.bAlt = KeyEvent.IsAltDown();
//	Binding.bCtrl = KeyEvent.IsControlDown();
//	Binding.bShift = KeyEvent.IsShiftDown();
//	Binding.bCmd = KeyEvent.IsCommandDown();
//
//	return Binding;
//}
//
//void UFGInputBlueprintLibrary::GetAllActionKeyBindings(TArray<FFGActionInputBinding>& Bindings)
//{
//	Bindings.Empty();
//
//	const UInputSettings* Settings = GetDefault<UInputSettings>();
//	if (!Settings)
//	{
//		return;
//	}
//
//	const TArray<FInputActionKeyMapping>& ActionMappings = Settings->GetActionMappings();
//	for (const FInputActionKeyMapping& ActionKeyMapping : ActionMappings)
//	{
//		Bindings.Add(FFGActionInputBinding(ActionKeyMapping));
//	}
//}
//
//void UFGInputBlueprintLibrary::RemoveActionKeyBinding(FFGActionInputBinding BindingToRemove)
//{
//	UInputSettings* Settings = GetMutableDefault<UInputSettings>();
//	if (!Settings)
//	{
//		return;
//	}
//
//	const TArray<FInputActionKeyMapping>& ActionMappings = Settings->GetActionMappings();
//
//	bool bFound = false;
//	for (int32 Index = 0; Index < ActionMappings.Num(); ++Index)
//	{
//		if (ActionMappings[Index].Key == BindingToRemove.Key)
//		{
//			bFound = true;
//			//ActionMappings.RemoveAt(Index);
//			Index = 0;
//		}
//	}
//
//	if (bFound)
//	{
//		Settings->SaveKeyMappings();
//
//		for (TObjectIterator<UPlayerInput> It; It; ++It)
//		{
//			It->ForceRebuildingKeyMaps(true);
//		}
//	}
//}
//
//bool UFGInputBlueprintLibrary::RebindActionKey(FFGActionInputBinding OriginalBinding, FFGActionInputBinding NewBinding)
//{
//	const UInputSettings* Settings = GetDefault<UInputSettings>();
//	if (!Settings)
//	{
//		return false;
//	}
//
//	const TArray<FInputActionKeyMapping>& ActionMappings = Settings->GetActionMappings();
//
//	bool bFound = false;
//	for (const FInputActionKeyMapping& ActionKeyMapping : ActionMappings)
//	{
//		if (ActionKeyMapping.ActionName.ToString() == OriginalBinding.ActionName && ActionKeyMapping.Key == OriginalBinding.Key)
//		{
//			//UpdateActionMapping(ActionKeyMapping, NewBinding);
//			bFound = true;
//			break;
//		}
//	}
//
//	if (bFound)
//	{
//		const_cast<UInputSettings*>(Settings)->SaveKeyMappings();
//
//		for (TObjectIterator<UPlayerInput> It; It; ++It)
//		{
//			It->ForceRebuildingKeyMaps(true);
//		}
//	}
//	return bFound;
//}
