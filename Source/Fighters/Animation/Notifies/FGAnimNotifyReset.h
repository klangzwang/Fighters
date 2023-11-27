#pragma once
#include "CoreMinimal.h"
#include "FGCharacterBase.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FGAnimNotifyReset.generated.h"

UENUM(BlueprintType)
enum class EResetType : uint8
{
	VE_CanMove		UMETA(DisplayName = "CanMove"),
	VE_CanAttack	UMETA(DisplayName = "CanAttack"),
	VE_CharState	UMETA(DisplayName = "CharState"),
	VE_Gravity		UMETA(DisplayName = "Gravity"),
	VE_Friction		UMETA(DisplayName = "Friction"),
	VE_Collision	UMETA(DisplayName = "Collision")
};

UCLASS()
class FIGHTERS_API UFGAnimNotifyReset : public UAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifyReset();

	virtual FString GetNotifyName_Implementation() const override { return "RESET"; };

	virtual void Notify(USkeletalMeshComponent* meshComp, UAnimSequenceBase* animation) override;

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	TArray<EResetType> resetType;
};
