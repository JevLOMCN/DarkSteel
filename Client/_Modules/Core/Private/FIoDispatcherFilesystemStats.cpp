// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// FIoDispatcherFilesystemStats @ 14147dd30

FIoDispatcherFilesystemStats * __thiscall
UE::FIoDispatcherFilesystemStats::FIoDispatcherFilesystemStats(FIoDispatcherFilesystemStats *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  atomic<unsigned_int> aVar8;
  atomic<unsigned_int> aVar9;
  atomic<unsigned_int> aVar10;
  atomic<unsigned_int> aVar11;
  atomic<unsigned_int> aVar12;
  atomic<unsigned_int> aVar13;
  atomic<unsigned_int> aVar14;
  atomic<unsigned_int> aVar15;
  atomic<unsigned_int> aVar16;
  atomic<unsigned_int> aVar17;
  atomic<unsigned_int> aVar18;
  atomic<unsigned_int> aVar19;
  atomic<unsigned_int> aVar20;
  atomic<unsigned_int> aVar21;
  FTSTicker *this_00;
  undefined8 *puVar22;
  ulong64 uVar23;
  TWeakPtr<FTSTicker::FElement,1> *pTVar24;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  (this->QueuedReadRequestsSizeCounter).Value = (atomic<__int64>)0x0;
  (this->QueuedReadRequestsSizeCounter).CounterName = L"FileIoStore/QueuedReadRequestsSize";
  (this->QueuedReadRequestsSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->QueuedReadRequestsSizeCounter).CounterFlags = '\x01';
  aVar5._0_2_ = FCountersTrace::OutputInitCounter
                          (L"FileIoStore/QueuedReadRequestsSize",TraceCounterType_Int,
                           TraceCounterDisplayHint_Memory);
  LOCK();
  aVar5._2_2_ = 0;
  (this->QueuedReadRequestsSizeCounter).CounterId = aVar5;
  UNLOCK();
  (this->CompletedReadRequestsSizeCounter).Value = 0;
  (this->CompletedReadRequestsSizeCounter).CounterName = L"FileIoStore/CompletedReadRequestsSize";
  (this->CompletedReadRequestsSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->CompletedReadRequestsSizeCounter).CounterFlags = '\x01';
  aVar6._0_2_ = FCountersTrace::OutputInitCounter
                          (L"FileIoStore/CompletedReadRequestsSize",TraceCounterType_Int,
                           TraceCounterDisplayHint_Memory);
  LOCK();
  aVar6._2_2_ = 0;
  (this->CompletedReadRequestsSizeCounter).CounterId = aVar6;
  UNLOCK();
  (this->QueuedCompressedSizeCounter).Value = 0;
  (this->QueuedCompressedSizeCounter).CounterName = L"FileIoStore/QueuedCompressedSize";
  (this->QueuedCompressedSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->QueuedCompressedSizeCounter).CounterFlags = '\x01';
  aVar7._0_2_ = FCountersTrace::OutputInitCounter
                          (L"FileIoStore/QueuedCompressedSize",TraceCounterType_Int,
                           TraceCounterDisplayHint_Memory);
  LOCK();
  aVar7._2_2_ = 0;
  (this->QueuedCompressedSizeCounter).CounterId = aVar7;
  UNLOCK();
  (this->QueuedUncompressedSizeCounter).Value = 0;
  (this->QueuedUncompressedSizeCounter).CounterName = L"FileIoStore/QueuedUncompressedSize";
  (this->QueuedUncompressedSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->QueuedUncompressedSizeCounter).CounterFlags = '\x01';
  aVar8._0_2_ = FCountersTrace::OutputInitCounter
                          (L"FileIoStore/QueuedUncompressedSize",TraceCounterType_Int,
                           TraceCounterDisplayHint_Memory);
  LOCK();
  aVar8._2_2_ = 0;
  (this->QueuedUncompressedSizeCounter).CounterId = aVar8;
  UNLOCK();
  (this->CompletedCompressedSizeCounter).Value = 0;
  (this->CompletedCompressedSizeCounter).CounterName = L"FileIoStore/CompletedCompressedSize";
  (this->CompletedCompressedSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->CompletedCompressedSizeCounter).CounterFlags = '\x01';
  aVar9._0_2_ = FCountersTrace::OutputInitCounter
                          (L"FileIoStore/CompletedCompressedSize",TraceCounterType_Int,
                           TraceCounterDisplayHint_Memory);
  LOCK();
  aVar9._2_2_ = 0;
  (this->CompletedCompressedSizeCounter).CounterId = aVar9;
  UNLOCK();
  (this->CompletedUncompressedSizeCounter).Value = 0;
  (this->CompletedUncompressedSizeCounter).CounterName = L"FileIoStore/CompletedUncompressedSize";
  (this->CompletedUncompressedSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->CompletedUncompressedSizeCounter).CounterFlags = '\x01';
  aVar10._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/CompletedUncompressedSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar10._2_2_ = 0;
  (this->CompletedUncompressedSizeCounter).CounterId = aVar10;
  UNLOCK();
  (this->FileSystemSeeksTotalDistanceCounter).Value = 0;
  (this->FileSystemSeeksTotalDistanceCounter).CounterName =
       L"FileIoStore/FileSystemSeeksTotalDistance";
  (this->FileSystemSeeksTotalDistanceCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->FileSystemSeeksTotalDistanceCounter).CounterFlags = '\x01';
  aVar11._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/FileSystemSeeksTotalDistance",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar11._2_2_ = 0;
  (this->FileSystemSeeksTotalDistanceCounter).CounterId = aVar11;
  UNLOCK();
  (this->FileSystemSeeksForwardCountCounter).Value = 0;
  (this->FileSystemSeeksForwardCountCounter).CounterName =
       L"FileIoStore/FileSystemSeeksForwardCount";
  (this->FileSystemSeeksForwardCountCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->FileSystemSeeksForwardCountCounter).CounterFlags = '\0';
  aVar12._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/FileSystemSeeksForwardCount",TraceCounterType_Int,
                            TraceCounterDisplayHint_None);
  LOCK();
  aVar12._2_2_ = 0;
  (this->FileSystemSeeksForwardCountCounter).CounterId = aVar12;
  UNLOCK();
  (this->FileSystemSeeksBackwardCountCounter).Value = 0;
  (this->FileSystemSeeksBackwardCountCounter).CounterName =
       L"FileIoStore/FileSystemSeeksBackwardCount";
  (this->FileSystemSeeksBackwardCountCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->FileSystemSeeksBackwardCountCounter).CounterFlags = '\0';
  aVar13._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/FileSystemSeeksBackwardCount",TraceCounterType_Int,
                            TraceCounterDisplayHint_None);
  LOCK();
  aVar13._2_2_ = 0;
  (this->FileSystemSeeksBackwardCountCounter).CounterId = aVar13;
  UNLOCK();
  (this->FileSystemSeeksChangeHandleCountCounter).Value = 0;
  (this->FileSystemSeeksChangeHandleCountCounter).CounterName =
       L"FileIoStore/FileSystemSeeksChangeHandleCount";
  (this->FileSystemSeeksChangeHandleCountCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->FileSystemSeeksChangeHandleCountCounter).CounterFlags = '\0';
  aVar14._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/FileSystemSeeksChangeHandleCount",TraceCounterType_Int,
                            TraceCounterDisplayHint_None);
  LOCK();
  aVar14._2_2_ = 0;
  (this->FileSystemSeeksChangeHandleCountCounter).CounterId = aVar14;
  UNLOCK();
  (this->FileSystemCompletedRequestsSizeCounter).Value = 0;
  (this->FileSystemCompletedRequestsSizeCounter).CounterName =
       L"FileIoStore/FileSystemCompletedRequestsSize";
  (this->FileSystemCompletedRequestsSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->FileSystemCompletedRequestsSizeCounter).CounterFlags = '\x01';
  aVar15._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/FileSystemCompletedRequestsSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar15._2_2_ = 0;
  (this->FileSystemCompletedRequestsSizeCounter).CounterId = aVar15;
  UNLOCK();
  (this->BlockCacheStoredSizeCounter).Value = 0;
  (this->BlockCacheStoredSizeCounter).CounterName = L"FileIoStore/BlockCacheStoredSize";
  (this->BlockCacheStoredSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->BlockCacheStoredSizeCounter).CounterFlags = '\x01';
  aVar16._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/BlockCacheStoredSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar16._2_2_ = 0;
  (this->BlockCacheStoredSizeCounter).CounterId = aVar16;
  UNLOCK();
  (this->BlockCacheHitSizeCounter).Value = 0;
  (this->BlockCacheHitSizeCounter).CounterName = L"FileIoStore/BlockCacheHitSize";
  (this->BlockCacheHitSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->BlockCacheHitSizeCounter).CounterFlags = '\x01';
  aVar17._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/BlockCacheHitSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar17._2_2_ = 0;
  (this->BlockCacheHitSizeCounter).CounterId = aVar17;
  UNLOCK();
  (this->BlockCacheMissedSizeCounter).Value = 0;
  (this->BlockCacheMissedSizeCounter).CounterName = L"FileIoStore/BlockCacheMissedSize";
  (this->BlockCacheMissedSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->BlockCacheMissedSizeCounter).CounterFlags = '\x01';
  aVar18._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/BlockCacheMissedSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar18._2_2_ = 0;
  (this->BlockCacheMissedSizeCounter).CounterId = aVar18;
  UNLOCK();
  (this->ScatteredSizeCounter).Value = 0;
  (this->ScatteredSizeCounter).CounterName = L"FileIoStore/ScatteredSize";
  (this->ScatteredSizeCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->ScatteredSizeCounter).CounterFlags = '\x01';
  aVar19._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/ScatteredSize",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar19._2_2_ = 0;
  (this->ScatteredSizeCounter).CounterId = aVar19;
  UNLOCK();
  (this->TocMemoryCounter).Value = 0;
  (this->TocMemoryCounter).CounterName = L"FileIoStore/TocMemory";
  (this->TocMemoryCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->TocMemoryCounter).CounterFlags = '\x01';
  aVar20._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/TocMemory",TraceCounterType_Int,
                            TraceCounterDisplayHint_Memory);
  LOCK();
  aVar20._2_2_ = 0;
  (this->TocMemoryCounter).CounterId = aVar20;
  UNLOCK();
  (this->AvailableBuffersCounter).Value = (atomic<__int64>)0x0;
  (this->AvailableBuffersCounter).CounterName = L"FileIoStore/AvailableBuffers";
  (this->AvailableBuffersCounter).CounterId = (atomic<unsigned_int>)0x0;
  (this->AvailableBuffersCounter).CounterFlags = '\0';
  aVar21._0_2_ = FCountersTrace::OutputInitCounter
                           (L"FileIoStore/AvailableBuffers",TraceCounterType_Int,
                            TraceCounterDisplayHint_None);
  pTVar2 = &this->TickerHandle;
  LOCK();
  aVar21._2_2_ = 0;
  (this->AvailableBuffersCounter).CounterId = aVar21;
  UNLOCK();
  this->QueuedFilesystemReadBytes = (atomic<unsigned___int64>)0x0;
  this->QueuedFilesystemReads = (atomic<unsigned___int64>)0x0;
  this->QueuedUncompressBytesIn = 0;
  this->QueuedUncompressBytesOut = 0;
  this->QueuedUncompressBlocks = 0;
  pTVar2->Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LastFileReadInfo).FileHandle = 0;
  (this->LastFileReadInfo).Offset = 0xffffffffffffffff;
  this_00 = FTSTicker::GetCoreTicker();
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar22 = Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherFilesystemStats_UE____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar22[4] = CsvTick;
    puVar22[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pTVar24 = FTSTicker::AddTicker
                      (this_00,&local_68,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0);
  if (pTVar2 != pTVar24) {
    pTVar2->Object = pTVar24->Object;
    pTVar24->Object = (FElement *)0x0;
    pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
    (this->TickerHandle).WeakReferenceCount.ReferenceController =
         (pTVar24->WeakReferenceCount).ReferenceController;
    (pTVar24->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return this;
}

// ~FIoDispatcherFilesystemStats @ 141480d60

void __thiscall
UE::FIoDispatcherFilesystemStats::~FIoDispatcherFilesystemStats(FIoDispatcherFilesystemStats *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
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
  if (((this->AvailableBuffersCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->AvailableBuffersCounter).CounterName);
  }
  if (((this->TocMemoryCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->TocMemoryCounter).CounterName);
  }
  if (((this->ScatteredSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->ScatteredSizeCounter).CounterName);
  }
  if (((this->BlockCacheMissedSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->BlockCacheMissedSizeCounter).CounterName);
  }
  if (((this->BlockCacheHitSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->BlockCacheHitSizeCounter).CounterName);
  }
  if (((this->BlockCacheStoredSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->BlockCacheStoredSizeCounter).CounterName);
  }
  if (((this->FileSystemCompletedRequestsSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->FileSystemCompletedRequestsSizeCounter).CounterName);
  }
  if (((this->FileSystemSeeksChangeHandleCountCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->FileSystemSeeksChangeHandleCountCounter).CounterName);
  }
  if (((this->FileSystemSeeksBackwardCountCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->FileSystemSeeksBackwardCountCounter).CounterName);
  }
  if (((this->FileSystemSeeksForwardCountCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->FileSystemSeeksForwardCountCounter).CounterName);
  }
  if (((this->FileSystemSeeksTotalDistanceCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->FileSystemSeeksTotalDistanceCounter).CounterName);
  }
  if (((this->CompletedUncompressedSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->CompletedUncompressedSizeCounter).CounterName);
  }
  if (((this->CompletedCompressedSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->CompletedCompressedSizeCounter).CounterName);
  }
  if (((this->QueuedUncompressedSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->QueuedUncompressedSizeCounter).CounterName);
  }
  if (((this->QueuedCompressedSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->QueuedCompressedSizeCounter).CounterName);
  }
  if (((this->CompletedReadRequestsSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->CompletedReadRequestsSizeCounter).CounterName);
  }
  if (((this->QueuedReadRequestsSizeCounter).CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->QueuedReadRequestsSizeCounter).CounterName);
    return;
  }
  return;
}

// CsvTick @ 14148f770

bool __thiscall
UE::FIoDispatcherFilesystemStats::CsvTick(FIoDispatcherFilesystemStats *this,float param_1)

{
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_QueuedFilesystemReadMB.Name,_GCsvStat_QueuedFilesystemReadMB.CategoryIndex,
             (float)((double)(ulonglong)this->QueuedFilesystemReadBytes * __real_3eb0000000000000),
             Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_QueuedFilesystemReads.Name,_GCsvStat_QueuedFilesystemReads.CategoryIndex,
             SUB84(this->QueuedFilesystemReads,0),Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_QueuedUncompressBlocks.Name,_GCsvStat_QueuedUncompressBlocks.CategoryIndex,
             (int)this->QueuedUncompressBlocks,Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_QueuedUncompressInMB.Name,_GCsvStat_QueuedUncompressInMB.CategoryIndex,
             (float)((double)this->QueuedUncompressBytesIn * __real_3eb0000000000000),Set);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_QueuedUncompressOutMB.Name,_GCsvStat_QueuedUncompressOutMB.CategoryIndex,
             (float)((double)this->QueuedUncompressBytesOut * __real_3eb0000000000000),Set);
  return true;
}

