#pragma once
#include "CoreMinimal.h"
#include "WorldLight.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FWorldLight {
	
    GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pLightComp;
    
    FIGHTERS_API FWorldLight();
};
