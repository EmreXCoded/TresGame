#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TresDetectMarkerValidBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDetectMarkerValidBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UTresDetectMarkerValidBoxComponent();
};

