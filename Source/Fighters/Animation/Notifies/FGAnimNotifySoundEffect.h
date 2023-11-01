#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotify.h"
#include "FGAnimNotifySoundEffect.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifySoundEffect : public UFGAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifySoundEffect();

	virtual FString GetNotifyName_Implementation() const override { return "SOUNDEFFECT"; };

public:

	void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify", meta = (ExposeOnSpawn = true))
	TArray<USoundBase*> soundEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify", meta = (ExposeOnSpawn = true))
	float VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify", meta = (ExposeOnSpawn = true))
	float PitchMultiplier;
};
