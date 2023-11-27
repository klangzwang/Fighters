#pragma once
#include "CoreMinimal.h"
#include "EDeviceType.generated.h"

UENUM()
enum class EDeviceType : uint8 {
    AnyType,
    GamePad,
    Keyboard,
    Invalid,
};

