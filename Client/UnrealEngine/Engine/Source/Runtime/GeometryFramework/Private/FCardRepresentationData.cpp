// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// ~FCardRepresentationData @ 1496fae10

void __thiscall FCardRepresentationData::~FCardRepresentationData(FCardRepresentationData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FLumenCardBuildDebugData::FSurfelCluster,int>
            ((FSurfelCluster *)(this->MeshCardsBuildData).DebugData.Clusters.AllocatorInstance.Data,
             (this->MeshCardsBuildData).DebugData.Clusters.ArrayNum);
  pFVar1 = (this->MeshCardsBuildData).DebugData.Clusters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshCardsBuildData).DebugData.SurfelRays.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshCardsBuildData).DebugData.Surfels.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshCardsBuildData).CardBuildData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