// OnBlockCacheHit @ 1414a60c0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBlockCacheHit
          (FIoDispatcherFilesystemStats *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheHits.Name,_GCsvStat_FrameBlockCacheHits.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheHitKB.Name,_GCsvStat_FrameBlockCacheHitKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     ((this->BlockCacheHitSizeCounter).Value = (this->BlockCacheHitSizeCounter).Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->BlockCacheHitSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->BlockCacheHitSizeCounter).CounterName,TraceCounterType_Int,
                         (this->BlockCacheHitSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->BlockCacheHitSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->BlockCacheHitSizeCounter).CounterId,0),
               (this->BlockCacheHitSizeCounter).Value);
  }
  return;
}

// OnBlockCacheMiss @ 1414a61b0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBlockCacheMiss
          (FIoDispatcherFilesystemStats *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheMisses.Name,_GCsvStat_FrameBlockCacheMisses.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheMissKB.Name,_GCsvStat_FrameBlockCacheMissKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     ((this->BlockCacheMissedSizeCounter).Value =
           (this->BlockCacheMissedSizeCounter).Value + param_1, -1 < CountersChannel->Enabled)) {
    if ((this->BlockCacheMissedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->BlockCacheMissedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->BlockCacheMissedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->BlockCacheMissedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->BlockCacheMissedSizeCounter).CounterId,0),
               (this->BlockCacheMissedSizeCounter).Value);
  }
  return;
}

