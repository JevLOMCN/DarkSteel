// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FIoRequestStats @ 1417a1cf0

FIoRequestStats * __thiscall FIoRequestStats::FIoRequestStats(FIoRequestStats *this)

{
  TArray<FIoRequestStats::FRequestCategory,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FElement *pFVar7;
  longlong lVar8;
  bool bVar9;
  atomic<unsigned_int> aVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FIoRequestStats *pFVar16;
  FTSTicker *this_00;
  undefined8 *puVar17;
  ulong64 uVar18;
  TWeakPtr<FTSTicker::FElement,1> *pTVar19;
  uint uVar20;
  FRequestCategory **ppFVar21;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  TWeakPtr<FTSTicker::FElement,1> local_b0;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  uVar20 = 0;
  this->PendingIoRequests = 0;
  (this->PendingIoRequestsCounter).Value = 0;
  (this->PendingIoRequestsCounter).CounterName = L"IoDispatcher/PendingIoRequests";
  (this->PendingIoRequestsCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->PendingIoRequestsCounter).CounterFlags = '\0';
  aVar10._0_2_ = FCountersTrace::OutputInitCounter
                           (L"IoDispatcher/PendingIoRequests",TraceCounterType_Int,
                            TraceCounterDisplayHint_None);
  pTVar1 = &this->Categories;
  LOCK();
  aVar10._2_2_ = 0;
  (this->PendingIoRequestsCounter).CounterId = aVar10;
  UNLOCK();
  piVar2 = &(this->Categories).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Categories).ArrayNum = 0;
  *piVar2 = 0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,4,&pTVar1->AllocatorInstance,0,piVar2);
  uVar11 = (this->Categories).ArrayNum;
  if (uVar11 == *piVar2) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Categories).ArrayNum = uVar11 + 1;
  local_a0 = (longlong)(int)uVar11 * 0x40;
  FRequestCategory::FRequestCategory
            ((FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_a0),L"PackageData");
  uVar12 = (this->Categories).ArrayNum;
  if (uVar12 == *piVar2) {
    uVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Categories).ArrayNum = uVar12 + 1;
  local_98 = (longlong)(int)uVar12 * 0x40;
  FRequestCategory::FRequestCategory
            ((FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_98),L"BulkData");
  uVar13 = (this->Categories).ArrayNum;
  if (uVar13 == *piVar2) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Categories).ArrayNum = uVar13 + 1;
  local_90 = (longlong)(int)uVar13 * 0x40;
  FRequestCategory::FRequestCategory
            ((FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_90),L"Shaders");
  uVar14 = (this->Categories).ArrayNum;
  if (uVar14 == *piVar2) {
    uVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Categories).ArrayNum = uVar14 + 1;
  local_b0.Object = (FElement *)((longlong)(int)uVar14 * 0x40);
  FRequestCategory::FRequestCategory
            ((FRequestCategory *)((pTVar1->AllocatorInstance).Data + (longlong)local_b0.Object),
             L"Misc");
  pFVar7 = local_b0.Object;
  ppFVar21 = this->ChunkTypeToCategoryMap;
  do {
    uVar15 = 0;
    if ((int)uVar14 < (this->Categories).ArrayNum) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FIoRequestStats *)(*pcVar6)();
      return pFVar16;
    }
    uVar20 = uVar20 + 1;
    *ppFVar21 = (FRequestCategory *)((pTVar1->AllocatorInstance).Data + (longlong)pFVar7);
    ppFVar21 = ppFVar21 + 1;
  } while (uVar20 < 0xe);
  uVar20 = 0;
  if ((int)uVar11 < (this->Categories).ArrayNum) {
    uVar20 = ~uVar11 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoRequestStats *)(*pcVar6)();
    return pFVar16;
  }
  uVar20 = 0;
  this->ChunkTypeToCategoryMap[1] =
       (FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_a0);
  uVar14 = ~uVar12 >> 0x1f;
  uVar11 = uVar20;
  if ((int)uVar12 < (this->Categories).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoRequestStats *)(*pcVar6)();
    return pFVar16;
  }
  lVar8 = local_98;
  this->ChunkTypeToCategoryMap[2] =
       (FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_98);
  uVar11 = uVar20;
  if ((int)uVar12 < (this->Categories).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoRequestStats *)(*pcVar6)();
    return pFVar16;
  }
  this->ChunkTypeToCategoryMap[3] = (FRequestCategory *)((pTVar1->AllocatorInstance).Data + lVar8);
  uVar11 = uVar20;
  if ((int)uVar12 < (this->Categories).ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoRequestStats *)(*pcVar6)();
    return pFVar16;
  }
  this->ChunkTypeToCategoryMap[4] = (FRequestCategory *)((pTVar1->AllocatorInstance).Data + lVar8);
  if ((int)uVar13 < (this->Categories).ArrayNum) {
    uVar20 = ~uVar13 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoRequestStats *)(*pcVar6)();
    return pFVar16;
  }
  this->ChunkTypeToCategoryMap[9] =
       (FRequestCategory *)((pTVar1->AllocatorInstance).Data + local_90);
  this_00 = FTSTicker::GetCoreTicker();
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_c0;
  puVar17 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFIoRequestStats____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar17[4] = TickCsv;
    puVar17[3] = this;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pTVar19 = FTSTicker::AddTicker
                      (this_00,&local_b0,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8,0.0);
  if (&this->TickerHandle != pTVar19) {
    (this->TickerHandle).Object = pTVar19->Object;
    pTVar19->Object = (FElement *)0x0;
    pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar19->WeakReferenceCount).ReferenceController;
    (pTVar19->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  if (local_b0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_b0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_b0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b0.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_88);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  return this;
}

