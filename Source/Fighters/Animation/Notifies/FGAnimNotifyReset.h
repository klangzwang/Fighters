#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotify.h"
#include "FGAnimNotifyReset.generated.h"

UENUM(BlueprintType)
enum class EResetType : uint8
{
	VE_CanMove		UMETA(DisplayName = "CanMove"),
	VE_CanAttack	UMETA(DisplayName = "CanAttack"),
	VE_CharState	UMETA(DisplayName = "CharState"),
	VE_Gravity		UMETA(DisplayName = "Gravity"),
	VE_Friction		UMETA(DisplayName = "Friction"),
	VE_Collision	UMETA(DisplayName = "Collision"),
	VE_UsingLRPK	UMETA(DisplayName = "UsingLRPK"),
	VE_Running		UMETA(DisplayName = "Running"),
	VE_OnGround		UMETA(DisplayName = "OnGround")
};

UCLASS()
class FIGHTERS_API UFGAnimNotifyReset : public UFGAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifyReset();

	virtual FString GetNotifyName_Implementation() const override { return "RESET"; };

public:

	void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	TArray<EResetType> resetType;
};
