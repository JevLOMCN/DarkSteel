// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// NormalizeRotations @ 14756c7d0

void __thiscall FCompactHeapPose::NormalizeRotations(FCompactHeapPose *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_res10 [8];
  
  if (bAnim_BonePose_ISPC_Enabled) {
    ::NormalizeRotations(*(undefined8 *)this,*(undefined4 *)&this->field_0x8);
    return;
  }
  iVar1 = *(int *)&this->field_0x8;
  pauVar11 = *(undefined1 (**) [16])this;
  pauVar12 = pauVar11 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)&this->field_0x8 != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pauVar11 == pauVar12) break;
    dVar7 = *(double *)*pauVar11;
    dVar8 = *(double *)(*pauVar11 + 8);
    dVar9 = *(double *)pauVar11[1];
    dVar10 = *(double *)(pauVar11[1] + 8);
    auVar21._0_8_ = dVar9 * dVar9 + dVar7 * dVar7;
    auVar21._8_8_ = dVar10 * dVar10 + dVar8 * dVar8;
    auVar17._8_4_ = SUB84(auVar21._8_8_,0);
    auVar17._0_8_ = auVar21._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar21._8_8_ >> 0x20);
    auVar18._0_8_ = auVar17._8_8_ + auVar21._0_8_;
    auVar18._8_8_ = auVar21._0_8_ + auVar21._8_8_;
    auVar22 = sqrtpd(auVar21,auVar18);
    uVar13 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar18._0_8_);
    uVar15 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar18._8_8_);
    uVar14 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar18._0_8_);
    uVar16 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar18._8_8_);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
    auVar20._0_8_ = uVar14 & (ulonglong)(auVar19._0_8_ * dVar7);
    uVar6 = uVar16 & (ulonglong)(auVar19._8_8_ * dVar8);
    auVar20._8_4_ = (undefined4)uVar6;
    auVar20._12_4_ = (undefined4)(uVar6 >> 0x20);
    auVar23._0_8_ = uVar13 & (ulonglong)(auVar22._0_8_ * dVar9);
    uVar6 = uVar15 & (ulonglong)(auVar22._8_8_ * dVar10);
    auVar23._8_4_ = (undefined4)uVar6;
    auVar23._12_4_ = (undefined4)(uVar6 >> 0x20);
    auVar22._4_4_ =
         ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar22._0_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar22._8_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar22._12_4_ =
         ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *pauVar11 = auVar20 | auVar22;
    auVar19._4_4_ = ~(uint)(uVar13 >> 0x20) & uVar3;
    auVar19._0_4_ = ~(uint)uVar13 & uVar2;
    auVar19._8_4_ = ~(uint)uVar15 & uVar4;
    auVar19._12_4_ = ~(uint)(uVar15 >> 0x20) & uVar5;
    pauVar11[1] = auVar23 | auVar19;
    pauVar11 = pauVar11 + 6;
  }
  return;
}

// ResetToAdditiveIdentity @ 147576af0

void __thiscall FCompactHeapPose::ResetToAdditiveIdentity(FCompactHeapPose *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 local_res10 [8];
  
  if (bAnim_BonePose_ISPC_Enabled) {
    ::ResetToAdditiveIdentity(*(undefined8 *)this,*(undefined4 *)&this->field_0x8);
    return;
  }
  pdVar5 = *(double **)this;
  iVar1 = *(int *)&this->field_0x8;
  pdVar6 = pdVar5 + (longlong)iVar1 * 0xc;
  while( true ) {
    if (*(int *)&this->field_0x8 != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pdVar5 == pdVar6) break;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
    *pdVar5 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    pdVar5[1] = (double)fVar2;
    pdVar5[2] = (double)fVar3;
    pdVar5[3] = (double)fVar4;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    pdVar5[4] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    pdVar5[5] = (double)fVar2;
    pdVar5[6] = (double)fVar3;
    pdVar5[7] = (double)fVar4;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    pdVar5[8] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    pdVar5[9] = (double)fVar2;
    pdVar5[10] = (double)fVar3;
    pdVar5[0xb] = (double)fVar4;
    pdVar5 = pdVar5 + 0xc;
  }
  return;
}