// OnBlockCacheStore @ 1414a62a0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBlockCacheStore
          (FIoDispatcherFilesystemStats *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheStores.Name,_GCsvStat_FrameBlockCacheStores.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheStoresKB.Name,_GCsvStat_FrameBlockCacheStoresKB.CategoryIndex
             ,(float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     ((this->BlockCacheStoredSizeCounter).Value =
           (this->BlockCacheStoredSizeCounter).Value + param_1, -1 < CountersChannel->Enabled)) {
    if ((this->BlockCacheStoredSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->BlockCacheStoredSizeCounter).CounterName,TraceCounterType_Int,
                         (this->BlockCacheStoredSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->BlockCacheStoredSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->BlockCacheStoredSizeCounter).CounterId,0),
               (this->BlockCacheStoredSizeCounter).Value);
  }
  return;
}

// OnBufferAllocated @ 1414a6390

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBufferAllocated(FIoDispatcherFilesystemStats *this)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  LOCK();
  (this->AvailableBuffersCounter).Value =
       (atomic<__int64>)((longlong)(this->AvailableBuffersCounter).Value + -1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if ((this->AvailableBuffersCounter).CounterId == (atomic<unsigned_int>)0x0) {
    uVar2 = FCountersTrace::OutputInitCounter
                      ((this->AvailableBuffersCounter).CounterName,TraceCounterType_Int,
                       (this->AvailableBuffersCounter).CounterFlags & 0xf);
    paVar1 = &(this->AvailableBuffersCounter).CounterId;
    LOCK();
    if (*paVar1 == (atomic<unsigned_int>)0x0) {
      aVar3._2_2_ = 0;
      aVar3._0_2_ = uVar2;
      *paVar1 = aVar3;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42((this->AvailableBuffersCounter).CounterId,0),
             (long64)(this->AvailableBuffersCounter).Value);
  return;
}

// OnBufferReleased @ 1414a6410

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBufferReleased(FIoDispatcherFilesystemStats *this)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  LOCK();
  (this->AvailableBuffersCounter).Value =
       (atomic<__int64>)((longlong)(this->AvailableBuffersCounter).Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if ((this->AvailableBuffersCounter).CounterId == (atomic<unsigned_int>)0x0) {
    uVar2 = FCountersTrace::OutputInitCounter
                      ((this->AvailableBuffersCounter).CounterName,TraceCounterType_Int,
                       (this->AvailableBuffersCounter).CounterFlags & 0xf);
    paVar1 = &(this->AvailableBuffersCounter).CounterId;
    LOCK();
    if (*paVar1 == (atomic<unsigned_int>)0x0) {
      aVar3._2_2_ = 0;
      aVar3._0_2_ = uVar2;
      *paVar1 = aVar3;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42((this->AvailableBuffersCounter).CounterId,0),
             (long64)(this->AvailableBuffersCounter).Value);
  return;
}

// OnBytesScattered @ 1414a6490

void __thiscall
UE::FIoDispatcherFilesystemStats::OnBytesScattered
          (FIoDispatcherFilesystemStats *this,long64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesScatteredKB.Name,_GCsvStat_FrameBytesScatteredKB.CategoryIndex,
             (float)((double)(ulonglong)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     ((this->ScatteredSizeCounter).Value = (this->ScatteredSizeCounter).Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->ScatteredSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->ScatteredSizeCounter).CounterName,TraceCounterType_Int,
                         (this->ScatteredSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->ScatteredSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->ScatteredSizeCounter).CounterId,0),(this->ScatteredSizeCounter).Value);
  }
  return;
}

