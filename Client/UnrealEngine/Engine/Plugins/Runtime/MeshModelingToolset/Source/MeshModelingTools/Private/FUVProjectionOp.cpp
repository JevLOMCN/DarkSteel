// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FUVProjectionOp @ 14cd4f4b0

FUVProjectionOp * __thiscall UE::Geometry::FUVProjectionOp::FUVProjectionOp(FUVProjectionOp *this)

{
  undefined8 uVar1;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FUVProjectionOp_Geometry_UE__6B_;
  (this->MeshToProjectionSpace).Rotation.field0_0x0._s_0.W = 1.0;
  (this->MeshToProjectionSpace).Rotation.field0_0x0._s_0.X = 0.0;
  (this->MeshToProjectionSpace).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->MeshToProjectionSpace).Rotation.field0_0x0._s_0.Z = 0.0;
  this->UseUVLayer = 0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TriangleROI).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TriangleROI).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MeshToProjectionSpace).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MeshToProjectionSpace).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->MeshToProjectionSpace).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  this->ProjectionMethod = Box;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ProjectionBox).Frame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ProjectionBox).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->ProjectionBox).Extents.field0_0x0._s_0.X = 1.0;
  (this->ProjectionBox).Extents.field0_0x0._s_0.Y = 1.0;
  (this->ProjectionBox).Extents.field0_0x0._s_0.Z = 1.0;
  this->SmoothingAlpha = 0.5;
  this->MinRegionSize = 2;
  this->CylinderSplitAngle = 45.0;
  this->BlendWeight = 0.0;
  this->SmoothingRounds = 0;
  (this->UVOrigin).field0_0x0._s_0.X = 0.5;
  *(undefined8 *)((longlong)&(this->UVOrigin).field0_0x0 + 4) = 0x3f000000;
  (this->UVScale).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
  (this->UVTranslate).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return this;
}

// ~FUVProjectionOp @ 14cd53260

void __thiscall UE::Geometry::FUVProjectionOp::~FUVProjectionOp(FUVProjectionOp *this)

{
  this->_padding_ = (longlong)&___7FUVProjectionOp_Geometry_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

