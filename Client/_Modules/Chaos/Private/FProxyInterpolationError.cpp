// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// AccumlateErrorXR @ 143f90980

void __thiscall
FProxyInterpolationError::AccumlateErrorXR
          (FProxyInterpolationError *this,TVector<double,3> *param_1,TQuat<double> *param_2,
          int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FErrorInterpolationSettings *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  
  this->SimTicks = 0;
  this->LastSimTick = param_3 + -1;
  pFVar4 = (this->ErrorInterpolationSettings).Ptr;
  this->EndDecayTick = param_3 + param_4 + -1;
  cVar15 = RenderInterpolationCVars::bRenderInterpApplyExponentialDecay;
  if (pFVar4 != (FErrorInterpolationSettings *)0x0) {
    cVar15 = pFVar4->bApplyExponentialDecay;
  }
  if ((cVar15 == '\0') && (cVar15 = (**(code **)(*(longlong *)this + 0x10))(), cVar15 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143f909f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x78))(this);
    return;
  }
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&(this->ErrorX).field_0x8;
  dVar8 = param_2->X;
  dVar9 = param_2->Y;
  *(double *)&this->ErrorX = *(double *)param_1 + *(double *)&this->ErrorX;
  dVar3 = *(double *)&param_1->field_0x10;
  *(double *)&(this->ErrorX).field_0x8 = dVar1 + dVar2;
  dVar2 = param_2->Z;
  dVar10 = param_2->W;
  *(double *)&(this->ErrorX).field_0x10 = dVar3 + *(double *)&(this->ErrorX).field_0x10;
  dVar11 = (this->ErrorR).Z;
  dVar12 = (this->ErrorR).W;
  dVar13 = (this->ErrorR).X;
  dVar14 = (this->ErrorR).Y;
  dVar3 = dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar10 * dVar11 +
          dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar12 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar12 +
          dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar11 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar1 = dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar10 * dVar13 +
          dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar2 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar2 = dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * dVar14 +
          dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar2 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar5._8_4_ = SUB84(dVar2,0);
  auVar5._0_8_ = dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (this->ErrorR).X = dVar1;
  (this->ErrorR).Y = (double)auVar5._8_8_;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  (this->ErrorR).Z = dVar3;
  (this->ErrorR).W = (double)auVar6._8_8_;
  return;
}

// DecayError @ 143fa8c30

bool __thiscall FProxyInterpolationError::DecayError(FProxyInterpolationError *this,double param_1)

