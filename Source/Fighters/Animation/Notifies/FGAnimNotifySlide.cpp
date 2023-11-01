// Fill out your copyright notice in the Description page of Project Settings.

#include "FGAnimNotifySlide.h"
#include "FGCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

UFGAnimNotifySlide::UFGAnimNotifySlide() : Super()
{
	slideAmount = 0.f;
	isPushBack = false;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(228, 63, 138, 255);
	#endif
}

void UFGAnimNotifySlide::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotify(Character, Controller, MeshComp, Animation);

	if (slideAmount != 0.f)
	{
		PerformSlide(Character, slideAmount);
	}
	else
	{
		switch (slideType)
		{
		case ESlideType::VE_Low:
			PerformSlide(Character, 300.f);
			break;
		case ESlideType::VE_Normal:
			PerformSlide(Character, 500.f);
			break;
		case ESlideType::VE_High:
			PerformSlide(Character, 800.f);
			break;
		default:
			break;
		}
	}
}

void UFGAnimNotifySlide::PerformSlide(AFGCharacterBase* Character, float slideValue)
{
	float slidePush = isPushBack ? -slideValue : slideValue;
	Character->LaunchCharacter(FVector(Character->plFacingRight ? slidePush : -slidePush, 0.f, 0.f), true, false);
}
