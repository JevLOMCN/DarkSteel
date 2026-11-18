// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// Derivative @ 1460bc820

FLinearInterpolation * __thiscall
UE::MovieScene::Interpolation::FQuadraticInterpolation::Derivative
          (FQuadraticInterpolation *this,FLinearInterpolation *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = this->A;
  __return_storage_ptr__->Constant = this->B;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Coefficient = dVar1 + dVar1;
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2e40

double __thiscall
UE::MovieScene::Interpolation::FQuadraticInterpolation::Evaluate
          (FQuadraticInterpolation *this,FFrameTime param_1)

{
  double dVar1;
  undefined1 in_XMM2 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fStackX_c;
  
  fStackX_c = param_1.SubFrame;
  auVar2 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
  fVar3 = (fStackX_c - 0.0) - auVar2._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar3) {
    fVar3 = ::FFrameTime::MaxSubframe;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  dVar1 = (double)((int)auVar2._0_4_ + (param_1.FrameNumber.Value.Value - (this->Origin).Value)) +
          (double)fVar3;
  return (dVar1 * this->A + this->B) * dVar1 + this->Constant;
}

// Integral @ 1460d6de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCubicInterpolation * __thiscall
UE::MovieScene::Interpolation::FQuadraticInterpolation::Integral
          (FQuadraticInterpolation *this,FCubicInterpolation *__return_storage_ptr__,double param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = this->A;
  dVar3 = this->B;
  __return_storage_ptr__->C = this->Constant;
  __return_storage_ptr__->DX = 1.0;
  dVar2 = dVar2 * ___xmm_3fe00000000000003fd5555555555555;
  dVar3 = dVar3 * _UNK_1511f9078;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Constant = param_1;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->A = dVar2;
  __return_storage_ptr__->B = (double)auVar1._8_8_;
  return __return_storage_ptr__;
}

// Solve @ 1460f8c40

int __thiscall
UE::MovieScene::Interpolation::FQuadraticInterpolation::Solve
          (FQuadraticInterpolation *this,double param_1,TInterpSolutions<FFrameTime,2> param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  double dVar17;
  double dVar19;
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  FFrameTime local_res8;
  undefined1 auVar7 [16];
  
  dVar17 = __real_3fe0000000000000;
  dVar12 = this->B;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar12;
  dVar13 = this->Constant - param_1;
  auVar20._0_8_ = dVar12 * dVar12 - this->A * __real_4010000000000000 * dVar13;
  auVar20._8_8_ = 0;
  auVar20 = sqrtpd(in_XMM4,auVar20);
  dVar19 = (auVar20._0_8_ - dVar12) * (__real_3fe0000000000000 / this->A);
  auVar6._8_4_ = auVar20._8_4_;
  auVar6._0_8_ = dVar19;
  auVar6._12_4_ = auVar20._12_4_;
  auVar15 = roundpd(auVar14,auVar6,1);
  dVar12 = auVar15._0_8_;
  if (__real_41dfffffffc00000 <= dVar12) {
    auVar15._0_8_ = __real_41dfffffffc00000;
  }
  fVar16 = (float)(dVar19 - dVar12);
  fVar18 = (float)auVar20._8_8_;
  if (auVar15._0_8_ <= __real_c1e0000000000000) {
    auVar15._0_8_ = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar16) {
    fVar16 = ::FFrameTime::MaxSubframe;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar16) {
    fVar16 = ::FFrameTime::MaxSubframe;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + 0.0;
  auVar8._4_4_ = fVar18;
  auVar8._0_4_ = fVar16;
  iVar1 = ((int)ROUND((fVar16 + fVar16) - __real_3f000000) >> 1) + (this->Origin).Value;
  iVar3 = (int)fVar16;
  fVar5 = fVar16;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar16)) {
    auVar8._8_4_ = fVar18;
    auVar8._12_4_ = fVar18;
    auVar7._8_8_ = auVar8._8_8_;
    auVar7._4_4_ = fVar16;
    auVar7._0_4_ = fVar16;
    uVar2 = movmskps(iVar1,auVar7);
    fVar5 = (float)(int)(iVar3 - (uVar2 & 1));
  }
  local_res8.SubFrame = fVar16 - fVar5;
  if (::FFrameTime::MaxSubframe <= fVar16 - fVar5) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res8.FrameNumber.Value = (int)auVar15._0_8_ + iVar1;
  *param_2.Array = local_res8;
  dVar12 = this->B;
  auVar4._0_8_ = this->A * __real_4010000000000000 * dVar13;
  auVar4._8_8_ = 0;
  auVar9._0_8_ = dVar12 * dVar12 - auVar4._0_8_;
  auVar9._8_8_ = 0;
  auVar20 = sqrtpd(auVar4,auVar9);
  dVar17 = ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000) -
           auVar20._0_8_) * (dVar17 / this->A);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar17;
  auVar20 = roundpd(auVar15,auVar10,1);
  dVar13 = auVar20._0_8_;
  dVar12 = dVar13;
  if (__real_41dfffffffc00000 <= dVar13) {
    dVar12 = __real_41dfffffffc00000;
  }
  fVar16 = (float)(dVar17 - dVar13);
  if (dVar12 <= __real_c1e0000000000000) {
    dVar12 = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar16) {
    fVar16 = ::FFrameTime::MaxSubframe;
  }
  auVar21 = ZEXT416((uint)fVar16);
  if (fVar16 <= 0.0) {
    auVar21 = ZEXT816(0) << 0x20;
  }
  if (::FFrameTime::MaxSubframe <= auVar21._0_4_) {
    auVar21._0_4_ = ::FFrameTime::MaxSubframe;
  }
  fVar16 = auVar21._0_4_;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + 0.0;
  iVar1 = ((int)ROUND((fVar16 + fVar16) - __real_3f000000) >> 1) + (this->Origin).Value;
  iVar3 = (int)fVar16;
  fVar18 = fVar16;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar16)) {
    auVar11._4_4_ = fVar16;
    auVar11._0_4_ = fVar16;
    auVar11._8_8_ = 0;
    uVar2 = movmskps(iVar1,auVar11);
    fVar18 = (float)(int)(iVar3 - (uVar2 & 1));
  }
  local_res8.SubFrame = fVar16 - fVar18;
  if (::FFrameTime::MaxSubframe <= fVar16 - fVar18) {
    local_res8.SubFrame = ::FFrameTime::MaxSubframe;
  }
  if (local_res8.SubFrame <= 0.0) {
    local_res8.SubFrame = 0.0;
  }
  local_res8.FrameNumber.Value = (int)dVar12 + iVar1;
  param_2.Array[1] = local_res8;
  return 2;
}

