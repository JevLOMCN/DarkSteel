// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 84

// StaticClass @ 14d981940

UClass * __cdecl UAudioComponentGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroup",
               &Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton,
               StaticRegisterNativesUAudioComponentGroup,0x420,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioComponentGroup>,
               InternalVTableHelperCtorCaller<UAudioComponentGroup>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton;
}

// UAudioComponentGroup @ 14d987760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponentGroup * __thiscall
UAudioComponentGroup::UAudioComponentGroup(UAudioComponentGroup *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  (this->GroupModifier).Volume = 1.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UAudioComponentGroup__6B_;
  *(undefined8 *)&this->OnStopped = 0;
  *(undefined8 *)&(this->OnStopped).field_0x8 = 0;
  *(undefined8 *)&(this->OnStopped).field_0x10 = 0;
  *(undefined8 *)&this->OnKilled = 0;
  *(undefined8 *)&(this->OnKilled).field_0x8 = 0;
  *(undefined8 *)&(this->OnKilled).field_0x10 = 0;
  *(undefined8 *)&this->OnVirtualized = 0;
  *(undefined8 *)&(this->OnVirtualized).field_0x8 = 0;
  *(undefined8 *)&(this->OnVirtualized).field_0x10 = 0;
  *(undefined8 *)&this->OnUnvirtualized = 0;
  *(undefined8 *)&(this->OnUnvirtualized).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnvirtualized).field_0x10 = 0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (this->ParamsToSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParamsToSet).ArrayNum = 0;
  (this->ParamsToSet).ArrayMax = 0;
  (this->PersistentParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentParams).ArrayNum = 0;
  (this->PersistentParams).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->ExternalComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalComponents).ArrayNum = 0;
  (this->ExternalComponents).ArrayMax = 0;
  *(undefined8 *)&this->StringSubscriptions = 0;
  *(undefined8 *)&(this->StringSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->StringSubscriptions).field_0x20 = 0;
  (this->GroupModifier).Pitch = 1.0;
  (this->GroupModifier).LowPassFrequency = 20000.0;
  (this->CachedModifier).Volume = 1.0;
  (this->CachedModifier).Pitch = 1.0;
  (this->CachedModifier).LowPassFrequency = 20000.0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x48 = 0;
  *(undefined8 *)&this->EventSubscriptions = 0;
  *(undefined8 *)&(this->EventSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->EventSubscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x48 = 0;
  *(undefined8 *)&this->BoolSubscriptions = 0;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x48 = 0;
  this->bIsVirtualized = false;
  return this;
}

// UAudioComponentGroup @ 14d987950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponentGroup * __thiscall
UAudioComponentGroup::UAudioComponentGroup(UAudioComponentGroup *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  (this->GroupModifier).Volume = 1.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &___7UAudioComponentGroup__6B_;
  *(undefined8 *)&this->OnStopped = 0;
  *(undefined8 *)&(this->OnStopped).field_0x8 = 0;
  *(undefined8 *)&(this->OnStopped).field_0x10 = 0;
  *(undefined8 *)&this->OnKilled = 0;
  *(undefined8 *)&(this->OnKilled).field_0x8 = 0;
  *(undefined8 *)&(this->OnKilled).field_0x10 = 0;
  *(undefined8 *)&this->OnVirtualized = 0;
  *(undefined8 *)&(this->OnVirtualized).field_0x8 = 0;
  *(undefined8 *)&(this->OnVirtualized).field_0x10 = 0;
  *(undefined8 *)&this->OnUnvirtualized = 0;
  *(undefined8 *)&(this->OnUnvirtualized).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnvirtualized).field_0x10 = 0;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  (this->ParamsToSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParamsToSet).ArrayNum = 0;
  (this->ParamsToSet).ArrayMax = 0;
  (this->PersistentParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentParams).ArrayNum = 0;
  (this->PersistentParams).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->ExternalComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalComponents).ArrayNum = 0;
  (this->ExternalComponents).ArrayMax = 0;
  *(undefined8 *)&this->StringSubscriptions = 0;
  *(undefined8 *)&(this->StringSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->StringSubscriptions).field_0x20 = 0;
  (this->GroupModifier).Pitch = 1.0;
  (this->GroupModifier).LowPassFrequency = 20000.0;
  (this->CachedModifier).Volume = 1.0;
  (this->CachedModifier).Pitch = 1.0;
  (this->CachedModifier).LowPassFrequency = 20000.0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->StringSubscriptions).field_0x48 = 0;
  *(undefined8 *)&this->EventSubscriptions = 0;
  *(undefined8 *)&(this->EventSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->EventSubscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->EventSubscriptions).field_0x48 = 0;
  *(undefined8 *)&this->BoolSubscriptions = 0;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x8 = 0;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x20 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x28 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x34 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolSubscriptions).field_0x40 = 0;
  *(undefined4 *)&(this->BoolSubscriptions).field_0x48 = 0;
  this->bIsVirtualized = false;
  this->field_0x40 = 6;
  this->field_0x42 = this->field_0x42 & 0xf7 | 6;
  return this;
}

// ~UAudioComponentGroup @ 14d9885b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponentGroup::~UAudioComponentGroup(UAudioComponentGroup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->BoolSubscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoolSubscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoolSubscriptions);
  *(undefined4 *)&(this->EventSubscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventSubscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventSubscriptions);
  *(undefined4 *)&(this->StringSubscriptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringSubscriptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringSubscriptions);
  pFVar2 = (this->ExternalComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->PersistentParams).AllocatorInstance.Data,
             (this->PersistentParams).ArrayNum);
  pFVar2 = (this->PersistentParams).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->ParamsToSet).AllocatorInstance.Data,
             (this->ParamsToSet).ArrayNum);
  pFVar2 = (this->ParamsToSet).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Components).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->OnUnvirtualized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnvirtualized);
  pvVar1 = *(void **)&(this->OnVirtualized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVirtualized);
  pvVar1 = *(void **)&(this->OnKilled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnKilled);
  pvVar1 = *(void **)&(this->OnStopped).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStopped);
  *(undefined ***)&this->field_0x250 = &___7IInterface__6B_;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// operator() @ 14d988da0

