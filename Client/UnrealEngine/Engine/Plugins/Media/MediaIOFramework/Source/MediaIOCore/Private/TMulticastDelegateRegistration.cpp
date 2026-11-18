// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// AddUObject<UMediaCapture> @ 14d781100

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddUObject<UMediaCapture>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UMediaCapture *param_1,pmf_a57cc5e9 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 in_R9;
  pmf_a57cc5e9 local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  lVar6 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaCapture____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_a57cc5e9)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_a57cc5e9)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = in_R9;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_60);
  if (((local_70.DelegateSize == 0) ||
      (local_70.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
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
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_70.DelegateAllocator + 0x40))
                         (local_70.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_60);
    iVar2 = *(int *)&this->field_0x10;
    param_1->_padding_ = lVar6;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_70.DelegateAllocator;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_70.DelegateSize;
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

// AddUObject<UMediaIOCoreSubsystem> @ 14d7813c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
AddUObject<UMediaIOCoreSubsystem>
          (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
           *this,UMediaIOCoreSubsystem *param_1,pmf_dc4134c3 param_2)

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
  undefined8 in_R9;
  undefined1 auStack_a8 [32];
  pmf_dc4134c3 local_88;
  _RTL_CRITICAL_SECTION local_78;
  FDelegateAllocation local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  InitializeCriticalSectionAndSpinCount(&local_78,4000);
  lVar9 = 0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  EnterCriticalSection(&local_78);
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaIOCoreSubsystem____A6AXI_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_dc4134c3)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar5[3] = 0;
    local_88 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_dc4134c3)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_88);
    puVar5[4] = in_R9;
  }
  LeaveCriticalSection(&local_78);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->_padding_ = 0;
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
      plVar8 = (longlong *)(**(code **)(*(longlong *)local_50.DelegateAllocator + 0x40))();
      lVar9 = *plVar8;
    }
    LeaveCriticalSection(&local_78);
    param_1->_padding_ = lVar9;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar10 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar10 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar10 + 1) = 0;
    EnterCriticalSection(&local_78);
    if (*pFVar10 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar10);
    }
    *pFVar10 = local_50.DelegateAllocator;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar10 + 1) = local_50.DelegateSize;
    local_50.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_78);
  if (this != (TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
               *)0x0) {
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

