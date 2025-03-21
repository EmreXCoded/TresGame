#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction_e_dw405_ComboInterface.h"
#include "TresAction_e_dw405_Interface.h"
#include "TresAttack_e_dw405_ComboBase.generated.h"

class UTresAttack_e_dw405_Base;
class UEnvQuery;

UCLASS(Abstract, Blueprintable)
class UTresAttack_e_dw405_ComboBase : public UTresAttackDefinitionBase, public ITresAction_e_dw405_ComboInterface, public ITresAction_e_dw405_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAttack_e_dw405_Base* m_CurrentState;
    
public:
    UTresAttack_e_dw405_ComboBase();
    
    // Fix for true pure virtual functions not being implemented
};

