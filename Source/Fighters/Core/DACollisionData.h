#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGCollisionBox.h"
#include "DACollisionData.generated.h"

USTRUCT()
struct FCollisionLine
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FString CelName;
	
	UPROPERTY(EditAnywhere)
	FString AnimName;
	
	UPROPERTY(EditAnywhere)
	int32 AnimFrame = 0;
	
	UPROPERTY(EditAnywhere)
	TArray<FFGCollisionBox> Boxes;
};

UCLASS()
class FIGHTERS_API UDACollisionData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<FCollisionLine> CollisionLines;
};
