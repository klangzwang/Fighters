// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "EWinCount.generated.h"

UENUM(BlueprintType)
enum class EWinCount : uint8
{
	VE_Count1		UMETA(DisplayName = "1"),
	VE_Count2		UMETA(DisplayName = "2"),
	VE_Count3		UMETA(DisplayName = "3")
};