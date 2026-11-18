// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// ToPlane @ 14cc829b0

TVector<double> * __thiscall
UE::Geometry::TFrame3<double>::ToPlane
          (TFrame3<double> *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_58 [3];
  
  GetAxis(this,(TVector<double> *)&local_58[0]._s_0,param_2);
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (dVar1 - (this->Origin).field0_0x0._s_0.Y) * (double)local_58[0]._8_8_ +
          (dVar3 - (this->Origin).field0_0x0._s_0.X) * (double)local_58[0]._0_8_ +
          (dVar2 - (this->Origin).field0_0x0._s_0.Z) * (double)local_58[0]._16_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2 - dVar4 * (double)local_58[0]._16_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 - dVar4 * (double)local_58[0]._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar4 * (double)local_58[0]._8_8_;
  return __return_storage_ptr__;
}

// Transform @ 14cd30920

void __thiscall
UE::Geometry::TFrame3<double>::Transform(TFrame3<double> *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = (this->Origin).field0_0x0._s_0.X * (param_1->Scale3D).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->Scale3D).field0_0x0._s_0.Y * (this->Origin).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_1->Scale3D).field0_0x0._s_0.Z * (this->Origin).field0_0x0._s_0.Z;
  pTVar5 = operator*<double>(&local_20,&param_1->Rotation,(TVector<double> *)&local_38._s_0);
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  dVar2 = (param_1->Translation).field0_0x0._s_0.Z;
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  dVar4 = (pTVar5->field0_0x0)._s_0.Z;
  (this->Origin).field0_0x0._s_0.X =
       (pTVar5->field0_0x0)._s_0.X + (param_1->Translation).field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar1 + dVar3;
  (this->Origin).field0_0x0._s_0.Z = dVar2 + dVar4;
  Rotate(this,&param_1->Rotation);
  return;
}

