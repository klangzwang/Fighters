#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotifyState.h"
#include "FGAnimNotifyCombo.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifyCombo : public UFGAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifyCombo();

	virtual FString GetNotifyName_Implementation() const override { return "COMBO"; };

public:

	void PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	FName nextSection;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	bool switchMontage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|AnimNotify")
	UAnimMontage* switchToMontage;
};