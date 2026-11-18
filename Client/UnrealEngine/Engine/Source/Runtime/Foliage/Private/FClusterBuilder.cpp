// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// ~FClusterBuilder @ 145ed9fe0

void __thiscall
UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::~FClusterBuilder(FClusterBuilder *this)

{
  FScriptContainerElement *pFVar1;
  FStaticMeshInstanceData *pFVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  FClusterTree *pFVar4;
  
  pFVar1 = (this->SortPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Clusters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomDataFloats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->BuiltInstanceData).Ptr;
  if (pFVar2 != (FStaticMeshInstanceData *)0x0) {
    pFVar3 = pFVar2->InstanceOriginData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = pFVar2->InstanceLightmapData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = pFVar2->InstanceTransformData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    pFVar3 = pFVar2->InstanceCustomData;
    if (pFVar3 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar3)(pFVar3,1);
    }
    ::operator_delete(pFVar2,0x50);
  }
  pFVar4 = (this->Result).Ptr;
  if (pFVar4 != (FClusterTree *)0x0) {
    pFVar1 = (pFVar4->InstanceReorderTable).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->SortedInstances).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar4->Nodes).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar4,0x38);
  }
  return;
}

