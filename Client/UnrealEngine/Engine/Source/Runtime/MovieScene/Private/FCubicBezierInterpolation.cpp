// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FCubicBezierInterpolation @ 146092ce0

FCubicBezierInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::FCubicBezierInterpolation
          (FCubicBezierInterpolation *this,FFrameNumber param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  double dVar1;
  double dVar2;
  
  (this->Origin).Value = param_1.Value;
  this->DX = param_2;
  dVar1 = param_2 * param_5 * __real_3fd5555555555555;
  this->P3 = param_4;
  dVar2 = param_2 * param_6 * __real_3fd5555555555555;
  this->P0 = param_3;
  this->P1 = dVar1 + param_3;
  this->P2 = param_4 - dVar2;
  return this;
}

// AsCubic @ 1460ab390

FCubicInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::AsCubic
          (FCubicBezierInterpolation *this,FCubicInterpolation *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = __real_4008000000000000;
  dVar1 = this->DX;
  dVar2 = this->P1;
  dVar7 = this->P2;
  dVar3 = this->P0;
  dVar6 = dVar2 * __real_4008000000000000;
  __return_storage_ptr__->DX = 1.0;
  dVar7 = dVar7 * dVar4;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Constant = dVar3;
  dVar5 = dVar2 * __real_4018000000000000;
  __return_storage_ptr__->A = (((dVar6 - dVar3) - dVar7) + this->P3) / (dVar1 * dVar1 * dVar1);
  __return_storage_ptr__->C = (dVar2 - dVar3) * (dVar4 / dVar1);
  __return_storage_ptr__->B = ((dVar3 * dVar4 - dVar5) + dVar7) / (dVar1 * dVar1);
  return __return_storage_ptr__;
}

// Derivative @ 1460bc540

FQuadraticInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::Derivative
          (FCubicBezierInterpolation *this,FQuadraticInterpolation *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = __real_4008000000000000;
  dVar1 = this->P0;
  dVar6 = this->P2;
  dVar2 = this->DX;
  dVar3 = this->P1;
  dVar5 = dVar3 * __real_4018000000000000;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  dVar6 = dVar6 * dVar4;
  dVar5 = (dVar1 * dVar4 - dVar5) + dVar6;
  __return_storage_ptr__->A =
       ((((dVar3 * dVar4 - dVar1) - dVar6) + this->P3) / (dVar2 * dVar2 * dVar2)) * dVar4;
  __return_storage_ptr__->B = (dVar5 + dVar5) / (dVar2 * dVar2);
  __return_storage_ptr__->Constant = (dVar3 - dVar1) * (dVar4 / dVar2);
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2510

double __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::Evaluate
          (FCubicBezierInterpolation *this,FFrameTime param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fStackX_c;
  
  dVar1 = this->DX;
  uVar2 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar3,uVar2) == __real_3e45798ee2308c3a) {
    return this->P3;
  }
  fStackX_c = param_1.SubFrame;
  auVar4 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
  fVar5 = (fStackX_c - 0.0) - auVar4._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar5) {
    fVar5 = ::FFrameTime::MaxSubframe;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  dVar1 = Curves::BezierInterp<double>
                    (this->P0,this->P1,this->P2,this->P3,
                     (float)(((double)((int)auVar4._0_4_ +
                                      (param_1.FrameNumber.Value.Value - (this->Origin).Value)) +
                             (double)fVar5) / dVar1));
  return dVar1;
}

// Integral @ 1460d6a70

FQuarticInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::Integral
          (FCubicBezierInterpolation *this,FQuarticInterpolation *__return_storage_ptr__,
          double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = __real_4008000000000000;
  dVar8 = this->P2;
  dVar1 = this->DX;
  dVar2 = this->P1;
  dVar3 = this->P0;
  dVar7 = dVar2 * __real_4008000000000000;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  dVar8 = dVar8 * dVar5;
  __return_storage_ptr__->D = dVar3;
  __return_storage_ptr__->Constant = param_1;
  dVar4 = this->P3;
  __return_storage_ptr__->DX = 1.0;
  dVar6 = dVar2 * __real_4018000000000000;
  __return_storage_ptr__->A =
       ((((dVar7 - dVar3) - dVar8) + dVar4) / (dVar1 * dVar1 * dVar1)) * __real_3fd0000000000000;
  __return_storage_ptr__->C = (dVar2 - dVar3) * (__real_3ff8000000000000 / dVar1);
  __return_storage_ptr__->B =
       (((dVar3 * dVar5 - dVar6) + dVar8) / (dVar1 * dVar1)) * __real_3fd5555555555555;
  return __return_storage_ptr__;
}