// OnDecompressComplete @ 1414a6730

void __thiscall
UE::FIoDispatcherFilesystemStats::OnDecompressComplete
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  
  this->QueuedUncompressBlocks = this->QueuedUncompressBlocks - 1;
  this->QueuedUncompressBytesIn = this->QueuedUncompressBytesIn - param_1;
  this->QueuedUncompressBytesOut = this->QueuedUncompressBytesOut - param_2;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesUncompressedInKB.Name,
             _GCsvStat_FrameBytesUncompressedInKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesUncompressedOutKB.Name,
             _GCsvStat_FrameBytesUncompressedOutKB.CategoryIndex,
             (float)((double)param_2 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     ((this->QueuedCompressedSizeCounter).Value =
           (this->QueuedCompressedSizeCounter).Value - param_1, -1 < CountersChannel->Enabled)) {
    if ((this->QueuedCompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->QueuedCompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->QueuedCompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->QueuedCompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->QueuedCompressedSizeCounter).CounterId,0),
               (this->QueuedCompressedSizeCounter).Value);
  }
  if ((param_2 != 0) &&
     ((this->QueuedUncompressedSizeCounter).Value =
           (this->QueuedUncompressedSizeCounter).Value - param_2, -1 < CountersChannel->Enabled)) {
    if ((this->QueuedUncompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->QueuedUncompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->QueuedUncompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->QueuedUncompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar2;
        *paVar1 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->QueuedUncompressedSizeCounter).CounterId,0),
               (this->QueuedUncompressedSizeCounter).Value);
  }
  if ((param_1 != 0) &&
     ((this->CompletedCompressedSizeCounter).Value =
           (this->CompletedCompressedSizeCounter).Value + param_1, -1 < CountersChannel->Enabled)) {
    if ((this->CompletedCompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->CompletedCompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->CompletedCompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->CompletedCompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar5._2_2_ = 0;
        aVar5._0_2_ = uVar2;
        *paVar1 = aVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->CompletedCompressedSizeCounter).CounterId,0),
               (this->CompletedCompressedSizeCounter).Value);
  }
  if ((param_2 != 0) &&
     ((this->CompletedUncompressedSizeCounter).Value =
           (this->CompletedUncompressedSizeCounter).Value + param_2, -1 < CountersChannel->Enabled))
  {
    if ((this->CompletedUncompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->CompletedUncompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->CompletedUncompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->CompletedUncompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar2;
        *paVar1 = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->CompletedUncompressedSizeCounter).CounterId,0),
               (this->CompletedUncompressedSizeCounter).Value);
  }
  return;
}

