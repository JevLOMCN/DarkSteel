// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// AllocateBlock @ 14d4efe10

void __cdecl
TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::AllocateBlock(FBlockHeader **param_1)

{
  longlong lVar1;
  FPageAllocator *this;
  FBlockHeader *pFVar2;
  
  this = FPageAllocator::Get();
  pFVar2 = FPageAllocator::Alloc(this,8);
  (pFVar2->NumAllocations).Value = 0xffffffff;
  pFVar2->NextAllocationPtr = (ulong64)(pFVar2[1].Padding + 4);
  pFVar2->Num = 0;
  *param_1 = pFVar2;
  MemoryTrace_MarkAllocAsHeap((ulong64)pFVar2,0,None,0);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0x9bf8) & 1) == 0) {
    *(uint *)(lVar1 + 0x9bf8) = *(uint *)(lVar1 + 0x9bf8) | 1;
    __tlregdtor(`TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::AllocateBlock'::__l5::
                _dynamic_atexit_destructor_for__Cleanup__);
  }
  *(FBlockHeader **)(lVar1 + 0x9be8) = *param_1;
  return;
}

// Free @ 14d4fabb0

void __cdecl TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Free(void *param_1)

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
    iVar2 = *piVar4;
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar3 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014d4fac6e. Too many branches */
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

// Malloc @ 14d502750

void * __cdecl
TLinearAllocatorBase<FDefaultBlockAllocationTag,1>::Malloc(ulong64 param_1,uint param_2)

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
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9bf0) == 0)
  goto LAB_14d5027a6;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    while( true ) {
      lVar4 = *(longlong *)(lVar3 + 0x9bf0);
      pvVar10 = (void *)(*(longlong *)(lVar4 + 0x40) + -1 + uVar11 & ~(uVar11 - 1));
      if ((longlong)pvVar10 + param_1 <= lVar4 + 0x10000U) {
        *(ulong64 *)(lVar4 + 0x40) = (longlong)pvVar10 + param_1 + 8;
        piVar1 = (int *)(*(longlong *)(lVar3 + 0x9bf0) + 0x48);
        *piVar1 = *piVar1 + 1;
        *(int *)((longlong)pvVar10 + -8) = ((int)pvVar10 + -8) - *(int *)(lVar3 + 0x9bf0);
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
        puVar7 = TBlockAllocationLockFreeCache<65536,FAlignedAllocator>::Malloc(uVar9,8);
        *puVar7 = 0xffffffff;
        *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
        puVar7[0x12] = 0;
        MemoryTrace_MarkAllocAsHeap((ulong64)puVar7,0,None,0);
        lVar3 = *(longlong *)(puVar7 + 0x10);
        *puVar7 = 1;
        *(ulong64 *)(puVar7 + 0x10) = (longlong)puVar7 + param_1 + uVar11 + 0x58;
        pvVar10 = (void *)(lVar3 + -1 + uVar11 & ~(uVar11 - 1));
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
      puVar5 = *(uint **)(lVar3 + 0x9bf0);
      uVar2 = *puVar5;
      *puVar5 = uVar2 - ~puVar5[0x12];
      if (uVar2 != ~puVar5[0x12]) break;
      puVar7 = *(undefined4 **)(lVar3 + 0x9bf0);
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *(undefined4 **)(lVar3 + 0x9bf0) = puVar7;
    }
LAB_14d5027a6:
    AllocateBlock((FBlockHeader **)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x9bf0));
  } while( true );
}

