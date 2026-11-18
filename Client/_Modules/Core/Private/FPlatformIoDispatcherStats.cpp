// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// OnBytesScattered @ 1414a6560

void __thiscall
UE::FPlatformIoDispatcherStats::OnBytesScattered(FPlatformIoDispatcherStats *this,long64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesScatteredKB.Name,_GCsvStat_FrameBytesScatteredKB.CategoryIndex,
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

// OnDecodeRequestCompleted @ 1414a6630

void __thiscall
UE::FPlatformIoDispatcherStats::OnDecodeRequestCompleted
          (FPlatformIoDispatcherStats *this,FIoEncodedBlockRequest *param_1)

{
  FIoDispatcherFilesystemStats::OnDecompressComplete
            (&this->Stats,(ulonglong)param_1->BlockCompressedSize,
             (ulonglong)param_1->BlockUncompressedSize);
  return;
}

// OnDecodeRequestEnqueued @ 1414a6650

void __thiscall
UE::FPlatformIoDispatcherStats::OnDecodeRequestEnqueued
          (FPlatformIoDispatcherStats *this,FIoEncodedBlockRequest *param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ulong64 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)param_1->BlockCompressedSize;
  uVar8 = (ulonglong)param_1->BlockUncompressedSize;
  puVar3 = &(this->Stats).QueuedUncompressBytesIn;
  *puVar3 = *puVar3 + uVar5;
  puVar3 = &(this->Stats).QueuedUncompressBytesOut;
  *puVar3 = *puVar3 + uVar8;
  puVar3 = &(this->Stats).QueuedUncompressBlocks;
  *puVar3 = *puVar3 + 1;
  if ((uVar5 != 0) &&
     (pTVar1 = &(this->Stats).QueuedCompressedSizeCounter, pTVar1->Value = pTVar1->Value + uVar5,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).QueuedCompressedSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        ((this->Stats).QueuedCompressedSizeCounter.CounterName,TraceCounterType_Int,
                         (this->Stats).QueuedCompressedSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).QueuedCompressedSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar6._2_2_ = 0;
        aVar6._0_2_ = uVar4;
        *paVar2 = aVar6;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).QueuedCompressedSizeCounter.CounterId,0),
               (this->Stats).QueuedCompressedSizeCounter.Value);
  }
  if ((uVar8 != 0) &&
     (pTVar1 = &(this->Stats).QueuedUncompressedSizeCounter, pTVar1->Value = pTVar1->Value + uVar8,
     -1 < CountersChannel->Enabled)) {
    if ((this->Stats).QueuedUncompressedSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        ((this->Stats).QueuedUncompressedSizeCounter.CounterName,
                         TraceCounterType_Int,
                         (this->Stats).QueuedUncompressedSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).QueuedUncompressedSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar7._2_2_ = 0;
        aVar7._0_2_ = uVar4;
        *paVar2 = aVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).QueuedUncompressedSizeCounter.CounterId,0),
               (this->Stats).QueuedUncompressedSizeCounter.Value);
  }
  return;
}

