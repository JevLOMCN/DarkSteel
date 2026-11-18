// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 1452fff40

FRayTracingSceneInitializationData * __thiscall
FRayTracingSceneInitializationData::operator=
          (FRayTracingSceneInitializationData *this,FRayTracingSceneInitializationData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRayTracingInstanceGroupEntryRef,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRayTracingInstanceGroupEntryRef,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRHIRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRHIRayTracingGeometry_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->InstanceGeometryIndices;
  this->NumGPUInstanceGroups = param_1->NumGPUInstanceGroups;
  pTVar2 = &this->InstanceGeometryIndices;
  this->NumCPUInstanceGroups = param_1->NumCPUInstanceGroups;
  this->NumGPUInstanceDescriptors = param_1->NumGPUInstanceDescriptors;
  this->NumCPUInstanceDescriptors = param_1->NumCPUInstanceDescriptors;
  this->NumNativeGPUSceneInstances = param_1->NumNativeGPUSceneInstances;
  this->NumNativeCPUInstances = param_1->NumNativeCPUInstances;
  this->TotalNumSegments = param_1->TotalNumSegments;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InstanceGeometryIndices).ArrayNum = (param_1->InstanceGeometryIndices).ArrayNum;
    (this->InstanceGeometryIndices).ArrayMax = (param_1->InstanceGeometryIndices).ArrayMax;
    (param_1->InstanceGeometryIndices).ArrayNum = 0;
    (param_1->InstanceGeometryIndices).ArrayMax = 0;
  }
  pTVar1 = &param_1->BaseUploadBufferOffsets;
  pTVar2 = &this->BaseUploadBufferOffsets;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BaseUploadBufferOffsets).ArrayNum = (param_1->BaseUploadBufferOffsets).ArrayNum;
    (this->BaseUploadBufferOffsets).ArrayMax = (param_1->BaseUploadBufferOffsets).ArrayMax;
    (param_1->BaseUploadBufferOffsets).ArrayNum = 0;
    (param_1->BaseUploadBufferOffsets).ArrayMax = 0;
  }
  pTVar1 = &param_1->BaseInstancePrefixSum;
  pTVar2 = &this->BaseInstancePrefixSum;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BaseInstancePrefixSum).ArrayNum = (param_1->BaseInstancePrefixSum).ArrayNum;
    (this->BaseInstancePrefixSum).ArrayMax = (param_1->BaseInstancePrefixSum).ArrayMax;
    (param_1->BaseInstancePrefixSum).ArrayNum = 0;
    (param_1->BaseInstancePrefixSum).ArrayMax = 0;
  }
  pTVar3 = &param_1->InstanceGroupEntryRefs;
  pTVar4 = &this->InstanceGroupEntryRefs;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InstanceGroupEntryRefs).ArrayNum = (param_1->InstanceGroupEntryRefs).ArrayNum;
    (this->InstanceGroupEntryRefs).ArrayMax = (param_1->InstanceGroupEntryRefs).ArrayMax;
    (param_1->InstanceGroupEntryRefs).ArrayNum = 0;
    (param_1->InstanceGroupEntryRefs).ArrayMax = 0;
  }
  pTVar5 = &param_1->ReferencedGeometries;
  pTVar6 = &this->ReferencedGeometries;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ReferencedGeometries).ArrayNum = (param_1->ReferencedGeometries).ArrayNum;
    (this->ReferencedGeometries).ArrayMax = (param_1->ReferencedGeometries).ArrayMax;
    (param_1->ReferencedGeometries).ArrayNum = 0;
    (param_1->ReferencedGeometries).ArrayMax = 0;
  }
  return this;
}

