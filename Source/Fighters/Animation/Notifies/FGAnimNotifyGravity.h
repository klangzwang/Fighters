#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotify.h"
#include "FGAnimNotifyGravity.generated.h"

UENUM(BlueprintType)
enum class EJumpingType : uint8
{
	VE_StartJumping	UMETA(DisplayName = "StartJumping"),
	VE_LoopJumping	UMETA(DisplayName = "LoopJumping"),
	VE_EndJumping	UMETA(DisplayName = "EndJumping")
};

UCLASS()
class FIGHTERS_API UFGAnimNotifyGravity : public UFGAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifyGravity();

	virtual FString GetNotifyName_Implementation() const override { return "RESET"; };

public:

	void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	EJumpingType jumpingType;
};
