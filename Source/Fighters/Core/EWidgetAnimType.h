#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimType.generated.h"

UENUM(BlueprintType)
enum class EWidgetAnimType : uint8
{
    None,
    ScaleAndFade,
    Fade
};
