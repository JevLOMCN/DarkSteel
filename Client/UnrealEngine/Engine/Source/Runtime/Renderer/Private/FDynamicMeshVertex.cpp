// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDynamicMeshVertex @ 145857f00

FDynamicMeshVertex * __thiscall
FDynamicMeshVertex::FDynamicMeshVertex(FDynamicMeshVertex *this,TVector<float> *param_1)

{
  TVector<float>_u_0 local_18;
  
  *(undefined8 *)&(this->Position).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->Position).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_18._0_8_ = 0x3f800000;
  local_18._s_0.Z = 0.0;
  FPackedNormal::operator=(&this->TangentX,(TVector<float> *)&local_18._s_0);
  local_18._0_8_ = 0;
  local_18._s_0.Z = 1.0;
  FPackedNormal::operator=(&this->TangentZ,(TVector<float> *)&local_18._s_0);
  (this->Color).field0_0x0.Bits = 0xffffffff;
  (this->TangentZ).Vector._s_0.W = '\x7f';
  this->TextureCoordinate[0].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[1].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[2].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[3].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[4].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[5].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[6].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->TextureCoordinate[7].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return this;
}

