// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FWeightedCubicInterpolation @ 1460945d0

FWeightedCubicInterpolation * __thiscall
UE::MovieScene::Interpolation::FWeightedCubicInterpolation::FWeightedCubicInterpolation
          (FWeightedCubicInterpolation *this,FFrameRate param_1,FFrameNumber param_2,
          FFrameNumber param_3,double param_4,double param_5,double param_6,bool param_7,
          FFrameNumber param_8,double param_9,double param_10,double param_11,bool param_12)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  double extraout_XMM0_Qb;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  
  dVar5 = __real_3ff0000000000000;
  iVar6 = param_1.Denominator;
  dVar11 = __real_3ff0000000000000 / (double)param_1.Numerator;
  (this->Origin).Value = param_2.Value;
  dVar8 = (double)iVar6;
  this->EndKeyValue = param_9;
  dVar4 = (dVar8 * 0.0 + (double)((longlong)param_3.Value * (longlong)iVar6)) * dVar11;
  dVar2 = ((double)((longlong)param_8.Value * (longlong)iVar6) + dVar8 * 0.0) * dVar11;
  this->DX = (double)(param_8.Value - param_3.Value);
  this->StartKeyValue = param_4;
  dVar3 = dVar2 - dVar4;
  dVar7 = (double)(__real_3f800000 / (float)(dVar11 * dVar8));
  atan(dVar7 * param_5);
  __libm_sse2_sincos_();
  dVar8 = (double)(float)(dVar11 * dVar8);
  if (!param_7) {
    dVar11 = (param_5 / dVar8) * dVar3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11 * dVar11 + dVar3 * dVar3;
    auVar10 = sqrtpd(extraout_XMM0,auVar10);
    param_6 = auVar10._0_8_ * __real_3fd5555555555555;
  }
  this->StartWeight = param_6;
  this->StartKeyTanY = extraout_XMM0._0_8_ * param_6 + param_4;
  this->NormalizedStartTanDX = ((extraout_XMM0._8_8_ * param_6 + dVar4) - dVar4) * (dVar5 / dVar3);
  dVar7 = atan(dVar7 * param_10);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar7;
  __libm_sse2_sincos_();
  if (!param_12) {
    dVar7 = (param_10 / dVar8) * dVar3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar7 * dVar7 + dVar3 * dVar3;
    auVar10 = sqrtpd(auVar9,auVar1);
    param_11 = auVar10._0_8_ * __real_3fd5555555555555;
  }
  this->EndWeight = param_11;
  this->EndKeyTanY = param_9 - extraout_XMM0_Qa * param_11;
  this->NormalizedEndTanDX = ((dVar2 - extraout_XMM0_Qb * param_11) - dVar4) * (dVar5 / dVar3);
  return this;
}

// Evaluate @ 1460c2f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::MovieScene::Interpolation::FWeightedCubicInterpolation::Evaluate
          (FWeightedCubicInterpolation *this,FFrameTime param_1)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStackY_c8 [32];
  float fStack_84;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58 [3];
  double local_40 [7];
  
  dVar1 = __real_3ff0000000000000;
  local_40[0] = (double)(__security_cookie.value ^ (ulonglong)auStackY_c8);
  iVar2 = (this->Origin).Value;
  fStack_84 = param_1.SubFrame;
  auVar6 = roundps(in_XMM2,ZEXT416((uint)(fStack_84 - 0.0)),1);
  fVar7 = (fStack_84 - 0.0) - auVar6._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar7) {
    fVar7 = ::FFrameTime::MaxSubframe;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  dVar8 = this->DX;
  Curves::BezierToPower
            (0.0,this->NormalizedStartTanDX,this->NormalizedEndTanDX,__real_3ff0000000000000,
             &local_60,&local_68,&local_70,&local_78);
  local_78 = local_78 -
             ((double)((int)auVar6._0_4_ + (param_1.FrameNumber.Value.Value - iVar2)) +
             (double)fVar7) / dVar8;
  iVar2 = Curves::SolveCubic(&local_78,local_58);
  if (iVar2 != 1) {
    pdVar3 = local_58;
    local_58[0] = __real_ffefffffffffffff;
    do {
      dVar8 = *pdVar3;
      if ((((0.0 < dVar8) ||
           (uVar4 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar5 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar5,uVar4) < __real_3e45798ee2308c3a ||
           (double)CONCAT44(uVar5,uVar4) == __real_3e45798ee2308c3a)) &&
          ((dVar8 < dVar1 ||
           (dVar9 = dVar8 - dVar1,
           uVar4 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar5 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar5,uVar4) < __real_3e45798ee2308c3a ||
           (double)CONCAT44(uVar5,uVar4) == __real_3e45798ee2308c3a)))) &&
         ((local_58[0] < 0.0 || (local_58[0] < dVar8)))) {
        local_58[0] = dVar8;
      }
      pdVar3 = pdVar3 + 1;
    } while (pdVar3 != local_40);
    if (local_58[0] == __real_ffefffffffffffff) {
      local_58[0] = 0.0;
    }
  }
  dVar1 = this->EndKeyTanY;
  dVar8 = this->StartKeyTanY;
  dVar10 = (double)(float)local_58[0];
  dVar9 = (dVar1 - dVar8) * dVar10 + dVar8;
  dVar8 = (dVar8 - this->StartKeyValue) * dVar10 + this->StartKeyValue;
  dVar8 = (dVar9 - dVar8) * dVar10 + dVar8;
  return (((((this->EndKeyValue - dVar1) * dVar10 + dVar1) - dVar9) * dVar10 + dVar9) - dVar8) *
         dVar10 + dVar8;
}