{
  undefined8 uVar1;
  FErrorInterpolationSettings *pFVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 uVar6;
  float fVar7;
  char cVar8;
  TQuat<double> *pTVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  uint uVar34;
  undefined1 auVar33 [16];
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  TQuat<double> local_78 [3];
  
  if (0 < this->SimTicks) {
    cVar8 = (**(code **)(*(longlong *)this + 0x10))();
    dVar16 = __real_3e45798ee0000000;
    if (cVar8 != '\0') {
      pFVar2 = (this->ErrorInterpolationSettings).Ptr;
      cVar8 = RenderInterpolationCVars::bRenderInterpApplyExponentialDecay;
      if (pFVar2 != (FErrorInterpolationSettings *)0x0) {
        cVar8 = pFVar2->bApplyExponentialDecay;
      }
      if (cVar8 == '\0') {
        iVar10 = this->EndDecayTick - this->LastSimTick;
        iVar3 = iVar10;
        if (this->SimTicks < iVar10) {
          iVar3 = this->SimTicks;
        }
        iVar11 = 0;
        if (0 < iVar3) {
          iVar11 = iVar3;
        }
        if (0 < iVar11) {
          uVar38 = SUB84(__real_3e45798ee0000000,0);
          uVar4 = (ulonglong)__real_3e45798ee0000000 >> 0x20;
          fVar37 = (float)(iVar10 + -1) / (float)iVar10;
          if (__real_3f800000 <= fVar37) {
            fVar37 = __real_3f800000;
          }
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          do {
            dVar32 = *(double *)&this->ErrorX;
            dVar19 = *(double *)&(this->ErrorX).field_0x8;
            uVar1 = *(undefined8 *)&(this->ErrorX).field_0x10;
            *(double *)&this->ErrorXPrev = dVar32;
            *(double *)&(this->ErrorXPrev).field_0x8 = dVar19;
            *(undefined8 *)&(this->ErrorXPrev).field_0x10 = uVar1;
            dVar15 = (double)fVar37;
            *(double *)&this->ErrorX = dVar32 * dVar15;
            *(double *)&(this->ErrorX).field_0x8 = dVar19 * dVar15;
            *(double *)&(this->ErrorX).field_0x10 = dVar15 * *(double *)&(this->ErrorX).field_0x10;
            dVar32 = (this->ErrorR).Y;
            dVar19 = (this->ErrorR).Z;
            dVar5 = (this->ErrorR).W;
            (this->ErrorRPrev).X = (this->ErrorR).X;
            (this->ErrorRPrev).Y = dVar32;
            (this->ErrorRPrev).Z = dVar19;
            (this->ErrorRPrev).W = dVar5;
            pTVar9 = UE::Math::TQuat<double>::Slerp_NotNormalized
                               (local_78,&UE::Math::TQuat<double>::Identity,&this->ErrorR,dVar15);
            auVar33._8_4_ = uVar38;
            auVar33._0_8_ = dVar16;
            auVar33._12_4_ = (int)uVar4;
            iVar11 = iVar11 + -1;
            dVar32 = pTVar9->X;
            dVar19 = pTVar9->Y;
            dVar5 = pTVar9->Z;
            dVar15 = pTVar9->W;
            dVar24 = dVar32 * dVar32 + dVar5 * dVar5;
            dVar25 = dVar19 * dVar19 + dVar15 * dVar15;
            auVar28._8_4_ = SUB84(dVar25,0);
            auVar28._0_8_ = dVar24;
            auVar28._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            auVar29._0_8_ = auVar28._8_8_ + dVar24;
            auVar29._8_8_ = dVar24 + dVar25;
            in_XMM4 = sqrtpd(in_XMM4,auVar29);
            uVar13 = -(ulonglong)(dVar16 <= auVar29._0_8_);
            uVar12 = -(ulonglong)(auVar33._8_8_ <= auVar29._8_8_);
            uVar34 = (uint)(uVar13 >> 0x20);
            uVar35 = (uint)(uVar12 >> 0x20);
            auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4)
            ;
            auVar31._0_8_ = uVar13 & (ulonglong)(auVar28._0_8_ * dVar32);
            uVar14 = uVar12 & (ulonglong)(auVar28._8_8_ * dVar19);
            auVar31._8_4_ = (undefined4)uVar14;
            auVar31._12_4_ = (undefined4)(uVar14 >> 0x20);
            auVar22._0_4_ =
                 ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar22._4_4_ =
                 ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar22._8_4_ =
                 ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar22._12_4_ =
                 ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4)
            ;
            auVar27._0_4_ =
                 ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar27._4_4_ =
                 ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar27._8_4_ =
                 ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar27._12_4_ =
                 ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar23._0_8_ = (ulonglong)(auVar28._0_8_ * dVar5) & uVar13;
            uVar12 = (ulonglong)(auVar28._8_8_ * dVar15) & uVar12;
            auVar23._8_4_ = (undefined4)uVar12;
            auVar23._12_4_ = (undefined4)(uVar12 >> 0x20);
            (this->ErrorR).X = (double)SUB168(auVar31 | auVar22,0);
            (this->ErrorR).Y = (double)SUB168(auVar31 | auVar22,8);
            (this->ErrorR).Z = (double)SUB168(auVar27 | auVar23,0);
            (this->ErrorR).W = (double)SUB168(auVar27 | auVar23,8);
          } while (0 < iVar11);
        }
      }
      else {
        uVar1 = *(undefined8 *)&(this->ErrorX).field_0x10;
        uVar6 = *(undefined8 *)&(this->ErrorX).field_0x8;
        *(undefined8 *)&this->ErrorXPrev = *(undefined8 *)&this->ErrorX;
        *(undefined8 *)&(this->ErrorXPrev).field_0x8 = uVar6;
        *(undefined8 *)&(this->ErrorXPrev).field_0x10 = uVar1;
        dVar16 = (this->ErrorR).Y;
        dVar32 = (this->ErrorR).Z;
        dVar19 = (this->ErrorR).W;
        (this->ErrorRPrev).X = (this->ErrorR).X;
        (this->ErrorRPrev).Y = dVar16;
        (this->ErrorRPrev).Z = dVar32;
        (this->ErrorRPrev).W = dVar19;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        dVar16 = __real_4000000000000000;
        fVar7 = __real_322bcc77;
        fVar36 = RenderInterpolationCVars::RenderInterpExponentialDecayAngularHalfLife;
        fVar37 = RenderInterpolationCVars::RenderInterpExponentialDecayLinearHalfLife;
        if (pFVar2 != (FErrorInterpolationSettings *)0x0) {
          fVar36 = pFVar2->ExponentialDecayAngularHalfLife;
          fVar37 = pFVar2->ExponentialDecayLinearHalfLife;
        }
        uVar34 = (uint)__xmm_80000000000000008000000000000000;
        uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar32 = (double)this->SimTicks * param_1;
        if (fVar37 <= __real_322bcc77) {
          *(double *)&this->ErrorX = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)&(this->ErrorX).field_0x8 = uVar1;
          *(double *)&(this->ErrorX).field_0x10 =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          dVar19 = dVar32 / (double)fVar37;
          dVar15 = pow(__real_4000000000000000,
                       (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar35,
                                        SUB84(dVar19,0) ^ uVar34));
          dVar19 = *(double *)&(this->ErrorX).field_0x8;
          dVar5 = *(double *)&(this->ErrorX).field_0x10;
          *(double *)&this->ErrorX = dVar15 * *(double *)&this->ErrorX;
          *(double *)&(this->ErrorX).field_0x8 = dVar15 * dVar19;
          *(double *)&(this->ErrorX).field_0x10 = dVar15 * dVar5;
        }
        dVar19 = UE::Math::TQuat<double>::Identity.Y;
        if (fVar36 <= fVar7) {
          (this->ErrorR).X = UE::Math::TQuat<double>::Identity.X;
          (this->ErrorR).Y = dVar19;
          dVar16 = UE::Math::TQuat<double>::Identity.W;
          (this->ErrorR).Z = UE::Math::TQuat<double>::Identity.Z;
          (this->ErrorR).W = dVar16;
        }
        else {
          dVar32 = dVar32 / (double)fVar36;
          dVar16 = pow(dVar16,(double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar35,
                                               SUB84(dVar32,0) ^ uVar34));
          pTVar9 = UE::Math::TQuat<double>::Slerp_NotNormalized
                             (local_78,&UE::Math::TQuat<double>::Identity,&this->ErrorR,dVar16);
          dVar16 = pTVar9->X;
          dVar32 = pTVar9->Y;
          dVar19 = pTVar9->Z;
          dVar5 = pTVar9->W;
          dVar15 = dVar16 * dVar16 + dVar19 * dVar19;
          dVar24 = dVar32 * dVar32 + dVar5 * dVar5;
          auVar17._8_4_ = SUB84(dVar24,0);
          auVar17._0_8_ = dVar15;
          auVar17._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          auVar18._0_8_ = auVar17._8_8_ + dVar15;
          auVar18._8_8_ = dVar15 + dVar24;
          auVar28 = sqrtpd(in_XMM4,auVar18);
          uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar18._0_8_);
          uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar18._8_8_);
          uVar34 = (uint)(uVar12 >> 0x20);
          uVar35 = (uint)(uVar14 >> 0x20);
          auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
          auVar30._0_8_ = uVar12 & (ulonglong)(auVar29._0_8_ * dVar16);
          uVar4 = uVar14 & (ulonglong)(auVar29._8_8_ * dVar32);
          auVar30._8_4_ = (undefined4)uVar4;
          auVar30._12_4_ = (undefined4)(uVar4 >> 0x20);
          auVar20._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar20._4_4_ =
               ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar20._8_4_ =
               ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar20._12_4_ =
               ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
          auVar26._0_4_ =
               ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar26._4_4_ =
               ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar26._8_4_ =
               ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar26._12_4_ =
               ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar21._0_8_ = (ulonglong)(auVar28._0_8_ * dVar19) & uVar12;
          uVar14 = (ulonglong)(auVar28._8_8_ * dVar5) & uVar14;
          auVar21._8_4_ = (undefined4)uVar14;
          auVar21._12_4_ = (undefined4)(uVar14 >> 0x20);
          (this->ErrorR).X = (double)SUB168(auVar30 | auVar20,0);
          (this->ErrorR).Y = (double)SUB168(auVar30 | auVar20,8);
          (this->ErrorR).Z = (double)SUB168(auVar26 | auVar21,0);
          (this->ErrorR).W = (double)SUB168(auVar26 | auVar21,8);
        }
      }
      return true;
    }
    (**(code **)(*(longlong *)this + 0x78))(this);
  }
  return false;
}

