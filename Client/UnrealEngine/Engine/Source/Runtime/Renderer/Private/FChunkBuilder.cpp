// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FChunkBuilder @ 145476d80

FChunkBuilder * __thiscall FSceneCullingBuilder::FChunkBuilder::FChunkBuilder(FChunkBuilder *this)

{
  this->CurrentChunkCount = 0x40;
  (this->PackedChunkIds).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  this->CurrentChunkId = -1;
  (this->PackedChunkIds).ArrayNum = 0;
  (this->PackedChunkIds).ArrayMax = 0x20;
  return this;
}

// ~FChunkBuilder @ 145478f60

void __thiscall FSceneCullingBuilder::FChunkBuilder::~FChunkBuilder(FChunkBuilder *this)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  puVar3 = (this->PackedChunkIds).AllocatorInstance.SecondaryData.Data;
  if (puVar3 == (uint *)0x0) {
    return;
  }
  if (puVar3 != (uint *)0x0) {
    puVar3 = puVar3 + -2;
    MemoryTrace_Free((ulong64)puVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar3,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar3 - (ulonglong)*puVar3);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar2 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

