// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FEdgeLoopInsertionOp @ 14cd4ec70

FEdgeLoopInsertionOp * __thiscall
UE::Geometry::FEdgeLoopInsertionOp::FEdgeLoopInsertionOp(FEdgeLoopInsertionOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->GroupEdgeID = -1;
  this->_padding_ = (longlong)&___7FEdgeLoopInsertionOp_Geometry_UE__6B_;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OriginalTopology).Object = (FGroupTopology *)0x0;
  (this->OriginalTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->InputLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputLengths).ArrayNum = 0;
  (this->InputLengths).ArrayMax = 0;
  *(undefined8 *)&(this->LoopEids).Elements = 0;
  *(undefined8 *)&(this->LoopEids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoopEids).Elements.field_0x20 = 0;
  this->bInputsAreProportions = false;
  this->StartCornerID = -1;
  *(undefined4 *)&(this->LoopEids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoopEids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoopEids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LoopEids).Elements.field_0x30 = 0xffffffff;
  (this->LoopEids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoopEids).HashSize = 0;
  (this->ChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->ChangedTids).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ProblemGroupEdgeIDs).Elements = 0;
  *(undefined8 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ProblemGroupEdgeIDs).Elements.field_0x30 = 0xffffffff;
  (this->ProblemGroupEdgeIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProblemGroupEdgeIDs).HashSize = 0;
  (this->ResultTopology).Object = (FGroupTopology *)0x0;
  (this->ResultTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bSucceeded = false;
  return this;
}

// ~FEdgeLoopInsertionOp @ 14cd53000

void __thiscall
UE::Geometry::FEdgeLoopInsertionOp::~FEdgeLoopInsertionOp(FEdgeLoopInsertionOp *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FEdgeLoopInsertionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ResultTopology).SharedReferenceCount.ReferenceController);
  (this->ProblemGroupEdgeIDs).HashSize = 0;
  FVar1 = (this->ProblemGroupEdgeIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProblemGroupEdgeIDs).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChangedTids).SharedReferenceCount.ReferenceController);
  (this->LoopEids).HashSize = 0;
  FVar1 = (this->LoopEids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoopEids).Elements);
  pFVar2 = (this->InputLengths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

