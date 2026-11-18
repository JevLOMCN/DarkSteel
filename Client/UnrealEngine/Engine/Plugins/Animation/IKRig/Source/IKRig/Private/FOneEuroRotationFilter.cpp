// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// Update @ 14df5c3d0

TQuat<double> * __thiscall
FOneEuroRotationFilter::Update
          (FOneEuroRotationFilter *this,TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1
          ,double param_2,FIKRetargetFilterBoneOpSettings *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar29;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  uint uVar44;
  uint uVar45;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  TQuat<double> local_a8 [5];
  
  if (this->bFirstRun == false) {
    dVar38 = (this->PrevFilteredRot).Z *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar39 = (this->PrevFilteredRot).W *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    if (__real_3fb1111111111111 <= param_2) {
      param_2 = __real_3fb1111111111111;
    }
    auVar23._8_4_ = SUB84(dVar39,0);
    auVar23._0_8_ = dVar38;
    auVar23._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    uVar1 = param_1->X;
    uVar4 = param_1->Y;
    dVar40 = (this->PrevFilteredRot).X *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar17 = (this->PrevFilteredRot).Y *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    if (param_2 <= __real_3f71111111111111) {
      param_2 = __real_3f71111111111111;
    }
    uVar2 = param_1->Z;
    uVar5 = param_1->W;
    auVar41._8_4_ = (int)uVar5;
    auVar41._0_8_ = uVar5;
    auVar41._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    auVar30._8_4_ = (int)uVar4;
    auVar30._0_8_ = uVar4;
    auVar30._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
    auVar19._8_4_ = (int)uVar2;
    auVar19._0_8_ = uVar2;
    auVar19._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    dVar29 = auVar19._8_8_ * dVar40 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar7 = (double)uVar1 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
            + (double)uVar5 * dVar38 +
            (double)uVar4 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
            + (double)uVar2 * auVar23._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar18 = (double)uVar1 * dVar40 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)uVar5 * dVar39 +
             (double)uVar4 * dVar17 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             (double)uVar2 * dVar38 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar43 = (undefined4)((ulonglong)dVar18 >> 0x20);
    dVar40 = (double)uVar1 * auVar23._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)uVar5 * dVar40 +
             (double)uVar4 * dVar38 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)uVar2 * dVar17 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar38 = (double)uVar1 * dVar38 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar41._8_8_ * dVar17 +
             auVar30._8_8_ * dVar39 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar29;
    auVar8._4_8_ = dVar29;
    auVar8._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar20._0_8_ = auVar8._0_8_ << 0x20;
    auVar20._8_4_ = SUB84(dVar18,0);
    auVar20._12_4_ = uVar43;
    if (0.0 <= auVar20._8_8_) {
      local_c8._8_4_ = SUB84(dVar38,0);
      local_c8._0_8_ = dVar40;
      local_c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      local_b8._8_4_ = SUB84(dVar18,0);
      local_b8._0_8_ = dVar7;
      local_b8._12_4_ = uVar43;
    }
    else {
      local_b8._0_8_ = 0.0 - dVar7;
      local_b8._8_8_ = 0.0 - dVar18;
      local_c8._0_8_ = 0.0 - dVar40;
      local_c8._8_8_ = 0.0 - dVar38;
    }
    UE::Math::TQuat<double>::Log((TQuat<double> *)local_c8,&local_e8);
    dVar39 = __real_3fc45f306446f9b4;
    dVar38 = __real_3ff0000000000000;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (0.0 < param_2) {
      dVar40 = __real_3ff0000000000000 / param_2;
      uVar9 = dVar40 * local_e8.X;
      uVar10 = dVar40 * local_e8.Y;
      uVar11 = dVar40 * local_e8.Z;
      uVar14 = 0;
    }
    dVar40 = param_3->VelocityCutoffHz;
    if (param_3->VelocityCutoffHz <= 0.0) {
      dVar40 = __real_4034000000000000;
    }
    dVar17 = param_2;
    if (param_2 <= __real_3f1a36e2e0000000) {
      dVar17 = __real_3f1a36e2e0000000;
    }
    dVar17 = __real_3ff0000000000000 / dVar17;
    dVar40 = __real_3ff0000000000000 /
             ((__real_3fc45f306446f9b4 / dVar40) * dVar17 + __real_3ff0000000000000);
    local_108.Y = ((double)uVar10 - (this->PrevHalfAngVel).field0_0x0._s_0.Y) * dVar40 +
                  (this->PrevHalfAngVel).field0_0x0._s_0.Y;
    dVar29 = ((double)uVar11 - (this->PrevHalfAngVel).field0_0x0._s_0.Z) * dVar40 +
             (this->PrevHalfAngVel).field0_0x0._s_0.Z;
    auVar21._8_4_ = (int)uVar14;
    auVar21._0_8_ = local_108.Y;
    auVar21._12_4_ = (int)((ulonglong)uVar14 >> 0x20);
    (this->PrevHalfAngVel).field0_0x0._s_0.X =
         ((double)uVar9 - (this->PrevHalfAngVel).field0_0x0._s_0.X) * dVar40 +
         (this->PrevHalfAngVel).field0_0x0._s_0.X;
    (this->PrevHalfAngVel).field0_0x0._s_0.Y = local_108.Y;
    auVar22._8_8_ = auVar21._8_8_;
    auVar22._0_8_ = local_108.Y * local_108.Y;
    (this->PrevHalfAngVel).field0_0x0._s_0.Z = dVar29;
    dVar7 = __real_3e45798ee0000000;
    local_108.X = (this->PrevHalfAngVel).field0_0x0._s_0.X;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_108.X * local_108.X + auVar22._0_8_ + dVar29 * dVar29;
    auVar23 = sqrtpd(auVar22,auVar6);
    dVar18 = (auVar23._0_8_ + auVar23._0_8_) * param_3->Responsiveness + param_3->MinFrequency;
    dVar40 = __real_3e45798ee0000000;
    if (0.0 < dVar18) {
      dVar40 = dVar39 / dVar18;
    }
    local_108.W = 0.0;
    local_108.Z = param_2 / (dVar40 * dVar17 + dVar38);
    local_108.X = local_108.Z * local_108.X;
    local_108.Y = local_108.Z * local_108.Y;
    local_108.Z = local_108.Z * dVar29;
    UE::Math::TQuat<double>::Exp(&local_108,local_a8);
    auVar3._0_8_ = (this->PrevFilteredRot).Z;
    auVar3._8_8_ = (this->PrevFilteredRot).W;
    dVar29 = (this->PrevFilteredRot).X;
    dVar13 = (this->PrevFilteredRot).Y;
    dVar35 = local_a8[0].X;
    dVar37 = local_a8[0].Y;
    dVar39 = local_a8[0].W;
    auVar24._8_4_ = local_a8[0].W._0_4_;
    auVar24._0_8_ = dVar39;
    auVar24._12_4_ = local_a8[0].W._4_4_;
    auVar31._8_4_ = local_a8[0].Y._0_4_;
    auVar31._0_8_ = dVar37;
    auVar31._12_4_ = local_a8[0].Y._4_4_;
    dVar38 = local_a8[0].Z;
    auVar25._8_4_ = local_a8[0].Z._0_4_;
    auVar25._0_8_ = dVar38;
    auVar25._12_4_ = local_a8[0].Z._4_4_;
    dVar40 = dVar35 * (double)auVar3._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar39 * dVar29 +
             dVar37 * (double)auVar3._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar38 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar17 = dVar35 * (double)auVar3._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar24._8_8_ * dVar13 +
             auVar31._8_8_ * (double)auVar3._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar25._8_8_ * dVar29 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar26._8_4_ = SUB84(dVar17,0);
    auVar26._0_8_ = dVar40;
    auVar26._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar18 = dVar35 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar39 * (double)auVar3._0_8_ +
             dVar37 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar38 * (double)auVar3._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar38 = dVar35 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar39 * (double)auVar3._8_8_ +
             dVar37 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar38 * (double)auVar3._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar32._8_4_ = SUB84(dVar38,0);
    auVar32._0_8_ = dVar18;
    auVar32._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    dVar39 = dVar18 * dVar18 + dVar40 * dVar40;
    dVar29 = auVar32._8_8_ * dVar38 + auVar26._8_8_ * dVar17;
    auVar27._8_4_ = SUB84(dVar29,0);
    auVar27._0_8_ = dVar39;
    auVar27._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar28._0_8_ = auVar27._8_8_ + dVar39;
    auVar28._8_8_ = dVar39 + dVar29;
    auVar23 = sqrtpd(auVar3,auVar28);
    uVar15 = -(ulonglong)(dVar7 <= auVar28._0_8_);
    uVar16 = -(ulonglong)(dVar7 <= auVar28._8_8_);
    uVar44 = (uint)(uVar15 >> 0x20);
    uVar45 = (uint)(uVar16 >> 0x20);
    auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
    auVar33._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar33._4_4_ =
         ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar33._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar33._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar42._0_8_ = uVar15 & (ulonglong)(auVar41._0_8_ * dVar40);
    uVar12 = uVar16 & (ulonglong)(auVar41._8_8_ * dVar17);
    auVar42._8_4_ = (undefined4)uVar12;
    auVar42._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar42 = auVar42 | auVar33;
    auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
    auVar36._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar36._4_4_ =
         ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar36._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar36._12_4_ =
         ~uVar45 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar34._0_8_ = (ulonglong)(auVar23._0_8_ * dVar18) & uVar15;
    uVar16 = (ulonglong)(auVar23._8_8_ * dVar38) & uVar16;
    auVar34._8_4_ = (undefined4)uVar16;
    auVar34._12_4_ = (undefined4)(uVar16 >> 0x20);
    auVar36 = auVar36 | auVar34;
    (this->PrevFilteredRot).X = (double)auVar42._0_8_;
    (this->PrevFilteredRot).Y = (double)auVar42._8_8_;
    __return_storage_ptr__->X = (double)auVar42._0_8_;
    __return_storage_ptr__->Y = (double)auVar42._8_8_;
    (this->PrevFilteredRot).Z = (double)auVar36._0_8_;
    (this->PrevFilteredRot).W = (double)auVar36._8_8_;
    __return_storage_ptr__->Z = (double)auVar36._0_8_;
    __return_storage_ptr__->W = (double)auVar36._8_8_;
  }
  else {
    dVar38 = param_1->Y;
    (this->PrevFilteredRot).X = param_1->X;
    (this->PrevFilteredRot).Y = dVar38;
    dVar38 = param_1->W;
    (this->PrevFilteredRot).Z = param_1->Z;
    (this->PrevFilteredRot).W = dVar38;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->PrevHalfAngVel).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->PrevHalfAngVel).field0_0x0._s_0.Y = (double)uVar9;
    (this->PrevHalfAngVel).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->bFirstRun = false;
    dVar38 = param_1->Y;
    dVar39 = param_1->Z;
    dVar40 = param_1->W;
    __return_storage_ptr__->X = param_1->X;
    __return_storage_ptr__->Y = dVar38;
    __return_storage_ptr__->Z = dVar39;
    __return_storage_ptr__->W = dVar40;
  }
  return __return_storage_ptr__;
}

