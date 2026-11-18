// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// TRotation<double,3> @ 143b84570

TRotation<double,3> * __thiscall
Chaos::TRotation<double,3>::TRotation<double,3>(TRotation<double,3> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  return this;
}

// ToAxisAndAngleSafe @ 143bae630

bool __thiscall
Chaos::TRotation<double,3>::ToAxisAndAngleSafe
          (TRotation<double,3> *this,TVector<double,3> *param_1,double *param_2,
          TVector<double,3> *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *(double *)&this->field_0x18;
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar6 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= dVar1) {
    if (__real_3ff0000000000000 <= dVar1) {
      uVar4 = SUB84(__real_3ff0000000000000,0);
      uVar5 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar6 = (double)CONCAT44(uVar5,uVar4);
  }
  dVar1 = acos(dVar6);
  *param_2 = dVar1 + dVar1;
  dVar1 = *(double *)this;
  dVar6 = *(double *)&this->field_0x8;
  dVar2 = *(double *)&this->field_0x10;
  dVar7 = dVar6 * dVar6 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar7 <= param_4) {
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)&param_1->field_0x8 = uVar3;
    *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&param_3->field_0x10;
  }
  else {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar7);
    *(double *)param_1 = dVar1 * dVar8;
    *(double *)&param_1->field_0x8 = dVar6 * dVar8;
    *(double *)&param_1->field_0x10 = dVar2 * dVar8;
  }
  return param_4 < dVar7;
}

// ToMatrixAxes @ 143bae720

void __thiscall
Chaos::TRotation<double,3>::ToMatrixAxes
          (TRotation<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = __real_3ff0000000000000;
  dVar1 = *(double *)this;
  dVar2 = *(double *)&this->field_0x8;
  dVar3 = *(double *)&this->field_0x10;
  dVar9 = dVar3 + dVar3;
  dVar6 = dVar2 + dVar2;
  dVar5 = (dVar1 + dVar1) * dVar1;
  dVar4 = *(double *)&this->field_0x18;
  dVar7 = (dVar1 + dVar1) * dVar4;
  *(double *)param_1 = __real_3ff0000000000000 - (dVar9 * dVar3 + dVar6 * dVar2);
  *(double *)&param_1->field_0x8 = dVar9 * dVar4 + dVar6 * dVar1;
  *(double *)&param_1->field_0x10 = dVar9 * dVar1 - dVar6 * dVar4;
  *(double *)param_2 = dVar6 * dVar1 - dVar9 * dVar4;
  *(double *)&param_2->field_0x8 = dVar8 - (dVar9 * dVar3 + dVar5);
  *(double *)&param_2->field_0x10 = dVar7 + dVar9 * dVar2;
  *(double *)param_3 = dVar6 * dVar4 + dVar9 * dVar1;
  *(double *)&param_3->field_0x8 = dVar9 * dVar2 - dVar7;
  *(double *)&param_3->field_0x10 = dVar8 - (dVar6 * dVar2 + dVar5);
  return;
}

// ToSwingTwistX @ 143cab000

void __thiscall
Chaos::TRotation<double,3>::ToSwingTwistX
          (TRotation<double,3> *this,TQuat<double> *param_1,TQuat<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  uint uVar25;
  uint uVar26;
  undefined1 local_78 [16];
  undefined1 local_68 [104];
  
  dVar1 = *(double *)this;
  if (dVar1 == 0.0) {
    local_78._8_8_ = UE::Math::TQuat<double>::Identity.Y;
    local_78._0_8_ = UE::Math::TQuat<double>::Identity.X;
    local_68._8_8_ = UE::Math::TQuat<double>::Identity.W;
    local_68._0_8_ = UE::Math::TQuat<double>::Identity.Z;
  }
  else {
    dVar2 = *(double *)&this->field_0x18;
    dVar14 = dVar1 * dVar1 + 0.0;
    dVar17 = dVar2 * dVar2 + 0.0;
    dVar3 = dVar17 + dVar14;
    dVar14 = dVar14 + dVar17;
    auVar19._8_4_ = SUB84(dVar14,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar19 = sqrtpd(in_XMM4,auVar19);
    uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
    uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar14);
    uVar25 = (uint)(uVar12 >> 0x20);
    uVar26 = (uint)(uVar13 >> 0x20);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar23._0_8_ = uVar12 & (ulonglong)(auVar22._0_8_ * dVar1);
    uVar9 = uVar13 & (ulonglong)(auVar22._8_8_ * 0.0);
    auVar23._8_4_ = (undefined4)uVar9;
    auVar23._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar22._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar22._4_4_ =
         ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar22._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar22._12_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_78 = auVar23 | auVar22;
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
    auVar18._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar18._4_4_ =
         ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar18._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar18._12_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar15._0_8_ = (ulonglong)(auVar19._0_8_ * 0.0) & uVar12;
    uVar13 = (ulonglong)(auVar19._8_8_ * dVar2) & uVar13;
    auVar15._8_4_ = (undefined4)uVar13;
    auVar15._12_4_ = (undefined4)(uVar13 >> 0x20);
    local_68._0_16_ = auVar18 | auVar15;
  }
  param_2->X = (double)local_78._0_8_;
  param_2->Y = (double)local_78._8_8_;
  param_2->Z = (double)local_68._0_8_;
  param_2->W = (double)local_68._8_8_;
  dVar21 = (double)local_68._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar24 = (double)local_68._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar19 = *(undefined1 (*) [16])this;
  dVar10 = *(double *)&this->field_0x10;
  dVar11 = *(double *)&this->field_0x18;
  dVar4 = param_2->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar5 = param_2->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar14 = auVar19._0_8_;
  auVar20._8_4_ = auVar19._0_4_;
  auVar20._0_8_ = dVar14;
  auVar20._12_4_ = auVar19._4_4_;
  dVar17 = auVar19._8_8_;
  auVar16._8_4_ = auVar19._8_4_;
  auVar16._0_8_ = dVar17;
  auVar16._12_4_ = auVar19._12_4_;
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar7 = dVar14 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar11 * dVar21 +
          dVar17 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar10 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = dVar14 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar11 * dVar24 +
          dVar17 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar10 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  param_1->X = dVar14 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar11 * dVar4 +
               dVar17 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar10 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  param_1->Y = auVar20._8_8_ * dVar21 * dVar1 + dVar11 * dVar5 + auVar16._8_8_ * dVar24 * dVar2 +
               dVar10 * dVar4 * dVar3;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  param_1->Z = dVar7;
  param_1->W = (double)auVar6._8_8_;
  return;
}

