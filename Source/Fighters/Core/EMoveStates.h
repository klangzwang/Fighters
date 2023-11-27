#pragma once
#include "CoreMinimal.h"
#include "EMoveStates.generated.h"

UENUM(BlueprintType)
enum class EMoveStates : uint8
{
	VE_Default			UMETA(DisplayName = "Default"),
	VE_MovingForward	UMETA(DisplayName = "MovingForward"),
	VE_MovingBackward	UMETA(DisplayName = "MovingBackward")
};