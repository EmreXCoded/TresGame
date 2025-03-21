#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX359_BeamOnSplineInfoSet.h"
#include "TresProjectile_e_ex359_BeamSpawner.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex359_BeamSpawner : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamOnSplineInfoSet m_BeamOnSplineInfoSet;
    
    ATresProjectile_e_ex359_BeamSpawner();
};

