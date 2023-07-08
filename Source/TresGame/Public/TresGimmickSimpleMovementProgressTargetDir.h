#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSimpleMovementProgressStraight.h"
#include "TresGimmickSimpleMovementProgressTargetDir.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresGimmickSimpleMovementProgressTargetDir : public UTresGimmickSimpleMovementProgressStraight {
    GENERATED_BODY()
public:
    UTresGimmickSimpleMovementProgressTargetDir();
};

