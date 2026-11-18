// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// AddSP<UE::StateTree::Private::FCrashReporterHandlerImpl,1> @ 14d4a9c70

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::AddSP<UE::StateTree::Private::FCrashReporterHandlerImpl,1>
          (TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this,TSharedRef<UE::StateTree::Private::FCrashReporterHandlerImpl,1> *param_1,
          pmf_c3d02b06 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCrashReporterHandlerImpl *pFVar7;
  ForElementType<TAlignedBytes<16,16>_> *pFVar8;
  FCrashReporterHandlerImpl *pFVar9;
  undefined8 in_R9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar7 = (FCrashReporterHandlerImpl *)0x0;
  local_res10 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
  if (puVar4 == (undefined8 *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
    pFVar9 = pFVar7;
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_2 + 8);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFCrashReporterHandlerImpl_Private_StateTree_UE___00__A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = uVar1;
    puVar4[4] = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar4[5] = in_R9;
    pFVar9 = (FCrashReporterHandlerImpl *)0x1;
  }
  if (pFVar9 != (FCrashReporterHandlerImpl *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->Object = (FCrashReporterHandlerImpl *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_78,(FReadAccessScope *)&local_60);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      pFVar7 = (FCrashReporterHandlerImpl *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar3 = *(int *)&this->field_0x10;
    param_1->Object = pFVar7;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar8 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar8 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar8 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar8 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar8);
    }
    *pFVar8 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar8 + 1) = local_70.DelegateSize;
    local_70.DelegateSize = 0;
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddUObject<UStateTree> @ 14d4a9f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddUObject<UStateTree>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          UStateTree *param_1,pmf_4fefa828 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  undefined8 uVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 in_R9;
  undefined1 auStack_a8 [32];
  pmf_4fefa828 local_88;
  _RTL_CRITICAL_SECTION local_78;
  FDelegateAllocation local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  InitializeCriticalSectionAndSpinCount(&local_78,4000);
  uVar8 = 0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  EnterCriticalSection(&local_78);
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUStateTree____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_4fefa828)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_88 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_4fefa828)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_88);
    puVar5[4] = in_R9;
  }
  LeaveCriticalSection(&local_78);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_78);
  if (((local_50.DelegateSize != 0) &&
      (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_50.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_78);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_50.DelegateAllocator + 0x40))();
      uVar8 = *puVar5;
    }
    LeaveCriticalSection(&local_78);
    *(undefined8 *)param_1 = uVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_78);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_50.DelegateAllocator;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_50.DelegateSize;
    local_50.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_78);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_78);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_78);
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  DeleteCriticalSection(&local_78);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddRaw<FStateTreeModule> @ 14d52a540

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddRaw<FStateTreeModule>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FStateTreeModule *param_1,pmf_769cb6ad param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  longlong *plVar8;
  longlong lVar9;
  ForElementType<TAlignedBytes<16,16>_> *pFVar10;
  longlong in_R9;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  lVar9 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  local_60 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStateTreeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(pmf_769cb6ad *)(puVar5 + 3) = param_2;
    puVar5[4] = in_R9;
    if (((param_2 == (pmf_769cb6ad)0x0) || (in_R9 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar7.ID = (*pcVar1)();
      return (FDelegateHandle)FVar7.ID;
    }
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_a8);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  if (((local_d0.DelegateSize == 0) ||
      (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar8 = (longlong *)
               (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                         (local_d0.DelegateAllocator,local_res10);
      lVar9 = *plVar8;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    iVar4 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar9;
    if (iVar4 == *(int *)&this->field_0x14) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar4 + 1;
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x8 + (longlong)iVar4 * 0x10);
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_c0);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_d0.DelegateAllocator;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_d0.DelegateSize;
    local_d0.DelegateSize = 0;
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_90);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

