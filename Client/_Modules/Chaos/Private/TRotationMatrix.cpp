// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// MakeFromX @ 143798ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
UE::Math::TRotationMatrix<double>::MakeFromX
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1)

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
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar8 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  uVar14 = SUB84(__real_3ff0000000000000,0);
  uVar15 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar9 = dVar1 * dVar1 + dVar11 * dVar11 + dVar10 * dVar10;
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
      uVar2 = dVar11 * dVar9;
      uVar3 = dVar1 * dVar9;
    }
  }
  if (___real_3fefff2e48e90000 <=
      (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar10 = 0.0;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    dVar10 = __real_3ff0000000000000;
  }
  dVar1 = (double)CONCAT44(uVar15,uVar14) * (double)uVar3;
  dVar11 = dVar10 * (double)uVar2 - (double)CONCAT44(uVar15,uVar14) * (double)uVar13;
  uVar16 = SUB84(dVar10 * (double)uVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)(dVar10 * (double)uVar3) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar10 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) + dVar11 * dVar11 +
           dVar1 * dVar1;
  uVar12 = dVar11;
  uVar4 = dVar1;
  uVar5 = CONCAT44(uVar17,uVar16);
  if ((dVar10 != __real_3ff0000000000000) &&
     (uVar12 = TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar5 = TVector<double>::ZeroVector.field0_0x0._s_0.X, __real_3e45798ee0000000 <= dVar10)) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar12 = dVar11 * dVar10;
    uVar4 = dVar1 * dVar10;
    uVar5 = (double)CONCAT44(uVar17,uVar16) * dVar10;
  }
  __return_storage_ptr__->M[1][0] = (double)uVar5;
  __return_storage_ptr__->M[1][1] = (double)uVar12;
  __return_storage_ptr__->M[1][2] = (double)uVar4;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[0][0] = (double)uVar2;
  __return_storage_ptr__->M[0][1] = (double)uVar3;
  __return_storage_ptr__->M[3][0] = (double)uVar6;
  __return_storage_ptr__->M[3][1] = (double)uVar7;
  __return_storage_ptr__->M[3][2] = (double)uVar8;
  __return_storage_ptr__->M[2][0] = (double)uVar4 * (double)uVar3 - (double)uVar12 * (double)uVar13;
  __return_storage_ptr__->M[2][1] = (double)uVar5 * (double)uVar13 - (double)uVar4 * (double)uVar2;
  __return_storage_ptr__->M[0][2] = (double)uVar13;
  __return_storage_ptr__->M[2][2] = (double)uVar12 * (double)uVar2 - (double)uVar5 * (double)uVar3;
  return __return_storage_ptr__;
}

// MakeFromZ @ 143798d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
UE::Math::TRotationMatrix<double>::MakeFromZ
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1)

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
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar8 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (param_1->field0_0x0)._s_0.X;
  uVar14 = SUB84(__real_3ff0000000000000,0);
  uVar15 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar9 = dVar1 * dVar1 + dVar11 * dVar11 + dVar10 * dVar10;
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
      uVar2 = dVar11 * dVar9;
      uVar3 = dVar1 * dVar9;
    }
  }
  if (___real_3fefff2e48e90000 <=
      (double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar10 = 0.0;
  }
  else {
    uVar14 = 0;
    uVar15 = 0;
    dVar10 = __real_3ff0000000000000;
  }
  dVar1 = (double)CONCAT44(uVar15,uVar14) * (double)uVar3;
  dVar11 = dVar10 * (double)uVar2 - (double)CONCAT44(uVar15,uVar14) * (double)uVar13;
  uVar16 = SUB84(dVar10 * (double)uVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)(dVar10 * (double)uVar3) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar10 = (double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar17,uVar16) + dVar11 * dVar11 +
           dVar1 * dVar1;
  uVar12 = dVar11;
  uVar4 = dVar1;
  uVar5 = CONCAT44(uVar17,uVar16);
  if ((dVar10 != __real_3ff0000000000000) &&
     (uVar12 = TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar5 = TVector<double>::ZeroVector.field0_0x0._s_0.X, __real_3e45798ee0000000 <= dVar10)) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar12 = dVar11 * dVar10;
    uVar4 = dVar1 * dVar10;
    uVar5 = (double)CONCAT44(uVar17,uVar16) * dVar10;
  }
  __return_storage_ptr__->M[0][0] = (double)uVar5;
  __return_storage_ptr__->M[0][1] = (double)uVar12;
  __return_storage_ptr__->M[0][2] = (double)uVar4;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][0] = (double)uVar2;
  __return_storage_ptr__->M[2][1] = (double)uVar3;
  __return_storage_ptr__->M[3][0] = (double)uVar6;
  __return_storage_ptr__->M[3][1] = (double)uVar7;
  __return_storage_ptr__->M[3][2] = (double)uVar8;
  __return_storage_ptr__->M[1][0] = (double)uVar4 * (double)uVar3 - (double)uVar12 * (double)uVar13;
  __return_storage_ptr__->M[1][1] = (double)uVar5 * (double)uVar13 - (double)uVar4 * (double)uVar2;
  __return_storage_ptr__->M[1][2] = (double)uVar12 * (double)uVar2 - (double)uVar5 * (double)uVar3;
  __return_storage_ptr__->M[2][2] = (double)uVar13;
  return __return_storage_ptr__;
}

