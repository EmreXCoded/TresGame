#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipProjectileBase.generated.h"

class ATresGumiShipProjectileBase;
class UTresGumiShipAtkCollisionSetCompo;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipProjectileBase : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipToRecyclePool, ATresGumiShipProjectileBase*, pProjectile, bool&, bWasRecycled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipProjectileOverRange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipOnDestroyOverride);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipProjectileOverRange OnOverRangeDispather;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ProjectileDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionSetCompo* m_pCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDoHomingInDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDestroyWhenHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseInitialOwnerSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSearchWeaponWhenEndPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSearchWeaponWhenHitOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreTargetForwardWhenPredictLocation: 1;
    
public:
    ATresGumiShipProjectileBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveOverRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _ReceiveHit(const FHitResult& rHitResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnHitBinding(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

