#pragma once
#include "CoreMinimal.h"
#include "FGCharacterBase.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGAnimNotifyModifyBox.generated.h"

USTRUCT(BlueprintType)
struct FBoxModifier
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	int ComponentNumber = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector MoveBox = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector ScaleBox = FVector(1, 1, 1);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	bool HideBox = false;
};

UCLASS()
class FIGHTERS_API UFGAnimNotifyModifyBox : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifyModifyBox();

	virtual FString GetNotifyName_Implementation() const override { return "MODIFYBOX"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	TArray<FBoxModifier> BoxModifiers;
};
