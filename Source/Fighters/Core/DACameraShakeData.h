#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DACameraShakeData.generated.h"

USTRUCT(BlueprintType)
struct FCameraShakeLine
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString Name;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<UCameraShakeBase> CameraShake;
};

UCLASS()
class FIGHTERS_API UDACameraShakeData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FCameraShakeLine> CameraShakeLines;
};
