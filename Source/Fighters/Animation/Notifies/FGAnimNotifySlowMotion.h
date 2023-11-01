#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotifyState.h"
#include "FGAnimNotifySlowMotion.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifySlowMotion : public UFGAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifySlowMotion();

	virtual FString GetNotifyName_Implementation() const override { return "SLOWMOTION"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:

	void PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	float CalcTriggerTimes(FAnimNotifyEvent* triggerTimes);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	float customPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	bool tickToDefault;
};
