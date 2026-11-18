// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 18

// FFileIoStoreStats @ 142a51df0

FFileIoStoreStats * __thiscall FFileIoStoreStats::FFileIoStoreStats(FFileIoStoreStats *this)

{
  UE::FIoDispatcherFilesystemStats::FIoDispatcherFilesystemStats(&this->Stats);
  return this;
}

// ~FFileIoStoreStats @ 142a563e0

void __thiscall FFileIoStoreStats::~FFileIoStoreStats(FFileIoStoreStats *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<FTSTicker::FElement,1> TStack_18;
  
  TStack_18.Object = (this->Stats).TickerHandle.Object;
  TStack_18.WeakReferenceCount.ReferenceController =
       (this->Stats).TickerHandle.WeakReferenceCount.ReferenceController;
  if (TStack_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(TStack_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&TStack_18);
  pTVar3 = (this->Stats).TickerHandle.WeakReferenceCount.ReferenceController;
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
  if (((this->Stats).AvailableBuffersCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).AvailableBuffersCounter.CounterName);
  }
  if (((this->Stats).TocMemoryCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).TocMemoryCounter.CounterName);
  }
  if (((this->Stats).ScatteredSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).ScatteredSizeCounter.CounterName);
  }
  if (((this->Stats).BlockCacheMissedSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).BlockCacheMissedSizeCounter.CounterName);
  }
  if (((this->Stats).BlockCacheHitSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).BlockCacheHitSizeCounter.CounterName);
  }
  if (((this->Stats).BlockCacheStoredSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).BlockCacheStoredSizeCounter.CounterName);
  }
  if (((this->Stats).FileSystemCompletedRequestsSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName
              ((this->Stats).FileSystemCompletedRequestsSizeCounter.CounterName);
  }
  if (((this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName
              ((this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterName);
  }
  if (((this->Stats).FileSystemSeeksBackwardCountCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).FileSystemSeeksBackwardCountCounter.CounterName);
  }
  if (((this->Stats).FileSystemSeeksForwardCountCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).FileSystemSeeksForwardCountCounter.CounterName);
  }
  if (((this->Stats).FileSystemSeeksTotalDistanceCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).FileSystemSeeksTotalDistanceCounter.CounterName);
  }
  if (((this->Stats).CompletedUncompressedSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).CompletedUncompressedSizeCounter.CounterName);
  }
  if (((this->Stats).CompletedCompressedSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).CompletedCompressedSizeCounter.CounterName);
  }
  if (((this->Stats).QueuedUncompressedSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).QueuedUncompressedSizeCounter.CounterName);
  }
  if (((this->Stats).QueuedCompressedSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).QueuedCompressedSizeCounter.CounterName);
  }
  if (((this->Stats).CompletedReadRequestsSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).CompletedReadRequestsSizeCounter.CounterName);
  }
  if (((this->Stats).QueuedReadRequestsSizeCounter.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName((this->Stats).QueuedReadRequestsSizeCounter.CounterName);
    return;
  }
  return;
}

// OnBlockCacheHit @ 142a87040

void __thiscall FFileIoStoreStats::OnBlockCacheHit(FFileIoStoreStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheHits.Name,UE::_GCsvStat_FrameBlockCacheHits.CategoryIndex
             ,1,Accumulate);
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheHitKB.Name,
             UE::_GCsvStat_FrameBlockCacheHitKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).BlockCacheHitSizeCounter, pTVar1->Value = pTVar1->Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).BlockCacheHitSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).BlockCacheHitSizeCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).BlockCacheHitSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).BlockCacheHitSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).BlockCacheHitSizeCounter.CounterId,0),
               (this->Stats).BlockCacheHitSizeCounter.Value);
  }
  return;
}

// OnBlockCacheMiss @ 142a87050

void __thiscall FFileIoStoreStats::OnBlockCacheMiss(FFileIoStoreStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheMisses.Name,
             UE::_GCsvStat_FrameBlockCacheMisses.CategoryIndex,1,Accumulate);
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheMissKB.Name,
             UE::_GCsvStat_FrameBlockCacheMissKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).BlockCacheMissedSizeCounter, pTVar1->Value = pTVar1->Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).BlockCacheMissedSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).BlockCacheMissedSizeCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).BlockCacheMissedSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).BlockCacheMissedSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).BlockCacheMissedSizeCounter.CounterId,0),
               (this->Stats).BlockCacheMissedSizeCounter.Value);
  }
  return;
}

// OnBlockCacheStore @ 142a87060

void __thiscall FFileIoStoreStats::OnBlockCacheStore(FFileIoStoreStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheStores.Name,
             UE::_GCsvStat_FrameBlockCacheStores.CategoryIndex,1,Accumulate);
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBlockCacheStoresKB.Name,
             UE::_GCsvStat_FrameBlockCacheStoresKB.CategoryIndex,
             (float)((double)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).BlockCacheStoredSizeCounter, pTVar1->Value = pTVar1->Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).BlockCacheStoredSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).BlockCacheStoredSizeCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).BlockCacheStoredSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).BlockCacheStoredSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).BlockCacheStoredSizeCounter.CounterId,0),
               (this->Stats).BlockCacheStoredSizeCounter.Value);
  }
  return;
}

