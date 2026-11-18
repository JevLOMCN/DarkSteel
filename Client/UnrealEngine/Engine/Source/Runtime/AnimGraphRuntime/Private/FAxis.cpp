// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// GetTransformedAxis @ 14644ff40

TVector<double> * __thiscall
FAxis::GetTransformedAxis
          (FAxis *this,TVector<double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (this->bInLocalSpace != false) {
    auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar3 = *(undefined1 (*) [16])&(this->Axis).field0_0x0;
    dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar1 = (this->Axis).field0_0x0._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
    return __return_storage_ptr__;
  }
  dVar1 = (this->Axis).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Axis).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Axis).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// Initialize @ 1464558a0

void __thiscall FAxis::Initialize(FAxis *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (this->Axis).field0_0x0._s_0.X;
  dVar2 = (this->Axis).field0_0x0._s_0.Z;
  dVar3 = (this->Axis).field0_0x0._s_0.Y;
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar7 == __real_3ff0000000000000) {
    dVar2 = (this->Axis).field0_0x0._s_0.Y;
    dVar1 = (this->Axis).field0_0x0._s_0.Z;
    (this->Axis).field0_0x0._s_0.X = (this->Axis).field0_0x0._s_0.X;
    (this->Axis).field0_0x0._s_0.Y = dVar2;
    (this->Axis).field0_0x0._s_0.Z = dVar1;
    return;
  }
  if (dVar7 < __real_3e45798ee0000000) {
    (this->Axis).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Axis).field0_0x0._s_0.Y = (double)uVar5;
    (this->Axis).field0_0x0._s_0.Z = (double)uVar6;
    return;
  }
  dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
  auVar4._8_4_ = SUB84(dVar3 * dVar7,0);
  auVar4._0_8_ = dVar1 * dVar7;
  auVar4._12_4_ = (int)((ulonglong)(dVar3 * dVar7) >> 0x20);
  *(undefined1 (*) [16])&(this->Axis).field0_0x0 = auVar4;
  (this->Axis).field0_0x0._s_0.Z = dVar2 * dVar7;
  return;
}

