#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_e_ex359_BeamBase.h"
#include "TresProjectile_e_ex359_HeavyRain.generated.h"

class ATresProjectileBase;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex359_HeavyRain : public ATresProjectile_e_ex359_BeamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_AtkCollProjClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_AtkCollProj;
    
public:
    ATresProjectile_e_ex359_HeavyRain();
};

