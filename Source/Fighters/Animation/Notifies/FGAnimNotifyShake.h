#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotify.h"
#include "FGAnimNotifyShake.generated.h"

class UMatineeCameraShake;

UCLASS()
class FIGHTERS_API UFGAnimNotifyShake : public UFGAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifyShake();

	virtual FString GetNotifyName_Implementation() const override { return "SHAKE"; };

public:

	void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	bool isLowShake;
};
