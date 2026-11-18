// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Reset @ 14e0aa630

void __thiscall FHairStrandsClusterData::Reset(FHairStrandsClusterData *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FHairLODInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FHairStrandsClusterData local_58;
  
  if (this != &local_58) {
    pFVar3 = (this->ClusterInfos).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->ClusterInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ClusterInfos).ArrayNum = 0;
    (this->ClusterInfos).ArrayMax = 0;
  }
  pTVar1 = &this->CurveToClusterIds;
  if (pTVar1 != &local_58.CurveToClusterIds) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurveToClusterIds).ArrayNum = 0;
    (this->CurveToClusterIds).ArrayMax = 0;
  }
  pTVar2 = &this->LODInfos;
  if (pTVar2 != &local_58.LODInfos) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LODInfos).ArrayNum = 0;
    (this->LODInfos).ArrayMax = 0;
  }
  pTVar1 = &this->PointLODs;
  if (pTVar1 != &local_58.PointLODs) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointLODs).ArrayNum = 0;
    (this->PointLODs).ArrayMax = 0;
  }
  this->ClusterCount = 0;
  this->ClusterScale = 0.0;
  this->PointCount = 0;
  this->CurveCount = 0;
  return;
}