// OnDecompressQueued @ 1414a6950

void __thiscall
UE::FIoDispatcherFilesystemStats::OnDecompressQueued
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  
  this->QueuedUncompressBlocks = this->QueuedUncompressBlocks + 1;
  this->QueuedUncompressBytesIn = this->QueuedUncompressBytesIn + param_1;
  this->QueuedUncompressBytesOut = this->QueuedUncompressBytesOut + param_2;
  if ((param_1 != 0) &&
     ((this->QueuedCompressedSizeCounter).Value =
           (this->QueuedCompressedSizeCounter).Value + param_1, -1 < CountersChannel->Enabled)) {
    if ((this->QueuedCompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->QueuedCompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->QueuedCompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->QueuedCompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->QueuedCompressedSizeCounter).CounterId,0),
               (this->QueuedCompressedSizeCounter).Value);
  }
  if ((param_2 != 0) &&
     ((this->QueuedUncompressedSizeCounter).Value =
           (this->QueuedUncompressedSizeCounter).Value + param_2, -1 < CountersChannel->Enabled)) {
    if ((this->QueuedUncompressedSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->QueuedUncompressedSizeCounter).CounterName,TraceCounterType_Int,
                         (this->QueuedUncompressedSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->QueuedUncompressedSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar2;
        *paVar1 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->QueuedUncompressedSizeCounter).CounterId,0),
               (this->QueuedUncompressedSizeCounter).Value);
  }
  return;
}

