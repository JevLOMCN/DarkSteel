// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 16

// FWN_AsyncCollision @ 14948cc00

FWN_AsyncCollision * __thiscall FWN_AsyncCollision::FWN_AsyncCollision(FWN_AsyncCollision *this)

{
  this->bHasValidResults = false;
  this->CollisionType = None;
  this->RequestFrameCounter = 0;
  this->ResponseFrameCounter = 0;
  (this->LastTraceHandle).field0_0x0._Handle = 0;
  (this->LastTraceHandle).bTransactional = false;
  (this->HitResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitResults).ArrayNum = 0;
  (this->HitResults).ArrayMax = 0;
  *(undefined8 *)&this->HitCallback = 0;
  *(undefined8 *)&(this->HitCallback).field_0x8 = 0;
  *(undefined8 *)&(this->HitCallback).field_0x10 = 0;
  (this->OverlapResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlapResults).ArrayNum = 0;
  (this->OverlapResults).ArrayMax = 0;
  *(undefined8 *)&this->OverlapCallback = 0;
  *(undefined8 *)&(this->OverlapCallback).field_0x8 = 0;
  *(undefined8 *)&(this->OverlapCallback).field_0x10 = 0;
  *(undefined8 *)&(this->HitCallback).field_0x18 = 2;
  *(undefined8 *)&(this->OverlapCallback).field_0x18 = 2;
  return this;
}

// ~FWN_AsyncCollision @ 14948ff10

void __thiscall FWN_AsyncCollision::~FWN_AsyncCollision(FWN_AsyncCollision *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  (this->LastTraceHandle).field0_0x0._Handle = 0;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OverlapCallback).field_0x8,*(int *)&(this->OverlapCallback).field_0x10);
  pvVar1 = *(void **)&(this->OverlapCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OverlapCallback);
  pFVar2 = (this->OverlapResults).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->HitCallback).field_0x8
             ,*(int *)&(this->HitCallback).field_0x10);
  pvVar1 = *(void **)&(this->HitCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HitCallback);
  pFVar2 = (this->HitResults).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AsyncLineTraceByChannel @ 149495370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncLineTraceByChannel
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,ECollisionChannel param_5,FCollisionQueryParams *param_6,
          FCollisionResponseParams *param_7,uint param_8)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncLineTraceByChannel
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,param_7,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_8);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = LineTraceByChannel;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncLineTraceByObjectType @ 149495540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncLineTraceByObjectType
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,FCollisionObjectQueryParams *param_5,
          FCollisionQueryParams *param_6,uint param_7)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncLineTraceByObjectType
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_7);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = LineTraceByObjectType;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncLineTraceByProfile @ 149495700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncLineTraceByProfile
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,FName param_5,FCollisionQueryParams *param_6,uint param_7)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncLineTraceByProfile
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_7);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = LineTraceByProfile;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncOverlapByChannel @ 1494958c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncOverlapByChannel
          (FWN_AsyncCollision *this,UWorld *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          ECollisionChannel param_4,FCollisionShape *param_5,FCollisionQueryParams *param_6,
          FCollisionResponseParams *param_7,uint param_8)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnOverlapComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncOverlapByChannel
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,param_7,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_8);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = OverlapByChannel;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncOverlapByObjectType @ 149495a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncOverlapByObjectType
          (FWN_AsyncCollision *this,UWorld *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          FCollisionObjectQueryParams *param_4,FCollisionShape *param_5,
          FCollisionQueryParams *param_6,uint param_7)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnOverlapComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncOverlapByObjectType
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_7);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = OverlapByObjectType;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncOverlapByProfile @ 149495c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncOverlapByProfile
          (FWN_AsyncCollision *this,UWorld *param_1,TVector<double> *param_2,TQuat<double> *param_3,
          FName param_4,FCollisionShape *param_5,FCollisionQueryParams *param_6,uint param_7)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFOverlapDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnOverlapComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncOverlapByProfile
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_7);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = OverlapByProfile;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncSweepByChannel @ 149495e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncSweepByChannel
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,TQuat<double> *param_5,ECollisionChannel param_6,
          FCollisionShape *param_7,FCollisionQueryParams *param_8,FCollisionResponseParams *param_9,
          uint param_10)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncSweepByChannel
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,(TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                               *)local_68,param_10);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = SweepByChannel;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncSweepByObjectType @ 149495ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncSweepByObjectType
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,TQuat<double> *param_5,FCollisionObjectQueryParams *param_6,
          FCollisionShape *param_7,FCollisionQueryParams *param_8,uint param_9)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncSweepByObjectType
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_9);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = SweepByObjectType;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// AsyncSweepByProfile @ 1494961d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FWN_AsyncCollision::AsyncSweepByProfile
          (FWN_AsyncCollision *this,UWorld *param_1,EAsyncTraceType param_2,TVector<double> *param_3
          ,TVector<double> *param_4,TQuat<double> *param_5,FName param_6,FCollisionShape *param_7,
          FCollisionQueryParams *param_8,uint param_9)

