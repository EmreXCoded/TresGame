#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy618Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy618Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pThrusterVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pShockWaveVFX;
    
public:
    ATresGumiShipEnemy618Pawn();
};

