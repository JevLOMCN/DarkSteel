// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 13

// FCacheJournalSimple @ 148cb3280

FCacheJournalSimple * __thiscall
StorageServer::FCacheJournalSimple::FCacheJournalSimple
          (FCacheJournalSimple *this,wchar_t *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *pTVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  IFileManager *pIVar12;
  FArchive *pFVar13;
  FCacheJournalSimple *pFVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 local_res8;
  wchar_t *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&___7FCacheJournalSimple_StorageServer__6B_;
  local_res10 = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DataLock,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FlushTaskLock,4000);
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->ChunkCacheEntries;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  this->FlushTask = (TTask<void>)0x0;
  this->bDirty = (atomic<bool>)0x0;
  *(undefined8 *)&(this->ChunkInfos).field_0x0 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x20 = 0;
  iVar18 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInfos).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkInfos).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->ChunkCacheEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkCacheEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkCacheEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x48 = 0;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId19,"FCacheJournalSimple::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSimple.cpp"
               ,0x13);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId19);
  }
  ::FString::operator=(&this->FileName,local_res10);
  this->FlushAtWriteCount = param_2;
  this->CurrentWriteCount = 0;
  LOCK();
  this->bDirty = (atomic<bool>)0x0;
  UNLOCK();
  pIVar12 = IFileManager::Get();
  if ((this->FileName).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(this->FileName).Data.AllocatorInstance.Data;
  }
  pFVar13 = (FArchive *)(**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,pwVar16,0);
  local_res8 = 1;
  if (pFVar13 != (FArchive *)0x0) {
    TSetPrivateFriend::
    Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
              (pFVar13,(TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                        *)&this->ChunkInfos);
    TSetPrivateFriend::
    Serialize<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
              (pFVar13,(TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                        *)pTVar2);
    (*(code *)**(undefined8 **)pFVar13)(pFVar13);
  }
  uVar10 = (uint)local_res8;
  puVar3 = &(this->ChunkCacheEntries).field_0x10;
  iVar4 = *(int *)&(this->ChunkCacheEntries).field_0x28;
  iVar19 = 0;
  iVar11 = iVar18;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar3;
    }
    uVar17 = *puVar21;
    iVar19 = 0;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      iVar19 = iVar19 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148cb348f;
      uVar17 = puVar21[lVar15 + 1];
    }
    uVar10 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    iVar11 = iVar19 + -1 + local_res18;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_148cb348f:
  uVar17 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar10,iVar18);
  uVar10 = uVar17 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ChunkCacheEntries).field_0x8 -
                       *(int *)&(this->ChunkCacheEntries).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FCacheJournalSimple *)(*pcVar7)();
    return pFVar14;
  }
  uVar5 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  if (uVar17 != uVar5) {
    puVar20 = *(undefined1 **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar10 = uVar10 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_148cb35b0;
      uVar17 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar17 = (int)lVar15 + -1 + uVar10;
    if ((int)uVar5 < (int)uVar17) {
      uVar17 = uVar5;
    }
  }
LAB_148cb35b0:
  while( true ) {
    if (*(int *)&(this->ChunkCacheEntries).field_0x8 - *(int *)&(this->ChunkCacheEntries).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    lVar15 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar17) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    lVar6 = *(longlong *)&pTVar2->field_0x0;
    __GTraceCounterZenJournalSimpleChunks.Value = __GTraceCounterZenJournalSimpleChunks.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSimpleChunks.CounterName,TraceCounterType_Int,
                           __GTraceCounterZenJournalSimpleChunks.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSimpleChunks.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSimpleChunks.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSimpleChunks.CounterId._0_2_,
                 __GTraceCounterZenJournalSimpleChunks.Value);
    }
    iVar18 = *(int *)(lVar15 * 0x68 + 0x18 + lVar6) - *(int *)(lVar15 * 0x68 + 0x44 + lVar6);
    if ((iVar18 != 0) &&
       (__GTraceCounterZenJournalSimpleEntries.Value =
             __GTraceCounterZenJournalSimpleEntries.Value + iVar18, -1 < CountersChannel->Enabled))
    {
      if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
        uVar9 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSimpleEntries.CounterName,TraceCounterType_Int,
                           __GTraceCounterZenJournalSimpleEntries.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSimpleEntries.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSimpleEntries.CounterId._0_2_ = uVar9;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSimpleEntries.CounterId._0_2_,
                 __GTraceCounterZenJournalSimpleEntries.Value);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return this;
}

// ~FCacheJournalSimple @ 148cb5fb0

