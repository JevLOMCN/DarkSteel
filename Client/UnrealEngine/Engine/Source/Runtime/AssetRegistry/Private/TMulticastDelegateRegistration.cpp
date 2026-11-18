// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// AddLambda<TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_&> @ 142ab2310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
::AddLambda<TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_&>
          (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
           *this,TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDelegateHandle FVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ForElementType<TAlignedBytes<16,16>_> *pFVar11;
  longlong *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar10 = 0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar6 = UE::Core::Private::DelegateAllocate(0x50,&local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXV__TArrayView___CBUFAssetData__H___ZUFDefaultTSDelegateUserPolicy____CBV__TFunction___A6AXV__TArrayView___CBUFAssetData__H___Z____V__6B_
    ;
    lVar1 = *in_R8;
    puVar6[4] = lVar1;
    puVar6[9] = 0;
    if (lVar1 != 0) {
      plVar9 = in_R8 + 2;
      if ((longlong *)in_R8[5] != (longlong *)0x0) {
        plVar9 = (longlong *)in_R8[5];
      }
      (**(code **)*plVar9)();
    }
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar8.ID = (*pcVar2)();
    return (FDelegateHandle)FVar8.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(undefined8 *)param_1 = 0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar4 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      uVar10 = *puVar6;
    }
    LeaveCriticalSection(&local_70);
    *(undefined8 *)param_1 = uVar10;
    iVar5 = *(int *)&this->field_0x30;
    if (iVar5 == *(int *)&this->field_0x34) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar11 = (ForElementType<TAlignedBytes<16,16>_> *)
              (*(longlong *)&this->field_0x28 + (longlong)iVar5 * 0x10);
    *(int *)&this->field_0x30 = iVar5 + 1;
    *pFVar11 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar11 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar11 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar11);
    }
    *pFVar11 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar11 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// Remove @ 142b13b10

bool __thiscall
TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
::Remove(TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
         *this,FDelegateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  uint uVar7;
  ForAnyElementType *this_00;
  
  if (param_1.ID == 0) {
    return false;
  }
  if ((this == (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  uVar7 = 0;
  if (0 < *(int *)&this->field_0x30) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x30) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = (ForAnyElementType *)(*(longlong *)&this->field_0x28 + lVar6);
      if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) &&
         (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
         *puVar5 == param_1.ID)) {
        if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)this_00->Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
          *(undefined4 *)&this_00[1].Data = 0;
        }
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar7 < *(int *)&this->field_0x30);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return false;
}

// AddUObject<UAssetRegistryImpl> @ 142b6f7e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::AddUObject<UAssetRegistryImpl>
          (TMulticastDelegateRegistration<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,UAssetRegistryImpl *param_1,pmf_dfdbbfba *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  pmf_dfdbbfba *local_res10;
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_88._0_8_ = *in_R9;
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar6 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetRegistryImpl____A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_dfdbbfba *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_dfdbbfba *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = local_88._0_8_;
    puVar3[5] = local_88.Accessor;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_88);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
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
              (&local_68,(FWriteAccessScope *)&local_88);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddUObject<UAssetRegistryImpl> @ 142b6faa0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddUObject<UAssetRegistryImpl>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          UAssetRegistryImpl *param_1,pmf_33f53f64 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R9;
  pmf_33f53f64 *local_res10;
  FDestructionSentinel local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_88._0_8_ = *in_R9;
  local_88.Accessor = (FMRSWRecursiveAccessDetector *)in_R9[1];
  lVar6 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAssetRegistryImpl____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_33f53f64 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    puVar3[3] = 0;
    local_res10 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (pmf_33f53f64 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = local_88._0_8_;
    puVar3[5] = local_88.Accessor;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_50);
  param_1->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_88);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,&local_res10);
      lVar6 = *plVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_88);
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
              (&local_68,(FWriteAccessScope *)&local_88);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

