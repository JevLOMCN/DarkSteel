// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// operator() @ 14ea77fe0

void __thiscall
TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>::operator()
          (TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>
           *this,TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_1)

{
  int iVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  longlong lVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint *puVar5;
  int *piVar6;
  
  if (param_1 != (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *)0x0) {
    LOCK();
    aVar2 = param_1->Next;
    param_1->Next =
         (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          )0x0;
    UNLOCK();
    while (aVar2 != (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                     )0x0) {
      aVar3 = *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar2 + 8);
      (*(code *)**(undefined8 **)aVar2)(aVar2);
      puVar5 = (uint *)((longlong)aVar2 + -8);
      MemoryTrace_Free((ulong64)puVar5,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar5,FMalloc,true);
      }
      piVar6 = (int *)((longlong)puVar5 - (ulonglong)*puVar5);
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      aVar2 = aVar3;
      if (iVar1 == 1) {
        lVar4 = *(longlong *)(piVar6 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
        if (lVar4 - (longlong)piVar6 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar6);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    ::operator_delete(param_1,8);
  }
  return;
}

