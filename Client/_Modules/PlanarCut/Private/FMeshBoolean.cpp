// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// FMeshBoolean @ 14c9a14d0

FMeshBoolean * __thiscall
UE::Geometry::FMeshBoolean::FMeshBoolean
          (FMeshBoolean *this,FDynamicMesh3 *param_1,FDynamicMesh3 *param_2,FDynamicMesh3 *param_3,
          EBooleanOp param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  FMeshBoolean *pFVar9;
  
  this->Meshes[0] = param_1;
  this->_padding_ = (longlong)&___7FMeshBoolean_Geometry_UE__6B_;
  this->Meshes[1] = param_2;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->Transforms[0].Rotation.field0_0x0._s_0.X = 0.0;
  this->Transforms[0].Rotation.field0_0x0._s_0.Y = 0.0;
  this->Transforms[0].Rotation.field0_0x0._s_0.Z = 0.0;
  this->Transforms[0].Rotation.field0_0x0._s_0.W = 1.0;
  this->Transforms[0].Translation.field0_0x0._s_0.X = (double)uVar2;
  this->Transforms[0].Translation.field0_0x0._s_0.Y = (double)uVar3;
  this->Transforms[0].Scale3D.field0_0x0._s_0.X = (double)uVar5;
  this->Transforms[0].Scale3D.field0_0x0._s_0.Y = (double)uVar6;
  this->Transforms[0].Translation.field0_0x0._s_0.Z = (double)uVar4;
  this->Transforms[0].Scale3D.field0_0x0._s_0.Z = (double)uVar7;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->Transforms[1].Rotation.field0_0x0._s_0.X = 0.0;
  this->Transforms[1].Rotation.field0_0x0._s_0.Y = 0.0;
  this->Transforms[1].Rotation.field0_0x0._s_0.Z = 0.0;
  this->Transforms[1].Rotation.field0_0x0._s_0.W = 1.0;
  this->Transforms[1].Translation.field0_0x0._s_0.X = (double)uVar2;
  this->Transforms[1].Translation.field0_0x0._s_0.Y = (double)uVar3;
  this->Transforms[1].Scale3D.field0_0x0._s_0.X = (double)uVar5;
  this->Transforms[1].Scale3D.field0_0x0._s_0.Y = (double)uVar6;
  this->Transforms[1].Translation.field0_0x0._s_0.Z = (double)uVar4;
  this->Transforms[1].Scale3D.field0_0x0._s_0.Z = (double)uVar7;
  this->Operation = param_4;
  this->SnapTolerance = 9.999999974752427e-07;
  this->DegenerateEdgeTolFactor = 1.5;
  this->bCollapseDegenerateEdgesOnCut = true;
  this->WindingThreshold = 0.5;
  this->SimplificationAngleTolerance = 0.1;
  this->TryToImproveTriQualityThreshold = 0.5;
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
  this->Result = param_3;
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ResultTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar2;
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
  if (((param_1 == (FDynamicMesh3 *)0x0) || (param_2 == (FDynamicMesh3 *)0x0)) ||
     (param_3 == (FDynamicMesh3 *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshA != nullptr && MeshB != nullptr && OutputMesh != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshBoolean.h"
                       ,0xa7,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FMeshBoolean *)(*pcVar1)();
      return pFVar9;
    }
  }
  return this;
}

