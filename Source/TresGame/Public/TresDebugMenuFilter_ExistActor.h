#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuFilter.h"
#include "TresDebugMenuFilter_ExistActor.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuFilter_ExistActor : public UTresDebugMenuFilter {
    GENERATED_BODY()
public:
    UTresDebugMenuFilter_ExistActor();
};

