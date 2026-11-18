// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// FMeshUVSampleInfo @ 14c897610

FMeshUVSampleInfo * __thiscall
UE::Geometry::FMeshUVSampleInfo::FMeshUVSampleInfo(FMeshUVSampleInfo *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)&(this->MeshVertices).field0_0x0 + 4) = 0xffffffffffffffff;
  *(undefined8 *)this = 0xffffffffffffffff;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Triangle3D).V[0].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Triangle3D).V[0].field0_0x0._s_0.Y = (double)uVar1;
  (this->Triangle3D).V[0].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Triangle3D).V[1].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Triangle3D).V[1].field0_0x0._s_0.Y = (double)uVar1;
  (this->Triangle3D).V[1].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Triangle3D).V[2].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Triangle3D).V[2].field0_0x0._s_0.Y = (double)uVar1;
  (this->Triangle3D).V[2].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->UVVertices).field0_0x0 = 0xffffffffffffffff;
  (this->UVVertices).field0_0x0._s_0.C = -1;
  (this->TriangleUV).V[0].field0_0x0._s_0.X = 0.0;
  (this->TriangleUV).V[0].field0_0x0._s_0.Y = 0.0;
  (this->TriangleUV).V[1].field0_0x0._s_0.X = 0.0;
  (this->TriangleUV).V[1].field0_0x0._s_0.Y = 0.0;
  (this->TriangleUV).V[2].field0_0x0._s_0.X = 0.0;
  (this->TriangleUV).V[2].field0_0x0._s_0.Y = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BaryCoords).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BaryCoords).field0_0x0._s_0.Y = (double)uVar1;
  (this->BaryCoords).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SurfacePoint).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SurfacePoint).field0_0x0._s_0.Y = (double)uVar1;
  (this->SurfacePoint).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

