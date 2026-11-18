// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FRemoveOccludedTrianglesOp @ 14ccba1a0

FRemoveOccludedTrianglesOp * __thiscall
UE::Geometry::FRemoveOccludedTrianglesOp::FRemoveOccludedTrianglesOp
          (FRemoveOccludedTrianglesOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->bActiveGroupLayerIsDefault = true;
  this->TriangleSamplingMethod = Centroids;
  this->_padding_ = (longlong)&___7FRemoveOccludedTrianglesOp_Geometry_UE__6B_;
  this->NormalOffset = 1e-08;
  this->WindingIsoValue = 0.5;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OccluderTrees).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTrees).ArrayNum = 0;
  (this->OccluderTrees).ArrayMax = 0;
  (this->OccluderWindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderWindings).ArrayNum = 0;
  (this->OccluderWindings).ArrayMax = 0;
  (this->OccluderTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OccluderTransforms).ArrayNum = 0;
  (this->OccluderTransforms).ArrayMax = 0;
  (this->MeshTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshTransforms).ArrayNum = 0;
  (this->MeshTransforms).ArrayMax = 0;
  this->AddRandomRays = 0;
  this->AddTriangleSamples = 0;
  this->ShrinkRemoval = 0;
  this->MinAreaConnectedComponent = 0.0;
  this->MinTriCountConnectedComponent = 0;
  this->bSetTriangleGroupInsteadOfRemoving = false;
  (this->ActiveGroupLayer).ComparisonIndex = 0;
  (this->ActiveGroupLayer).Number = 0;
  this->InsideMode = FastWindingNumber;
  this->CreatedGroupID = -1;
  this->CreatedGroupLayerIndex = -1;
  return this;
}

// ~FRemoveOccludedTrianglesOp @ 14ccc31f0

void __thiscall
UE::Geometry::FRemoveOccludedTrianglesOp::~FRemoveOccludedTrianglesOp
          (FRemoveOccludedTrianglesOp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRemoveOccludedTrianglesOp_Geometry_UE__6B_;
  pFVar1 = (this->MeshTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OccluderTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>,int>
            ((TSharedPtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1> *)
             (this->OccluderWindings).AllocatorInstance.Data,(this->OccluderWindings).ArrayNum);
  pFVar1 = (this->OccluderWindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>,int>
            ((TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
             (this->OccluderTrees).AllocatorInstance.Data,(this->OccluderTrees).ArrayNum);
  pFVar1 = (this->OccluderTrees).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