// OnBufferAllocated @ 142a87070

void __thiscall FFileIoStoreStats::OnBufferAllocated(FFileIoStoreStats *this)

{
  TCounter<std::atomic<__int64>,0,std::atomic<__int64>,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  LOCK();
  pTVar1 = &(this->Stats).AvailableBuffersCounter;
  pTVar1->Value = (atomic<__int64>)((longlong)pTVar1->Value + -1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if ((this->Stats).AvailableBuffersCounter.CounterId == (atomic<unsigned_int>)0x0) {
    uVar3 = FCountersTrace::OutputInitCounter
                      ((this->Stats).AvailableBuffersCounter.CounterName,TraceCounterType_Int,
                       (this->Stats).AvailableBuffersCounter.CounterFlags & 0xf);
    paVar2 = &(this->Stats).AvailableBuffersCounter.CounterId;
    LOCK();
    if (*paVar2 == (atomic<unsigned_int>)0x0) {
      aVar4._2_2_ = 0;
      aVar4._0_2_ = uVar3;
      *paVar2 = aVar4;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42((this->Stats).AvailableBuffersCounter.CounterId,0),
             (long64)(this->Stats).AvailableBuffersCounter.Value);
  return;
}

// OnBufferReleased @ 142a87080

void __thiscall FFileIoStoreStats::OnBufferReleased(FFileIoStoreStats *this)

{
  TCounter<std::atomic<__int64>,0,std::atomic<__int64>,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  LOCK();
  pTVar1 = &(this->Stats).AvailableBuffersCounter;
  pTVar1->Value = (atomic<__int64>)((longlong)pTVar1->Value + 1);
  UNLOCK();
  if (CountersChannel->Enabled < 0) {
    return;
  }
  if ((this->Stats).AvailableBuffersCounter.CounterId == (atomic<unsigned_int>)0x0) {
    uVar3 = FCountersTrace::OutputInitCounter
                      ((this->Stats).AvailableBuffersCounter.CounterName,TraceCounterType_Int,
                       (this->Stats).AvailableBuffersCounter.CounterFlags & 0xf);
    paVar2 = &(this->Stats).AvailableBuffersCounter.CounterId;
    LOCK();
    if (*paVar2 == (atomic<unsigned_int>)0x0) {
      aVar4._2_2_ = 0;
      aVar4._0_2_ = uVar3;
      *paVar2 = aVar4;
    }
    UNLOCK();
  }
  FCountersTrace::OutputSetValue
            (SUB42((this->Stats).AvailableBuffersCounter.CounterId,0),
             (long64)(this->Stats).AvailableBuffersCounter.Value);
  return;
}

// OnBytesScattered @ 142a87090

void __thiscall FFileIoStoreStats::OnBytesScattered(FFileIoStoreStats *this,long64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&UE::_GCsvStat_FrameBytesScatteredKB.Name,
             UE::_GCsvStat_FrameBytesScatteredKB.CategoryIndex,
             (float)((double)(ulonglong)param_1 * __real_3f50000000000000),Accumulate);
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).ScatteredSizeCounter, pTVar1->Value = pTVar1->Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).ScatteredSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).ScatteredSizeCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).ScatteredSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).ScatteredSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).ScatteredSizeCounter.CounterId,0),
               (this->Stats).ScatteredSizeCounter.Value);
  }
  return;
}

// OnDecompressComplete @ 142a870a0

void __thiscall
FFileIoStoreStats::OnDecompressComplete
          (FFileIoStoreStats *this,FFileIoStoreCompressedBlock *param_1)

{
  UE::FIoDispatcherFilesystemStats::OnDecompressComplete
            (&this->Stats,(ulonglong)param_1->CompressedSize,(ulonglong)param_1->UncompressedSize);
  return;
}

// OnDecompressQueued @ 142a870c0

void __thiscall
FFileIoStoreStats::OnDecompressQueued(FFileIoStoreStats *this,FFileIoStoreCompressedBlock *param_1)

{
  UE::FIoDispatcherFilesystemStats::OnDecompressQueued
            (&this->Stats,(ulonglong)param_1->CompressedSize,(ulonglong)param_1->UncompressedSize);
  return;
}

// OnFilesystemReadCompleted @ 142a870e0

void __thiscall
FFileIoStoreStats::OnFilesystemReadCompleted
          (FFileIoStoreStats *this,FFileIoStoreReadRequest *param_1)

{
  UE::FIoDispatcherFilesystemStats::OnFilesystemReadCompleted
            (&this->Stats,(ulong64)param_1->ContainerFilePartition,param_1->Offset,param_1->Size);
  return;
}

// OnFilesystemReadStarted @ 142a87100

void __thiscall
FFileIoStoreStats::OnFilesystemReadStarted(FFileIoStoreStats *this,FFileIoStoreReadRequest *param_1)

{
  UE::FIoDispatcherFilesystemStats::OnFilesystemReadStarted
            (&this->Stats,(ulong64)param_1->ContainerFilePartition,param_1->Offset,param_1->Size);
  return;
}

