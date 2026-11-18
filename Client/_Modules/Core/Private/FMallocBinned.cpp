// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// FMallocBinned @ 141679cb0

FMallocBinned * __thiscall
FMallocBinned::FMallocBinned(FMallocBinned *this,uint param_1,ulong64 param_2)

{
  ulong64 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMallocBinned *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FPoolTable *pFVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FPoolTable **ppFVar16;
  uint *puVar17;
  
  this->TableAddressLimit = param_2;
  this->_padding_ = (longlong)&___7FMallocBinned__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AccessGuard,4000);
  lVar13 = 0x29;
  pFVar11 = this->PoolTable;
  lVar14 = 0x29;
  do {
    pFVar11->FirstPool = (FPoolInfo *)0x0;
    pFVar11->ExhaustedPool = (FPoolInfo *)0x0;
    pFVar11->BlockSize = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar11->CriticalSection,4000);
    pFVar11->NumActivePools = 0;
    pFVar11->MaxActivePools = 0;
    pFVar11->ActiveRequests = 0;
    pFVar11->MaxActiveRequests = 0;
    pFVar11->MinRequest = 0;
    pFVar11->MaxRequest = 0;
    pFVar11->TotalRequests = 0;
    pFVar11->TotalWaste = 0;
    pFVar11 = pFVar11 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  (this->OsTable).FirstPool = (FPoolInfo *)0x0;
  (this->OsTable).ExhaustedPool = (FPoolInfo *)0x0;
  (this->OsTable).BlockSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->OsTable).CriticalSection,4000);
  pFVar11 = this->PagePoolTable;
  (this->OsTable).NumActivePools = 0;
  (this->OsTable).MaxActivePools = 0;
  (this->OsTable).ActiveRequests = 0;
  (this->OsTable).MaxActiveRequests = 0;
  (this->OsTable).MinRequest = 0;
  (this->OsTable).MaxRequest = 0;
  (this->OsTable).TotalRequests = 0;
  (this->OsTable).TotalWaste = 0;
  pFVar11->FirstPool = (FPoolInfo *)0x0;
  this->PagePoolTable[0].ExhaustedPool = (FPoolInfo *)0x0;
  this->PagePoolTable[0].BlockSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PagePoolTable[0].CriticalSection,4000);
  this->PagePoolTable[0].NumActivePools = 0;
  this->PagePoolTable[0].MaxActivePools = 0;
  this->PagePoolTable[0].ActiveRequests = 0;
  this->PagePoolTable[0].MaxActiveRequests = 0;
  this->PagePoolTable[0].MinRequest = 0;
  this->PagePoolTable[0].MaxRequest = 0;
  this->PagePoolTable[0].TotalRequests = 0;
  this->PagePoolTable[0].TotalWaste = 0;
  this->PagePoolTable[1].FirstPool = (FPoolInfo *)0x0;
  this->PagePoolTable[1].ExhaustedPool = (FPoolInfo *)0x0;
  this->PagePoolTable[1].BlockSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->PagePoolTable[1].CriticalSection,4000);
  this->PagePoolTable[1].NumActivePools = 0;
  this->PagePoolTable[1].MaxActivePools = 0;
  this->PagePoolTable[1].ActiveRequests = 0;
  this->PagePoolTable[1].MaxActiveRequests = 0;
  this->PagePoolTable[1].MinRequest = 0;
  this->PagePoolTable[1].MaxRequest = 0;
  this->PagePoolTable[1].TotalRequests = 0;
  this->PagePoolTable[1].TotalWaste = 0;
  this->PageSize = param_1;
  this->HashBuckets = (PoolHashBucket *)0x0;
  this->HashBucketFreeList = (PoolHashBucket *)0x0;
  this->OsCurrent = 0;
  this->OsPeak = 0;
  this->WasteCurrent = 0;
  this->WastePeak = 0;
  this->UsedCurrent = 0;
  this->UsedPeak = 0;
  this->CurrentAllocs = 0;
  this->TotalAllocs = 0;
  this->SlackCurrent = 0;
  this->MemTime = 0.0;
  if (((this->PageSize & this->PageSize - 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(PageSize & (PageSize - 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x481,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMallocBinned *)(*pcVar4)();
    return pFVar8;
  }
  if (((param_2 & param_2 - 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(AddressLimit & (AddressLimit - 1))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x482,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMallocBinned *)(*pcVar4)();
    return pFVar8;
  }
  if ((0x10000 < this->PageSize) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PageSize <= 65536",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x483,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMallocBinned *)(*pcVar4)();
    return pFVar8;
  }
  if ((param_2 <= this->PageSize) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressLimit > PageSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x484,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMallocBinned *)(*pcVar4)();
    return pFVar8;
  }
  uVar15 = this->PageSize;
  puVar12 = &this->PoolTable[0].BlockSize;
  this->BinnedSizeLimit = 0x8000;
  this->BinnedOSTableIndex = 0x8002;
  (this->OsTable).FirstPool = (FPoolInfo *)0x0;
  uVar6 = 1;
  if (uVar15 != 0) {
    uVar6 = uVar15;
  }
  (this->OsTable).ExhaustedPool = (FPoolInfo *)0x0;
  (this->OsTable).BlockSize = 0;
  uVar9 = (ulonglong)(uVar6 - 1) * 2 + 1;
  uVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  this->PoolBitShift = uVar10 & 0xffffffff;
  uVar6 = 1;
  if (uVar15 >> 5 != 0) {
    uVar6 = uVar15 >> 5;
  }
  uVar9 = (ulonglong)(uVar6 - 1) * 2 + 1;
  uVar2 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  this->IndirectPoolBlockSize = (ulonglong)(uVar15 >> 5);
  uVar1 = uVar2 + (uVar10 & 0xffffffff);
  this->IndirectPoolBitShift = uVar2 & 0xffffffff;
  this->HashKeyShift = uVar1;
  uVar9 = param_2 >> ((byte)uVar1 & 0x3f);
  this->MaxHashBuckets = uVar9;
  iVar7 = 1;
  if ((int)uVar9 != 0) {
    iVar7 = (int)uVar9;
  }
  uVar10 = (ulonglong)(iVar7 - 1) * 2 + 1;
  uVar3 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  this->MaxHashBucketBits = uVar3 & 0xffffffff;
  this->MaxHashBucketWaste = uVar9 >> 5 & 0x3fffffffffffff;
  puVar17 = BlockSizes;
  this->MaxBookKeepingOverhead = param_2 / uVar15 >> 0xf & 0xfffffffffff;
  this->PoolMask = (1L << ((byte)(uVar2 & 0xffffffff) & 0x3f)) - 1;
  pFVar11->FirstPool = (FPoolInfo *)0x0;
  uVar6 = 0xc000;
  if (uVar15 != 0x10000) {
    uVar6 = 0;
  }
  this->PagePoolTable[0].ExhaustedPool = (FPoolInfo *)0x0;
  this->PagePoolTable[0].BlockSize = uVar6;
  uVar6 = 0x18000;
  if (uVar15 != 0x10000) {
    uVar6 = 0;
  }
  this->PagePoolTable[1].FirstPool = (FPoolInfo *)0x0;
  this->PagePoolTable[1].BlockSize = uVar6;
  this->PagePoolTable[1].ExhaustedPool = (FPoolInfo *)0x0;
  do {
    uVar15 = *puVar17;
    ((FPoolTable *)(puVar12 + -4))->FirstPool = (FPoolInfo *)0x0;
    *(FPoolInfo **)(puVar12 + -2) = (FPoolInfo *)0x0;
    *puVar12 = uVar15;
    if (((uVar15 & 0xf) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAligned(BlockSizes[i], Private::DEFAULT_BINNED_ALLOCATOR_ALIGNMENT)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                           ,0x4e2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMallocBinned *)(*pcVar4)();
      return pFVar8;
    }
    puVar17 = puVar17 + 1;
    puVar12[0x10] = *puVar12;
    puVar12 = puVar12 + 0x1a;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  ppFVar16 = this->MemSizeToPoolTable;
  uVar9 = 0;
  do {
    uVar15 = this->PoolTable[0].BlockSize;
    uVar10 = 0;
    while (uVar15 < (uint)uVar9) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar15 = this->PoolTable[uVar10].BlockSize;
    }
    uVar15 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar15;
    *ppFVar16 = this->PoolTable + uVar10;
    ppFVar16 = ppFVar16 + 1;
  } while (uVar15 < 0x8001);
  this->MemSizeToPoolTable[this->BinnedSizeLimit] = pFVar11;
  this->MemSizeToPoolTable[this->BinnedSizeLimit + 1] = this->PagePoolTable + 1;
  if ((this->PoolTable[0x28].BlockSize != 0x8000) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MAX_POOLED_ALLOCATION_SIZE - 1 == PoolTable[POOL_COUNT - 1].BlockSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x4f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FMallocBinned *)(*pcVar4)();
    return pFVar8;
  }
  return this;
}

// ~FMallocBinned @ 14167c010

/* WARNING: Type propagation algorithm not settling */

void __thiscall FMallocBinned::~FMallocBinned(FMallocBinned *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  
  this->_padding_ = (longlong)&___7FMallocBinned__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PagePoolTable[1].CriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PagePoolTable[0].CriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->OsTable).CriticalSection);
  lVar1 = 0x29;
  lpCriticalSection = (LPCRITICAL_SECTION)&(this->OsTable).CriticalSection;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[-3].OwningThread;
    DeleteCriticalSection(lpCriticalSection);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  FExec::~FExec((FExec *)this);
  return;
}

// AllocateHashBucket @ 141680a60

PoolHashBucket * __cdecl FMallocBinned::Private::AllocateHashBucket(FMallocBinned *param_1)

