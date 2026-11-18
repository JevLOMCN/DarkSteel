// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// operator() @ 1447fed20

void __thiscall
TDefaultDelete<FVirtualTextureUpdater>::operator()
          (TDefaultDelete<FVirtualTextureUpdater> *this,FVirtualTextureUpdater *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar4;
  FTaskBase *pFVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar6;
  longlong lVar7;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint *puVar8;
  int *piVar9;
  
  if (param_1 != (FVirtualTextureUpdater *)0x0) {
    pFVar5 = (param_1->AsyncTask).Pimpl.Reference;
    if (pFVar5 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar5->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar5->_padding_)();
      }
    }
    LOCK();
    aVar4 = (param_1->Allocator).Next;
    (param_1->Allocator).Next =
         (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
         0x0;
    UNLOCK();
    while (aVar4 != (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                     )0x0) {
      aVar6 = *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar4 + 8);
      (*(code *)**(undefined8 **)aVar4)(aVar4);
      puVar8 = (uint *)((longlong)aVar4 + -8);
      MemoryTrace_Free((ulong64)puVar8,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar8,FMalloc,true);
      }
      piVar9 = (int *)((longlong)puVar8 - (ulonglong)*puVar8);
      LOCK();
      iVar3 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      aVar4 = aVar6;
      if (iVar3 == 1) {
        lVar7 = *(longlong *)(piVar9 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar9,0,0);
        if (lVar7 - (longlong)piVar9 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar9);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
        }
      }
    }
    ::operator_delete(param_1,0x60);
  }
  return;
}

// operator() @ 1448f8810

void __thiscall
TDefaultDelete<FRHIGPUBufferReadback>::operator()
          (TDefaultDelete<FRHIGPUBufferReadback> *this,FRHIGPUBufferReadback *param_1)

{
  FRHIStagingBuffer *this_00;
  longlong lVar1;
  FRHIGPUBufferReadback *pFVar2;
  
  if (param_1 != (FRHIGPUBufferReadback *)0x0) {
    lVar1 = 8;
    pFVar2 = param_1 + 1;
    do {
      this_00 = pFVar2[-1].DestinationStagingBuffers[7].Reference;
      pFVar2 = (FRHIGPUBufferReadback *)(pFVar2[-1].DestinationStagingBuffers + 7);
      lVar1 = lVar1 + -1;
      if (this_00 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar1 != 0);
    param_1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)param_1->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)param_1->_padding_);
    }
    ::operator_delete(param_1,0x58);
  }
  return;
}

// operator() @ 14566e3c0

void __thiscall
TDefaultDelete<FSkinningSceneExtension::FBuffers>::operator()
          (TDefaultDelete<FSkinningSceneExtension::FBuffers> *this,FBuffers *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != (FBuffers *)0x0) {
    puVar3 = *(undefined8 **)&(param_1->TransformDataBuffer).field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)&(param_1->BoneObjectSpaceBuffer).field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)&(param_1->BoneHierarchyBuffer).field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)&(param_1->HeaderDataBuffer).field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    ::operator_delete(param_1,0x80);
  }
  return;
}

// operator() @ 14566e490

void __thiscall
TDefaultDelete<FSkinningSceneExtension::FUploader>::operator()
          (TDefaultDelete<FSkinningSceneExtension::FUploader> *this,FUploader *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != (FUploader *)0x0) {
    pFVar1 = (param_1->TransformDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->TransformDataUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BoneObjectSpaceUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BoneObjectSpaceUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BoneHierarchyUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->BoneHierarchyUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->HeaderDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->HeaderDataUploader).UploadData.Values.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xc0);
  }
  return;
}

