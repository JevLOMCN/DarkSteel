// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// Free @ 141496450

void __cdecl
TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(void *param_1)

{
  int iVar1;
  longlong lVar2;
  FLowLevelMemTracker *this;
  int *piVar3;
  
  if (param_1 != (void *)0x0) {
    MemoryTrace_Free((ulong64)param_1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar3 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar3,0,0);
      TBlockAllocationCache<65536,FAlignedAllocator>::Free(piVar3,lVar2 - (longlong)piVar3);
    }
  }
  return;
}

// Free @ 1414964f0

void __cdecl TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(void *param_1)

{
  int iVar1;
  longlong lVar2;
  FLowLevelMemTracker *this;
  int *piVar3;
  
  if (param_1 != (void *)0x0) {
    MemoryTrace_Free((ulong64)param_1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar3 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar3,0,0);
      TBlockAllocationCache<65536,FAlignedAllocator>::Free(piVar3,lVar2 - (longlong)piVar3);
    }
  }
  return;
}

// Malloc @ 1414a3f80

void * __cdecl
TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc
          (ulong64 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  ulong uVar7;
  bool bVar8;
  void *pvVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  FLowLevelMemTracker *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar7 = _tls_index;
  uVar13 = (ulonglong)_tls_index;
  uVar14 = (ulonglong)param_2;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x88) != 0)
  goto LAB_1414a40db;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
    if ((*(uint *)(lVar3 + 0x84) & 1) == 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 1;
      __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    puVar10 = *(undefined4 **)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x68) = 0;
    if (puVar10 == (undefined4 *)0x0) {
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        pvVar9 = FMemory::Malloc(0,0);
        FMemory::Free(pvVar9);
        if ((UE::Private::GMalloc == (FMalloc *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("UE::Private::GMalloc",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                               ,0x31,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pvVar9 = (void *)(*pcVar6)();
          return pvVar9;
        }
      }
      puVar10 = (undefined4 *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))();
    }
    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
    pvVar9 = ThreadLocalStoragePointer;
    *puVar10 = 0xffffffff;
    puVar10[0x12] = 0;
    lVar3 = *(longlong *)((longlong)pvVar9 + (ulonglong)uVar7 * 8);
    *(undefined4 **)(lVar3 + 0x88) = puVar10;
    MemoryTrace_MarkAllocAsHeap((ulong64)puVar10,0,None,0);
    if ((*(uint *)(lVar3 + 0x98) & 1) == 0) {
      *(uint *)(lVar3 + 0x98) = *(uint *)(lVar3 + 0x98) | 1;
      __tlregdtor(`TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc'
                  ::__l12::_dynamic_atexit_destructor_for__Cleanup__);
    }
    *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(lVar3 + 0x88);
LAB_1414a40db:
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
    while( true ) {
      lVar4 = *(longlong *)(lVar3 + 0x88);
      pvVar9 = (void *)(*(longlong *)(lVar4 + 0x40) + -1 + uVar14 & ~(uVar14 - 1));
      if ((longlong)pvVar9 + param_1 <= lVar4 + 0x10000U) {
        *(ulong64 *)(lVar4 + 0x40) = (longlong)pvVar9 + param_1;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x88) + 0x48);
        *piVar1 = *piVar1 + 1;
        MemoryTrace_Alloc((ulong64)pvVar9,param_1,param_2,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar12 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar12 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (pFVar12,Default,pvVar9,param_1,LinearAllocator,FMalloc,true);
        }
        return pvVar9;
      }
      uVar11 = param_1 + 0x50 + uVar14;
      if (0x10000 < uVar11) {
        puVar10 = TBlockAllocationCache<65536,FAlignedAllocator>::Malloc(uVar11,0x10000);
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        MemoryTrace_MarkAllocAsHeap((ulong64)puVar10,0,None,0);
        lVar3 = *(longlong *)(puVar10 + 0x10);
        *(ulong64 *)(puVar10 + 0x10) = (longlong)puVar10 + param_1 + uVar14 + 0x50;
        pvVar9 = (void *)(lVar3 + -1 + uVar14 & ~(uVar14 - 1));
        *puVar10 = 1;
        MemoryTrace_Alloc((ulong64)pvVar9,param_1,param_2,0,0);
        if (FLowLevelMemTracker::EnabledState == Disabled) {
          return pvVar9;
        }
        pFVar12 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar12 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar12,Default,pvVar9,param_1,LinearAllocator,FMalloc,true);
        return pvVar9;
      }
      *(ulonglong *)(lVar4 + 0x40) = lVar4 + 0x10000U;
      puVar5 = *(uint **)(lVar3 + 0x88);
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 - ~puVar5[0x12];
      UNLOCK();
      if (uVar2 != ~puVar5[0x12]) break;
      puVar10 = *(undefined4 **)(lVar3 + 0x88);
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *(undefined4 **)(lVar3 + 0x88) = puVar10;
    }
  } while( true );
}

// Malloc @ 1414a42b0

void * __cdecl
TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(ulong64 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  ulong uVar6;
  bool bVar7;
  void *pvVar8;
  undefined4 *puVar9;
  FLowLevelMemTracker *this;
  longlong *plVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar6 = _tls_index;
  uVar12 = (ulonglong)_tls_index;
  uVar13 = (ulonglong)param_2;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x78) != 0)
  goto LAB_1414a4418;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    if ((*(uint *)(lVar3 + 0x84) & 1) == 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 1;
      __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    puVar9 = *(undefined4 **)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x68) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        pvVar8 = FMemory::Malloc(0,0);
        FMemory::Free(pvVar8);
        if ((UE::Private::GMalloc == (FMalloc *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("UE::Private::GMalloc",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                               ,0x31,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pvVar8 = (void *)(*pcVar5)();
          return pvVar8;
        }
      }
      puVar9 = (undefined4 *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))();
    }
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    pvVar8 = ThreadLocalStoragePointer;
    *puVar9 = 0xffffffff;
    puVar9[0x12] = 0;
    lVar3 = *(longlong *)((longlong)pvVar8 + (ulonglong)uVar6 * 8);
    *(undefined4 **)(lVar3 + 0x78) = puVar9;
    MemoryTrace_MarkAllocAsHeap((ulong64)puVar9,0,None,0);
    if ((*(uint *)(lVar3 + 0x80) & 1) == 0) {
      *(uint *)(lVar3 + 0x80) = *(uint *)(lVar3 + 0x80) | 1;
      __tlregdtor(`TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc'::__l12::
                  _dynamic_atexit_destructor_for__Cleanup__);
    }
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar3 + 0x78);
LAB_1414a4418:
    pvVar8 = ThreadLocalStoragePointer;
    while( true ) {
      plVar10 = (longlong *)(*(longlong *)((longlong)pvVar8 + uVar12 * 8) + 0x78);
      lVar3 = *plVar10;
      pvVar11 = (void *)(*(longlong *)(lVar3 + 0x40) + -1 + uVar13 & ~(uVar13 - 1));
      if ((longlong)pvVar11 + param_1 <= lVar3 + 0x10000U) {
        *(ulong64 *)(lVar3 + 0x40) = (longlong)pvVar11 + param_1;
        piVar1 = (int *)(*plVar10 + 0x48);
        *piVar1 = *piVar1 + 1;
        MemoryTrace_Alloc((ulong64)pvVar11,param_1,param_2,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (this,Default,pvVar11,param_1,LinearAllocator,FMalloc,true);
        }
        return pvVar11;
      }
      if ((0x10000 < param_1 + 0x50 + uVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeaderSize + Size + Alignment <= BlockAllocationTag::BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                             ,0x1a4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar5)();
        return pvVar8;
      }
      lVar3 = *(longlong *)((longlong)pvVar8 + (ulonglong)uVar6 * 8);
      *(longlong *)(*(longlong *)(lVar3 + 0x78) + 0x40) = *(longlong *)(lVar3 + 0x78) + 0x10000;
      puVar4 = *(uint **)(lVar3 + 0x78);
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 - ~puVar4[0x12];
      UNLOCK();
      if (uVar2 != ~puVar4[0x12]) break;
      puVar9 = *(undefined4 **)(lVar3 + 0x78);
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *(undefined4 **)(lVar3 + 0x78) = puVar9;
    }
  } while( true );
}

