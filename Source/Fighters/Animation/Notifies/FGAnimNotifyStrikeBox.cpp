#include "FGAnimNotifyStrikeBox.h"
#include "Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"

UFGAnimNotifyStrikeBox::UFGAnimNotifyStrikeBox(const FObjectInitializer& ObjectInitializer) : Super()
{
	strikeParticles = nullptr;
	LocationOffset.Set(0.0f, 0.0f, 0.0f);
	RotationOffset = FRotator(0.0f, 0.0f, 0.0f);

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyStrikeBox::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		if (ValidateParameters(MeshComp))
			UParticleSystemComponent* NewComponent = UGameplayStatics::SpawnEmitterAttached(strikeParticles, MeshComp, SocketName, LocationOffset, RotationOffset, EAttachLocation::KeepRelativeOffset, !bDestroyAtEnd);

		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			auto mesh = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(5));

			mesh->SetRelativeLocation(FVector(40.f, 0.f, height));
			mesh->SetRelativeScale3D(FVector(width, 1.f, doubleHeight ? 2.f : 1.f));
			mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			mesh->SetGenerateOverlapEvents(true);
			mesh->Activate();

			if (hitPoints > 0)
				Player->hitPoint = hitPoints;
			if (isSplashHit)
				Player->isSplashHit = true;
			if (isSweepHit)
				Player->isSweepHit = true;
			if (isLaunchHit)
				Player->isLaunchHit = true;
		}
	}
	Received_NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
}

void UFGAnimNotifyStrikeBox::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		TArray<USceneComponent*> Children;
		MeshComp->GetChildrenComponents(false, Children);

		for (USceneComponent* Component : Children)
		{
			if (UParticleSystemComponent* ParticleComponent = Cast<UParticleSystemComponent>(Component))
			{
				bool bSocketMatch = ParticleComponent->GetAttachSocketName() == SocketName;
				bool bTemplateMatch = ParticleComponent->Template == strikeParticles;

				if (bSocketMatch && bTemplateMatch && !ParticleComponent->bWasDeactivated)
				{
					ParticleComponent->SetVisibility(showStrikeParticles);

					if (bDestroyAtEnd)
					{
						ParticleComponent->DestroyComponent();
					}
					else
					{
						ParticleComponent->DeactivateSystem();
					}
					break;
				}
			}
		}

		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			auto mesh = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(5));

			mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			mesh->SetGenerateOverlapEvents(false);
			mesh->Deactivate();
			mesh->SetRelativeScale3D(FVector(0.f, 0.f, 0.f));
			mesh->SetRelativeLocation(FVector(40.f, 0.f, height));

			Player->hitPoint = 0.f;
			Player->isSplashHit = false;
			Player->isSweepHit = false;
			Player->isLaunchHit = false;
		}
	}
	Received_NotifyEnd(MeshComp, Animation, EventReference);
}

bool UFGAnimNotifyStrikeBox::ValidateParameters(USkeletalMeshComponent* MeshComp)
{
	bool bValid = true;
	if (!strikeParticles)
	{
		bValid = false;
	}
	else if (!MeshComp->DoesSocketExist(SocketName) && MeshComp->GetBoneIndex(SocketName) == INDEX_NONE)
	{
		bValid = false;
	}
	else if (!showStrikeParticles)
	{
		bValid = false;
	}
	return bValid;
}
