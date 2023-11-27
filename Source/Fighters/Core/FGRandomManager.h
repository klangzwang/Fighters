#pragma once
#include "CoreMinimal.h"
#include "FGRandomManager.generated.h"

USTRUCT()
struct FFGRandomManager
{
	GENERATED_BODY()
	
	UPROPERTY()
	int32 Seed = 0;
	
	void InitSeed(int32 InSeed);
	static int32 GenerateRandomNumber();
};