void __thiscall
`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>::operator()
          (void *this,UAudioComponent *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(*(longlong *)this + 0x2d0);
  pFVar2 = *(FAudioParameter **)(*(longlong *)this + 0x2c8);
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar2,iVar1);
  }
  (**(code **)(*(longlong *)&param_1->field_0x250 + 0x80))(&param_1->field_0x250,&local_18);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
  if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// AddComponent @ 14d989700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponent * __thiscall UAudioComponentGroup::AddComponent(UAudioComponentGroup *this)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UAudioComponent *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStack_108 [32];
  UAudioComponent **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  UAudioComponent *local_b8;
  undefined8 local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar2 = *(UObject **)&this->field_0xa8;
  if (pUVar2 == (UObject *)0x0) {
    pUVar8 = (UAudioComponent *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UAudioComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar7);
    local_98._8_8_ = pUVar2;
    pUVar8 = (UAudioComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar9 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    pUVar8->field_0x9a = pUVar8->field_0x9a & 0xf7;
    pUVar8->bAutoManageAttachment = '\x01';
    lVar10 = *(longlong *)(pUVar2 + 0xb);
    local_b0 = 0;
    (**(code **)(*(longlong *)pUVar8 + 0x508))
              (pUVar8,lVar10,&FAttachmentTransformRules::SnapToTargetNotIncludingScale,0);
    if (lVar10 != 0) {
      local_a8[0] = *(UObject **)(lVar10 + 0xd0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a8[0]);
      }
      FWeakObjectPtr::operator=(&(pUVar8->AutoAttachParent).WeakPtr,(FObjectPtr)local_a8);
    }
    pUVar8->AutoAttachLocationRule = KeepRelative;
    pUVar8->AutoAttachRotationRule = KeepRelative;
    UActorComponent::RegisterComponent((UActorComponent *)pUVar8);
    ApplyParams(this,pUVar8);
    UAudioComponent::SetVolumeMultiplier(pUVar8,(this->CachedModifier).Volume);
    UAudioComponent::SetPitchMultiplier(pUVar8,(this->CachedModifier).Pitch);
    UAudioComponent::SetLowPassFilterFrequency(pUVar8,(this->CachedModifier).LowPassFrequency);
    pTVar11 = &this->Components;
    local_b8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    pFVar3 = (pTVar11->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
       (lVar10 = (longlong)(this->Components).ArrayMax,
       (FScriptContainerElement *)&local_b8 < pFVar3 + lVar10 * 8)) {
      local_d0 = (longlong)(this->Components).ArrayNum;
      local_c8 = 8;
      local_e8 = &local_b8;
      local_e0 = pFVar3;
      local_d8 = lVar10;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UAudioComponent *)(*pcVar4)();
        return pUVar8;
      }
    }
    iVar6 = (this->Components).ArrayNum;
    piVar1 = &(this->Components).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar11->AllocatorInstance,piVar1);
    }
    pFVar3 = (pTVar11->AllocatorInstance).Data;
    (this->Components).ArrayNum = iVar6 + 1;
    *(UAudioComponent **)(pFVar3 + (longlong)iVar6 * 8) = local_b8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UAudioComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_b8);
    }
  }
  return pUVar8;
}

// AddExtension @ 14d989960

void __thiscall
UAudioComponentGroup::AddExtension
          (UAudioComponentGroup *this,TScriptInterface<IAudioComponentGroupExtension> *param_1)

{
  longlong *plVar1;
  
  TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptInterface<IAudioComponentGroupExtension>_const_&>(&this->Extensions,param_1);
  if (*(longlong *)param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d98999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,this);
  return;
}

// AddExternalComponent @ 14d9899b0

void __thiscall
UAudioComponentGroup::AddExternalComponent(UAudioComponentGroup *this,UAudioComponent *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  UAudioComponent *local_res10 [3];
  FWeakObjectPtr local_18 [2];
  
  if (param_1 != (UAudioComponent *)0x0) {
    ApplyParams(this,param_1);
    UAudioComponent::SetVolumeMultiplier(param_1,(this->CachedModifier).Volume);
    UAudioComponent::SetPitchMultiplier(param_1,(this->CachedModifier).Pitch);
    UAudioComponent::SetLowPassFilterFrequency(param_1,(this->CachedModifier).LowPassFrequency);
    pTVar6 = &this->ExternalComponents;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_18[0].ObjectIndex = 0;
    local_18[0].ObjectSerialNumber = 0;
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_18,(FObjectPtr)local_res10);
    pFVar2 = (FWeakObjectPtr *)(pTVar6->AllocatorInstance).Data;
    if ((pFVar2 <= local_18) && (local_18 < pFVar2 + (this->ExternalComponents).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ExternalComponents).ArrayNum;
    piVar1 = &(this->ExternalComponents).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->ExternalComponents).ArrayNum = iVar5 + 1;
    *(FWeakObjectPtr *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  }
  return;
}

// ApplyModifiers @ 14d98a120

void __thiscall
UAudioComponentGroup::ApplyModifiers
          (UAudioComponentGroup *this,UAudioComponent *param_1,FAudioComponentModifier *param_2)

{
  if (param_1 != (UAudioComponent *)0x0) {
    UAudioComponent::SetVolumeMultiplier(param_1,param_2->Volume);
    UAudioComponent::SetPitchMultiplier(param_1,param_2->Pitch);
    UAudioComponent::SetLowPassFilterFrequency(param_1,param_2->LowPassFrequency);
  }
  return;
}

// ApplyParams @ 14d98a170

void __thiscall
UAudioComponentGroup::ApplyParams(UAudioComponentGroup *this,UAudioComponent *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  char cVar3;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar4;
  bool bVar5;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (param_1 != (UAudioComponent *)0x0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId522,"UAudioComponentGroup::ApplyParams",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
                 ,0x20a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId522);
    }
    puVar4 = &param_1->field_0x250;
    cVar3 = (**(code **)(*(longlong *)puVar4 + 0xa8))(puVar4);
    if (cVar3 == '\0') {
      this_00 = (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*(longlong *)puVar4 + 0x98))(puVar4);
      TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::
      Append<FAudioParameter,TSizedDefaultAllocator<32>_>(this_00,&this->PersistentParams);
    }
    else {
      pFVar2 = (FAudioParameter *)(this->PersistentParams).AllocatorInstance.Data;
      iVar1 = (this->PersistentParams).ArrayNum;
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = iVar1;
      if (iVar1 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
        ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar2,iVar1);
      }
      (**(code **)(*(longlong *)puVar4 + 0x80))(puVar4,&local_18);
      DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
      if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// BeginPlay @ 14d98a2d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioComponentGroup::BeginPlay(UAudioComponentGroup *this)

{
  uint uVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UFunction *pUVar5;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UAudioComponentGroup *)0x0) goto LAB_14780c6b0;
    this_00 = *(AActor **)&this->field_0xa8;
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
    if ((!bVar3) || (this_00 == (AActor *)0x0)) goto LAB_14780c6b0;
    pUVar4 = AActor::GetWorld(this_00);
    bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar4);
    if (!bVar3) goto LAB_14780c6b0;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14780c6b0:
  if ((this->field_0x98 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->field_0x9b & 0x20) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasBegunPlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x64e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)(*(longlong *)&this->field_0x10 + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveBeginPlay);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar5,0);
  }
  this->field_0x9b = this->field_0x9b | 0x20;
  return;
}

// BroadcastEvent @ 14d98a400

void __thiscall UAudioComponentGroup::BroadcastEvent(UAudioComponentGroup *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *this_00;
  UFunction *pUVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FName local_res8;
  FReadAccessScope local_48;
  
  pTVar5 = TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->EventSubscriptions,param_1);
  if (pTVar5 != (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    uVar10 = 0;
    while ((-1 < (int)uVar10 && ((int)uVar10 < pTVar5->ArrayNum))) {
      uVar8 = ~uVar10 >> 0x1f;
      if (((int)uVar10 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = (longlong)(int)uVar10 * 0x18;
      pFVar9 = (pTVar5->AllocatorInstance).Data + lVar1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar9,&local_48);
      if ((*(longlong *)&pFVar9[0x10].field_0x0 == 0) ||
         (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar9 + 8)), this_00 == (UObject *)0x0))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        iVar7 = pTVar5->ArrayNum;
LAB_14d98a570:
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (pTVar5->AllocatorInstance).Data + lVar1;
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)pFVar9);
        iVar7 = pTVar5->ArrayNum + ~uVar10;
        if (iVar7 != 0) {
          memmove(pFVar9,pFVar9 + 0x18,(longlong)iVar7 * 0x18);
        }
        pTVar5->ArrayNum = pTVar5->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&pTVar5->AllocatorInstance,pTVar5->ArrayNum,&pTVar5->ArrayMax);
      }
      else {
        pUVar6 = UObject::FindFunction(this_00,*(FName *)(pFVar9 + 0x10));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        iVar7 = pTVar5->ArrayNum;
        if (pUVar6 == (UFunction *)0x0) goto LAB_14d98a570;
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res8 = param_1;
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                   ((pTVar5->AllocatorInstance).Data + lVar1),&local_res8);
        uVar10 = uVar10 + 1;
      }
    }
  }
  return;
}

// BroadcastKill @ 14d98a640

void __thiscall UAudioComponentGroup::BroadcastKill(UAudioComponentGroup *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnKilled,(void *)0x0);
  return;
}

// BroadcastStopAll @ 14d98a660

void __thiscall UAudioComponentGroup::BroadcastStopAll(UAudioComponentGroup *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnStopped,(void *)0x0);
  return;
}

// DisableVirtualization @ 14d98b6f0

void __thiscall UAudioComponentGroup::DisableVirtualization(UAudioComponentGroup *this)

{
  int *piVar1;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FAudioParameter *pFVar5;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bIsVirtualized != false) {
    pTVar2 = &this->ParamsToSet;
    iVar4 = (this->ParamsToSet).ArrayNum;
    pFVar5 = (FAudioParameter *)(pTVar2->AllocatorInstance).Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar4,0,&local_18.AllocatorInstance,iVar4,&local_18.ArrayMax);
      ConstructItems<FAudioParameter,FAudioParameter,int>
                (local_18.AllocatorInstance.Data,pFVar5,iVar4);
    }
    pTVar3 = &this->PersistentParams;
    FAudioParameter::Merge(&local_18,pTVar3);
    if (pTVar2 != pTVar3) {
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)(pTVar2->AllocatorInstance).Data,(this->ParamsToSet).ArrayNum);
      iVar4 = (this->PersistentParams).ArrayNum;
      piVar1 = &(this->ParamsToSet).ArrayMax;
      pFVar5 = (FAudioParameter *)(pTVar3->AllocatorInstance).Data;
      (this->ParamsToSet).ArrayNum = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
        ConstructItems<FAudioParameter,FAudioParameter,int>
                  ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
      }
    }
    this->bIsVirtualized = false;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnUnvirtualized,
               (void *)0x0);
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FAudioParameter *)local_18.AllocatorInstance.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableVirtualization @ 14d98b950

void __thiscall UAudioComponentGroup::EnableVirtualization(UAudioComponentGroup *this)

{
  if (this->bIsVirtualized == false) {
    this->bIsVirtualized = true;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnVirtualized,
               (void *)0x0);
    return;
  }
  return;
}

// ExecuteBoolParamSubscriptions @ 14d98b9c0

void __thiscall
UAudioComponentGroup::ExecuteBoolParamSubscriptions
          (UAudioComponentGroup *this,FAudioParameter *param_1)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *this_01;
  UFunction *pUVar4;
  TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  undefined1 local_res10 [8];
  TIndexedContainerIterator<TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FBoolParamCallback,int>
  local_48;
  FReadAccessScope local_38;
  
  if ((param_1->ParamType == Boolean) &&
     (local_48.Container =
           TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->BoolSubscriptions,param_1->ParamName),
     local_48.Container != (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *)0x0)) {
    uVar6 = 0;
    pTVar5 = local_48.Container;
    while ((-1 < (int)uVar6 && ((int)uVar6 < pTVar5->ArrayNum))) {
      uVar3 = 0;
      if ((int)uVar6 < pTVar5->ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      local_48.Index = uVar6;
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
      if ((((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State ==
           (atomic<unsigned___int64>)0x0) ||
         (this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this_00 + 8)), this_01 == (UObject *)0x0)
         ) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
LAB_14d98bb5d:
        TIndexedContainerIterator<TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FBoolParamCallback,int>
        ::RemoveCurrent(&local_48);
        uVar6 = local_48.Index + 1;
        pTVar5 = local_48.Container;
      }
      else {
        pUVar4 = UObject::FindFunction(this_01,*(FName *)(this_00 + 0x10));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (pUVar4 == (UFunction *)0x0) goto LAB_14d98bb5d;
        uVar3 = 0;
        if ((int)uVar6 < pTVar5->ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res10[0] = param_1->BoolParam != false;
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                   ((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18),local_res10);
        uVar6 = uVar6 + 1;
      }
    }
  }
  return;
}

// ExecuteEventSubscriptions @ 14d98bba0

void __thiscall
UAudioComponentGroup::ExecuteEventSubscriptions(UAudioComponentGroup *this,FName param_1)

{
  FScriptContainerElement *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *this_01;
  UFunction *pUVar4;
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  FName local_res10;
  TIndexedContainerIterator<TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FSoundCallback,int>
  local_48;
  FReadAccessScope local_38;
  
  if ((param_1 != (FName)0x0) &&
     (local_48.Container =
           TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->EventSubscriptions,param_1),
     local_48.Container != (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)0x0)) {
    uVar6 = 0;
    pTVar5 = local_48.Container;
    while ((-1 < (int)uVar6 && ((int)uVar6 < pTVar5->ArrayNum))) {
      uVar3 = 0;
      if ((int)uVar6 < pTVar5->ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      local_48.Index = uVar6;
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
      if ((((FMRSWRecursiveAccessDetector *)&this_00[0x10].field_0x0)->State ==
           (atomic<unsigned___int64>)0x0) ||
         (this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this_00 + 8)), this_01 == (UObject *)0x0)
         ) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
LAB_14d98bd30:
        TIndexedContainerIterator<TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FSoundCallback,int>
        ::RemoveCurrent(&local_48);
        uVar6 = local_48.Index + 1;
        pTVar5 = local_48.Container;
      }
      else {
        pUVar4 = UObject::FindFunction(this_01,*(FName *)(this_00 + 0x10));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (pUVar4 == (UFunction *)0x0) goto LAB_14d98bd30;
        uVar3 = 0;
        if ((int)uVar6 < pTVar5->ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res10 = param_1;
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                   ((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18),&local_res10);
        uVar6 = uVar6 + 1;
      }
    }
  }
  return;
}

// ExecuteStringParamSubscriptions @ 14d98bd70

void __thiscall
UAudioComponentGroup::ExecuteStringParamSubscriptions
          (UAudioComponentGroup *this,FAudioParameter *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *this_00;
  UFunction *pUVar6;
  longlong lVar7;
  uint uVar8;
  ForAnyElementType local_58;
  undefined8 local_50;
  TIndexedContainerIterator<TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FStringParamCallback,int>
  local_48;
  FReadAccessScope local_38;
  
  if ((param_1->ParamType == String) &&
     (pTVar5 = TMapBase<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                       *)&this->StringSubscriptions,param_1->ParamName),
     pTVar5 != (TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *)0x0)) {
    local_48.Index = 0;
    local_48.Container = pTVar5;
    while ((uVar8 = local_48.Index, lVar7 = (longlong)local_48.Index, -1 < local_48.Index &&
           (local_48.Index < pTVar5->ArrayNum))) {
      uVar4 = 0;
      if (local_48.Index < pTVar5->ArrayNum) {
        uVar4 = (uint)~local_48.Index >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (pTVar5->AllocatorInstance).Data + lVar7 * 0x18;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar1,&local_38);
      if ((((FMRSWRecursiveAccessDetector *)&pFVar1[0x10].field_0x0)->State ==
           (atomic<unsigned___int64>)0x0) ||
         (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + 8)), this_00 == (UObject *)0x0))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
LAB_14d98bf96:
        TIndexedContainerIterator<TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FStringParamCallback,int>
        ::RemoveCurrent(&local_48);
        pTVar5 = local_48.Container;
        uVar8 = local_48.Index;
LAB_14d98bfa9:
        local_48.Index = uVar8 + 1;
      }
      else {
        pUVar6 = UObject::FindFunction(this_00,*(FName *)(pFVar1 + 0x10));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if (pUVar6 == (UFunction *)0x0) goto LAB_14d98bf96;
        uVar4 = 0;
        if ((int)uVar8 < pTVar5->ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (pTVar5->AllocatorInstance).Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = 0;
        if ((FString *)&local_58 != &param_1->StringParam) {
          uVar4 = (param_1->StringParam).Data.ArrayNum;
          _Src = (param_1->StringParam).Data.AllocatorInstance.Data;
          local_50 = (ulonglong)uVar4;
          if (uVar4 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar4,0,&local_58,uVar4,(int *)((longlong)&local_50 + 4));
            memcpy(local_58.Data,_Src,(longlong)(int)uVar4 * 2);
          }
        }
        TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                  ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                   (pFVar1 + (longlong)(int)uVar8 * 0x18),&local_58);
        if (local_58.Data == (FScriptContainerElement *)0x0) goto LAB_14d98bfa9;
        FMemory::Free(local_58.Data);
        local_48.Index = uVar8 + 1;
      }
    }
  }
  return;
}

// GetBoolParamValue @ 14d98d4b0

bool __thiscall UAudioComponentGroup::GetBoolParamValue(UAudioComponentGroup *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar1 = (FName *)(this->PersistentParams).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->PersistentParams).ArrayNum * 0x14;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return false;
    }
    if (*pFVar1 == param_1) break;
    pFVar1 = pFVar1 + 0x14;
  }
  return (bool)(char)pFVar1[1].Number;
}

// GetComponentVolume @ 14d98d4f0

float __thiscall UAudioComponentGroup::GetComponentVolume(UAudioComponentGroup *this)

{
  if (this->bIsVirtualized != false) {
    return 0.0;
  }
  return (this->CachedModifier).Volume;
}

// GetFloatParamValue @ 14d98d7e0

float __thiscall UAudioComponentGroup::GetFloatParamValue(UAudioComponentGroup *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->PersistentParams).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->PersistentParams).ArrayNum * 0x14;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return 0.0;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 0x14;
  }
  return (float)pFVar2[1].ComparisonIndex.Value;
}

// GetNextAvailableComponent @ 14d98d830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponent * __thiscall
UAudioComponentGroup::GetNextAvailableComponent(UAudioComponentGroup *this)

{
  int iVar1;
  UObject *pUVar2;
  char cVar3;
  UAudioComponent *this_00;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TRotator<double> local_68;
  TVector<double>_u_0 local_48;
  
  pFVar5 = (this->Components).AllocatorInstance.Data;
  iVar1 = (this->Components).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) goto LAB_14d98d962;
    if (((*(longlong *)pFVar5 != 0) &&
        (cVar3 = (**(code **)(*(longlong *)(*(longlong *)pFVar5 + 0x250) + 0xa8))(), cVar3 == '\0'))
       && (this_00 = *(UAudioComponent **)pFVar5, this_00->ActiveCount == 0)) break;
    pFVar5 = pFVar5 + 8;
  }
  if (this_00 == (UAudioComponent *)0x0) {
LAB_14d98d962:
    this_00 = AddComponent(this);
    iVar1 = (this->Extensions).ArrayNum;
    pFVar6 = (this->Extensions).AllocatorInstance.Data;
    pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Extensions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TScriptInterface<IAudioComponentGroupExtension>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar5) break;
      pUVar2 = *(UObject **)pFVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      plVar4 = *(longlong **)(pFVar6 + 8);
      if (pUVar2 == (UObject *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      (**(code **)(*plVar4 + 0x20))(plVar4,this_00);
      pFVar6 = pFVar6 + 0x10;
    }
  }
  else {
    local_68.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_68.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_68.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    USceneComponent::SetRelativeLocationAndRotation
              ((USceneComponent *)this_00,(TVector<double> *)&local_48._s_0,&local_68,false,
               (FHitResult *)0x0,None);
    (**(code **)(*(longlong *)&this_00->field_0x250 + 0x10))();
    this_00->bAllowSpatialization = '\x01';
    ApplyParams(this,this_00);
    UAudioComponent::SetVolumeMultiplier(this_00,(this->CachedModifier).Volume);
    UAudioComponent::SetPitchMultiplier(this_00,(this->CachedModifier).Pitch);
    UAudioComponent::SetLowPassFilterFrequency(this_00,(this->CachedModifier).LowPassFrequency);
  }
  return this_00;
}

// GetParamInternal @ 14d98daa0

FAudioParameter * __thiscall
UAudioComponentGroup::GetParamInternal(UAudioComponentGroup *this,FName param_1)

{
  FAudioParameter *pFVar1;
  FAudioParameter *pFVar2;
  
  pFVar1 = (FAudioParameter *)(this->PersistentParams).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PersistentParams).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FAudioParameter *)0x0;
    }
    if (pFVar1->ParamName == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetPrivateStaticClass @ 14d98dba0

UClass * __cdecl UAudioComponentGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioComponentGroup",
               &Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton,
               StaticRegisterNativesUAudioComponentGroup,0x420,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioComponentGroup>,
               InternalVTableHelperCtorCaller<UAudioComponentGroup>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioComponentGroup.InnerSingleton;
}

// GetStringParamValue @ 14d98e260

FString * __thiscall
UAudioComponentGroup::GetStringParamValue
          (UAudioComponentGroup *this,FString *__return_storage_ptr__,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->PersistentParams).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->PersistentParams).ArrayNum * 0x14;
  while( true ) {
    if (pFVar2 == pFVar1) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 0x14;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)(pFVar2 + 4));
  return __return_storage_ptr__;
}

// IsPlayingAny @ 14d98e6a0

bool __thiscall UAudioComponentGroup::IsPlayingAny(UAudioComponentGroup *this)

{
  int iVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnStopped,&local_28);
  iVar1 = *(int *)&(this->OnStopped).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return 0 < iVar1;
}

// IterateComponents @ 14d98e6e0

void __thiscall
UAudioComponentGroup::IterateComponents
          (UAudioComponentGroup *this,TFunction<void___cdecl(UAudioComponent_*)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FWeakObjectPtr *pFVar4;
  UAudioComponentGroup *pUVar5;
  TFunction<void___cdecl(UAudioComponent_*)> *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FWeakObjectPtr *pFVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  TFunction<void___cdecl(UAudioComponent_*)> *pTVar21;
  bool bVar22;
  undefined1 local_58 [8];
  FWeakObjectPtr local_50;
  UAudioComponentGroup *local_48;
  TFunction<void___cdecl(UAudioComponent_*)> *local_40;
  ulonglong uVar15;
  
  uVar10 = 0;
  iVar1 = (this->Components).ArrayNum;
  iVar18 = 0;
  local_48 = this;
  local_40 = param_1;
  if (iVar1 != 0) {
    pFVar2 = (this->Components).AllocatorInstance.Data;
    bVar22 = *(longlong *)pFVar2 != 0;
    uVar15 = uVar10;
    uVar19 = uVar10;
    do {
      uVar12 = (uint)uVar15;
      uVar13 = uVar12;
      do {
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 + 1;
        uVar15 = (ulonglong)uVar13;
        if ((longlong)iVar1 <= (longlong)uVar10) break;
      } while (bVar22 == (*(longlong *)(pFVar2 + uVar10 * 8) != 0));
      if (bVar22 != false) {
        uVar17 = (uint)uVar19;
        if (uVar17 != uVar12) {
          memmove(pFVar2 + (longlong)(int)uVar17 * 8,pFVar2 + (longlong)(int)uVar12 * 8,
                  (longlong)(int)(uVar13 - uVar12) << 3);
        }
        uVar19 = (ulonglong)(uVar17 + (uVar13 - uVar12));
      }
      bVar22 = (bool)(bVar22 ^ 1);
    } while ((longlong)uVar10 < (longlong)iVar1);
    iVar18 = (int)uVar19;
    (local_48->Components).ArrayNum = iVar18;
  }
  pTVar6 = local_40;
  pUVar5 = local_48;
  pFVar16 = (FWeakObjectPtr *)(local_48->Components).AllocatorInstance.Data;
  pFVar4 = pFVar16 + iVar18;
  while( true ) {
    if ((pUVar5->Components).ArrayNum != iVar18) {
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if (pFVar16 == pFVar4) break;
    if ((*(byte *)((longlong)*pFVar16 + 0x9a) & 0x10) != 0) {
      local_50 = *pFVar16;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
      pcVar3 = *(code **)pTVar6;
      plVar9 = *(longlong **)&pTVar6->field_0x28;
      if (*(longlong **)&pTVar6->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&pTVar6->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar3)(uVar8,&local_50);
    }
    pFVar16 = pFVar16 + 1;
  }
  iVar1 = (pUVar5->ExternalComponents).ArrayNum;
  iVar20 = 0;
  iVar18 = 0;
  if (iVar1 != 0) {
    pFVar4 = (FWeakObjectPtr *)(local_48->ExternalComponents).AllocatorInstance.Data;
    local_50 = *pFVar4;
    bVar22 = FWeakObjectPtr::IsValid(&local_50);
    lVar11 = 0;
    iVar18 = 0;
    do {
      iVar14 = iVar18;
      do {
        lVar11 = lVar11 + 1;
        iVar14 = iVar14 + 1;
        if (iVar1 <= lVar11) break;
        local_50 = pFVar4[lVar11];
        bVar7 = FWeakObjectPtr::IsValid(&local_50);
      } while (bVar22 == bVar7);
      if (bVar22 != false) {
        if (iVar20 != iVar18) {
          memmove(pFVar4 + iVar20,pFVar4 + iVar18,(longlong)(iVar14 - iVar18) << 3);
        }
        iVar20 = iVar20 + (iVar14 - iVar18);
      }
      bVar22 = (bool)(bVar22 ^ 1);
      iVar18 = iVar14;
    } while (lVar11 < iVar1);
    (local_48->ExternalComponents).ArrayNum = iVar20;
    iVar18 = iVar20;
  }
  pTVar6 = local_40;
  pUVar5 = local_48;
  pFVar16 = (FWeakObjectPtr *)(local_48->ExternalComponents).AllocatorInstance.Data;
  local_40 = (TFunction<void___cdecl(UAudioComponent_*)> *)&local_40->field_0x10;
  pFVar4 = pFVar16 + iVar18;
  while( true ) {
    if ((pUVar5->ExternalComponents).ArrayNum != iVar18) {
      `TCheckedPointerIterator<TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_58);
    }
    if (pFVar16 == pFVar4) break;
    local_50 = (FWeakObjectPtr)FWeakObjectPtr::Get(pFVar16);
    UE::Core::Private::Function::CheckCallable(*(void **)pTVar6);
    pcVar3 = *(code **)pTVar6;
    plVar9 = *(longlong **)&pTVar6->field_0x28;
    if (*(longlong **)&pTVar6->field_0x28 == (longlong *)0x0) {
      plVar9 = (longlong *)&pTVar6->field_0x10;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar8,&local_50);
    pFVar16 = pFVar16 + 1;
  }
  if (*(longlong *)pTVar6 != 0) {
    pTVar21 = local_40;
    if (*(longlong **)&pTVar6->field_0x28 != (longlong *)0x0) {
      pTVar21 = (TFunction<void___cdecl(UAudioComponent_*)> *)*(longlong **)&pTVar6->field_0x28;
    }
    (**(code **)(*(longlong *)pTVar21 + 0x10))(pTVar21);
  }
  return;
}

