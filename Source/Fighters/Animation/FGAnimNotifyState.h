#pragma once
#include "CoreMinimal.h"
#include "FGCharacterBase.h"
#include "FGOpenController.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGAnimNotifyState.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UFUNCTION(BlueprintCallable, Category = "Fighters|AnimNotify")
	FORCEINLINE void PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* skeletalMesh, UAnimSequenceBase* Animation) const;
};