// ~FIoRequestStats @ 1417a72a0

void __thiscall FIoRequestStats::~FIoRequestStats(FIoRequestStats *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  local_18.Object = (this->TickerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  pTVar3 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
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
  DestructItems<FIoRequestStats::FRequestCategory,int>
            ((FRequestCategory *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar4 = (this->Categories).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if (((this->PendingIoRequestsCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->PendingIoRequestsCounter).CounterName);
    return;
  }
  return;
}

// OnRequestCompleted @ 1417e7e80

void __thiscall FIoRequestStats::OnRequestCompleted(FIoRequestStats *this,FIoRequestImpl *param_1)

{
  atomic<unsigned_int> *paVar1;
  FRequestCategory *pFVar2;
  BufCore *pBVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  longlong lVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  atomic<unsigned_int> aVar10;
  ulonglong uVar11;
  double dVar12;
  LARGE_INTEGER local_res8;
  
  lVar7 = this->PendingIoRequests + -1;
  this->PendingIoRequests = lVar7;
  if (((this->PendingIoRequestsCounter).Value != lVar7) &&
     ((this->PendingIoRequestsCounter).Value = lVar7, -1 < CountersChannel->Enabled)) {
    if ((this->PendingIoRequestsCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar6 = FCountersTrace::OutputInitCounter
                        ((this->PendingIoRequestsCounter).CounterName,TraceCounterType_Int,
                         (this->PendingIoRequestsCounter).CounterFlags & 0xf);
      paVar1 = &(this->PendingIoRequestsCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar8._2_2_ = 0;
        aVar8._0_2_ = uVar6;
        *paVar1 = aVar8;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->PendingIoRequestsCounter).CounterId,0),
               (this->PendingIoRequestsCounter).Value);
  }
  if ((param_1->Buffer).bIsSet != false) {
    pFVar2 = this->ChunkTypeToCategoryMap[(param_1->ChunkId).Id[0xb]];
    pFVar2->TotaRequestsCount = pFVar2->TotaRequestsCount + 1;
    QueryPerformanceCounter(&local_res8);
    pFVar2->TotalRequestsTime =
         (double)(local_res8.QuadPart - param_1->StartTime) *
         FGenericPlatformTime::SecondsPerCycle64 + pFVar2->TotalRequestsTime;
    if (((param_1->Buffer).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pBVar3 = (param_1->Buffer).TypedValue.CorePtr.Reference;
    uVar11 = (ulonglong)CONCAT14(pBVar3->DataSizeHigh,pBVar3->DataSizeLow);
    if ((uVar11 != 0) &&
       ((pFVar2->TotalLoadedCounter).Value = (pFVar2->TotalLoadedCounter).Value + uVar11,
       -1 < CountersChannel->Enabled)) {
      if ((pFVar2->TotalLoadedCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar6 = FCountersTrace::OutputInitCounter
                          ((pFVar2->TotalLoadedCounter).CounterName,TraceCounterType_Int,
                           (pFVar2->TotalLoadedCounter).CounterFlags & 0xf);
        paVar1 = &(pFVar2->TotalLoadedCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar9._2_2_ = 0;
          aVar9._0_2_ = uVar6;
          *paVar1 = aVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((pFVar2->TotalLoadedCounter).CounterId,0),(pFVar2->TotalLoadedCounter).Value)
      ;
    }
    dVar12 = pFVar2->TotalRequestsTime / (double)pFVar2->TotaRequestsCount;
    if ((dVar12 != (pFVar2->AverageDurationCounter).Value) &&
       ((pFVar2->AverageDurationCounter).Value = dVar12, -1 < CountersChannel->Enabled)) {
      if ((pFVar2->AverageDurationCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar6 = FCountersTrace::OutputInitCounter
                          ((pFVar2->AverageDurationCounter).CounterName,TraceCounterType_Float,
                           (pFVar2->AverageDurationCounter).CounterFlags & 0xf);
        paVar1 = &(pFVar2->AverageDurationCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar10._2_2_ = 0;
          aVar10._0_2_ = uVar6;
          *paVar1 = aVar10;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((pFVar2->AverageDurationCounter).CounterId,0),
                 (pFVar2->AverageDurationCounter).Value);
    }
  }
  return;
}

// TickCsv @ 1418020e0

bool __thiscall FIoRequestStats::TickCsv(FIoRequestStats *this,float param_1)

{
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_PendingIoRequests.Name,_GCsvStat_PendingIoRequests.CategoryIndex,
             (int)this->PendingIoRequests,Set);
  return true;
}

