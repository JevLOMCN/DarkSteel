// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FGroupEdgeInsertionOp @ 14cd4f0c0

FGroupEdgeInsertionOp * __thiscall
UE::Geometry::FGroupEdgeInsertionOp::FGroupEdgeInsertionOp(FGroupEdgeInsertionOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->CommonGroupID = -1;
  this->CommonBoundaryIndex = 0;
  this->_padding_ = (longlong)&___7FGroupEdgeInsertionOp_Geometry_UE__6B_;
  this->VertexTolerance = 0.0009999999747378752;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OriginalTopology).Object = (FGroupTopology *)0x0;
  (this->OriginalTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->Eids).Elements = 0;
  *(undefined8 *)&(this->Eids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Eids).Elements.field_0x20 = 0;
  this->bShowingBaseMesh = false;
  *(undefined4 *)&(this->Eids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Eids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Eids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Eids).Elements.field_0x34 = 0;
  (this->Eids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Eids).HashSize = 0;
  (this->ChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->ChangedTids).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ResultTopology).Object = (FGroupTopology *)0x0;
  (this->ResultTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bSucceeded = false;
  return this;
}

// ~FGroupEdgeInsertionOp @ 14cd531d0

void __thiscall
UE::Geometry::FGroupEdgeInsertionOp::~FGroupEdgeInsertionOp(FGroupEdgeInsertionOp *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FGroupEdgeInsertionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResultTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangedTids).SharedReferenceCount.ReferenceController);
  (this->Eids).HashSize = 0;
  FVar1 = (this->Eids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Eids).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

