// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// Derivative @ 1460bc610

FQuadraticInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicInterpolation::Derivative
          (FCubicInterpolation *this,FQuadraticInterpolation *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = this->DX;
  dVar3 = this->A * __real_4008000000000000;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  dVar2 = this->C;
  __return_storage_ptr__->A = dVar3 / (dVar1 * dVar1 * dVar1);
  dVar3 = this->B;
  __return_storage_ptr__->Constant = dVar2 / dVar1;
  __return_storage_ptr__->B = (dVar3 + dVar3) / (dVar1 * dVar1);
  return __return_storage_ptr__;
}

// Evaluate @ 1460c25d0

double __thiscall
UE::MovieScene::Interpolation::FCubicInterpolation::Evaluate
          (FCubicInterpolation *this,FFrameTime param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fStackX_c;
  
  dVar3 = this->DX;
  uVar1 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar2,uVar1) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar2,uVar1) == __real_3e45798ee2308c3a) {
    return this->A;
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
  dVar3 = ((double)((int)auVar4._0_4_ + (param_1.FrameNumber.Value.Value - (this->Origin).Value)) +
          (double)fVar5) / dVar3;
  return ((dVar3 * this->A + this->B) * dVar3 + this->C) * dVar3 + this->Constant;
}

// Integral @ 1460d6b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FQuarticInterpolation * __thiscall
UE::MovieScene::Interpolation::FCubicInterpolation::Integral
          (FCubicInterpolation *this,FQuarticInterpolation *__return_storage_ptr__,double param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar1 = this->DX;
  dVar3 = this->A;
  dVar4 = this->B;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Constant = param_1;
  dVar3 = dVar3 * dVar1 * ___xmm_3fd55555555555553fd0000000000000;
  dVar4 = dVar4 * dVar1 * _UNK_1511f9068;
  __return_storage_ptr__->DX = dVar1;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  __return_storage_ptr__->A = dVar3;
  __return_storage_ptr__->B = (double)auVar2._8_8_;
  __return_storage_ptr__->C = dVar1 * this->C * __real_3fe0000000000000;
  __return_storage_ptr__->D = dVar1 * this->Constant;
  return __return_storage_ptr__;
}

// Solve @ 1460f8880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::Interpolation::FCubicInterpolation::Solve
          (FCubicInterpolation *this,double param_1,TInterpSolutions<FFrameTime,3> param_2)

{
  code *pcVar1;
  FFrameTime FVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_e8 [32];
  int local_c8;
  float fStack_c4;
  FFrameNumber local_c0;
  float fStack_bc;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90 [3];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0 = this->Constant - param_1;
  local_a0 = this->B;
  local_a8 = this->C;
  local_98 = this->A;
  iVar7 = Curves::SolveCubic(&local_b0,local_90);
  dVar5 = __real_c1e0000000000000;
  dVar4 = __real_41dfffffffc00000;
  fVar3 = __real_3f000000;
  if (0 < iVar7) {
    lVar11 = 0;
    lVar12 = (longlong)local_90 - (longlong)param_2.Array;
    fStack_c4 = 0.0;
    do {
      dVar18 = *(double *)((longlong)param_2.Array + lVar12);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar18;
      local_c8 = (this->Origin).Value;
      auVar20 = roundpd(in_XMM3,auVar14,1);
      dVar19 = auVar20._0_8_;
      if (dVar4 <= dVar19) {
        auVar20._0_8_ = dVar4;
      }
      fVar13 = (float)(dVar18 - dVar19);
      if (auVar20._0_8_ <= dVar5) {
        auVar20._0_8_ = dVar5;
      }
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_b8 = CONCAT44(fStack_c4,local_c8);
      dVar18 = ((double)fVar13 + (double)(int)auVar20._0_8_) * this->DX;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar18;
      in_XMM3 = roundpd(auVar20,auVar15,1);
      dVar19 = in_XMM3._0_8_;
      if (dVar4 <= dVar19) {
        in_XMM3._0_8_ = dVar4;
      }
      fVar13 = (float)(dVar18 - dVar19);
      if (in_XMM3._0_8_ <= dVar5) {
        in_XMM3._0_8_ = dVar5;
      }
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar13 = fVar13 + fStack_c4;
      iVar8 = ((int)ROUND((fVar13 + fVar13) - fVar3) >> 1) + local_c8;
      local_c0.Value = (int)in_XMM3._0_8_ + iVar8;
      iVar10 = (int)fVar13;
      fVar16 = fVar13;
      if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar13)) {
        auVar17._4_4_ = fVar13;
        auVar17._0_4_ = fVar13;
        auVar17._8_8_ = 0;
        uVar9 = movmskps(iVar8,auVar17);
        fVar16 = (float)(int)(iVar10 - (uVar9 & 1));
      }
      fStack_bc = fVar13 - fVar16;
      if (::FFrameTime::MaxSubframe <= fVar13 - fVar16) {
        fStack_bc = ::FFrameTime::MaxSubframe;
      }
      if (fStack_bc <= 0.0) {
        fStack_bc = 0.0;
      }
      if ((2 < lVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index<MinN",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                             ,0x4c,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        iVar7 = (*pcVar1)();
        return iVar7;
      }
      FVar2.SubFrame = fStack_bc;
      FVar2.FrameNumber.Value = local_c0.Value;
      lVar11 = lVar11 + 1;
      *param_2.Array = FVar2;
      param_2.Array = param_2.Array + 1;
    } while (lVar11 < iVar7);
  }
  return iVar7;
}

// SolveWithin @ 1460f9850

int __thiscall
UE::MovieScene::Interpolation::FCubicInterpolation::SolveWithin
          (FCubicInterpolation *this,FFrameTime param_1,FFrameTime param_2,double param_3,
          TInterpSolutions<FFrameTime,3> param_4)

{
  FFrameTime FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  FFrameNumber FVar6;
  int iVar7;
  TInterpSolutions<FFrameTime,3> TVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fStack_54;
  float fStack_4c;
  
  iVar7 = 0;
  iVar5 = Solve(this,param_3,param_4);
  if (0 < iVar5) {
    uVar9 = 0;
    uVar10 = 0;
    fStack_54 = param_1.SubFrame;
    fVar3 = fStack_54;
    TVar8.Array = param_4.Array;
    do {
      if ((2 < uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index<MinN",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                             ,0x4c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar6 = param_4.Array[uVar9].FrameNumber;
      if ((param_1.FrameNumber.Value.Value < FVar6.Value) ||
         ((FVar6.Value == param_1.FrameNumber.Value.Value &&
          (fStack_54 = param_4.Array[uVar9].SubFrame, fVar3 <= fStack_54)))) {
        if ((2 < uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index<MinN",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                               ,0x4c,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        FVar6 = param_4.Array[uVar9].FrameNumber;
        if (FVar6.Value < param_2.FrameNumber.Value.Value) {
LAB_1460f9957:
          if (uVar9 != uVar10) {
            if ((2 < uVar9) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index<MinN",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                   ,0x4c,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            FVar1 = param_4.Array[uVar9];
            if ((2 < (longlong)uVar10) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index<MinN",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                   ,0x4c,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            *TVar8.Array = FVar1;
          }
          iVar7 = iVar7 + 1;
          uVar10 = uVar10 + 1;
          TVar8.Array = TVar8.Array + 1;
        }
        else if (FVar6.Value == param_2.FrameNumber.Value.Value) {
          fStack_54 = param_4.Array[uVar9].SubFrame;
          fStack_4c = param_2.SubFrame;
          if (fStack_54 <= fStack_4c) goto LAB_1460f9957;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar5);
  }
  return iVar7;
}

