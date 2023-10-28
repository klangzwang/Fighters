// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "EStageID.generated.h"

UENUM(BlueprintType)
enum class EStageID : uint8
{
	NON	UMETA(DisplayName = "None"),
	TRA	UMETA(DisplayName = "Training")
};
