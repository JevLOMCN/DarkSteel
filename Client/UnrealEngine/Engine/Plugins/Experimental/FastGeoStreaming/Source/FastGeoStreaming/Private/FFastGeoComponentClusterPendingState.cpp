// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// FFastGeoComponentClusterPendingState @ 14da186d0

FFastGeoComponentClusterPendingState * __thiscall
FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState
          (FFastGeoComponentClusterPendingState *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->RenderState).ComponentsToProcess.ArrayMax;
  (this->RenderState).ComponentsToProcess.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->RenderState).ComponentsToProcess.ArrayNum = 0;
  (this->RenderState).NumToProcess = 0;
  (this->RenderState).NumProcessed = 0;
  (this->RenderState).TotalNumProcessed = 0;
  (this->PhysicsState).TotalNumProcessed = (atomic<int>)0x0;
  (this->PhysicsState).ComponentsToProcess =
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
  LOCK();
  (this->PhysicsState).TotalNumProcessed = (atomic<int>)0x0;
  UNLOCK();
  iVar2 = *piVar1;
  (this->RenderState).ComponentsToProcess.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  (this->RenderState).NumToProcess = 0;
  (this->RenderState).NumProcessed = 0;
  (this->RenderState).TotalNumProcessed = 0;
  (this->PhysicsState).ComponentsToProcess =
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
  LOCK();
  (this->PhysicsState).TotalNumProcessed = (atomic<int>)0x0;
  UNLOCK();
  this->bIsInBlockingWait = false;
  return this;
}