// SolveWithin @ 1460f9ad0

int __thiscall
UE::MovieScene::Interpolation::FQuadraticInterpolation::SolveWithin
          (FQuadraticInterpolation *this,FFrameTime param_1,FFrameTime param_2,double param_3,
          TInterpSolutions<FFrameTime,2> param_4)

{
  FFrameTime FVar1;
  float fVar2;
  TInterpSolutions<FFrameTime,2> TVar3;
  FFrameNumber FVar4;
  FFrameNumber FVar5;
  FFrameNumber FVar6;
  float fStackX_14;
  
  TVar3.Array = param_4.Array;
  Solve(this,param_3,param_4);
  FVar6 = param_1.FrameNumber.Value;
  FVar4 = (*param_4.Array).FrameNumber;
  FVar5 = param_2.FrameNumber.Value;
  fStackX_14 = param_1.SubFrame;
  fVar2 = fStackX_14;
  fStackX_14 = param_2.SubFrame;
  if (((FVar4.Value < FVar6.Value) ||
      (((param_4.Array._4_4_ = (*param_4.Array).SubFrame, FVar4.Value == FVar6.Value &&
        (param_4.Array._4_4_ < fVar2)) || (FVar5.Value < FVar4.Value)))) ||
     ((FVar4.Value == FVar5.Value && (fStackX_14 <= param_4.Array._4_4_)))) {
    FVar1 = TVar3.Array[1];
    FVar4 = FVar1.FrameNumber.Value;
    if ((FVar6.Value <= FVar4.Value) &&
       ((((param_4.Array._4_4_ = FVar1.SubFrame, FVar4.Value != FVar6.Value ||
          (fVar2 <= param_4.Array._4_4_)) && (FVar4.Value <= FVar5.Value)) &&
        ((FVar4.Value != FVar5.Value || (param_4.Array._4_4_ < fStackX_14)))))) {
      *TVar3.Array = FVar1;
      return 1;
    }
    return 0;
  }
  FVar4 = TVar3.Array[1].FrameNumber;
  if (FVar4.Value < FVar6.Value) {
    return 1;
  }
  param_4.Array._4_4_ = TVar3.Array[1].SubFrame;
  if ((FVar4.Value == FVar6.Value) && (param_4.Array._4_4_ < fVar2)) {
    return 1;
  }
  if (FVar5.Value < FVar4.Value) {
    return 1;
  }
  if ((FVar4.Value == FVar5.Value) && (fStackX_14 <= param_4.Array._4_4_)) {
    return 1;
  }
  return 2;
}

