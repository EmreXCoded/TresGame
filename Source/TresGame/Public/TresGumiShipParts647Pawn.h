#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts647Pawn.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipParts647Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxYaw;
    
public:
    ATresGumiShipParts647Pawn();
};

