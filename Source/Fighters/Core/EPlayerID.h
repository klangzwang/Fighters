#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.generated.h"

UENUM(BlueprintType)
enum class EPlayerID : uint8
{
    PlayerLeft,
    PlayerRight,
    None,
};
