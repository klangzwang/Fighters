#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8
{
    None,
    MoveRight,
    MoveLeft,
    MoveUp,
    MoveDown,
    LP,
    RP,
    LK,
    RK,
    LPRP,
    LKRK,
    LPLK,
    RPRK
};