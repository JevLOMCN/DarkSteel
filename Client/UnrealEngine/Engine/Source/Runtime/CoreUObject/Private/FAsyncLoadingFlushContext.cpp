// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FAsyncLoadingFlushContext @ 141f207b0

FAsyncLoadingFlushContext * __thiscall
FAsyncLoadingFlushContext::FAsyncLoadingFlushContext
          (FAsyncLoadingFlushContext *this,FString *param_1)

{
  int iVar1;
  
  (this->Context).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Context).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  iVar1 = NextId + 1;
  this->Id = NextId;
  NextId = iVar1;
  *(undefined8 *)&this->OnFlushCompleteDelegate = 0;
  *(undefined8 *)&(this->OnFlushCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnFlushCompleteDelegate).field_0x10 = 0;
  this->StartTime = 0.0;
  (this->LoadingCompleteCheckDelegateHandle).Object = (FElement *)0x0;
  (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WaitingWarnDelegateHandle).Object = (FElement *)0x0;
  (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FAsyncLoadingFlushContext @ 141f20810

FAsyncLoadingFlushContext * __thiscall
FAsyncLoadingFlushContext::FAsyncLoadingFlushContext
          (FAsyncLoadingFlushContext *this,FString *param_1)

{
  int iVar1;
  
  ::FString::FString(&this->Context,param_1);
  iVar1 = NextId;
  NextId = NextId + 1;
  *(undefined8 *)&this->OnFlushCompleteDelegate = 0;
  *(undefined8 *)&(this->OnFlushCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnFlushCompleteDelegate).field_0x10 = 0;
  this->StartTime = 0.0;
  (this->LoadingCompleteCheckDelegateHandle).Object = (FElement *)0x0;
  (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WaitingWarnDelegateHandle).Object = (FElement *)0x0;
  (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Id = iVar1;
  return this;
}

// ~FAsyncLoadingFlushContext @ 141f233f0

void __thiscall
FAsyncLoadingFlushContext::~FAsyncLoadingFlushContext(FAsyncLoadingFlushContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  CleanupTickers(this);
  pTVar3 = (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFlushCompleteDelegate);
  pFVar4 = (this->Context).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CleanupTickers @ 141f2b230

void __thiscall FAsyncLoadingFlushContext::CleanupTickers(FAsyncLoadingFlushContext *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  longlong local_28 [2];
  undefined8 local_18 [2];
  
  pTVar1 = &this->LoadingCompleteCheckDelegateHandle;
  if (((pTVar1->Object != (FElement *)0x0) &&
      (pTVar4 = (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_38.Object = pTVar1->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_28) {
      pTVar4 = (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  pTVar1 = &this->WaitingWarnDelegateHandle;
  if ((((this->WaitingWarnDelegateHandle).Object != (FElement *)0x0) &&
      (pTVar4 = (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_38.Object = pTVar1->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_38);
    if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FElement *)0x0;
      (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  return;
}

// Flush @ 141f2ed80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingFlushContext::Flush
          (FAsyncLoadingFlushContext *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FTSTicker *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TWeakPtr<FTSTicker::FElement,1> *pTVar11;
  LARGE_INTEGER local_res8;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  undefined1 local_150 [8];
  FDelegateAllocation local_148;
  undefined1 local_138 [8];
  ForAnyElementType local_130;
  int local_128;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  TWeakPtr<FTSTicker::FElement,1> local_98;
  TWeakPtr<FTSTicker::FElement,1> local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  bVar6 = IsInGameThread();
  if (((!bVar6) || (bVar6 = IsInSlateThread(), bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() && !IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingFlushContext.cpp"
                         ,0x21,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->OnFlushCompleteDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_78);
  if (((*(int *)&(this->OnFlushCompleteDelegate).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->OnFlushCompleteDelegate).field_0x8, plVar3 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OnFlushCompleteDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingFlushContext.cpp"
                       ,0x24,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_60);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnFlushComplete.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingFlushContext.cpp"
                       ,0x27,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  if (param_1 != this_00) {
    local_138 = (undefined1  [8])0x0;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_48);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_1->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_138);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
               (FWriteAccessScope *)&local_120);
    if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_130.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
      local_128 = 0;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_138);
  }
  pFVar8 = FTSTicker::GetCoreTicker();
  local_168 = (undefined1  [8])0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_160;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_160);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    puVar9[4] = OnAsyncLoadingCheck;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAsyncLoadingFlushContext____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = this;
    if ((this == (FAsyncLoadingFlushContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  pTVar11 = FTSTicker::AddTicker
                      (pFVar8,&local_98,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_168,0.0);
  if (&this->LoadingCompleteCheckDelegateHandle != pTVar11) {
    (this->LoadingCompleteCheckDelegateHandle).Object = pTVar11->Object;
    pTVar11->Object = (FElement *)0x0;
    pTVar4 = (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->LoadingCompleteCheckDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_98.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_108);
  if ((local_160.DelegateSize != 0) &&
     (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_160,0,0,0x10);
    local_160.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  pFVar8 = FTSTicker::GetCoreTicker();
  local_150 = (undefined1  [8])0x0;
  local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_148.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
             (FWriteAccessScope *)&local_b8);
  local_a0 = &local_148;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_148);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAsyncLoadingFlushContext____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[4] = OnAsyncLoadingWarn;
    puVar9[3] = this;
    if ((this == (FAsyncLoadingFlushContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  pTVar11 = FTSTicker::AddTicker
                      (pFVar8,&local_88,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_150,
                       __real_41200000);
  if (&this->WaitingWarnDelegateHandle != pTVar11) {
    (this->WaitingWarnDelegateHandle).Object = pTVar11->Object;
    pTVar11->Object = (FElement *)0x0;
    pTVar4 = (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->WaitingWarnDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar11->WeakReferenceCount).ReferenceController;
    (pTVar11->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_88.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_88.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_88.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_88.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
             (FWriteAccessScope *)&local_f0);
  if ((local_148.DelegateSize != 0) &&
     (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_148.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_148,0,0,0x10);
    local_148.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_148.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_150);
  QueryPerformanceCounter(&local_res8);
  this->StartTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (5 < (byte)AsyncLoadingFlush._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AsyncLoadingFlush);
  }
  return;
}

// OnAsyncLoadingCheck @ 141f3eeb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncLoadingFlushContext::OnAsyncLoadingCheck(FAsyncLoadingFlushContext *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  LARGE_INTEGER local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  if ((GPackageLoader.Ptr == (IAsyncPackageLoader *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPackageLoader.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackageLoader.cpp"
                         ,0xcf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)((longlong)*GPackageLoader.Ptr + 0x98))();
  if (cVar4 == '\0') {
    CleanupTickers(this);
    QueryPerformanceCounter(local_res18);
    if (5 < (byte)AsyncLoadingFlush._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&AsyncLoadingFlush);
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnFlushCompleteDelegate,(FWriteAccessScope *)&local_50);
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    local_60.Data = *(FScriptContainerElement **)&(this->OnFlushCompleteDelegate).field_0x8;
    *(undefined8 *)&(this->OnFlushCompleteDelegate).field_0x8 = 0;
    local_58 = *(int *)&(this->OnFlushCompleteDelegate).field_0x10;
    *(undefined4 *)&(this->OnFlushCompleteDelegate).field_0x10 = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_68,&local_20);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (**(code **)(*(longlong *)local_60.Data + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// OnAsyncLoadingWarn @ 141f3f080

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncLoadingFlushContext::OnAsyncLoadingWarn(FAsyncLoadingFlushContext *this,float param_1)

{
  LARGE_INTEGER local_res18 [2];
  
  if (2 < (byte)AsyncLoadingFlush._0_1_) {
    QueryPerformanceCounter(local_res18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&AsyncLoadingFlush);
  }
  return true;
}

