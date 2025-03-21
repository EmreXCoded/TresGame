#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBlizzard.h"
#include "TresProjectile_e_ex053_Blizzara.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex053_Blizzara : public ATresProj_MagicBlizzard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IDName;
    
public:
    ATresProjectile_e_ex053_Blizzara();
};

