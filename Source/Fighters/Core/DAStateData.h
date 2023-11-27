#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FGState.h"
#include "DAStateData.generated.h"

UCLASS()
class FIGHTERS_API UDAStateData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<UFGState>> FGStateArray;
};