{
  long64 *plVar1;
  uint uVar2;
  FLLMTracker *this;
  longlong lVar3;
  PoolHashBucket *pPVar4;
  PoolHashBucket *pPVar5;
  bool bVar6;
  FLowLevelMemTracker *pFVar7;
  FTagData *pFVar8;
  FLLMThreadState *this_00;
  PoolHashBucket *pPVar9;
  ulonglong uVar10;
  PoolHashBucket *pPVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_1->HashBucketFreeList == (PoolHashBucket *)0x0) {
    uVar2 = param_1->PageSize;
    uVar10 = (ulonglong)uVar2;
    bVar6 = false;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (pFVar7 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar7);
      this = pFVar7->Trackers[0];
      bVar6 = true;
      pFVar8 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,FMalloc,Scope);
      this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this);
      UE::LLMPrivate::FLLMThreadState::PushTag(this_00,pFVar8,None);
    }
    pPVar9 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar10);
    param_1->HashBucketFreeList = pPVar9;
    do {
      lVar3 = param_1->OsPeak;
      LOCK();
      plVar1 = &param_1->OsCurrent;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + uVar10;
      UNLOCK();
      if (lVar12 < param_1->OsPeak) {
        lVar12 = param_1->OsPeak;
      }
      if (((int)param_1 + 0x412a8U & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar13 = lVar3 == param_1->OsPeak;
      if (bVar13) {
        param_1->OsPeak = lVar12;
      }
      UNLOCK();
    } while (!bVar13);
    do {
      lVar3 = param_1->WastePeak;
      LOCK();
      plVar1 = &param_1->WasteCurrent;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + uVar10;
      UNLOCK();
      if (lVar12 < param_1->WastePeak) {
        lVar12 = param_1->WastePeak;
      }
      if (((int)param_1 + 0x412b8U & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar13 = lVar3 == param_1->WastePeak;
      if (bVar13) {
        param_1->WastePeak = lVar12;
      }
      UNLOCK();
    } while (!bVar13);
    pPVar9 = (PoolHashBucket *)0x0;
    for (uVar10 = (ulonglong)(uVar2 >> 5); uVar10 != 0; uVar10 = uVar10 - 1) {
      pPVar11 = param_1->HashBucketFreeList;
      *(undefined8 *)((longlong)&pPVar11->Key + (longlong)&pPVar9->Key) = 0;
      *(undefined8 *)((longlong)&pPVar9->FirstPool + (longlong)pPVar11) = 0;
      pPVar5 = (PoolHashBucket *)((longlong)&pPVar11->Key + (longlong)&pPVar9->Key);
      pPVar5->Prev = pPVar5;
      pPVar9 = pPVar9 + 1;
      pPVar5->Next = pPVar5;
      pPVar4 = pPVar11->Prev;
      pPVar5->Prev = pPVar4;
      pPVar5->Next = pPVar11;
      pPVar4->Next = pPVar5;
      pPVar11->Prev = pPVar5;
    }
    if (bVar6) {
      pFVar7 = FLowLevelMemTracker::Get();
      UE::LLMPrivate::FLLMTracker::PopTag(pFVar7->Trackers[0],None);
    }
  }
  pPVar9 = param_1->HashBucketFreeList;
  pPVar5 = pPVar9->Next;
  pPVar11 = (PoolHashBucket *)0x0;
  if (pPVar5 != pPVar9) {
    pPVar11 = pPVar5;
  }
  pPVar5->Prev = pPVar9->Prev;
  pPVar9->Prev->Next = pPVar9->Next;
  pPVar9->Prev = pPVar9;
  pPVar9->Next = pPVar9;
  param_1->HashBucketFreeList = pPVar11;
  return pPVar9;
}

// AllocatePoolMemory @ 1416818a0

FPoolInfo * __cdecl
FMallocBinned::Private::AllocatePoolMemory
          (FMallocBinned *param_1,FPoolTable *param_2,uint param_3,ushort param_4)

{
  FPoolInfo **ppFVar1;
  long64 *plVar2;
  FLLMTracker *pFVar3;
  ulong64 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FLowLevelMemTracker *pFVar9;
  FTagData *pFVar10;
  FLLMThreadState *pFVar11;
  FFreeMem *pFVar12;
  PoolHashBucket *pPVar13;
  FPoolInfo *pFVar14;
  PoolHashBucket *pPVar15;
  FPoolInfo *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  PoolHashBucket *pPVar19;
  ushort uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ELLMTagSet EVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ELLMTagSet local_res18;
  
  uVar21 = param_1->PageSize;
  uVar8 = param_3 / param_2->BlockSize;
  uVar18 = param_2->BlockSize * uVar8;
  uVar25 = (ulonglong)((uVar21 - 1) + uVar18 & -uVar21);
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (pFVar9 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) {
    pFVar12 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar25);
  }
  else {
    FLowLevelMemTracker::BootstrapInitialise(pFVar9);
    pFVar3 = pFVar9->Trackers[0];
    pFVar10 = FLowLevelMemTracker::FindOrAddTagData(pFVar3->LLMRef,FMalloc,Scope);
    pFVar11 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar11,pFVar10,None);
    pFVar12 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar25);
    pFVar9 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar9->Trackers[0],None);
  }
  if (pFVar12 == (FFreeMem *)0x0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(uVar25,0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1->AccessGuard);
  pPVar13 = param_1->HashBuckets;
  uVar17 = 0;
  if (pPVar13 == (PoolHashBucket *)0x0) {
    bVar7 = false;
    EVar24 = local_res18;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (pFVar9 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar9);
      pFVar3 = pFVar9->Trackers[0];
      bVar7 = true;
      pFVar10 = FLowLevelMemTracker::FindOrAddTagData(pFVar3->LLMRef,FMalloc,Scope);
      pFVar11 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3);
      UE::LLMPrivate::FLLMThreadState::PushTag(pFVar11,pFVar10,None);
      EVar24 = None;
    }
    pPVar13 = FWindowsPlatformMemory::BinnedAllocFromOS
                        (((ulonglong)param_1->PageSize - 1) + param_1->MaxHashBuckets * 0x20 &
                         ~((ulonglong)param_1->PageSize - 1));
    if (param_1->MaxHashBuckets != 0) {
      do {
        uVar26 = (ulonglong)((int)uVar17 + 1);
        pPVar15 = pPVar13 + uVar17;
        pPVar15->Key = 0;
        pPVar15->FirstPool = (FPoolInfo *)0x0;
        pPVar15->Prev = pPVar15;
        pPVar15->Next = pPVar15;
        uVar17 = uVar26;
      } while (uVar26 < param_1->MaxHashBuckets);
    }
    if (bVar7) {
      pFVar9 = FLowLevelMemTracker::Get();
      UE::LLMPrivate::FLLMTracker::PopTag(pFVar9->Trackers[EVar24],EVar24);
    }
    param_1->HashBuckets = pPVar13;
  }
  uVar26 = (ulonglong)pFVar12 >> ((byte)param_1->HashKeyShift & 0x3f);
  uVar4 = param_1->PoolBitShift;
  uVar27 = param_1->MaxHashBuckets - 1 & uVar26;
  uVar17 = param_1->PoolMask;
  pPVar15 = pPVar13 + uVar27;
  while ((ppFVar1 = &pPVar15->FirstPool, pPVar15->Key != uVar26 && (*ppFVar1 != (FPoolInfo *)0x0)))
  {
    pPVar15 = pPVar15->Next;
    if (pPVar15 == pPVar13 + uVar27) {
      pPVar13 = AllocateHashBucket(param_1);
      if (pPVar13->FirstPool == (FPoolInfo *)0x0) {
        pFVar14 = CreateIndirect(param_1);
        pPVar13->FirstPool = pFVar14;
      }
      pPVar13->Key = uVar26;
      pPVar19 = param_1->HashBuckets + uVar27;
      pPVar15 = pPVar19->Prev;
      pPVar13->Prev = pPVar15;
      pPVar13->Next = pPVar19;
      pPVar15->Next = pPVar13;
      pPVar19->Prev = pPVar13;
      pFVar14 = pPVar13->FirstPool;
LAB_141681b38:
      pFVar14 = pFVar14 + ((ulonglong)pFVar12 >> ((byte)uVar4 & 0x3f) & uVar17);
      uVar20 = 0;
      uVar17 = (ulonglong)uVar21;
      EVar24 = local_res18;
      do {
        if (uVar25 <= uVar17) {
          do {
            lVar5 = param_1->OsPeak;
            LOCK();
            plVar2 = &param_1->OsCurrent;
            lVar23 = *plVar2;
            *plVar2 = *plVar2 + uVar25;
            UNLOCK();
            if (lVar23 < param_1->OsPeak) {
              lVar23 = param_1->OsPeak;
            }
            if (((int)param_1 + 0x412a8U & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            bVar7 = lVar5 == param_1->OsPeak;
            if (bVar7) {
              param_1->OsPeak = lVar23;
            }
            UNLOCK();
          } while (!bVar7);
          do {
            lVar5 = param_1->WastePeak;
            LOCK();
            plVar2 = &param_1->WasteCurrent;
            lVar23 = *plVar2;
            *plVar2 = *plVar2 + (uVar25 - uVar18);
            UNLOCK();
            if (lVar23 < param_1->WastePeak) {
              lVar23 = param_1->WastePeak;
            }
            if (((int)param_1 + 0x412b8U & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            bVar7 = lVar5 == param_1->WastePeak;
            if (bVar7) {
              param_1->WastePeak = lVar23;
            }
            UNLOCK();
          } while (!bVar7);
          LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->AccessGuard);
          if (param_2->FirstPool != (FPoolInfo *)0x0) {
            param_2->FirstPool->PrevLink = &pFVar14->Next;
          }
          pFVar14->Next = param_2->FirstPool;
          pFVar14->PrevLink = &param_2->FirstPool;
          param_2->FirstPool = pFVar14;
          pFVar14->TableIndex = param_4;
          pFVar14->AllocSize = uVar18;
          pFVar14->FirstMem = pFVar12;
          pFVar14->Taken = 0;
          param_2->NumActivePools = param_2->NumActivePools + 1;
          uVar21 = param_2->NumActivePools;
          if (param_2->NumActivePools < param_2->MaxActivePools) {
            uVar21 = param_2->MaxActivePools;
          }
          param_2->MaxActivePools = uVar21;
          pFVar12->NumFreeBlocks = uVar8;
          pFVar12->Next = (FFreeMem *)0x0;
          return pFVar14;
        }
        pPVar13 = param_1->HashBuckets;
        uVar26 = (longlong)&pFVar12->Next + uVar17;
        if (pPVar13 == (PoolHashBucket *)0x0) {
          bVar7 = false;
          if ((FLowLevelMemTracker::EnabledState != Disabled) &&
             (pFVar9 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
            FLowLevelMemTracker::BootstrapInitialise(pFVar9);
            pFVar3 = pFVar9->Trackers[0];
            EVar24 = None;
            local_res18 = None;
            bVar7 = true;
            pFVar10 = FLowLevelMemTracker::FindOrAddTagData(pFVar3->LLMRef,FMalloc,Scope);
            pFVar11 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar3);
            UE::LLMPrivate::FLLMThreadState::PushTag(pFVar11,pFVar10,None);
          }
          pPVar13 = FWindowsPlatformMemory::BinnedAllocFromOS
                              (((ulonglong)param_1->PageSize - 1) + param_1->MaxHashBuckets * 0x20 &
                               ~((ulonglong)param_1->PageSize - 1));
          uVar27 = 0;
          if (param_1->MaxHashBuckets != 0) {
            do {
              uVar22 = (ulonglong)((int)uVar27 + 1);
              pPVar15 = pPVar13 + uVar27;
              pPVar15->Key = 0;
              pPVar15->FirstPool = (FPoolInfo *)0x0;
              pPVar15->Prev = pPVar15;
              pPVar15->Next = pPVar15;
              uVar27 = uVar22;
            } while (uVar22 < param_1->MaxHashBuckets);
          }
          if (bVar7) {
            pFVar9 = FLowLevelMemTracker::Get();
            UE::LLMPrivate::FLLMTracker::PopTag(pFVar9->Trackers[EVar24],local_res18);
          }
          param_1->HashBuckets = pPVar13;
        }
        uVar22 = uVar26 >> ((byte)param_1->HashKeyShift & 0x3f);
        uVar4 = param_1->PoolBitShift;
        uVar28 = param_1->MaxHashBuckets - 1 & uVar22;
        uVar27 = param_1->PoolMask;
        pPVar15 = pPVar13 + uVar28;
        do {
          ppFVar1 = &pPVar15->FirstPool;
          if ((pPVar15->Key == uVar22) || (*ppFVar1 == (FPoolInfo *)0x0)) {
            pFVar16 = *ppFVar1;
            if (pFVar16 == (FPoolInfo *)0x0) {
              pPVar15->Key = uVar22;
              pFVar16 = CreateIndirect(param_1);
              *ppFVar1 = pFVar16;
            }
            goto LAB_141681d18;
          }
          pPVar15 = pPVar15->Next;
        } while (pPVar15 != pPVar13 + uVar28);
        pPVar13 = AllocateHashBucket(param_1);
        if (pPVar13->FirstPool == (FPoolInfo *)0x0) {
          pFVar16 = CreateIndirect(param_1);
          pPVar13->FirstPool = pFVar16;
        }
        pPVar13->Key = uVar22;
        pPVar19 = param_1->HashBuckets + uVar28;
        pPVar15 = pPVar19->Prev;
        pPVar13->Prev = pPVar15;
        pPVar13->Next = pPVar19;
        pPVar15->Next = pPVar13;
        pPVar19->Prev = pPVar13;
        pFVar16 = pPVar13->FirstPool;
LAB_141681d18:
        pFVar16 = pFVar16 + (uVar26 >> ((byte)uVar4 & 0x3f) & uVar27);
        if ((pFVar16 == (FPoolInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TrailingPool",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                               ,0x287,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FPoolInfo *)(*pcVar6)();
          return pFVar14;
        }
        uVar4 = param_1->BinnedOSTableIndex;
        pFVar16->TableIndex = uVar20;
        pFVar16->AllocSize = 0;
        if ((uint)uVar20 == (uint)uVar4) {
          pFVar16->FirstMem = (FFreeMem *)0x0;
        }
        uVar20 = uVar20 + 1;
        uVar17 = uVar17 + uVar21;
      } while( true );
    }
  }
  pFVar14 = *ppFVar1;
  if (pFVar14 == (FPoolInfo *)0x0) {
    pPVar15->Key = uVar26;
    pFVar14 = CreateIndirect(param_1);
    *ppFVar1 = pFVar14;
  }
  goto LAB_141681b38;
}

// CreateIndirect @ 14168dbb0

FPoolInfo * __cdecl FMallocBinned::Private::CreateIndirect(FMallocBinned *param_1)

{
  long64 *plVar1;
  FLLMTracker *this;
  longlong lVar2;
  bool bVar3;
  FLowLevelMemTracker *pFVar4;
  FTagData *pFVar5;
  FLLMThreadState *this_00;
  FPoolInfo *_Dst;
  longlong lVar6;
  ulong64 _Size;
  bool bVar7;
  
  _Size = param_1->IndirectPoolBlockSize * 0x20;
  bVar3 = false;
  if ((FLowLevelMemTracker::EnabledState != Disabled) &&
     (pFVar4 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
    FLowLevelMemTracker::BootstrapInitialise(pFVar4);
    this = pFVar4->Trackers[0];
    bVar3 = true;
    pFVar5 = FLowLevelMemTracker::FindOrAddTagData(this->LLMRef,FMalloc,Scope);
    this_00 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_00,pFVar5,None);
  }
  _Dst = FWindowsPlatformMemory::BinnedAllocFromOS(_Size);
  if (_Dst == (FPoolInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(_Size,0);
  }
  memset(_Dst,0,_Size);
  do {
    lVar2 = param_1->OsPeak;
    LOCK();
    plVar1 = &param_1->OsCurrent;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + (((ulonglong)param_1->PageSize - 1) + _Size &
                        ~((ulonglong)param_1->PageSize - 1));
    UNLOCK();
    if (lVar6 < param_1->OsPeak) {
      lVar6 = param_1->OsPeak;
    }
    if (((int)param_1 + 0x412a8U & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar7 = lVar2 == param_1->OsPeak;
    if (bVar7) {
      param_1->OsPeak = lVar6;
    }
    UNLOCK();
  } while (!bVar7);
  do {
    lVar2 = param_1->WastePeak;
    LOCK();
    plVar1 = &param_1->WasteCurrent;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + (((ulonglong)param_1->PageSize - 1) + _Size &
                        ~((ulonglong)param_1->PageSize - 1));
    UNLOCK();
    if (lVar6 < param_1->WastePeak) {
      lVar6 = param_1->WastePeak;
    }
    if (((int)param_1 + 0x412b8U & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar7 = lVar2 == param_1->WastePeak;
    if (bVar7) {
      param_1->WastePeak = lVar6;
    }
    UNLOCK();
  } while (!bVar7);
  if (bVar3) {
    pFVar4 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar4->Trackers[0],None);
  }
  return _Dst;
}

// DumpAllocatorStats @ 14168f150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned::DumpAllocatorStats(FMallocBinned *this,FOutputDevice *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FPoolTable *pFVar7;
  uint uVar8;
  FPoolTable *pFVar9;
  FPoolTable *pFVar10;
  FPoolTable *pFVar11;
  undefined4 uVar12;
  FPoolTable *pFVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  uint local_148;
  double local_140;
  int local_138;
  uint local_130;
  uint local_128;
  uint local_120;
  int local_118;
  int local_110;
  double local_108;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  FPoolTable **local_d0;
  FPoolTable *local_c8;
  LPCRITICAL_SECTION local_c0;
  FMallocBinned *local_b8;
  FOutputDevice *local_b0;
  FBufferedOutputDevice local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_b8 = this;
  local_b0 = param_1;
  FBufferedOutputDevice::FBufferedOutputDevice(&local_a8);
  (**(code **)(this->_padding_ + 0xc0))(this);
  Private::UpdateSlackStat(this);
  local_158 = (double)(**(code **)(this->_padding_ + 200))(this);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,L"Allocator Stats for %s:"
            );
  fVar17 = __real_35800000;
  local_150 = (double)((float)(this->OsCurrent - this->UsedCurrent) * __real_35800000);
  local_158 = (double)((float)this->UsedCurrent * __real_35800000);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Current Memory %.2f MB used, plus %.2f MB waste");
  local_150 = (double)((float)(this->OsPeak - this->UsedPeak) * fVar17);
  local_158 = (double)((float)this->UsedPeak * fVar17);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Peak Memory %.2f MB used, plus %.2f MB waste");
  local_150 = (double)((float)this->OsPeak * fVar17);
  local_158 = (double)((float)this->OsCurrent * fVar17);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Current OS Memory %.2f MB, peak %.2f MB");
  local_150 = (double)((float)this->WastePeak * fVar17);
  local_158 = (double)((float)this->WasteCurrent * fVar17);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Current Waste %.2f MB, peak %.2f MB");
  local_150 = (double)((float)this->UsedPeak * fVar17);
  local_158 = (double)((float)this->UsedCurrent * fVar17);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Current Used %.2f MB, peak %.2f MB");
  local_158 = (double)((float)this->SlackCurrent * fVar17);
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,L"Current Slack %.2f MB");
  local_150 = (double)this->TotalAllocs;
  local_158 = (double)this->CurrentAllocs;
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Allocs      % 6i Current / % 6i Total");
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,L"");
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Block Size Num Pools Max Pools Cur Allocs Total Allocs Min Req Max Req Mem Used Mem Slack Mem Waste Efficiency"
            );
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"---------- --------- --------- ---------- ------------ ------- ------- -------- --------- --------- ----------"
            );
  fVar17 = __real_42c80000;
  pFVar7 = (FPoolTable *)0x0;
  uVar1 = 0;
  local_f8 = 0;
  local_c8 = (FPoolTable *)0x0;
  uVar12 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_e4 = 0;
  uVar6 = uVar1;
  if (this->BinnedSizeLimit != 0xfffffffffffffffe) {
    local_d0 = this->MemSizeToPoolTable;
    pFVar9 = pFVar7;
    pFVar10 = pFVar7;
    pFVar11 = pFVar7;
    pFVar13 = pFVar7;
    do {
      uVar8 = (uint)pFVar9;
      pFVar9 = *local_d0;
      if ((pFVar10 != pFVar9) && (pFVar9->BlockSize != 0)) {
        local_c0 = (LPCRITICAL_SECTION)&pFVar9->CriticalSection;
        EnterCriticalSection(local_c0);
        uVar6 = pFVar9->BlockSize;
        if (this->BinnedSizeLimit < (ulonglong)uVar6) {
          uVar1 = ((uVar8 - (int)this->BinnedSizeLimit) + 1) * 0x30000;
        }
        else {
          uVar1 = 0x10000;
        }
        local_d4 = pFVar9->NumActivePools;
        uVar8 = pFVar9->ActiveRequests;
        uVar3 = local_d4 * uVar1;
        uVar4 = uVar3 >> 10;
        uVar15 = uVar8 * uVar6 >> 10;
        uVar1 = (uVar1 % uVar6) * local_d4 >> 10;
        iVar2 = (int)pFVar9->TotalRequests;
        local_d8 = pFVar9->MaxActivePools;
        iVar14 = (uVar4 - uVar1) - uVar15;
        local_dc = pFVar9->MinRequest;
        local_e0 = pFVar9->MaxRequest;
        iVar5 = ((uint)((ulonglong)
                        (longlong)
                        (((double)pFVar9->TotalWaste / (double)pFVar9->TotalRequests) *
                        (double)uVar8) >> 10) & 0x3fffff) + uVar1;
        LeaveCriticalSection(local_c0);
        uVar1 = local_d4;
        fVar16 = fVar17;
        if (uVar3 != 0) {
          fVar16 = ((float)(uVar4 - iVar5) * fVar17) / (float)uVar4;
        }
        local_108 = (double)fVar16;
        local_128 = local_e0;
        local_130 = local_dc;
        local_140 = (double)CONCAT44(local_140._4_4_,uVar8);
        local_148 = local_d8;
        local_150 = (double)CONCAT44(local_150._4_4_,local_d4);
        local_158 = (double)CONCAT44(local_158._4_4_,uVar6);
        local_138 = iVar2;
        local_120 = uVar15;
        local_118 = iVar14;
        local_110 = iVar5;
        FOutputDevice::CategorizedLogfImpl
                  ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
                   L"% 10i % 9i % 9i % 10i % 12i % 7i % 7i % 7iK % 8iK % 8iK % 9.2f%%");
        local_f0 = local_f0 + iVar14;
        pFVar11 = (FPoolTable *)(ulonglong)((int)local_c8 + uVar4);
        local_f8 = local_f8 + iVar5;
        local_ec = local_ec + uVar8;
        pFVar7 = (FPoolTable *)(ulonglong)local_ec;
        local_e8 = local_e8 + iVar2;
        pFVar13 = (FPoolTable *)(ulonglong)local_e8;
        local_f4 = local_f4 + uVar1;
        pFVar10 = pFVar9;
        this = local_b8;
        uVar8 = local_e4;
        local_c8 = pFVar11;
      }
      uVar6 = (uint)pFVar7;
      uVar12 = SUB84(pFVar13,0);
      uVar1 = (uint)pFVar11;
      local_d0 = local_d0 + 1;
      local_e4 = uVar8 + 1;
      pFVar9 = (FPoolTable *)(ulonglong)local_e4;
    } while ((ulonglong)(longlong)(int)local_e4 < this->BinnedSizeLimit + 2);
  }
  iVar5 = local_f4;
  iVar2 = local_f8;
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,L"");
  if (uVar1 != 0) {
    fVar17 = ((float)(uVar1 - iVar2) * fVar17) / (float)uVar1;
  }
  local_140 = (double)fVar17;
  local_150._0_4_ = local_f0;
  local_148 = iVar2;
  local_158._0_4_ = uVar1;
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"%iK allocated in pools (with %iK slack and %iK waste). Efficiency %.2f%%");
  local_150 = (double)CONCAT44(local_150._4_4_,uVar12);
  local_158 = (double)CONCAT44(local_158._4_4_,uVar6);
  local_148 = iVar5;
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,
             L"Allocations %i Current / %i Total (in %i pools)");
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)&local_a8,(FName *)&LogMemory.field_0x4,Log,L"");
  FBufferedOutputDevice::RedirectTo(&local_a8,local_b0);
  FBufferedOutputDevice::~FBufferedOutputDevice(&local_a8);
  return;
}

