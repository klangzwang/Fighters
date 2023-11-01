#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotifyState.h"
#include "FGAnimNotifyFriction.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifyFriction : public UFGAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifyFriction();

	virtual FString GetNotifyName_Implementation() const override { return "FRICTION"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	float frictionAmount;

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	float brakingFF;

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	float brakingDW;
};