#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DASoundData.generated.h"

USTRUCT()
struct FSoundLine
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FString Name;
	
	UPROPERTY(EditAnywhere)
	USoundBase* SoundWave;
	
	UPROPERTY(EditAnywhere)
	float MaxDuration = 60;
};

UCLASS()
class FIGHTERS_API UDASoundData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<FSoundLine> SoundLines;
};