{
  code *pcVar1;
  undefined7 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FTraceHandle *pFVar6;
  FTraceHandle local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFWN_AsyncCollision____A6AXAEBUFTraceHandle__AEAUFTraceDatum___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnTraceComplete;
    puVar4[3] = this;
    if (this == (FWN_AsyncCollision *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar6 = UWorld::AsyncSweepByProfile
                     (param_1,&local_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (TDelegate<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
                       *)local_68,param_9);
  bVar3 = pFVar6->bTransactional;
  uVar2 = *(undefined7 *)&pFVar6->field_0x9;
  (this->LastTraceHandle).field0_0x0 = pFVar6->field0_0x0;
  (this->LastTraceHandle).bTransactional = bVar3;
  *(undefined7 *)&(this->LastTraceHandle).field_0x9 = uVar2;
  if ((this->LastTraceHandle).field0_0x0._Handle != 0) {
    this->CollisionType = SweepByProfile;
    this->RequestFrameCounter = GFrameCounter;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// GetHitResults @ 1494a0a30

bool __thiscall
FWN_AsyncCollision::GetHitResults
          (FWN_AsyncCollision *this,TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->HitResults);
  if (param_2) {
    return this->RequestFrameCounter <= this->ResponseFrameCounter;
  }
  return true;
}

// GetOverlapResults @ 1494a1200

bool __thiscall
FWN_AsyncCollision::GetOverlapResults
          (FWN_AsyncCollision *this,TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_>::operator=(param_1,&this->OverlapResults);
  if (param_2) {
    return this->RequestFrameCounter <= this->ResponseFrameCounter;
  }
  return true;
}

// OnOverlapComplete @ 1494a7830

void __thiscall
FWN_AsyncCollision::OnOverlapComplete
          (FWN_AsyncCollision *this,FTraceHandle *param_1,FOverlapDatum *param_2)

{
  undefined1 *puVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  uVar2 = (this->LastTraceHandle).field0_0x0._Handle;
  if ((uVar2 != 0) && ((param_1->field0_0x0)._Handle == uVar2)) {
    this->ResponseFrameCounter = GFrameCounter;
    TArray<FOverlapResult,TSizedDefaultAllocator<32>_>::operator=
              (&this->OverlapResults,&param_2->OutOverlaps);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OverlapCallback,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->OverlapCallback).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar10 = *(int *)&(this->OverlapCallback).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(this->OverlapCallback).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OverlapCallback).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar11) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,param_2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->OverlapCallback).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OverlapCallback,false)
      ;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// OnTraceComplete @ 1494a8f10

void __thiscall
FWN_AsyncCollision::OnTraceComplete
          (FWN_AsyncCollision *this,FTraceHandle *param_1,FTraceDatum *param_2)

{
  undefined1 *puVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  uVar2 = (this->LastTraceHandle).field0_0x0._Handle;
  if ((uVar2 != 0) && ((param_1->field0_0x0)._Handle == uVar2)) {
    this->ResponseFrameCounter = GFrameCounter;
    TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=(&this->HitResults,&param_2->OutHits);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HitCallback,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->HitCallback).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar10 = *(int *)&(this->HitCallback).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(this->HitCallback).field_0x10) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->HitCallback).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar11) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar11), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,param_2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(this->HitCallback).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->HitCallback,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// QueryData @ 1494a98e0

void __thiscall FWN_AsyncCollision::QueryData(FWN_AsyncCollision *this)

{
  return;
}