// Solve @ 1460f85a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::Interpolation::FCubicBezierInterpolation::Solve
          (FCubicBezierInterpolation *this,double param_1,TInterpSolutions<FFrameTime,4> param_2)

{
  double dVar1;
  code *pcVar2;
  FFrameTime FVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  double dVar23;
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
  dVar1 = this->P0;
  local_f0 = dVar1 - param_1;
  dVar23 = this->P1 * __real_4008000000000000;
  iVar13 = 0;
  auVar20._0_8_ = this->P2 * __real_4008000000000000;
  auVar20._8_8_ = 0;
  local_e8 = dVar23 - dVar1 * __real_4008000000000000;
  local_e0 = (dVar1 * __real_4008000000000000 - this->P1 * __real_4018000000000000) + auVar20._0_8_;
  local_d8 = ((dVar23 - dVar1) - auVar20._0_8_) + this->P3;
  iVar9 = Curves::SolveCubic(&local_f0,local_d0);
  dVar7 = __real_be45798ee0000000;
  dVar6 = __real_3ff0000002af31dc;
  dVar5 = __real_c1e0000000000000;
  dVar23 = __real_41dfffffffc00000;
  fVar4 = __real_3f000000;
  dVar1 = __real_3ff0000000000000;
  if (0 < iVar9) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      dVar22 = local_d0[lVar15];
      if ((dVar7 <= dVar22) && (dVar22 <= dVar6)) {
        if (dVar1 <= dVar22) {
          dVar22 = dVar1;
        }
        local_108 = (this->Origin).Value;
        uStack_104 = 0;
        local_f8 = (ulonglong)local_108;
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        dVar22 = dVar22 * this->DX;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = dVar22;
        auVar20 = roundpd(auVar20,auVar16,1);
        dVar19 = auVar20._0_8_;
        if (dVar23 <= dVar19) {
          auVar20._0_8_ = dVar23;
        }
        fVar21 = (float)(dVar22 - dVar19);
        if (auVar20._0_8_ <= dVar5) {
          auVar20._0_8_ = dVar5;
        }
        if (::FFrameTime::MaxSubframe <= fVar21) {
          fVar21 = ::FFrameTime::MaxSubframe;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        if (::FFrameTime::MaxSubframe <= fVar21) {
          fVar21 = ::FFrameTime::MaxSubframe;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        fVar21 = fVar21 + 0.0;
        iVar10 = ((int)ROUND((fVar21 + fVar21) - fVar4) >> 1) + local_108;
        local_100.Value = (int)auVar20._0_8_ + iVar10;
        iVar12 = (int)fVar21;
        fVar17 = fVar21;
        if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar21)) {
          auVar18._4_4_ = fVar21;
          auVar18._0_4_ = fVar21;
          auVar18._8_8_ = 0;
          uVar11 = movmskps(iVar10,auVar18);
          fVar17 = (float)(int)(iVar12 - (uVar11 & 1));
        }
        fStack_fc = fVar21 - fVar17;
        if (::FFrameTime::MaxSubframe <= fVar21 - fVar17) {
          fStack_fc = ::FFrameTime::MaxSubframe;
        }
        if (fStack_fc <= 0.0) {
          fStack_fc = 0.0;
        }
        if ((3 < lVar14) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index<MinN",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                               ,0x4c,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        FVar3.SubFrame = fStack_fc;
        FVar3.FrameNumber.Value = local_100.Value;
        iVar13 = iVar13 + 1;
        param_2.Array[lVar14] = FVar3;
        lVar14 = lVar14 + 1;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar9);
  }
  return iVar13;
}

