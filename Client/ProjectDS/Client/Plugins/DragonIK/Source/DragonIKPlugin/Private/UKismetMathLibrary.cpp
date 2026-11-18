// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 5

// FInterpTo @ 14d2e9cb0

double __cdecl
UKismetMathLibrary::FInterpTo(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  if (0.0 < param_4) {
    dVar1 = param_2 - param_1;
    if (dVar1 * dVar1 < __real_3e45798ee0000000) {
      return param_2;
    }
    dVar2 = param_3 * param_4;
    if (__real_3ff0000000000000 <= param_3 * param_4) {
      dVar2 = __real_3ff0000000000000;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    param_2 = dVar2 * dVar1 + param_1;
  }
  return param_2;
}

// InverseTransformDirection @ 14d300500

TVector<double> * __cdecl
UKismetMathLibrary::InverseTransformDirection
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  dVar5 = (param_1->Rotation).XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = (param_1->Rotation).XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar7 = (param_1->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = dVar5;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar2 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar21 = auVar2._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar1;
  auVar10 = blendpd(auVar2,auVar9,2);
  auVar18._8_4_ = SUB84(dVar8,0);
  auVar18._0_8_ = dVar7;
  auVar18._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar18 = blendpd(auVar17,auVar18,2);
  auVar19._0_8_ = dVar21 * dVar5 - dVar6 * auVar2._0_8_;
  auVar19._8_8_ = dVar1 * dVar6 - dVar7 * dVar21;
  auVar11._0_8_ = auVar10._0_8_ * dVar7 - auVar18._0_8_ * dVar1;
  auVar11._8_8_ = auVar10._8_8_ * dVar8 - auVar18._8_8_ * 0.0;
  auVar10 = blendpd(auVar19,auVar11,2);
  auVar20._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar20._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  dVar3 = auVar19._8_8_ + auVar19._8_8_;
  dVar4 = auVar11._0_8_ + auVar11._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar16;
  auVar10 = blendpd(auVar12,auVar20,2);
  auVar15._0_8_ = auVar14._8_8_ * dVar5 - dVar3 * dVar6;
  auVar15._8_8_ = auVar20._0_8_ * dVar6 - dVar4 * dVar7;
  auVar13._0_8_ = auVar10._0_8_ * dVar7 - auVar20._0_8_ * auVar18._0_8_;
  auVar13._8_8_ = auVar10._8_8_ * dVar8 - auVar20._8_8_ * auVar18._8_8_;
  auVar18 = blendpd(auVar15,auVar13,2);
  dVar4 = dVar4 * dVar8 + dVar21 + auVar13._0_8_;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = dVar3 * dVar8 + auVar2._0_8_ + auVar15._8_8_;
  auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar1 + auVar18._0_8_;
  return __return_storage_ptr__;
}

// TransformDirection @ 14d317530

TVector<double> * __cdecl
UKismetMathLibrary::TransformDirection
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

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
  
  auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar8 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar3 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_2->field0_0x0)._s_0.Z;
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

// TransformLocation @ 14d317650

TVector<double> * __cdecl
UKismetMathLibrary::TransformLocation
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar4 = (param_2->field0_0x0)._s_0.X * (param_1->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_2->field0_0x0)._s_0.Y * (param_1->Scale3D).XY.m128d_f64[1];
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar4;
  auVar18._12_4_ = uVar17;
  dVar6 = (param_2->field0_0x0)._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar7 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar12 = blendpd(auVar10,auVar1,2);
  dVar3 = auVar1._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
  auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar20,auVar10,2);
  auVar11._0_8_ = auVar10._0_8_ * dVar3 - auVar12._0_8_ * dVar6;
  auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar11,2);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar7 = auVar19._8_8_ + auVar19._8_8_;
  dVar2 = auVar11._0_8_ + auVar11._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar15._8_4_ = SUB84(dVar2,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar7;
  auVar13._12_4_ = uVar17;
  auVar20 = blendpd(auVar13,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
  auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar3 * dVar2;
  auVar12._8_4_ = SUB84(auVar16._8_8_,0);
  auVar12._0_8_ = auVar16._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar10 = blendpd(auVar10,auVar1,2);
  dVar9 = (param_1->Translation).ZW.m128d_f64[0];
  auVar14._0_8_ = auVar20._0_8_ * dVar3 - auVar10._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
  auVar10 = blendpd(auVar16,auVar14,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar14._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_ + dVar9;
  return __return_storage_ptr__;
}

// DegAcos @ 14d338200

double __cdecl UKismetMathLibrary::DegAcos(double param_1)

{
  double dVar1;
  
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= param_1) && (dVar1 = param_1, __real_3ff0000000000000 <= param_1))
  {
    dVar1 = __real_3ff0000000000000;
  }
  dVar1 = acos(dVar1);
  return dVar1 * __real_404ca5dc1a63c1f8;
}

