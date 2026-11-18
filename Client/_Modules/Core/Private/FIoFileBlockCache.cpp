// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FIoFileBlockCache @ 14147e260

FIoFileBlockCache * __thiscall
UE::FIoFileBlockCache::FIoFileBlockCache
          (FIoFileBlockCache *this,FPlatformIoDispatcherStats *param_1)

{
  this->Stats = param_1;
  (this->CacheMemory).Ptr = (uchar *)0x0;
  *(undefined8 *)&this->CachedBlocks = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBlocks).field_0x34 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  (this->CacheLruHead).LruPrev = (FCachedBlock *)0x0;
  (this->CacheLruHead).LruNext = (FCachedBlock *)0x0;
  (this->CacheLruHead).Key = 0;
  (this->CacheLruHead).Buffer = (uchar *)0x0;
  (this->CacheLruTail).LruPrev = (FCachedBlock *)0x0;
  (this->CacheLruTail).LruNext = (FCachedBlock *)0x0;
  (this->CacheLruTail).Key = 0;
  (this->CacheLruTail).Buffer = (uchar *)0x0;
  this->CacheBlockSize = 0;
  return this;
}

// ~FIoFileBlockCache @ 141480f20

void __thiscall UE::FIoFileBlockCache::~FIoFileBlockCache(FIoFileBlockCache *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedBlocks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedBlocks);
  operator_delete__((this->CacheMemory).Ptr);
  return;
}

// Get @ 141497010

