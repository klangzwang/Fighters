#pragma once
#include "CoreMinimal.h"
#include "FGAnimMontage.h"
#include "Components/ActorComponent.h"
#include "FGActionComponent.generated.h"

USTRUCT(BlueprintType)
struct FActAnimations
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent|Acimations")
	FAnimMontageMovement Movement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent|Acimations")
	FAnimMontageFighting Fighting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent|Acimations")
	FAnimMontageHitDamage HitDamage;
};

USTRUCT(BlueprintType)
struct FActInputs
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_MoveRightCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_JumpingCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_CrouchingCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RollCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_DashCL;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_LPCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RPCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_LKCL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RKCL;

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_MoveRightCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_JumpingCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_CrouchingCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RollCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_DashCR;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_LPCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RPCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_LKCR;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fighters|EnhancedInput", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_RKCR;
};

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FIGHTERS_API UFGActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UFGActionComponent();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent")
	bool Debug;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent|Acimations")
	FActAnimations ActionAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|ActionComponent|Acimations")
	FActInputs ActionInputs;
};
