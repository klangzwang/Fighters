// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "FGAnimMontage.generated.h"

USTRUCT(BlueprintType)
struct FAnimMontageMovement
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* TauntP_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* TauntS_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Idle_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Flip_Standing_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Flip_Crouching_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Walk_Forward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Walk_Backward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Jump_Up_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Jump_Forward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Jump_Backward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Crouch_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Roll_Forward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Roll_Backward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Dash_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Run_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Ground_Forward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Ground_Backward_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Block_Standing_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Block_Crouching_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Win_Round_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* TimeOver_Round_Montage;
};

USTRUCT(BlueprintType)
struct FAnimMontageFighting
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LP_Standing_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RP_Standing_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LK_Standing_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RK_Standing_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LP_Crouching_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RP_Crouching_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LK_Crouching_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RK_Crouching_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LP_Jumping_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RP_Jumping_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LK_Jumping_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RK_Jumping_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LP_Direction_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RP_Direction_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* LK_Direction_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* RK_Direction_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HeavyPunch_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HeavyKick_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Throw_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* Special1_Montage;
};

USTRUCT(BlueprintType)
struct FAnimMontageHitDamage
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimMontage*> BasicStrikes_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HitGround00_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HitGround01_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HitGround02_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HitFinisher_Montage;
};