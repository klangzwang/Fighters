// Copyright helgenius Media 2016. All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Components/Image.h"
#include "Sound/SoundBase.h"
#include "FGAnimMontage.h"
#include "FGCharacter.generated.h"

USTRUCT(BlueprintType)
struct FCharacterMesh
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	USkeletalMesh* mMesh;
};

USTRUCT(BlueprintType)
struct FCharacterSounds
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	USoundBase* mTauntSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	USoundBase* mWinSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	USoundBase* mLooseSound;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	USoundBase* mVoiceSound;
};

USTRUCT(BlueprintType)
struct FCharacterClass : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FText mCharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FText mCharacterDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FCharacterMesh characterMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FCharacterSounds characterSounds;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FAnimMontageMovement movement;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FAnimMontageFighting fighting;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	FVector characterSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	UTexture2D* portraitLeft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	UTexture2D* portraitRight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	UTexture2D* mSmallIcon;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	UTexture2D* mBigIcon;
};

UCLASS()
class FIGHTERS_API AFGCharacter : public AActor
{
	GENERATED_BODY()
	
public:

	AFGCharacter();

	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	static FCharacterClass GetCharacterClass(TSubclassOf<AFGCharacter> inClass);
	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	static FText GetCharacterName(TSubclassOf<AFGCharacter> inClass);

	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	FCharacterMesh GetCharacterMesh(TSubclassOf<AFGCharacter> inClass);
	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	FCharacterSounds GetCharacterSounds(TSubclassOf<AFGCharacter> inClass);

	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	FAnimMontageMovement GetCharacterAnimMovement(TSubclassOf<AFGCharacter> inClass);
	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	FAnimMontageFighting GetCharacterAnimFighting(TSubclassOf<AFGCharacter> inClass);

	UFUNCTION(BlueprintPure, Category = "Fighters|Character")
	FVector GetCharacterSize(TSubclassOf<AFGCharacter> inClass);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Fighters|Character")
	FCharacterClass characterClass;
};
