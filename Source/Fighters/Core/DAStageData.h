#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DAStageData.generated.h"

// /Game/Maps/TestMap/TestMap_PL

USTRUCT(BlueprintType)
struct FStageLine
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString StageName;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* StageTexture;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString StageURL;
};

UCLASS()
class FIGHTERS_API UDAStageData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FStageLine> StageLines;
};
