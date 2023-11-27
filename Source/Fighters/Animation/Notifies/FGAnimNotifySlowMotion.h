#pragma once
#include "CoreMinimal.h"
#include "FGCharacterBase.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGAnimNotifySlowMotion.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifySlowMotion : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifySlowMotion();

	virtual FString GetNotifyName_Implementation() const override { return "SLOWMOTION"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:

	float CalcTriggerTimes(FAnimNotifyEvent* triggerTimes);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	float customPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	bool tickToDefault;
};