// Free @ 141695fb0

void __thiscall FMallocBinned::Free(FMallocBinned *this,void *param_1)

{
  FPoolInfo **ppFVar1;
  uint uVar2;
  FPoolTable *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  ulonglong uVar7;
  PoolHashBucket *pPVar8;
  FPoolInfo *pFVar9;
  void *pvVar10;
  ushort uVar11;
  FPoolInfo *pFVar12;
  uint uVar13;
  FFreeMem *pFVar14;
  int iVar15;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  this->CurrentAllocs = this->CurrentAllocs + -1;
  UNLOCK();
  uVar2 = this->PageSize;
  uVar13 = 0;
  iVar15 = (int)(0x10000 / (ulonglong)uVar2);
  if (iVar15 != -1) {
    pvVar10 = param_1;
    do {
      pFVar9 = (FPoolInfo *)(~((ulonglong)uVar2 - 1) & (ulonglong)pvVar10);
      uVar7 = (ulonglong)pFVar9 >> ((byte)this->HashKeyShift & 0x3f);
      uVar11 = 0;
      pPVar8 = this->HashBuckets + (uVar7 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1))
      ;
      do {
        if (pPVar8->Key == (uVar7 & 0xffffffff)) {
          pFVar12 = pPVar8->FirstPool +
                    ((uint)((ulonglong)pFVar9 >> ((byte)this->PoolBitShift & 0x3f)) &
                    (uint)this->PoolMask);
          if (pFVar12->AllocSize == 0) {
            uVar11 = pFVar12->TableIndex;
          }
          else if (pFVar12 != (FPoolInfo *)0x0) goto LAB_1416979fe;
          break;
        }
        pPVar8 = pPVar8->Next;
      } while (pPVar8 != this->HashBuckets +
                         (uVar7 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1)));
      uVar13 = uVar13 + 1;
      pvVar10 = (void *)((longlong)pFVar9 + (-1 - (ulonglong)(uVar11 * uVar2)));
    } while (uVar13 < iVar15 + 1U);
  }
  pFVar9 = (FPoolInfo *)0x0;
  pFVar12 = pFVar9;