// DirectionalDecay @ 143faa010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FProxyInterpolationError::DirectionalDecay
          (FProxyInterpolationError *this,TVector<double,3> *param_1,float param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FErrorInterpolationSettings *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)*(undefined8 *)&this->ErrorX & uVar12;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)((ulonglong)*(undefined8 *)&this->ErrorX >> 0x20) & uVar14;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar11) &&
        (double)CONCAT44(uVar13,uVar11) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)&(this->ErrorX).field_0x8, uVar11 = (uint)uVar1 & uVar12,
      uVar13 = (uint)((ulonglong)uVar1 >> 0x20) & uVar14,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar13,uVar11) &&
      (double)CONCAT44(uVar13,uVar11) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)&(this->ErrorX).field_0x10, uVar12 = (uint)uVar1 & uVar12,
     uVar14 = (uint)((ulonglong)uVar1 >> 0x20) & uVar14,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar12) &&
     (double)CONCAT44(uVar14,uVar12) != __real_3f1a36e2e0000000)) {
    pFVar5 = (this->ErrorInterpolationSettings).Ptr;
    if (pFVar5 != (FErrorInterpolationSettings *)0x0) {
      param_2 = pFVar5->ErrorDirectionalDecayMultiplier;
    }
    if (((0.0 < param_2) &&
        (cVar10 = (**(code **)(*(longlong *)this + 0x10))(),
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, cVar10 != '\0')) &&
       (0 < this->SimTicks)) {
      dVar2 = *(double *)&this->ErrorX;
      dVar3 = *(double *)&(this->ErrorX).field_0x8;
      dVar4 = *(double *)&(this->ErrorX).field_0x10;
      dVar9 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
      dVar6 = (double)param_2;
      dVar15 = (dVar3 * *(double *)&param_1->field_0x8 + dVar2 * *(double *)param_1 +
               dVar4 * *(double *)&param_1->field_0x10) / dVar9;
      dVar7 = dVar2 * dVar15 * dVar6;
      dVar8 = dVar4 * dVar15 * dVar6;
      dVar6 = dVar3 * dVar15 * dVar6;
      if (0.0 < dVar6 * dVar3 + dVar7 * dVar2 + dVar8 * dVar4) {
        if (dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8 < dVar9) {
          *(double *)&this->ErrorX = dVar2 - dVar7;
          *(double *)&(this->ErrorX).field_0x8 = dVar3 - dVar6;
          *(double *)&(this->ErrorX).field_0x10 = dVar4 - dVar8;
          return true;
        }
        *(double *)&this->ErrorX = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)&(this->ErrorX).field_0x8 = uVar1;
        *(double *)&(this->ErrorX).field_0x10 =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        return true;
      }
    }
  }
  return false;
}

