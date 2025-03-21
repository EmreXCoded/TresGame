#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "TresBTDecorator_CheckHeight.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CheckHeight : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HeightThreshold;
    
    UTresBTDecorator_CheckHeight();
};

