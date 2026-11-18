// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FPooledVirtualMemoryAllocator @ 14161df00

FPooledVirtualMemoryAllocator * __thiscall
FPooledVirtualMemoryAllocator::FPooledVirtualMemoryAllocator(FPooledVirtualMemoryAllocator *this)

{
  uint uVar1;
  int iVar2;
  TCachedOSPageAllocator<64,67108864> *pTVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  FPoolDescriptorBase **ppFVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->ClassesLocks;
  lVar4 = 0x40;
  do {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    lpCriticalSection = lpCriticalSection + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock,4000);
  pTVar3 = &this->OsAllocatorCache;
  lVar4 = 0x80;
  do {
    pTVar3->FreedPageBlocks[0].Ptr = (void *)0x0;
    pTVar3->FreedPageBlocks[0].ByteSize = 0;
    pTVar3 = (TCachedOSPageAllocator<64,67108864> *)(pTVar3->FreedPageBlocks + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  (this->OsAllocatorCache).CachedTotal = 0;
  (this->OsAllocatorCache).FreedPageBlocksNum = 0;
  uVar5 = 0x20000;
  piVar6 = this->NextPoolSize + 2;
  ppFVar7 = this->ClassesListHeads + 1;
  do {
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 - 0x10000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    ((FPooledVirtualMemoryAllocator *)(piVar6 + -2))->NextPoolSize[0] = iVar2;
    ppFVar7[-1] = (FPoolDescriptorBase *)0x0;
    uVar1 = (uint)(0x800000 / (ulonglong)uVar5);
    if (uVar1 < 2) {
      uVar1 = 2;
    }
    piVar6[-1] = uVar1;
    *ppFVar7 = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x10000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    *piVar6 = iVar2;
    ppFVar7[1] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x20000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[1] = iVar2;
    ppFVar7[2] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x30000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[2] = iVar2;
    ppFVar7[3] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x40000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[3] = iVar2;
    ppFVar7[4] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x50000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[4] = iVar2;
    ppFVar7[5] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x60000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[5] = iVar2;
    ppFVar7[6] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x70000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[6] = iVar2;
    ppFVar7[7] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x80000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[7] = iVar2;
    ppFVar7[8] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0x90000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[8] = iVar2;
    ppFVar7[9] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0xa0000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[9] = iVar2;
    ppFVar7[10] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0xb0000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[10] = iVar2;
    ppFVar7[0xb] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0xc0000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[0xb] = iVar2;
    ppFVar7[0xc] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0xd0000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    piVar6[0xc] = iVar2;
    ppFVar7[0xd] = (FPoolDescriptorBase *)0x0;
    iVar2 = (int)(0x800000 / (longlong)(int)(uVar5 + 0xe0000));
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    uVar5 = uVar5 + 0x100000;
    piVar6[0xd] = iVar2;
    ppFVar7[0xe] = (FPoolDescriptorBase *)0x0;
    piVar6 = piVar6 + 0x10;
    ppFVar7 = ppFVar7 + 0x10;
  } while ((int)uVar5 < 0x420000);
  return this;
}

// Allocate @ 141628850

void * __thiscall
FPooledVirtualMemoryAllocator::Allocate
          (FPooledVirtualMemoryAllocator *this,ulong64 param_1,uint param_2,
          FWindowsRecursiveMutex *param_3)

{
  TCachedOSPageAllocator<64,67108864> *this_00;
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar2;
  FPoolDescriptorBase *pFVar3;
  FLowLevelMemTracker *pFVar4;
  int iVar5;
  longlong lVar6;
  FLLMScope local_res10 [2];
  
  if (0x400000 < param_1) {
    if (param_1 < 0x1000001) {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
      this_00 = &this->OsAllocatorCache;
      puVar1 = &(this->OsAllocatorCache).FreedPageBlocksNum;
      pvVar2 = FCachedOSPageAllocator::AllocateImpl
                         ((FCachedOSPageAllocator *)this_00,param_1,0x4000000,
                          this_00->FreedPageBlocks,this_00->FreedPageBlocks + *puVar1,puVar1,
                          &(this->OsAllocatorCache).CachedTotal,(FWindowsRecursiveMutex *)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
      return pvVar2;
    }
    pvVar2 = FWindowsPlatformMemory::BinnedAllocFromOS(param_1);
    return pvVar2;
  }
  FLLMScope::FLLMScope(local_res10,FMalloc,false,None,Platform,true);
  lVar6 = (longlong)(int)((uint)((short)param_1 != 0) + (int)(param_1 >> 0x10));
  lpCriticalSection = (LPCRITICAL_SECTION)(this->ClassesLocks + lVar6 + -1);
  EnterCriticalSection(lpCriticalSection);
  pFVar3 = this->ClassesListHeads[lVar6 + -1];
  while( true ) {
    if (pFVar3 == (FPoolDescriptorBase *)0x0) {
      iVar5 = (int)((float)this->NextPoolSize[lVar6 + -1] * GVMAPoolScale);
      this->NextPoolSize[lVar6 + -1] = iVar5;
      pFVar3 = CreatePool(this,lVar6 << 0x10,iVar5);
      if (pFVar3 != (FPoolDescriptorBase *)0x0) {
        pFVar3->Next = this->ClassesListHeads[lVar6 + -1];
        this->ClassesListHeads[lVar6 + -1] = pFVar3;
        pvVar2 = TMemoryPool<65536>::Allocate((TMemoryPool<65536> *)pFVar3[1].Next,param_1);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar4 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar4 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc(pFVar4,Platform,pvVar2,param_1,Untagged,None,true);
        }
        LeaveCriticalSection(lpCriticalSection);
        FLLMScope::~FLLMScope(local_res10);
        return pvVar2;
      }
                    /* WARNING: Subroutine does not return */
      FGenericPlatformMemory::OnOutOfMemory(param_1,0x10000);
    }
    pvVar2 = TMemoryPool<65536>::Allocate((TMemoryPool<65536> *)pFVar3[1].Next,param_1);
    if (pvVar2 != (void *)0x0) break;
    pFVar3 = pFVar3->Next;
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar4 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar4 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc(pFVar4,Platform,pvVar2,param_1,Untagged,None,true);
  }
  LeaveCriticalSection(lpCriticalSection);
  FLLMScope::~FLLMScope(local_res10);
  return pvVar2;
}

// CreatePool @ 141632ef0

FPoolDescriptorBase * __thiscall
FPooledVirtualMemoryAllocator::CreatePool
          (FPooledVirtualMemoryAllocator *this,ulong64 param_1,int param_2)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  FPoolDescriptorBase *pFVar6;
  longlong lVar7;
  FPoolDescriptorBase *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FPoolDescriptorBase *pFVar11;
  FPoolDescriptorBase *pFVar12;
  FPoolDescriptorBase *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  FPlatformVirtualMemoryBlock local_28;
  
  pFVar8 = (FPoolDescriptorBase *)(longlong)param_2;
  pFVar12 = (FPoolDescriptorBase *)
            (((ulonglong)pFVar8 >> 3) + (ulonglong)(((ulonglong)pFVar8 & 7) != 0));
  uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
  uVar5 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
  lVar7 = (longlong)pFVar8 * param_1;
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::AllocateVirtual
            ((FPlatformVirtualMemoryBlock *)&local_38,
             (longlong)&pFVar12[0x1006].VMSizeDivVirtualSizeAlignment + uVar5 + lVar7 + 7 &
             ~(uVar5 - 1),uVar4);
  pFVar6 = local_38;
  if (local_38 == (FPoolDescriptorBase *)0x0) {
    pFVar6 = (FPoolDescriptorBase *)0x0;
  }
  else {
    uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Commit
              ((FPlatformVirtualMemoryBlock *)&local_38,0,
               (longlong)&pFVar12[6].VMSizeDivVirtualSizeAlignment + uVar4 + 7 & ~(uVar4 - 1));
    puVar1 = &pFVar6[1].VMSizeDivVirtualSizeAlignment;
    pFVar6->VMSizeDivVirtualSizeAlignment = (ulonglong)uStack_30;
    *puVar1 = param_1;
    pFVar6[3].Next = pFVar8;
    pFVar11 = (FPoolDescriptorBase *)
              ((ulonglong)
               ((longlong)&pFVar6[0x1006].VMSizeDivVirtualSizeAlignment +
               (longlong)((longlong)&pFVar12->Next + 7)) & 0xffffffffffff0000);
    pFVar6[3].VMSizeDivVirtualSizeAlignment = (ulong64)(pFVar6 + 7);
    pFVar6[2].Next = pFVar11;
    pFVar6[4].Next = pFVar12;
    pFVar6[4].VMSizeDivVirtualSizeAlignment = (ulong64)pFVar8;
    pFVar6[5].Next = (FPoolDescriptorBase *)0x0;
    pFVar6[2].VMSizeDivVirtualSizeAlignment = (ulong64)((longlong)&pFVar11->Next + lVar7);
    pFVar6[5].VMSizeDivVirtualSizeAlignment = (ulong64)local_38;
    pFVar6[6].Next = (FPoolDescriptorBase *)CONCAT44(uStack_2c,uStack_30);
    *(undefined4 *)&pFVar6[6].VMSizeDivVirtualSizeAlignment = 0;
    if ((*(short *)&pFVar6[2].Next != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(AlignedPoolStart % RequiredAlignment) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\OSAllocationPool.h"
                           ,0x47,L"Non-aligned pool address passed to a TMemoryPool"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPoolDescriptorBase *)(*pcVar2)();
      return pFVar6;
    }
    memset((void *)pFVar6[3].VMSizeDivVirtualSizeAlignment,0xff,(size_t)pFVar6[4].Next);
    uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetCommitAlignment();
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::Decommit
              ((FPlatformVirtualMemoryBlock *)&pFVar6[5].VMSizeDivVirtualSizeAlignment,
               (longlong)pFVar6[2].Next - pFVar6[5].VMSizeDivVirtualSizeAlignment,
               (longlong)pFVar6[3].Next * *puVar1 + -1 + uVar4 & ~(uVar4 - 1));
    pFVar6[1].Next = (FPoolDescriptorBase *)puVar1;
    uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    uVar9 = (longlong)pFVar11 + uVar4 + lVar7 + -1 & -uVar4;
    uVar4 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    uVar10 = pFVar6->VMSizeDivVirtualSizeAlignment - (uVar9 - (longlong)pFVar6) / uVar4;
    if (uVar10 != 0) {
      if ((pFVar6->VMSizeDivVirtualSizeAlignment <= uVar10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr->VMSizeDivVirtualSizeAlignment > PagesLeft",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Allocators\\PooledVirtualMemoryAllocator.cpp"
                             ,0xfc,L"Arithmetic error calculating excess pages"), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FPoolDescriptorBase *)(*pcVar2)();
        return pFVar6;
      }
      pFVar6->VMSizeDivVirtualSizeAlignment = pFVar6->VMSizeDivVirtualSizeAlignment - uVar10;
      local_28._8_4_ = SUB84(uVar10,0);
      local_28._0_8_ = uVar9;
      FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual(&local_28);
    }
  }
  return pFVar6;
}