// Solve @ 1460f9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::Interpolation::FWeightedCubicInterpolation::Solve
          (FWeightedCubicInterpolation *this,double param_1,TInterpSolutions<FFrameTime,4> param_2)

{
  double dVar1;
  code *pcVar2;
  FFrameTime FVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 uStack_104;
  FFrameNumber local_100;
  float fStack_fc;
  ulonglong local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0 [3];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_128;
  dVar1 = this->StartKeyValue;
  local_f0 = dVar1 - param_1;
  dVar24 = this->StartKeyTanY * __real_4008000000000000;
  dVar18 = this->EndKeyTanY * __real_4008000000000000;
  local_e8 = dVar24 - dVar1 * __real_4008000000000000;
  local_e0 = (dVar1 * __real_4008000000000000 - this->StartKeyTanY * __real_4018000000000000) +
             dVar18;
  local_d8 = ((dVar24 - dVar1) - dVar18) + this->EndKeyValue;
  iVar8 = Curves::SolveCubic(&local_f0,local_d0);
  dVar6 = __real_be45798ee0000000;
  dVar5 = __real_3ff0000002af31dc;
  dVar24 = __real_c1e0000000000000;
  dVar18 = __real_41dfffffffc00000;
  fVar4 = __real_3f000000;
  dVar1 = __real_3ff0000000000000;
  iVar12 = 0;
  if (0 < iVar8) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      dVar15 = local_d0[lVar14];
      if ((dVar6 <= dVar15) && (dVar15 <= dVar5)) {
        dVar19 = this->NormalizedEndTanDX;
        if (dVar1 <= dVar15) {
          dVar15 = dVar1;
        }
        dVar20 = this->NormalizedStartTanDX;
        local_108 = (this->Origin).Value;
        uStack_104 = 0;
        local_f8 = (ulonglong)local_108;
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        dVar25 = (double)(float)dVar15;
        auVar21._0_8_ = (dVar19 - dVar20) * dVar25 + dVar20;
        auVar21._8_8_ = 0;
        dVar15 = (auVar21._0_8_ - dVar25 * dVar20) * dVar25 + dVar25 * dVar20;
        dVar19 = ((((((dVar1 - dVar19) * dVar25 + dVar19) - auVar21._0_8_) * dVar25 + auVar21._0_8_)
                  - dVar15) * dVar25 + dVar15) * this->DX;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar19;
        auVar22 = roundpd(auVar21,auVar22,1);
        dVar20 = auVar22._0_8_;
        dVar15 = dVar20;
        if (dVar18 <= dVar20) {
          dVar15 = dVar18;
        }
        fVar23 = (float)(dVar19 - dVar20);
        if (dVar15 <= dVar24) {
          dVar15 = dVar24;
        }
        if (::FFrameTime::MaxSubframe <= fVar23) {
          fVar23 = ::FFrameTime::MaxSubframe;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        if (::FFrameTime::MaxSubframe <= fVar23) {
          fVar23 = ::FFrameTime::MaxSubframe;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar23 = fVar23 + 0.0;
        iVar9 = ((int)ROUND((fVar23 + fVar23) - fVar4) >> 1) + local_108;
        local_100.Value = (int)dVar15 + iVar9;
        iVar11 = (int)fVar23;
        fVar16 = fVar23;
        if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar23)) {
          auVar17._4_4_ = fVar23;
          auVar17._0_4_ = fVar23;
          auVar17._8_8_ = 0;
          uVar10 = movmskps(iVar9,auVar17);
          fVar16 = (float)(int)(iVar11 - (uVar10 & 1));
        }
        fStack_fc = fVar23 - fVar16;
        if (::FFrameTime::MaxSubframe <= fVar23 - fVar16) {
          fStack_fc = ::FFrameTime::MaxSubframe;
        }
        if (fStack_fc <= 0.0) {
          fStack_fc = 0.0;
        }
        if ((3 < lVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index<MinN",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                               ,0x4c,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
        FVar3.SubFrame = fStack_fc;
        FVar3.FrameNumber.Value = local_100.Value;
        iVar12 = iVar12 + 1;
        param_2.Array[lVar13] = FVar3;
        lVar13 = lVar13 + 1;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  return iVar12;
}