// OnFilesystemReadCompleted @ 1414a71d0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnFilesystemReadCompleted
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameFilesystemBytesReadKB.Name,
             _GCsvStat_FrameFilesystemBytesReadKB.CategoryIndex,
             (float)((double)param_3 * __real_3f50000000000000),Accumulate);
  if ((param_3 != 0) &&
     ((this->FileSystemCompletedRequestsSizeCounter).Value =
           (this->FileSystemCompletedRequestsSizeCounter).Value + param_3,
     -1 < CountersChannel->Enabled)) {
    if ((this->FileSystemCompletedRequestsSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->FileSystemCompletedRequestsSizeCounter).CounterName,
                         TraceCounterType_Int,
                         (this->FileSystemCompletedRequestsSizeCounter).CounterFlags & 0xf);
      paVar1 = &(this->FileSystemCompletedRequestsSizeCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->FileSystemCompletedRequestsSizeCounter).CounterId,0),
               (this->FileSystemCompletedRequestsSizeCounter).Value);
  }
  return;
}

// OnFilesystemReadStarted @ 1414a72a0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnFilesystemReadStarted
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  atomic<unsigned_int> *paVar1;
  ulong64 uVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameFilesystemReads.Name,_GCsvStat_FrameFilesystemReads.CategoryIndex,1,
             Accumulate);
  if ((this->LastFileReadInfo).FileHandle == param_1) {
    uVar2 = (this->LastFileReadInfo).Offset;
    if (uVar2 == param_2) {
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameSequentialReads.Name,_GCsvStat_FrameSequentialReads.CategoryIndex,1
                 ,Accumulate);
    }
    else {
      OnSeek(this,uVar2,param_2);
    }
  }
  else {
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameHandleChangeSeeks.Name,_GCsvStat_FrameHandleChangeSeeks.CategoryIndex
               ,1,Accumulate);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameSeeks.Name,_GCsvStat_FrameSeeks.CategoryIndex,1,Accumulate);
    (this->FileSystemSeeksChangeHandleCountCounter).Value =
         (this->FileSystemSeeksChangeHandleCountCounter).Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if ((this->FileSystemSeeksChangeHandleCountCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          ((this->FileSystemSeeksChangeHandleCountCounter).CounterName,
                           TraceCounterType_Int,
                           (this->FileSystemSeeksChangeHandleCountCounter).CounterFlags & 0xf);
        paVar1 = &(this->FileSystemSeeksChangeHandleCountCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar4._2_2_ = 0;
          aVar4._0_2_ = uVar3;
          *paVar1 = aVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->FileSystemSeeksChangeHandleCountCounter).CounterId,0),
                 (this->FileSystemSeeksChangeHandleCountCounter).Value);
    }
  }
  (this->LastFileReadInfo).FileHandle = param_1;
  (this->LastFileReadInfo).Offset = param_2 + param_3;
  return;
}

// OnHandleChangeSeek @ 1414a73e0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnHandleChangeSeek(FIoDispatcherFilesystemStats *this)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameHandleChangeSeeks.Name,_GCsvStat_FrameHandleChangeSeeks.CategoryIndex,1
             ,Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameSeeks.Name,_GCsvStat_FrameSeeks.CategoryIndex,1,Accumulate);
  (this->FileSystemSeeksChangeHandleCountCounter).Value =
       (this->FileSystemSeeksChangeHandleCountCounter).Value + 1;
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if ((this->FileSystemSeeksChangeHandleCountCounter).CounterId == (atomic<unsigned_int>)0x0) {
    uVar2 = FCountersTrace::OutputInitCounter
                      ((this->FileSystemSeeksChangeHandleCountCounter).CounterName,
                       TraceCounterType_Int,
                       (this->FileSystemSeeksChangeHandleCountCounter).CounterFlags & 0xf);
    paVar1 = &(this->FileSystemSeeksChangeHandleCountCounter).CounterId;
    LOCK();
    if (*paVar1 == (atomic<unsigned_int>)0x0) {
      aVar3._2_2_ = 0;
      aVar3._0_2_ = uVar2;
      *paVar1 = aVar3;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42((this->FileSystemSeeksChangeHandleCountCounter).CounterId,0),
             (this->FileSystemSeeksChangeHandleCountCounter).Value);
  return;
}

