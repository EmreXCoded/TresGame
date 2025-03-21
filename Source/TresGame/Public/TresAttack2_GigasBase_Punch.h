#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_GigasBase_Punch.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_GigasBase_Punch : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_PunchTurnTime;
    
public:
    UTresAttack2_GigasBase_Punch();
};

