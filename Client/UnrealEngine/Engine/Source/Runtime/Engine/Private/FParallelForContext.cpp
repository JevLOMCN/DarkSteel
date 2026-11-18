// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FParallelForContext @ 147ea92c0

void __thiscall
FRenderCommandList::FParallelForContext::~FParallelForContext(FParallelForContext *this)

{
  int iVar1;
  longlong lVar2;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  FRenderCommandList **ppFVar3;
  int *piVar4;
  
  Submit(this);
  ppFVar3 = (this->TaskCommandLists).AllocatorInstance.Data;
  if (ppFVar3 != (FRenderCommandList **)0x0) {
    ppFVar3 = ppFVar3 + -1;
    MemoryTrace_Free((ulong64)ppFVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,ppFVar3,FMalloc,true);
    }
    piVar4 = (int *)((longlong)ppFVar3 - (ulonglong)*(uint *)ppFVar3);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar2 - (longlong)piVar4 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar4);
        return;
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
    }
  }
  return;
}