// OnReadRequestsCompleted @ 1414a77e0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnReadRequestsCompleted
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  
  LOCK();
  this->QueuedFilesystemReadBytes =
       (atomic<unsigned___int64>)((longlong)this->QueuedFilesystemReadBytes + -param_1);
  UNLOCK();
  LOCK();
  this->QueuedFilesystemReads =
       (atomic<unsigned___int64>)((longlong)this->QueuedFilesystemReads - param_2);
  UNLOCK();
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesReadKB.Name,_GCsvStat_FrameBytesReadKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if (param_1 != 0) {
    LOCK();
    (this->QueuedReadRequestsSizeCounter).Value =
         (atomic<__int64>)((longlong)(this->QueuedReadRequestsSizeCounter).Value + -param_1);
    UNLOCK();
    if (CountersChannel->Enabled < 0) {
      if (param_1 == 0) {
        return;
      }
    }
    else {
      if ((this->QueuedReadRequestsSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          ((this->QueuedReadRequestsSizeCounter).CounterName,TraceCounterType_Int,
                           (this->QueuedReadRequestsSizeCounter).CounterFlags & 0xf);
        paVar1 = &(this->QueuedReadRequestsSizeCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar3._2_2_ = 0;
          aVar3._0_2_ = uVar2;
          *paVar1 = aVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->QueuedReadRequestsSizeCounter).CounterId,0),
                 (long64)(this->QueuedReadRequestsSizeCounter).Value);
    }
    (this->CompletedReadRequestsSizeCounter).Value =
         (this->CompletedReadRequestsSizeCounter).Value + param_1;
    if (-1 < CountersChannel->Enabled) {
      if ((this->CompletedReadRequestsSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          ((this->CompletedReadRequestsSizeCounter).CounterName,TraceCounterType_Int
                           ,(this->CompletedReadRequestsSizeCounter).CounterFlags & 0xf);
        paVar1 = &(this->CompletedReadRequestsSizeCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar4._2_2_ = 0;
          aVar4._0_2_ = uVar2;
          *paVar1 = aVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->CompletedReadRequestsSizeCounter).CounterId,0),
                 (this->CompletedReadRequestsSizeCounter).Value);
    }
  }
  return;
}

// OnReadRequestsQueued @ 1414a7910

void __thiscall
UE::FIoDispatcherFilesystemStats::OnReadRequestsQueued
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  LOCK();
  this->QueuedFilesystemReadBytes =
       (atomic<unsigned___int64>)((longlong)this->QueuedFilesystemReadBytes + param_1);
  UNLOCK();
  LOCK();
  this->QueuedFilesystemReads =
       (atomic<unsigned___int64>)((longlong)this->QueuedFilesystemReads + param_2);
  UNLOCK();
  if (param_1 != 0) {
    LOCK();
    (this->QueuedReadRequestsSizeCounter).Value =
         (atomic<__int64>)((longlong)(this->QueuedReadRequestsSizeCounter).Value + param_1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if ((this->QueuedReadRequestsSizeCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          ((this->QueuedReadRequestsSizeCounter).CounterName,TraceCounterType_Int,
                           (this->QueuedReadRequestsSizeCounter).CounterFlags & 0xf);
        paVar1 = &(this->QueuedReadRequestsSizeCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar3._2_2_ = 0;
          aVar3._0_2_ = uVar2;
          *paVar1 = aVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->QueuedReadRequestsSizeCounter).CounterId,0),
                 (long64)(this->QueuedReadRequestsSizeCounter).Value);
      return;
    }
  }
  return;
}

// OnSeek @ 1414a7990

