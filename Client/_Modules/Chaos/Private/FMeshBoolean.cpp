// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FMeshBoolean @ 1440127d0

FMeshBoolean * __thiscall
UE::Geometry::FMeshBoolean::FMeshBoolean
          (FMeshBoolean *this,FDynamicMesh3 *param_1,TTransformSRT3<double> *param_2,
          FDynamicMesh3 *param_3,TTransformSRT3<double> *param_4,FDynamicMesh3 *param_5,
          EBooleanOp param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  FMeshBoolean *pFVar6;
  
  this->Meshes[0] = param_1;
  this->_padding_ = (longlong)&___7FMeshBoolean_Geometry_UE__6B_;
  this->Meshes[1] = param_3;
  dVar2 = (param_2->Rotation).field0_0x0._s_0.Y;
  this->Transforms[0].Rotation.field0_0x0._s_0.X = (param_2->Rotation).field0_0x0._s_0.X;
  this->Transforms[0].Rotation.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_2->Rotation).field0_0x0._s_0.W;
  this->Transforms[0].Rotation.field0_0x0._s_0.Z = (param_2->Rotation).field0_0x0._s_0.Z;
  this->Transforms[0].Rotation.field0_0x0._s_0.W = dVar2;
  dVar2 = (param_2->Translation).field0_0x0._s_0.Y;
  this->Transforms[0].Translation.field0_0x0._s_0.X = (param_2->Translation).field0_0x0._s_0.X;
  this->Transforms[0].Translation.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_2->Scale3D).field0_0x0._s_0.X;
  this->Transforms[0].Translation.field0_0x0._s_0.Z = (param_2->Translation).field0_0x0._s_0.Z;
  this->Transforms[0].Scale3D.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_2->Scale3D).field0_0x0._s_0.Z;
  this->Transforms[0].Scale3D.field0_0x0._s_0.Y = (param_2->Scale3D).field0_0x0._s_0.Y;
  this->Transforms[0].Scale3D.field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_4->Rotation).field0_0x0._s_0.Y;
  this->Transforms[1].Rotation.field0_0x0._s_0.X = (param_4->Rotation).field0_0x0._s_0.X;
  this->Transforms[1].Rotation.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_4->Rotation).field0_0x0._s_0.W;
  this->Transforms[1].Rotation.field0_0x0._s_0.Z = (param_4->Rotation).field0_0x0._s_0.Z;
  this->Transforms[1].Rotation.field0_0x0._s_0.W = dVar2;
  dVar2 = (param_4->Translation).field0_0x0._s_0.Y;
  this->Transforms[1].Translation.field0_0x0._s_0.X = (param_4->Translation).field0_0x0._s_0.X;
  this->Transforms[1].Translation.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_4->Scale3D).field0_0x0._s_0.X;
  this->Transforms[1].Translation.field0_0x0._s_0.Z = (param_4->Translation).field0_0x0._s_0.Z;
  this->Transforms[1].Scale3D.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_4->Scale3D).field0_0x0._s_0.Y;
  dVar3 = (param_4->Scale3D).field0_0x0._s_0.Z;
  this->Operation = param_6;
  this->Transforms[1].Scale3D.field0_0x0._s_0.Y = dVar2;
  this->Transforms[1].Scale3D.field0_0x0._s_0.Z = dVar3;
  this->SnapTolerance = 9.999999974752427e-07;
  this->DegenerateEdgeTolFactor = 1.5;
  this->bCollapseDegenerateEdgesOnCut = true;
  this->WindingThreshold = 0.5;
  this->SimplificationAngleTolerance = 0.1;
  this->TryToImproveTriQualityThreshold = 0.5;
  this->Result = param_5;
  this->bPutResultInInputSpace = true;
  this->bWeldSharedEdges = true;
  this->bTrackAllNewEdges = false;
  this->Progress = (FProgressCancel *)0x0;
  this->bSimplifyAlongNewEdges = false;
  this->bPreserveTriangleGroups = true;
  this->bPreserveVertexUVs = true;
  this->bPreserveOverlayUVs = true;
  this->UVDistortTolerance = 1e-06;
  this->bPreserveVertexNormals = true;
  this->NormalDistortTolerance = 0.01;
  this->PreserveUVsOnlyForMesh = -1;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar4;
  (this->ResultTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar4;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CreatedBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedBoundaryEdges).ArrayNum = 0;
  (this->CreatedBoundaryEdges).ArrayMax = 0;
  *(undefined8 *)&(this->AllNewEdges).Elements = 0;
  *(undefined8 *)&(this->AllNewEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllNewEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllNewEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllNewEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllNewEdges).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllNewEdges).Elements.field_0x34 = 0;
  (this->AllNewEdges).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllNewEdges).HashSize = 0;
  this->bPopulateSecondMeshGroupMap = false;
  *(undefined8 *)&(this->SecondMeshGroupMap).ForwardMap = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x8 = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x20 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x28 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x34 = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x40 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x48 = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ReverseMap = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x8 = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x20 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x28 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x34 = 0;
  *(undefined8 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x40 = 0;
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x48 = 0;
  (this->SecondMeshGroupMap).bWantForward = true;
  (this->SecondMeshGroupMap).bWantReverse = true;
  (this->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.ArrayNum = 0;
  (this->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.ArrayMax = -1;
  if (((param_1 == (FDynamicMesh3 *)0x0) || (param_3 == (FDynamicMesh3 *)0x0)) ||
     (param_5 == (FDynamicMesh3 *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshA != nullptr && MeshB != nullptr && OutputMesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshBoolean.h"
                       ,0xa1,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMeshBoolean *)(*pcVar1)();
      return pFVar6;
    }
  }
  return this;
}

// ~FMeshBoolean @ 144013030

void __thiscall UE::Geometry::FMeshBoolean::~FMeshBoolean(FMeshBoolean *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FMeshBoolean_Geometry_UE__6B_;
  if (((this->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SecondMeshGroupMap).ReverseMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SecondMeshGroupMap).ReverseMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SecondMeshGroupMap).ReverseMap);
  *(undefined4 *)&(this->SecondMeshGroupMap).ForwardMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SecondMeshGroupMap).ForwardMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SecondMeshGroupMap);
  (this->AllNewEdges).HashSize = 0;
  FVar3 = (this->AllNewEdges).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllNewEdges).Elements);
  pFVar1 = (this->CreatedBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Cancelled @ 144023350

bool __thiscall UE::Geometry::FMeshBoolean::Cancelled(FMeshBoolean *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

