// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FCurveSweepOp @ 14cc1b200

FCurveSweepOp * __thiscall UE::Geometry::FCurveSweepOp::FCurveSweepOp(FCurveSweepOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FCurveSweepOp_Geometry_UE__6B_;
  (this->ProfileCurve).ArrayNum = 0;
  (this->ProfileCurve).ArrayMax = 0;
  (this->SweepCurve).ArrayNum = 0;
  (this->SweepCurve).ArrayMax = 0;
  *(undefined8 *)&(this->ProfileVerticesToWeld).Elements.field_0x8 = 0;
  (this->ProfileCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SweepCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->ProfileVerticesToWeld).Elements = 0;
  *(undefined8 *)&(this->ProfileVerticesToWeld).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ProfileVerticesToWeld).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ProfileVerticesToWeld).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ProfileVerticesToWeld).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProfileVerticesToWeld).Elements.field_0x34 = 0;
  (this->ProfileVerticesToWeld).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ProfileVerticesToWeld).HashSize = 0;
  this->SharpNormalAngleTolerance = 0.1;
  (this->UVScale).field0_0x0._s_0.X = 1.0;
  (this->UVScale).field0_0x0._s_0.Y = 1.0;
  this->UnitUVInWorldCoordinates = 100.0;
  this->DiagonalTolerance = 0.01;
  this->bProfileCurveIsClosed = false;
  this->bSweepCurveIsClosed = false;
  this->bSharpNormals = true;
  this->CapFillMode = Delaunay;
  this->bUVsSkipFullyWeldedEdges = true;
  (this->UVOffset).field0_0x0._s_0.X = 0.0;
  (this->UVOffset).field0_0x0._s_0.Y = 0.0;
  this->bUVScaleRelativeWorld = false;
  this->PolygonGroupingMode = PerFace;
  this->QuadSplitMode = ShortestDiagonal;
  return this;
}

// ~FCurveSweepOp @ 14cc22020

void __thiscall UE::Geometry::FCurveSweepOp::~FCurveSweepOp(FCurveSweepOp *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FCurveSweepOp_Geometry_UE__6B_;
  (this->ProfileVerticesToWeld).HashSize = 0;
  FVar1 = (this->ProfileVerticesToWeld).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ProfileVerticesToWeld).Elements);
  pFVar2 = (this->SweepCurve).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProfileCurve).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

