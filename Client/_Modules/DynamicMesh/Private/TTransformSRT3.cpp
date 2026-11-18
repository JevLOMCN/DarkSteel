// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// InverseTransformPosition<double> @ 14c6d16b0

TVector<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
          (TTransformSRT3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_68;
  TVector<double> local_50 [3];
  
  dVar1 = *(double *)&(this->Scale3D).field0_0x0;
  dVar5 = 0.0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 8);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar5 = __real_3ff0000000000000 / dVar3;
  }
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X - (this->Translation).field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y - (this->Translation).field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z - (this->Translation).field0_0x0._s_0.Z;
  pTVar6 = TQuaternion<double>::InverseMultiply
                     (&this->Rotation,local_50,(TVector<double> *)&local_68._s_0);
  dVar3 = (pTVar6->field0_0x0)._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * (pTVar6->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar4;
  return __return_storage_ptr__;
}