// OnFilesystemReadsCompleted @ 142a87120

void __thiscall
FFileIoStoreStats::OnFilesystemReadsCompleted
          (FFileIoStoreStats *this,FFileIoStoreReadRequestList *param_1)

{
  code *pcVar1;
  FFileIoStoreReadRequest *pFVar2;
  bool bVar3;
  FFileIoStoreReadRequest *pFVar4;
  FFileIoStoreReadRequest *pFVar5;
  
  pFVar5 = param_1->Head;
  if (pFVar5 != (FFileIoStoreReadRequest *)0x0) {
    pFVar2 = pFVar5->Next;
    while( true ) {
      pFVar4 = pFVar2;
      UE::FIoDispatcherFilesystemStats::OnFilesystemReadCompleted
                (&this->Stats,(ulong64)pFVar5->ContainerFilePartition,pFVar5->Offset,pFVar5->Size);
      if ((pFVar5->Next != pFVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Next == Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x107,
                             L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pFVar4 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar2 = pFVar4->Next;
      pFVar5 = pFVar4;
    }
  }
  return;
}

// OnFilesystemReadsStarted @ 142a871b0

void __thiscall
FFileIoStoreStats::OnFilesystemReadsStarted
          (FFileIoStoreStats *this,FFileIoStoreReadRequestList *param_1)

{
  code *pcVar1;
  FFileIoStoreReadRequest *pFVar2;
  bool bVar3;
  FFileIoStoreReadRequest *pFVar4;
  FFileIoStoreReadRequest *pFVar5;
  
  pFVar5 = param_1->Head;
  if (pFVar5 != (FFileIoStoreReadRequest *)0x0) {
    pFVar2 = pFVar5->Next;
    while( true ) {
      pFVar4 = pFVar2;
      UE::FIoDispatcherFilesystemStats::OnFilesystemReadStarted
                (&this->Stats,(ulong64)pFVar5->ContainerFilePartition,pFVar5->Offset,pFVar5->Size);
      if ((pFVar5->Next != pFVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Next == Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x107,
                             L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pFVar4 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar2 = pFVar4->Next;
      pFVar5 = pFVar4;
    }
  }
  return;
}

// OnReadRequestsCompleted @ 142a87270

void __thiscall
FFileIoStoreStats::OnReadRequestsCompleted
          (FFileIoStoreStats *this,FFileIoStoreReadRequestList *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFileIoStoreReadRequest *pFVar3;
  FFileIoStoreReadRequest *pFVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  pFVar3 = param_1->Head;
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = uVar6;
  if (pFVar3 != (FFileIoStoreReadRequest *)0x0) {
    pFVar4 = pFVar3->Next;
    while( true ) {
      uVar7 = uVar7 + pFVar3->Size;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if ((pFVar3->Next != pFVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Next == Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x107,
                             L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pFVar4 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar3 = pFVar4;
      pFVar4 = pFVar4->Next;
    }
  }
  UE::FIoDispatcherFilesystemStats::OnReadRequestsCompleted(&this->Stats,uVar7,(longlong)(int)uVar5)
  ;
  return;
}

// OnReadRequestsQueued @ 142a87310

void __thiscall
FFileIoStoreStats::OnReadRequestsQueued
          (FFileIoStoreStats *this,FFileIoStoreReadRequestList *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFileIoStoreReadRequest *pFVar3;
  FFileIoStoreReadRequest *pFVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  pFVar3 = param_1->Head;
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = uVar6;
  if (pFVar3 != (FFileIoStoreReadRequest *)0x0) {
    pFVar4 = pFVar3->Next;
    while( true ) {
      uVar7 = uVar7 + pFVar3->Size;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if ((pFVar3->Next != pFVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Current->Next == Next",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                             ,0x107,
                             L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (pFVar4 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar3 = pFVar4;
      pFVar4 = pFVar4->Next;
    }
  }
  UE::FIoDispatcherFilesystemStats::OnReadRequestsQueued(&this->Stats,uVar7,(longlong)(int)uVar5);
  return;
}

// OnTocMounted @ 142a873b0

void __thiscall FFileIoStoreStats::OnTocMounted(FFileIoStoreStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).TocMemoryCounter, pTVar1->Value = pTVar1->Value + param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).TocMemoryCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).TocMemoryCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).TocMemoryCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).TocMemoryCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).TocMemoryCounter.CounterId,0),
               (this->Stats).TocMemoryCounter.Value);
  }
  return;
}

// OnTocUnmounted @ 142a873c0

void __thiscall FFileIoStoreStats::OnTocUnmounted(FFileIoStoreStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  if ((param_1 != 0) &&
     (pTVar1 = &(this->Stats).TocMemoryCounter, pTVar1->Value = pTVar1->Value - param_1,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).TocMemoryCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar3 = FCountersTrace::OutputInitCounter
                        ((this->Stats).TocMemoryCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).TocMemoryCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).TocMemoryCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar4._2_2_ = 0;
        aVar4._0_2_ = uVar3;
        *paVar2 = aVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).TocMemoryCounter.CounterId,0),
               (this->Stats).TocMemoryCounter.Value);
  }
  return;
}