// OnFileBlockCacheHit @ 1414a6a20

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockCacheHit
          (FPlatformIoDispatcherStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheHits.Name,_GCsvStat_FrameBlockCacheHits.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheHitKB.Name,_GCsvStat_FrameBlockCacheHitKB.CategoryIndex,
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

// OnFileBlockCacheMiss @ 1414a6b10

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockCacheMiss
          (FPlatformIoDispatcherStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheMisses.Name,_GCsvStat_FrameBlockCacheMisses.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheMissKB.Name,_GCsvStat_FrameBlockCacheMissKB.CategoryIndex,
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

// OnFileBlockCacheStore @ 1414a6c00

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockCacheStore
          (FPlatformIoDispatcherStats *this,ulong64 param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ushort uVar3;
  atomic<unsigned_int> aVar4;
  
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheStores.Name,_GCsvStat_FrameBlockCacheStores.CategoryIndex,1,
             Accumulate);
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBlockCacheStoresKB.Name,_GCsvStat_FrameBlockCacheStoresKB.CategoryIndex
             ,(float)((double)param_1 * __real_3f50000000000000),Accumulate);
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

// OnFileBlockCompleted @ 1414a6cf0

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockCompleted
          (FPlatformIoDispatcherStats *this,FIoFileBlockRequest *param_1)

{
  atomic<unsigned_int> *paVar1;
  TCounter<__int64,0,__int64,0> *pTVar2;
  atomic<unsigned___int64> *paVar3;
  ulonglong uVar4;
  ushort uVar5;
  atomic<unsigned_int> aVar6;
  atomic<unsigned_int> aVar7;
  
  uVar4 = param_1->Size;
  LOCK();
  paVar3 = &(this->Stats).QueuedFilesystemReadBytes;
  *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -uVar4);
  UNLOCK();
  LOCK();
  paVar3 = &(this->Stats).QueuedFilesystemReads;
  *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
  UNLOCK();
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesReadKB.Name,_GCsvStat_FrameBytesReadKB.CategoryIndex,
             (float)((double)uVar4 * __real_3f50000000000000),Accumulate);
  if (uVar4 != 0) {
    LOCK();
    (this->Stats).QueuedReadRequestsSizeCounter.Value =
         (atomic<__int64>)((longlong)(this->Stats).QueuedReadRequestsSizeCounter.Value + -uVar4);
    UNLOCK();
    if (CountersChannel->Enabled < 0) {
      if (uVar4 == 0) {
        return;
      }
    }
    else {
      if ((this->Stats).QueuedReadRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          ((this->Stats).QueuedReadRequestsSizeCounter.CounterName,
                           TraceCounterType_Int,
                           (this->Stats).QueuedReadRequestsSizeCounter.CounterFlags & 0xf);
        paVar1 = &(this->Stats).QueuedReadRequestsSizeCounter.CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar6._2_2_ = 0;
          aVar6._0_2_ = uVar5;
          *paVar1 = aVar6;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).QueuedReadRequestsSizeCounter.CounterId,0),
                 (long64)(this->Stats).QueuedReadRequestsSizeCounter.Value);
    }
    pTVar2 = &(this->Stats).CompletedReadRequestsSizeCounter;
    pTVar2->Value = pTVar2->Value + uVar4;
    if (-1 < CountersChannel->Enabled) {
      if ((this->Stats).CompletedReadRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
        uVar5 = FCountersTrace::OutputInitCounter
                          ((this->Stats).CompletedReadRequestsSizeCounter.CounterName,
                           TraceCounterType_Int,
                           (this->Stats).CompletedReadRequestsSizeCounter.CounterFlags & 0xf);
        paVar1 = &(this->Stats).CompletedReadRequestsSizeCounter.CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar7._2_2_ = 0;
          aVar7._0_2_ = uVar5;
          *paVar1 = aVar7;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).CompletedReadRequestsSizeCounter.CounterId,0),
                 (this->Stats).CompletedReadRequestsSizeCounter.Value);
    }
  }
  return;
}

// OnFileBlockMemoryAllocated @ 1414a6e20

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockMemoryAllocated
          (FPlatformIoDispatcherStats *this,uint param_1)

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

// OnFileBlockMemoryFreed @ 1414a6ea0

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockMemoryFreed
          (FPlatformIoDispatcherStats *this,uint param_1)

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