// DecideOnTheNextPoolSize @ 141633660

void __thiscall
FPooledVirtualMemoryAllocator::DecideOnTheNextPoolSize
          (FPooledVirtualMemoryAllocator *this,int param_1,bool param_2)

{
  int iVar1;
  
  if (param_2) {
    this->NextPoolSize[param_1] = (int)((float)this->NextPoolSize[param_1] * GVMAPoolScale);
    return;
  }
  iVar1 = (int)((float)this->NextPoolSize[param_1] / GVMAPoolScale);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  this->NextPoolSize[param_1] = iVar1;
  return;
}

// DestroyPool @ 141634750

void __thiscall
FPooledVirtualMemoryAllocator::DestroyPool
          (FPooledVirtualMemoryAllocator *this,FPoolDescriptorBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPoolDescriptorBase *local_18 [2];
  
  if (param_1 == (FPoolDescriptorBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\Allocators\\PooledVirtualMemoryAllocator.cpp"
                       ,0x107,L"Passed a null pool descriptor pointer to FreePool()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18[1]._0_4_ = *(undefined4 *)&param_1->VMSizeDivVirtualSizeAlignment;
  local_18[0] = param_1;
  FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
            ((FPlatformVirtualMemoryBlock *)local_18);
  return;
}

// DumpAllocatorStats @ 141636b90

void __thiscall
FPooledVirtualMemoryAllocator::DumpAllocatorStats
          (FPooledVirtualMemoryAllocator *this,FOutputDevice *param_1)

{
  FPoolDescriptorBase *pFVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  FPoolDescriptorBase **ppFVar3;
  
  ppFVar3 = this->ClassesListHeads;
  lpCriticalSection = (LPCRITICAL_SECTION)this->ClassesLocks;
  iVar2 = 0;
  do {
    EnterCriticalSection(lpCriticalSection);
    FOutputDevice::LogfImpl(param_1,L"PooledVirtualMemoryAllocator Index: %d, SizeClass: %.2fKB");
    for (pFVar1 = *ppFVar3; pFVar1 != (FPoolDescriptorBase *)0x0; pFVar1 = pFVar1->Next) {
      FOutputDevice::LogfImpl(param_1,L"Pool[%3d]: %10.2fKB allocatable, %10.2fKB overhead");
    }
    LeaveCriticalSection(lpCriticalSection);
    iVar2 = iVar2 + 1;
    lpCriticalSection = lpCriticalSection + 1;
    ppFVar3 = ppFVar3 + 1;
  } while (iVar2 < 0x40);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
  FOutputDevice::LogfImpl(param_1,L"CachedOSPageAllocator = %fkb");
                    /* WARNING: Could not recover jumptable at 0x000141636d61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
  return;
}

// Free @ 14163cc60

void __thiscall
FPooledVirtualMemoryAllocator::Free
          (FPooledVirtualMemoryAllocator *this,void *param_1,ulong64 param_2,
          FWindowsRecursiveMutex *param_3,bool param_4)

{
  TCachedOSPageAllocator<64,67108864> *_Dst;
  ulong64 *puVar1;
  uint *puVar2;
  ulong64 uVar3;
  void *pvVar4;
  FPoolDescriptorBase *pFVar5;
  FPoolDescriptorBase *pFVar6;
  FPoolDescriptorBase *pFVar7;
  int iVar8;
  FLowLevelMemTracker *this_00;
  uint uVar9;
  int iVar10;
  FPoolDescriptorBase *local_28 [2];
  
  if (param_2 < 0x400001) {
    iVar10 = (int)(param_2 >> 0x10) + (uint)((short)param_2 != 0);
    EnterCriticalSection((LPCRITICAL_SECTION)(this->ClassesLocks + (longlong)iVar10 + -1));
    pFVar7 = this->ClassesListHeads[(longlong)iVar10 + -1];
    pFVar6 = (FPoolDescriptorBase *)0x0;
    while (pFVar5 = pFVar7, pFVar5 != (FPoolDescriptorBase *)0x0) {
      if (((void *)(pFVar5[1].Next)->VMSizeDivVirtualSizeAlignment <= param_1) &&
         (param_1 < pFVar5[1].Next[1].Next)) {
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this_00 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_00 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(this_00,Platform,param_1,None,true);
        }
        TMemoryPool<65536>::Free((TMemoryPool<65536> *)pFVar5[1].Next,param_1,param_2);
        if (pFVar5[1].Next[3].Next ==
            (FPoolDescriptorBase *)pFVar5[1].Next[1].VMSizeDivVirtualSizeAlignment) {
          if (pFVar6 == (FPoolDescriptorBase *)0x0) {
            this->ClassesListHeads[(longlong)iVar10 + -1] = pFVar5->Next;
          }
          else {
            pFVar6->Next = pFVar5->Next;
          }
          local_28[1]._0_4_ = *(undefined4 *)&pFVar5->VMSizeDivVirtualSizeAlignment;
          local_28[0] = pFVar5;
          FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
                    ((FPlatformVirtualMemoryBlock *)local_28);
          iVar8 = (int)((float)this->NextPoolSize[(longlong)iVar10 + -1] / GVMAPoolScale);
          if (iVar8 < 2) {
            iVar8 = 2;
          }
          this->NextPoolSize[(longlong)iVar10 + -1] = iVar8;
        }
        break;
      }
      pFVar6 = pFVar5;
      pFVar7 = pFVar5->Next;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(this->ClassesLocks + (longlong)iVar10 + -1));
  }
  else if (param_2 < 0x1000001) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
    uVar9 = (this->OsAllocatorCache).FreedPageBlocksNum;
    _Dst = &this->OsAllocatorCache;
    while ((uVar9 != 0 &&
           ((0x3f < uVar9 || (0x4000000 < (this->OsAllocatorCache).CachedTotal + param_2))))) {
      uVar3 = (this->OsAllocatorCache).FreedPageBlocks[0].ByteSize;
      pvVar4 = _Dst->FreedPageBlocks[0].Ptr;
      puVar1 = &(this->OsAllocatorCache).CachedTotal;
      *puVar1 = *puVar1 - uVar3;
      uVar9 = uVar9 - 1;
      (this->OsAllocatorCache).FreedPageBlocksNum = uVar9;
      if (uVar9 != 0) {
        memmove(_Dst,(this->OsAllocatorCache).FreedPageBlocks + 1,(ulonglong)uVar9 << 4);
      }
      FWindowsPlatformMemory::BinnedFreeToOS(pvVar4,uVar3);
      uVar9 = (this->OsAllocatorCache).FreedPageBlocksNum;
    }
    _Dst->FreedPageBlocks[uVar9].Ptr = param_1;
    ((TCachedOSPageAllocator<64,67108864> *)(&this->OsAllocatorCacheLock + 1))->FreedPageBlocks
    [(this->OsAllocatorCache).FreedPageBlocksNum].ByteSize = param_2;
    puVar1 = &(this->OsAllocatorCache).CachedTotal;
    *puVar1 = *puVar1 + param_2;
    puVar2 = &(this->OsAllocatorCache).FreedPageBlocksNum;
    *puVar2 = *puVar2 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
  }
  else {
    FWindowsPlatformMemory::BinnedFreeToOS(param_1,param_2);
  }
  return;
}

// FreeAll @ 14163ceb0

void __thiscall
FPooledVirtualMemoryAllocator::FreeAll
          (FPooledVirtualMemoryAllocator *this,FWindowsRecursiveMutex *param_1)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  void *pvVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
  uVar4 = (this->OsAllocatorCache).FreedPageBlocksNum;
  while (uVar4 != 0) {
    uVar2 = (this->OsAllocatorCache).FreedPageBlocks[0].ByteSize;
    pvVar3 = (this->OsAllocatorCache).FreedPageBlocks[0].Ptr;
    puVar1 = &(this->OsAllocatorCache).CachedTotal;
    *puVar1 = *puVar1 - uVar2;
    uVar4 = uVar4 - 1;
    (this->OsAllocatorCache).FreedPageBlocksNum = uVar4;
    if (uVar4 != 0) {
      memmove(&this->OsAllocatorCache,(this->OsAllocatorCache).FreedPageBlocks + 1,
              (ulonglong)uVar4 << 4);
    }
    FWindowsPlatformMemory::BinnedFreeToOS(pvVar3,uVar2);
    uVar4 = (this->OsAllocatorCache).FreedPageBlocksNum;
  }
                    /* WARNING: Could not recover jumptable at 0x00014163cf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->OsAllocatorCacheLock);
  return;
}

// GetCachedFreeTotal @ 14163ed70

ulong64 __thiscall
FPooledVirtualMemoryAllocator::GetCachedFreeTotal(FPooledVirtualMemoryAllocator *this)

{
  FPoolDescriptorBase *pFVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  FPoolDescriptorBase **ppFVar3;
  ulong64 uVar4;
  
  uVar4 = 0;
  ppFVar3 = this->ClassesListHeads;
  lpCriticalSection = (LPCRITICAL_SECTION)this->ClassesLocks;
  lVar2 = 0x40;
  do {
    EnterCriticalSection(lpCriticalSection);
    for (pFVar1 = *ppFVar3; pFVar1 != (FPoolDescriptorBase *)0x0; pFVar1 = pFVar1->Next) {
      uVar4 = uVar4 + (longlong)pFVar1[1].Next[3].Next * (longlong)(pFVar1[1].Next)->Next;
    }
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = lpCriticalSection + 1;
    ppFVar3 = ppFVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return uVar4;
}

