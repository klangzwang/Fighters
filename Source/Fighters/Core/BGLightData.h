#pragma once
#include "CoreMinimal.h"
#include "BGLightData.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FBGLightData {
	
    GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pLightComp;
    
    FIGHTERS_API FBGLightData();
};

