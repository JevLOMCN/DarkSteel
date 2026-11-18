// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// Dot @ 14cb02740

double __thiscall
UE::Geometry::TQuaternion<double>::Dot(TQuaternion<double> *this,TQuaternion<double> *param_1)

{
  return (param_1->field0_0x0)._s_0.W * (this->field0_0x0)._s_0.W +
         (param_1->field0_0x0)._s_0.Z * (this->field0_0x0)._s_0.Z +
         (param_1->field0_0x0)._s_0.Y * (this->field0_0x0)._s_0.Y +
         (param_1->field0_0x0)._s_0.X * (this->field0_0x0)._s_0.X;
}

// Normalized @ 14cb23920

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::Normalized
          (TQuaternion<double> *this,TQuaternion<double> *__return_storage_ptr__,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar3 = (this->field0_0x0)._s_0.W;
  dVar8 = (this->field0_0x0)._s_0.Y;
  auVar5._0_8_ = dVar2 * dVar2;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar1 * dVar1 + dVar3 * dVar3 + dVar8 * dVar8 + auVar5._0_8_;
  auVar6 = sqrtpd(auVar5,auVar6);
  if (param_1 < auVar6._0_8_) {
    dVar2 = (this->field0_0x0)._s_0.Y;
    dVar8 = __real_3ff0000000000000 / auVar6._0_8_;
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = dVar8;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar3 = (this->field0_0x0)._s_0.Z;
    dVar1 = (this->field0_0x0)._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8 * (this->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar7._8_8_ * dVar2;
    dVar1 = dVar1 * dVar8;
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar3 * dVar8;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar4;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  return __return_storage_ptr__;
}

// SetToSlerp @ 14cb38080

void __thiscall
UE::Geometry::TQuaternion<double>::SetToSlerp
          (TQuaternion<double> *this,TQuaternion<double> *param_1,TQuaternion<double> *param_2,
          double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  Normalize(param_1,0.0);
  Normalize(param_2,0.0);
  dVar1 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 0x18);
  uVar12 = SUB84(dVar2,0);
  uVar13 = (uint)((ulonglong)dVar2 >> 0x20);
  dVar3 = *(double *)&param_1->field0_0x0;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (uint)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  dVar2 = dVar2 * (param_2->field0_0x0)._s_0.W + dVar1 * (param_2->field0_0x0)._s_0.Z +
          dVar4 * (param_2->field0_0x0)._s_0.Y + dVar3 * (param_2->field0_0x0)._s_0.X;
  if (dVar2 < __real_bfefae147ae147ae) {
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar14 = uVar14 ^ uVar10;
    uVar15 = uVar15 ^ uVar11;
    uVar12 = uVar12 ^ uVar10;
    uVar13 = uVar13 ^ uVar11;
    (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar15,uVar14);
    (param_1->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar11,SUB84(dVar4,0) ^ uVar10);
    (param_1->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar11,SUB84(dVar1,0) ^ uVar10);
    (param_1->field0_0x0)._s_0.W = (double)CONCAT44(uVar13,uVar12);
  }
  dVar1 = acos(dVar2);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3e45798ee2308c3a) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    (this->field0_0x0)._s_0.X = (double)CONCAT44(uVar15,uVar14);
    (this->field0_0x0)._s_0.Y = dVar1;
    (this->field0_0x0)._s_0.Z = dVar2;
    (this->field0_0x0)._s_0.W = (double)CONCAT44(uVar13,uVar12);
  }
  else {
    dVar2 = sin(dVar1);
    dVar2 = __real_3ff0000000000000 / dVar2;
    dVar3 = sin(dVar1 * param_3);
    dVar3 = dVar3 * dVar2;
    dVar1 = sin(dVar1 - dVar1 * param_3);
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    dVar7 = (param_1->field0_0x0)._s_0.W;
    dVar1 = dVar1 * dVar2;
    dVar2 = dVar1 * (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y * dVar3;
    dVar8 = (param_2->field0_0x0)._s_0.Z;
    dVar9 = (param_2->field0_0x0)._s_0.W;
    auVar5._8_4_ = SUB84(dVar2,0);
    auVar5._0_8_ = dVar1 * (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X * dVar3;
    auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&this->field0_0x0 = auVar5;
    dVar2 = dVar7 * dVar1 + dVar3 * dVar9;
    auVar6._8_4_ = SUB84(dVar2,0);
    auVar6._0_8_ = dVar4 * dVar1 + dVar3 * dVar8;
    auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])((longlong)&this->field0_0x0 + 0x10) = auVar6;
  }
  Normalize(this,0.0);
  return;
}