bool __thiscall UE::FIoFileBlockCache::Get(FIoFileBlockCache *this,FIoFileBlockRequest *param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  longlong lVar3;
  ulonglong uVar4;
  FPlatformIoDispatcherStats *pFVar5;
  FCachedBlock *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  int iVar11;
  atomic<unsigned_int> aVar12;
  atomic<unsigned_int> aVar13;
  undefined1 *puVar14;
  
  if ((this->CacheMemory).Ptr != (uchar *)0x0) {
    if (((param_1->BlockKey).field0_0x0.Hash == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileBlockRequest.BlockKey.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x1e8,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if (((param_1->BufferHandle).Handle == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileBlockRequest.BufferHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x1e9,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    uVar4 = (param_1->BlockKey).field0_0x0.Hash;
    if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
      puVar14 = *(undefined1 **)&(this->CachedBlocks).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->CachedBlocks).field_0x38;
      }
      iVar11 = *(int *)(puVar14 +
                       ((ulonglong)(*(int *)&(this->CachedBlocks).field_0x48 - 1) &
                       (uVar4 >> 0x20) * 0x17 + uVar4) * 4);
      if (iVar11 != -1) {
        do {
          lVar3 = *(longlong *)&this->CachedBlocks + (longlong)iVar11 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this->CachedBlocks + (longlong)iVar11 * 0x18) == uVar4) {
            if ((lVar3 != 0) &&
               (pFVar6 = *(FCachedBlock **)(lVar3 + 8), pFVar6 != (FCachedBlock *)0x0)) {
              pFVar6->LruPrev->LruNext = pFVar6->LruNext;
              pFVar6->LruNext->LruPrev = pFVar6->LruPrev;
              pFVar6->LruPrev = &this->CacheLruHead;
              pFVar6->LruNext = (this->CacheLruHead).LruNext;
              (this->CacheLruHead).LruNext = pFVar6;
              pFVar6->LruNext->LruPrev = pFVar6;
              if ((pFVar6->Buffer == (uchar *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CachedBlock->Buffer",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                     ,0x1fb,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              uVar4 = this->CacheBlockSize;
              pFVar5 = this->Stats;
              FCsvProfiler::RecordCustomStat
                        (&_GCsvStat_FrameBlockCacheHits.Name,
                         _GCsvStat_FrameBlockCacheHits.CategoryIndex,1,Accumulate);
              FCsvProfiler::RecordCustomStat
                        (&_GCsvStat_FrameBlockCacheHitKB.Name,
                         _GCsvStat_FrameBlockCacheHitKB.CategoryIndex,
                         (float)((double)uVar4 * __real_3f50000000000000),Accumulate);
              if ((uVar4 != 0) &&
                 (pTVar1 = &(pFVar5->Stats).BlockCacheHitSizeCounter,
                 pTVar1->Value = pTVar1->Value + uVar4, -1 < CountersChannel->Enabled)) {
                if ((pFVar5->Stats).BlockCacheHitSizeCounter.CounterId == (atomic<unsigned_int>)0x0)
                {
                  uVar10 = FCountersTrace::OutputInitCounter
                                     ((pFVar5->Stats).BlockCacheHitSizeCounter.CounterName,
                                      TraceCounterType_Int,
                                      (pFVar5->Stats).BlockCacheHitSizeCounter.CounterFlags & 0xf);
                  paVar2 = &(pFVar5->Stats).BlockCacheHitSizeCounter.CounterId;
                  LOCK();
                  if (*paVar2 == (atomic<unsigned_int>)0x0) {
                    aVar12._2_2_ = 0;
                    aVar12._0_2_ = uVar10;
                    *paVar2 = aVar12;
                  }
                  UNLOCK();
                }
                FCountersTrace::OutputSetValue
                          (SUB42((pFVar5->Stats).BlockCacheHitSizeCounter.CounterId,0),
                           (pFVar5->Stats).BlockCacheHitSizeCounter.Value);
              }
              memcpy(param_1->Buffer,pFVar6->Buffer,this->CacheBlockSize);
              return true;
            }
            break;
          }
          iVar11 = *(int *)(lVar3 + 0x10);
        } while (iVar11 != -1);
      }
    }
    uVar4 = this->CacheBlockSize;
    pFVar5 = this->Stats;
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameBlockCacheMisses.Name,_GCsvStat_FrameBlockCacheMisses.CategoryIndex,1
               ,Accumulate);
    FCsvProfiler::RecordCustomStat
              (&_GCsvStat_FrameBlockCacheMissKB.Name,_GCsvStat_FrameBlockCacheMissKB.CategoryIndex,
               (float)((double)uVar4 * __real_3f50000000000000),Accumulate);
    if ((uVar4 != 0) &&
       (pTVar1 = &(pFVar5->Stats).BlockCacheMissedSizeCounter, pTVar1->Value = pTVar1->Value + uVar4
       , -1 < CountersChannel->Enabled)) {
      if ((pFVar5->Stats).BlockCacheMissedSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
        uVar10 = FCountersTrace::OutputInitCounter
                           ((pFVar5->Stats).BlockCacheMissedSizeCounter.CounterName,
                            TraceCounterType_Int,
                            (pFVar5->Stats).BlockCacheMissedSizeCounter.CounterFlags & 0xf);
        paVar2 = &(pFVar5->Stats).BlockCacheMissedSizeCounter.CounterId;
        LOCK();
        if (*paVar2 == (atomic<unsigned_int>)0x0) {
          aVar13._2_2_ = 0;
          aVar13._0_2_ = uVar10;
          *paVar2 = aVar13;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((pFVar5->Stats).BlockCacheMissedSizeCounter.CounterId,0),
                 (pFVar5->Stats).BlockCacheMissedSizeCounter.Value);
    }
  }
  return false;
}

// Initialize @ 14149bf20

void __thiscall
UE::FIoFileBlockCache::Initialize(FIoFileBlockCache *this,ulong64 param_1,ulong64 param_2)

{
  TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *pTVar1;
  ulonglong uVar2;
  FCachedBlock *pFVar3;
  FCachedBlock *pFVar4;
  FCachedBlock *pFVar5;
  uchar *puVar6;
  FCachedBlock *pFVar7;
  FCachedBlock *pFVar8;
  longlong local_28 [2];
  
  this->CacheBlockSize = param_1;
  uVar2 = param_2 / param_1;
  if (uVar2 != 0) {
    pFVar3 = operator_new__(uVar2 * param_1);
    pFVar8 = (FCachedBlock *)0x0;
    pFVar7 = pFVar8;
    if (pFVar3 != (FCachedBlock *)0x0) {
      memset(pFVar3,0,uVar2 * param_1);
      pFVar7 = pFVar3;
    }
    pTVar1 = &this->CacheMemory;
    if (pTVar1 != (TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *)local_28) {
      puVar6 = pTVar1->Ptr;
      pTVar1->Ptr = (uchar *)pFVar7;
      operator_delete__(puVar6);
      pFVar7 = pFVar8;
    }
    operator_delete__(pFVar7);
    pFVar7 = &this->CacheLruHead;
    pFVar3 = pFVar8;
    do {
      pFVar4 = ::operator_new(0x20);
      pFVar5 = pFVar8;
      if (pFVar4 != (FCachedBlock *)0x0) {
        pFVar4->LruPrev = (FCachedBlock *)0x0;
        pFVar4->LruNext = (FCachedBlock *)0x0;
        pFVar4->Buffer = (uchar *)0x0;
        pFVar5 = pFVar4;
      }
      pFVar5->Key = 0xffffffffffffffff;
      puVar6 = pTVar1->Ptr + (longlong)pFVar3;
      pFVar3 = (FCachedBlock *)((longlong)&pFVar3->LruPrev + param_1);
      pFVar5->Buffer = puVar6;
      pFVar7->LruNext = pFVar5;
      pFVar5->LruPrev = pFVar7;
      uVar2 = uVar2 - 1;
      pFVar7 = pFVar5;
    } while (uVar2 != 0);
    pFVar5->LruNext = &this->CacheLruTail;
    (this->CacheLruTail).LruPrev = pFVar5;
  }
  return;
}

// Put @ 1414abde0

void __thiscall UE::FIoFileBlockCache::Put(FIoFileBlockCache *this,FIoFileBlockRequest *param_1)

{
  TCounter<__int64,0,__int64,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  ulonglong uVar3;
  FPlatformIoDispatcherStats *pFVar4;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  atomic<unsigned_int> aVar8;
  FCachedBlock *local_res18;
  ulong64 local_res20;
  ulong64 *local_28;
  FCachedBlock **local_20;
  
  if (((this->CacheMemory).Ptr != (uchar *)0x0) && (param_1->BytesUsed < param_1->Size)) {
    if (((param_1->BufferHandle).Handle == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileBlockRequest.BufferHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x209,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res18 = (this->CacheLruTail).LruPrev;
    if (local_res18 != &this->CacheLruHead) {
      if ((local_res18 == (FCachedBlock *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockToReplace",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                             ,0x20f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res20 = local_res18->Key;
      if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
        TSet<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
                    *)&this->CachedBlocks,(int)(local_res20 >> 0x20) * 0x17 + (int)local_res20,
                   &local_res20);
      }
      local_res18->Key = (ulong64)(param_1->BlockKey).field0_0x0;
      local_res18->LruPrev->LruNext = local_res18->LruNext;
      local_res18->LruNext->LruPrev = local_res18->LruPrev;
      local_res18->LruPrev = &this->CacheLruHead;
      local_res18->LruNext = (this->CacheLruHead).LruNext;
      local_res18->LruPrev->LruNext = local_res18;
      local_res18->LruNext->LruPrev = local_res18;
      if ((local_res18->Buffer == (uchar *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockToReplace->Buffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                             ,0x21c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy(local_res18->Buffer,param_1->Buffer,this->CacheBlockSize);
      local_28 = &local_res18->Key;
      local_20 = &local_res18;
      TSet<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,UE::FIoFileBlockCache::FCachedBlock_*_const_&>_>
                ((TSet<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
                  *)&this->CachedBlocks,
                 (TPairInitializer<unsigned___int64_const_&,UE::FIoFileBlockCache::FCachedBlock_*_const_&>
                  *)&stack0x00000008,(bool *)&local_28);
      uVar3 = this->CacheBlockSize;
      pFVar4 = this->Stats;
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameBlockCacheStores.Name,_GCsvStat_FrameBlockCacheStores.CategoryIndex
                 ,1,Accumulate);
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameBlockCacheStoresKB.Name,
                 _GCsvStat_FrameBlockCacheStoresKB.CategoryIndex,
                 (float)((double)uVar3 * __real_3f50000000000000),Accumulate);
      if ((uVar3 != 0) &&
         (pTVar1 = &(pFVar4->Stats).BlockCacheStoredSizeCounter,
         pTVar1->Value = pTVar1->Value + uVar3, -1 < CountersChannel->Enabled)) {
        if ((pFVar4->Stats).BlockCacheStoredSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
          uVar7 = FCountersTrace::OutputInitCounter
                            ((pFVar4->Stats).BlockCacheStoredSizeCounter.CounterName,
                             TraceCounterType_Int,
                             (pFVar4->Stats).BlockCacheStoredSizeCounter.CounterFlags & 0xf);
          paVar2 = &(pFVar4->Stats).BlockCacheStoredSizeCounter.CounterId;
          LOCK();
          if (*paVar2 == (atomic<unsigned_int>)0x0) {
            aVar8._2_2_ = 0;
            aVar8._0_2_ = uVar7;
            *paVar2 = aVar8;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (SUB42((pFVar4->Stats).BlockCacheStoredSizeCounter.CounterId,0),
                   (pFVar4->Stats).BlockCacheStoredSizeCounter.Value);
      }
    }
  }
  return;
}

