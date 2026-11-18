// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Realloc @ 14820c550

void * __cdecl
TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Realloc
          (void *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  FLowLevelMemTracker *this;
  FPageAllocator *this_00;
  uint *puVar3;
  int *piVar4;
  ulonglong _Size;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (param_1 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    _Dst = Malloc(param_2,param_3);
    if (param_1 == (void *)0x0) {
      return _Dst;
    }
    _Size = (ulonglong)*(uint *)((longlong)param_1 + -4);
    if (_Size != 0) {
      if (param_2 < _Size) {
        _Size = param_2;
      }
      memcpy(_Dst,param_1,_Size);
    }
  }
  puVar3 = (uint *)((longlong)param_1 + -8);
  MemoryTrace_Free((ulong64)puVar3,0,0);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(this,Default,puVar3,FMalloc,true);
  }
  piVar4 = (int *)((longlong)puVar3 - (ulonglong)*puVar3);
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    lVar2 = *(longlong *)(piVar4 + 0x10);
    MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
    if (lVar2 - (longlong)piVar4 == 0x10000) {
      this_00 = FPageAllocator::Get();
      FPageAllocator::Free(this_00,piVar4);
      return _Dst;
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
  }
  return _Dst;
}

