// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FMeshSpaceDeformerOp @ 14ccb9db0

FMeshSpaceDeformerOp * __thiscall
UE::Geometry::FMeshSpaceDeformerOp::FMeshSpaceDeformerOp(FMeshSpaceDeformerOp *this)

{
  undefined8 uVar1;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FMeshSpaceDeformerOp_Geometry_UE__6B_;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->GizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  return this;
}

