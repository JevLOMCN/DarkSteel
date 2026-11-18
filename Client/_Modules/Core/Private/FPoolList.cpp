// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// LinkToFront @ 1416b1c40

void __thiscall FMallocBinned2::FPoolList::LinkToFront(FPoolList *this,FPoolInfo *param_1)

{
  FPoolInfo **ppFVar1;
  
  ppFVar1 = &param_1->Next;
  if (*ppFVar1 != (FPoolInfo *)0x0) {
    (*ppFVar1)->PtrToPrevNext = param_1->PtrToPrevNext;
  }
  *param_1->PtrToPrevNext = *ppFVar1;
  if (this->Front != (FPoolInfo *)0x0) {
    this->Front->PtrToPrevNext = ppFVar1;
  }
  *ppFVar1 = this->Front;
  param_1->PtrToPrevNext = &this->Front;
  this->Front = param_1;
  return;
}

// PushNewPoolToFront @ 1416b9360

FPoolInfo * __thiscall
FMallocBinned2::FPoolList::PushNewPoolToFront
          (FPoolList *this,FMallocBinned2 *param_1,FPoolTable *param_2,uint param_3)

{
  longlong *lpCriticalSection;
  TCachedOSPageAllocator<64,67108864> *this_00;
  uint *puVar1;
  ushort uVar2;
  FLLMTracker *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  FLowLevelMemTracker *pFVar8;
  FTagData *pFVar9;
  FLLMThreadState *this_02;
  FFreeBlock *pFVar10;
  FPoolInfo *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ELLMTagSet local_res10;
  
  bVar4 = false;
  if ((FLowLevelMemTracker::EnabledState == Disabled) ||
     (pFVar8 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState == Disabled)) {
    local_res10 = (ELLMTagSet)param_1;
  }
  else {
    FLowLevelMemTracker::BootstrapInitialise(pFVar8);
    this_01 = pFVar8->Trackers[0];
    bVar4 = true;
    local_res10 = None;
    pFVar9 = FLowLevelMemTracker::FindOrAddTagData(this_01->LLMRef,FMalloc,Scope);
    this_02 = UE::LLMPrivate::FLLMTracker::GetOrCreateState(this_01);
    UE::LLMPrivate::FLLMThreadState::PushTag(this_02,pFVar9,None);
  }
  lpCriticalSection = &param_1->_padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &param_1->CachedOSPageAllocator;
  puVar1 = &(param_1->CachedOSPageAllocator).FreedPageBlocksNum;
  pFVar10 = FCachedOSPageAllocator::AllocateImpl
                      ((FCachedOSPageAllocator *)this_00,(ulonglong)GMB2PageSize,0x4000000,
                       this_00->FreedPageBlocks,this_00->FreedPageBlocks + *puVar1,puVar1,
                       &(param_1->CachedOSPageAllocator).CachedTotal,(FWindowsRecursiveMutex *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = GMB2PageSize;
  if (pFVar10 == (FFreeBlock *)0x0) {
                    /* WARNING: Subroutine does not return */
    FMallocBinnedCommonBase::OutOfMemory((ulonglong)GMB2PageSize,0);
  }
  uVar2 = (ushort)param_2->BinSize;
  pFVar10->BinSize = uVar2;
  pFVar10->PoolIndex = (uchar)param_3;
  pFVar10->CanaryAndForkState = Value;
  pFVar10->NextFreeBlock = (FFreeBlock *)0x0;
  if (((uchar)param_3 == 0xff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPoolIndex < ((uint8) 0xff) && InBinSize <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned2.h"
                         ,0x7d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPoolInfo *)(*pcVar3)();
    return pFVar11;
  }
  uVar13 = (uint)uVar2;
  uVar7 = uVar5 / uVar13;
  pFVar10->NumFreeBins = uVar7;
  if ((ulonglong)uVar5 < (ulonglong)(uVar7 * uVar13) + 0x10) {
    uVar7 = uVar7 - 1;
    pFVar10->NumFreeBins = uVar7;
  }
  if (((ulonglong)uVar5 < (ulonglong)(uVar7 * uVar13) + 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFreeBins * InBinSize + sizeof(FFreeBlock) <= InPageSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinned2.h"
                         ,0x83,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPoolInfo *)(*pcVar3)();
    return pFVar11;
  }
  if ((((ulonglong)pFVar10 & (ulonglong)GMB2PageSize - 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(Free, GMB2PageSize)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                         ,0x16e,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FPoolInfo *)(*pcVar3)();
    return pFVar11;
  }
  param_2->TotalAllocatedBins = param_2->TotalAllocatedBins + pFVar10->NumFreeBins;
  uVar12 = (ulonglong)GMB2PageSize;
  param_2->TotalAllocatedMem = param_2->TotalAllocatedMem + GMB2PageSize;
  LOCK();
  FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory =
       (atomic<__int64>)((longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory + uVar12);
  UNLOCK();
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar11 = TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::GetOrCreatePoolInfo
                      (param_1,pFVar10,FirstFreeBlockIsPtr);
  if (this->Front != (FPoolInfo *)0x0) {
    this->Front->PtrToPrevNext = &pFVar11->Next;
  }
  pFVar11->Next = this->Front;
  pFVar11->PtrToPrevNext = &this->Front;
  this->Front = pFVar11;
  pFVar11->Taken = 0;
  pFVar11->FirstFreeBlock = pFVar10;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar4) {
    pFVar8 = FLowLevelMemTracker::Get();
    UE::LLMPrivate::FLLMTracker::PopTag(pFVar8->Trackers[local_res10],local_res10);
  }
  return pFVar11;
}

// ValidateActivePools @ 1416c77d0

void __thiscall FMallocBinned2::FPoolList::ValidateActivePools(FPoolList *this)

{
  FPoolInfo *pFVar1;
  FFreeBlock *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = this->Front;
  while( true ) {
    if (pFVar1 == (FPoolInfo *)0x0) {
      return;
    }
    if (((FPoolList *)pFVar1->PtrToPrevNext != this) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pool->PtrToPrevNext == PoolPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x340,L""), bVar4)) break;
    if ((pFVar1->FirstFreeBlock == (FFreeBlock *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pool->FirstFreeBlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x341,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    for (pFVar2 = pFVar1->FirstFreeBlock; pFVar2 != (FFreeBlock *)0x0;
        pFVar2 = pFVar2->NextFreeBlock) {
      if ((pFVar2->NumFreeBins == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Free->GetNumFreeBins() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                             ,0x344,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this = (FPoolList *)&this->Front->Next;
    pFVar1 = *(FPoolInfo **)this;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ValidateExhaustedPools @ 1416c78b0

void __thiscall FMallocBinned2::FPoolList::ValidateExhaustedPools(FPoolList *this)

{
  FPoolInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->Front;
  while( true ) {
    if (pFVar1 == (FPoolInfo *)0x0) {
      return;
    }
    if (((FPoolList *)pFVar1->PtrToPrevNext != this) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pool->PtrToPrevNext == PoolPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x34e,L""), bVar3)) break;
    if ((pFVar1->FirstFreeBlock != (FFreeBlock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Pool->FirstFreeBlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinned2.cpp"
                           ,0x34f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this = (FPoolList *)&this->Front->Next;
    pFVar1 = *(FPoolInfo **)this;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