// RemoveComponent @ 14d98fe10

void __thiscall
UAudioComponentGroup::RemoveComponent(UAudioComponentGroup *this,UAudioComponent *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UAudioComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  bool bVar11;
  
  pTVar2 = &this->Components;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->Components).ArrayNum;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar7 * 8) {
    while( true ) {
      if (*(UAudioComponent **)pFVar9 == (UAudioComponent *)0x0) {
        bVar11 = param_1 == (UAudioComponent *)0x0;
      }
      else {
        bVar11 = *(UAudioComponent **)pFVar9 == param_1;
      }
      if (bVar11) break;
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar3 + (longlong)iVar7 * 8) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
    if (uVar8 != 0xffffffff) {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar4 = *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x668))();
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Components).ArrayNum) {
        uVar6 = uVar10;
      }
      if (uVar6 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (this->Components).ArrayNum + ~uVar8;
      pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
      if (iVar7 != 0) {
        memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
      }
      piVar1 = &(this->Components).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar2->AllocatorInstance,(this->Components).ArrayNum,
                 &(this->Components).ArrayMax);
    }
  }
  return;
}

// RemoveExtension @ 14d990230

void __thiscall
UAudioComponentGroup::RemoveExtension
          (UAudioComponentGroup *this,TScriptInterface<IAudioComponentGroupExtension> *param_1)

{
  TScriptInterface<IAudioComponentGroupExtension> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TScriptInterface<IAudioComponentGroupExtension> *local_res8;
  
  pTVar1 = (TScriptInterface<IAudioComponentGroupExtension> *)
           (this->Extensions).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->Extensions).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = param_1;
  TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->Extensions,(<lambda_1> *)&local_res8);
  return;
}

// RemoveExternalComponent @ 14d9902d0

