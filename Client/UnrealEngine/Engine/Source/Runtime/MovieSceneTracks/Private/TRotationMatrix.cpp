// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// MakeFromXZ @ 1466a6300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
UE::Math::TRotationMatrix<double>::MakeFromXZ
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar8 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar9 = dVar11 * dVar11 + dVar1 * dVar1 + dVar10 * dVar10;
  if (dVar9 == __real_3ff0000000000000) {
    uVar13 = (param_1->field0_0x0)._s_0.Z;
    uVar2 = (param_1->field0_0x0)._s_0.X;
    uVar3 = (param_1->field0_0x0)._s_0.Y;
  }
  else {
    uVar13 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar2 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
      uVar13 = dVar10 * dVar9;
      uVar2 = dVar1 * dVar9;
      uVar3 = dVar11 * dVar9;
    }
  }
  dVar10 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = (param_2->field0_0x0)._s_0.Z;
  dVar9 = dVar1 * dVar1 + dVar10 * dVar10 + dVar11 * dVar11;
  if (dVar9 == __real_3ff0000000000000) {
    uVar12 = (param_2->field0_0x0)._s_0.X;
    uVar4 = (param_2->field0_0x0)._s_0.Y;
    uVar5 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar12 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar5 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
      uVar12 = dVar10 * dVar9;
      uVar4 = dVar1 * dVar9;
      uVar5 = dVar11 * dVar9;
    }
  }
  dVar10 = (double)uVar4 * (double)uVar3 + (double)uVar2 * (double)uVar12 +
           (double)uVar5 * (double)uVar13;
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
           __real_3ff0000000000000;
  if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    uVar4 = 0.0;
    if (___real_3fefff2e48e90000 <=
        (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar5 = 0.0;
      uVar12 = __real_3ff0000000000000;
    }
    else {
      uVar12 = 0.0;
      uVar5 = __real_3ff0000000000000;
      uVar4 = 0.0;
    }
  }
  dVar1 = (double)uVar4 * (double)uVar13 - (double)uVar3 * (double)uVar5;
  dVar10 = (double)uVar2 * (double)uVar5 - (double)uVar12 * (double)uVar13;
  dVar9 = (double)uVar12 * (double)uVar3 - (double)uVar4 * (double)uVar2;
  dVar11 = dVar10 * dVar10 + dVar1 * dVar1 + dVar9 * dVar9;
  uVar12 = dVar9;
  uVar4 = dVar1;
  uVar5 = dVar10;
  if ((dVar11 != __real_3ff0000000000000) &&
     (uVar12 = TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar5 = TVector<double>::ZeroVector.field0_0x0._s_0.Y, __real_3e45798ee0000000 <= dVar11)) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar12 = dVar9 * dVar11;
    uVar4 = dVar1 * dVar11;
    uVar5 = dVar10 * dVar11;
  }
  __return_storage_ptr__->M[1][1] = (double)uVar5;
  __return_storage_ptr__->M[1][0] = (double)uVar4;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[1][2] = (double)uVar12;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][2] = (double)uVar5 * (double)uVar2 - (double)uVar4 * (double)uVar3;
  __return_storage_ptr__->M[0][0] = (double)uVar2;
  __return_storage_ptr__->M[0][1] = (double)uVar3;
  __return_storage_ptr__->M[3][0] = (double)uVar6;
  __return_storage_ptr__->M[3][1] = (double)uVar7;
  __return_storage_ptr__->M[3][2] = (double)uVar8;
  __return_storage_ptr__->M[2][0] = (double)uVar12 * (double)uVar3 - (double)uVar5 * (double)uVar13;
  __return_storage_ptr__->M[2][1] = (double)uVar4 * (double)uVar13 - (double)uVar12 * (double)uVar2;
  __return_storage_ptr__->M[0][2] = (double)uVar13;
  return __return_storage_ptr__;
}

