#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipProjectileFactory.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipProjectileFactory : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipProjectileFactory();
};