void __thiscall
UAudioComponentGroup::RemoveExternalComponent(UAudioComponentGroup *this,UAudioComponent *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  FScriptContainerElement *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UAudioComponent *local_res10;
  FWeakObjectPtr local_38 [2];
  
  if (param_1 != (UAudioComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    iVar8 = 0;
    local_38[0].ObjectIndex = 0;
    local_38[0].ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res10);
    pFVar2 = (FWeakObjectPtr *)(this->ExternalComponents).AllocatorInstance.Data;
    if (((pFVar2 <= local_38) && (local_38 < pFVar2 + (this->ExternalComponents).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->ExternalComponents).ArrayNum;
    if (iVar1 != 0) {
      this_00 = (this->ExternalComponents).AllocatorInstance.Data;
      bVar5 = TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals<UAudioComponent,bool>
                        ((TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)this_00,
                         (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)local_38);
      bVar5 = !bVar5;
      iVar7 = iVar8;
      do {
        iVar4 = iVar7;
        do {
          iVar4 = iVar4 + 1;
          if (iVar1 <= iVar4) break;
          bVar6 = TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals<UAudioComponent,bool>
                            ((TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)
                             (this_00 + (longlong)iVar4 * 8),
                             (TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)local_38);
        } while (bVar5 == !bVar6);
        if (bVar5 != false) {
          if (iVar8 != iVar7) {
            memmove(this_00 + (longlong)iVar8 * 8,this_00 + (longlong)iVar7 * 8,
                    (longlong)(iVar4 - iVar7) << 3);
          }
          iVar8 = iVar8 + (iVar4 - iVar7);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar7 = iVar4;
      } while (iVar4 < iVar1);
      (this->ExternalComponents).ArrayNum = iVar8;
    }
  }
  return;
}

// ResetComponent @ 14d990780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioComponent * __thiscall
UAudioComponentGroup::ResetComponent(UAudioComponentGroup *this,UAudioComponent *param_1)

{
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (UAudioComponent *)0x0) {
    local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    USceneComponent::SetRelativeLocationAndRotation
              ((USceneComponent *)param_1,(TVector<double> *)&local_28._s_0,&local_48,false,
               (FHitResult *)0x0,None);
    (**(code **)(*(longlong *)&param_1->field_0x250 + 0x10))();
    param_1->bAllowSpatialization = '\x01';
    ApplyParams(this,param_1);
    UAudioComponent::SetVolumeMultiplier(param_1,(this->CachedModifier).Volume);
    UAudioComponent::SetPitchMultiplier(param_1,(this->CachedModifier).Pitch);
    UAudioComponent::SetLowPassFilterFrequency(param_1,(this->CachedModifier).LowPassFrequency);
  }
  return param_1;
}

// ResetParameters @ 14d990850

void __thiscall UAudioComponentGroup::ResetParameters(UAudioComponentGroup *this)

{
  FAudioParameter *pFVar1;
  
  pFVar1 = *(FAudioParameter **)&this->field_0x88;
  if (-1 < *(int *)&this->field_0x94) {
    DestructItems<FAudioParameter,int>(pFVar1,*(int *)&this->field_0x90);
    *(undefined4 *)&this->field_0x90 = 0;
    return;
  }
  DestructItems<FAudioParameter,int>(pFVar1,*(int *)&this->field_0x90);
  *(undefined4 *)&this->field_0x90 = 0;
  if (*(int *)&this->field_0x94 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,(ForAnyElementType *)&this->field_0x88,0,(int *)&this->field_0x94);
  }
  return;
}

// SetBoolArrayParameter @ 14d990990

void __thiscall
UAudioComponentGroup::SetBoolArrayParameter
          (UAudioComponentGroup *this,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetBoolParameter @ 14d990bd0

void __thiscall
UAudioComponentGroup::SetBoolParameter(UAudioComponentGroup *this,FName param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.ParamType = Boolean;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.BoolParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatArrayParameter @ 14d990e60

void __thiscall
UAudioComponentGroup::SetFloatArrayParameter
          (UAudioComponentGroup *this,FName param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFloatParameter @ 14d9910a0

void __thiscall
UAudioComponentGroup::SetFloatParameter(UAudioComponentGroup *this,FName param_1,float param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.BoolParam = false;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.ParamType = Float;
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.FloatParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntArrayParameter @ 14d991330

void __thiscall
UAudioComponentGroup::SetIntArrayParameter
          (UAudioComponentGroup *this,FName param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          )

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIntParameter @ 14d991570

void __thiscall
UAudioComponentGroup::SetIntParameter(UAudioComponentGroup *this,FName param_1,int param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.BoolParam = false;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_a8.ParamType = Integer;
  local_b0 = 1;
  local_a8.ParamName = param_1;
  local_a8.IntParam = param_2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectArrayParameter @ 14d991800

void __thiscall
UAudioComponentGroup::SetObjectArrayParameter
          (UAudioComponentGroup *this,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetObjectParameter @ 14d991a40

void __thiscall
UAudioComponentGroup::SetObjectParameter(UAudioComponentGroup *this,FName param_1,UObject *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.BoolParam = false;
  local_a8.IntParam = 0;
  local_a8.ParamName = param_1;
  local_a8.ObjectParam.field0_0x0 = (TObjectPtr<UObject>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_a8.StringParam.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = 0;
  local_a8.StringParam.Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = Object;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParameter @ 14d991d20

void __thiscall
UAudioComponentGroup::SetParameter(UAudioComponentGroup *this,FAudioParameter *param_1)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = param_1->FloatParam;
  local_a8.ObjectParam.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(param_1->ObjectParam).field0_0x0.DebugPtr;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.ParamName = param_1->ParamName;
  local_a8.BoolParam = param_1->BoolParam;
  local_a8.IntParam = param_1->IntParam;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_a8.ObjectParam.field0_0x0.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8.ObjectParam.field0_0x0);
  }
  local_a8.StringParam.Data.AllocatorInstance.Data =
       (param_1->StringParam).Data.AllocatorInstance.Data;
  (param_1->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.StringParam.Data.ArrayNum = (param_1->StringParam).Data.ArrayNum;
  local_a8.StringParam.Data.ArrayMax = (param_1->StringParam).Data.ArrayMax;
  (param_1->StringParam).Data.ArrayNum = 0;
  (param_1->StringParam).Data.ArrayMax = 0;
  local_a8.ArrayFloatParam.AllocatorInstance.Data =
       (param_1->ArrayFloatParam).AllocatorInstance.Data;
  (param_1->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = (param_1->ArrayFloatParam).ArrayNum;
  local_a8.ArrayFloatParam.ArrayMax = (param_1->ArrayFloatParam).ArrayMax;
  (param_1->ArrayFloatParam).ArrayNum = 0;
  (param_1->ArrayFloatParam).ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (param_1->ArrayBoolParam).AllocatorInstance.Data;
  (param_1->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = (param_1->ArrayBoolParam).ArrayNum;
  local_a8.ArrayBoolParam.ArrayMax = (param_1->ArrayBoolParam).ArrayMax;
  (param_1->ArrayBoolParam).ArrayNum = 0;
  (param_1->ArrayBoolParam).ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (param_1->ArrayIntParam).AllocatorInstance.Data;
  (param_1->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = (param_1->ArrayIntParam).ArrayNum;
  local_a8.ArrayIntParam.ArrayMax = (param_1->ArrayIntParam).ArrayMax;
  (param_1->ArrayIntParam).ArrayNum = 0;
  (param_1->ArrayIntParam).ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data =
       (param_1->ArrayObjectParam).AllocatorInstance.Data;
  (param_1->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = (param_1->ArrayObjectParam).ArrayNum;
  local_a8.ArrayObjectParam.ArrayMax = (param_1->ArrayObjectParam).ArrayMax;
  (param_1->ArrayObjectParam).ArrayNum = 0;
  (param_1->ArrayObjectParam).ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data =
       (param_1->ArrayStringParam).AllocatorInstance.Data;
  (param_1->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = (param_1->ArrayStringParam).ArrayNum;
  local_a8.ArrayStringParam.ArrayMax = (param_1->ArrayStringParam).ArrayMax;
  (param_1->ArrayStringParam).ArrayNum = 0;
  (param_1->ArrayStringParam).ArrayMax = 0;
  local_a8.ParamType = param_1->ParamType;
  local_a8.TypeName = param_1->TypeName;
  local_a8.ObjectProxies.AllocatorInstance.Data = (param_1->ObjectProxies).AllocatorInstance.Data;
  (param_1->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = (param_1->ObjectProxies).ArrayNum;
  local_a8.ObjectProxies.ArrayMax = (param_1->ObjectProxies).ArrayMax;
  (param_1->ObjectProxies).ArrayNum = 0;
  (param_1->ObjectProxies).ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetParameters @ 14d992430

void __thiscall
UAudioComponentGroup::SetParameters
          (UAudioComponentGroup *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  EAudioParameterType EVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FName _Src;
  char cVar4;
  int iVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  FAudioParameter *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FAudioParameter *pFVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *local_res10;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  lVar11 = (longlong)param_1->ArrayNum;
  iVar14 = 0;
  local_res10 = param_1;
  if (param_1->ArrayNum != 0) {
    iVar14 = 0;
    pFVar3 = (param_1->AllocatorInstance).Data;
    bVar16 = *(longlong *)pFVar3 != 0;
    lVar9 = 0;
    iVar5 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar13 = iVar5 + 1;
      if (lVar9 < lVar11) {
        pFVar7 = pFVar3 + lVar9 * 0xa0;
        do {
          if (bVar16 != (*(longlong *)pFVar7 != 0)) break;
          iVar13 = iVar13 + 1;
          lVar9 = lVar9 + 1;
          pFVar7 = pFVar7 + 0xa0;
        } while (lVar9 < lVar11);
      }
      iVar12 = iVar13 - iVar5;
      if (bVar16 == false) {
        DestructItems<FAudioParameter,int>
                  ((FAudioParameter *)(pFVar3 + (longlong)iVar5 * 0xa0),iVar12);
      }
      else {
        if (iVar14 != iVar5) {
          memmove(pFVar3 + (longlong)iVar14 * 0xa0,pFVar3 + (longlong)iVar5 * 0xa0,
                  (longlong)iVar12 * 0xa0);
        }
        iVar14 = iVar14 + iVar12;
      }
      bVar16 = (bool)(bVar16 ^ 1);
      iVar5 = iVar13;
    } while (lVar9 < lVar11);
    local_res10->ArrayNum = iVar14;
  }
  pFVar10 = (FAudioParameter *)(local_res10->AllocatorInstance).Data;
  pFVar15 = pFVar10 + iVar14;
  do {
    while( true ) {
      if (local_res10->ArrayNum != iVar14) {
        `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar15) {
        FAudioParameter::Merge
                  (local_res10,
                   (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)&this->field_0x78);
        return;
      }
      EVar1 = pFVar10->ParamType;
      if (EVar1 != Boolean) break;
      pFVar6 = *(FName **)&this->field_0x88;
      pFVar8 = pFVar6 + (longlong)*(int *)&this->field_0x90 * 0x14;
      for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 0x14) {
        if (*pFVar6 == pFVar10->ParamName) {
          cVar4 = (char)pFVar6[1].Number;
          goto LAB_14d9926e7;
        }
      }
      cVar4 = '\0';
LAB_14d9926e7:
      if ((bool)cVar4 != pFVar10->BoolParam) {
        ExecuteBoolParamSubscriptions((UAudioComponentGroup *)&this[-1].field_0x1d0,pFVar10);
      }
LAB_14d9926fb:
      pFVar10 = pFVar10 + 1;
    }
    if (EVar1 == String) {
      pFVar6 = *(FName **)&this->field_0x88;
      pFVar8 = pFVar6 + (longlong)*(int *)&this->field_0x90 * 0x14;
      for (; pFVar6 != pFVar8; pFVar6 = pFVar6 + 0x14) {
        if (*pFVar6 == pFVar10->ParamName) {
          local_48.Data = (FScriptContainerElement *)0x0;
          uVar2 = pFVar6[5].ComparisonIndex.Value;
          _Src = pFVar6[4];
          local_40 = CONCAT44(local_40._4_4_,uVar2);
          if (uVar2 == 0) {
            local_40 = 0;
            iVar5 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar2,0,&local_48,uVar2,(int *)((longlong)&local_40 + 4));
            memcpy(local_48.Data,(void *)_Src,(longlong)(int)uVar2 * 2);
            iVar5 = (int)local_40;
          }
          goto LAB_14d9925e1;
        }
      }
      iVar5 = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
LAB_14d9925e1:
      iVar13 = (pFVar10->StringParam).Data.ArrayNum;
      if (iVar5 == iVar13) {
        if (iVar5 < 2) {
          bVar16 = false;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_48.Data,
                             (wchar_t *)(pFVar10->StringParam).Data.AllocatorInstance.Data);
          bVar16 = iVar5 != 0;
        }
      }
      else {
        bVar16 = iVar13 + iVar5 != 1;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      if (!bVar16) goto LAB_14d9926fb;
      ExecuteStringParamSubscriptions((UAudioComponentGroup *)&this[-1].field_0x1d0,pFVar10);
      pFVar10 = pFVar10 + 1;
    }
    else {
      if (EVar1 != Trigger) goto LAB_14d9926fb;
      ExecuteEventSubscriptions((UAudioComponentGroup *)&this[-1].field_0x1d0,pFVar10->ParamName);
      pFVar10 = pFVar10 + 1;
    }
  } while( true );
}

// SetParameters_Blueprint @ 14d9929c0

void __thiscall
UAudioComponentGroup::SetParameters_Blueprint
          (UAudioComponentGroup *this,TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<FAudioParameter,FAudioParameter,int>(local_18.Data,pFVar2,iVar1);
  }
  (**(code **)(*(longlong *)this + 0x80))(this,&local_18);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_18.Data,local_10);
  if ((FAudioParameter *)local_18.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// SetStringArrayParameter @ 14d992b20

void __thiscall
UAudioComponentGroup::SetStringArrayParameter
          (UAudioComponentGroup *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  FAudioParameter::FAudioParameter(&local_a8,param_1,param_2);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStringParameter @ 14d992d60

void __thiscall
UAudioComponentGroup::SetStringParameter(UAudioComponentGroup *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FAudioParameter local_a8;
  
  local_a8.FloatParam = 0.0;
  local_a8.BoolParam = false;
  pcVar1 = *(code **)(*(longlong *)this + 0x80);
  local_a8.IntParam = 0;
  local_a8.ObjectParam.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_a8.ParamName = param_1;
  ::FString::FString(&local_a8.StringParam,param_2);
  local_a8.ArrayFloatParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayFloatParam.ArrayNum = 0;
  local_a8.ArrayFloatParam.ArrayMax = 0;
  local_a8.ArrayBoolParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayBoolParam.ArrayNum = 0;
  local_a8.ArrayBoolParam.ArrayMax = 0;
  local_a8.ArrayIntParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayIntParam.ArrayNum = 0;
  local_a8.ArrayIntParam.ArrayMax = 0;
  local_a8.ArrayObjectParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayObjectParam.ArrayNum = 0;
  local_a8.ArrayObjectParam.ArrayMax = 0;
  local_a8.ArrayStringParam.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayStringParam.ArrayNum = 0;
  local_a8.ArrayStringParam.ArrayMax = 0;
  local_a8.ParamType = String;
  local_a8.TypeName.ComparisonIndex.Value = 0;
  local_a8.TypeName.Number = 0;
  local_a8.ObjectProxies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectProxies.ArrayNum = 0;
  local_a8.ObjectProxies.ArrayMax = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,0,&local_b8,1,&local_ac);
  ConstructItems<FAudioParameter,FAudioParameter,int>(local_b8.Data,&local_a8,1);
  (*pcVar1)(this,&local_b8);
  DestructItems<FAudioParameter,int>((FAudioParameter *)local_b8.Data,local_b0);
  if ((FAudioParameter *)local_b8.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data,
             local_a8.ObjectProxies.ArrayNum);
  if ((TSharedPtr<Audio::IProxyData,1> *)local_a8.ObjectProxies.AllocatorInstance.Data !=
      (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_a8.ObjectProxies.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_a8.ArrayStringParam.AllocatorInstance.Data,
             local_a8.ArrayStringParam.ArrayNum);
  if (local_a8.ArrayStringParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayStringParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayObjectParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayObjectParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayIntParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayIntParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayBoolParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayBoolParam.AllocatorInstance.Data);
  }
  if (local_a8.ArrayFloatParam.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ArrayFloatParam.AllocatorInstance.Data);
  }
  if (local_a8.StringParam.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringParam.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTriggerParameter @ 14d993100

void __thiscall UAudioComponentGroup::SetTriggerParameter(UAudioComponentGroup *this,FName param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  ExecuteEventSubscriptions((UAudioComponentGroup *)&this[-1].field_0x1d0,param_1);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAudioComponentGroup::SetTriggerParameter'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UAudioComponentGroup::SetTriggerParameter'::__l2::<lambda_1>,void,UAudioComponent_*>
                ::Call;
  local_20 = param_1;
  IterateComponents((UAudioComponentGroup *)&this[-1].field_0x1d0,
                    (TFunction<void___cdecl(UAudioComponent_*)> *)local_38);
  return;
}

// StaticGetOrCreateComponentGroup @ 14d993300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAudioComponentGroup * __cdecl
UAudioComponentGroup::StaticGetOrCreateComponentGroup(AActor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UAudioComponentGroup *pUVar7;
  ForElementType<UAudioComponentGroup_*> FVar8;
  longlong *plVar9;
  AActor *this;
  bool bVar10;
  undefined1 auStackY_1b8 [32];
  UClass *local_188;
  UClass *local_180;
  undefined1 local_178 [128];
  ForElementType<UAudioComponentGroup_*> local_f8;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId23,"UAudioComponentGroup::StaticGetOrCreateComponentGroup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
               ,0x17);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId23);
  }
  local_f8.SecondaryData = (ForElementType<UAudioComponentGroup_*>)0x0;
  local_30 = 0;
  local_2c = 0x18;
  if (param_1 == (AActor *)0x0) {
    pUVar7 = (UAudioComponentGroup *)0x0;
  }
  else {
    do {
      this = param_1;
      local_30 = 0;
      if ((local_2c < 0) && (local_2c != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UAudioComponentGroup_*>_>
                  (8,8,0,&local_f8,0,&local_2c);
      }
      pUVar4 = StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UClass *)0x0) goto LAB_14d9933f8;
LAB_14d993429:
        pUVar5 = (UClass *)0x0;
      }
      else {
        if (pUVar4 == (UClass *)0x0) goto LAB_14d993429;
        UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14d9933f8:
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar5 == (UClass *)0x0) goto LAB_14d993429;
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pUVar5 = pUVar4;
        if (!bVar3) goto LAB_14d993429;
      }
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar5 == pUVar6) {
        local_188 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UAudioComponentGroup,1,0,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this,(TSubclassOf<UActorComponent>)&local_188,
                   (TArray<UAudioComponentGroup_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_f8);
      }
      else {
        local_180 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UAudioComponentGroup,0,0,_AActor::GetComponents<UAudioComponentGroup,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this,(TSubclassOf<UActorComponent>)&local_180,
                   (TArray<UAudioComponentGroup_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)&local_f8);
      }
      if (local_30 != 0) {
        if ((local_30 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar7 = (UAudioComponentGroup *)(*pcVar2)();
          return pUVar7;
        }
        FVar8 = (ForElementType<UAudioComponentGroup_*>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<UAudioComponentGroup_*>)0x0) {
          FVar8 = local_f8.SecondaryData;
        }
        pUVar7 = *(UAudioComponentGroup **)FVar8;
        goto LAB_14d993597;
      }
      pUVar4 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
    } while (((*(int *)(this->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) &&
            (param_1 = (this->Owner).field0_0x0.DebugPtr, param_1 != (AActor *)0x0));
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_178,pUVar4);
    local_178._8_8_ = this;
    pUVar7 = (UAudioComponentGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
    if (local_178._64_8_ != 0) {
      plVar9 = (longlong *)(local_178 + 0x50);
      if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_178._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    UActorComponent::RegisterComponent((UActorComponent *)pUVar7);
  }
LAB_14d993597:
  if (local_f8.SecondaryData != (ForElementType<UAudioComponentGroup_*>)0x0) {
    FMemory::Free((void *)local_f8.SecondaryData);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar7;
}

// StaticRegisterNativesUAudioComponentGroup @ 14d993630

void __cdecl UAudioComponentGroup::StaticRegisterNativesUAudioComponentGroup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UAudioComponentGroup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopSound @ 14d993850

void __thiscall
UAudioComponentGroup::StopSound(UAudioComponentGroup *this,USoundBase *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  FWeakObjectPtr local_res8;
  
  pFVar7 = (this->Components).AllocatorInstance.Data;
  iVar3 = (this->Components).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Components).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UAudioComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    if (*(longlong *)pFVar7 != 0) {
      cVar5 = (**(code **)(*(longlong *)(*(longlong *)pFVar7 + 0x250) + 0xa8))();
      if (cVar5 != '\0') {
        plVar4 = *(longlong **)pFVar7;
        if ((USoundBase *)plVar4[0x93] == (USoundBase *)0x0) {
          bVar9 = param_1 == (USoundBase *)0x0;
        }
        else {
          bVar9 = (USoundBase *)plVar4[0x93] == param_1;
        }
        if (bVar9) {
          (**(code **)(*plVar4 + 0x648))(plVar4,param_2);
        }
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  pFVar8 = (FWeakObjectPtr *)(this->ExternalComponents).AllocatorInstance.Data;
  iVar3 = (this->ExternalComponents).ArrayNum;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if ((this->ExternalComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_res8 = *pFVar8;
    bVar9 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar9) {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      cVar5 = (**(code **)(*(longlong *)&pUVar6[0xe].field_0x20 + 0xa8))();
      if (cVar5 != '\0') {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        if (*(USoundBase **)&pUVar6[0x1d].field_0x10 == (USoundBase *)0x0) {
          bVar9 = param_1 == (USoundBase *)0x0;
        }
        else {
          bVar9 = *(USoundBase **)&pUVar6[0x1d].field_0x10 == param_1;
        }
        if (bVar9) {
          pUVar6 = FWeakObjectPtr::Get(&local_res8);
          (**(code **)(*(longlong *)pUVar6 + 0x648))(pUVar6,param_2,0,0);
        }
      }
    }
    pFVar8 = pFVar8 + 1;
  }
  return;
}

// SubscribeToBool @ 14d9939c0

void __thiscall
UAudioComponentGroup::SubscribeToBool
          (UAudioComponentGroup *this,FName param_1,FBoolParamCallback *param_2)

{
  TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *this_00;
  TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [24];
  FReadAccessScope local_20;
  
  local_res8.Value = (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *)param_1;
  this_00 = TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->BoolSubscriptions,param_1);
  if (this_00 == (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    local_38._0_8_ = (atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_48,1,&local_3c);
    ConstructItems<FBoolParamCallback,FBoolParamCallback,int>
              (local_48.Data,(FBoolParamCallback *)local_38,1);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    local_38._0_8_ = &local_res8.Value;
    local_38._8_8_ = &local_48;
    TSet<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->BoolSubscriptions,&local_res8,(bool *)local_38);
    DestructItems<FBoolParamCallback,int>((FBoolParamCallback *)local_48.Data,local_40);
    if ((FBoolParamCallback *)local_48.Data != (FBoolParamCallback *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else {
    TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FBoolParamCallback_const_&>(this_00,param_2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SubscribeToEvent @ 14d993b00

void __thiscall
UAudioComponentGroup::SubscribeToEvent
          (UAudioComponentGroup *this,FName param_1,FSoundCallback *param_2)

{
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *this_00;
  TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  undefined1 local_38 [24];
  FReadAccessScope local_20;
  
  local_res8.Value = (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)param_1;
  this_00 = TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
            ::Find((TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
                    *)&this->EventSubscriptions,param_1);
  if (this_00 == (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    local_38._0_8_ = (atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_48,1,&local_3c);
    ConstructItems<FSoundCallback,FSoundCallback,int>(local_48.Data,(FSoundCallback *)local_38,1);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    local_38._0_8_ = &local_res8.Value;
    local_38._8_8_ = &local_48;
    TSet<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->EventSubscriptions,&local_res8,(bool *)local_38);
    DestructItems<FSoundCallback,int>((FSoundCallback *)local_48.Data,local_40);
    if ((FSoundCallback *)local_48.Data != (FSoundCallback *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else {
    TArray<FSoundCallback,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoundCallback_const_&>
              (this_00,param_2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SubscribeToStringParam @ 14d993c40

void __thiscall
UAudioComponentGroup::SubscribeToStringParam
          (UAudioComponentGroup *this,FName param_1,FStringParamCallback *param_2)

{
  FStringParamCallback *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  TPairInitializer<FName_const_&,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> **local_78;
  ForAnyElementType *local_70;
  FStringParamCallback local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  local_res8.Value = (TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *)param_1;
  pTVar6 = TMapBase<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->StringSubscriptions,param_1);
  if (pTVar6 == (TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    local_68._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    local_68._8_8_ = *(undefined8 *)&param_2->field_0x8;
    local_68._16_8_ = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_88,1,&local_7c);
    ConstructItems<FStringParamCallback,FStringParamCallback,int>(local_88.Data,&local_68,1);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_68);
    local_78 = &local_res8.Value;
    local_70 = &local_88;
    TSet<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->StringSubscriptions,&local_res8,(bool *)&local_78);
    DestructItems<FStringParamCallback,int>((FStringParamCallback *)local_88.Data,local_80);
    if ((FStringParamCallback *)local_88.Data != (FStringParamCallback *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    pFVar1 = (FStringParamCallback *)(pTVar6->AllocatorInstance).Data;
    if ((pFVar1 <= param_2) && (param_2 < pFVar1 + pTVar6->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = pTVar6->ArrayNum;
    if (iVar5 == pTVar6->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5;
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar7 * 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
    *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 0x10) = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// TickComponent @ 14d9940f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAudioComponentGroup::TickComponent
          (UAudioComponentGroup *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  FAudioParameter *pFVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined1 local_res8 [8];
  float local_78;
  float fStack_74;
  float local_70;
  code *local_68 [2];
  undefined **local_58;
  UAudioComponentGroup *local_50;
  float *local_48;
  undefined8 local_40;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,"UAudioComponentGroup::TickComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  iVar3 = (this->Extensions).ArrayNum;
  pFVar7 = (this->Extensions).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar3 * 0x10;
  local_78 = 1.0;
  fStack_74 = 1.0;
  local_70 = 20000.0;
  while( true ) {
    if ((this->Extensions).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TScriptInterface<IAudioComponentGroupExtension>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pUVar4 = *(UObject **)pFVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    plVar6 = *(longlong **)(pFVar7 + 8);
    if (pUVar4 == (UObject *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,param_1,this,&local_78);
    pFVar7 = pFVar7 + 0x10;
  }
  fVar11 = (this->GroupModifier).LowPassFrequency;
  if (local_70 <= fVar11) {
    fVar11 = local_70;
  }
  local_78 = local_78 * (this->GroupModifier).Volume;
  fStack_74 = fStack_74 * (this->GroupModifier).Pitch;
  if (this->bIsVirtualized != false) {
    local_78 = 0.0;
  }
  local_70 = fVar11;
  if (((__real_322bcc77 <
        (float)((uint)(local_78 - (this->CachedModifier).Volume) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(fStack_74 - (this->CachedModifier).Pitch) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)(fVar11 - (this->CachedModifier).LowPassFrequency) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    local_40 = 0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::`12'::<lambda_1>,0,0>
                ::_vftable_;
    local_48 = &local_78;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,void,UAudioComponent_*>
                  ::Call;
    local_50 = this;
    IterateComponents(this,(TFunction<void___cdecl(UAudioComponent_*)> *)local_68);
    (this->CachedModifier).Volume = local_78;
    (this->CachedModifier).Pitch = fStack_74;
    (this->CachedModifier).LowPassFrequency = local_70;
  }
  pTVar2 = &this->ParamsToSet;
  if ((this->ParamsToSet).ArrayNum != 0) {
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId574,"UAudioComponentGroup::UpdateComponentParameters",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
                 ,0x23e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
    }
    if (this->bIsVirtualized == false) {
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,void,UAudioComponent_*>
                    ::Call;
      local_50 = this;
      IterateComponents(this,(TFunction<void___cdecl(UAudioComponent_*)> *)local_68);
    }
    FAudioParameter::Merge(pTVar2,&this->PersistentParams);
    piVar1 = &(this->ParamsToSet).ArrayMax;
    pFVar5 = (FAudioParameter *)(pTVar2->AllocatorInstance).Data;
    iVar3 = (this->ParamsToSet).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FAudioParameter,int>(pFVar5,iVar3);
      (this->ParamsToSet).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FAudioParameter,int>(pFVar5,iVar3);
      (this->ParamsToSet).ArrayNum = 0;
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAudioComponentGroupDebug::DebugPrint(this);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnsubscribeObject @ 14d994920

void __thiscall UAudioComponentGroup::UnsubscribeObject(UAudioComponentGroup *this,UObject *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  UFunction *pUVar9;
  longlong lVar10;
  int iVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar12;
  FMRSWRecursiveAccessDetector *pFVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_238 [4];
  uint local_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  ulonglong local_220;
  TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b8;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FReadAccessScope local_d8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&this->BoolSubscriptions;
  local_1b8._padding_._0_4_ = 0;
  local_220 = 1;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoolSubscriptions).field_0x10;
  local_1b8._padding_._4_4_ = 1;
  local_1b8.UnvisitedBitMask = 0xffffffff;
  local_1b8.CurrentBitIndex = 0;
  local_1b8.BaseBitIndex = 0;
  local_230 = pTVar19;
  local_228 = pTVar18;
  local_1b8.Array = pTVar19;
  if (*(int *)&(this->BoolSubscriptions).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b8);
  }
  uVar15 = *(uint *)&(this->BoolSubscriptions).field_0x28;
  TStack_1e0._padding_ = CONCAT44(local_1b8._padding_._4_4_,(undefined4)local_1b8._padding_);
  TStack_1e0.CurrentBitIndex = local_1b8.CurrentBitIndex;
  TStack_1e0.UnvisitedBitMask = local_1b8.UnvisitedBitMask;
  TStack_1e0._28_4_ = local_1b8._28_4_;
  TStack_1e0.BaseBitIndex = local_1b8.BaseBitIndex;
  local_1c0 = CONCAT44(local_1c0._4_4_,
                       *(int *)&(this->BoolSubscriptions).field_0x8 -
                       *(int *)&(this->BoolSubscriptions).field_0x34);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_1e0.Array = local_1b8.Array;
  iVar11 = (int)uVar15 >> 5;
  TStack_178.Array = local_1b8.Array;
  uStack_158 = local_1c0;
  local_234 = uVar15;
  local_1e8 = (TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar18;
  local_180 = (TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar18;
  TStack_178._padding_ = TStack_1e0._padding_;
  TStack_178._16_8_ = TStack_1e0._16_8_;
  TStack_178._24_8_ = TStack_1e0._24_8_;
  if (((int)uVar15 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar20 = *(uint *)&(this->BoolSubscriptions).field_0x28;
  if (uVar15 != uVar20) {
    puVar16 = *(undefined1 **)&(this->BoolSubscriptions).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar19;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar20;
      local_234 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14d994a91;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_198 = (int)lVar10;
    uVar15 = local_198 + -1 + uVar14;
    local_234 = uVar15;
    if ((int)uVar20 < (int)uVar15) {
      uVar15 = uVar20;
      local_234 = uVar20;
    }
  }
LAB_14d994a91:
  while( true ) {
    pTVar4 = local_180;
    if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_178.CurrentBitIndex == uVar15) && (TStack_178.Array == pTVar19)) &&
       (pTVar4 == (TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)pTVar18)) break;
    lVar10 = (longlong)TStack_178.CurrentBitIndex * 0x20 + *(longlong *)pTVar4;
    for (uVar15 = 0; (-1 < (int)uVar15 && ((int)uVar15 < *(int *)(lVar10 + 0x10)));
        uVar15 = uVar15 + 1) {
      uVar14 = ~uVar15 >> 0x1f;
      if (((int)uVar15 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = (longlong)(int)uVar15 * 0x18;
      pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                (*(longlong *)(lVar10 + 8) + lVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar12,&local_d8);
      if ((pTVar12[2].AccessDetector.State == (atomic<unsigned___int64>)0x0) ||
         (pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1)), pUVar8 == (UObject *)0x0))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d8);
LAB_14d994c23:
        uVar20 = 0;
        if ((int)uVar15 < *(int *)(lVar10 + 0x10)) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FMRSWRecursiveAccessDetector *)(*(longlong *)(lVar10 + 8) + lVar2);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar13);
        iVar11 = *(int *)(lVar10 + 0x10) + ~uVar15;
        if (iVar11 != 0) {
          memmove(pFVar13,pFVar13 + 3,(longlong)iVar11 * 0x18);
        }
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)(lVar10 + 8),*(int *)(lVar10 + 0x10),
                   (int *)(lVar10 + 0x14));
        uVar15 = uVar15 - 1;
      }
      else {
        pUVar9 = UObject::FindFunction(pUVar8,*(FName *)(pTVar12 + 2));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d8);
        if (pUVar9 == (UFunction *)0x0) goto LAB_14d994c23;
        uVar20 = 0;
        if ((int)uVar15 < *(int *)(lVar10 + 0x10)) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                  (*(longlong *)(lVar10 + 8) + lVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (pTVar12,(FWriteAccessScope *)&local_120);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1));
        if (local_120.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
        }
        if (pUVar8 == param_1) goto LAB_14d994c23;
      }
    }
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    pTVar18 = local_228;
    pTVar19 = local_230;
    uVar15 = local_234;
  }
  iStack_210 = 0;
  local_1f8 = 0;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->StringSubscriptions).field_0x10;
  iVar11 = *(int *)&(this->StringSubscriptions).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&this->StringSubscriptions;
  uStack_20c = (uint)local_220;
  iStack_1fc = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->StringSubscriptions).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar18;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_14d994d7d;
      uVar15 = puVar17[lVar10 + 1];
    }
    uStack_20c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_20c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_194 = (int)lVar10;
    iStack_1fc = local_194 + -1 + local_1f8;
    if (iVar11 < iStack_1fc) {
      iStack_1fc = iVar11;
    }
  }
LAB_14d994d7d:
  uVar15 = *(uint *)&(this->StringSubscriptions).field_0x28;
  uStack_1f4 = local_74;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_1f0 = *(int *)&(this->StringSubscriptions).field_0x8 -
               *(int *)&(this->StringSubscriptions).field_0x34;
  uStack_200 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_20c,iStack_210);
  TStack_148.CurrentBitIndex = iStack_1fc;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_148._28_4_ = local_74;
  TStack_148.BaseBitIndex = local_1f8;
  uStack_128 = CONCAT44(uStack_1ec,iStack_1f0);
  local_234 = uVar15;
  local_230 = pTVar19;
  local_228 = pTVar18;
  local_218 = (TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar19;
  local_208 = (undefined1 *)pTVar18;
  local_150 = (TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar19;
  TStack_148.Array = pTVar18;
  if (((int)uVar15 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar20 = *(uint *)&(this->StringSubscriptions).field_0x28;
  if (uVar15 != uVar20) {
    puVar16 = *(undefined1 **)&(this->StringSubscriptions).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar18;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar20;
      local_234 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14d994ea0;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_190 = (int)lVar10;
    uVar15 = (uVar14 - 1) + local_190;
    local_234 = uVar15;
    if ((int)uVar20 < (int)uVar15) {
      uVar15 = uVar20;
      local_234 = uVar20;
    }
  }
LAB_14d994ea0:
  while( true ) {
    pTVar5 = local_150;
    if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_148.CurrentBitIndex == uVar15) && (TStack_148.Array == pTVar18)) &&
       (pTVar5 == (TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)pTVar19)) break;
    lVar10 = (longlong)TStack_148.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    for (uVar15 = 0; (-1 < (int)uVar15 && ((int)uVar15 < *(int *)(lVar10 + 0x10)));
        uVar15 = uVar15 + 1) {
      uVar14 = ~uVar15 >> 0x1f;
      if (((int)uVar15 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = (longlong)(int)uVar15 * 0x18;
      pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                (*(longlong *)(lVar10 + 8) + lVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar12,&local_c0);
      if ((pTVar12[2].AccessDetector.State == (atomic<unsigned___int64>)0x0) ||
         (pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1)), pUVar8 == (UObject *)0x0))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_c0);
LAB_14d995032:
        uVar20 = 0;
        if ((int)uVar15 < *(int *)(lVar10 + 0x10)) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FMRSWRecursiveAccessDetector *)(*(longlong *)(lVar10 + 8) + lVar2);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar13);
        iVar11 = *(int *)(lVar10 + 0x10) + ~uVar15;
        if (iVar11 != 0) {
          memmove(pFVar13,pFVar13 + 3,(longlong)iVar11 * 0x18);
        }
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)(lVar10 + 8),*(int *)(lVar10 + 0x10),
                   (int *)(lVar10 + 0x14));
        uVar15 = uVar15 - 1;
      }
      else {
        pUVar9 = UObject::FindFunction(pUVar8,*(FName *)(pTVar12 + 2));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_c0);
        if (pUVar9 == (UFunction *)0x0) goto LAB_14d995032;
        uVar20 = 0;
        if ((int)uVar15 < *(int *)(lVar10 + 0x10)) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                  (*(longlong *)(lVar10 + 8) + lVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (pTVar12,(FWriteAccessScope *)&local_108);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1));
        if (local_108.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
        }
        if (pUVar8 == param_1) goto LAB_14d995032;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    pTVar19 = local_230;
    pTVar18 = local_228;
    uVar15 = local_234;
  }
  iStack_210 = 0;
  local_1f8 = 0;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EventSubscriptions).field_0x10;
  iVar11 = *(int *)&(this->EventSubscriptions).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&this->EventSubscriptions;
  iStack_1fc = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->EventSubscriptions).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar18;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_14d995190;
      uVar15 = puVar17[lVar10 + 1];
    }
    local_220 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = local_220 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_18c = (int)lVar10;
    iStack_1fc = local_1f8 + -1 + local_18c;
    if (iVar11 < iStack_1fc) {
      iStack_1fc = iVar11;
    }
  }
