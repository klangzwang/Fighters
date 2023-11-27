#pragma once
#include "GameFramework/InputSettings.h"
#include "EnhancedActionKeyMapping.h"
#include "InputActionKeyBinding.generated.h"

USTRUCT(BlueprintType)
struct FActionKeyBinding
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FString ActionName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FKey Key;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FString KeyAsString;

	FActionKeyBinding() {}
	FActionKeyBinding(const FString InActionName, const FKey InKey)
		: Key(InKey)
		, KeyAsString(Key.GetDisplayName().ToString())
	{
		ActionName = InActionName;
	}
	FActionKeyBinding(const FEnhancedActionKeyMapping& Action)
		: Key(Action.Key)
		, KeyAsString(Action.Key.GetDisplayName().ToString())
	{
		ActionName = Action.GetDisplayName().ToString();
	}
};