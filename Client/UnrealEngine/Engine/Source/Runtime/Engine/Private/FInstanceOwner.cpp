// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// AsComponent @ 1481665b0

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystemComponent * __thiscall
UParticleSystemComponent::FInstanceOwner::AsComponent(FInstanceOwner *this)

{
  return this->Component;
}

// DeactivateNextTick @ 14816e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UParticleSystemComponent::FInstanceOwner::DeactivateNextTick(FInstanceOwner *this)

{
  undefined1 *puVar1;
  
  this->Component->bDeactivateTriggered = '\x01';
  return;
}

// GetAsyncComponentToWorld @ 1481779e0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetAsyncComponentToWorld(FInstanceOwner *this)

{
  TTransform<double> *pTVar1;
  
  pTVar1 = UParticleSystemComponent::GetAsyncComponentToWorld(this->Component);
  return pTVar1;
}

// GetAsyncInstanceParameters @ 148177a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<FParticleSysParam_const_,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetAsyncInstanceParameters
          (FInstanceOwner *this,TArrayView<FParticleSysParam_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<FParticleSysParam_const_,int> *pTVar5;
  
  pTVar4 = UParticleSystemComponent::GetAsyncInstanceParameters(this->Component);
  iVar1 = pTVar4->ArrayNum;
  __return_storage_ptr__->DataPtr = (FParticleSysParam *)(pTVar4->AllocatorInstance).Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<FParticleSysParam_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetBounds @ 148178810

/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetBounds(FInstanceOwner *this)

{
  return (TBoxSphereBounds<double,double> *)&this->Component->field_0x110;
}

// GetBurstEvents @ 148178840

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEventBurstData,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetBurstEvents
          (FInstanceOwner *this,TArrayView<FParticleEventBurstData,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEventBurstData,int> *pTVar4;
  
  iVar1 = (this->Component->BurstEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEventBurstData *)(this->Component->BurstEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEventBurstData,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetCollisionEvents @ 1481788c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEventCollideData,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetCollisionEvents
          (FInstanceOwner *this,TArrayView<FParticleEventCollideData,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEventCollideData,int> *pTVar4;
  
  iVar1 = (this->Component->CollisionEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEventCollideData *)(this->Component->CollisionEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEventCollideData,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetComponentRotation @ 148178d40

/* WARNING: Enum "Type": Some values do not have unique names */

TRotator<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetComponentRotation
          (FInstanceOwner *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  UParticleSystemComponent *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  FPayload *pFVar6;
  TRotator<double> *pTVar7;
  int iVar8;
  undefined1 *this_00;
  uint uVar9;
  longlong lVar10;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  pUVar2 = this->Component;
  local_28.X = *(double *)&pUVar2->field_0x1f0;
  local_28.Y = *(double *)&pUVar2->field_0x1f8;
  local_28.Z = *(double *)&pUVar2->field_0x200;
  local_28.W = *(double *)&pUVar2->field_0x208;
  this_00 = &pUVar2->field_0x1e0;
  pTVar7 = __return_storage_ptr__;
  pFVar6 = FRotationConversionCache::GetOrCreatePayload((FRotationConversionCache *)this_00);
  lVar10 = -(ulonglong)((pFVar6->CachedQuat).W != local_28.W);
  auVar3._8_4_ = (int)lVar10;
  auVar3._0_8_ = -(ulonglong)((pFVar6->CachedQuat).Z != local_28.Z);
  auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar9 = movmskpd((int)pTVar7,auVar3);
  lVar10 = -(ulonglong)((pFVar6->CachedQuat).Y != local_28.Y);
  auVar4._8_4_ = (int)lVar10;
  auVar4._0_8_ = -(ulonglong)((pFVar6->CachedQuat).X != local_28.X);
  auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar8 = movmskpd((int)this_00,auVar4);
  if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
    (pFVar6->CachedQuat).X = local_28.X;
    (pFVar6->CachedQuat).Y = local_28.Y;
    (pFVar6->CachedQuat).Z = local_28.Z;
    (pFVar6->CachedQuat).W = local_28.W;
    pTVar7 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
    dVar1 = pTVar7->Yaw;
    (pFVar6->CachedRotator).Pitch = pTVar7->Pitch;
    (pFVar6->CachedRotator).Yaw = dVar1;
    (pFVar6->CachedRotator).Roll = pTVar7->Roll;
  }
  dVar5 = (pFVar6->CachedRotator).Yaw;
  dVar1 = (pFVar6->CachedRotator).Roll;
  __return_storage_ptr__->Pitch = (pFVar6->CachedRotator).Pitch;
  __return_storage_ptr__->Yaw = dVar5;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetComponentToWorld @ 148178df0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetComponentToWorld(FInstanceOwner *this)

{
  return (TTransform<double> *)&this->Component->field_0x1f0;
}

// GetComponentTransform @ 148178e10

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetComponentTransform(FInstanceOwner *this)

{
  return (TTransform<double> *)&this->Component->field_0x1f0;
}

// GetCurrentDetailMode @ 148178e30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::FInstanceOwner::GetCurrentDetailMode(FInstanceOwner *this)

{
  FCachedSystemScalabilityCVars *pFVar1;
  
  pFVar1 = GetCachedScalabilityCVars();
  return pFVar1->DetailMode;
}

// GetCurrentLODIndex @ 148178e90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UParticleSystemComponent::FInstanceOwner::GetCurrentLODIndex(FInstanceOwner *this)

{
  return this->Component->LODLevel;
}

// GetDeathEvents @ 148179620

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEventDeathData,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetDeathEvents
          (FInstanceOwner *this,TArrayView<FParticleEventDeathData,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEventDeathData,int> *pTVar4;
  
  iVar1 = (this->Component->DeathEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEventDeathData *)(this->Component->DeathEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEventDeathData,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetDistributionData @ 148179960

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UParticleSystemComponent::FInstanceOwner::GetDistributionData(FInstanceOwner *this)

{
  return (UObject *)this->Component;
}

// GetEmitterDelay @ 148179990

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UParticleSystemComponent::FInstanceOwner::GetEmitterDelay(FInstanceOwner *this)

{
  return this->Component->EmitterDelay;
}

// GetEmitterInstances @ 1481799b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEmitterInstance_*,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetEmitterInstances
          (FInstanceOwner *this,TArrayView<FParticleEmitterInstance_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEmitterInstance_*,int> *pTVar4;
  
  iVar1 = (this->Component->EmitterInstances).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEmitterInstance **)(this->Component->EmitterInstances).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEmitterInstance_*,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetEmitterMaterials @ 148179a30

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<TObjectPtr<UMaterialInterface>,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetEmitterMaterials
          (FInstanceOwner *this,
          TArrayView<TObjectPtr<UMaterialInterface>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UMaterialInterface>,int> *pTVar4;
  
  iVar1 = (this->Component->EmitterMaterials).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UMaterialInterface> *)(this->Component->EmitterMaterials).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UMaterialInterface>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetFXSystem @ 148179da0

/* WARNING: Enum "Type": Some values do not have unique names */

FFXSystem * __thiscall UParticleSystemComponent::FInstanceOwner::GetFXSystem(FInstanceOwner *this)

{
  return this->Component->FXSystem;
}

// GetFloatParameter @ 148179de0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UParticleSystemComponent::FInstanceOwner::GetFloatParameter
          (FInstanceOwner *this,FName param_1,float *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148179de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->Component + 0xb70))();
  return (bool)uVar1;
}

// GetFullName @ 148179f40

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UParticleSystemComponent::FInstanceOwner::GetFullName
          (FInstanceOwner *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)this->Component,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetInstanceParameters @ 14817a0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<FParticleSysParam_const_,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetInstanceParameters
          (FInstanceOwner *this,TArrayView<FParticleSysParam_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleSysParam_const_,int> *pTVar4;
  
  iVar1 = (this->Component->InstanceParameters).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleSysParam *)(this->Component->InstanceParameters).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleSysParam_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetIsWarmingUp @ 14817a160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::GetIsWarmingUp(FInstanceOwner *this)

{
  return this->Component->bWarmingUp;
}

// GetJustRegistered @ 14817a180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::GetJustRegistered(FInstanceOwner *this)

{
  return this->Component->bJustRegistered;
}

// GetKismetEvents @ 14817a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEventKismetData,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetKismetEvents
          (FInstanceOwner *this,TArrayView<FParticleEventKismetData,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEventKismetData,int> *pTVar4;
  
  iVar1 = (this->Component->KismetEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEventKismetData *)(this->Component->KismetEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEventKismetData,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetLWCTile @ 14817a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<float> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetLWCTile(FInstanceOwner *this)

{
  return &this->Component->LWCTile;
}

// GetName @ 14817aae0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UParticleSystemComponent::FInstanceOwner::GetName
          (FInstanceOwner *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0].ComparisonIndex.Value = *(uint *)&this->Component->field_0x18;
  local_res8[0].Number = *(uint *)&this->Component->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOldPosition @ 14817afb0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetOldPosition(FInstanceOwner *this)

{
  return &this->Component->OldPosition;
}

// GetPartSysVelocity @ 14817b610

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetPartSysVelocity(FInstanceOwner *this)

{
  return &this->Component->PartSysVelocity;
}

// GetPathName @ 14817cf50

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UParticleSystemComponent::FInstanceOwner::GetPathName
          (FInstanceOwner *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)this->Component,__return_storage_ptr__,(UObject *)0x0);
  return __return_storage_ptr__;
}

// GetRandomStream @ 14817d4b0

/* WARNING: Enum "Type": Some values do not have unique names */

FRandomStream * __thiscall
UParticleSystemComponent::FInstanceOwner::GetRandomStream(FInstanceOwner *this)

{
  return &this->Component->RandomStream;
}

// GetScene @ 14817d610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneInterface * __thiscall
UParticleSystemComponent::FInstanceOwner::GetScene(FInstanceOwner *this)

{
  UWorld *pUVar1;
  
  pUVar1 = *(UWorld **)&this->Component->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    if (pUVar1 == (UWorld *)0x0) {
      return (FSceneInterface *)0x0;
    }
  }
  return pUVar1->Scene;
}

// GetSceneProxy @ 14817d650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UParticleSystemComponent::FInstanceOwner::GetSceneProxy(FInstanceOwner *this)

{
  return *(FPrimitiveSceneProxy **)&this->Component->field_0x530;
}

// GetSpawnEvents @ 14817e520

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<FParticleEventSpawnData,int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetSpawnEvents
          (FInstanceOwner *this,TArrayView<FParticleEventSpawnData,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FParticleEventSpawnData,int> *pTVar4;
  
  iVar1 = (this->Component->SpawnEvents).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FParticleEventSpawnData *)(this->Component->SpawnEvents).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FParticleEventSpawnData,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetTemplate @ 14817f810

/* WARNING: Enum "Type": Some values do not have unique names */

UParticleSystem * __thiscall
UParticleSystemComponent::FInstanceOwner::GetTemplate(FInstanceOwner *this)

{
  return (this->Component->Template).field0_0x0.DebugPtr;
}

// GetWarmupTime @ 148180580

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UParticleSystemComponent::FInstanceOwner::GetWarmupTime(FInstanceOwner *this)

{
  return this->Component->WarmupTime;
}

// GetWeakWorld @ 1481805a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<UWorld,FWeakObjectPtr> __thiscall
UParticleSystemComponent::FInstanceOwner::GetWeakWorld(FInstanceOwner *this)

{
  FWeakObjectPtr in_RDX;
  UWorld *local_res8;
  
  local_res8 = *(UWorld **)&this->Component->field_0xb0;
  if (local_res8 == (UWorld *)0x0) {
    local_res8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(undefined8 *)in_RDX = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UWorld,FWeakObjectPtr>)in_RDX;
}

// GetWorldEffectiveTimeDilation @ 148180620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UParticleSystemComponent::FInstanceOwner::GetWorldEffectiveTimeDilation(FInstanceOwner *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UWorld *this_00;
  AWorldSettings *pAVar1;
  float fVar2;
  
  this_00 = *(UWorld **)&this->Component->field_0xb0;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component),
     this_00 == (UWorld *)0x0)) {
    return __real_3f800000;
  }
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  if (pAVar1 == (AWorldSettings *)0x0) {
    return __real_3f800000;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pAVar1->_padding_ + 0x790);
                    /* WARNING: Could not recover jumptable at 0x000148180661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(pAVar1,UNRECOVERED_JUMPTABLE);
  return fVar2;
}

// GetWorldOriginLocation @ 148180750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntVector3<int> * __thiscall
UParticleSystemComponent::FInstanceOwner::GetWorldOriginLocation
          (FInstanceOwner *this,TIntVector3<int> *__return_storage_ptr__)

{
  int iVar1;
  UWorld *pUVar2;
  
  pUVar2 = *(UWorld **)&this->Component->field_0xb0;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    if (pUVar2 == (UWorld *)0x0) {
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
      return __return_storage_ptr__;
    }
  }
  iVar1 = (pUVar2->OriginLocation).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(pUVar2->OriginLocation).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// GetWorldTimeSeconds @ 148180a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UParticleSystemComponent::FInstanceOwner::GetWorldTimeSeconds(FInstanceOwner *this)

{
  UWorld *pUVar1;
  
  pUVar1 = *(UWorld **)&this->Component->field_0xb0;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    if (pUVar1 == (UWorld *)0x0) {
      return 0.0;
    }
  }
  return (float)pUVar1->TimeSeconds;
}

// HasWorld @ 1481818a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::HasWorld(FInstanceOwner *this)

{
  UWorld *pUVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(UWorld **)&this->Component->field_0xb0 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    bVar2 = pUVar1 == (UWorld *)0x0;
  }
  return !bVar2;
}

// HasWorldSettings @ 1481818d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::HasWorldSettings(FInstanceOwner *this)

{
  UWorld *this_00;
  AWorldSettings *pAVar1;
  
  this_00 = *(UWorld **)&this->Component->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    if (this_00 == (UWorld *)0x0) {
      return false;
    }
  }
  pAVar1 = UWorld::GetWorldSettings(this_00,false,true);
  return pAVar1 != (AWorldSettings *)0x0;
}

// IsActive @ 148185a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::IsActive(FInstanceOwner *this)

{
  return (bool)((byte)this->Component->field_0x9a >> 4 & 1);
}

// IsGameWorld @ 148185b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::IsGameWorld(FInstanceOwner *this)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = *(UWorld **)&this->Component->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->Component);
    if (this_00 == (UWorld *)0x0) {
      return false;
    }
  }
  bVar1 = UWorld::IsGameWorld(this_00);
  return bVar1;
}

// IsValidLowLevel @ 148185fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UParticleSystemComponent::FInstanceOwner::IsValidLowLevel(FInstanceOwner *this)

{
  bool bVar1;
  
  bVar1 = UObjectBase::IsValidLowLevel((UObjectBase *)this->Component);
  return bVar1;
}

// ReportEventBurst @ 148190c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::FInstanceOwner::ReportEventBurst
          (FInstanceOwner *this,FName param_1,float param_2,int param_3,TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  UParticleSystemComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pUVar3 = this->Component;
  uVar8 = (pUVar3->BurstEvents).ArrayNum;
  piVar1 = &(pUVar3->BurstEvents).ArrayMax;
  dVar5 = (param_4->field0_0x0)._s_0.X;
  dVar6 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(pUVar3->BurstEvents).AllocatorInstance,piVar1);
  }
  (pUVar3->BurstEvents).ArrayNum = uVar8 + 1;
  uVar9 = 0;
  if ((int)uVar8 < (int)(uVar8 + 1)) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar10 = (pUVar3->BurstEvents).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x58;
  if (pFVar10 == (FScriptContainerElement *)0x0) {
    pFVar10 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar10 + 0x40) = 0;
    *(undefined8 *)(pFVar10 + 0x48) = 0;
  }
  *(double *)(pFVar10 + 0x10) = dVar5;
  *(double *)(pFVar10 + 0x18) = dVar6;
  *(undefined4 *)pFVar10 = 4;
  *(double *)(pFVar10 + 0x20) = dVar2;
  *(float *)(pFVar10 + 0xc) = param_2;
  *(FName *)(pFVar10 + 4) = param_1;
  *(int *)(pFVar10 + 0x50) = param_3;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar10 + 0x40),param_5);
  return;
}

// ReportEventCollision @ 148190ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::FInstanceOwner::ReportEventCollision
          (FInstanceOwner *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_6,
          float param_7,TVector<double> *param_8,float param_9,int param_10,FName param_11,
          UPhysicalMaterial *param_12)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  UParticleSystemComponent *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  
  pUVar6 = this->Component;
  uVar17 = (pUVar6->CollisionEvents).ArrayNum;
  piVar1 = &(pUVar6->CollisionEvents).ArrayMax;
  dVar8 = (param_3->field0_0x0)._s_0.X;
  dVar9 = (param_3->field0_0x0)._s_0.Y;
  dVar10 = (param_8->field0_0x0)._s_0.X;
  dVar11 = (param_8->field0_0x0)._s_0.Y;
  dVar2 = (param_8->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar12 = (param_5->field0_0x0)._s_0.X;
  dVar13 = (param_5->field0_0x0)._s_0.Y;
  dVar4 = (param_5->field0_0x0)._s_0.Z;
  dVar14 = (param_4->field0_0x0)._s_0.X;
  dVar15 = (param_4->field0_0x0)._s_0.Y;
  dVar5 = (param_4->field0_0x0)._s_0.Z;
  if (uVar17 == *piVar1) {
    uVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a0,&(pUVar6->CollisionEvents).AllocatorInstance,piVar1);
  }
  pFVar19 = (FScriptContainerElement *)0x0;
  (pUVar6->CollisionEvents).ArrayNum = uVar17 + 1;
  uVar18 = 0;
  if ((int)uVar17 < (int)(uVar17 + 1)) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar20 = (pUVar6->CollisionEvents).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xa0;
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar20 + 0x40) = 0;
    *(undefined8 *)(pFVar20 + 0x48) = 0;
    *(undefined4 *)(pFVar20 + 0x50) = 0;
    *(undefined8 *)(pFVar20 + 0x70) = 0;
    *(undefined8 *)(pFVar20 + 0x78) = 0;
    *(undefined8 *)(pFVar20 + 0x80) = 0;
    *(undefined8 *)(pFVar20 + 0x88) = 0;
    *(undefined8 *)(pFVar20 + 0x90) = 0;
    pFVar19 = pFVar20;
  }
  *(double *)(pFVar19 + 0x10) = dVar8;
  *(double *)(pFVar19 + 0x18) = dVar9;
  *(undefined4 *)pFVar19 = 3;
  *(double *)(pFVar19 + 0x58) = dVar14;
  *(double *)(pFVar19 + 0x60) = dVar15;
  *(FName *)(pFVar19 + 4) = param_1;
  *(double *)(pFVar19 + 0x28) = dVar12;
  *(double *)(pFVar19 + 0x30) = dVar13;
  *(double *)(pFVar19 + 0x20) = dVar3;
  *(double *)(pFVar19 + 0x68) = dVar5;
  *(double *)(pFVar19 + 0x38) = dVar4;
  *(float *)(pFVar19 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar19 + 0x40),param_6);
  *(int *)(pFVar19 + 0x8c) = param_10;
  *(double *)(pFVar19 + 0x70) = dVar10;
  *(double *)(pFVar19 + 0x78) = dVar11;
  *(FName *)(pFVar19 + 0x90) = param_11;
  *(double *)(pFVar19 + 0x80) = dVar2;
  *(UPhysicalMaterial **)(pFVar19 + 0x98) = param_12;
  *(float *)(pFVar19 + 0x50) = param_7;
  *(float *)(pFVar19 + 0x88) = param_9;
  return;
}

// ReportEventDeath @ 1481912a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::FInstanceOwner::ReportEventDeath
          (FInstanceOwner *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5,
          float param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  UParticleSystemComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  
  pUVar4 = this->Component;
  uVar11 = (pUVar4->DeathEvents).ArrayNum;
  piVar1 = &(pUVar4->DeathEvents).ArrayMax;
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  if (uVar11 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&(pUVar4->DeathEvents).AllocatorInstance,piVar1);
  }
  pFVar13 = (FScriptContainerElement *)0x0;
  (pUVar4->DeathEvents).ArrayNum = uVar11 + 1;
  uVar12 = 0;
  if ((int)uVar11 < (int)(uVar11 + 1)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = (pUVar4->DeathEvents).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(pFVar14 + 0x40) = 0;
    *(undefined8 *)(pFVar14 + 0x48) = 0;
    *(undefined4 *)(pFVar14 + 0x50) = 0;
    *(undefined8 *)(pFVar14 + 0x58) = 0;
    *(undefined8 *)(pFVar14 + 0x60) = 0;
    *(undefined8 *)(pFVar14 + 0x68) = 0;
    pFVar13 = pFVar14;
  }
  *(double *)(pFVar13 + 0x10) = dVar6;
  *(double *)(pFVar13 + 0x18) = dVar7;
  *(undefined4 *)pFVar13 = 2;
  *(double *)(pFVar13 + 0x28) = dVar8;
  *(double *)(pFVar13 + 0x30) = dVar9;
  *(FName *)(pFVar13 + 4) = param_1;
  *(double *)(pFVar13 + 0x20) = dVar2;
  *(double *)(pFVar13 + 0x38) = dVar3;
  *(float *)(pFVar13 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar13 + 0x40),param_5);
  *(float *)(pFVar13 + 0x50) = param_6;
  return;
}

// ReportEventSpawn @ 148191560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::FInstanceOwner::ReportEventSpawn
          (FInstanceOwner *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  UParticleSystemComponent *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  
  pUVar4 = this->Component;
  uVar11 = (pUVar4->SpawnEvents).ArrayNum;
  piVar1 = &(pUVar4->SpawnEvents).ArrayMax;
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  if (uVar11 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(pUVar4->SpawnEvents).AllocatorInstance,piVar1);
  }
  (pUVar4->SpawnEvents).ArrayNum = uVar11 + 1;
  uVar12 = 0;
  if ((int)uVar11 < (int)(uVar11 + 1)) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar13 = (pUVar4->SpawnEvents).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x50;
  if (pFVar13 == (FScriptContainerElement *)0x0) {
    pFVar13 = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar13 + 0x40) = 0;
    *(undefined8 *)(pFVar13 + 0x48) = 0;
  }
  *(double *)(pFVar13 + 0x10) = dVar6;
  *(double *)(pFVar13 + 0x18) = dVar7;
  *(undefined4 *)pFVar13 = 1;
  *(double *)(pFVar13 + 0x28) = dVar8;
  *(double *)(pFVar13 + 0x30) = dVar9;
  *(FName *)(pFVar13 + 4) = param_1;
  *(double *)(pFVar13 + 0x20) = dVar2;
  *(double *)(pFVar13 + 0x38) = dVar3;
  *(float *)(pFVar13 + 0xc) = param_2;
  TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *)
             (pFVar13 + 0x40),param_5);
  return;
}

// SetComponentToWorld @ 148195bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleSystemComponent::FInstanceOwner::SetComponentToWorld
          (FInstanceOwner *this,TTransform<double> *param_1)

{
  UParticleSystemComponent *pUVar1;
  double dVar2;
  
  pUVar1 = this->Component;
  pUVar1->field_0x1a8 = pUVar1->field_0x1a8 | 1;
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  *(double *)&pUVar1->field_0x1f0 = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)&pUVar1->field_0x1f8 = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)&pUVar1->field_0x200 = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)&pUVar1->field_0x208 = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)&pUVar1->field_0x210 = (param_1->Translation).XY.m128d_f64[0];
  *(double *)&pUVar1->field_0x218 = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)&pUVar1->field_0x220 = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)&pUVar1->field_0x228 = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)&pUVar1->field_0x230 = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)&pUVar1->field_0x238 = dVar2;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)&pUVar1->field_0x240 = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)&pUVar1->field_0x248 = dVar2;
  return;
}