// AllocateBlock @ 1417b3f40

void __cdecl
TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::AllocateBlock
          (FBlockHeader **param_1)

{
  longlong lVar1;
  FPageAllocator *this;
  FBlockHeader *pFVar2;
  
  this = FPageAllocator::Get();
  pFVar2 = FPageAllocator::Alloc(this,8);
  (pFVar2->NumAllocations).Value = (atomic<unsigned_int>)0xffffffff;
  pFVar2->NextAllocationPtr = (ulong64)(pFVar2[1].Padding + 4);
  pFVar2->Num = 0;
  *param_1 = pFVar2;
  MemoryTrace_MarkAllocAsHeap((ulong64)pFVar2,0,None,0);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xa78) & 1) == 0) {
    *(uint *)(lVar1 + 0xa78) = *(uint *)(lVar1 + 0xa78) | 1;
    __tlregdtor(`TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::
                AllocateBlock'::__l5::_dynamic_atexit_destructor_for__Cleanup__);
  }
  *(FBlockHeader **)(lVar1 + 0xa58) = *param_1;
  return;
}

// Free @ 1417cf770

void __cdecl
TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Free(void *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FLowLevelMemTracker *this;
  FPageAllocator *this_00;
  int *piVar4;
  
  if (param_1 != (void *)0x0) {
    puVar1 = (uint *)((longlong)param_1 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,puVar1,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x0001417cf830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_00 = FPageAllocator::Get();
      FPageAllocator::Free(this_00,piVar4);
      return;
    }
  }
  return;
}

// Malloc @ 1417e2b20

void * __cdecl
TLinearAllocatorBase<FIoStoreTocResourceStorage::FIOStoreAllocationTag,0>::Malloc
          (ulong64 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  FLowLevelMemTracker *pFVar8;
  ulong64 uVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)_tls_index;
  uVar6 = 4;
  if (3 < param_2) {
    uVar6 = param_2;
  }
  uVar11 = (ulonglong)uVar6;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0xa70) == 0)
  goto LAB_1417e2b76;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    while( true ) {
      lVar4 = *(longlong *)(lVar3 + 0xa70);
      pvVar10 = (void *)(*(longlong *)(lVar4 + 0x40) + -1 + uVar11 & ~(uVar11 - 1));
      if ((longlong)pvVar10 + param_1 <= lVar4 + 0x10000U) {
        *(ulong64 *)(lVar4 + 0x40) = (longlong)pvVar10 + param_1 + 8;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0xa70) + 0x48);
        *piVar1 = *piVar1 + 1;
        *(int *)((longlong)pvVar10 + -8) = ((int)pvVar10 + -8) - *(int *)(lVar3 + 0xa70);
        *(int *)((longlong)pvVar10 + -4) = (int)param_1;
        MemoryTrace_Alloc((longlong)pvVar10 - 8,param_1 + 8,uVar6,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar8 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar8 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (pFVar8,Default,(void *)((longlong)pvVar10 + -8),param_1 + 8,LinearAllocator,
                     FMalloc,true);
        }
        return pvVar10;
      }
      uVar9 = param_1 + 0x58 + uVar11;
      if (0x10000 < uVar9) {
        puVar7 = FAlignedAllocator::Malloc(uVar9,8);
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        MemoryTrace_MarkAllocAsHeap((ulong64)puVar7,0,None,0);
        lVar3 = *(longlong *)(puVar7 + 0x10);
        *(ulong64 *)(puVar7 + 0x10) = (longlong)puVar7 + param_1 + uVar11 + 0x58;
        pvVar10 = (void *)(lVar3 + -1 + uVar11 & ~(uVar11 - 1));
        *puVar7 = 1;
        *(int *)((longlong)pvVar10 + -4) = (int)param_1;
        *(int *)((longlong)pvVar10 + -8) = ((int)pvVar10 + -8) - (int)puVar7;
        MemoryTrace_Alloc((longlong)pvVar10 - 8,param_1 + 8,uVar6,0,0);
        if (FLowLevelMemTracker::EnabledState == Disabled) {
          return pvVar10;
        }
        pFVar8 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar8 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar8,Default,(void *)((longlong)pvVar10 + -8),param_1 + 8,LinearAllocator,
                   FMalloc,true);
        return pvVar10;
      }
      *(ulonglong *)(lVar4 + 0x40) = lVar4 + 0x10000U;
      puVar5 = *(uint **)(lVar3 + 0xa70);
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 - ~puVar5[0x12];
      UNLOCK();
      if (uVar2 != ~puVar5[0x12]) break;
      puVar7 = *(undefined4 **)(lVar3 + 0xa70);
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *(undefined4 **)(lVar3 + 0xa70) = puVar7;
    }
LAB_1417e2b76:
    AllocateBlock((FBlockHeader **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0xa70));
  } while( true );
}

// AllocateBlock @ 1418c74f0

void __cdecl
TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::AllocateBlock
          (FBlockHeader **param_1)

{
  longlong lVar1;
  FBlockHeader *pFVar2;
  
  pFVar2 = FAlignedAllocator::Malloc(0x10000,8);
  (pFVar2->NumAllocations).Value = (atomic<unsigned_int>)0xffffffff;
  pFVar2->NextAllocationPtr = (ulong64)(pFVar2[1].Padding + 4);
  pFVar2->Num = 0;
  *param_1 = pFVar2;
  MemoryTrace_MarkAllocAsHeap((ulong64)pFVar2,0,None,0);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xb50) & 1) == 0) {
    *(uint *)(lVar1 + 0xb50) = *(uint *)(lVar1 + 0xb50) | 1;
    __tlregdtor(`TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::
                AllocateBlock'::__l5::_dynamic_atexit_destructor_for__Cleanup__);
  }
  *(FBlockHeader **)(lVar1 + 0xb38) = *param_1;
  return;
}

