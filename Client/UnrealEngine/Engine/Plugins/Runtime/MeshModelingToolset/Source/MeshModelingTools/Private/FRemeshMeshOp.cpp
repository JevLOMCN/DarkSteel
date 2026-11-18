// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FRemeshMeshOp @ 14ccb9f20

FRemeshMeshOp * __thiscall UE::Geometry::FRemeshMeshOp::FRemeshMeshOp(FRemeshMeshOp *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->RemeshIterations = 0x14;
  this->_padding_ = (longlong)&___7FRemeshMeshOp_Geometry_UE__6B_;
  this->RemeshType = Standard;
  this->MaxRemeshIterations = 0x14;
  this->MinActiveEdgeFraction = 0.01;
  this->BoundaryCornerAngleThreshold = 45.0;
  this->ExtraProjectionIterations = 5;
  this->TriangleCountHint = 0;
  this->SmoothingStrength = 0.25;
  this->TargetEdgeLength = 1.0;
  this->bDiscardAttributes = false;
  this->bPreserveSharpEdges = true;
  this->bFlips = true;
  this->bSplits = true;
  this->bCollapses = true;
  this->bReproject = true;
  this->bPreventNormalFlips = true;
  this->bPreventTinyTriangles = true;
  this->bReprojectConstraints = false;
  this->bResultMustHaveAttributesEnabled = false;
  this->ProjectionTarget = (FDynamicMesh3 *)0x0;
  this->ProjectionTargetSpatial = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->OriginalMeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->OriginalMeshSpatial).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetMeshLocalToWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.X = (double)uVar1;
  (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.X = (double)uVar4;
  (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y = (double)uVar5;
  (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Z = (double)uVar3;
  (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z = (double)uVar6;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ToolMeshLocalToWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.X = (double)uVar1;
  (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.X = (double)uVar4;
  (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y = (double)uVar5;
  (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Z = (double)uVar3;
  (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z = (double)uVar6;
  this->bUseWorldSpace = false;
  this->bParallel = true;
  *(undefined8 *)&this->CustomEdgeLengthScaleF = 0;
  *(undefined8 *)&(this->CustomEdgeLengthScaleF).field_0x28 = 0;
  this->FaceProjectionPassesPerRemeshIteration = 1;
  this->SurfaceProjectionSpeed = 0.2;
  this->NormalAlignmentSpeed = 0.2;
  this->bSmoothInFillAreas = true;
  this->FillAreaDistanceMultiplier = 0.25;
  this->FillAreaSmoothMultiplier = 0.25;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Edges = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Edges.field_0x8 = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Edges.field_0x20 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Edges.field_0x28 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Edges.field_0x2c = 0x80;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Edges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Edges.field_0x34 = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Edges.field_0x40 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Edges.field_0x48 = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Vertices = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Vertices.field_0x8 = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Vertices.field_0x20 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Vertices.field_0x28 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Vertices.field_0x2c = 0x80;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Vertices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Vertices.field_0x34 = 0;
  *(undefined8 *)&(this->UserSpecifiedConstraints).Vertices.field_0x40 = 0;
  *(undefined4 *)&(this->UserSpecifiedConstraints).Vertices.field_0x48 = 0;
  (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayNum = 0;
  (this->UserSpecifiedConstraints).ProjectionData.ProjectionCurves.ArrayMax = 0;
  (this->UserSpecifiedConstraints).FixedSetIDCounter = 0;
  return this;
}

// ~FRemeshMeshOp @ 14ccc3180

void __thiscall UE::Geometry::FRemeshMeshOp::~FRemeshMeshOp(FRemeshMeshOp *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FRemeshMeshOp_Geometry_UE__6B_;
  FMeshConstraints::~FMeshConstraints(&this->UserSpecifiedConstraints);
  if (*(longlong *)&this->CustomEdgeLengthScaleF != 0) {
    plVar1 = *(longlong **)&(this->CustomEdgeLengthScaleF).field_0x28;
    plVar2 = (longlong *)&(this->CustomEdgeLengthScaleF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMeshSpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

