#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DAMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FMaterialLine
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString Name;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<UMaterialInterface*> Material;
};

UCLASS()
class FIGHTERS_API UDAMaterialData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FMaterialLine> MaterialLines;
};
