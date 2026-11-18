// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FMaterialCachePageCollection @ 144e72350

FMaterialCachePageCollection * __thiscall
FMaterialCachePageCollection::FMaterialCachePageCollection(FMaterialCachePageCollection *this)

{
  (this->Pages).AllocatorInstance.Data = (FMaterialCachePageInfo *)0x0;
  (this->Pages).ArrayNum = 0;
  (this->Pages).ArrayMax = 0;
  return this;
}

// ~FMaterialCachePageCollection @ 144e743e0

void __thiscall
FMaterialCachePageCollection::~FMaterialCachePageCollection(FMaterialCachePageCollection *this)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  FMaterialCachePageInfo *pFVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar5;
  
  pFVar4 = (this->Pages).AllocatorInstance.Data;
  if (pFVar4 == (FMaterialCachePageInfo *)0x0) {
    return;
  }
  if (pFVar4 != (FMaterialCachePageInfo *)0x0) {
    puVar1 = &pFVar4[-1].ABufferPageIndex;
    MemoryTrace_Free((ulong64)puVar1,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar1,FMalloc,true);
    }
    piVar5 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar3 = *(longlong *)(piVar5 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar5,0,0);
      if (lVar3 - (longlong)piVar5 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar5);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar5);
      return;
    }
  }
  return;
}

