// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// InverseTransformNormal<double> @ 14c944010

TVector<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::InverseTransformNormal<double>
          (TTransformSRT3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_28;
  
  TQuaternion<double>::InverseMultiply(&this->Rotation,(TVector<double> *)&local_28._s_0,param_1);
  dVar4 = local_28._s_0.X * (this->Scale3D).field0_0x0._s_0.X;
  dVar5 = local_28._s_0.Y * (this->Scale3D).field0_0x0._s_0.Y;
  dVar6 = local_28._s_0.Z * (this->Scale3D).field0_0x0._s_0.Z;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6;
  auVar3._8_8_ = 0;
  dVar2 = 0.0;
  auVar3 = sqrtpd(auVar3,auVar3);
  if (auVar3._0_8_ <= 0.0) {
    dVar5 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = __real_3ff0000000000000 / auVar3._0_8_;
    dVar2 = dVar1 * dVar6;
    dVar5 = dVar1 * dVar5;
    dVar1 = dVar1 * dVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

