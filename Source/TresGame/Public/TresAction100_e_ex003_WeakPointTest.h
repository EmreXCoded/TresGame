#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex003_WeakPointTest.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction100_e_ex003_WeakPointTest : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_LoopMotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_MoveSpeed;
    
public:
    UTresAction100_e_ex003_WeakPointTest();
};

