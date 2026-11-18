// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// FMeshPlaneCut @ 14c946840

FMeshPlaneCut * __thiscall
UE::Geometry::FMeshPlaneCut::FMeshPlaneCut
          (FMeshPlaneCut *this,FDynamicMesh3 *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  this->Mesh = param_1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(undefined ***)this = &___7FMeshPlaneCut_Geometry_UE__6B_;
  (this->PlaneOrigin).field0_0x0._s_0.X = dVar2;
  (this->PlaneOrigin).field0_0x0._s_0.Y = dVar3;
  this->DegenerateEdgeTol = 1e-08;
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  this->PlaneTolerance = 9.999999974752427e-06;
  (this->PlaneOrigin).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (this->PlaneNormal).field0_0x0._s_0.X = dVar2;
  (this->PlaneNormal).field0_0x0._s_0.Y = dVar3;
  this->bSimplifyAlongNewEdges = false;
  this->bCollapseDegenerateEdgesOnCut = true;
  (this->PlaneNormal).field0_0x0._s_0.Z = dVar1;
  (this->SimplifySettings).SimplificationAngleTolerance = 0.1;
  (this->SimplifySettings).TryToImproveTriQualityThreshold = 0.25;
  *(undefined8 *)&this->EdgeFilterFunc = 0;
  *(undefined8 *)&(this->EdgeFilterFunc).field_0x28 = 0;
  this->UVScaleFactor = 1.0;
  (this->SimplifySettings).bPreserveTriangleGroups = true;
  (this->SimplifySettings).bPreserveVertexUVs = true;
  (this->SimplifySettings).bPreserveOverlayUVs = true;
  (this->SimplifySettings).UVDistortTolerance = 1e-06;
  (this->SimplifySettings).bPreserveVertexNormals = true;
  (this->SimplifySettings).NormalDistortTolerance = 0.01;
  (this->OpenBoundaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenBoundaries).ArrayNum = 0;
  (this->OpenBoundaries).ArrayMax = 0;
  (this->HoleFillTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HoleFillTriangles).ArrayNum = 0;
  (this->HoleFillTriangles).ArrayMax = 0;
  (this->ResultRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultRegions).ArrayNum = 0;
  (this->ResultRegions).ArrayMax = 0;
  (this->ResultSeedTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultSeedTriangles).ArrayNum = 0;
  (this->ResultSeedTriangles).ArrayMax = 0;
  *(undefined8 *)&(this->OnCutVertices).Elements = 0;
  *(undefined8 *)&(this->OnCutVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OnCutVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OnCutVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OnCutVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnCutVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnCutVertices).Elements.field_0x34 = 0;
  (this->OnCutVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OnCutVertices).HashSize = 0;
  return this;
}

// ~FMeshPlaneCut @ 14c949620

void __thiscall UE::Geometry::FMeshPlaneCut::~FMeshPlaneCut(FMeshPlaneCut *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FMeshPlaneCut_Geometry_UE__6B_;
  (this->OnCutVertices).HashSize = 0;
  FVar1 = (this->OnCutVertices).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnCutVertices).Elements);
  pFVar2 = (this->ResultSeedTriangles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>
            ((FCutResultRegion *)(this->ResultRegions).AllocatorInstance.Data,
             (this->ResultRegions).ArrayNum);
  pFVar2 = (this->ResultRegions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->HoleFillTriangles).AllocatorInstance.Data,(this->HoleFillTriangles).ArrayNum);
  pFVar2 = (this->HoleFillTriangles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int>
            ((FOpenBoundary *)(this->OpenBoundaries).AllocatorInstance.Data,
             (this->OpenBoundaries).ArrayNum);
  pFVar2 = (this->OpenBoundaries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->EdgeFilterFunc != 0) {
    plVar3 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
    plVar4 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// SplitEdgesOnly @ 14c986b40

bool __thiscall UE::Geometry::FMeshPlaneCut::SplitEdgesOnly(FMeshPlaneCut *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = SplitEdgesOnlyHelper
                    (this,param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0,true)
  ;
  return bVar1;
}

// SplitEdgesOnly @ 14c986b60

bool __thiscall
UE::Geometry::FMeshPlaneCut::SplitEdgesOnly
          (FMeshPlaneCut *this,bool param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  bool bVar1;
  
  bVar1 = SplitEdgesOnlyHelper(this,param_1,param_2,false);
  return bVar1;
}

// Validate @ 14c987a80

EOperationValidationResult __thiscall UE::Geometry::FMeshPlaneCut::Validate(FMeshPlaneCut *this)

{
  return Ok;
}