LAB_14d995190:
  uStack_20c = (uint)local_220;
  uStack_1f4 = local_54;
  iStack_1f0 = *(int *)&(this->EventSubscriptions).field_0x8 -
               *(int *)&(this->EventSubscriptions).field_0x34;
  uVar15 = *(uint *)&(this->EventSubscriptions).field_0x28;
  uStack_200 = 0xffffffff;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_1e0._padding_ = CONCAT44(uStack_20c,iStack_210);
  TStack_1e0.CurrentBitIndex = iStack_1fc;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_1e0._28_4_ = local_54;
  TStack_1e0.BaseBitIndex = local_1f8;
  local_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
  local_230 = pTVar19;
  local_228 = pTVar18;
  local_218 = (TMap<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar19;
  local_208 = (undefined1 *)pTVar18;
  local_1e8 = (TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
               *)pTVar19;
  TStack_1e0.Array = pTVar18;
  if (((int)uVar15 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar20 = *(uint *)&(this->EventSubscriptions).field_0x28;
  if (uVar15 != uVar20) {
    puVar16 = *(undefined1 **)&(this->EventSubscriptions).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar18;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14d9952c0;
      uVar15 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_188 = (int)lVar10;
    uVar15 = (uVar14 - 1) + local_188;
    if ((int)uVar20 < (int)uVar15) {
      uVar15 = uVar20;
    }
  }
LAB_14d9952c0:
  do {
    pTVar4 = local_1e8;
    if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)local_1c0) {
      local_238[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar15) && (TStack_1e0.Array == pTVar18)) &&
       (pTVar4 == (TMap<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                   *)pTVar19)) {
      return;
    }
    lVar10 = (longlong)TStack_1e0.CurrentBitIndex * 0x20 + *(longlong *)pTVar4;
    for (uVar14 = 0; (-1 < (int)uVar14 && ((int)uVar14 < *(int *)(lVar10 + 0x10)));
        uVar14 = uVar14 + 1) {
      uVar20 = ~uVar14 >> 0x1f;
      if (((int)uVar14 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = (longlong)(int)uVar14 * 0x18;
      pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                (*(longlong *)(lVar10 + 8) + lVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar12,local_a8);
      if ((pTVar12[2].AccessDetector.State == (atomic<unsigned___int64>)0x0) ||
         (pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1)), pUVar8 == (UObject *)0x0))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_a8);
LAB_14d995453:
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar10 + 0x10)) {
          uVar7 = uVar20;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (FMRSWRecursiveAccessDetector *)(*(longlong *)(lVar10 + 8) + lVar2);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar13);
        iVar11 = *(int *)(lVar10 + 0x10) + ~uVar14;
        if (iVar11 != 0) {
          memmove(pFVar13,pFVar13 + 3,(longlong)iVar11 * 0x18);
        }
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)(lVar10 + 8),*(int *)(lVar10 + 0x10),
                   (int *)(lVar10 + 0x14));
        uVar14 = uVar14 - 1;
      }
      else {
        pUVar9 = UObject::FindFunction(pUVar8,*(FName *)(pTVar12 + 2));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_a8);
        if (pUVar9 == (UFunction *)0x0) goto LAB_14d995453;
        uVar7 = 0;
        if ((int)uVar14 < *(int *)(lVar10 + 0x10)) {
          uVar7 = uVar20;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar12 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                  (*(longlong *)(lVar10 + 8) + lVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (pTVar12,(FWriteAccessScope *)&local_f0);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar12 + 1));
        if (local_f0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
        }
        if (pUVar8 == param_1) goto LAB_14d995453;
      }
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    pTVar18 = local_228;
    pTVar19 = local_230;
  } while( true );
}

