#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputAction.h"
#include "KeyMap.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FKeyMappingData : public FTableRowBase
{
	GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|InputSystem", meta = (AllowPrivateAccess = "true"))
    FName MappingName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|InputSystem", meta = (AllowPrivateAccess = "true"))
    UInputAction* InputAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fighters|InputSystem", meta = (AllowPrivateAccess = "true"))
    FKey InputActionKey;
};
