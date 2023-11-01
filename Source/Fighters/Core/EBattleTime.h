// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "EBattleTime.generated.h"

UENUM(BlueprintType)
enum class EBattleTime : uint8
{
	VE_Time30		UMETA(DisplayName = "30"),
    VE_Time60		UMETA(DisplayName = "60"),
	VE_Time99		UMETA(DisplayName = "99")
};