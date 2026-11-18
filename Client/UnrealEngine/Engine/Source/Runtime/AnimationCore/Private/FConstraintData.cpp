// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 4

// StaticStruct @ 14237ab10

UScriptStruct * __cdecl FConstraintData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FConstraintData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintData,(UObject *)pUVar1,
                         L"ConstraintData");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintData.OuterSingleton;
}

// ApplyConstraintTransform @ 14237ff50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConstraintData::ApplyConstraintTransform
          (FConstraintData *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,FMultiTransformBlendHelper *param_4)

{
  FConstraintDescriptionEx *pFVar1;
  undefined1 auStack_c8 [32];
  float local_a8;
  FMultiTransformBlendHelper *local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  ApplyInverseOffset(this,param_1,&local_98,param_3);
  pFVar1 = (this->Constraint).ConstraintDescription;
  if (pFVar1 != (FConstraintDescriptionEx *)0x0) {
    local_a8 = this->Weight;
    local_a0 = param_4;
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,&local_98,param_2,param_3);
  }
  return;
}

// ApplyInverseOffset @ 142380030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConstraintData::ApplyInverseOffset
          (FConstraintData *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  FConstraintDescriptionEx *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  char cVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  double dVar51;
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar55;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [32];
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (this->bMaintainOffset == false) {
    dVar39 = (param_1->Rotation).XY.m128d_f64[1];
    (param_2->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (param_2->Rotation).XY.m128d_f64[1] = dVar39;
    dVar39 = (param_1->Rotation).ZW.m128d_f64[1];
    (param_2->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (param_2->Rotation).ZW.m128d_f64[1] = dVar39;
    dVar39 = (param_1->Translation).XY.m128d_f64[1];
    (param_2->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (param_2->Translation).XY.m128d_f64[1] = dVar39;
    dVar39 = (param_1->Translation).ZW.m128d_f64[1];
    (param_2->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
    (param_2->Translation).ZW.m128d_f64[1] = dVar39;
    dVar39 = (param_1->Scale3D).XY.m128d_f64[1];
    (param_2->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (param_2->Scale3D).XY.m128d_f64[1] = dVar39;
    dVar39 = (param_1->Scale3D).ZW.m128d_f64[1];
    (param_2->Scale3D).ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (param_2->Scale3D).ZW.m128d_f64[1] = dVar39;
  }
  else {
    pFVar1 = (this->Constraint).ConstraintDescription;
    if ((pFVar1 == (FConstraintDescriptionEx *)0x0) ||
       (cVar26 = (**(code **)(pFVar1->_padding_ + 0x28))(), cVar26 == '\0')) {
      pFVar1 = (this->Constraint).ConstraintDescription;
      if ((pFVar1 != (FConstraintDescriptionEx *)0x0) &&
         (cVar26 = (**(code **)(pFVar1->_padding_ + 0x18))(), cVar26 != '\0')) {
        auVar37 = *(undefined1 (*) [16])(this->Offset).Translation.XY.m128d_f64;
        local_198._0_16_ = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
        dVar39 = (this->Offset).Translation.ZW.m128d_f64[0];
        dVar12 = (param_1->Translation).XY.m128d_f64[1];
        auVar44 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
        dVar13 = (param_3->Rotation).ZW.m128d_f64[1];
        dVar14 = (param_1->Translation).ZW.m128d_f64[0];
        dVar54 = auVar37._8_8_;
        dVar11 = auVar44._0_8_;
        auVar40 = blendpd(local_198._0_16_,auVar44,2);
        auVar52._0_8_ = dVar54 * local_198._0_8_ - local_198._8_8_ * auVar37._0_8_;
        auVar52._8_8_ = dVar39 * local_198._8_8_ - dVar11 * dVar54;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = dVar39;
        auVar31 = blendpd(auVar37,auVar31,2);
        auVar41._0_8_ = auVar31._0_8_ * dVar11 - auVar40._0_8_ * dVar39;
        auVar41._8_8_ = auVar31._8_8_ * auVar44._8_8_ - auVar40._8_8_ * 0.0;
        auVar31 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
        auVar40 = blendpd(auVar52,auVar41,2);
        dVar8 = auVar52._8_8_ + auVar52._8_8_;
        dVar9 = auVar41._0_8_ + auVar41._0_8_;
        uVar50 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar53._0_8_ = auVar40._0_8_ + auVar40._0_8_;
        auVar53._8_8_ = auVar40._8_8_ + auVar40._8_8_;
        auVar47._8_4_ = SUB84(dVar9,0);
        auVar47._0_8_ = dVar8;
        auVar47._12_4_ = uVar50;
        auVar40._8_4_ = SUB84(dVar9,0);
        auVar40._0_8_ = dVar8;
        auVar40._12_4_ = uVar50;
        auVar40 = blendpd(auVar40,auVar53,2);
        auVar41 = blendpd(auVar31,auVar44,2);
        auVar48._0_8_ = auVar47._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar8;
        auVar48._8_8_ = auVar53._0_8_ * auVar31._8_8_ - dVar11 * dVar9;
        auVar45._0_8_ = auVar40._0_8_ * dVar11 - auVar41._0_8_ * auVar53._0_8_;
        auVar45._8_8_ = auVar40._8_8_ * auVar44._8_8_ - auVar41._8_8_ * auVar53._8_8_;
        auVar44._8_4_ = SUB84(auVar48._8_8_,0);
        auVar44._0_8_ = auVar48._0_8_;
        auVar44._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
        auVar31 = blendpd(auVar48,auVar45,2);
        (param_2->Translation).XY.m128d_f64[0] =
             (param_1->Translation).XY.m128d_f64[0] + dVar8 * dVar13 + auVar37._0_8_ + auVar44._8_8_
        ;
        (param_2->Translation).XY.m128d_f64[1] = dVar12 + dVar9 * dVar13 + dVar54 + auVar45._0_8_;
        (param_2->Translation).ZW.m128d_f64[0] =
             dVar14 + auVar53._0_8_ * dVar13 + dVar39 + auVar31._0_8_;
        (param_2->Translation).ZW.m128d_f64[1] = 0.0;
      }
      pFVar1 = (this->Constraint).ConstraintDescription;
      if ((pFVar1 != (FConstraintDescriptionEx *)0x0) &&
         (cVar26 = (**(code **)(pFVar1->_padding_ + 0x10))(), cVar26 != '\0')) {
        dVar18 = (param_3->Rotation).ZW.m128d_f64[0];
        dVar19 = (param_3->Rotation).ZW.m128d_f64[1];
        dVar20 = (param_3->Rotation).XY.m128d_f64[0];
        dVar21 = (param_3->Rotation).XY.m128d_f64[1];
        auVar37 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
        auVar44 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
        dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar39 = auVar37._0_8_;
        dVar9 = auVar44._8_8_;
        auVar32._8_4_ = auVar44._8_4_;
        auVar32._0_8_ = dVar9;
        auVar32._12_4_ = auVar44._12_4_;
        auVar6._8_4_ = auVar37._0_4_;
        auVar6._0_8_ = dVar39;
        auVar6._12_4_ = auVar37._4_4_;
        dVar8 = auVar44._0_8_;
        dVar11 = auVar37._8_8_;
        auVar33._8_4_ = auVar44._0_4_;
        auVar33._0_8_ = dVar8;
        auVar33._12_4_ = auVar44._4_4_;
        dVar22 = (this->Offset).Rotation.XY.m128d_f64[0];
        dVar23 = (this->Offset).Rotation.XY.m128d_f64[1];
        dVar15 = dVar39 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar9 * dVar20 +
                 dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar8 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar16 = dVar39 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar32._8_8_ * dVar21 +
                 dVar11 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar33._8_8_ * dVar20 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_198._8_8_ = auVar6._8_8_;
        dVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar24 = (this->Offset).Rotation.ZW.m128d_f64[0];
        dVar25 = (this->Offset).Rotation.ZW.m128d_f64[1];
        local_198._0_8_ =
             dVar39 * dVar21 * dVar14 + dVar9 * dVar18 + dVar11 * dVar20 * dVar12 +
             dVar8 * dVar19 * dVar51;
        dVar39 = (double)local_198._8_8_ * dVar20 * dVar54 + dVar9 * dVar19 +
                 dVar11 * dVar21 * dVar13 + dVar8 * dVar18 * dVar55;
        auVar42._8_4_ = SUB84(dVar15,0);
        auVar42._0_8_ = dVar15;
        auVar42._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_198._8_8_ = local_198._0_8_;
        auVar34._8_4_ = SUB84(dVar39,0);
        auVar34._0_8_ = dVar39;
        auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        auVar43._0_8_ =
             dVar15 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar39 * dVar22 +
             dVar16 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             (double)local_198._0_8_ * dVar23 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar43._8_8_ =
             auVar42._8_8_ * dVar24 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar34._8_8_ * dVar23 +
             dVar16 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             (double)local_198._0_8_ * dVar22 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar43;
        dVar8 = dVar15 * dVar23 * dVar14 + dVar39 * dVar24 + dVar16 * dVar22 * dVar12 +
                (double)local_198._0_8_ * dVar25 * dVar51;
        dVar11 = dVar15 * dVar22 * dVar54 + dVar39 * dVar25 + dVar16 * dVar23 * dVar13 +
                 (double)local_198._0_8_ * dVar24 * dVar55;
        uVar50 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar8;
        auVar10._12_4_ = uVar50;
        *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar10;
        dVar9 = (param_2->Rotation).XY.m128d_f64[0];
        dVar12 = (param_2->Rotation).XY.m128d_f64[1];
        auVar46._8_4_ = SUB84(dVar11,0);
        auVar46._0_8_ = dVar8;
        auVar46._12_4_ = uVar50;
        dVar39 = dVar8 * dVar8 + dVar9 * dVar9;
        dVar11 = dVar11 * auVar46._8_8_ + dVar12 * dVar12;
        auVar35._8_4_ = SUB84(dVar11,0);
        auVar35._0_8_ = dVar39;
        auVar35._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar36._0_8_ = auVar35._8_8_ + dVar39;
        auVar36._8_8_ = dVar39 + dVar11;
        auVar44 = sqrtpd(auVar43,auVar36);
        uVar27 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar36._0_8_);
        uVar29 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar36._8_8_);
        uVar28 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar36._0_8_);
        uVar30 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar36._8_8_);
        auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
        auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
        auVar38._0_8_ = uVar28 & (ulonglong)(auVar37._0_8_ * dVar9);
        uVar17 = uVar30 & (ulonglong)(auVar37._8_8_ * dVar12);
        auVar38._8_4_ = (undefined4)uVar17;
        auVar38._12_4_ = (undefined4)(uVar17 >> 0x20);
        auVar49._0_8_ = uVar27 & (ulonglong)(auVar44._0_8_ * dVar8);
        uVar17 = uVar29 & (ulonglong)(auVar44._8_8_ * auVar46._8_8_);
        auVar49._8_4_ = (undefined4)uVar17;
        auVar49._12_4_ = (undefined4)(uVar17 >> 0x20);
        auVar7._4_4_ = ~(uint)(uVar28 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar7._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar7._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar7._12_4_ =
             ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar38 | auVar7;
        auVar37._4_4_ = ~(uint)(uVar27 >> 0x20) & uVar3;
        auVar37._0_4_ = ~(uint)uVar27 & uVar2;
        auVar37._8_4_ = ~(uint)uVar29 & uVar4;
        auVar37._12_4_ = ~(uint)(uVar29 >> 0x20) & uVar5;
        *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar49 | auVar37;
      }
      pFVar1 = (this->Constraint).ConstraintDescription;
      if ((pFVar1 != (FConstraintDescriptionEx *)0x0) &&
         (cVar26 = (**(code **)(pFVar1->_padding_ + 0x20))(), cVar26 != '\0')) {
        dVar39 = (param_1->Scale3D).XY.m128d_f64[1];
        dVar11 = (param_3->Scale3D).XY.m128d_f64[1];
        dVar8 = (this->Offset).Scale3D.XY.m128d_f64[1];
        dVar9 = (param_1->Scale3D).ZW.m128d_f64[0];
        dVar12 = (param_3->Scale3D).ZW.m128d_f64[0];
        dVar13 = (this->Offset).Scale3D.ZW.m128d_f64[0];
        (param_2->Scale3D).XY.m128d_f64[0] =
             (param_1->Scale3D).XY.m128d_f64[0] * (param_3->Scale3D).XY.m128d_f64[0] *
             (this->Offset).Scale3D.XY.m128d_f64[0];
        (param_2->Scale3D).XY.m128d_f64[1] = dVar39 * dVar11 * dVar8;
        (param_2->Scale3D).ZW.m128d_f64[0] = dVar9 * dVar12 * dVar13;
        (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
      }
    }
    else {
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_118.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,&this->Offset,param_3);
      local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_178.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_178.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_178.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_178.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_178.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_178.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_178,&local_118,param_1);
      (param_2->Rotation).XY.m128d_f64[0] = local_178.Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = local_178.Rotation.XY.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = local_178.Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = local_178.Rotation.ZW.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
      (param_2->Scale3D).XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
      (param_2->Scale3D).XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
      (param_2->Scale3D).ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
      (param_2->Scale3D).ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
    }
  }
  return;
}

// SaveInverseOffset @ 142384ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConstraintData::SaveInverseOffset
          (FConstraintData *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  bool bVar1;
  FConstraintDescriptionEx *pFVar2;
  undefined1 auVar3 [16];
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  TTransform<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined4 uVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar1 = this->bMaintainOffset;
  *&(this->Offset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Offset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Offset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Offset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Offset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Offset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (bVar1 != false) {
    pFVar2 = (this->Constraint).ConstraintDescription;
    if ((pFVar2 == (FConstraintDescriptionEx *)0x0) ||
       (cVar10 = (**(code **)(pFVar2->_padding_ + 0x28))(), cVar10 == '\0')) {
      pFVar2 = (this->Constraint).ConstraintDescription;
      if ((pFVar2 != (FConstraintDescriptionEx *)0x0) &&
         (cVar10 = (**(code **)(pFVar2->_padding_ + 0x18))(), cVar10 != '\0')) {
        dVar43 = (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
        dVar16 = (param_3->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar28 = (param_3->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar45 = (undefined4)((ulonglong)dVar28 >> 0x20);
        dVar61 = (param_3->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar44 = (param_3->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar46._8_4_ = SUB84(dVar28,0);
        auVar46._0_8_ = dVar16;
        auVar46._12_4_ = uVar45;
        auVar51._8_4_ = SUB84(dVar28,0);
        auVar51._0_8_ = dVar16;
        auVar51._12_4_ = uVar45;
        local_1a8 = (param_1->Translation).ZW.m128d_f64[0] - (param_2->Translation).ZW.m128d_f64[0];
        dVar55 = (param_1->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
        dVar37 = auVar46._8_8_;
        auVar30._8_4_ = SUB84(dVar44,0);
        auVar30._0_8_ = dVar61;
        auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar52 = blendpd(auVar51,auVar30,2);
        auVar17._8_4_ = SUB84(dVar61,0);
        auVar17._0_8_ = dVar37;
        auVar17._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        auVar62._8_4_ = SUB84(dVar55,0);
        auVar62._0_8_ = dVar43;
        uVar45 = (undefined4)((ulonglong)dVar55 >> 0x20);
        auVar62._12_4_ = uVar45;
        auVar29._8_4_ = SUB84(dVar55,0);
        auVar29._0_8_ = dVar43;
        auVar29._12_4_ = uVar45;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = local_1a8;
        auVar30 = blendpd(auVar29,auVar42,2);
        auVar63._0_8_ = auVar62._8_8_ * dVar16 - dVar37 * dVar43;
        auVar63._8_8_ = local_1a8 * dVar28 - auVar17._8_8_ * dVar55;
        auVar57._8_4_ = SUB84(auVar63._8_8_,0);
        auVar57._0_8_ = auVar63._0_8_;
        auVar57._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        auVar31._0_8_ = auVar30._0_8_ * dVar61 - auVar52._0_8_ * local_1a8;
        auVar31._8_8_ = auVar30._8_8_ * dVar44 - auVar52._8_8_ * 0.0;
        auVar30 = blendpd(auVar63,auVar31,2);
        dVar56 = auVar57._8_8_ + auVar57._8_8_;
        dVar58 = auVar31._0_8_ + auVar31._0_8_;
        auVar64._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar64._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        uVar45 = SUB84(dVar58,0);
        auVar38._8_4_ = uVar45;
        auVar38._0_8_ = dVar56;
        uVar59 = (undefined4)((ulonglong)dVar58 >> 0x20);
        auVar38._12_4_ = uVar59;
        auVar18._8_4_ = uVar45;
        auVar18._0_8_ = dVar56;
        auVar18._12_4_ = uVar59;
        auVar32._8_4_ = uVar45;
        auVar32._0_8_ = dVar56;
        auVar32._12_4_ = uVar59;
        auVar30 = blendpd(auVar32,auVar64,2);
        auVar39._0_8_ = auVar38._8_8_ * dVar16 - dVar56 * dVar37;
        auVar39._8_8_ = auVar64._0_8_ * dVar28 - auVar18._8_8_ * dVar61;
        auVar19._8_4_ = SUB84(auVar64._8_8_,0);
        auVar19._0_8_ = auVar64._0_8_;
        auVar19._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
        auVar33._0_8_ = auVar30._0_8_ * dVar61 - auVar64._0_8_ * auVar52._0_8_;
        auVar33._8_8_ = auVar30._8_8_ * dVar44 - auVar19._8_8_ * auVar52._8_8_;
        auVar52._8_4_ = SUB84(auVar39._8_8_,0);
        auVar52._0_8_ = auVar39._0_8_;
        auVar52._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
        auVar30 = blendpd(auVar39,auVar33,2);
        (this->Offset).Translation.XY.m128d_f64[0] = dVar56 * dVar44 + dVar43 + auVar52._8_8_;
        (this->Offset).Translation.XY.m128d_f64[1] = dVar58 * dVar44 + dVar55 + auVar33._0_8_;
        (this->Offset).Translation.ZW.m128d_f64[0] =
             auVar64._0_8_ * dVar44 + local_1a8 + auVar30._0_8_;
        (this->Offset).Translation.ZW.m128d_f64[1] = 0.0;
      }
      pFVar2 = (this->Constraint).ConstraintDescription;
      if ((pFVar2 != (FConstraintDescriptionEx *)0x0) &&
         (cVar10 = (**(code **)(pFVar2->_padding_ + 0x10))(), cVar10 != '\0')) {
        dVar6 = (param_1->Rotation).ZW.m128d_f64[0];
        dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
        dVar8 = (param_1->Rotation).XY.m128d_f64[0];
        dVar9 = (param_1->Rotation).XY.m128d_f64[1];
        dVar16 = (param_2->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar61 = (param_2->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar43 = (param_2->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar37 = (param_2->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar45 = (undefined4)((ulonglong)dVar37 >> 0x20);
        auVar47._8_4_ = SUB84(dVar37,0);
        auVar47._0_8_ = dVar43;
        auVar47._12_4_ = uVar45;
        dVar50 = auVar47._8_8_;
        auVar20._8_4_ = SUB84(dVar37,0);
        auVar20._0_8_ = dVar50;
        auVar20._12_4_ = uVar45;
        uVar45 = (undefined4)((ulonglong)dVar16 >> 0x20);
        auVar65._8_4_ = SUB84(dVar16,0);
        auVar65._0_8_ = dVar16;
        auVar65._12_4_ = uVar45;
        auVar34._8_4_ = SUB84(dVar61,0);
        auVar34._0_8_ = dVar61;
        auVar34._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        auVar21._8_4_ = SUB84(dVar43,0);
        auVar21._0_8_ = dVar43;
        auVar21._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        local_1b8 = dVar16 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                    + dVar50 * dVar8 +
                    dVar61 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                    + dVar43 * dVar9 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dStack_1b0 = auVar65._8_8_ * dVar6 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     auVar20._8_8_ * dVar9 +
                     auVar34._8_8_ * dVar7 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar21._8_8_ * dVar8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        auVar22._8_4_ = SUB84(dVar16,0);
        auVar22._0_8_ = dVar16;
        auVar22._12_4_ = uVar45;
        dVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar66 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        dVar28 = (param_3->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar44 = (param_3->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        local_198 = dVar16 * dVar9 * dVar58 + dVar50 * dVar6 + dVar61 * dVar8 * dVar55 +
                    dVar43 * dVar7 * dVar60;
        dStack_190 = auVar22._8_8_ * dVar8 * dVar4 + dVar37 * dVar7 + dVar61 * dVar9 * dVar56 +
                     dVar43 * dVar6 * dVar66;
        dVar16 = (param_3->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar61 = (param_3->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar45 = (undefined4)((ulonglong)dVar61 >> 0x20);
        auVar53._8_4_ = SUB84(dStack_190,0);
        auVar53._0_8_ = local_198;
        auVar53._12_4_ = (int)((ulonglong)dStack_190 >> 0x20);
        auVar48._8_4_ = SUB84(dVar61,0);
        auVar48._0_8_ = dVar16;
        auVar48._12_4_ = uVar45;
        auVar40._8_4_ = SUB84(dVar28,0);
        auVar40._0_8_ = dVar28;
        auVar40._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        dVar43 = auVar48._8_8_;
        auVar23._8_4_ = SUB84(dVar61,0);
        auVar23._0_8_ = dVar43;
        auVar23._12_4_ = uVar45;
        auVar35._8_4_ = SUB84(dVar44,0);
        auVar35._0_8_ = dVar44;
        auVar35._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar24._8_4_ = SUB84(dVar16,0);
        auVar24._0_8_ = dVar16;
        auVar24._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        auVar41._0_8_ =
             dVar28 * auVar53._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar43 * local_1b8 +
             dVar44 * local_198 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar16 * dStack_1b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar41._8_8_ =
             auVar40._8_8_ * local_198 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar23._8_8_ * dStack_1b0 +
             auVar35._8_8_ * dStack_190 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar24._8_8_ * local_1b8 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        *(undefined1 (*) [16])(this->Offset).Rotation.XY.m128d_f64 = auVar41;
        (this->Offset).Rotation.ZW.m128d_f64[0] =
             dVar28 * dStack_1b0 * dVar58 + dVar43 * local_198 + dVar44 * local_1b8 * dVar55 +
             dVar16 * auVar53._8_8_ * dVar60;
        (this->Offset).Rotation.ZW.m128d_f64[1] =
             dVar28 * local_1b8 * dVar4 + dVar61 * dStack_190 + dVar44 * dStack_1b0 * dVar56 +
             dVar16 * local_198 * dVar66;
        dVar16 = (this->Offset).Rotation.XY.m128d_f64[0];
        dVar28 = (this->Offset).Rotation.XY.m128d_f64[1];
        dVar61 = (this->Offset).Rotation.ZW.m128d_f64[0];
        dVar44 = (this->Offset).Rotation.ZW.m128d_f64[1];
        dVar43 = dVar61 * dVar61 + dVar16 * dVar16;
        dVar37 = dVar44 * dVar44 + dVar28 * dVar28;
        auVar25._8_4_ = SUB84(dVar37,0);
        auVar25._0_8_ = dVar43;
        auVar25._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        auVar26._0_8_ = auVar25._8_8_ + dVar43;
        auVar26._8_8_ = dVar43 + dVar37;
        auVar42 = sqrtpd(auVar41,auVar26);
        uVar12 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar26._0_8_);
        uVar14 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar26._8_8_);
        uVar13 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar26._0_8_);
        uVar15 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar26._8_8_);
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
        auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
        auVar27._0_8_ = (ulonglong)(auVar30._0_8_ * dVar16) & uVar13;
        uVar5 = uVar15 & (ulonglong)(auVar30._8_8_ * dVar28);
        auVar27._8_4_ = (undefined4)uVar5;
        auVar27._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar54._0_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar54._4_4_ =
             ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar54._8_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar54._12_4_ =
             ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar49._0_8_ = uVar12 & (ulonglong)(auVar42._0_8_ * dVar61);
        uVar5 = uVar14 & (ulonglong)(auVar42._8_8_ * dVar44);
        auVar49._8_4_ = (undefined4)uVar5;
        auVar49._12_4_ = (undefined4)(uVar5 >> 0x20);
        auVar36._0_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar36._4_4_ =
             ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar36._8_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar36._12_4_ =
             ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(this->Offset).Rotation.XY.m128d_f64 = auVar27 | auVar54;
        *(undefined1 (*) [16])(this->Offset).Rotation.ZW.m128d_f64 = auVar49 | auVar36;
      }
      pFVar2 = (this->Constraint).ConstraintDescription;
      if ((pFVar2 != (FConstraintDescriptionEx *)0x0) &&
         (cVar10 = (**(code **)(pFVar2->_padding_ + 0x20))(), cVar10 != '\0')) {
        dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
        dVar28 = 0.0;
        auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
        if (__real_3e45798ee0000000 <
            (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar61 = __real_3ff0000000000000 / auVar30._0_8_;
        }
        else {
          dVar61 = 0.0;
        }
        if (__real_3e45798ee0000000 <
            (double)CONCAT44(auVar30._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar30._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar44 = __real_3ff0000000000000 / auVar30._8_8_;
        }
        else {
          dVar44 = 0.0;
        }
        if (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar16 = __real_3ff0000000000000 / dVar16;
        }
        else {
          dVar16 = 0.0;
        }
        dVar43 = (param_1->Scale3D).ZW.m128d_f64[0];
        dVar37 = (param_3->Scale3D).ZW.m128d_f64[0];
        auVar30 = *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64;
        if (__real_3e45798ee0000000 <
            (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar55 = __real_3ff0000000000000 / auVar30._0_8_;
        }
        else {
          dVar55 = 0.0;
        }
        if (__real_3e45798ee0000000 <
            (double)CONCAT44(auVar30._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar30._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar56 = __real_3ff0000000000000 / auVar30._8_8_;
        }
        else {
          dVar56 = 0.0;
        }
        if (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          dVar28 = __real_3ff0000000000000 / dVar37;
        }
        dVar56 = (param_1->Scale3D).XY.m128d_f64[1] * dVar44 * dVar56;
        auVar3._8_4_ = SUB84(dVar56,0);
        auVar3._0_8_ = (param_1->Scale3D).XY.m128d_f64[0] * dVar61 * dVar55;
        auVar3._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
        *(undefined1 (*) [16])(this->Offset).Scale3D.XY.m128d_f64 = auVar3;
        (this->Offset).Scale3D.ZW.m128d_f64[0] = dVar43 * dVar16 * dVar28;
        (this->Offset).Scale3D.ZW.m128d_f64[1] = 0.0;
      }
    }
    else {
      UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_188,param_2);
      pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform(&local_188,&local_128,param_3);
      dVar16 = (pTVar11->Rotation).XY.m128d_f64[1];
      (this->Offset).Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
      (this->Offset).Rotation.XY.m128d_f64[1] = dVar16;
      dVar16 = (pTVar11->Rotation).ZW.m128d_f64[1];
      (this->Offset).Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
      (this->Offset).Rotation.ZW.m128d_f64[1] = dVar16;
      dVar16 = (pTVar11->Translation).XY.m128d_f64[1];
      (this->Offset).Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
      (this->Offset).Translation.XY.m128d_f64[1] = dVar16;
      dVar16 = (pTVar11->Translation).ZW.m128d_f64[1];
      (this->Offset).Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
      (this->Offset).Translation.ZW.m128d_f64[1] = dVar16;
      dVar16 = (pTVar11->Scale3D).XY.m128d_f64[1];
      (this->Offset).Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
      (this->Offset).Scale3D.XY.m128d_f64[1] = dVar16;
      dVar16 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      (this->Offset).Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
      (this->Offset).Scale3D.ZW.m128d_f64[1] = dVar16;
    }
  }
  return;
}

