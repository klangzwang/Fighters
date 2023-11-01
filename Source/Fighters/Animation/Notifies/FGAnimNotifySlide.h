#pragma once
#include "CoreMinimal.h"
#include "FGAnimNotify.h"
#include "FGAnimNotifySlide.generated.h"

UENUM(BlueprintType)
enum class ESlideType : uint8
{
	VE_Low		UMETA(DisplayName = "Low"),
	VE_Normal	UMETA(DisplayName = "Normal"),
	VE_High		UMETA(DisplayName = "High")
};

UCLASS()
class FIGHTERS_API UFGAnimNotifySlide : public UFGAnimNotify
{
	GENERATED_BODY()

public:

	UFGAnimNotifySlide();

	virtual FString GetNotifyName_Implementation() const override { return "SLIDE"; };

public:

	void PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

public:

	UFUNCTION()
	void PerformSlide(AFGCharacterBase* Character, float slideValue);

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	ESlideType slideType;

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	float slideAmount;

	UPROPERTY(EditAnywhere, Category = "Fighters|AnimNotify")
	bool isPushBack;
};