// IsErrorSmoothing @ 143fb78d0

bool __thiscall FProxyInterpolationError::IsErrorSmoothing(FProxyInterpolationError *this)

{
  FErrorInterpolationSettings *pFVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  pFVar1 = (this->ErrorInterpolationSettings).Ptr;
  cVar2 = RenderInterpolationCVars::bRenderInterpApplyExponentialDecay;
  if (pFVar1 != (FErrorInterpolationSettings *)0x0) {
    cVar2 = pFVar1->bApplyExponentialDecay;
  }
  if (cVar2 != '\0') {
    fVar5 = RenderInterpolationCVars::RenderInterpMinimumLinearThreshold;
    fVar6 = RenderInterpolationCVars::RenderInterpMinimumAngularThreshold;
    if (pFVar1 != (FErrorInterpolationSettings *)0x0) {
      fVar5 = pFVar1->MinimumLinearThreshold;
      fVar6 = pFVar1->MinimumAngularThreshold;
    }
    dVar3 = *(double *)&(this->ErrorX).field_0x8;
    dVar4 = *(double *)&(this->ErrorX).field_0x10;
    if (dVar3 * dVar3 + *(double *)&this->ErrorX * *(double *)&this->ErrorX + dVar4 * dVar4 <=
        (double)fVar5) {
      dVar3 = (this->ErrorR).W;
      dVar4 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar3) && (dVar4 = dVar3, __real_3ff0000000000000 <= dVar3)) {
        dVar4 = __real_3ff0000000000000;
      }
      dVar3 = acos(dVar4);
      if (dVar3 + dVar3 <= (double)fVar6) {
        return false;
      }
    }
    return true;
  }
  return this->LastSimTick < this->EndDecayTick;
}

