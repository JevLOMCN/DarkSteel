// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// InverseTransformVector<double> @ 14355f8d0

TVector<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::InverseTransformVector<double>
          (TTransformSRT3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  uint uVar7;
  uint uVar8;
  TVector<double> local_58 [3];
  
  dVar1 = *(double *)&(this->Scale3D).field0_0x0;
  uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar5 = 0.0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee2308c3a) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 8);
  uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee2308c3a) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 0x10);
  uVar7 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee2308c3a) {
    dVar5 = __real_3ff0000000000000 / dVar3;
  }
  pTVar6 = TQuaternion<double>::InverseMultiply(&this->Rotation,local_58,param_1);
  dVar3 = (pTVar6->field0_0x0)._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * (pTVar6->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar4;
  return __return_storage_ptr__;
}

