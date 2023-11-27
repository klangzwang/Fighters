#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelSequence.h"
#include "DASequenceData.generated.h"

USTRUCT(BlueprintType)
struct FSequenceLine
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	
	FString Name;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	ULevelSequence* Sequence;
};

UCLASS()
class FIGHTERS_API UDASequenceData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FSequenceLine> SequenceLines;
};