// UpdateError @ 143fcd280

bool __thiscall
FProxyInterpolationError::UpdateError(FProxyInterpolationError *this,int param_1,double param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = param_1 - this->LastSimTick;
  this->SimTicks = iVar2;
  this->LastSimTick = param_1;
  if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000143fcd295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this + 0x70))(this,SUB84(param_2,0));
    return (bool)uVar1;
  }
  return false;
}

// ~FProxyInterpolationError @ 1440cd690

void __thiscall FProxyInterpolationError::~FProxyInterpolationError(FProxyInterpolationError *this)

{
  FErrorInterpolationSettings *pFVar1;
  
  *(undefined ***)this = &___7FProxyInterpolationError__6B_;
  pFVar1 = (this->ErrorInterpolationSettings).Ptr;
  if (pFVar1 != (FErrorInterpolationSettings *)0x0) {
    ::operator_delete(pFVar1,0x24);
  }
  *(undefined ***)this = &___7FProxyInterpolationBase__6B_;
  return;
}

// GetErrorInterpolationSettings @ 1440e3ff0

FErrorInterpolationSettings * __thiscall
FProxyInterpolationError::GetErrorInterpolationSettings(FProxyInterpolationError *this)

{
  return (this->ErrorInterpolationSettings).Ptr;
}

// GetErrorR @ 1440e4020

TQuat<double> * __thiscall
FProxyInterpolationError::GetErrorR
          (FProxyInterpolationError *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  pTVar8 = UE::Math::TQuat<double>::Slerp_NotNormalized
                     (local_48,&this->ErrorRPrev,&this->ErrorR,(double)param_1);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// GetErrorX @ 1440e4210

TVector<double,3> * __thiscall
FProxyInterpolationError::GetErrorX
          (FProxyInterpolationError *this,TVector<double,3> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *(double *)&(this->ErrorX).field_0x8;
  dVar2 = *(double *)&(this->ErrorXPrev).field_0x8;
  dVar6 = (double)param_1;
  dVar3 = *(double *)&(this->ErrorXPrev).field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&this->ErrorX - *(double *)&this->ErrorXPrev) * dVar6 +
       *(double *)&this->ErrorXPrev;
  dVar4 = *(double *)&(this->ErrorX).field_0x10;
  dVar5 = *(double *)&(this->ErrorXPrev).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = (dVar1 - dVar2) * dVar6 + dVar3;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (dVar4 - dVar5) * dVar6 + *(double *)&(this->ErrorXPrev).field_0x10;
  return __return_storage_ptr__;
}

// GetInterpolationType @ 1440e4f30

EProxyInterpolationType __thiscall
FProxyInterpolationError::GetInterpolationType(FProxyInterpolationError *this)

{
  return ErrorLinear;
}

// Reset @ 1440ef3c0

void __thiscall FProxyInterpolationError::Reset(FProxyInterpolationError *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->ErrorX = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ErrorX).field_0x8 = uVar1;
  *(undefined8 *)&(this->ErrorX).field_0x10 = uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->ErrorXPrev = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ErrorXPrev).field_0x8 = uVar1;
  *(undefined8 *)&(this->ErrorXPrev).field_0x10 = uVar2;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->ErrorR).X = UE::Math::TQuat<double>::Identity.X;
  (this->ErrorR).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->ErrorR).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->ErrorR).W = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->ErrorRPrev).X = UE::Math::TQuat<double>::Identity.X;
  (this->ErrorRPrev).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->ErrorRPrev).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->ErrorRPrev).W = dVar3;
  this->SimTicks = 0;
  this->EndDecayTick = 0;
  this->LastSimTick = 0;
  return;
}

