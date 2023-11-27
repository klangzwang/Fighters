#include "FGAnimNotifyModifyBox.h"
#include "Engine.h"

UFGAnimNotifyModifyBox::UFGAnimNotifyModifyBox() : Super()
{
	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(0, 0, 196, 255);
	#endif
}

void UFGAnimNotifyModifyBox::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			if (BoxModifiers.Num() == 0)
				return;

			for (int i = 0; i < BoxModifiers.Num(); i++)
			{
				UStaticMeshComponent* box = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(BoxModifiers[i].ComponentNumber));
				box->SetRelativeLocation(BoxModifiers[i].MoveBox);
				box->SetRelativeScale3D(BoxModifiers[i].ScaleBox);
				box->SetVisibility(!BoxModifiers[i].HideBox);
			}
		}
	}
}

void UFGAnimNotifyModifyBox::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			auto headbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(0));
			auto torsobox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(1));
			auto legsbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(2));
			auto collbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(3));
			auto throwbox = Cast<UStaticMeshComponent>(Player->GetMesh()->GetChildComponent(4));

			headbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			headbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			torsobox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			torsobox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			legsbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			legsbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			collbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			collbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			throwbox->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
			throwbox->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

			headbox->SetVisibility(true);
			torsobox->SetVisibility(true);
			legsbox->SetVisibility(true);
			collbox->SetVisibility(true);
			throwbox->SetVisibility(true);
		}
	}
}