LAB_1416979fe:
  uVar11 = pFVar12->TableIndex;
  if ((ulonglong)uVar11 < this->BinnedOSTableIndex) {
    pFVar3 = this->MemSizeToPoolTable[uVar11];
    EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->CriticalSection);
    pFVar3->ActiveRequests = pFVar3->ActiveRequests - 1;
    if (pFVar12->FirstMem == (FFreeMem *)0x0) {
      ppFVar1 = &pFVar12->Next;
      if (pFVar12->Next != (FPoolInfo *)0x0) {
        pFVar12->Next->PrevLink = pFVar12->PrevLink;
      }
      *pFVar12->PrevLink = *ppFVar1;
      if (pFVar3->FirstPool != (FPoolInfo *)0x0) {
        pFVar3->FirstPool->PrevLink = ppFVar1;
      }
      *ppFVar1 = pFVar3->FirstPool;
      pFVar12->PrevLink = &pFVar3->FirstPool;
      pFVar3->FirstPool = pFVar12;
    }
    uVar2 = pFVar3->BlockSize;
    if (((longlong)param_1 - (longlong)pFVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OffsetFromBase >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                           ,0x2e1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = (FFreeMem *)
              ((longlong)param_1 -
              (((longlong)param_1 - (longlong)pFVar9) % (longlong)(ulonglong)uVar2 & 0xffffffffU));
    pFVar14->NumFreeBlocks = 1;
    pFVar14->Next = pFVar12->FirstMem;
    pFVar12->FirstMem = pFVar14;
    LOCK();
    this->UsedCurrent = this->UsedCurrent - (ulonglong)pFVar3->BlockSize;
    UNLOCK();
    pFVar12->Taken = pFVar12->Taken - 1;
    if (pFVar12->Taken == 0) {
      pFVar3->NumActivePools = pFVar3->NumActivePools - 1;
      if ((uint)pFVar12->TableIndex == (uint)this->BinnedOSTableIndex) {
        pFVar14 = pFVar12->FirstMem;
      }
      else {
        pFVar14 = (FFreeMem *)
                  (ulonglong)((this->PageSize - 1) + pFVar12->AllocSize & -this->PageSize);
      }
      LOCK();
      this->OsCurrent = this->OsCurrent - (longlong)pFVar14;
      UNLOCK();
      LOCK();
      this->WasteCurrent = this->WasteCurrent + ((ulonglong)pFVar12->AllocSize - (longlong)pFVar14);
      UNLOCK();
      if (pFVar12->Next != (FPoolInfo *)0x0) {
        pFVar12->Next->PrevLink = pFVar12->PrevLink;
      }
      *pFVar12->PrevLink = pFVar12->Next;
      uVar5 = this->BinnedOSTableIndex;
      pFVar12->TableIndex = 0;
      pFVar12->AllocSize = 0;
      if ((int)uVar5 == 0) {
        pFVar12->FirstMem = (FFreeMem *)0x0;
      }
      FWindowsPlatformMemory::BinnedFreeToOS(pFVar9,(ulong64)pFVar14);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->CriticalSection);
  }
  else {
    if ((uint)uVar11 == (uint)this->BinnedOSTableIndex) {
      pFVar14 = pFVar12->FirstMem;
    }
    else {
      pFVar14 = (FFreeMem *)(ulonglong)((pFVar12->AllocSize - 1) + uVar2 & -uVar2);
    }
    LOCK();
    this->UsedCurrent = this->UsedCurrent - (ulonglong)pFVar12->AllocSize;
    UNLOCK();
    LOCK();
    this->OsCurrent = this->OsCurrent - (longlong)pFVar14;
    UNLOCK();
    LOCK();
    this->WasteCurrent = this->WasteCurrent + ((ulonglong)pFVar12->AllocSize - (longlong)pFVar14);
    UNLOCK();
    FWindowsPlatformMemory::BinnedFreeToOS(pFVar9,(ulong64)pFVar14);
  }
  return;
}

// FreeInternal @ 141697910

void __cdecl FMallocBinned::Private::FreeInternal(FMallocBinned *param_1,void *param_2)

{
  FPoolInfo **ppFVar1;
  uint uVar2;
  FPoolTable *pFVar3;
  code *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  ulonglong uVar7;
  PoolHashBucket *pPVar8;
  FPoolInfo *pFVar9;
  void *pvVar10;
  ushort uVar11;
  FPoolInfo *pFVar12;
  uint uVar13;
  FFreeMem *pFVar14;
  int iVar15;
  
  LOCK();
  param_1->CurrentAllocs = param_1->CurrentAllocs + -1;
  UNLOCK();
  uVar2 = param_1->PageSize;
  uVar13 = 0;
  iVar15 = (int)(0x10000 / (ulonglong)uVar2);
  if (iVar15 != -1) {
    pvVar10 = param_2;
    do {
      pFVar9 = (FPoolInfo *)(~((ulonglong)uVar2 - 1) & (ulonglong)pvVar10);
      uVar7 = (ulonglong)pFVar9 >> ((byte)param_1->HashKeyShift & 0x3f);
      uVar11 = 0;
      pPVar8 = param_1->HashBuckets +
               (uVar7 & 0xffffffff & (ulonglong)((int)param_1->MaxHashBuckets - 1));
      do {
        if (pPVar8->Key == (uVar7 & 0xffffffff)) {
          pFVar12 = pPVar8->FirstPool +
                    ((uint)((ulonglong)pFVar9 >> ((byte)param_1->PoolBitShift & 0x3f)) &
                    (uint)param_1->PoolMask);
          if (pFVar12->AllocSize == 0) {
            uVar11 = pFVar12->TableIndex;
          }
          else if (pFVar12 != (FPoolInfo *)0x0) goto LAB_1416979fe;
          break;
        }
        pPVar8 = pPVar8->Next;
      } while (pPVar8 != param_1->HashBuckets +
                         (uVar7 & 0xffffffff & (ulonglong)((int)param_1->MaxHashBuckets - 1)));
      uVar13 = uVar13 + 1;
      pvVar10 = (void *)((longlong)pFVar9 + (-1 - (ulonglong)(uVar11 * uVar2)));
    } while (uVar13 < iVar15 + 1U);
  }
  pFVar9 = (FPoolInfo *)0x0;
  pFVar12 = pFVar9;
LAB_1416979fe:
  uVar11 = pFVar12->TableIndex;
  if ((ulonglong)uVar11 < param_1->BinnedOSTableIndex) {
    pFVar3 = param_1->MemSizeToPoolTable[uVar11];
    EnterCriticalSection((LPCRITICAL_SECTION)&pFVar3->CriticalSection);
    pFVar3->ActiveRequests = pFVar3->ActiveRequests - 1;
    if (pFVar12->FirstMem == (FFreeMem *)0x0) {
      ppFVar1 = &pFVar12->Next;
      if (pFVar12->Next != (FPoolInfo *)0x0) {
        pFVar12->Next->PrevLink = pFVar12->PrevLink;
      }
      *pFVar12->PrevLink = *ppFVar1;
      if (pFVar3->FirstPool != (FPoolInfo *)0x0) {
        pFVar3->FirstPool->PrevLink = ppFVar1;
      }
      *ppFVar1 = pFVar3->FirstPool;
      pFVar12->PrevLink = &pFVar3->FirstPool;
      pFVar3->FirstPool = pFVar12;
    }
    uVar2 = pFVar3->BlockSize;
    if (((longlong)param_2 - (longlong)pFVar9 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OffsetFromBase >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                           ,0x2e1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar14 = (FFreeMem *)
              ((longlong)param_2 -
              (((longlong)param_2 - (longlong)pFVar9) % (longlong)(ulonglong)uVar2 & 0xffffffffU));
    pFVar14->NumFreeBlocks = 1;
    pFVar14->Next = pFVar12->FirstMem;
    pFVar12->FirstMem = pFVar14;
    LOCK();
    param_1->UsedCurrent = param_1->UsedCurrent - (ulonglong)pFVar3->BlockSize;
    UNLOCK();
    pFVar12->Taken = pFVar12->Taken - 1;
    if (pFVar12->Taken == 0) {
      pFVar3->NumActivePools = pFVar3->NumActivePools - 1;
      if ((uint)pFVar12->TableIndex == (uint)param_1->BinnedOSTableIndex) {
        pFVar14 = pFVar12->FirstMem;
      }
      else {
        pFVar14 = (FFreeMem *)
                  (ulonglong)((param_1->PageSize - 1) + pFVar12->AllocSize & -param_1->PageSize);
      }
      LOCK();
      param_1->OsCurrent = param_1->OsCurrent - (longlong)pFVar14;
      UNLOCK();
      LOCK();
      param_1->WasteCurrent =
           param_1->WasteCurrent + ((ulonglong)pFVar12->AllocSize - (longlong)pFVar14);
      UNLOCK();
      if (pFVar12->Next != (FPoolInfo *)0x0) {
        pFVar12->Next->PrevLink = pFVar12->PrevLink;
      }
      *pFVar12->PrevLink = pFVar12->Next;
      uVar5 = param_1->BinnedOSTableIndex;
      pFVar12->TableIndex = 0;
      pFVar12->AllocSize = 0;
      if ((int)uVar5 == 0) {
        pFVar12->FirstMem = (FFreeMem *)0x0;
      }
      FWindowsPlatformMemory::BinnedFreeToOS(pFVar9,(ulong64)pFVar14);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar3->CriticalSection);
  }
  else {
    if ((uint)uVar11 == (uint)param_1->BinnedOSTableIndex) {
      pFVar14 = pFVar12->FirstMem;
    }
    else {
      pFVar14 = (FFreeMem *)(ulonglong)((pFVar12->AllocSize - 1) + uVar2 & -uVar2);
    }
    LOCK();
    param_1->UsedCurrent = param_1->UsedCurrent - (ulonglong)pFVar12->AllocSize;
    UNLOCK();
    LOCK();
    param_1->OsCurrent = param_1->OsCurrent - (longlong)pFVar14;
    UNLOCK();
    LOCK();
    param_1->WasteCurrent =
         param_1->WasteCurrent + ((ulonglong)pFVar12->AllocSize - (longlong)pFVar14);
    UNLOCK();
    FWindowsPlatformMemory::BinnedFreeToOS(pFVar9,(ulong64)pFVar14);
  }
  return;
}

// GetAllocationSize @ 141698870

bool __thiscall FMallocBinned::GetAllocationSize(FMallocBinned *this,void *param_1,ulong64 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  PoolHashBucket *pPVar6;
  FFreeMem *pFVar7;
  ushort uVar8;
  FPoolInfo *pFVar9;
  longlong lVar10;
  FPoolInfo *pFVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  uVar13 = 0;
  uVar1 = this->PageSize;
  iVar14 = (int)(0x10000 / (ulonglong)uVar1);
  if (iVar14 != -1) {
    pvVar12 = param_1;
    do {
      pFVar11 = (FPoolInfo *)(~((ulonglong)uVar1 - 1) & (ulonglong)pvVar12);
      uVar5 = (ulonglong)pFVar11 >> ((byte)this->HashKeyShift & 0x3f);
      uVar8 = 0;
      pPVar6 = this->HashBuckets + (uVar5 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1))
      ;
      do {
        if (pPVar6->Key == (uVar5 & 0xffffffff)) {
          pFVar9 = pPVar6->FirstPool +
                   ((uint)((ulonglong)pFVar11 >> ((byte)this->PoolBitShift & 0x3f)) &
                   (uint)this->PoolMask);
          if (pFVar9->AllocSize == 0) {
            uVar8 = pFVar9->TableIndex;
          }
          else if (pFVar9 != (FPoolInfo *)0x0) goto LAB_14169896e;
          break;
        }
        pPVar6 = pPVar6->Next;
      } while (pPVar6 != this->HashBuckets +
                         (uVar5 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1)));
      uVar13 = uVar13 + 1;
      pvVar12 = (void *)((longlong)pFVar11 + (-1 - (ulonglong)(uVar8 * uVar1)));
    } while (uVar13 < iVar14 + 1U);
  }
  pFVar9 = (FPoolInfo *)0x0;
  pFVar11 = pFVar9;
LAB_14169896e:
  lVar10 = (longlong)param_1 - (longlong)pFVar11;
  if ((lVar10 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OffsetFromBase >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x608,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar8 = pFVar9->TableIndex;
  if ((ulonglong)uVar8 < this->BinnedOSTableIndex) {
    uVar1 = this->MemSizeToPoolTable[uVar8]->BlockSize;
    uVar5 = (ulonglong)(uVar1 - (int)(lVar10 % (longlong)(ulonglong)uVar1));
  }
  else {
    if ((uint)uVar8 == (uint)this->BinnedOSTableIndex) {
      pFVar7 = pFVar9->FirstMem;
    }
    else {
      pFVar7 = (FFreeMem *)(ulonglong)((this->PageSize - 1) + pFVar9->AllocSize & -this->PageSize);
    }
    uVar5 = (longlong)pFVar7 - lVar10;
  }
  *param_2 = uVar5;
  return true;
}

// GetAllocatorStats @ 141698d20

void __thiscall FMallocBinned::GetAllocatorStats(FMallocBinned *this,FGenericMemoryStats *param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  TStringView<wchar_t> local_58;
  
  FMalloc::GetAllocatorStats((FMalloc *)this,param_1);
  if (Private::bHasInitializedStatsMetadata == false) {
    (**(code **)(this->_padding_ + 0x98))(this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  Private::UpdateSlackStat(this);
  uVar1 = this->OsCurrent;
  uVar2 = this->OsPeak;
  uVar3 = this->WasteCurrent;
  uVar4 = this->WastePeak;
  uVar5 = this->UsedCurrent;
  uVar6 = this->UsedPeak;
  uVar7 = this->CurrentAllocs;
  uVar8 = this->TotalAllocs;
  uVar9 = this->SlackCurrent;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  local_58.DataPtr = L"Binned Os Current";
  local_58.Size = 0x11;
  FGenericMemoryStats::Add(param_1,&local_58,uVar1);
  local_58.Size = 0xe;
  local_58.DataPtr = L"Binned Os Peak";
  FGenericMemoryStats::Add(param_1,&local_58,uVar2);
  local_58.Size = 0x14;
  local_58.DataPtr = L"Binned Waste Current";
  FGenericMemoryStats::Add(param_1,&local_58,uVar3);
  local_58.Size = 0x11;
  local_58.DataPtr = L"Binned Waste Peak";
  FGenericMemoryStats::Add(param_1,&local_58,uVar4);
  local_58.Size = 0x13;
  local_58.DataPtr = L"Binned Used Current";
  FGenericMemoryStats::Add(param_1,&local_58,uVar5);
  local_58.Size = 0x10;
  local_58.DataPtr = L"Binned Used Peak";
  FGenericMemoryStats::Add(param_1,&local_58,uVar6);
  local_58.DataPtr = L"Binned Current Allocs";
  local_58.Size = 0x15;
  FGenericMemoryStats::Add(param_1,&local_58,uVar7);
  local_58.DataPtr = L"Binned Total Allocs";
  local_58.Size = 0x13;
  FGenericMemoryStats::Add(param_1,&local_58,uVar8);
  local_58.DataPtr = L"Binned Slack Current";
  local_58.Size = 0x14;
  FGenericMemoryStats::Add(param_1,&local_58,uVar9);
  return;
}

// GetDescriptiveName @ 141699580

wchar_t * __thiscall FMallocBinned::GetDescriptiveName(FMallocBinned *this)

{
  return L"binned";
}

// InitializeStatsMetadata @ 1416b0440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned::InitializeStatsMetadata(FMallocBinned *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  Private::bHasInitializedStatsMetadata = true;
  FMalloc::InitializeStatsMetadata((FMalloc *)this);
  if (StatPtr_STAT_Binned_OsCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_OsCurrent>)0x0) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_OsCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsCurrent,*pFVar1,
               L"Binned Os Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_OsPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_OsPeak>)0x0) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_OsPeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsPeak,*pFVar1,L"Binned Os Peak",
               "STATGROUP_MemoryAllocator","STATCAT_Advanced",L"Memory Allocator",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_WasteCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_WasteCurrent>)0x0
     ) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_WasteCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WasteCurrent,*pFVar1,
               L"Binned Waste Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_WastePeak == (FThreadSafeStaticStat<FStat_STAT_Binned_WastePeak>)0x0) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_WastePeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WastePeak,*pFVar1,
               L"Binned Waste Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_UsedCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedCurrent>)0x0)
  {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_UsedCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedCurrent,*pFVar1,
               L"Binned Used Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_UsedPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedPeak>)0x0) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_UsedPeak");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedPeak,*pFVar1,
               L"Binned Used Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  if (StatPtr_STAT_Binned_CurrentAllocs ==
      (FThreadSafeStaticStat<FStat_STAT_Binned_CurrentAllocs>)0x0) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_CurrentAllocs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_CurrentAllocs,*pFVar1,
               L"Binned Current Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  if (StatPtr_STAT_Binned_TotalAllocs == (FThreadSafeStaticStat<FStat_STAT_Binned_TotalAllocs>)0x0)
  {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_TotalAllocs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_TotalAllocs,*pFVar1,
               L"Binned Total Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
  }
  if (StatPtr_STAT_Binned_SlackCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_SlackCurrent>)0x0
     ) {
    pFVar1 = ::FName::FName(local_res10,"STAT_Binned_SlackCurrent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_SlackCurrent,*pFVar1,
               L"Binned Slack Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
               L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
    return;
  }
  return;
}

