// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// Derivative @ 1460bc850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCubicInterpolation * __thiscall
UE::MovieScene::Interpolation::FQuarticInterpolation::Derivative
          (FQuarticInterpolation *this,FCubicInterpolation *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  
  dVar2 = this->A;
  dVar3 = this->B;
  __return_storage_ptr__->Constant = this->D;
  dVar2 = dVar2 * ___xmm_40080000000000004010000000000000;
  dVar3 = dVar3 * _UNK_15076bb08;
  __return_storage_ptr__->DX = this->DX;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->A = dVar2;
  __return_storage_ptr__->B = (double)auVar1._8_8_;
  __return_storage_ptr__->C = this->C + this->C;
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2ec0

double __thiscall
UE::MovieScene::Interpolation::FQuarticInterpolation::Evaluate
          (FQuarticInterpolation *this,FFrameTime param_1)

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
  return (((dVar3 * this->A + this->B) * dVar3 + this->C) * dVar3 + this->D) * dVar3 +
         this->Constant;
}

// Solve @ 1460f8e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::MovieScene::Interpolation::FQuarticInterpolation::Solve
          (FQuarticInterpolation *this,double param_1,TInterpSolutions<FFrameTime,4> param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined4 uVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_128 [32];
  FFrameTime local_108;
  double local_100 [7];
  ulonglong local_c8;
  undefined1 auVar14 [16];
  undefined1 auVar20 [16];
  
  dVar23 = __real_4010000000000000;
  dVar3 = __real_3fe0000000000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_128;
  dVar1 = __real_3ff0000000000000 / this->A;
  uVar6 = 0;
  iVar5 = -1;
  iVar9 = 0;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = __xmm_80000000000000008000000000000000;
  dVar38 = dVar1 * this->B;
  dVar2 = dVar1 * this->C;
  dVar35 = dVar1 * this->D;
  auVar39._0_8_ = dVar38 * __real_4008000000000000 * dVar38;
  auVar39._8_8_ = 0;
  local_100[6] = __real_3ff0000000000000;
  dVar24 = dVar2 - auVar39._0_8_ * __real_3fc0000000000000;
  dVar22 = (dVar35 - dVar2 * dVar38 * __real_3fe0000000000000) +
           dVar38 * dVar38 * dVar38 * __real_3fc0000000000000;
  uVar40 = (uint)__xmm_80000000000000008000000000000000;
  uVar41 = (uint)(__xmm_80000000000000008000000000000000 >> 0x20);
  local_100[3] = (double)CONCAT44((uint)((ulonglong)(dVar22 * dVar22) >> 0x20) ^ uVar41,
                                  SUB84(dVar22 * dVar22,0) ^ uVar40);
  local_100[5] = dVar24 + dVar24;
  auVar31._0_8_ =
       dVar24 * dVar24 -
       ((((this->Constant - param_1) * dVar1 - dVar35 * dVar38 * __real_3fd0000000000000) +
        dVar2 * dVar38 * dVar38 * __real_3fb0000000000000) -
       dVar38 * auVar39._0_8_ * dVar38 * __real_3f70000000000000) * __real_4010000000000000;
  auVar31._8_8_ = 0;
  local_100[4] = auVar31._0_8_;
  iVar4 = Curves::SolveCubic(local_100 + 3,local_100);
  dVar2 = __real_c1e0000000000000;
  dVar1 = __real_41dfffffffc00000;
  fVar13 = __real_3f000000;
  lVar8 = (longlong)iVar4;
  lVar7 = 0;
  if (3 < lVar8) {
    do {
      iVar5 = iVar9;
      if ((((0.0 < local_100[lVar7]) || (iVar5 = iVar9 + 1, 0.0 < local_100[lVar7 + 1])) ||
          (iVar5 = iVar9 + 2, 0.0 < local_100[lVar7 + 2])) ||
         (iVar5 = iVar9 + 3, 0.0 < local_100[lVar7 + 3])) goto LAB_1460f9096;
      iVar9 = iVar9 + 4;
      lVar7 = lVar7 + 4;
    } while (lVar7 < lVar8 + -3);
  }
  for (; (lVar7 < lVar8 && (iVar5 = iVar9, local_100[lVar7] <= 0.0)); lVar7 = lVar7 + 1) {
    iVar9 = iVar9 + 1;
  }
LAB_1460f9096:
  if (iVar5 != -1) {
    auVar25._0_8_ =
         (double)CONCAT44((uint)((ulonglong)local_100[0] >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_100[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar25._8_8_ = 0;
    dVar38 = dVar38 * __real_3fd0000000000000;
    auVar39 = sqrtpd(auVar39,auVar25);
    dVar37 = auVar39._0_8_;
    uVar40 = auVar39._0_4_ ^ uVar40;
    uVar41 = auVar39._4_4_ ^ uVar41;
    dVar35 = ((auVar25._0_8_ + dVar24) * dVar37 + dVar22) * (dVar3 / dVar37);
    dVar24 = (double)CONCAT44(uVar41,uVar40) * (double)CONCAT44(uVar41,uVar40) - dVar35 * dVar23;
    auVar26._0_8_ = auVar25._0_8_ - (dVar35 - dVar22 / dVar37) * dVar23;
    auVar26._8_8_ = 0;
    if (0.0 <= auVar26._0_8_) {
      auVar42 = sqrtpd(auVar42,auVar26);
      dVar22 = (auVar42._0_8_ * dVar3 - dVar37 * dVar3) - dVar38;
      auVar10._8_4_ = auVar42._8_4_;
      auVar10._0_8_ = dVar22;
      auVar10._12_4_ = auVar42._12_4_;
      auVar30 = roundpd(auVar31,auVar10,1);
      dVar23 = auVar30._0_8_;
      if (__real_41dfffffffc00000 <= dVar23) {
        auVar30._0_8_ = __real_41dfffffffc00000;
      }
      fVar34 = (float)(dVar22 - dVar23);
      fVar36 = (float)auVar42._8_8_;
      if (auVar30._0_8_ <= __real_c1e0000000000000) {
        auVar30._0_8_ = __real_c1e0000000000000;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar34 = fVar34 + 0.0;
      auVar15._4_4_ = fVar36;
      auVar15._0_4_ = fVar34;
      iVar5 = ((int)ROUND((fVar34 + fVar34) - __real_3f000000) >> 1) + (this->Origin).Value;
      iVar9 = (int)fVar34;
      fVar12 = fVar34;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar34)) {
        auVar15._8_4_ = fVar36;
        auVar15._12_4_ = fVar36;
        auVar14._8_8_ = auVar15._8_8_;
        auVar14._4_4_ = fVar34;
        auVar14._0_4_ = fVar34;
        uVar6 = movmskps(iVar5,auVar14);
        fVar12 = (float)(int)(iVar9 - (uVar6 & 1));
      }
      local_108.SubFrame = fVar34 - fVar12;
      if (::FFrameTime::MaxSubframe <= fVar34 - fVar12) {
        local_108.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_108.SubFrame <= 0.0) {
        local_108.SubFrame = 0.0;
      }
      local_108.FrameNumber.Value = (int)auVar30._0_8_ + iVar5;
      dVar22 = ((double)CONCAT44(uVar41,uVar40) - auVar42._0_8_) * dVar3 - dVar38;
      *param_2.Array = local_108;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar22;
      auVar31 = roundpd(auVar30,auVar16,1);
      dVar23 = auVar31._0_8_;
      if (dVar1 <= dVar23) {
        auVar31._0_8_ = dVar1;
      }
      fVar34 = (float)(dVar22 - dVar23);
      if (auVar31._0_8_ <= dVar2) {
        auVar31._0_8_ = dVar2;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar34 = fVar34 + 0.0;
      iVar5 = ((int)ROUND((fVar34 + fVar34) - fVar13) >> 1) + (this->Origin).Value;
      iVar9 = (int)fVar34;
      fVar36 = fVar34;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar34)) {
        auVar17._4_4_ = fVar34;
        auVar17._0_4_ = fVar34;
        auVar17._8_8_ = 0;
        uVar6 = movmskps(iVar5,auVar17);
        fVar36 = (float)(int)(iVar9 - (uVar6 & 1));
      }
      uVar6 = 2;
      local_108.SubFrame = fVar34 - fVar36;
      if (::FFrameTime::MaxSubframe <= fVar34 - fVar36) {
        local_108.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_108.SubFrame <= 0.0) {
        local_108.SubFrame = 0.0;
      }
      local_108.FrameNumber.Value = (int)auVar31._0_8_ + iVar5;
      param_2.Array[1] = local_108;
    }
    if (0.0 <= dVar24) {
      dVar24 = SQRT(dVar24);
      auVar27._8_4_ = auVar39._8_4_;
      auVar27._0_8_ = dVar24;
      auVar27._12_4_ = auVar39._12_4_;
      auVar28._8_8_ = auVar27._8_8_;
      dVar23 = (dVar24 * dVar3 - (double)CONCAT44(uVar41,uVar40) * dVar3) - dVar38;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar23;
      auVar31 = roundpd(auVar31,auVar18,1);
      dVar22 = auVar31._0_8_;
      auVar28._0_8_ = dVar23 - dVar22;
      if (dVar1 <= dVar22) {
        dVar22 = dVar1;
      }
      if (dVar22 <= dVar2) {
        dVar22 = dVar2;
      }
      fVar34 = (float)auVar28._0_8_;
      if (::FFrameTime::MaxSubframe <= (float)auVar28._0_8_) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar34 = fVar34 + 0.0;
      iVar5 = ((int)ROUND((fVar34 + fVar34) - fVar13) >> 1) + (this->Origin).Value;
      iVar9 = (int)fVar34;
      fVar36 = fVar34;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar34)) {
        auVar19._4_4_ = fVar34;
        auVar19._0_4_ = fVar34;
        auVar19._8_8_ = 0;
        uVar40 = movmskps(iVar5,auVar19);
        fVar36 = (float)(int)(iVar9 - (uVar40 & 1));
      }
      local_108.SubFrame = fVar34 - fVar36;
      if (::FFrameTime::MaxSubframe <= fVar34 - fVar36) {
        local_108.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_108.SubFrame <= 0.0) {
        local_108.SubFrame = 0.0;
      }
      dVar38 = (dVar37 - dVar24) * dVar3 - dVar38;
      local_108.FrameNumber.Value = (int)dVar22 + iVar5;
      auVar11._8_4_ = auVar39._8_4_;
      auVar11._0_8_ = dVar38;
      auVar11._12_4_ = auVar39._12_4_;
      param_2.Array[uVar6] = local_108;
      auVar31 = roundpd(auVar28,auVar11,1);
      dVar24 = auVar31._0_8_;
      dVar22 = dVar24;
      if (dVar1 <= dVar24) {
        dVar22 = dVar1;
      }
      fVar34 = (float)(dVar38 - dVar24);
      auVar32._4_4_ = (float)auVar39._8_8_;
      if (dVar22 <= dVar2) {
        dVar22 = dVar2;
      }
      if (::FFrameTime::MaxSubframe <= fVar34) {
        fVar34 = ::FFrameTime::MaxSubframe;
      }
      auVar32._0_4_ = fVar34;
      auVar32._8_8_ = 0;
      if (fVar34 <= 0.0) {
        auVar32 = ZEXT416((uint)auVar32._4_4_) << 0x20;
      }
      if (::FFrameTime::MaxSubframe <= auVar32._0_4_) {
        auVar32._0_4_ = ::FFrameTime::MaxSubframe;
      }
      uVar29 = auVar32._0_8_;
      if (auVar32._0_4_ <= 0.0) {
        uVar29 = SUB128(auVar32._4_12_ << 0x20,0);
      }
      fVar34 = (float)uVar29 + 0.0;
      uVar33 = (undefined4)((ulonglong)uVar29 >> 0x20);
      auVar21._4_4_ = uVar33;
      auVar21._0_4_ = fVar34;
      iVar5 = ((int)ROUND((fVar34 + fVar34) - fVar13) >> 1) + (this->Origin).Value;
      iVar9 = (int)fVar34;
      fVar13 = fVar34;
      if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar34)) {
        auVar21._8_4_ = uVar33;
        auVar21._12_4_ = uVar33;
        auVar20._8_8_ = auVar21._8_8_;
        auVar20._4_4_ = fVar34;
        auVar20._0_4_ = fVar34;
        uVar40 = movmskps(iVar5,auVar20);
        fVar13 = (float)(int)(iVar9 - (uVar40 & 1));
      }
      local_108.SubFrame = fVar34 - fVar13;
      if (::FFrameTime::MaxSubframe <= fVar34 - fVar13) {
        local_108.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_108.SubFrame <= 0.0) {
        local_108.SubFrame = 0.0;
      }
      local_108.FrameNumber.Value = (int)dVar22 + iVar5;
      param_2.Array[uVar6 + 1] = local_108;
      uVar6 = uVar6 + 2;
    }
  }
  return uVar6;
}

// SolveWithin @ 1460f9c00

int __thiscall
UE::MovieScene::Interpolation::FQuarticInterpolation::SolveWithin
          (FQuarticInterpolation *this,FFrameTime param_1,FFrameTime param_2,double param_3,
          TInterpSolutions<FFrameTime,4> param_4)

{
  FFrameTime FVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  FFrameNumber FVar6;
  int iVar7;
  TInterpSolutions<FFrameTime,4> TVar8;
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
      if ((3 < uVar9) &&
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
        if ((3 < uVar9) &&
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
LAB_1460f9d07:
          if (uVar9 != uVar10) {
            if ((3 < uVar9) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index<MinN",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneInterpolation.h"
                                   ,0x4c,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            FVar1 = param_4.Array[uVar9];
            if ((3 < (longlong)uVar10) &&
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
          if (fStack_54 <= fStack_4c) goto LAB_1460f9d07;
        }
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar5);
  }
  return iVar7;
}

