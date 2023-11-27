#pragma once
#include "CoreMinimal.h"
#include "SkyLightData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSkyLightData {
	
    GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* pSkyLightActor;
    
    FIGHTERS_API FSkyLightData();
};

