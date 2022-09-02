#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "TresGumiShipMovementCompoBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMovementCompoBase : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UTresGumiShipMovementCompoBase();
};

