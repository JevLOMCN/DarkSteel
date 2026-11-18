// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 14822def0

UClass * __cdecl UChaosEventRelay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChaosEventRelay",
               &Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton,
               StaticRegisterNativesUChaosEventRelay,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UChaosEventRelay>,
               InternalVTableHelperCtorCaller<UChaosEventRelay>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton;
}

// UChaosEventRelay @ 1482511f0

UChaosEventRelay * __thiscall
UChaosEventRelay::UChaosEventRelay(UChaosEventRelay *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosEventRelay__6B_;
  *(undefined8 *)&this->OnCollisionEvent = 0;
  *(undefined8 *)&(this->OnCollisionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollisionEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnBreakEvent = 0;
  *(undefined8 *)&(this->OnBreakEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBreakEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovalEvent = 0;
  *(undefined8 *)&(this->OnRemovalEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovalEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnCrumblingEvent = 0;
  *(undefined8 *)&(this->OnCrumblingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnCrumblingEvent).field_0x10 = 0;
  return this;
}

// UChaosEventRelay @ 148251250

UChaosEventRelay * __thiscall UChaosEventRelay::UChaosEventRelay(UChaosEventRelay *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UChaosEventRelay__6B_;
  *(undefined8 *)&this->OnCollisionEvent = 0;
  *(undefined8 *)&(this->OnCollisionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnCollisionEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnBreakEvent = 0;
  *(undefined8 *)&(this->OnBreakEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBreakEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnRemovalEvent = 0;
  *(undefined8 *)&(this->OnRemovalEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemovalEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnCrumblingEvent = 0;
  *(undefined8 *)&(this->OnCrumblingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnCrumblingEvent).field_0x10 = 0;
  return this;
}

// ~UChaosEventRelay @ 1482535c0

void __thiscall UChaosEventRelay::~UChaosEventRelay(UChaosEventRelay *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UChaosEventRelay__6B_;
  pvVar1 = *(void **)&(this->OnCrumblingEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCrumblingEvent);
  pvVar1 = *(void **)&(this->OnRemovalEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemovalEvent);
  pvVar1 = *(void **)&(this->OnBreakEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBreakEvent);
  pvVar1 = *(void **)&(this->OnCollisionEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCollisionEvent);
  UObject::~UObject((UObject *)this);
  return;
}

// DispatchPhysicsBreakEvents @ 14827b1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UChaosEventRelay::DispatchPhysicsBreakEvents
          (UChaosEventRelay *this,TArray<FChaosBreakEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FChaosBreakEvent *pFVar3;
  TArray<FChaosBreakEvent,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnBreakEvent,&local_28
            );
  iVar1 = *(int *)&(this->OnBreakEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 != param_1) {
      uVar2 = param_1->ArrayNum;
      pFVar3 = (FChaosBreakEvent *)(param_1->AllocatorInstance).Data;
      local_38.ArrayMax = 0;
      local_38.ArrayNum = uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,0x10,uVar2,0,&local_38.AllocatorInstance,uVar2,&local_38.ArrayMax);
        ConstructItems<FChaosBreakEvent,FChaosBreakEvent,int>
                  (local_38.AllocatorInstance.Data,pFVar3,uVar2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBreakEvent,&local_38
              );
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// DispatchPhysicsCollisionEvents @ 14827b290

void __thiscall
UChaosEventRelay::DispatchPhysicsCollisionEvents
          (UChaosEventRelay *this,TArray<FCollisionChaosEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FCollisionChaosEvent *pFVar3;
  TArray<FCollisionChaosEvent,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCollisionEvent,
             &local_28);
  iVar1 = *(int *)&(this->OnCollisionEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 != param_1) {
      uVar2 = param_1->ArrayNum;
      pFVar3 = (FCollisionChaosEvent *)(param_1->AllocatorInstance).Data;
      local_38.ArrayMax = 0;
      local_38.ArrayNum = uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x130,8,uVar2,0,&local_38.AllocatorInstance,uVar2,&local_38.ArrayMax);
        ConstructItems<FCollisionChaosEvent,FCollisionChaosEvent,int>
                  (local_38.AllocatorInstance.Data,pFVar3,uVar2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCollisionEvent,
               &local_38);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// DispatchPhysicsCrumblingEvents @ 14827b360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UChaosEventRelay::DispatchPhysicsCrumblingEvents
          (UChaosEventRelay *this,TArray<FChaosCrumblingEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FChaosCrumblingEvent *pFVar2;
  TArray<FChaosCrumblingEvent,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCrumblingEvent,
             &local_28);
  iVar1 = *(int *)&(this->OnCrumblingEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 != param_1) {
      DestructItems<FChaosCrumblingEvent,int>((FChaosCrumblingEvent *)0x0,0);
      iVar1 = param_1->ArrayNum;
      pFVar2 = (FChaosCrumblingEvent *)(param_1->AllocatorInstance).Data;
      local_38.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_38.ArrayMax == 0)) {
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,iVar1,local_38.ArrayMax,&local_38.AllocatorInstance,iVar1,
                   &local_38.ArrayMax);
        ConstructItems<FChaosCrumblingEvent,FChaosCrumblingEvent,int>
                  (local_38.AllocatorInstance.Data,pFVar2,iVar1);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCrumblingEvent,
               &local_38);
    DestructItems<FChaosCrumblingEvent,int>
              ((FChaosCrumblingEvent *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FChaosCrumblingEvent *)local_38.AllocatorInstance.Data != (FChaosCrumblingEvent *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// DispatchPhysicsRemovalEvents @ 14827b470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UChaosEventRelay::DispatchPhysicsRemovalEvents
          (UChaosEventRelay *this,TArray<FChaosRemovalEvent,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FChaosRemovalEvent *pFVar3;
  TArray<FChaosRemovalEvent,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnRemovalEvent,
             &local_28);
  iVar1 = *(int *)&(this->OnRemovalEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    if (&local_38 != param_1) {
      uVar2 = param_1->ArrayNum;
      pFVar3 = (FChaosRemovalEvent *)(param_1->AllocatorInstance).Data;
      local_38.ArrayMax = 0;
      local_38.ArrayNum = uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar2,0,&local_38.AllocatorInstance,uVar2,&local_38.ArrayMax);
        ConstructItems<FChaosRemovalEvent,FChaosRemovalEvent,int>
                  (local_38.AllocatorInstance.Data,pFVar3,uVar2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnRemovalEvent,
               &local_38);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14828bf70

UClass * __cdecl UChaosEventRelay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChaosEventRelay",
               &Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton,
               StaticRegisterNativesUChaosEventRelay,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UChaosEventRelay>,
               InternalVTableHelperCtorCaller<UChaosEventRelay>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosEventRelay.InnerSingleton;
}

// StaticRegisterNativesUChaosEventRelay @ 1482b1d10

void __cdecl UChaosEventRelay::StaticRegisterNativesUChaosEventRelay(void)

{
  return;
}

