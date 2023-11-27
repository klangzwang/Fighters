#pragma once
#include "CoreMinimal.h"
#include "EMenuType.generated.h"

UENUM(BlueprintType)
enum class EMenuType : uint8
{
    BeginPlay,
    MainMenu,
    InGame,
    LoadingScreen,
	PauseMenu
};
