#pragma once
#include "CoreMinimal.h"
#include "CharacterLights.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FCharacterLights {
	
    GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pKeyLightP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pKeyLightP2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pBackLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pFillLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pCelShaderLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pFakeRimLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pLeftEyeLightP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pRightEyeLightP1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    ULightComponent* pFaceLightP1;
    
    FIGHTERS_API FCharacterLights();
};