void __thiscall
UE::FIoDispatcherFilesystemStats::OnSeek
          (FIoDispatcherFilesystemStats *this,ulong64 param_1,ulong64 param_2)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  longlong lVar3;
  atomic<unsigned_int> aVar4;
  atomic<unsigned_int> aVar5;
  ulonglong uVar6;
  
  if (param_1 < param_2) {
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameForwardSeeks.Name,_GCsvStat_FrameForwardSeeks.CategoryIndex,1,
               Accumulate);
    uVar6 = param_2 - param_1;
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameSeekDistanceMB.Name,_GCsvStat_FrameSeekDistanceMB.CategoryIndex,
               (float)((double)uVar6 * __real_3eb0000000000000),Accumulate);
    if ((uVar6 != 0) &&
       ((this->FileSystemSeeksTotalDistanceCounter).Value =
             (this->FileSystemSeeksTotalDistanceCounter).Value + uVar6,
       -1 < CountersChannel->Enabled)) {
      if ((this->FileSystemSeeksTotalDistanceCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          ((this->FileSystemSeeksTotalDistanceCounter).CounterName,
                           TraceCounterType_Int,
                           (this->FileSystemSeeksTotalDistanceCounter).CounterFlags & 0xf);
        paVar1 = &(this->FileSystemSeeksTotalDistanceCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar4._2_2_ = 0;
          aVar4._0_2_ = uVar2;
          *paVar1 = aVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->FileSystemSeeksTotalDistanceCounter).CounterId,0),
                 (this->FileSystemSeeksTotalDistanceCounter).Value);
    }
    lVar3 = 0xa8;
  }
  else {
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameBackwardSeeks.Name,_GCsvStat_FrameBackwardSeeks.CategoryIndex,1,
               Accumulate);
    uVar6 = param_1 - param_2;
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameSeekDistanceMB.Name,_GCsvStat_FrameSeekDistanceMB.CategoryIndex,
               (float)((double)uVar6 * __real_3eb0000000000000),Accumulate);
    if ((uVar6 != 0) &&
       ((this->FileSystemSeeksTotalDistanceCounter).Value =
             (this->FileSystemSeeksTotalDistanceCounter).Value + uVar6,
       -1 < CountersChannel->Enabled)) {
      if ((this->FileSystemSeeksTotalDistanceCounter).CounterId == (atomic<unsigned_int>)0x0) {
        uVar2 = FCountersTrace::OutputInitCounter
                          ((this->FileSystemSeeksTotalDistanceCounter).CounterName,
                           TraceCounterType_Int,
                           (this->FileSystemSeeksTotalDistanceCounter).CounterFlags & 0xf);
        paVar1 = &(this->FileSystemSeeksTotalDistanceCounter).CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar5._2_2_ = 0;
          aVar5._0_2_ = uVar2;
          *paVar1 = aVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->FileSystemSeeksTotalDistanceCounter).CounterId,0),
                 (this->FileSystemSeeksTotalDistanceCounter).Value);
    }
    lVar3 = 0xc0;
  }
  FCountersTrace::TCounter<__int64,0,__int64,0>::Increment
            ((TCounter<__int64,0,__int64,0> *)
             (&(this->QueuedReadRequestsSizeCounter).Value.field_0x0 + lVar3));
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameSeeks.Name,_GCsvStat_FrameSeeks.CategoryIndex,1,Accumulate);
  return;
}

// OnSequentialRead @ 1414a7b80

void __thiscall
UE::FIoDispatcherFilesystemStats::OnSequentialRead(FIoDispatcherFilesystemStats *this)

{
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameSequentialReads.Name,_GCsvStat_FrameSequentialReads.CategoryIndex,1,
             Accumulate);
  return;
}

// OnTocMounted @ 1414a7c50

void __thiscall
UE::FIoDispatcherFilesystemStats::OnTocMounted(FIoDispatcherFilesystemStats *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  if ((param_1 != 0) &&
     ((this->TocMemoryCounter).Value = (this->TocMemoryCounter).Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->TocMemoryCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->TocMemoryCounter).CounterName,TraceCounterType_Int,
                         (this->TocMemoryCounter).CounterFlags & 0xf);
      paVar1 = &(this->TocMemoryCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->TocMemoryCounter).CounterId,0),(this->TocMemoryCounter).Value);
  }
  return;
}

// OnTocUnmounted @ 1414a7cd0

void __thiscall
UE::FIoDispatcherFilesystemStats::OnTocUnmounted(FIoDispatcherFilesystemStats *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  ushort uVar2;
  atomic<unsigned_int> aVar3;
  
  if ((param_1 != 0) &&
     ((this->TocMemoryCounter).Value = (this->TocMemoryCounter).Value - param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->TocMemoryCounter).CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        ((this->TocMemoryCounter).CounterName,TraceCounterType_Int,
                         (this->TocMemoryCounter).CounterFlags & 0xf);
      paVar1 = &(this->TocMemoryCounter).CounterId;
      LOCK();
      if (*paVar1 == (atomic<unsigned_int>)0x0) {
        aVar3._2_2_ = 0;
        aVar3._0_2_ = uVar2;
        *paVar1 = aVar3;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->TocMemoryCounter).CounterId,0),(this->TocMemoryCounter).Value);
  }
  return;
}

