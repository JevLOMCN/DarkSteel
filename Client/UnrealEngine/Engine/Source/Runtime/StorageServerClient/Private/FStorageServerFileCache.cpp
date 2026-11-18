// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// FindOrAdd @ 148cc41a0

CacheEntry * __thiscall
FStorageServerFileCache::FindOrAdd(FStorageServerFileCache *this,FIoChunkId *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  FCacheEntry **ppFVar5;
  CacheEntry *pCVar6;
  FCacheEntry *pFVar7;
  FCacheEntry *pFVar8;
  FCacheEntry *local_res8;
  FCacheEntry *local_res10;
  FCacheEntry *local_28;
  uchar local_20 [8];
  
  local_res10 = *(FCacheEntry **)param_1->Id;
  uVar2 = *(undefined4 *)(param_1->Id + 8);
  local_28 = local_res10;
  local_20._0_4_ = uVar2;
  ppFVar5 = TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
                    *)this,(FIoChunkId *)&local_28);
  if (ppFVar5 != (FCacheEntry **)0x0) {
    TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::
    MarkAsRecent(&this->Cache,*ppFVar5);
    if (&(*ppFVar5)->Value != (CacheEntry *)0x0) {
      return &(*ppFVar5)->Value;
    }
  }
  if (((this->Cache).MaxNumElements == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxNumElements != 0 && \"Cannot add values to zero size TLruCache\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                         ,0xde,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pCVar6 = (CacheEntry *)(*pcVar3)();
    return pCVar6;
  }
  ppFVar5 = TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
            ::Find((TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
                    *)this,(FIoChunkId *)&local_28);
  pFVar8 = (FCacheEntry *)0x0;
  if (ppFVar5 == (FCacheEntry **)0x0) {
    if (*(int *)&(this->Cache).LookupSet.Elements.field_0x8 -
        *(int *)&(this->Cache).LookupSet.Elements.field_0x34 == (this->Cache).MaxNumElements) {
      TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::
      Remove(&this->Cache,(this->Cache).LeastRecent);
    }
    pFVar7 = ::operator_new(0x40038);
    if (pFVar7 != (FCacheEntry *)0x0) {
      *(FCacheEntry **)(pFVar7->Key).Id = local_res10;
      *(undefined4 *)((pFVar7->Key).Id + 8) = uVar2;
      (pFVar7->Value).Start = -1;
      (pFVar7->Value).Buffer.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
      pFVar7->LessRecent = (FCacheEntry *)0x0;
      pFVar7->MoreRecent = (FCacheEntry *)0x0;
      (pFVar7->Value).Buffer.ArrayNum = 0;
      (pFVar7->Value).Buffer.ArrayMax = 0x40000;
      pFVar8 = pFVar7;
    }
    pFVar7 = (this->Cache).MostRecent;
    pFVar8->LessRecent = pFVar7;
    if (pFVar7 != (FCacheEntry *)0x0) {
      pFVar7->MoreRecent = pFVar8;
    }
    (this->Cache).MostRecent = pFVar8;
    if ((this->Cache).LeastRecent == (FCacheEntry *)0x0) {
      (this->Cache).LeastRecent = pFVar8;
    }
    local_res10 = pFVar8;
    TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
    ::
    Emplace<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*_const_&>
              ((TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_res10);
  }
  else {
    pFVar8 = *ppFVar5;
    TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::
    MarkAsRecent(&this->Cache,pFVar8);
  }
  (pFVar8->Value).Start = -1;
  piVar1 = &(pFVar8->Value).Buffer.ArrayMax;
  (pFVar8->Value).Buffer.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,0,&(pFVar8->Value).Buffer.AllocatorInstance,0,piVar1);
  }
  return &pFVar8->Value;
}

// ReadCached @ 148cd3eb0

void __thiscall
FStorageServerFileCache::ReadCached
          (FStorageServerFileCache *this,FStorageServerConnection *param_1,FIoChunkId *param_2,
          long64 *param_3,uchar **param_4,long64 *param_5)

