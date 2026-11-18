// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FRayTracingInstanceCollector @ 1452ffd30

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

void __thiscall
FRayTracingInstanceCollector::~FRayTracingInstanceCollector(FRayTracingInstanceCollector *this)

{
  ForElementType<FSetElementId> FVar1;
  FRayTracingDynamicGeometryUpdateRequest *pFVar2;
  FRayTracingInstanceAndViewIndex *pFVar3;
  FScriptContainerElement *pFVar4;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *pTVar5;
  
  (this->ReferencedGeometryGroupsForDynamicUpdate).HashSize = 0;
  FVar1 = (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements);
  (this->ReferencedGeometryGroups).HashSize = 0;
  FVar1 = (this->ReferencedGeometryGroups).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedGeometryGroups).Elements);
  DestructItems<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest,int>
            ((this->RayTracingGeometriesToUpdate).AllocatorInstance.Data,
             (this->RayTracingGeometriesToUpdate).ArrayNum);
  pFVar2 = (this->RayTracingGeometriesToUpdate).AllocatorInstance.Data;
  if (pFVar2 != (FRayTracingDynamicGeometryUpdateRequest *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  pTVar5 = (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 == (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    pTVar5 = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
             &this->RDGPooledBuffers;
  }
  DestructItems<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>,int>
            (pTVar5,(this->RDGPooledBuffers).ArrayNum);
  pTVar5 = (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data;
  if (pTVar5 != (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar5);
  }
  DestructItems<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex,int>
            ((this->RayTracingInstances).AllocatorInstance.Data,(this->RayTracingInstances).ArrayNum
            );
  pFVar3 = (this->RayTracingInstances).AllocatorInstance.Data;
  if (pFVar3 != (FRayTracingInstanceAndViewIndex *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
  }
  pFVar4 = (this->Views).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FMeshElementCollector::~FMeshElementCollector((FMeshElementCollector *)this);
  return;
}

