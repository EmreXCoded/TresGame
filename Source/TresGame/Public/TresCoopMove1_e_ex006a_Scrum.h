#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresCoopMove1_e_ex006a_Scrum.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopMove1_e_ex006a_Scrum : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationAcceleration;
    
public:
    UTresCoopMove1_e_ex006a_Scrum();
};