// UpdateComponentParameters @ 14d995530

void __thiscall UAudioComponentGroup::UpdateComponentParameters(UAudioComponentGroup *this)

{
  int *piVar1;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FAudioParameter *pFVar4;
  bool bVar5;
  code *local_38 [2];
  undefined **local_28;
  UAudioComponentGroup *local_20;
  undefined8 local_10;
  
  pTVar2 = &this->ParamsToSet;
  if ((this->ParamsToSet).ArrayNum != 0) {
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId574,"UAudioComponentGroup::UpdateComponentParameters",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
                 ,0x23e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId574);
    }
    if (this->bIsVirtualized == false) {
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UAudioComponentGroup::UpdateComponentParameters'::`8'::<lambda_1>,0,0>
                  ::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioComponentGroup::UpdateComponentParameters'::__l8::<lambda_1>,void,UAudioComponent_*>
                    ::Call;
      local_20 = this;
      IterateComponents(this,(TFunction<void___cdecl(UAudioComponent_*)> *)local_38);
    }
    FAudioParameter::Merge(pTVar2,&this->PersistentParams);
    piVar1 = &(this->ParamsToSet).ArrayMax;
    pFVar4 = (FAudioParameter *)(pTVar2->AllocatorInstance).Data;
    iVar3 = (this->ParamsToSet).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FAudioParameter,int>(pFVar4,iVar3);
      (this->ParamsToSet).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FAudioParameter,int>(pFVar4,iVar3);
      (this->ParamsToSet).ArrayNum = 0;
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// UpdateExtensions @ 14d995650

