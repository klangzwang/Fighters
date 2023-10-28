// Copyright helgenius Media 2016. All rights reserved.

#include "FGCharacter.h"

AFGCharacter::AFGCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	characterClass.characterSize = FVector(1.f, 1.f, 1.f);
}

FCharacterClass AFGCharacter::GetCharacterClass(TSubclassOf<AFGCharacter> inClass)
{
	return inClass.GetDefaultObject()->characterClass;
}

FText AFGCharacter::GetCharacterName(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.mCharacterName;
}
FCharacterMesh AFGCharacter::GetCharacterMesh(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.characterMesh;
}
FCharacterSounds AFGCharacter::GetCharacterSounds(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.characterSounds;
}
FAnimMontageMovement AFGCharacter::GetCharacterAnimMovement(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.movement;
}
FAnimMontageFighting AFGCharacter::GetCharacterAnimFighting(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.fighting;
}
FVector AFGCharacter::GetCharacterSize(TSubclassOf<AFGCharacter> inClass)
{
	return Cast<AFGCharacter>(inClass->GetDefaultObject())->characterClass.characterSize;
}
