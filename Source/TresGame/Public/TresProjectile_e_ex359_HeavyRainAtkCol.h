#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex359_HeavyRainAtkCol.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex359_HeavyRainAtkCol : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAtkCollProjYawOffset;
    
    ATresProjectile_e_ex359_HeavyRainAtkCol();
};