// IsInternallyThreadSafe @ 1416b0bc0

bool __thiscall FMallocBinned::IsInternallyThreadSafe(FMallocBinned *this)

{
  return true;
}

// Malloc @ 1416b2910

void * __thiscall FMallocBinned::Malloc(FMallocBinned *this,ulong64 param_1,uint param_2)

{
  uint *puVar1;
  FPoolInfo **ppFVar2;
  FPoolInfo **ppFVar3;
  long64 *plVar4;
  longlong lVar5;
  FLLMTracker *pFVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  void *pvVar13;
  FPoolInfo *pFVar14;
  FLowLevelMemTracker *pFVar15;
  FTagData *pFVar16;
  FLLMThreadState *pFVar17;
  PoolHashBucket *pPVar18;
  FPoolInfo *pFVar19;
  void *pvVar20;
  PoolHashBucket *pPVar21;
  PoolHashBucket *pPVar22;
  FFreeMem *pFVar23;
  ushort uVar24;
  ulonglong uVar25;
  FFreeMem *pFVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ELLMTagSet EVar31;
  longlong lVar32;
  FPoolTable *pFVar33;
  ulonglong uVar34;
  void *local_res8;
  ELLMTagSet local_res18;
  
  if ((this->PageSize < param_2) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4210710178070264564>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                          ,0x50c,"Alignment <= PageSize"), bVar11)) {
    pcVar9 = (code *)swi(3);
    pvVar13 = (void *)(*pcVar9)();
    return pvVar13;
  }
  LOCK();
  this->CurrentAllocs = this->CurrentAllocs + 1;
  UNLOCK();
  LOCK();
  this->TotalAllocs = this->TotalAllocs + 1;
  UNLOCK();
  uVar29 = 1;
  if (1 < param_1) {
    uVar29 = param_1;
  }
  uVar25 = 0x10;
  if (0x10 < param_2) {
    uVar25 = (ulonglong)param_2;
  }
  uVar28 = (uint)uVar29;
  iVar10 = (int)this;
  if (uVar29 < this->BinnedSizeLimit) {
    if ((uint)uVar25 == 0x10) {
      pFVar33 = this->MemSizeToPoolTable[uVar29];
      EnterCriticalSection((LPCRITICAL_SECTION)&pFVar33->CriticalSection);
      pFVar33->ActiveRequests = pFVar33->ActiveRequests + 1;
      pFVar33->TotalRequests = pFVar33->TotalRequests + 1;
      pFVar33->TotalWaste = pFVar33->TotalWaste + (ulonglong)(pFVar33->BlockSize - uVar28);
      pFVar14 = pFVar33->FirstPool;
      uVar12 = pFVar33->ActiveRequests;
      if (pFVar33->ActiveRequests < pFVar33->MaxActiveRequests) {
        uVar12 = pFVar33->MaxActiveRequests;
      }
      pFVar33->MaxActiveRequests = uVar12;
      uVar12 = uVar28;
      if (uVar28 <= pFVar33->MaxRequest) {
        uVar12 = pFVar33->MaxRequest;
      }
      pFVar33->MaxRequest = uVar12;
      if (pFVar33->MinRequest <= uVar28) {
        uVar28 = pFVar33->MinRequest;
      }
      pFVar33->MinRequest = uVar28;
      if (pFVar14 == (FPoolInfo *)0x0) {
        pFVar14 = Private::AllocatePoolMemory(this,pFVar33,0x10000,(ushort)uVar29);
      }
      pFVar14->Taken = pFVar14->Taken + 1;
      pFVar26 = pFVar14->FirstMem;
      puVar1 = &pFVar26->NumFreeBlocks;
      *puVar1 = *puVar1 - 1;
      uVar28 = pFVar26->NumFreeBlocks;
      uVar12 = pFVar33->BlockSize;
      pFVar26 = pFVar14->FirstMem;
      if ((pFVar26->NumFreeBlocks == 0) &&
         (pFVar23 = pFVar26->Next, pFVar14->FirstMem = pFVar23, pFVar23 == (FFreeMem *)0x0)) {
        ppFVar2 = &pFVar14->Next;
        if (pFVar14->Next != (FPoolInfo *)0x0) {
          pFVar14->Next->PrevLink = pFVar14->PrevLink;
        }
        *pFVar14->PrevLink = *ppFVar2;
        ppFVar3 = &pFVar33->ExhaustedPool;
        if (*ppFVar3 != (FPoolInfo *)0x0) {
          (*ppFVar3)->PrevLink = ppFVar2;
        }
        *ppFVar2 = *ppFVar3;
        pFVar14->PrevLink = ppFVar3;
        *ppFVar3 = pFVar14;
      }
      do {
        lVar5 = this->UsedPeak;
        LOCK();
        plVar4 = &this->UsedCurrent;
        lVar32 = *plVar4;
        *plVar4 = *plVar4 + (ulonglong)pFVar33->BlockSize;
        UNLOCK();
        if (lVar32 < this->UsedPeak) {
          lVar32 = this->UsedPeak;
        }
        if ((iVar10 + 0x412c8U & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar11 = lVar5 == this->UsedPeak;
        if (bVar11) {
          this->UsedPeak = lVar32;
        }
        UNLOCK();
      } while (!bVar11);
      LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar33->CriticalSection);
      return (void *)((ulonglong)(&pFVar26->field_0xf + uVar28 * uVar12) & 0xfffffffffffffff0);
    }
LAB_1416b2b08:
    if ((uVar29 <= this->PageSize) || (this->PagePoolTable[1].BlockSize < uVar29))
    goto LAB_1416b2ccc;
  }
  else if (this->PagePoolTable[0].BlockSize < uVar29) goto LAB_1416b2b08;
  if ((uint)uVar25 < 0x1001) {
    uVar30 = (ulonglong)this->PageSize;
    lVar32 = 0x11a0;
    if (uVar30 <= uVar29) {
      lVar32 = 0x1208;
    }
    pFVar33 = (FPoolTable *)((longlong)(this->AccessGuard).CriticalSection.Opaque1 + lVar32 + -0x10)
    ;
    EnterCriticalSection((LPCRITICAL_SECTION)&pFVar33->CriticalSection);
    pFVar33->ActiveRequests = pFVar33->ActiveRequests + 1;
    pFVar33->TotalRequests = pFVar33->TotalRequests + 1;
    pFVar33->TotalWaste = pFVar33->TotalWaste + (ulonglong)(pFVar33->BlockSize - uVar28);
    pFVar14 = pFVar33->FirstPool;
    uVar12 = pFVar33->ActiveRequests;
    if (pFVar33->ActiveRequests < pFVar33->MaxActiveRequests) {
      uVar12 = pFVar33->MaxActiveRequests;
    }
    pFVar33->MaxActiveRequests = uVar12;
    uVar12 = uVar28;
    if (uVar28 <= pFVar33->MaxRequest) {
      uVar12 = pFVar33->MaxRequest;
    }
    pFVar33->MaxRequest = uVar12;
    if (pFVar33->MinRequest <= uVar28) {
      uVar28 = pFVar33->MinRequest;
    }
    pFVar33->MinRequest = uVar28;
    if (pFVar14 == (FPoolInfo *)0x0) {
      iVar27 = 3;
      if (uVar30 <= uVar29) {
        iVar27 = 6;
      }
      pFVar14 = Private::AllocatePoolMemory
                          (this,pFVar33,iVar27 * this->PageSize,
                           (ushort)(uVar30 <= uVar29) + (short)this->BinnedSizeLimit);
    }
    pFVar14->Taken = pFVar14->Taken + 1;
    pFVar26 = pFVar14->FirstMem;
    puVar1 = &pFVar26->NumFreeBlocks;
    *puVar1 = *puVar1 - 1;
    uVar28 = pFVar26->NumFreeBlocks;
    uVar12 = pFVar33->BlockSize;
    pFVar26 = pFVar14->FirstMem;
    if ((pFVar26->NumFreeBlocks == 0) &&
       (pFVar23 = pFVar26->Next, pFVar14->FirstMem = pFVar23, pFVar23 == (FFreeMem *)0x0)) {
      ppFVar2 = &pFVar14->Next;
      if (pFVar14->Next != (FPoolInfo *)0x0) {
        pFVar14->Next->PrevLink = pFVar14->PrevLink;
      }
      *pFVar14->PrevLink = *ppFVar2;
      ppFVar3 = &pFVar33->ExhaustedPool;
      if (*ppFVar3 != (FPoolInfo *)0x0) {
        (*ppFVar3)->PrevLink = ppFVar2;
      }
      *ppFVar2 = *ppFVar3;
      pFVar14->PrevLink = ppFVar3;
      *ppFVar3 = pFVar14;
    }
    do {
      lVar5 = this->UsedPeak;
      LOCK();
      plVar4 = &this->UsedCurrent;
      lVar32 = *plVar4;
      *plVar4 = *plVar4 + (ulonglong)pFVar33->BlockSize;
      UNLOCK();
      if (lVar32 < this->UsedPeak) {
        lVar32 = this->UsedPeak;
      }
      if ((iVar10 + 0x412c8U & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar11 = lVar5 == this->UsedPeak;
      if (bVar11) {
        this->UsedPeak = lVar32;
      }
      UNLOCK();
    } while (!bVar11);
    LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar33->CriticalSection);
    return (void *)((longlong)pFVar26 + uVar25 + ((ulonglong)(uVar28 * uVar12) - 1) & -uVar25);
  }
LAB_1416b2ccc:
  pFVar26 = (FFreeMem *)
            ((uVar29 - 1) + (ulonglong)this->PageSize & ~((ulonglong)this->PageSize - 1));
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (pFVar15 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) {
    pvVar13 = FWindowsPlatformMemory::BinnedAllocFromOS((ulong64)pFVar26);
  }
  else {
    FLowLevelMemTracker::BootstrapInitialise(pFVar15);
    pFVar6 = pFVar15->Trackers[0];
    pFVar16 = FLowLevelMemTracker::FindOrAddTagData(pFVar6->LLMRef,FMalloc,Scope);
    pFVar17 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar6);
    UE::LLMPrivate::FLLMThreadState::PushTag(pFVar17,pFVar16,None);
    pvVar13 = FWindowsPlatformMemory::BinnedAllocFromOS((ulong64)pFVar26);
    pFVar15 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar15->Trackers[0],None);
  }
  if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Private::OutOfMemory((ulong64)pFVar26,0);
  }
  pvVar20 = (void *)((uVar25 - 1) + (longlong)pvVar13 & -uVar25);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  pPVar18 = this->HashBuckets;
  if (pPVar18 == (PoolHashBucket *)0x0) {
    bVar11 = false;
    EVar31 = local_res18;
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (pFVar15 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
      FLowLevelMemTracker::BootstrapInitialise(pFVar15);
      pFVar6 = pFVar15->Trackers[0];
      bVar11 = true;
      pFVar16 = FLowLevelMemTracker::FindOrAddTagData(pFVar6->LLMRef,FMalloc,Scope);
      pFVar17 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar6);
      UE::LLMPrivate::FLLMThreadState::PushTag(pFVar17,pFVar16,None);
      EVar31 = None;
    }
    pPVar18 = FWindowsPlatformMemory::BinnedAllocFromOS
                        (((ulonglong)this->PageSize - 1) + this->MaxHashBuckets * 0x20 &
                         ~((ulonglong)this->PageSize - 1));
    uVar25 = 0;
    if (this->MaxHashBuckets != 0) {
      do {
        uVar30 = (ulonglong)((int)uVar25 + 1);
        pPVar21 = pPVar18 + uVar25;
        pPVar21->Key = 0;
        pPVar21->FirstPool = (FPoolInfo *)0x0;
        pPVar21->Prev = pPVar21;
        pPVar21->Next = pPVar21;
        uVar25 = uVar30;
      } while (uVar30 < this->MaxHashBuckets);
    }
    if (bVar11) {
      pFVar15 = FLowLevelMemTracker::Get();
      UE::LLMPrivate::FLLMTracker::PopTag(pFVar15->Trackers[EVar31],EVar31);
    }
    this->HashBuckets = pPVar18;
  }
  uVar34 = (ulonglong)pvVar13 >> ((byte)this->HashKeyShift & 0x3f);
  uVar7 = this->PoolBitShift;
  uVar30 = this->MaxHashBuckets - 1 & uVar34;
  uVar25 = this->PoolMask;
  pPVar21 = pPVar18 + uVar30;
  while ((ppFVar2 = &pPVar21->FirstPool, pPVar21->Key != uVar34 && (*ppFVar2 != (FPoolInfo *)0x0)))
  {
    pPVar21 = pPVar21->Next;
    if (pPVar21 == pPVar18 + uVar30) {
      pPVar18 = Private::AllocateHashBucket(this);
      if (pPVar18->FirstPool == (FPoolInfo *)0x0) {
        pFVar14 = Private::CreateIndirect(this);
        pPVar18->FirstPool = pFVar14;
      }
      pPVar18->Key = uVar34;
      pPVar22 = this->HashBuckets + uVar30;
      pPVar21 = pPVar22->Prev;
      pPVar18->Prev = pPVar21;
      pPVar18->Next = pPVar22;
      pPVar21->Next = pPVar18;
      pPVar22->Prev = pPVar18;
      pFVar14 = pPVar18->FirstPool;
LAB_1416b2f34:
      pFVar14 = pFVar14 + ((ulonglong)pvVar13 >> ((byte)uVar7 & 0x3f) & uVar25);
      pFVar23 = (FFreeMem *)(ulonglong)this->PageSize;
      if (pvVar13 != (void *)(~(ulonglong)&pFVar23[-1].field_0xf & (ulonglong)pvVar20)) {
        uVar24 = 0;
        local_res8 = pvVar13;
        for (; pFVar23 < pFVar26;
            pFVar23 = (FFreeMem *)((longlong)&pFVar23->Next + (ulonglong)this->PageSize)) {
          pPVar18 = this->HashBuckets;
          if (pPVar18 == (PoolHashBucket *)0x0) {
            bVar11 = false;
            if ((FLowLevelMemTracker::EnabledState != Disabled) &&
               (pFVar15 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)
               ) {
              FLowLevelMemTracker::BootstrapInitialise(pFVar15);
              pFVar6 = pFVar15->Trackers[0];
              local_res18 = None;
              bVar11 = true;
              local_res8 = (void *)0x0;
              pFVar16 = FLowLevelMemTracker::FindOrAddTagData(pFVar6->LLMRef,FMalloc,Scope);
              pFVar17 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(pFVar6);
              UE::LLMPrivate::FLLMThreadState::PushTag(pFVar17,pFVar16,None);
            }
            pPVar18 = FWindowsPlatformMemory::BinnedAllocFromOS
                                (((ulonglong)this->PageSize - 1) + this->MaxHashBuckets * 0x20 &
                                 ~((ulonglong)this->PageSize - 1));
            uVar25 = 0;
            if (this->MaxHashBuckets != 0) {
              do {
                uVar30 = (ulonglong)((int)uVar25 + 1);
                pPVar21 = pPVar18 + uVar25;
                pPVar21->Key = 0;
                pPVar21->FirstPool = (FPoolInfo *)0x0;
                pPVar21->Prev = pPVar21;
                pPVar21->Next = pPVar21;
                uVar25 = uVar30;
              } while (uVar30 < this->MaxHashBuckets);
            }
            if (bVar11) {
              pFVar15 = FLowLevelMemTracker::Get();
              UE::LLMPrivate::FLLMTracker::PopTag
                        (pFVar15->Trackers[local_res18],(ELLMTagSet)local_res8);
            }
            this->HashBuckets = pPVar18;
          }
          uVar34 = (ulonglong)((longlong)pvVar13 + (longlong)pFVar23) >>
                   ((byte)this->HashKeyShift & 0x3f);
          uVar7 = this->PoolBitShift;
          uVar30 = this->MaxHashBuckets - 1 & uVar34;
          uVar25 = this->PoolMask;
          pPVar18 = pPVar18 + uVar30;
          uVar8 = pPVar18->Key;
          pPVar21 = pPVar18;
          while ((uVar8 != uVar34 && (pPVar21->FirstPool != (FPoolInfo *)0x0))) {
            pPVar21 = pPVar21->Next;
            if (pPVar21 == pPVar18) {
              pPVar18 = Private::AllocateHashBucket(this);
              if (pPVar18->FirstPool == (FPoolInfo *)0x0) {
                pFVar19 = Private::CreateIndirect(this);
                pPVar18->FirstPool = pFVar19;
              }
              pPVar18->Key = uVar34;
              pPVar22 = this->HashBuckets + uVar30;
              pPVar21 = pPVar22->Prev;
              pPVar18->Prev = pPVar21;
              pPVar18->Next = pPVar22;
              pPVar21->Next = pPVar18;
              pPVar22->Prev = pPVar18;
              pFVar19 = pPVar18->FirstPool;
              goto LAB_1416b30e7;
            }
            uVar8 = pPVar21->Key;
          }
          pFVar19 = pPVar21->FirstPool;
          if (pFVar19 == (FPoolInfo *)0x0) {
            pPVar21->Key = uVar34;
            pFVar19 = Private::CreateIndirect(this);
            pPVar21->FirstPool = pFVar19;
          }
LAB_1416b30e7:
          pFVar19 = pFVar19 + ((ulonglong)((longlong)pvVar13 + (longlong)pFVar23) >>
                               ((byte)uVar7 & 0x3f) & uVar25);
          if ((pFVar19 == (FPoolInfo *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TrailingPool",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                                  ,0x577,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pvVar13 = (void *)(*pcVar9)();
            return pvVar13;
          }
          uVar7 = this->BinnedOSTableIndex;
          pFVar19->TableIndex = uVar24;
          pFVar19->AllocSize = 0;
          if ((uint)uVar24 == (uint)uVar7) {
            pFVar19->FirstMem = (FFreeMem *)0x0;
          }
          uVar24 = uVar24 + 1;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
      uVar12 = (uint)this->BinnedOSTableIndex;
      pFVar14->TableIndex = (ushort)uVar12;
      pFVar14->AllocSize = uVar28;
      if ((uVar12 & 0xffff) == uVar12) {
        pFVar14->FirstMem = pFVar26;
      }
      do {
        lVar5 = this->OsPeak;
        LOCK();
        plVar4 = &this->OsCurrent;
        lVar32 = *plVar4;
        *plVar4 = (longlong)&pFVar26->Next + *plVar4;
        UNLOCK();
        if (lVar32 < this->OsPeak) {
          lVar32 = this->OsPeak;
        }
        if ((iVar10 + 0x412a8U & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar11 = lVar5 == this->OsPeak;
        if (bVar11) {
          this->OsPeak = lVar32;
        }
        UNLOCK();
      } while (!bVar11);
      do {
        lVar5 = this->UsedPeak;
        LOCK();
        plVar4 = &this->UsedCurrent;
        lVar32 = *plVar4;
        *plVar4 = *plVar4 + uVar29;
        UNLOCK();
        if (lVar32 < this->UsedPeak) {
          lVar32 = this->UsedPeak;
        }
        if ((iVar10 + 0x412c8U & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar11 = lVar5 == this->UsedPeak;
        if (bVar11) {
          this->UsedPeak = lVar32;
        }
        UNLOCK();
      } while (!bVar11);
      do {
        lVar5 = this->WastePeak;
        LOCK();
        plVar4 = &this->WasteCurrent;
        lVar32 = *plVar4;
        *plVar4 = (longlong)pFVar26 + (*plVar4 - uVar29);
        UNLOCK();
        if (lVar32 < this->WastePeak) {
          lVar32 = this->WastePeak;
        }
        if ((iVar10 + 0x412b8U & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar11 = lVar5 == this->WastePeak;
        if (bVar11) {
          this->WastePeak = lVar32;
        }
        UNLOCK();
      } while (!bVar11);
      return pvVar20;
    }
  }
  pFVar14 = *ppFVar2;
  if (pFVar14 == (FPoolInfo *)0x0) {
    pPVar21->Key = uVar34;
    pFVar14 = Private::CreateIndirect(this);
    *ppFVar2 = pFVar14;
  }
  goto LAB_1416b2f34;
}

// OutOfMemory @ 1416b5dc0

void __cdecl FMallocBinned::Private::OutOfMemory(ulong64 param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// QuantizeSize @ 1416b9820

ulong64 __thiscall FMallocBinned::QuantizeSize(FMallocBinned *this,ulong64 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = 0x10;
  if (0x10 < param_2) {
    uVar3 = param_2;
  }
  if (this->PageSize < uVar3) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4210710178070264289>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                       ,0x61f,"Alignment <= PageSize");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  if (param_1 < this->BinnedSizeLimit) {
    uVar6 = (ulonglong)this->MemSizeToPoolTable[param_1]->BlockSize;
  }
  else if ((this->PagePoolTable[0].BlockSize < param_1) &&
          ((uVar6 = (ulonglong)this->PageSize, param_1 <= uVar6 ||
           (this->PagePoolTable[1].BlockSize < param_1)))) {
    uVar6 = (param_1 - 1) + uVar6 & ~(uVar6 - 1);
  }
  else {
    lVar5 = 0x11b0;
    if (this->PageSize <= param_1) {
      lVar5 = 0x1218;
    }
    uVar6 = (ulonglong)
            *(uint *)((longlong)(this->AccessGuard).CriticalSection.Opaque1 + lVar5 + -0x10);
  }
  if (uVar6 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result >= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                       ,0x63e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return uVar6;
}

// Realloc @ 1416ba9e0

void * __thiscall
FMallocBinned::Realloc(FMallocBinned *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  PoolHashBucket *pPVar8;
  FFreeMem *pFVar9;
  longlong lVar10;
  FPoolInfo *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar15;
  ushort uVar16;
  FPoolInfo *pFVar17;
  FPoolInfo *pFVar14;
  
  uVar15 = 0x10;
  if (0x10 < param_3) {
    uVar15 = param_3;
  }
  if ((this->PageSize < uVar15) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4210710178070264432>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                         ,0x590,"Alignment <= PageSize"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar3)();
    return pvVar6;
  }
  if ((param_1 == (void *)0x0) || (param_2 == 0)) {
    if (param_1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416bad84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar6 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,uVar15);
      return pvVar6;
    }
    (**(code **)(this->_padding_ + 0x48))(this,param_1);
    return (void *)0x0;
  }
  pFVar17 = (FPoolInfo *)0x0;
  uVar1 = this->PageSize;
  iVar5 = (int)(0x10000 / (ulonglong)uVar1);
  pFVar11 = pFVar17;
  if (iVar5 != -1) {
    pFVar14 = pFVar17;
    pvVar6 = param_1;
    do {
      uVar12 = ~((ulonglong)uVar1 - 1) & (ulonglong)pvVar6;
      uVar7 = uVar12 >> ((byte)this->HashKeyShift & 0x3f);
      uVar16 = 0;
      pPVar8 = this->HashBuckets + (uVar7 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1))
      ;
      do {
        if (pPVar8->Key == (uVar7 & 0xffffffff)) {
          pFVar11 = pPVar8->FirstPool +
                    ((uint)(uVar12 >> ((byte)this->PoolBitShift & 0x3f)) & (uint)this->PoolMask);
          if (pFVar11->AllocSize == 0) {
            uVar16 = pFVar11->TableIndex;
          }
          else if (pFVar11 != (FPoolInfo *)0x0) goto LAB_1416bab3c;
          break;
        }
        pPVar8 = pPVar8->Next;
      } while (pPVar8 != this->HashBuckets +
                         (uVar7 & 0xffffffff & (ulonglong)((int)this->MaxHashBuckets - 1)));
      uVar13 = (int)pFVar14 + 1;
      pFVar14 = (FPoolInfo *)(ulonglong)uVar13;
      pvVar6 = (void *)((uVar12 - uVar16 * uVar1) - 1);
      pFVar11 = pFVar17;
    } while (uVar13 < iVar5 + 1U);
  }
LAB_1416bab3c:
  uVar16 = pFVar11->TableIndex;
  if ((ulonglong)uVar16 < this->BinnedOSTableIndex) {
    if ((uVar16 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pool->TableIndex > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                           ,0x5b6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
    if (((param_2 <= this->MemSizeToPoolTable[pFVar11->TableIndex]->BlockSize) &&
        (this->MemSizeToPoolTable[(ulonglong)pFVar11->TableIndex - 1]->BlockSize < param_2)) &&
       (((ulonglong)param_1 & (ulonglong)uVar15 - 1) == 0)) {
      return param_1;
    }
    pvVar6 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,uVar15);
    uVar15 = this->MemSizeToPoolTable[pFVar11->TableIndex]->BlockSize;
  }
  else {
    uVar13 = (uint)this->BinnedOSTableIndex;
    if (uVar16 == uVar13) {
      pFVar9 = pFVar11->FirstMem;
    }
    else {
      pFVar9 = (FFreeMem *)(ulonglong)((pFVar11->AllocSize - 1) + uVar1 & -uVar1);
    }
    if (param_2 <= pFVar9) {
      if (uVar16 == uVar13) {
        pFVar9 = pFVar11->FirstMem;
      }
      else {
        pFVar9 = (FFreeMem *)(ulonglong)((pFVar11->AllocSize - 1) + uVar1 & -uVar1);
      }
      if ((ulonglong)((longlong)pFVar9 * 2) <= param_2 * 3) {
        EnterCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
        LOCK();
        this->UsedCurrent = this->UsedCurrent + (longlong)(int)((uint)param_2 - pFVar11->AllocSize);
        UNLOCK();
        do {
          lVar2 = this->UsedPeak;
          lVar10 = this->UsedCurrent;
          if (this->UsedCurrent < this->UsedPeak) {
            lVar10 = this->UsedPeak;
          }
          if (((int)this + 0x412c8U & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar4 = lVar2 == this->UsedPeak;
          if (bVar4) {
            this->UsedPeak = lVar10;
          }
          UNLOCK();
        } while (!bVar4);
        LOCK();
        this->WasteCurrent = this->WasteCurrent + (pFVar11->AllocSize - param_2);
        UNLOCK();
        uVar15 = (uint)this->BinnedOSTableIndex;
        if (pFVar11->TableIndex == uVar15) {
          pFVar9 = pFVar11->FirstMem;
        }
        else {
          pFVar9 = (FFreeMem *)
                   (ulonglong)((pFVar11->AllocSize - 1) + this->PageSize & -this->PageSize);
        }
        pFVar11->TableIndex = (ushort)uVar15;
        pFVar11->AllocSize = (uint)param_2;
        if ((uVar15 & 0xffff) == uVar15) {
          pFVar11->FirstMem = pFVar9;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
        return param_1;
      }
    }
    pvVar6 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,uVar15);
    uVar15 = pFVar11->AllocSize;
  }
  uVar7 = (ulonglong)uVar15;
  if (param_2 < uVar15) {
    uVar7 = param_2;
  }
  memcpy(pvVar6,param_1,uVar7);
  (**(code **)(this->_padding_ + 0x48))(this,param_1);
  return pvVar6;
}

// UpdateSlackStat @ 1416c58f0

void __cdecl FMallocBinned::Private::UpdateSlackStat(FMallocBinned *param_1)

{
  ulong64 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  ulonglong *puVar34;
  ulonglong *puVar35;
  ulonglong *puVar36;
  ulonglong *puVar37;
  ulonglong *puVar38;
  ulonglong *puVar39;
  ulonglong uVar40;
  ulong64 *puVar41;
  longlong lVar42;
  double dVar43;
  
  puVar41 = &param_1->PoolTable[0].TotalRequests;
  dVar43 = 0.0;
  lVar42 = 5;
  do {
    puVar1 = puVar41 + 1;
    uVar40 = *puVar41;
    puVar2 = (uint *)(puVar41 + -2);
    puVar3 = puVar41 + 0xe;
    puVar4 = (uint *)(puVar41 + -9);
    puVar5 = (uint *)(puVar41 + -3);
    puVar6 = puVar41 + 0xd;
    puVar7 = puVar41 + 0xb;
    puVar10 = puVar41 + 0x1b;
    puVar8 = puVar41 + 4;
    puVar9 = puVar41 + 10;
    puVar11 = puVar41 + 0x1a;
    puVar12 = puVar41 + 0x18;
    puVar13 = puVar41 + 0x28;
    puVar14 = puVar41 + 0x11;
    puVar15 = puVar41 + 0x17;
    puVar16 = puVar41 + 0x27;
    puVar17 = puVar41 + 0x25;
    puVar18 = puVar41 + 0x35;
    puVar19 = puVar41 + 0x1e;
    puVar20 = puVar41 + 0x24;
    puVar21 = puVar41 + 0x34;
    puVar22 = puVar41 + 0x32;
    puVar23 = puVar41 + 0x42;
    puVar24 = puVar41 + 0x2b;
    puVar25 = puVar41 + 0x31;
    puVar26 = puVar41 + 0x41;
    puVar27 = puVar41 + 0x3f;
    puVar28 = puVar41 + 0x4f;
    puVar29 = puVar41 + 0x38;
    puVar30 = puVar41 + 0x3e;
    puVar31 = puVar41 + 0x4e;
    puVar32 = puVar41 + 0x4c;
    puVar33 = puVar41 + 0x5c;
    puVar34 = puVar41 + 0x45;
    puVar35 = puVar41 + 0x4b;
    puVar36 = puVar41 + 0x5b;
    puVar37 = puVar41 + 0x59;
    puVar38 = puVar41 + 0x52;
    puVar39 = puVar41 + 0x58;
    puVar41 = puVar41 + 0x68;
    dVar43 = dVar43 + ((double)*puVar1 / (double)uVar40) * (double)*puVar2 +
             (double)((int)(0x10000 % (ulonglong)*puVar4) * *puVar5) +
             ((double)*puVar3 / (double)*puVar6) * (double)(uint)*puVar7 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar8) * (int)*puVar9) +
             ((double)*puVar10 / (double)*puVar11) * (double)(uint)*puVar12 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar14) * (int)*puVar15) +
             ((double)*puVar13 / (double)*puVar16) * (double)(uint)*puVar17 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar19) * (int)*puVar20) +
             ((double)*puVar18 / (double)*puVar21) * (double)(uint)*puVar22 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar24) * (int)*puVar25) +
             ((double)*puVar23 / (double)*puVar26) * (double)(uint)*puVar27 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar29) * (int)*puVar30) +
             ((double)*puVar28 / (double)*puVar31) * (double)(uint)*puVar32 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar34) * (int)*puVar35) +
             ((double)*puVar33 / (double)*puVar36) * (double)(uint)*puVar37 +
             (double)(uint)((int)(0x10000 % (ulonglong)(uint)*puVar38) * (int)*puVar39);
    lVar42 = lVar42 + -1;
  } while (lVar42 != 0);
  param_1->SlackCurrent =
       (param_1->OsCurrent -
       (((longlong)
         (((double)param_1->PoolTable[0x28].TotalWaste /
          (double)param_1->PoolTable[0x28].TotalRequests) *
          (double)param_1->PoolTable[0x28].ActiveRequests + dVar43 +
         (double)((int)(0x10000 % (ulonglong)param_1->PoolTable[0x28].BlockSize) *
                 param_1->PoolTable[0x28].NumActivePools)) & 0xffffffffU) + param_1->WasteCurrent))
       - param_1->UsedCurrent;
  return;
}

