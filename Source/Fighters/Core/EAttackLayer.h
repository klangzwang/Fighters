#pragma once
#include "CoreMinimal.h"
#include "EAttackLayer.generated.h"

UENUM(BlueprintType)
enum class EAttackLayer : uint8
{
	E_None				UMETA(DisplayName = "None"),
	E_LowerAttack		UMETA(DisplayName = "LowerAttack"),
	E_MiddlAttack		UMETA(DisplayName = "MiddlAttack"),
	E_UpperAttack		UMETA(DisplayName = "UpperAttack")
};