{
  TArray<unsigned_char,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  CacheEntry *pCVar7;
  long64 lVar8;
  CacheEntry *pCVar9;
  ulonglong uVar10;
  ForElementType<unsigned_char> FVar11;
  ForElementType<unsigned_char> FVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ForAnyElementType local_b8;
  int local_b0 [2];
  ulonglong local_a8;
  long64 local_a0;
  long64 local_98;
  CacheEntry *local_90;
  longlong local_88 [2];
  FIoChunkId local_78;
  FIoChunkId local_68;
  FIoChunkId local_58 [2];
  
  if (*param_5 == 0) {
    return;
  }
  if ((GStorageServerEngineStartupPrecache.Ptr != (FStorageServerEngineStartupPrecache *)0x0) &&
     (bVar5 = FStorageServerEngineStartupPrecache::GetPrecachedFile
                        (GStorageServerEngineStartupPrecache.Ptr,param_2,*param_3,*param_5,*param_4,
                         local_88), bVar5)) {
    LOCK();
    CacheHitBytes = (atomic<unsigned___int64>)((longlong)CacheHitBytes + local_88[0]);
    UNLOCK();
    FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
              (&__GTraceCounterStorageServerCache_HitRatioBytes,
               (double)(ulonglong)CacheHitBytes /
               (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
    *param_5 = *param_5 - local_88[0];
    *param_3 = *param_3 + local_88[0];
    *param_4 = *param_4 + local_88[0];
    return;
  }
  if ((this == (FStorageServerFileCache *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  local_78.Id._0_8_ = *(undefined8 *)param_2->Id;
  local_78.Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
  pCVar7 = FindOrAdd(this,&local_78);
  local_a0 = 0;
  bVar5 = CacheEntry::TryReadFromCache(pCVar7,param_3,param_4,param_5,&local_a0);
  if (bVar5) {
    LOCK();
    CacheHitBytes = (atomic<unsigned___int64>)((longlong)CacheHitBytes + local_a0);
    UNLOCK();
    FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
              (&__GTraceCounterStorageServerCache_HitRatioBytes,
               (double)(ulonglong)CacheHitBytes /
               (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
  }
  if (*param_5 == 0) {
LAB_148cd4399:
    if (this != (FStorageServerFileCache *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    }
  }
  else {
    if (this != (FStorageServerFileCache *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    }
    lVar14 = *param_3;
    lVar15 = *param_5;
    uVar10 = (ulonglong)((uint)(lVar14 + lVar15 >> 0x3f) & 0x3ffff) + lVar14 + lVar15 &
             0xfffffffffffc0000;
    if ((longlong)(lVar14 + (ulonglong)((uint)(lVar14 >> 0x3f) & 0x3ffff) & 0xfffffffffffc0000) <
        (longlong)uVar10) {
      lVar8 = SendReadMessage(this,param_1,*param_4,param_2,lVar14,uVar10 - lVar14);
      LOCK();
      CacheMissBytes = (atomic<unsigned___int64>)((longlong)CacheMissBytes + lVar8);
      UNLOCK();
      FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
                (&__GTraceCounterStorageServerCache_HitRatioBytes,
                 (double)(ulonglong)CacheHitBytes /
                 (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
      *param_3 = *param_3 + lVar8;
      *param_4 = *param_4 + lVar8;
      *param_5 = *param_5 - lVar8;
      lVar15 = *param_5;
    }
    if (lVar15 == 0) {
      return;
    }
    if ((this == (FStorageServerFileCache *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    local_68.Id._0_8_ = *(undefined8 *)param_2->Id;
    local_68.Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
    pCVar7 = FindOrAdd(this,&local_68);
    local_98 = 0;
    bVar5 = CacheEntry::TryReadFromCache(pCVar7,param_3,param_4,param_5,&local_98);
    if (bVar5) {
      LOCK();
      CacheHitBytes = (atomic<unsigned___int64>)((longlong)CacheHitBytes + local_98);
      UNLOCK();
      FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
                (&__GTraceCounterStorageServerCache_HitRatioBytes,
                 (double)(ulonglong)CacheHitBytes /
                 (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
      if (*param_5 == 0) goto LAB_148cd4399;
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3746635491403891376>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                         ,0x2b0,"BytesToRead == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this != (FStorageServerFileCache *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    }
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x40000,&local_b8,local_b0,local_b0 + 1);
    uVar10 = (ulonglong)((uint)(*param_3 >> 0x3f) & 0x3ffff) + *param_3 & 0xfffffffffffc0000;
    local_a8 = SendReadMessage(this,param_1,(uchar *)local_b8.Data,param_2,uVar10,
                               (longlong)local_b0[0]);
    LOCK();
    CacheMissBytes = (atomic<unsigned___int64>)((longlong)CacheMissBytes + local_a8);
    UNLOCK();
    FCountersTrace::TCounter<double,1,std::atomic<double>,0>::Set
              (&__GTraceCounterStorageServerCache_HitRatioBytes,
               (double)(ulonglong)CacheHitBytes /
               (double)(ulonglong)((longlong)CacheHitBytes + (longlong)CacheMissBytes));
    if ((this == (FStorageServerFileCache *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    local_58[0].Id._0_8_ = *(undefined8 *)param_2->Id;
    local_58[0].Id._8_4_ = *(undefined4 *)(param_2->Id + 8);
    pCVar9 = FindOrAdd(this,local_58);
    pCVar9->Start = uVar10;
    pTVar1 = &pCVar9->Buffer;
    uVar4 = (uint)local_a8;
    lVar14 = (longlong)(int)(uint)local_a8;
    piVar2 = &(pCVar9->Buffer).ArrayNum;
    iVar13 = *piVar2;
    pCVar7 = pCVar9;
    local_90 = pCVar9;
    if (iVar13 < (int)(uint)local_a8) {
      iVar13 = (uint)local_a8 - iVar13;
      iVar6 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                        (1,1,iVar13,&pTVar1->AllocatorInstance,piVar2,&(pCVar9->Buffer).ArrayMax);
      FVar12 = (pCVar9->Buffer).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_char>)0x0) {
        FVar12 = (ForElementType<unsigned_char>)pTVar1;
      }
      memset((void *)((longlong)FVar12 + (longlong)iVar6),0,(longlong)iVar13);
    }
    else {
      if ((int)(uint)local_a8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_a8 & 0xffffffff);
      }
      if ((int)(uint)local_a8 < iVar13) {
        uVar16 = iVar13 - (uint)local_a8;
        if (((int)((uint)local_a8 | uVar16) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pCVar7 = local_90;
        if (uVar16 != 0) {
          FVar12 = (pCVar9->Buffer).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<unsigned_char>)pTVar1;
          if (FVar12 != (ForElementType<unsigned_char>)0x0) {
            FVar11 = FVar12;
          }
          iVar13 = ((pCVar9->Buffer).ArrayNum - uVar16) - uVar4;
          if (iVar13 != 0) {
            memmove((void *)((longlong)FVar11 + lVar14),
                    (void *)((longlong)(int)uVar16 + (longlong)FVar11 + lVar14),(longlong)iVar13);
          }
          iVar13 = (pCVar9->Buffer).ArrayNum - uVar16;
          (pCVar9->Buffer).ArrayNum = iVar13;
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<262144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                    (1,1,&pTVar1->AllocatorInstance,iVar13,&(pCVar9->Buffer).ArrayMax);
          pCVar7 = local_90;
        }
      }
    }
    FVar12 = (pCVar7->Buffer).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<unsigned_char>)0x0) {
      FVar12 = (ForElementType<unsigned_char>)&pCVar7->Buffer;
    }
    memcpy((void *)FVar12,local_b8.Data,local_a8);
    bVar5 = CacheEntry::TryReadFromCache(pCVar7,param_3,param_4,param_5,(long64 *)&local_a8);
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3746635491403891402>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                           ,0x2ca,
                           "Entry.TryReadFromCache(FilePos, Destination, BytesToRead, BytesRead)"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this != (FStorageServerFileCache *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if ((*param_5 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BytesToRead == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                           ,0x2ce,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SendReadMessage @ 148cdcf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cdd084) */

long64 __thiscall
FStorageServerFileCache::SendReadMessage
          (FStorageServerFileCache *this,FStorageServerConnection *param_1,uchar *param_2,
          FIoChunkId *param_3,long64 param_4,long64 param_5)

{
  int *piVar1;
  int iVar2;
  FIoBuffer *pFVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_a8 [32];
  FIoBuffer local_60;
  TOptional<FIoBuffer> local_58;
  TIoStatusOr<FIoBuffer> local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:___int64___cdecl_FStorageServerFileCache::SendReadMessage(FStorageServerConnection*___ptr64,unsigned_char*___ptr64,FIoChunkId_const&___ptr64,__int64,__int64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId729,"FStorageServerFileCache::SendReadMessage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x2d9);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:___int64___cdecl_FStorageServerFileCache::SendReadMessage(FStorageServerConnection*___ptr64,unsigned_char*___ptr64,FIoChunkId_const&___ptr64,__int64,__int64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId729);
  }
  pFVar3 = FIoBuffer::FIoBuffer(&local_60,Wrap,param_2,param_5);
  uVar4 = 0;
  local_58.bIsSet = true;
  local_58.TypedValue.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(pFVar3->CorePtr).Reference;
  (pFVar3->CorePtr).Reference = (BufCore *)0x0;
  FStorageServerConnection::ReadChunkRequest
            (param_1,&local_48,param_3,param_4,param_5,&local_58,false);
  if (local_60.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_60.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_60.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_60.CorePtr.Reference);
      ::operator_delete((void *)local_60.CorePtr.Reference,0x20);
    }
  }
  if (local_48.StatusValue.ErrorCode == Ok) {
    uVar4 = (ulonglong)
            CONCAT14(*(uchar *)((longlong)local_48.Value.Pad + 0x18),
                     *(uint *)((longlong)local_48.Value.Pad + 8));
  }
  FIoStatus::operator=(&local_48.StatusValue,Unknown);
  if ((local_48.StatusValue.ErrorCode == Ok) && (local_48.Value.Pad != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_48.Value.Pad);
    LOCK();
    piVar1 = (int *)((longlong)local_48.Value.Pad + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_48.Value.Pad);
      ::operator_delete((void *)local_48.Value.Pad,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_48.StatusValue);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar4;
}

// TryReadFromCache @ 148ce19e0

bool __thiscall
FStorageServerFileCache::CacheEntry::TryReadFromCache
          (CacheEntry *this,long64 *param_1,uchar **param_2,long64 *param_3,long64 *param_4)

{
  longlong lVar1;
  ForElementType<unsigned_char> FVar2;
  size_t _Size;
  longlong lVar3;
  size_t sVar4;
  
  lVar1 = *param_1;
  if ((this->Start <= lVar1) &&
     (lVar3 = this->Start + (longlong)(this->Buffer).ArrayNum, lVar1 < lVar3)) {
    sVar4 = lVar3 - lVar1;
    _Size = *param_3;
    if ((longlong)sVar4 < *param_3) {
      _Size = sVar4;
    }
    *param_4 = _Size;
    FVar2 = (this->Buffer).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<unsigned_char>)0x0) {
      FVar2 = (ForElementType<unsigned_char>)&this->Buffer;
    }
    memcpy(*param_2,(void *)(((longlong)FVar2 - this->Start) + *param_1),_Size);
    *param_1 = *param_1 + *param_4;
    *param_2 = *param_2 + *param_4;
    *param_3 = *param_3 - *param_4;
    return true;
  }
  return false;
}