// UpdateStats @ 1416c5f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMallocBinned::UpdateStats(FMallocBinned *this)

{
  uchar auVar1 [8];
  uchar auVar2 [8];
  uchar auVar3 [8];
  uchar auVar4 [8];
  uchar auVar5 [8];
  uchar auVar6 [8];
  FName FVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Binned_OsCurrent> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Binned_OsPeak> FVar12;
  FThreadSafeStaticStat<FStat_STAT_Binned_WasteCurrent> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Binned_WastePeak> FVar14;
  FThreadSafeStaticStat<FStat_STAT_Binned_UsedCurrent> FVar15;
  FThreadSafeStaticStat<FStat_STAT_Binned_UsedPeak> FVar16;
  FThreadSafeStaticStat<FStat_STAT_Binned_CurrentAllocs> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Binned_TotalAllocs> FVar18;
  FThreadSafeStaticStat<FStat_STAT_Binned_SlackCurrent> FVar19;
  FName local_res8;
  uchar local_res10 [8];
  uchar local_res18 [8];
  uchar local_res20 [8];
  FStatMessage local_58;
  
  FMalloc::UpdateStats((FMalloc *)this);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  Private::UpdateSlackStat(this);
  auVar1 = (uchar  [8])this->OsCurrent;
  auVar2 = (uchar  [8])this->OsPeak;
  auVar3 = (uchar  [8])this->WasteCurrent;
  auVar4 = (uchar  [8])this->WastePeak;
  local_res10 = (uchar  [8])this->UsedCurrent;
  local_res18 = (uchar  [8])this->UsedPeak;
  local_res20 = (uchar  [8])this->CurrentAllocs;
  auVar5 = (uchar  [8])this->TotalAllocs;
  auVar6 = (uchar  [8])this->SlackCurrent;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->AccessGuard);
  FVar9 = StatPtr_STAT_Binned_OsCurrent;
  if (StatPtr_STAT_Binned_OsCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_OsCurrent>)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_OsCurrent");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Binned_OsCurrent>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsCurrent,*pFVar8,
                       L"Binned Os Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                       L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar9;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar7;
    local_58.StatData.Pad = auVar1;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar12 = StatPtr_STAT_Binned_OsPeak;
  if (StatPtr_STAT_Binned_OsPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_OsPeak>)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_OsPeak");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Binned_OsPeak>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_OsPeak,*pFVar8,
                        L"Binned Os Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar12;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar7;
    local_58.StatData.Pad = auVar2;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar2);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar13 = StatPtr_STAT_Binned_WasteCurrent;
  if (StatPtr_STAT_Binned_WasteCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_WasteCurrent>)0x0
     ) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_WasteCurrent");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Binned_WasteCurrent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WasteCurrent,*pFVar8,
                        L"Binned Waste Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar13;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar7;
    local_58.StatData.Pad = auVar3;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar3);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar14 = StatPtr_STAT_Binned_WastePeak;
  if (StatPtr_STAT_Binned_WastePeak == (FThreadSafeStaticStat<FStat_STAT_Binned_WastePeak>)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_WastePeak");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Binned_WastePeak>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_WastePeak,*pFVar8,
                        L"Binned Waste Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar14;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar7;
    local_58.StatData.Pad = auVar4;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar4);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar15 = StatPtr_STAT_Binned_UsedCurrent;
  if (StatPtr_STAT_Binned_UsedCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedCurrent>)0x0)
  {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_UsedCurrent");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Binned_UsedCurrent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedCurrent,*pFVar8,
                        L"Binned Used Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar15;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    auVar1 = local_res10;
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_58.StatData.Pad[0] = local_res10[0];
    local_58.StatData.Pad[1] = local_res10[1];
    local_58.StatData.Pad[2] = local_res10[2];
    local_58.StatData.Pad[3] = local_res10[3];
    local_58.StatData.Pad[4] = local_res10[4];
    local_58.StatData.Pad[5] = local_res10[5];
    local_58.StatData.Pad[6] = local_res10[6];
    local_58.StatData.Pad[7] = local_res10[7];
    local_res8 = FVar7;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar16 = StatPtr_STAT_Binned_UsedPeak;
  if (StatPtr_STAT_Binned_UsedPeak == (FThreadSafeStaticStat<FStat_STAT_Binned_UsedPeak>)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_UsedPeak");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Binned_UsedPeak>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_UsedPeak,*pFVar8,
                        L"Binned Used Peak","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar16;
  local_res8 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    auVar1 = local_res18;
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_58.StatData.Pad[0] = local_res18[0];
    local_58.StatData.Pad[1] = local_res18[1];
    local_58.StatData.Pad[2] = local_res18[2];
    local_58.StatData.Pad[3] = local_res18[3];
    local_58.StatData.Pad[4] = local_res18[4];
    local_58.StatData.Pad[5] = local_res18[5];
    local_58.StatData.Pad[6] = local_res18[6];
    local_58.StatData.Pad[7] = local_res18[7];
    local_res8 = FVar7;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar17 = StatPtr_STAT_Binned_CurrentAllocs;
    if (StatPtr_STAT_Binned_CurrentAllocs ==
        (FThreadSafeStaticStat<FStat_STAT_Binned_CurrentAllocs>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_CurrentAllocs");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_Binned_CurrentAllocs>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_CurrentAllocs,*pFVar8,
                          L"Binned Current Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                          L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar17;
    local_res8 = FVar7;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      auVar1 = local_res20;
      local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
      local_58.StatData.Pad[0] = local_res20[0];
      local_58.StatData.Pad[1] = local_res20[1];
      local_58.StatData.Pad[2] = local_res20[2];
      local_58.StatData.Pad[3] = local_res20[3];
      local_58.StatData.Pad[4] = local_res20[4];
      local_58.StatData.Pad[5] = local_res20[5];
      local_58.StatData.Pad[6] = local_res20[6];
      local_58.StatData.Pad[7] = local_res20[7];
      local_res8 = FVar7;
      local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_58);
      FStatsTrace::Set(&local_res8,(long64)auVar1);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar18 = StatPtr_STAT_Binned_TotalAllocs;
      if (StatPtr_STAT_Binned_TotalAllocs ==
          (FThreadSafeStaticStat<FStat_STAT_Binned_TotalAllocs>)0x0) {
        pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_TotalAllocs");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_Binned_TotalAllocs>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_TotalAllocs,*pFVar8,
                            L"Binned Total Allocs","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                            L"Memory Allocator",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar7 = *(FName *)FVar18;
      local_res8 = FVar7;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar10 == (FThreadStats *)0x0) {
          pFVar11 = FThreadStatsPool::Get();
          pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
        }
        local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar7;
        local_58.StatData.Pad = auVar5;
        local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar10,&local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar5);
        if (pFVar10->ScopeCount == 0) {
          FThreadStats::Flush(pFVar10,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar10,false,false);
        }
      }
    }
  }
  FVar19 = StatPtr_STAT_Binned_SlackCurrent;
  if (StatPtr_STAT_Binned_SlackCurrent == (FThreadSafeStaticStat<FStat_STAT_Binned_SlackCurrent>)0x0
     ) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_Binned_SlackCurrent");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Binned_SlackCurrent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Binned_SlackCurrent,*pFVar8,
                        L"Binned Slack Current","STATGROUP_MemoryAllocator","STATCAT_Advanced",
                        L"Memory Allocator",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar7 = *(FName *)FVar19;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar7;
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_58.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar7;
    local_58.StatData.Pad = auVar6;
    local_58.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_58);
    FStatsTrace::Set(&local_res8,(long64)auVar6);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  return;
}