void __thiscall StorageServer::FCacheJournalSimple::~FCacheJournalSimple(FCacheJournalSimple *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  TTask<void> TVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&___7FCacheJournalSimple_StorageServer__6B_;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ChunkCacheEntries).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkCacheEntries);
  *(undefined4 *)&(this->ChunkInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ChunkInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkInfos);
  TVar4 = this->FlushTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pFVar5 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FlushTaskLock);
                    /* WARNING: Could not recover jumptable at 0x000148cb605d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  return;
}

// AddEntry @ 148cbba10

bool __thiscall
StorageServer::FCacheJournalSimple::AddEntry
          (FCacheJournalSimple *this,FIoChunkId *param_1,FCacheEntry *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  TKeyInitializer<FIoChunkId_const_&> local_res8;
  FIoChunkId *local_res20;
  ulong64 local_48;
  ulong64 local_40;
  ulong64 *local_38;
  FCacheEntry *local_30;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
             *)TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
               ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
                       *)&this->ChunkCacheEntries,param_1);
  if (this_00 ==
      (TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
       *)0x0) {
    local_res20 = param_1;
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FIoChunkId_const_&>_>
              ((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                *)&this->ChunkCacheEntries,&local_res8,(bool *)&local_res20);
    __GTraceCounterZenJournalSimpleChunks.Value = __GTraceCounterZenJournalSimpleChunks.Value + 1;
    this_00 = (TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
               *)(*(longlong *)&this->ChunkCacheEntries +
                 (longlong)(int)local_res8.Key * 0x68 + 0x10);
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
        uVar4 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSimpleChunks.CounterName,TraceCounterType_Int,
                           __GTraceCounterZenJournalSimpleChunks.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSimpleChunks.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSimpleChunks.CounterId._0_2_ = uVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSimpleChunks.CounterId._0_2_,
                 __GTraceCounterZenJournalSimpleChunks.Value);
    }
  }
  local_40 = param_2->ChunkSize;
  local_48 = param_2->ChunkOffset;
  uVar9 = (int)(local_40 >> 0x20) * 0x17 + (int)local_40;
  uVar7 = ((int)(local_48 >> 0x20) * 0x17 - uVar9) + (int)local_48 ^ uVar9 >> 0xd;
  uVar6 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
  uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 10;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar8 = (this_00->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar1 = *(int *)((longlong)FVar8 +
                    (ulonglong)(this_00->HashSize - 1U & ((uVar9 - uVar6) - uVar7 ^ uVar6 >> 0xf)) *
                    4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)&this_00->Elements;
      do {
        lVar5 = (longlong)iVar1;
        if ((*(ulong64 *)(lVar2 + lVar5 * 0x50) == local_48) &&
           (*(ulong64 *)(lVar2 + 8 + lVar5 * 0x50) == local_40)) {
          if (iVar1 != -1) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return false;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x48 + lVar5 * 0x50);
      } while (iVar1 != -1);
    }
  }
  local_38 = &local_48;
  local_30 = param_2;
  TSet<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TInterval<unsigned___int64>_const_&,StorageServer::FCacheEntry_const_&>_>
            (this_00,(TPairInitializer<TInterval<unsigned___int64>_const_&,StorageServer::FCacheEntry_const_&>
                      *)&local_res8,(bool *)&local_38);
  __GTraceCounterZenJournalSimpleEntries.Value = __GTraceCounterZenJournalSimpleEntries.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSimpleEntries.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSimpleEntries.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSimpleEntries.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSimpleEntries.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSimpleEntries.CounterId._0_2_,
               __GTraceCounterZenJournalSimpleEntries.Value);
  }
  LOCK();
  this->bDirty = (atomic<bool>)0x1;
  UNLOCK();
  uVar3 = this->CurrentWriteCount;
  this->CurrentWriteCount = uVar3 + 1;
  if ((this->FlushAtWriteCount < uVar3) && (this->FlushAtWriteCount != 0)) {
    this->CurrentWriteCount = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(this->_padding_ + 8))(this,0);
    return true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// Flush @ 148cc53e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall StorageServer::FCacheJournalSimple::Flush(FCacheJournalSimple *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTask<void> *pTVar1;
  int *piVar2;
  int iVar3;
  TTask<void> TVar4;
  TTask<void> this_00;
  undefined8 *puVar5;
  bool bVar6;
  longlong local_18 [2];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId48,"FCacheJournalSimple::Flush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSimple.cpp"
               ,0x30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId48);
  }
  if (param_1) {
    FlushImmediate(this);
    goto LAB_148cc555e;
  }
  if (this->bDirty == (atomic<bool>)0x0) goto LAB_148cc555e;
  lpCriticalSection = &this->FlushTaskLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->FlushTask;
  if ((this->FlushTask == (TTask<void>)0x0) || (*(char *)((longlong)this->FlushTask + 0xd0) != '\0')
     ) {
    this_00 = (TTask<void>)
              TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (TTask<void>)0x0) {
      this_00 = (TTask<void>)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase((FTaskBase *)this_00,2,true);
      *(undefined ***)this_00 =
           &UE::Tasks::Private::
            TExecutableTaskBase<`StorageServer::FCacheJournalSimple::Flush'::`13'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                ((FTaskBase *)this_00,L"CacheJournalFlush",Default,None,None);
      ((FTaskBase *)((longlong)this_00 + 0xd8))->_padding_ = (longlong)this;
      *(undefined ***)this_00 =
           &UE::Tasks::Private::
            TExecutableTask<`StorageServer::FCacheJournalSimple::Flush'::`13'::<lambda_1>_>::
            _vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    if (pTVar1 == (TTask<void> *)local_18) {
      if (this_00 != (TTask<void>)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)this_00 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar5 = *(undefined8 **)this_00;
          goto LAB_148cc5549;
        }
      }
    }
    else {
      TVar4 = *pTVar1;
      *pTVar1 = this_00;
      if (TVar4 != (TTask<void>)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)TVar4 + 0x30);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          puVar5 = *(undefined8 **)TVar4;
          this_00 = TVar4;
LAB_148cc5549:
          (*(code *)*puVar5)(this_00,1);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_148cc555e:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FlushImmediate @ 148cc5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall StorageServer::FCacheJournalSimple::FlushImmediate(FCacheJournalSimple *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  IFileManager *pIVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined1 local_ec [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_98;
  TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId232,"FCacheJournalSimple::FlushImmediate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\Cache\\CacheJournalSimple.cpp"
               ,0xe8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId232);
  }
  if (&this->DataLock == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  if (this->bDirty != (atomic<bool>)0x0) {
    pIVar8 = IFileManager::Get();
    if ((this->FileName).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->FileName).Data.AllocatorInstance.Data;
    }
    local_ec._4_8_ = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,pwVar12,0);
    if ((FArchive *)local_ec._4_8_ != (FArchive *)0x0) {
      iStack_118 = 0;
      local_100 = 0;
      local_120 = &this->ChunkCacheEntries;
      local_88.Elements._0_8_ = 0;
      local_110 = &(this->ChunkCacheEntries).field_0x10;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      iVar7 = *(int *)&(this->ChunkCacheEntries).field_0x28;
      uStack_114 = 1;
      iStack_104 = local_100;
      if (iVar7 != 0) {
        puVar16 = *(uint **)&(this->ChunkCacheEntries).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)local_110;
        }
        uVar19 = *puVar16;
        local_100 = 0;
        iStack_118 = 0;
        while (uVar19 == 0) {
          lVar10 = (longlong)iStack_118;
          local_100 = local_100 + 0x20;
          iStack_118 = iStack_118 + 1;
          iStack_104 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118)
          goto LAB_148cc6181;
          uVar19 = puVar16[lVar10 + 1];
        }
        uStack_114 = -uVar19 & uVar19;
        uVar1 = (ulonglong)uStack_114 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_f0 = (int)lVar10;
        iStack_104 = local_100 + -1 + local_f0;
        if (iVar7 < iStack_104) {
          iStack_104 = iVar7;
        }
      }
LAB_148cc6181:
      iStack_f8 = *(int *)&(this->ChunkCacheEntries).field_0x8 -
                  *(int *)&(this->ChunkCacheEntries).field_0x34;
      uVar19 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
      uStack_108 = 0xffffffff;
      TStack_d8.CurrentBitIndex = iStack_104;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      TStack_d8._padding_ = CONCAT44(uStack_114,iStack_118);
      uVar18 = uVar19 & 0xffffffe0;
      iVar14 = (int)uVar19 >> 5;
      TStack_d8._28_4_ = iStack_104;
      TStack_d8.BaseBitIndex = local_100;
      uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
      iStack_fc = iStack_104;
      local_ec._12_8_ = local_120;
      TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
      if ((((int)uVar19 < 0) || (iVar7 < (int)uVar19)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
      if (uVar19 != uVar2) {
        puVar15 = *(undefined1 **)&(this->ChunkCacheEntries).field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &(this->ChunkCacheEntries).field_0x10;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar19 == 0) {
          lVar10 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar19 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_148cc629e;
          uVar19 = *(uint *)(puVar15 + lVar10 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar19 = (int)lVar10 + -1 + uVar18;
        if ((int)uVar2 < (int)uVar19) {
          uVar19 = uVar2;
        }
      }
LAB_148cc629e:
      while( true ) {
        uVar5 = local_ec._12_8_;
        if (*(int *)((undefined1 *)local_ec._12_8_ + 8) -
            *(int *)((undefined1 *)local_ec._12_8_ + 0x34) != (int)uStack_b8) {
          `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        uVar4 = local_ec._4_8_;
        if (((TStack_d8.CurrentBitIndex == uVar19) &&
            (TStack_d8.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkCacheEntries).field_0x10)) &&
           ((TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
             *)uVar5 == &this->ChunkCacheEntries)) break;
        plVar17 = (longlong *)
                  ((longlong)TStack_d8.CurrentBitIndex * 0x68 + *(longlong *)(undefined1 *)uVar5);
        uVar18 = *(uint *)(plVar17 + 1);
        local_98 = *plVar17;
        uVar2 = (uint)((ulonglong)local_98 >> 0x20);
        if (*(int *)&(this->ChunkInfos).field_0x8 != *(int *)&(this->ChunkInfos).field_0x34) {
          puVar15 = *(undefined1 **)&(this->ChunkInfos).field_0x40;
          puVar13 = &(this->ChunkInfos).field_0x38;
          if (puVar15 != (undefined1 *)0x0) {
            puVar13 = puVar15;
          }
          iVar7 = *(int *)(puVar13 +
                          (ulonglong)
                          (*(int *)&(this->ChunkInfos).field_0x48 - 1U &
                          (uVar18 >> 0x18) + 0x58a2c485 +
                          ((((((uVar2 >> 8 & 0xff) * 0x21 +
                              ((ushort)((ulonglong)local_98 >> 0x30) & 0xff)) * 0x21 +
                             (uint)(byte)((ulonglong)local_98 >> 0x38)) * 0x21 + (uVar18 & 0xff)) *
                            0x21 + (uVar18 >> 8 & 0xff)) * 0x21 + (uVar18 >> 0x10 & 0xff)) * 0x21 +
                          (((uint)((ulonglong)local_98 >> 8) & 0xff) * 0x21 +
                          ((uint)((ulonglong)local_98 >> 0x10) & 0xff)) * 0x40a9121 +
                          ((uint)((ulonglong)local_98 >> 0x18) & 0xff) * 0x747c7101 +
                          (uVar2 & 0xff) * -0x13be2b1f + ((uint)local_98 & 0xff) * 0x30f35d61) * 4);
          if (iVar7 != -1) {
            do {
              plVar9 = (longlong *)((longlong)iVar7 * 0x40 + *(longlong *)&this->ChunkInfos);
              if ((*plVar9 == *plVar17) && ((int)plVar9[1] == (int)plVar17[1])) {
                plVar11 = plVar9 + 2;
                if (plVar9 == (longlong *)0x0) {
                  plVar11 = (longlong *)0x0;
                }
                if (plVar11 != (longlong *)0x0) {
                  local_b0 = plVar17;
                  local_a8 = plVar11;
                  TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
                            (&local_88,
                             (TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
                              *)local_ec,(bool *)&local_b0);
                }
                break;
              }
              iVar7 = (int)plVar9[7];
            } while (iVar7 != -1);
          }
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
      TSetPrivateFriend::
      Serialize<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                ((FArchive *)local_ec._4_8_,&local_88);
      TSetPrivateFriend::
      Serialize<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                ((FArchive *)uVar4,
                 (TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                  *)&this->ChunkCacheEntries);
      (**(code **)(*(longlong *)uVar4 + 0x208))(uVar4);
      (*(code *)**(undefined8 **)uVar4)(uVar4,1);
      LOCK();
      this->bDirty = (atomic<bool>)0x0;
      UNLOCK();
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Invalidate @ 148ccb920

void __thiscall
StorageServer::FCacheJournalSimple::Invalidate(FCacheJournalSimple *this,FIoChunkId *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
  *pTVar6;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  __GTraceCounterZenJournalSimpleInvalidated.Value =
       __GTraceCounterZenJournalSimpleInvalidated.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterZenJournalSimpleInvalidated.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSimpleInvalidated.CounterName,TraceCounterType_Int
                         ,__GTraceCounterZenJournalSimpleInvalidated.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSimpleInvalidated.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSimpleInvalidated.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSimpleInvalidated.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSimpleInvalidated.CounterId._0_2_,
               __GTraceCounterZenJournalSimpleInvalidated.Value);
  }
  pTVar6 = TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
           ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
                   *)&this->ChunkCacheEntries,param_1);
  if (pTVar6 != (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
                 *)0x0) {
    __GTraceCounterZenJournalSimpleChunks.Value = __GTraceCounterZenJournalSimpleChunks.Value + -1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
        uVar4 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSimpleChunks.CounterName,TraceCounterType_Int,
                           __GTraceCounterZenJournalSimpleChunks.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSimpleChunks.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSimpleChunks.CounterId._0_2_ = uVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSimpleChunks.CounterId._0_2_,
                 __GTraceCounterZenJournalSimpleChunks.Value);
    }
    iVar5 = *(int *)&pTVar6->field_0x8 - *(int *)&pTVar6->field_0x34;
    if ((iVar5 != 0) &&
       (__GTraceCounterZenJournalSimpleEntries.Value =
             __GTraceCounterZenJournalSimpleEntries.Value - iVar5, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
        uVar4 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterZenJournalSimpleEntries.CounterName,TraceCounterType_Int,
                           __GTraceCounterZenJournalSimpleEntries.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterZenJournalSimpleEntries.CounterId._2_2_ = 0;
          __GTraceCounterZenJournalSimpleEntries.CounterId._0_2_ = uVar4;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterZenJournalSimpleEntries.CounterId._0_2_,
                 __GTraceCounterZenJournalSimpleEntries.Value);
    }
  }
  TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
  ::Remove((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
            *)&this->ChunkInfos,param_1);
  if (*(int *)&(this->ChunkCacheEntries).field_0x8 != *(int *)&(this->ChunkCacheEntries).field_0x34)
  {
    uVar2 = *(uint *)(param_1->Id + 8);
    uVar1 = *(undefined8 *)param_1->Id;
    uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FIoChunkId>
              ((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                *)&this->ChunkCacheEntries,
               (uVar2 >> 0x18) + 0x58a2c485 +
               ((((((uVar3 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar1 >> 0x30) & 0xff)) * 0x21
                  + (uint)(byte)((ulonglong)uVar1 >> 0x38)) * 0x21 + (uVar2 & 0xff)) * 0x21 +
                (uVar2 >> 8 & 0xff)) * 0x21 + (uVar2 >> 0x10 & 0xff)) * 0x21 +
               (((uint)((ulonglong)uVar1 >> 8) & 0xff) * 0x21 +
               ((uint)((ulonglong)uVar1 >> 0x10) & 0xff)) * 0x40a9121 + (uVar3 & 0xff) * -0x13be2b1f
               + ((uint)((ulonglong)uVar1 >> 0x18) & 0xff) * 0x747c7101 +
               ((uint)uVar1 & 0xff) * 0x30f35d61,param_1);
  }
  LOCK();
  this->bDirty = (atomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000148ccbbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// InvalidateAll @ 148ccc240

void __thiscall StorageServer::FCacheJournalSimple::InvalidateAll(FCacheJournalSimple *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
  *this_00;
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->ChunkInfos;
  bVar3 = 1 < *(int *)&(this->ChunkInfos).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ChunkInfos).field_0xc;
  *(undefined4 *)&(this->ChunkInfos).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChunkInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkInfos).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChunkInfos).field_0x2c;
  *(undefined4 *)&(this->ChunkInfos).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChunkInfos).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkInfos).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChunkInfos).field_0x48 = 1;
    TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ChunkCacheEntries;
  bVar3 = 1 < *(int *)&(this->ChunkCacheEntries).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->ChunkCacheEntries).field_0x8);
  puVar1 = &(this->ChunkCacheEntries).field_0xc;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x34 = 0;
  iVar2 = *(int *)&(this->ChunkCacheEntries).field_0x2c;
  *(undefined4 *)&(this->ChunkCacheEntries).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ChunkCacheEntries).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChunkCacheEntries).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ChunkCacheEntries).field_0x48 = 1;
    TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  if ((__GTraceCounterZenJournalSimpleChunks.Value != 0) &&
     (__GTraceCounterZenJournalSimpleChunks.Value = 0, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSimpleChunks.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSimpleChunks.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSimpleChunks.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSimpleChunks.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSimpleChunks.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSimpleChunks.CounterId._0_2_,
               __GTraceCounterZenJournalSimpleChunks.Value);
  }
  if ((__GTraceCounterZenJournalSimpleEntries.Value != 0) &&
     (__GTraceCounterZenJournalSimpleEntries.Value = 0, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenJournalSimpleEntries.CounterName,TraceCounterType_Int,
                         __GTraceCounterZenJournalSimpleEntries.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenJournalSimpleEntries.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenJournalSimpleEntries.CounterId._2_2_ = 0;
        __GTraceCounterZenJournalSimpleEntries.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenJournalSimpleEntries.CounterId._0_2_,
               __GTraceCounterZenJournalSimpleEntries.Value);
  }
  LOCK();
  this->bDirty = (atomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000148ccc48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IterateCacheEntries @ 148ccd190

void __thiscall
StorageServer::FCacheJournalSimple::IterateCacheEntries
          (FCacheJournalSimple *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheEntry_const_&)> *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  int iVar5;
  code *pcVar6;
  TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheEntry_const_&)> *pTVar7;
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheEntry_const_&)> *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_12c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  lpCriticalSection = &this->DataLock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->ChunkCacheEntries).field_0x10;
  iVar16 = 0;
  iVar5 = *(int *)&(this->ChunkCacheEntries).field_0x28;
  pTVar2 = &this->ChunkCacheEntries;
  iVar19 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar19 = iVar19 + 0x20;
      iVar16 = iVar16 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_148ccd270;
      uVar15 = puVar20[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar19 + -1 + (int)lVar13;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_148ccd270:
  uVar15 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar10,iVar16);
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar19;
  uStack_78 = CONCAT44(uStack_12c,
                       *(int *)&(this->ChunkCacheEntries).field_0x8 -
                       *(int *)&(this->ChunkCacheEntries).field_0x34);
  local_res20 = uVar15;
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar7 = local_res10;
  uVar10 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar10;
      local_res20 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_148ccd3a0;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar21;
    local_res20 = uVar15;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
      local_res20 = uVar10;
    }
  }
LAB_148ccd3a0:
  do {
    pTVar8 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_98.CurrentBitIndex == uVar15) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    {
                    /* WARNING: Could not recover jumptable at 0x000148ccd655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    iVar16 = 0;
    iVar19 = 0;
    lVar13 = (longlong)TStack_98.CurrentBitIndex * 0x68 + *(longlong *)pTVar8;
    uVar10 = 1;
    iVar5 = *(int *)(lVar13 + 0x38);
    pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x20);
    iVar12 = 0;
    if (iVar5 != 0) {
      pTVar18 = pTVar4;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
      }
      uVar15 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      while (uVar15 == 0) {
        lVar14 = (longlong)iVar16;
        iVar19 = iVar19 + 0x20;
        iVar16 = iVar16 + 1;
        iVar12 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_148ccd46f;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar10 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = iVar19 + -1 + (int)lVar14;
      if (iVar5 < iVar12) {
        iVar12 = iVar5;
      }
    }
LAB_148ccd46f:
    uVar15 = *(uint *)(lVar13 + 0x38);
    uVar21 = uVar15 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uVar10,iVar16);
    TStack_c8.CurrentBitIndex = iVar12;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_c8._28_4_ = iVar11;
    TStack_c8.BaseBitIndex = iVar19;
    uStack_a8 = CONCAT44(uStack_d4,*(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x44));
    TStack_c8.Array = pTVar4;
    if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = *(uint *)(lVar13 + 0x38);
    if (uVar15 != uVar10) {
      pTVar18 = pTVar4;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar14 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_148ccd590;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar15 = (int)lVar14 + -1 + uVar21;
      if ((int)uVar10 < (int)uVar15) {
        uVar15 = uVar10;
      }
    }
LAB_148ccd590:
    while( true ) {
      if (*(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x44) != (int)uStack_a8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_c8.CurrentBitIndex == uVar15) && (TStack_c8.Array == pTVar4)) break;
      (**(code **)pTVar7)(*(undefined8 *)&pTVar7->field_0x8,lVar13);
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    uVar15 = local_res20;
  } while( true );
}

// IterateCacheEntriesForChunkId @ 148ccd7d0

void __thiscall
StorageServer::FCacheJournalSimple::IterateCacheEntriesForChunkId
          (FCacheJournalSimple *this,FIoChunkId *param_1,
          TFunctionRef<void___cdecl(StorageServer::FCacheEntry_const_&)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar8 = TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
           ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
                   *)&this->ChunkCacheEntries,param_1);
  if (pTVar8 == (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
                 *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    iVar3 = *(int *)&pTVar8->field_0x28;
    iVar11 = 0;
    puVar1 = &pTVar8->field_0x10;
    uVar6 = 1;
    iVar13 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)&pTVar8->field_0x20;
      if (*(uint **)&pTVar8->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar11 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148ccd8ce;
        uVar10 = puVar14[lVar9 + 1];
      }
      uVar6 = -uVar10 & uVar10;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (int)lVar9 + -1 + iVar13;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_148ccd8ce:
    uVar10 = *(uint *)&pTVar8->field_0x28;
    uVar15 = uVar10 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uVar6,iVar11);
    TStack_68.CurrentBitIndex = iVar7;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_68._28_4_ = iVar7;
    TStack_68.BaseBitIndex = iVar13;
    uStack_48 = CONCAT44(uStack_74,*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34);
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&pTVar8->field_0x28;
    if (uVar10 != uVar6) {
      puVar12 = *(undefined1 **)&pTVar8->field_0x20;
      if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148ccd9e0;
        uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_148ccd9e0:
    while( true ) {
      if (*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<TInterval<unsigned___int64>,StorageServer::FCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_68.CurrentBitIndex == uVar10) &&
         (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      (**(code **)param_2)
                (*(undefined8 *)&param_2->field_0x8,
                 *(longlong *)pTVar8 + 0x10 + (longlong)TStack_68.CurrentBitIndex * 0x50);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IterateChunkIds @ 148ccdd40

void __thiscall
StorageServer::FCacheJournalSimple::IterateChunkIds
          (FCacheJournalSimple *this,
          TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  undefined1 local_res8 [8];
  TFunctionRef<void___cdecl(FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&)> *local_res10
  ;
  int local_res18;
  LPCRITICAL_SECTION local_res20;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_60;
  undefined1 local_54;
  
  local_res20 = (LPCRITICAL_SECTION)&this->DataLock;
  local_res10 = param_1;
  if (local_res20 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res20);
  local_70 = 0;
  puVar1 = &(this->ChunkCacheEntries).field_0x10;
  local_60 = 0;
  local_54 = 0;
  iVar8 = *(int *)&(this->ChunkCacheEntries).field_0x28;
  iVar13 = 0;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar18 = *puVar16;
    iVar15 = 0;
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148ccde1f;
      uVar18 = puVar16[lVar10 + 1];
    }
    uVar6 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar7 = local_res18 + -1 + iVar15;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_148ccde1f:
  uVar18 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  uVar19 = uVar18 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar6,iVar13);
  TStack_b0.CurrentBitIndex = iVar7;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar18 >> 5;
  TStack_b0._28_4_ = iVar7;
  TStack_b0.BaseBitIndex = iVar15;
  uStack_90 = CONCAT44(uStack_bc,
                       *(int *)&(this->ChunkCacheEntries).field_0x8 -
                       *(int *)&(this->ChunkCacheEntries).field_0x34);
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar8 < (int)uVar18)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = local_res10;
  uVar6 = *(uint *)&(this->ChunkCacheEntries).field_0x28;
  if (uVar18 != uVar6) {
    puVar14 = *(undefined1 **)&(this->ChunkCacheEntries).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148ccdf2e;
      uVar18 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar18 = (int)lVar10 + -1 + uVar19;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_148ccdf2e:
  plVar20 = (longlong *)0x0;
  do {
    if (*(int *)&(this->ChunkCacheEntries).field_0x8 - *(int *)&(this->ChunkCacheEntries).field_0x34
        != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_b0.CurrentBitIndex == uVar18) &&
       (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      LeaveCriticalSection(local_res20);
      return;
    }
    plVar17 = (longlong *)
              ((longlong)TStack_b0.CurrentBitIndex * 0x68 + *(longlong *)&this->ChunkCacheEntries);
    uVar6 = *(uint *)(plVar17 + 1);
    local_88 = *plVar17;
    uVar19 = (uint)((ulonglong)local_88 >> 0x20);
    plVar9 = plVar20;
    if (*(int *)&(this->ChunkInfos).field_0x8 != *(int *)&(this->ChunkInfos).field_0x34) {
      puVar14 = *(undefined1 **)&(this->ChunkInfos).field_0x40;
      puVar12 = &(this->ChunkInfos).field_0x38;
      if (puVar14 != (undefined1 *)0x0) {
        puVar12 = puVar14;
      }
      iVar8 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->ChunkInfos).field_0x48 - 1U &
                      (uVar6 >> 0x18) + 0x58a2c485 +
                      ((((((uVar19 >> 8 & 0xff) * 0x21 +
                          ((ushort)((ulonglong)local_88 >> 0x30) & 0xff)) * 0x21 +
                         (uint)(byte)((ulonglong)local_88 >> 0x38)) * 0x21 + (uVar6 & 0xff)) * 0x21
                       + (uVar6 >> 8 & 0xff)) * 0x21 + (uVar6 >> 0x10 & 0xff)) * 0x21 +
                      (((uint)((ulonglong)local_88 >> 8) & 0xff) * 0x21 +
                      ((uint)((ulonglong)local_88 >> 0x10) & 0xff)) * 0x40a9121 +
                      (uVar19 & 0xff) * -0x13be2b1f +
                      ((uint)((ulonglong)local_88 >> 0x18) & 0xff) * 0x747c7101 +
                      ((uint)local_88 & 0xff) * 0x30f35d61) * 4);
      if (iVar8 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar8 * 0x40 + *(longlong *)&this->ChunkInfos);
          if ((*plVar9 == *plVar17) && ((int)plVar9[1] == (int)plVar17[1])) break;
          iVar8 = (int)plVar9[7];
          plVar9 = plVar20;
        } while (iVar8 != -1);
      }
    }
    plVar11 = plVar9 + 2;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = plVar20;
    }
    plVar9 = &local_78;
    if (plVar11 != (longlong *)0x0) {
      plVar9 = plVar11;
    }
    (**(code **)pTVar4)(*(undefined8 *)&pTVar4->field_0x8,plVar17,plVar9);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// SetChunkInfo @ 148cddee0

bool __thiscall
StorageServer::FCacheJournalSimple::SetChunkInfo
          (FCacheJournalSimple *this,FIoChunkId *param_1,TOptional<unsigned___int64> *param_2,
          TOptional<__int64> *param_3,TOptional<int> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FCacheChunkInfo *pFVar1;
  bool bVar2;
  FIoChunkId *local_58;
  TOptional<unsigned___int64> *local_50;
  TOptional<unsigned___int64> local_48;
  TOptional<__int64> local_38;
  TOptional<int> local_28 [2];
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
             ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                     *)&this->ChunkInfos,param_1);
    if (pFVar1 == (FCacheChunkInfo *)0x0) {
      local_48.bIsSet = false;
      local_38.bIsSet = false;
      local_28[0].bIsSet = false;
      if ((param_2->bIsSet != false) && (param_2 != &local_48)) {
        local_48.TypedValue = param_2->TypedValue;
        local_48.bIsSet = true;
      }
      if ((param_3->bIsSet != false) && (param_3 != &local_38)) {
        local_38.TypedValue = param_3->TypedValue;
        local_38.bIsSet = true;
      }
      if ((param_4->bIsSet != false) && (param_4 != local_28)) {
        local_28[0].TypedValue = param_4->TypedValue;
        local_28[0].bIsSet = true;
      }
      local_50 = &local_48;
      local_58 = param_1;
      TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>_>
                ((TSet<TTuple<FIoChunkId,StorageServer::FCacheChunkInfo>,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>,FDefaultSetAllocator>
                  *)&this->ChunkInfos,
                 (TPairInitializer<FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&> *)
                 &stack0x00000008,(bool *)&local_58);
      LOCK();
      this->bDirty = (atomic<bool>)0x1;
      UNLOCK();
      bVar2 = true;
    }
    else {
      LOCK();
      this->bDirty = (atomic<bool>)0x1;
      UNLOCK();
      bVar2 = true;
      if (param_2->bIsSet != false) {
        if ((pFVar1->ModTag).bIsSet != false) {
          bVar2 = (pFVar1->ModTag).TypedValue == param_2->TypedValue;
        }
        if ((FCacheChunkInfo *)param_2 != pFVar1) {
          (pFVar1->ModTag).TypedValue = param_2->TypedValue;
          (pFVar1->ModTag).bIsSet = true;
        }
      }
      if ((param_3->bIsSet != false) && (param_3 != &pFVar1->RawSize)) {
        (pFVar1->RawSize).TypedValue = param_3->TypedValue;
        (pFVar1->RawSize).bIsSet = true;
      }
      if ((param_4->bIsSet != false) && (param_4 != &pFVar1->RawBlockSize)) {
        (pFVar1->RawBlockSize).TypedValue = param_4->TypedValue;
        (pFVar1->RawBlockSize).bIsSet = true;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TryGetChunkInfo @ 148ce1650

bool __thiscall
StorageServer::FCacheJournalSimple::TryGetChunkInfo
          (FCacheJournalSimple *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FCacheChunkInfo *pFVar1;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
           ::Find((TMapBase<FIoChunkId,StorageServer::FCacheChunkInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,StorageServer::FCacheChunkInfo,0>_>
                   *)&this->ChunkInfos,param_1);
  if (pFVar1 != (FCacheChunkInfo *)0x0) {
    FCacheChunkInfo::operator=(param_2,pFVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar1 != (FCacheChunkInfo *)0x0;
}

// TryGetEntry @ 148ce1820

bool __thiscall
StorageServer::FCacheJournalSimple::TryGetEntry
          (FCacheJournalSimple *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          FCacheEntry *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  ulong64 uVar3;
  TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
  *pTVar4;
  ulong64 *puVar5;
  uint uVar6;
  ulong64 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  
  lpCriticalSection = &this->DataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
           ::Find((TMapBase<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>,0>_>
                   *)&this->ChunkCacheEntries,param_1);
  if (pTVar4 != (TMap<TInterval<unsigned___int64>,StorageServer::FCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TInterval<unsigned___int64>,StorageServer::FCacheEntry,0>_>
                 *)0x0) {
    uVar11 = (int)(param_3 >> 0x20) * 0x17 + (int)param_3;
    uVar8 = ((int)(param_2 >> 0x20) * 0x17 - uVar11) + (int)param_2 ^ uVar11 >> 0xd;
    uVar6 = (-0x61c88647 - uVar8) - uVar11 ^ uVar8 << 8;
    uVar11 = (uVar11 - uVar6) - uVar8 ^ uVar6 >> 0xd;
    uVar8 = (uVar8 - uVar11) - uVar6 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar8 ^ uVar6 >> 5;
    uVar8 = (uVar8 - uVar11) - uVar6 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar8) - uVar11 ^ uVar8 << 10;
    if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
      puVar9 = *(undefined1 **)&pTVar4->field_0x40;
      if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
        puVar9 = &pTVar4->field_0x38;
      }
      iVar12 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&pTVar4->field_0x48 - 1U &
                                 ((uVar11 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
      if (iVar12 != -1) {
        do {
          puVar5 = (ulong64 *)((longlong)iVar12 * 0x50 + *(longlong *)pTVar4);
          if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
            if (iVar12 != -1) {
              puVar7 = puVar5 + 2;
              if (puVar5 == (ulong64 *)0x0) {
                puVar7 = (ulong64 *)0x0;
              }
              if (puVar7 != (ulong64 *)0x0) {
                uVar3 = puVar7[1];
                bVar10 = true;
                param_4->ChunkOffset = *puVar7;
                param_4->ChunkSize = uVar3;
                uVar3 = puVar7[3];
                param_4->StorageOffset = puVar7[2];
                param_4->StorageSize = uVar3;
                uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
                uVar3 = puVar7[5];
                uVar2 = *(undefined4 *)((longlong)puVar7 + 0x2c);
                *(int *)(param_4->StorageHash).Hash = (int)puVar7[4];
                *(undefined4 *)((param_4->StorageHash).Hash + 4) = uVar1;
                *(int *)((param_4->StorageHash).Hash + 8) = (int)uVar3;
                *(undefined4 *)((param_4->StorageHash).Hash + 0xc) = uVar2;
                *(ulong64 *)((param_4->StorageHash).Hash + 0x10) = puVar7[6];
                goto LAB_148ce1966;
              }
            }
            break;
          }
          iVar12 = (int)puVar5[9];
        } while (iVar12 != -1);
      }
    }
  }
  bVar10 = false;
LAB_148ce1966:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar10;
}

