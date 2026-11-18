// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TLookFromMatrix<float> @ 141c899e0

TLookFromMatrix<float> * __thiscall
UE::Math::TLookFromMatrix<float>::TLookFromMatrix<float>
          (TLookFromMatrix<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_58;
  
  fVar7 = (param_2->field0_0x0)._s_0.Z;
  fVar12 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = fVar3 * fVar3 + fVar12 * fVar12 + fVar7 * fVar7;
  local_58 = (float)TVector<float>::ZeroVector.field0_0x0._0_8_;
  fVar4 = local_58;
  fVar5 = (float)((ulonglong)TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (fVar2 == __real_3f800000) {
    local_58 = (float)*(undefined8 *)&param_2->field0_0x0;
    fVar10 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar6 = fVar7;
  }
  else {
    fVar10 = fVar5;
    uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar2) {
      fVar2 = __real_3f800000 / SQRT(fVar2);
      local_58 = fVar2 * fVar12;
      fVar10 = fVar2 * fVar3;
      uVar6 = fVar2 * fVar7;
    }
  }
  fVar7 = (param_3->field0_0x0)._s_0.Z;
  fVar12 = (param_3->field0_0x0)._s_0.Y;
  fVar3 = (param_3->field0_0x0)._s_0.X;
  fVar2 = fVar12 * (float)uVar6 - fVar7 * fVar10;
  fVar11 = fVar7 * local_58 - fVar3 * (float)uVar6;
  fVar8 = fVar3 * fVar10 - fVar12 * local_58;
  fVar3 = fVar11 * fVar11 + fVar2 * fVar2 + fVar8 * fVar8;
  fVar7 = fVar2;
  fVar12 = fVar11;
  uVar9 = fVar8;
  if ((fVar3 != __real_3f800000) &&
     (fVar7 = fVar4, fVar12 = fVar5, uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     __real_322bcc77 <= fVar3)) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    fVar7 = fVar2 * fVar3;
    fVar12 = fVar11 * fVar3;
    uVar9 = fVar8 * fVar3;
  }
  *(float *)&this->field_0x8 = local_58;
  *(float *)this = fVar7;
  *(float *)&this->field_0x10 = fVar12;
  *(float *)&this->field_0x18 = fVar10;
  *(undefined4 *)&this->field_0x20 = uVar9;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined4 *)&this->field_0x28 = uVar6;
  fVar4 = (float)uVar9 * fVar10 - fVar12 * (float)uVar6;
  *(float *)&this->field_0x4 = fVar4;
  fVar5 = fVar7 * (float)uVar6 - (float)uVar9 * local_58;
  *(float *)&this->field_0x14 = fVar5;
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar3 = fVar12 * local_58 - fVar7 * fVar10;
  *(float *)&this->field_0x24 = fVar3;
  *(uint *)&this->field_0x30 =
       (uint)(fVar7 * (param_1->field0_0x0)._s_0.X + fVar12 * (param_1->field0_0x0)._s_0.Y +
             (float)uVar9 * (param_1->field0_0x0)._s_0.Z) ^ uVar1;
  *(uint *)&this->field_0x34 =
       (uint)(fVar5 * (param_1->field0_0x0)._s_0.Y + fVar4 * (param_1->field0_0x0)._s_0.X +
             fVar3 * (param_1->field0_0x0)._s_0.Z) ^ uVar1;
  fVar7 = (param_1->field0_0x0)._s_0.X;
  fVar12 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  *(undefined4 *)&this->field_0x3c = 0x3f800000;
  *(uint *)&this->field_0x38 =
       (uint)(local_58 * fVar7 + fVar10 * fVar12 + (float)uVar6 * fVar3) ^ uVar1;
  return this;
}

// TLookFromMatrix<double> @ 141c89c90

TLookFromMatrix<double> * __thiscall
UE::Math::TLookFromMatrix<double>::TLookFromMatrix<double>
          (TLookFromMatrix<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  dVar10 = (param_2->field0_0x0)._s_0.X;
  dVar11 = (param_2->field0_0x0)._s_0.Y;
  dVar9 = dVar11 * dVar11 + dVar10 * dVar10 + dVar8 * dVar8;
  if (dVar9 == __real_3ff0000000000000) {
    uVar14 = (param_2->field0_0x0)._s_0.Z;
    uVar1 = (param_2->field0_0x0)._s_0.X;
    uVar2 = (param_2->field0_0x0)._s_0.Y;
  }
  else {
    uVar14 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar2 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
      uVar14 = dVar8 * dVar9;
      uVar1 = dVar10 * dVar9;
      uVar2 = dVar11 * dVar9;
    }
  }
  dVar8 = (param_3->field0_0x0)._s_0.Z;
  dVar10 = (param_3->field0_0x0)._s_0.Y;
  dVar11 = (param_3->field0_0x0)._s_0.X;
  dVar9 = dVar10 * (double)uVar14 - dVar8 * (double)uVar2;
  dVar12 = dVar8 * (double)uVar1 - dVar11 * (double)uVar14;
  dVar8 = dVar11 * (double)uVar2 - dVar10 * (double)uVar1;
  dVar10 = dVar12 * dVar12 + dVar9 * dVar9 + dVar8 * dVar8;
  uVar13 = dVar12;
  uVar3 = dVar9;
  uVar4 = dVar8;
  if ((dVar10 != __real_3ff0000000000000) &&
     (uVar13 = TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar3 = TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.Z, __real_3e45798ee0000000 <= dVar10)) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    uVar13 = dVar12 * dVar10;
    uVar3 = dVar9 * dVar10;
    uVar4 = dVar8 * dVar10;
  }
  *(undefined8 *)&this->field_0x10 = uVar1;
  *(undefined8 *)&this->field_0x20 = uVar13;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)this = uVar3;
  *(undefined8 *)&this->field_0x30 = uVar2;
  *(undefined8 *)&this->field_0x40 = uVar4;
  *(undefined8 *)&this->field_0x50 = uVar14;
  dVar11 = (double)uVar4 * (double)uVar2 - (double)uVar13 * (double)uVar14;
  *(double *)&this->field_0x8 = dVar11;
  dVar10 = (double)uVar3 * (double)uVar14 - (double)uVar4 * (double)uVar1;
  *(double *)&this->field_0x28 = dVar10;
  uVar5 = __xmm_80000000000000008000000000000000;
  dVar8 = (double)uVar13 * (double)uVar1 - (double)uVar3 * (double)uVar2;
  *(double *)&this->field_0x48 = dVar8;
  dVar9 = (double)uVar13 * (param_1->field0_0x0)._s_0.Y +
          (double)uVar3 * (param_1->field0_0x0)._s_0.X +
          (double)uVar4 * (param_1->field0_0x0)._s_0.Z;
  uVar6 = (uint)uVar5;
  uVar7 = (uint)((ulonglong)uVar5 >> 0x20);
  *(ulonglong *)&this->field_0x60 =
       CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar7,SUB84(dVar9,0) ^ uVar6);
  dVar8 = dVar11 * (param_1->field0_0x0)._s_0.X + dVar10 * (param_1->field0_0x0)._s_0.Y +
          dVar8 * (param_1->field0_0x0)._s_0.Z;
  *(ulonglong *)&this->field_0x68 =
       CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar7,SUB84(dVar8,0) ^ uVar6);
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&this->field_0x78 = 0x3ff0000000000000;
  dVar8 = (double)uVar1 * dVar8 + (double)uVar2 * dVar10 + (double)uVar14 * dVar11;
  *(ulonglong *)&this->field_0x70 =
       CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar7,SUB84(dVar8,0) ^ uVar6);
  return this;
}