// ValidateHeap @ 1416c7c00

bool __thiscall FMallocBinned::ValidateHeap(FMallocBinned *this)

{
  FPoolInfo *pFVar1;
  FFreeMem *pFVar2;
  code *pcVar3;
  bool bVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar5;
  FPoolTable *pFVar6;
  FPoolInfo **ppFVar7;
  FPoolTable *pFVar8;
  
  pFVar8 = this->PoolTable;
  lVar5 = 0x29;
  pFVar6 = this->PoolTable;
  do {
    lpCriticalSection = &pFVar6->CriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = pFVar8->FirstPool;
    pFVar6 = pFVar8;
    while (pFVar1 != (FPoolInfo *)0x0) {
      if (((FPoolTable *)pFVar1->PrevLink != pFVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool->PrevLink == PoolPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                             ,0x651,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
      if ((pFVar1->FirstMem == (FFreeMem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool->FirstMem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                             ,0x652,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
      for (pFVar2 = pFVar1->FirstMem; pFVar2 != (FFreeMem *)0x0; pFVar2 = pFVar2->Next) {
        if ((pFVar2->NumFreeBlocks == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Free->NumFreeBlocks > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                               ,0x655,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          bVar4 = (bool)(*pcVar3)();
          return bVar4;
        }
      }
      pFVar6 = (FPoolTable *)&pFVar6->FirstPool->Next;
      pFVar1 = *(FPoolInfo **)pFVar6;
    }
    ppFVar7 = &pFVar8->ExhaustedPool;
    pFVar1 = pFVar8->ExhaustedPool;
    while (pFVar1 != (FPoolInfo *)0x0) {
      if ((pFVar1->PrevLink != ppFVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pool->PrevLink == PoolPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                             ,0x65b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
      if ((pFVar1->FirstMem != (FFreeMem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Pool->FirstMem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned.cpp"
                             ,0x65c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
      ppFVar7 = &(*ppFVar7)->Next;
      pFVar1 = *ppFVar7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = (FPoolTable *)(lpCriticalSection + 2);
    pFVar8 = pFVar8 + 1;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return true;
    }
  } while( true );
}

