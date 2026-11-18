// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// Free @ 1445cf960

void __cdecl
TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::Free
          (void *param_1)

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
    piVar3 = (int *)((ulonglong)param_1 & 0xfffffffffffff000);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar3 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar3,0,0);
      TBlockAllocationCache<4096,FAlignedAllocator>::Free(piVar3,lVar2 - (longlong)piVar3);
    }
  }
  return;
}

// Malloc @ 1445e1de0

void * __cdecl
TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::Malloc
          (ulong64 param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 *puVar7;
  void *pvVar8;
  FLowLevelMemTracker *this;
  longlong *plVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = (ulonglong)_tls_index;
  uVar12 = (ulonglong)param_2;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0xe78) != 0)
  goto LAB_1445e1edd;
  do {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8);
    if ((*(uint *)(lVar3 + 0xe84) & 1) == 0) {
      *(uint *)(lVar3 + 0xe84) = *(uint *)(lVar3 + 0xe84) | 1;
      __tlregdtor(`TBlockAllocationCache<4096,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    puVar7 = *(undefined4 **)(lVar3 + 0xe68);
    *(undefined8 *)(lVar3 + 0xe68) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = FAlignedAllocator::Malloc(0x1000,0x1000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *(undefined4 **)(lVar3 + 0xe78) = puVar7;
    MemoryTrace_MarkAllocAsHeap((ulong64)puVar7,0,None,0);
    if ((*(uint *)(lVar3 + 0xe80) & 1) == 0) {
      *(uint *)(lVar3 + 0xe80) = *(uint *)(lVar3 + 0xe80) | 1;
      __tlregdtor(`TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>
                  ::Malloc'::__l12::_dynamic_atexit_destructor_for__Cleanup__);
    }
    *(undefined8 *)(lVar3 + 0xe70) = *(undefined8 *)(lVar3 + 0xe78);
LAB_1445e1edd:
    pvVar8 = ThreadLocalStoragePointer;
    while( true ) {
      plVar9 = (longlong *)(*(longlong *)((longlong)pvVar8 + uVar11 * 8) + 0xe78);
      lVar3 = *plVar9;
      pvVar10 = (void *)(*(longlong *)(lVar3 + 0x40) + -1 + uVar12 & ~(uVar12 - 1));
      if ((longlong)pvVar10 + param_1 <= lVar3 + 0x1000U) {
        *(ulong64 *)(lVar3 + 0x40) = (longlong)pvVar10 + param_1;
        piVar1 = (int *)(*plVar9 + 0x48);
        *piVar1 = *piVar1 + 1;
        MemoryTrace_Alloc((ulong64)pvVar10,param_1,param_2,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (this,Default,pvVar10,param_1,LinearAllocator,FMalloc,true);
        }
        return pvVar10;
      }
      if ((0x1000 < param_1 + 0x50 + uVar12) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeaderSize + Size + Alignment <= BlockAllocationTag::BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                             ,0x1a4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar5)();
        return pvVar8;
      }
      lVar3 = *(longlong *)((longlong)pvVar8 + uVar11 * 8);
      *(longlong *)(*(longlong *)(lVar3 + 0xe78) + 0x40) = *(longlong *)(lVar3 + 0xe78) + 0x1000;
      puVar4 = *(uint **)(lVar3 + 0xe78);
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 - ~puVar4[0x12];
      UNLOCK();
      if (uVar2 != ~puVar4[0x12]) break;
      puVar7 = *(undefined4 **)(lVar3 + 0xe78);
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *(undefined4 **)(lVar3 + 0xe78) = puVar7;
    }
  } while( true );
}

