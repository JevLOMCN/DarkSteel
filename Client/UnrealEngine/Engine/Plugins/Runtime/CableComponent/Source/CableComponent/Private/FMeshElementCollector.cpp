// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CableComponent
// Functions: 1

// AllocateOneFrameResource<FDynamicPrimitiveUniformBuffer> @ 14f012350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicPrimitiveUniformBuffer * __thiscall
FMeshElementCollector::AllocateOneFrameResource<FDynamicPrimitiveUniformBuffer>
          (FMeshElementCollector *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar2;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  bool bVar5;
  
  paVar1 = &this->OneFrameResources->Next;
  aVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
  *(undefined8 *)((longlong)aVar2 + 8) = 0;
  *(undefined ***)aVar2 =
       &
       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar3.Next = *paVar1;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar2 + 8) = TVar3.Next;
    LOCK();
    aVar4 = *paVar1;
    bVar5 = TVar3.Next == aVar4;
    if (bVar5) {
      *paVar1 = aVar2;
      aVar4 = TVar3.Next;
    }
    UNLOCK();
    TVar3.Next = aVar4;
  } while (!bVar5);
  FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
            ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar2 + 0x10));
  return (FDynamicPrimitiveUniformBuffer *)((longlong)aVar2 + 0x10);
}