// OnFileBlockReadCompleted @ 1414a6f20

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockReadCompleted
          (FPlatformIoDispatcherStats *this,FIoFileBlockRequest *param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ulonglong uVar3;
  ushort uVar4;
  atomic<unsigned_int> aVar5;
  
  uVar3 = param_1->Size;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameFilesystemBytesReadKB.Name,
             _GCsvStat_FrameFilesystemBytesReadKB.CategoryIndex,
             (float)((double)uVar3 * __real_3f50000000000000),Accumulate);
  if ((uVar3 != 0) &&
     (pTVar1 = &(this->Stats).FileSystemCompletedRequestsSizeCounter,
     pTVar1->Value = pTVar1->Value + uVar3, -1 < CountersChannel->Enabled)) {
    if ((this->Stats).FileSystemCompletedRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar4 = FCountersTrace::OutputInitCounter
                        ((this->Stats).FileSystemCompletedRequestsSizeCounter.CounterName,
                         TraceCounterType_Int,
                         (this->Stats).FileSystemCompletedRequestsSizeCounter.CounterFlags & 0xf);
      paVar2 = &(this->Stats).FileSystemCompletedRequestsSizeCounter.CounterId;
      LOCK();
      if (*paVar2 == (atomic<unsigned_int>)0x0) {
        aVar5._2_2_ = 0;
        aVar5._0_2_ = uVar4;
        *paVar2 = aVar5;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (SUB42((this->Stats).FileSystemCompletedRequestsSizeCounter.CounterId,0),
               (this->Stats).FileSystemCompletedRequestsSizeCounter.Value);
  }
  return;
}

// OnFileBlockReadStarted @ 1414a6ff0

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockReadStarted
          (FPlatformIoDispatcherStats *this,FIoFileBlockRequest *param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ushort uVar7;
  atomic<unsigned_int> aVar8;
  
  uVar3 = param_1->Size;
  uVar4 = param_1->FileOffset;
  uVar5 = (param_1->FileHandle).Handle;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameFilesystemReads.Name,_GCsvStat_FrameFilesystemReads.CategoryIndex,1,
             Accumulate);
  if ((this->Stats).LastFileReadInfo.FileHandle == uVar5) {
    uVar6 = (this->Stats).LastFileReadInfo.Offset;
    if (uVar6 == uVar4) {
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameSequentialReads.Name,_GCsvStat_FrameSequentialReads.CategoryIndex,1
                 ,Accumulate);
    }
    else {
      FIoDispatcherFilesystemStats::OnSeek(&this->Stats,uVar6,uVar4);
    }
  }
  else {
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameHandleChangeSeeks.Name,_GCsvStat_FrameHandleChangeSeeks.CategoryIndex
               ,1,Accumulate);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameSeeks.Name,_GCsvStat_FrameSeeks.CategoryIndex,1,Accumulate);
    pTVar1 = &(this->Stats).FileSystemSeeksChangeHandleCountCounter;
    pTVar1->Value = pTVar1->Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if ((this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterId ==
          (atomic<unsigned_int>)0x0) {
        uVar7 = FCountersTrace::OutputInitCounter
                          ((this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterName,
                           TraceCounterType_Int,
                           (this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterFlags & 0xf)
        ;
        paVar2 = &(this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterId;
        LOCK();
        if (*paVar2 == (atomic<unsigned_int>)0x0) {
          aVar8._2_2_ = 0;
          aVar8._0_2_ = uVar7;
          *paVar2 = aVar8;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).FileSystemSeeksChangeHandleCountCounter.CounterId,0),
                 (this->Stats).FileSystemSeeksChangeHandleCountCounter.Value);
    }
  }
  (this->Stats).LastFileReadInfo.FileHandle = uVar5;
  (this->Stats).LastFileReadInfo.Offset = uVar3 + uVar4;
  return;
}

// OnFileBlockRequestDequeued @ 1414a7140

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockRequestDequeued
          (FPlatformIoDispatcherStats *this,FIoFileBlockRequest *param_1)

{
  return;
}

// OnFileBlockRequestEnqueued @ 1414a7150

void __thiscall
UE::FPlatformIoDispatcherStats::OnFileBlockRequestEnqueued
          (FPlatformIoDispatcherStats *this,FIoFileBlockRequest *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned___int64> *paVar2;
  ulong64 uVar3;
  ushort uVar4;
  atomic<unsigned_int> aVar5;
  
  uVar3 = param_1->Size;
  LOCK();
  paVar2 = &(this->Stats).QueuedFilesystemReadBytes;
  *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + uVar3);
  UNLOCK();
  LOCK();
  paVar2 = &(this->Stats).QueuedFilesystemReads;
  *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
  UNLOCK();
  if (uVar3 != 0) {
    LOCK();
    (this->Stats).QueuedReadRequestsSizeCounter.Value =
         (atomic<__int64>)((longlong)(this->Stats).QueuedReadRequestsSizeCounter.Value + uVar3);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if ((this->Stats).QueuedReadRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
        uVar4 = FCountersTrace::OutputInitCounter
                          ((this->Stats).QueuedReadRequestsSizeCounter.CounterName,
                           TraceCounterType_Int,
                           (this->Stats).QueuedReadRequestsSizeCounter.CounterFlags & 0xf);
        paVar1 = &(this->Stats).QueuedReadRequestsSizeCounter.CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar5._2_2_ = 0;
          aVar5._0_2_ = uVar4;
          *paVar1 = aVar5;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).QueuedReadRequestsSizeCounter.CounterId,0),
                 (long64)(this->Stats).QueuedReadRequestsSizeCounter.Value);
      return;
    }
  }
  return;
}

