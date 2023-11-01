#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FGAnimNotifyState.h"
#include "FGAnimNotifyStrikeBox.generated.h"

class UParticleSystem;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FIGHTERS_API UFGAnimNotifyStrikeBox : public UFGAnimNotifyState
{
	GENERATED_BODY()

public:

	UFGAnimNotifyStrikeBox(const FObjectInitializer& ObjectInitializer);

	virtual FString GetNotifyName_Implementation() const override { return "STRIKEBOX"; };

	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float hitPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox", meta = (EditCondition = "!isSweepHit && !isLaunchHit"))
	bool isSplashHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox", meta = (EditCondition = "!isSplashHit && !isLaunchHit"))
	bool isSweepHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox", meta = (EditCondition = "!isSplashHit && !isSweepHit"))
	bool isLaunchHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float width;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	float height;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool doubleHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|Actor|Hitbox")
	bool showStrikeParticles;
	UPROPERTY(EditAnywhere, Category = "Fighters|Animation|Particles", meta = (EditCondition = "showStrikeParticles"), AdvancedDisplay)
	UParticleSystem* strikeParticles;
	UPROPERTY(EditAnywhere, Category = "Fighters|Animation|Particles|Socket", meta = (EditCondition = "showStrikeParticles"), AdvancedDisplay)
	FName SocketName;
	UPROPERTY(EditAnywhere, Category = "Fighters|Animation|Particles|Transform", meta = (EditCondition = "showStrikeParticles"), AdvancedDisplay)
	FVector LocationOffset;
	UPROPERTY(EditAnywhere, Category = "Fighters|Animation|Particles|Transform", meta = (EditCondition = "showStrikeParticles"), AdvancedDisplay)
	FRotator RotationOffset;
	UPROPERTY(EditAnywhere, Category = "Fighters|Animation|Particles", meta = (EditCondition = "showStrikeParticles"), AdvancedDisplay)
	bool bDestroyAtEnd;

protected:

	bool ValidateParameters(USkeletalMeshComponent* MeshComp);
};