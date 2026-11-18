// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRayTracingMeshBatchWorkItem @ 1452fe7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRayTracingMeshBatchWorkItem * __thiscall
RayTracing::FRayTracingMeshBatchWorkItem::FRayTracingMeshBatchWorkItem
          (FRayTracingMeshBatchWorkItem *this)

{
  this->SceneProxy = (FPrimitiveSceneProxy *)0x0;
  this->RayTracingGeometry = (FRHIRayTracingGeometry *)0x0;
  (this->MeshBatchesOwned).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchesOwned).ArrayNum = 0;
  (this->MeshBatchesOwned).ArrayMax = 0;
  (this->MeshBatchesView).DataPtr = (FMeshBatch *)0x0;
  (this->MeshBatchesView).ArrayNum = 0;
  this->SBTAllocation = (FRayTracingSBTAllocation *)0x0;
  return this;
}

// ~FRayTracingMeshBatchWorkItem @ 1452ffe30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RayTracing::FRayTracingMeshBatchWorkItem::~FRayTracingMeshBatchWorkItem
          (FRayTracingMeshBatchWorkItem *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(this->MeshBatchesOwned).AllocatorInstance.Data,
             (this->MeshBatchesOwned).ArrayNum);
  pFVar1 = (this->MeshBatchesOwned).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