// Free @ 1418db7f0

void __cdecl
TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Free(void *param_1)

{
  uint *puVar1;
  int iVar2;
  FLowLevelMemTracker *this;
  int *piVar3;
  
  if (param_1 != (void *)0x0) {
    puVar1 = (uint *)((longlong)param_1 + -8);
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,puVar1,FMalloc,true);
    }
    piVar3 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar3,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001418db87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar3);
      return;
    }
  }
  return;
}

// Malloc @ 1418e8d70

void * __cdecl
TLinearAllocatorBase<UE::Private::FOutputDeviceBlockAllocationTag,0>::Malloc
          (ulong64 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  FLowLevelMemTracker *pFVar8;
  ulong64 uVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)_tls_index;
  uVar6 = 4;
  if (3 < param_2) {
    uVar6 = param_2;
  }
  uVar11 = (ulonglong)uVar6;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0xb48) == 0)
  goto LAB_1418e8dc6;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    while( true ) {
      lVar4 = *(longlong *)(lVar3 + 0xb48);
      pvVar10 = (void *)(*(longlong *)(lVar4 + 0x40) + -1 + uVar11 & ~(uVar11 - 1));
      if ((longlong)pvVar10 + param_1 <= lVar4 + 0x10000U) {
        *(ulong64 *)(lVar4 + 0x40) = (longlong)pvVar10 + param_1 + 8;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0xb48) + 0x48);
        *piVar1 = *piVar1 + 1;
        *(int *)((longlong)pvVar10 + -8) = ((int)pvVar10 + -8) - *(int *)(lVar3 + 0xb48);
        *(int *)((longlong)pvVar10 + -4) = (int)param_1;
        MemoryTrace_Alloc((longlong)pvVar10 - 8,param_1 + 8,uVar6,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar8 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar8 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (pFVar8,Default,(void *)((longlong)pvVar10 + -8),param_1 + 8,LinearAllocator,
                     FMalloc,true);
        }
        return pvVar10;
      }
      uVar9 = param_1 + 0x58 + uVar11;
      if (0x10000 < uVar9) {
        puVar7 = FAlignedAllocator::Malloc(uVar9,8);
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        MemoryTrace_MarkAllocAsHeap((ulong64)puVar7,0,None,0);
        lVar3 = *(longlong *)(puVar7 + 0x10);
        *(ulong64 *)(puVar7 + 0x10) = (longlong)puVar7 + param_1 + uVar11 + 0x58;
        pvVar10 = (void *)(lVar3 + -1 + uVar11 & ~(uVar11 - 1));
        *puVar7 = 1;
        *(int *)((longlong)pvVar10 + -4) = (int)param_1;
        *(int *)((longlong)pvVar10 + -8) = ((int)pvVar10 + -8) - (int)puVar7;
        MemoryTrace_Alloc((longlong)pvVar10 - 8,param_1 + 8,uVar6,0,0);
        if (FLowLevelMemTracker::EnabledState == Disabled) {
          return pvVar10;
        }
        pFVar8 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar8 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelAlloc
                  (pFVar8,Default,(void *)((longlong)pvVar10 + -8),param_1 + 8,LinearAllocator,
                   FMalloc,true);
        return pvVar10;
      }
      *(ulonglong *)(lVar4 + 0x40) = lVar4 + 0x10000U;
      puVar5 = *(uint **)(lVar3 + 0xb48);
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 - ~puVar5[0x12];
      UNLOCK();
      if (uVar2 != ~puVar5[0x12]) break;
      puVar7 = *(undefined4 **)(lVar3 + 0xb48);
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *(undefined4 **)(lVar3 + 0xb48) = puVar7;
    }
LAB_1418e8dc6:
    AllocateBlock((FBlockHeader **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0xb48));
  } while( true );
}

