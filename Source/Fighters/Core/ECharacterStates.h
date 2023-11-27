#pragma once
#include "CoreMinimal.h"
#include "ECharacterStates.generated.h"

UENUM(BlueprintType)
enum class ECharacterStates : uint8
{
	VE_Default			UMETA(DisplayName = "Default"),
	VE_Jumping			UMETA(DisplayName = "Jumping"),
	VE_Crouching		UMETA(DisplayName = "Crouching"),
	VE_Dashing			UMETA(DisplayName = "Dashing"),
	VE_Rolling			UMETA(DisplayName = "Rolling"),
	VE_Attacking		UMETA(DisplayName = "Attacking"),
	VE_Attacked			UMETA(DisplayName = "Attacked"),
	VE_OnGround			UMETA(DisplayName = "OnGround")
};