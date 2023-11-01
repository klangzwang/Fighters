#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotifyState.h"
#include "FGAnimNotifyModifyBox.generated.h"

UCLASS()
class FIGHTERS_API UFGAnimNotifyModifyBox : public UFGAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifyModifyBox();

	virtual FString GetNotifyName_Implementation() const override { return "MODIFYBOX"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool hideHeadBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	FVector offsetHeadBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float widthHeadBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float heightHeadBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool hideTorsoBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	FVector offsetTorsoBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float widthTorsoBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float heightTorsoBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool hideLegsBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	FVector offsetLegsBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float widthLegsBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float heightLegsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool hideCollisionBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	FVector offsetCollisionBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float widthCollisionBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float heightCollisionBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool hideThrowBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	FVector offsetThrowBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float widthThrowBox;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float heightThrowBox;
};