void __thiscall UAudioComponentGroup::UpdateExtensions(UAudioComponentGroup *this,float param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined1 local_res8 [8];
  float local_68;
  float fStack_64;
  float local_60;
  code *local_58 [2];
  undefined **local_48;
  UAudioComponentGroup *local_40;
  float *local_38;
  undefined8 local_30;
  
  pFVar5 = (this->Extensions).AllocatorInstance.Data;
  iVar1 = (this->Extensions).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  local_68 = 1.0;
  fStack_64 = 1.0;
  local_60 = 20000.0;
  while( true ) {
    if ((this->Extensions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TScriptInterface<IAudioComponentGroupExtension>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    pUVar2 = *(UObject **)pFVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    plVar3 = *(longlong **)(pFVar5 + 8);
    if (pUVar2 == (UObject *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1,this,&local_68);
    pFVar5 = pFVar5 + 0x10;
  }
  fVar6 = (this->GroupModifier).LowPassFrequency;
  if (local_60 <= fVar6) {
    fVar6 = local_60;
  }
  local_68 = local_68 * (this->GroupModifier).Volume;
  fStack_64 = fStack_64 * (this->GroupModifier).Pitch;
  if (this->bIsVirtualized != false) {
    local_68 = 0.0;
  }
  if (((__real_322bcc77 <
        (float)((uint)(local_68 - (this->CachedModifier).Volume) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(fStack_64 - (this->CachedModifier).Pitch) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)(fVar6 - (this->CachedModifier).LowPassFrequency) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UAudioComponentGroup::UpdateExtensions'::`12'::<lambda_1>,0,0>
                ::_vftable_;
    local_38 = &local_68;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioComponentGroup::UpdateExtensions'::__l12::<lambda_1>,void,UAudioComponent_*>
                  ::Call;
    local_60 = fVar6;
    local_40 = this;
    IterateComponents(this,(TFunction<void___cdecl(UAudioComponent_*)> *)local_58);
    (this->CachedModifier).Volume = local_68;
    (this->CachedModifier).Pitch = fStack_64;
    (this->CachedModifier).LowPassFrequency = local_60;
  }
  return;
}

// __DefaultConstructor @ 14d995e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UAudioComponentGroup::__DefaultConstructor(FObjectInitializer *param_1)

{
  byte bVar1;
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioComponentGroup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x469c4000;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    this[1].RelativeRotation.Roll = 0.0;
    this[1].RelativeScale3D.field0_0x0._s_0.X = 0.0;
    this[1].ComponentVelocity.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x14) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined8 *)&this[1].TransformUpdated = 0;
    *(undefined4 *)&this[1].TransformUpdated.field_0x8 = 0;
    this[1].TransformUpdated.field_0x10 = 0;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
    *(undefined1 *)&this->_padding_ = 6;
    *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xf7 | 6;
  }
  return;
}

// __VTableCtorCaller @ 14d996020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl UAudioComponentGroup::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UAudioComponentGroup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].CachedLevelCollection = (FLevelCollection *)0x0;
    this[1].PhysicsVolume.WeakPtr = (FWeakObjectPtr)0x0;
    this[1].AttachParent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[1].AttachSocketName.ComparisonIndex = 0;
    this[1].AttachSocketName.Number = 0;
    this[1].AttachChildren.ArrayNum = 0;
    this[1].AttachChildren.ArrayMax = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x469c4000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x469c4000;
    *(undefined4 *)&this[1].ClientAttachedChildren.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this[1].ClientAttachedChildren.AllocatorInstance.Data + 4) = 0x80;
    this[1].ClientAttachedChildren.ArrayNum = -1;
    this[1].ClientAttachedChildren.ArrayMax = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].Bounds.Origin.field0_0x0 + 8) = 0;
    this[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this[1].Bounds.SphereRadius = 0.0;
    *(undefined4 *)&this[1].RelativeLocation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 4) = 0x80;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].RelativeLocation.field0_0x0 + 0xc) = 0;
    this[1].RelativeRotation.Pitch = 0.0;
    *(undefined4 *)&this[1].RelativeRotation.Yaw = 0;
    this[1].RelativeRotation.Roll = 0.0;
    this[1].RelativeScale3D.field0_0x0._s_0.X = 0.0;
    this[1].ComponentVelocity.field0_0x0._s_0.X = 0.0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0xc) = 0x80;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].ComponentVelocity.field0_0x0 + 0x14) = 0;
    *(undefined8 *)&this[1].TransformUpdated = 0;
    *(undefined4 *)&this[1].TransformUpdated.field_0x8 = 0;
    this[1].TransformUpdated.field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// _getUObject @ 14d9962c0

UObject * __thiscall UAudioComponentGroup::_getUObject(UAudioComponentGroup *this)

{
  return (UObject *)&this[-1].BoolSubscriptions.field_0x38;
}

// _getUObject`adjustor{552}' @ 14d9962cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioComponentGroup::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall UAudioComponentGroup::_getUObject_adjustor_552__(UAudioComponentGroup *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioComponentGroup *)&this[-1].field_0x1f8);
  return (UObject *)pUVar1;
}

// execAddExtension @ 14d996330

void __cdecl UAudioComponentGroup::execAddExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  UObject *local_28;
  longlong *plStack_20;
  UObject *local_18;
  longlong *local_10;
  
  local_28 = (UObject *)0x0;
  plStack_20 = (longlong *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_10 = plStack_20;
  TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptInterface<IAudioComponentGroupExtension>_const_&>
            ((TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_> *)
             &param_1[0x12].field_0x18,(TScriptInterface<IAudioComponentGroupExtension> *)&local_18)
  ;
  plVar2 = (longlong *)0x0;
  if (local_18 != (UObject *)0x0) {
    plVar2 = local_10;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  return;
}

// execAddExternalComponent @ 14d996410

void __cdecl
UAudioComponentGroup::execAddExternalComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  FAudioParameter *pFVar3;
  code *pcVar4;
  UAudioComponent *this;
  char cVar5;
  int iVar6;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar7;
  UAudioComponent *local_res10;
  UAudioComponent *local_res20;
  FWeakObjectPtr local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  local_res10 = (UAudioComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAudioComponent *)0x0) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId522,"UAudioComponentGroup::ApplyParams",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplay\\Source\\AudioGameplay\\Private\\AudioComponentGroup.cpp"
                 ,0x20a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId522);
    }
    puVar1 = &this->field_0x250;
    cVar5 = (**(code **)(*(longlong *)puVar1 + 0xa8))(puVar1);
    if (cVar5 == '\0') {
      this_00 = (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*(longlong *)puVar1 + 0x98))(puVar1);
      TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::
      Append<FAudioParameter,TSizedDefaultAllocator<32>_>
                (this_00,(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)
                         &param_1[0x12].field_0x8);
    }
    else {
      pFVar3 = *(FAudioParameter **)&param_1[0x12].field_0x8;
      iVar6 = *(int *)&param_1[0x12].field_0x10;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = iVar6;
      if (iVar6 == 0) {
        local_34[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar6,0,&local_40,iVar6,local_34);
        ConstructItems<FAudioParameter,FAudioParameter,int>(local_40.Data,pFVar3,iVar6);
      }
      (**(code **)(*(longlong *)puVar1 + 0x80))(puVar1,&local_40);
      DestructItems<FAudioParameter,int>((FAudioParameter *)local_40.Data,local_38);
      if ((FAudioParameter *)local_40.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    UAudioComponent::SetVolumeMultiplier(this,*(float *)&param_1[0x13].field_0xc);
    UAudioComponent::SetPitchMultiplier(this,*(float *)&param_1[0x13].field_0x10);
    UAudioComponent::SetLowPassFilterFrequency(this,*(float *)&param_1[0x13].field_0x14);
    puVar1 = &param_1[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res20);
    if (((*(FWeakObjectPtr **)puVar1 <= &local_48) &&
        (&local_48 < *(FWeakObjectPtr **)puVar1 + *(int *)&param_1[0x13].field_0x24)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&param_1[0x13].field_0x20;
    if (iVar6 == *(int *)&param_1[0x13].field_0x24) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)puVar1,(int *)&param_1[0x13].field_0x24);
    }
    *(int *)&param_1[0x13].field_0x20 = iVar6 + 1;
    *(FWeakObjectPtr *)(*(longlong *)puVar1 + (longlong)iVar6 * 8) = local_48;
  }
  return;
}

