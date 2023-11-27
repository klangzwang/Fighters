#pragma once
#include "CoreMinimal.h"
#include "HeightFogData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHeightFogData {
	
    GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* pFogActor;
    
    FIGHTERS_API FHeightFogData();
};

