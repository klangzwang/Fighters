#pragma once
#include "CoreMinimal.h"
#include "FGCharacterBase.h"
#include "FGOpenController.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FGAnimNotify.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotify : public UAnimNotify
{
	GENERATED_BODY()

public:

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UFUNCTION(BlueprintCallable, Category = "Fighters|AnimNotify")
	FORCEINLINE void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* skeletalMesh, UAnimSequenceBase* Animation) const;
};