// execBroadcastEvent @ 14d996700

void __cdecl
UAudioComponentGroup::execBroadcastEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BroadcastEvent((UAudioComponentGroup *)param_1,local_res10);
  return;
}

// execBroadcastKill @ 14d996790

void __cdecl UAudioComponentGroup::execBroadcastKill(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[0xf].field_0x18,
             (void *)0x0);
  return;
}

// execBroadcastStopAll @ 14d9967c0

void __cdecl
UAudioComponentGroup::execBroadcastStopAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(param_1 + 0xf),(void *)0x0);
  return;
}

// execDisableVirtualization @ 14d9968e0

void __cdecl
UAudioComponentGroup::execDisableVirtualization(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  FAudioParameter *pFVar6;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 0x1a) != '\0') {
    puVar2 = &param_1[0x11].field_0x20;
    pFVar6 = *(FAudioParameter **)puVar2;
    iVar4 = *(int *)(param_1 + 0x12);
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar4,0,&local_18.AllocatorInstance,iVar4,&local_18.ArrayMax);
      ConstructItems<FAudioParameter,FAudioParameter,int>
                (local_18.AllocatorInstance.Data,pFVar6,iVar4);
    }
    puVar3 = &param_1[0x12].field_0x8;
    FAudioParameter::Merge(&local_18,(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)puVar3);
    if (puVar2 != puVar3) {
      DestructItems<FAudioParameter,int>(*(FAudioParameter **)puVar2,*(int *)(param_1 + 0x12));
      iVar4 = *(int *)&param_1[0x12].field_0x10;
      puVar1 = &param_1[0x12].field_0x4;
      pFVar6 = *(FAudioParameter **)puVar3;
      iVar5 = *(int *)puVar1;
      *(int *)(param_1 + 0x12) = iVar4;
      if ((iVar4 == 0) && (iVar5 == 0)) {
        *(undefined4 *)puVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,iVar4,iVar5,(ForAnyElementType *)puVar2,iVar4,(int *)puVar1);
        ConstructItems<FAudioParameter,FAudioParameter,int>(*(void **)puVar2,pFVar6,iVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[0x10].field_0x20,
               (void *)0x0);
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FAudioParameter *)local_18.AllocatorInstance.Data != (FAudioParameter *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// execEnableVirtualization @ 14d996a40

void __cdecl
UAudioComponentGroup::execEnableVirtualization(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 0x1a) == '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1[0x10].field_0x8,
               (void *)0x0);
    return;
  }
  return;
}

// execGetBoolParamValue @ 14d996c20

void __cdecl
UAudioComponentGroup::execGetBoolParamValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x12].field_0x8;
  plVar3 = plVar2 + (longlong)*(int *)&param_1[0x12].field_0x10 * 0x14;
  while( true ) {
    if (plVar2 == plVar3) {
      *(undefined1 *)param_3 = 0;
      return;
    }
    if (*plVar2 == local_res8) break;
    plVar2 = plVar2 + 0x14;
  }
  *(undefined1 *)param_3 = *(undefined1 *)((longlong)plVar2 + 0xc);
  return;
}

// execGetFloatParamValue @ 14d996f20

void __cdecl
UAudioComponentGroup::execGetFloatParamValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x12].field_0x8;
  plVar3 = plVar2 + (longlong)*(int *)&param_1[0x12].field_0x10 * 0x14;
  do {
    if (plVar2 == plVar3) {
      uVar4 = 0;
LAB_14d996fc7:
      *(undefined4 *)param_3 = uVar4;
      return;
    }
    if (*plVar2 == local_res8) {
      uVar4 = (undefined4)plVar2[1];
      goto LAB_14d996fc7;
    }
    plVar2 = plVar2 + 0x14;
  } while( true );
}

// execGetStringParamValue @ 14d997020

void __cdecl
UAudioComponentGroup::execGetStringParamValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar3 = *(longlong **)&param_1[0x12].field_0x8;
  plVar4 = plVar3 + (longlong)*(int *)&param_1[0x12].field_0x10 * 0x14;
  do {
    if (plVar3 == plVar4) {
      local_10 = 0;
      local_18.Data = (FScriptContainerElement *)0x0;
LAB_14d9970d3:
      if (param_3 != &local_18) {
        if (*(void **)param_3 != (void *)0x0) {
          FMemory::Free(*(void **)param_3);
        }
        *(FScriptContainerElement **)param_3 = local_18.Data;
        *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
        local_18.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
        local_10 = 0;
      }
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
      return;
    }
    if (*plVar3 == local_res8) {
      local_18.Data = (FScriptContainerElement *)0x0;
      iVar1 = (int)plVar3[5];
      _Src = (void *)plVar3[4];
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
        memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_14d9970d3;
    }
    plVar3 = plVar3 + 0x14;
  } while( true );
}

// execIsPlayingAny @ 14d997430

void __cdecl UAudioComponentGroup::execIsPlayingAny(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FReadAccessScope local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(param_1 + 0xf),&local_28);
  iVar1 = *(int *)&param_1[0xf].field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(bool *)param_3 = 0 < iVar1;
  return;
}

// execIsVirtualized @ 14d997490

void __cdecl UAudioComponentGroup::execIsVirtualized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x1a);
  return;
}

// execRemoveExtension @ 14d997520

void __cdecl
UAudioComponentGroup::execRemoveExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject **local_res8;
  UObject *local_28;
  undefined8 local_20;
  UObject *local_18;
  undefined8 uStack_10;
  
  local_18 = (UObject *)0x0;
  uStack_10 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  local_20 = uStack_10;
  if ((*(UObject ***)&param_1[0x12].field_0x18 <= &local_28) &&
     (&local_28 <
      *(UObject ***)&param_1[0x12].field_0x18 + (longlong)*(int *)&param_1[0x12].field_0x24 * 2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = &local_28;
  TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            ((TArray<TScriptInterface<IAudioComponentGroupExtension>,TSizedDefaultAllocator<32>_> *)
             &param_1[0x12].field_0x18,(<lambda_1> *)&local_res8);
  return;
}

// execRemoveExternalComponent @ 14d997660

void __cdecl
UAudioComponentGroup::execRemoveExternalComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *this;
  code *pcVar3;
  int iVar4;
  UObject *pUVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UObject *local_res10 [2];
  UObject *local_res20;
  FWeakObjectPtr local_48 [2];
  
  iVar9 = 0;
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    local_48[0].ObjectIndex = 0;
    local_48[0].ObjectSerialNumber = 0;
    local_res20 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(local_48,(FObjectPtr)&local_res20);
    if (((*(FWeakObjectPtr **)&param_1[0x13].field_0x18 <= local_48) &&
        (local_48 <
         *(FWeakObjectPtr **)&param_1[0x13].field_0x18 + *(int *)&param_1[0x13].field_0x24)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)&param_1[0x13].field_0x20;
    if (iVar1 != 0) {
      this = *(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> **)&param_1[0x13].field_0x18;
      bVar6 = TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals<UAudioComponent,bool>
                        (this,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)local_48);
      bVar6 = !bVar6;
      iVar8 = iVar9;
      do {
        iVar4 = iVar8;
        do {
          iVar4 = iVar4 + 1;
          if (iVar1 <= iVar4) break;
          bVar7 = TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals<UAudioComponent,bool>
                            (this + iVar4,(TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)local_48
                            );
        } while (bVar6 == !bVar7);
        if (bVar6 != false) {
          if (iVar9 != iVar8) {
            memmove(this + iVar9,this + iVar8,(longlong)(iVar4 - iVar8) << 3);
          }
          iVar9 = iVar9 + (iVar4 - iVar8);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar8 = iVar4;
      } while (iVar4 < iVar1);
      *(int *)&param_1[0x13].field_0x20 = iVar9;
    }
  }
  return;
}

// execSetLowPassFilter @ 14d997890

void __cdecl
UAudioComponentGroup::execSetLowPassFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x13].field_0x8 = local_res8[0];
  return;
}

// execSetPitchMultiplier @ 14d997920

void __cdecl
UAudioComponentGroup::execSetPitchMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x13].field_0x4 = local_res8[0];
  return;
}

// execSetVolumeMultiplier @ 14d9979b0

void __cdecl
UAudioComponentGroup::execSetVolumeMultiplier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 0x13) = local_res8[0];
  return;
}

// execStaticGetOrCreateComponentGroup @ 14d997a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UAudioComponentGroup::execStaticGetOrCreateComponentGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAudioComponentGroup *pUVar2;
  AActor *local_res10;
  
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = StaticGetOrCreateComponentGroup(local_res10);
  *(UAudioComponentGroup **)param_3 = pUVar2;
  return;
}

// execStopSound @ 14d997ad0

void __cdecl UAudioComponentGroup::execStopSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  USoundBase *local_res20;
  
  local_res20 = (USoundBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopSound((UAudioComponentGroup *)param_1,local_res20,local_res10[0]);
  return;
}

// execSubscribeToBool @ 14d997ba0

void __cdecl
UAudioComponentGroup::execSubscribeToBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *this;
  TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FMRSWRecursiveAccessDetector *local_70;
  undefined8 local_68;
  FName *local_60;
  ForAnyElementType *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  FReadAccessScope local_30;
  
  local_res8.Value = (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70 = (FMRSWRecursiveAccessDetector *)0x0;
  local_68._0_1_ = false;
  local_68._1_7_ = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  local_48._8_8_ = local_70;
  local_48._16_8_ = local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_60);
  local_res20 = (FName)local_res8.Value;
  this = TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
         ::Find((TMapBase<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>_>
                 *)(param_1 + 0x18),(FName)local_res8.Value);
  if (this == (TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    local_60 = (FName *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
    local_58 = (ForAnyElementType *)local_48._8_8_;
    local_50 = local_48._16_8_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_88,1,&local_7c);
    ConstructItems<FBoolParamCallback,FBoolParamCallback,int>
              (local_88.Data,(FBoolParamCallback *)&local_60,1);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_60);
    local_60 = &local_res20;
    local_58 = &local_88;
    TSet<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)(param_1 + 0x18),&local_res8,(bool *)&local_60);
    DestructItems<FBoolParamCallback,int>((FBoolParamCallback *)local_88.Data,local_80);
    if ((FBoolParamCallback *)local_88.Data != (FBoolParamCallback *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FBoolParamCallback_const_&>(this,(FBoolParamCallback *)local_48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// execSubscribeToEvent @ 14d997da0

void __cdecl
UAudioComponentGroup::execSubscribeToEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *this;
  TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FMRSWRecursiveAccessDetector *local_70;
  undefined8 local_68;
  FName *local_60;
  ForAnyElementType *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  FReadAccessScope local_30;
  
  local_res8.Value = (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70 = (FMRSWRecursiveAccessDetector *)0x0;
  local_68._0_1_ = false;
  local_68._1_7_ = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48._0_8_ = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  local_48._8_8_ = local_70;
  local_48._16_8_ = local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_60);
  local_res20 = (FName)local_res8.Value;
  this = TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
         ::Find((TMapBase<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>_>
                 *)(param_1 + 0x16),(FName)local_res8.Value);
  if (this == (TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *)0x0) {
    local_60 = (FName *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,&local_30);
    local_58 = (ForAnyElementType *)local_48._8_8_;
    local_50 = local_48._16_8_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,0,&local_88,1,&local_7c);
    ConstructItems<FSoundCallback,FSoundCallback,int>(local_88.Data,(FSoundCallback *)&local_60,1);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&local_60);
    local_60 = &local_res20;
    local_58 = &local_88;
    TSet<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FName_const_&,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)(param_1 + 0x16),&local_res8,(bool *)&local_60);
    DestructItems<FSoundCallback,int>((FSoundCallback *)local_88.Data,local_80);
    if ((FSoundCallback *)local_88.Data != (FSoundCallback *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  else {
    TArray<FSoundCallback,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSoundCallback_const_&>
              (this,(FSoundCallback *)local_48);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// execSubscribeToStringParam @ 14d997fa0

void __cdecl
UAudioComponentGroup::execSubscribeToStringParam(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FStringParamCallback local_40;
  FReadAccessScope local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SubscribeToStringParam((UAudioComponentGroup *)param_1,local_res10,&local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execUnsubscribeObject @ 14d9980d0

void __cdecl
UAudioComponentGroup::execUnsubscribeObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnsubscribeObject((UAudioComponentGroup *)param_1,local_res10);
  return;
}

