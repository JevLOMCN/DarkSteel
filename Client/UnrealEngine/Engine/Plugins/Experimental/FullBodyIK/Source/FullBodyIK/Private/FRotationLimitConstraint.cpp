// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// operator() @ 14df75c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FRotationLimitConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
          (void *this,Type param_1,float param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  TVector<double> *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar25;
  double dVar26;
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  uint uVar43;
  uint uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 local_158 [16];
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TQuat<double> local_118;
  TQuat<double> local_f8;
  double local_d8;
  undefined8 uStack_d0;
  TQuat<double> local_c8 [5];
  
  pdVar1 = *(double **)this;
  dVar31 = pdVar1[2] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar33 = pdVar1[3] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  pdVar2 = *(double **)((longlong)this + 8);
  dVar5 = pdVar2[2];
  dVar6 = pdVar2[3];
  dVar32 = *pdVar2;
  dVar7 = pdVar2[1];
  auVar27._8_4_ = SUB84(dVar33,0);
  auVar27._0_8_ = dVar31;
  auVar27._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  dVar40 = *pdVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar25 = pdVar1[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar37._8_4_ = SUB84(dVar40,0);
  auVar37._0_8_ = dVar40;
  auVar37._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  local_c8[0].X =
       dVar40 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar32 * auVar27._8_8_ +
       dVar5 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar31 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_c8[0].Y =
       auVar37._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       dVar7 * dVar33 +
       dVar6 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       dVar31 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_c8[0].Z =
       dVar40 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar5 * auVar27._8_8_ +
       dVar32 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar31 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_c8[0].W =
       dVar40 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
       dVar6 * dVar33 +
       dVar7 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
       dVar31 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar18 = UE::Math::TMatrix<double>::GetScaledAxis
                      (&UE::Math::TMatrix<double>::Identity,(TVector<double> *)&local_130._s_0,
                       param_1);
  dVar5 = __real_3ff0000000000000;
  uVar42 = SUB84(__real_3ff0000000000000,0);
  uVar19 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  dVar40 = (pTVar18->field0_0x0)._s_0.X;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = dVar40;
  dVar25 = (pTVar18->field0_0x0)._s_0.Y;
  dVar31 = (pTVar18->field0_0x0)._s_0.Z;
  local_d8 = __real_3e45798ee0000000;
  uStack_d0 = 0;
  dVar33 = dVar25 * dVar25 + dVar40 * dVar40 + dVar31 * dVar31;
  if (dVar33 == __real_3ff0000000000000) {
    local_148._s_0.X = (pTVar18->field0_0x0)._s_0.X;
    local_148._s_0.Y = (pTVar18->field0_0x0)._s_0.Y;
    local_148._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar33) {
    dVar33 = __real_3ff0000000000000 / SQRT(dVar33);
    auVar36._0_8_ = dVar40 * dVar33;
    auVar36._8_8_ = 0;
    local_148._s_0.Y = dVar25 * dVar33;
    local_148._s_0.Z = dVar31 * dVar33;
    local_148._s_0.X = auVar36._0_8_;
  }
  else {
    local_148._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_148._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_148._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  UE::Math::TQuat<double>::ToSwingTwist
            (local_c8,(TVector<double> *)&local_148._s_0,&local_118,&local_f8);
  dVar40 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= local_118.W) {
    uVar23 = SUB84(local_118.W,0);
    uVar24 = (int)((ulonglong)local_118.W >> 0x20);
    if (dVar5 <= local_118.W) {
      uVar23 = uVar42;
      uVar24 = (int)uVar19;
    }
  }
  else {
    uVar23 = SUB84(__real_bff0000000000000,0);
    uVar24 = (int)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  acos((double)CONCAT44(uVar24,uVar23));
  if ((dVar40 <= local_f8.W) && (dVar40 = local_f8.W, dVar5 <= local_f8.W)) {
    dVar40 = dVar5;
  }
  acos(dVar40);
  if (4 < (byte)LogIKSolver._0_1_) {
    dVar25 = local_f8.X * local_f8.X + local_f8.Z * local_f8.Z;
    dVar31 = local_f8.Y * local_f8.Y + 0.0;
    dVar40 = dVar31 + dVar25;
    dVar25 = dVar25 + dVar31;
    auVar9._8_4_ = SUB84(dVar25,0);
    auVar9._0_8_ = dVar40;
    auVar9._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar37 = sqrtpd(auVar36,auVar9);
    divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
    uVar19 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar40);
    auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
    local_130._s_0.Z =
         (double)(CONCAT44(~(uint)(uVar19 >> 0x20) &
                           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                 0x20),
                           ~(uint)uVar19 &
                           SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                 uVar19 & (ulonglong)(auVar27._0_8_ * local_f8.Z));
    ::FString::PrintfImpl((FString *)&local_130._s_0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    dVar25 = local_118.X * local_118.X + local_118.Z * local_118.Z;
    dVar31 = local_118.Y * local_118.Y + 0.0;
    dVar40 = dVar25 + dVar31;
    auVar10._8_4_ = SUB84(dVar40,0);
    auVar10._0_8_ = dVar31 + dVar25;
    auVar10._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    auVar27 = sqrtpd(auVar37,auVar10);
    divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
    divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
    ::FString::PrintfImpl((FString *)local_158,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIKSolver);
    if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._0_8_);
    }
    if ((void *)local_130._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_130._s_0.X);
    }
  }
  auVar17._8_8_ = local_118.Y;
  auVar17._0_8_ = local_118.X;
  pdVar1 = *(double **)this;
  dVar25 = *pdVar1;
  dVar31 = pdVar1[1];
  dVar33 = pdVar1[2];
  dVar5 = pdVar1[3];
  dVar15 = dVar25 * local_118.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar5 * local_118.X +
           local_118.Z * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar33 * local_118.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar16 = dVar25 * local_118.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar5 * local_118.Y +
           local_118.W * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar33 * local_118.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar40 = dVar25 * local_118.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           local_118.W * dVar5 +
           dVar31 * local_118.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar33 * local_118.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_158._8_4_ = SUB84(dVar40,0);
  local_158._0_8_ =
       dVar25 * local_118.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       local_118.Z * dVar5 +
       dVar31 * local_118.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar33 * local_118.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_158._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  dVar25 = local_f8.Z * local_f8.Z + local_f8.X * local_f8.X;
  dVar31 = local_f8.Y * local_f8.Y + 0.0;
  dVar40 = dVar31 + dVar25;
  dVar25 = dVar25 + dVar31;
  auVar11._8_4_ = SUB84(dVar25,0);
  auVar11._0_8_ = dVar40;
  auVar11._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar27 = sqrtpd(auVar17,auVar11);
  uVar20 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar40)
  ;
  uVar22 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar25)
  ;
  auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  uVar21 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar40)
  ;
  auVar46._0_8_ = uVar20 & (ulonglong)(auVar37._0_8_ * local_f8.X);
  uVar19 = uVar22 & (ulonglong)(auVar37._8_8_ * local_f8.Y);
  auVar46._8_4_ = (undefined4)uVar19;
  auVar46._12_4_ = (undefined4)(uVar19 >> 0x20);
  fVar4 = GlobalVectorConstants::Float1000.m128_f32[2];
  auVar14._4_4_ =
       ~(uint)(uVar20 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar14._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar14._8_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar14._12_4_ =
       ~(uint)(uVar22 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  __libm_sse2_sincos_();
  pdVar1 = *(double **)((longlong)this + 8);
  dVar26 = SUB168(auVar46 | auVar14,0) * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  dVar41 = (double)(CONCAT44(~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)(double)fVar4 >> 0x20),
                             ~(uint)uVar21 & SUB84((double)fVar4,0)) |
                   uVar21 & (ulonglong)(auVar27._0_8_ * local_f8.Z)) *
           (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  dVar45 = SUB168(auVar46 | auVar14,8) * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  dVar13 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  auVar28._8_4_ = extraout_XMM0_Dc;
  auVar28._0_8_ = dVar41;
  auVar28._12_4_ = extraout_XMM0_Dd;
  auVar34._8_4_ = SUB84(dVar15,0);
  auVar34._0_8_ = dVar15;
  auVar34._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar38._0_8_ = dVar41 * (double)local_158._8_8_;
  auVar38._8_8_ = dVar13 * (double)local_158._8_8_;
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  *pdVar1 = dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar26 * (double)local_158._8_8_ +
            dVar41 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            (double)local_158._0_8_ * dVar45 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  pdVar1[1] = auVar34._8_8_ * dVar41 * dVar33 + dVar45 * (double)local_158._8_8_ +
              auVar28._8_8_ * dVar16 * dVar5 + (double)local_158._0_8_ * dVar26 * dVar32;
  pdVar1[2] = dVar15 * dVar45 * dVar40 + auVar38._0_8_ + dVar26 * dVar16 * dVar31 +
              (double)local_158._0_8_ * dVar13 * dVar25;
  pdVar1[3] = dVar15 * dVar26 * dVar6 + auVar38._8_8_ + dVar45 * dVar16 * dVar8 +
              (double)local_158._0_8_ * dVar41 * dVar7;
  pauVar3 = *(undefined1 (**) [16])((longlong)this + 8);
  dVar31 = *(double *)*pauVar3;
  dVar33 = *(double *)(*pauVar3 + 8);
  dVar5 = *(double *)pauVar3[1];
  dVar6 = *(double *)(pauVar3[1] + 8);
  dVar25 = dVar5 * dVar5 + dVar31 * dVar31;
  dVar32 = dVar6 * dVar6 + dVar33 * dVar33;
  dVar40 = dVar32 + dVar25;
  dVar25 = dVar25 + dVar32;
  auVar12._8_4_ = SUB84(dVar25,0);
  auVar12._0_8_ = dVar40;
  auVar12._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar27 = sqrtpd(auVar38,auVar12);
  uVar21 = -(ulonglong)(local_d8 <= dVar40);
  uVar20 = -(ulonglong)(local_d8 <= dVar25);
  uVar43 = (uint)(uVar21 >> 0x20);
  uVar44 = (uint)(uVar20 >> 0x20);
  auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  auVar39._0_8_ = uVar21 & (ulonglong)(auVar37._0_8_ * dVar31);
  uVar19 = uVar20 & (ulonglong)(auVar37._8_8_ * dVar33);
  auVar39._8_4_ = (undefined4)uVar19;
  auVar39._12_4_ = (undefined4)(uVar19 >> 0x20);
  auVar29._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar29._4_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar29._12_4_ =
       ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar35._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar35._4_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar35._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar35._12_4_ =
       ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  *pauVar3 = auVar39 | auVar29;
  auVar30._0_8_ = (ulonglong)(auVar27._0_8_ * dVar5) & uVar21;
  uVar20 = (ulonglong)(auVar27._8_8_ * dVar6) & uVar20;
  auVar30._8_4_ = (undefined4)uVar20;
  auVar30._12_4_ = (undefined4)(uVar20 >> 0x20);
  pauVar3[1] = auVar35 | auVar30;
  **(undefined1 **)((longlong)this + 0x10) = 1;
  return;
}

// ApplyConstraint @ 14df789c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRotationLimitConstraint::ApplyConstraint
          (FRotationLimitConstraint *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 uVar18;
  TTransform<double> *pTVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar51;
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
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar67;
  undefined1 auVar62 [16];
  double dVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar70;
  uint uVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  undefined1 auVar81 [16];
  double dVar84;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  uint uVar89;
  uint uVar90;
  undefined4 uVar91;
  uint uVar92;
  undefined4 uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auStackY_308 [32];
  char local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_298;
  double local_288;
  double dStack_280;
  undefined1 *local_278;
  undefined1 *local_270;
  char *local_268;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar23 = this->ConstrainedIndex;
  local_298 = param_2;
  if (((((int)uVar23 < 0) || (param_1->ArrayNum <= (int)uVar23)) || (this->BaseIndex < 0)) ||
     (param_1->ArrayNum <= this->BaseIndex)) {
    bVar17 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3777367163522777025>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\FBIKConstraint.cpp"
                        ,0x3f,
                        "InOutLinkData.IsValidIndex(ConstrainedIndex) && InOutLinkData.IsValidIndex(BaseIndex)"
                       );
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    bVar17 = false;
  }
  else {
    uVar76 = 0;
    if ((int)uVar23 < param_2->ArrayNum) {
      uVar76 = ~uVar23 >> 0x1f;
    }
    if ((uVar76 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    dVar15 = __real_3e45798ee0000000;
    pFVar3 = (param_2->AllocatorInstance).Data;
    dVar87 = (this->BaseFrameOffset).X *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar9 = (this->BaseFrameOffset).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
    ;
    lVar21 = (longlong)(int)uVar23 * 0x60;
    local_208.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar21);
    local_208.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar21 + 8);
    dVar52 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] *
             (this->BaseFrameOffset).Z;
    dVar69 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] *
             (this->BaseFrameOffset).W;
    local_288 = *(double *)(pFVar3 + lVar21 + 0x10);
    dStack_280 = *(double *)(pFVar3 + lVar21 + 0x10 + 8);
    local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar21 + 0x20);
    local_208.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar21 + 0x20 + 8);
    local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar21 + 0x30);
    local_208.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar21 + 0x30 + 8);
    local_208.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar21 + 0x40);
    local_208.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar21 + 0x40 + 8);
    local_208.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar21 + 0x50);
    local_208.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar21 + 0x50 + 8);
    uVar91 = (undefined4)((ulonglong)dVar69 >> 0x20);
    uVar93 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar60._8_4_ = SUB84(dVar69,0);
    auVar60._0_8_ = dVar69;
    auVar60._12_4_ = uVar91;
    uVar98 = (undefined4)((ulonglong)dVar52 >> 0x20);
    auVar53._8_4_ = SUB84(dVar9,0);
    auVar53._0_8_ = dVar9;
    auVar53._12_4_ = uVar93;
    auVar57._8_4_ = SUB84(dVar52,0);
    auVar57._0_8_ = dVar52;
    auVar57._12_4_ = uVar98;
    auVar81._8_4_ = SUB84(dVar87,0);
    auVar81._0_8_ = dVar87;
    auVar81._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
    dVar6 = dVar87 * dStack_280 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar69 * local_208.Rotation.XY.m128d_f64[0] +
            dVar9 * local_288 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar52 * local_208.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar7 = dVar87 * local_288 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar60._8_8_ * local_208.Rotation.XY.m128d_f64[1] +
            auVar53._8_8_ * dStack_280 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar57._8_8_ * local_208.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar109._8_4_ = SUB84(dVar69,0);
    auVar109._0_8_ = dVar69;
    auVar109._12_4_ = uVar91;
    auVar54._8_4_ = SUB84(dVar9,0);
    auVar54._0_8_ = dVar9;
    auVar54._12_4_ = uVar93;
    auVar28._8_4_ = SUB84(dVar52,0);
    auVar28._0_8_ = dVar52;
    auVar28._12_4_ = uVar98;
    local_248 = __real_3e45798ee0000000;
    dVar80 = dVar87 * local_208.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar69 * local_288 +
             dVar9 * local_208.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar52 * dStack_280 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar84 = auVar81._8_8_ * local_208.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             auVar109._8_8_ * dStack_280 +
             auVar54._8_8_ * local_208.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             auVar28._8_8_ * local_288 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar29._8_4_ = SUB84(dVar7,0);
    auVar29._0_8_ = dVar6;
    auVar29._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    uStack_250 = 0;
    auVar55._8_4_ = SUB84(dVar84,0);
    auVar55._0_8_ = dVar80;
    auVar55._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
    auVar56._0_8_ = dVar80 * dVar80 + dVar6 * dVar6;
    auVar56._8_8_ = auVar55._8_8_ * dVar84 + auVar29._8_8_ * dVar7;
    uVar22 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    uVar89 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    uVar90 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar92 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar30._8_4_ = SUB84(auVar56._8_8_,0);
    auVar30._0_8_ = auVar56._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar31._0_8_ = auVar30._8_8_ + auVar56._0_8_;
    auVar31._8_8_ = auVar56._0_8_ + auVar56._8_8_;
    uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= auVar31._0_8_);
    uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar31._8_8_);
    auVar57 = sqrtpd(auVar56,auVar31);
    uVar94 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    uVar95 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    uVar96 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar97 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_278 = local_228;
    auVar60 = *(undefined1 (*) [16])(this->RelativelRefPose).Rotation.XY.m128d_f64;
    dVar86 = auVar60._0_8_;
    uVar23 = (uint)(uVar24 >> 0x20);
    uVar76 = (uint)(uVar25 >> 0x20);
    auVar32._0_4_ = ~(uint)uVar24 & uVar22;
    auVar32._4_4_ = ~uVar23 & uVar89;
    auVar32._8_4_ = ~(uint)uVar25 & uVar90;
    auVar32._12_4_ = ~uVar76 & uVar92;
    auVar109 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
    local_2d8[0] = '\0';
    local_270 = local_2c8;
    local_268 = local_2d8;
    dVar79 = auVar60._8_8_;
    local_2c8._0_8_ = uVar24 & (ulonglong)(auVar109._0_8_ * dVar6);
    uVar14 = uVar25 & (ulonglong)(auVar109._8_8_ * dVar7);
    local_2c8._8_4_ = (undefined4)uVar14;
    local_2c8._12_4_ = (undefined4)(uVar14 >> 0x20);
    local_2c8 = local_2c8 | auVar32;
    auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
    auVar33._0_8_ = (ulonglong)(auVar57._0_8_ * dVar80) & uVar24;
    uVar14 = (ulonglong)(auVar57._8_8_ * dVar84) & uVar25;
    auVar33._8_4_ = (undefined4)uVar14;
    auVar33._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar71._0_4_ = ~(uint)uVar24 & uVar94;
    auVar71._4_4_ = ~uVar23 & uVar95;
    auVar71._8_4_ = ~(uint)uVar25 & uVar96;
    auVar71._12_4_ = ~uVar76 & uVar97;
    local_2b8 = auVar33 | auVar71;
    dVar80 = (this->RelativelRefPose).Rotation.ZW.m128d_f64[0];
    dVar84 = (this->RelativelRefPose).Rotation.ZW.m128d_f64[1];
    auVar34._8_4_ = auVar60._0_4_;
    auVar34._0_8_ = dVar79;
    auVar34._12_4_ = auVar60._4_4_;
    dVar6 = dVar84 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar86 * dVar69 +
            dVar80 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar79 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar7 = dVar80 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar79 * dVar69 +
            dVar84 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar34._8_8_ * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
    ;
    dVar85 = dVar79 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar80 * dVar69 +
             dVar86 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar84 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar87 = dVar86 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar84 * dVar69 +
             dVar79 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar80 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar35._8_4_ = SUB84(dVar7,0);
    auVar35._0_8_ = dVar6;
    auVar35._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_258 = __real_3e45798ee0000000;
    auVar58._8_4_ = SUB84(dVar87,0);
    auVar58._0_8_ = dVar85;
    auVar58._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
    auVar59._0_8_ = dVar85 * dVar85 + dVar6 * dVar6;
    auVar59._8_8_ = auVar58._8_8_ * dVar87 + auVar35._8_8_ * dVar7;
    auVar36._8_4_ = SUB84(auVar59._8_8_,0);
    auVar36._0_8_ = auVar59._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    auVar37._0_8_ = auVar36._8_8_ + auVar59._0_8_;
    auVar37._8_8_ = auVar59._0_8_ + auVar59._8_8_;
    auVar60 = sqrtpd(auVar59,auVar37);
    uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= auVar37._0_8_);
    uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar37._8_8_);
    auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar60);
    uVar23 = (uint)(uVar24 >> 0x20);
    uVar76 = (uint)(uVar25 >> 0x20);
    auVar38._0_4_ = ~(uint)uVar24 & uVar22;
    auVar38._4_4_ = ~uVar23 & uVar89;
    auVar38._8_4_ = ~(uint)uVar25 & uVar90;
    auVar38._12_4_ = ~uVar76 & uVar92;
    local_228._0_8_ = uVar24 & (ulonglong)(auVar57._0_8_ * dVar6);
    uVar14 = uVar25 & (ulonglong)(auVar57._8_8_ * dVar7);
    local_228._8_4_ = (undefined4)uVar14;
    local_228._12_4_ = (undefined4)(uVar14 >> 0x20);
    local_228 = local_228 | auVar38;
    auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar60);
    local_218._0_8_ = (ulonglong)(auVar60._0_8_ * dVar85) & uVar24;
    uVar14 = (ulonglong)(auVar60._8_8_ * dVar87) & uVar25;
    local_218._8_4_ = (undefined4)uVar14;
    local_218._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar77._0_4_ = ~(uint)uVar24 & uVar94;
    auVar77._4_4_ = ~uVar23 & uVar95;
    auVar77._8_4_ = ~(uint)uVar25 & uVar96;
    auVar77._12_4_ = ~uVar76 & uVar97;
    local_218 = local_218 | auVar77;
    local_2a8 = local_2b8;
    local_238 = local_208.Rotation.XY.m128d_f64[0];
    uStack_230 = local_208.Rotation.XY.m128d_f64[1];
    local_208.Rotation.ZW.m128d_f64[0] = local_288;
    local_208.Rotation.ZW.m128d_f64[1] = dStack_280;
    if (this->bXLimitSet == 0) {
      local_2a8._0_4_ = local_2b8._0_4_;
      local_2a8._4_4_ = local_2b8._4_4_;
      local_2a8._8_4_ = local_2b8._8_4_;
      local_2a8._12_4_ = local_2b8._12_4_;
      local_238._0_4_ = SUB84(local_208.Rotation.XY.m128d_f64[0],0);
      local_238._4_4_ = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[0] >> 0x20);
      uStack_230._0_4_ = SUB84(local_208.Rotation.XY.m128d_f64[1],0);
      uStack_230._4_4_ = (undefined4)((ulonglong)local_208.Rotation.XY.m128d_f64[1] >> 0x20);
      local_2b8._0_4_ = local_2a8._0_4_;
      local_2b8._4_4_ = local_2a8._4_4_;
      local_2b8._8_4_ = local_2a8._8_4_;
      local_2b8._12_4_ = local_2a8._12_4_;
      local_208.Rotation.XY.m128d_f64[0]._0_4_ = (undefined4)local_238;
      uVar91 = local_238._4_4_;
      local_208.Rotation.XY.m128d_f64[1]._0_4_ = (undefined4)uStack_230;
      uVar93 = uStack_230._4_4_;
    }
    else {
      `FRotationLimitConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_278,X,(float)(this->Limit).field0_0x0._s_0.X);
      uVar91 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
      uVar93 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
    }
    fVar102 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar103 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar104 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar105 = GlobalVectorConstants::Float0001.m128_f32[3];
    uVar98 = local_2b8._0_4_;
    uVar99 = local_2b8._4_4_;
    uVar100 = local_2b8._8_4_;
    uVar101 = local_2b8._12_4_;
    uVar106 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
    uVar107 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
    if (this->bYLimitSet != '\0') {
      local_288 = local_208.Rotation.ZW.m128d_f64[0];
      dStack_280 = local_208.Rotation.ZW.m128d_f64[1];
      `FRotationLimitConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_278,Y,(float)(this->Limit).field0_0x0._s_0.Y);
      fVar102 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar103 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar104 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar105 = GlobalVectorConstants::Float0001.m128_f32[3];
      uVar98 = local_2b8._0_4_;
      uVar99 = local_2b8._4_4_;
      uVar100 = local_2b8._8_4_;
      uVar101 = local_2b8._12_4_;
      uVar106 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
      uVar91 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
      uVar107 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
      uVar93 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
    }
    local_288 = local_208.Rotation.ZW.m128d_f64[0];
    dStack_280 = local_208.Rotation.ZW.m128d_f64[1];
    if (this->bZLimitSet != '\0') {
      `FRotationLimitConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_278,Z,(float)(this->Limit).field0_0x0._s_0.Z);
      fVar102 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar103 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar104 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar105 = GlobalVectorConstants::Float0001.m128_f32[3];
      local_288 = local_208.Rotation.ZW.m128d_f64[0];
      dStack_280 = local_208.Rotation.ZW.m128d_f64[1];
      uVar98 = local_2b8._0_4_;
      uVar99 = local_2b8._4_4_;
      uVar100 = local_2b8._8_4_;
      uVar101 = local_2b8._12_4_;
      uVar106 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
      uVar91 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
      uVar107 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
      uVar93 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
    }
    dVar84 = local_208.Scale3D.ZW.m128d_f64[1];
    dVar80 = local_208.Scale3D.ZW.m128d_f64[0];
    dVar69 = local_208.Scale3D.XY.m128d_f64[1];
    dVar52 = local_208.Scale3D.XY.m128d_f64[0];
    dVar9 = local_208.Translation.ZW.m128d_f64[1];
    dVar87 = local_208.Translation.ZW.m128d_f64[0];
    dVar7 = local_208.Translation.XY.m128d_f64[1];
    dVar6 = local_208.Translation.XY.m128d_f64[0];
    if (local_2d8[0] != '\0') {
      dVar68 = (this->BaseFrameOffset).X;
      dVar88 = (this->BaseFrameOffset).Y;
      dVar70 = local_2c8._0_8_;
      uVar1 = (this->BaseFrameOffset).Z;
      uVar2 = (this->BaseFrameOffset).W;
      dVar110 = local_2c8._8_8_;
      auVar61._0_8_ = (double)CONCAT44(uVar99,uVar98);
      auVar61._8_4_ = uVar100;
      auVar61._12_4_ = uVar101;
      auVar39._8_4_ = (int)uVar1;
      auVar39._0_8_ = uVar1;
      auVar39._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
      dVar51 = auVar39._8_8_ * dVar70 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar67 = auVar61._8_8_ * dVar88 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      dVar86 = dVar68 * (double)CONCAT44(uVar101,uVar100) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar70 * (double)uVar2 +
               auVar61._0_8_ * dVar88 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               (double)uVar1 * dVar110 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar85 = dVar68 * (double)CONCAT44(uVar99,uVar98) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar110 * (double)uVar2 + dVar67 + dVar51;
      auVar10._4_8_ = dVar70;
      auVar10._0_4_ = (int)((ulonglong)dVar86 >> 0x20);
      auVar72._0_8_ = auVar10._0_8_ << 0x20;
      auVar72._8_4_ = SUB84(dVar85,0);
      auVar72._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
      dVar79 = dVar68 * dVar110 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               (double)CONCAT44(uVar99,uVar98) * (double)uVar2 +
               dVar70 * dVar88 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               (double)uVar1 * (double)CONCAT44(uVar101,uVar100) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar68 = dVar68 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               (double)CONCAT44(uVar101,uVar100) * (double)uVar2 +
               dVar110 * dVar88 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               (double)uVar1 * (double)CONCAT44(uVar99,uVar98) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar88 = auVar72._8_8_;
      auVar11._4_8_ = dVar51;
      auVar11._0_4_ = (int)((ulonglong)local_288 >> 0x20);
      auVar40._0_8_ = auVar11._0_8_ << 0x20;
      auVar40._8_4_ = SUB84(dStack_280,0);
      auVar40._12_4_ = (int)((ulonglong)dStack_280 >> 0x20);
      auVar12._4_8_ = dVar67;
      auVar12._0_4_ = (int)((ulonglong)dVar79 >> 0x20);
      auVar62._0_8_ = auVar12._0_8_ << 0x20;
      auVar62._8_4_ = SUB84(dVar68,0);
      auVar62._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      dVar68 = auVar62._8_8_;
      auVar13._4_8_ = dStack_280;
      auVar13._0_4_ = uVar91;
      auVar41._0_8_ = auVar13._0_8_ << 0x20;
      auVar41._8_4_ = uVar107;
      auVar41._12_4_ = uVar93;
      auVar73._0_8_ = dVar88 * auVar41._8_8_ + dVar86 * (double)CONCAT44(uVar91,uVar106);
      auVar73._8_8_ = dVar85;
      if (dVar68 * auVar40._8_8_ + dVar79 * local_288 + auVar73._0_8_ < 0.0) {
        dVar86 = ___xmm_bff0000000000000bff0000000000000 * dVar86;
        dVar88 = _UNK_15076c718 * dVar88;
        dVar79 = (double)_UNK_15076c668 * dVar79;
        dVar68 = (double)_UNK_15076c66c * dVar68;
      }
      uVar93 = (undefined4)((ulonglong)dVar68 >> 0x20);
      uVar91 = SUB84(dVar68,0);
      uVar23 = this->ConstrainedIndex;
      auVar42._8_4_ = uVar91;
      auVar42._0_8_ = dVar79;
      auVar42._12_4_ = uVar93;
      uVar76 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar76 = ~uVar23 >> 0x1f;
      }
      local_288 = dVar15;
      local_208.Rotation.ZW.m128d_f64[1]._0_4_ = uVar91;
      local_208.Rotation.ZW.m128d_f64[0] = dVar79;
      local_208.Rotation.ZW.m128d_f64[1]._4_4_ = uVar93;
      dVar85 = dVar86 * dVar86 + dVar79 * dVar79;
      dVar51 = dVar88 * dVar88 + auVar42._8_8_ * dVar68;
      auVar43._8_4_ = SUB84(dVar51,0);
      auVar43._0_8_ = dVar85;
      auVar43._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      auVar44._0_8_ = auVar43._8_8_ + dVar85;
      auVar44._8_8_ = dVar85 + dVar51;
      auVar60 = sqrtpd(auVar73,auVar44);
      uVar25 = -(ulonglong)(dVar15 <= auVar44._0_8_);
      uVar24 = -(ulonglong)(dVar15 <= auVar44._8_8_);
      uVar22 = (uint)(uVar25 >> 0x20);
      uVar89 = (uint)(uVar24 >> 0x20);
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar60);
      auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar60);
      auVar63._0_4_ = ~(uint)uVar25 & SUB84((double)fVar102,0);
      auVar63._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar102 >> 0x20);
      auVar63._8_4_ = ~(uint)uVar24 & SUB84((double)fVar103,0);
      auVar63._12_4_ = ~uVar89 & (uint)((ulonglong)(double)fVar103 >> 0x20);
      auVar108._0_8_ = uVar25 & (ulonglong)(auVar57._0_8_ * dVar86);
      uVar14 = uVar24 & (ulonglong)(auVar57._8_8_ * dVar88);
      auVar108._8_4_ = (undefined4)uVar14;
      auVar108._12_4_ = (undefined4)(uVar14 >> 0x20);
      local_2c8 = auVar108 | auVar63;
      auVar64._0_4_ = ~(uint)uVar25 & SUB84((double)fVar104,0);
      auVar64._4_4_ = ~uVar22 & (uint)((ulonglong)(double)fVar104 >> 0x20);
      auVar64._8_4_ = ~(uint)uVar24 & SUB84((double)fVar105,0);
      auVar64._12_4_ = ~uVar89 & (uint)((ulonglong)(double)fVar105 >> 0x20);
      auVar111._0_8_ = (ulonglong)(auVar60._0_8_ * dVar79) & uVar25;
      uVar24 = (ulonglong)(auVar60._8_8_ * dVar68) & uVar24;
      auVar111._8_4_ = (undefined4)uVar24;
      auVar111._12_4_ = (undefined4)(uVar24 >> 0x20);
      local_2b8 = auVar64 | auVar111;
      local_208.Rotation.XY.m128d_f64[0] = dVar86;
      local_208.Rotation.XY.m128d_f64[1] = dVar88;
      if ((uVar76 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar21 = (longlong)(int)uVar23 * 0x60;
      *(double *)(pFVar3 + lVar21) = dVar86;
      *(double *)(pFVar3 + lVar21 + 8) = dVar88;
      auVar8._8_4_ = uVar91;
      auVar8._0_8_ = dVar79;
      auVar8._12_4_ = uVar93;
      *(undefined1 (*) [16])(pFVar3 + lVar21 + 0x10) = auVar8;
      *(double *)(pFVar3 + lVar21 + 0x20) = dVar6;
      *(double *)(pFVar3 + lVar21 + 0x20 + 8) = dVar7;
      *(double *)(pFVar3 + lVar21 + 0x30) = dVar87;
      *(double *)(pFVar3 + lVar21 + 0x30 + 8) = dVar9;
      *(double *)(pFVar3 + lVar21 + 0x40) = dVar52;
      *(double *)(pFVar3 + lVar21 + 0x40 + 8) = dVar69;
      *(double *)(pFVar3 + lVar21 + 0x50) = dVar80;
      *(double *)(pFVar3 + lVar21 + 0x50 + 8) = dVar84;
      uVar23 = this->ConstrainedIndex;
      uVar76 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar76 = ~uVar23 >> 0x1f;
      }
      if ((uVar76 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      uVar76 = this->BaseIndex;
      pFVar3 = (param_1->AllocatorInstance).Data;
      uVar22 = 0;
      if ((int)uVar76 < param_1->ArrayNum) {
        uVar22 = ~uVar76 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      auVar74._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
      auVar74._0_8_ = auVar74._8_8_;
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_1a8,&local_208,
                 (TTransform<double> *)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar76 * 0x130 + 0x10));
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x10) =
           local_1a8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x18) =
           local_1a8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x20) =
           local_1a8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x28) =
           local_1a8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x30) =
           local_1a8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x38) =
           local_1a8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x40) =
           local_1a8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x48) =
           local_1a8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x50) = local_1a8.Scale3D.XY.m128d_f64[0]
      ;
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x58) = local_1a8.Scale3D.XY.m128d_f64[1]
      ;
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x60) = local_1a8.Scale3D.ZW.m128d_f64[0]
      ;
      *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x68) = local_1a8.Scale3D.ZW.m128d_f64[1]
      ;
      dVar6 = *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x10);
      dVar7 = *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x18);
      dVar87 = *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x20);
      dVar9 = *(double *)(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x28);
      dVar52 = dVar87 * dVar87 + dVar6 * dVar6;
      dVar69 = dVar9 * dVar9 + dVar7 * dVar7;
      auVar45._8_4_ = SUB84(dVar69,0);
      auVar45._0_8_ = dVar52;
      auVar45._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      auVar46._0_8_ = auVar45._8_8_ + dVar52;
      auVar46._8_8_ = dVar52 + dVar69;
      auVar57 = sqrtpd(auVar74,auVar46);
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar46._0_8_)
      ;
      uVar26 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar46._8_8_)
      ;
      uVar25 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar46._0_8_)
      ;
      uVar27 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar46._8_8_)
      ;
      auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
      auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
      auVar47._0_8_ = uVar25 & (ulonglong)(auVar60._0_8_ * dVar6);
      uVar14 = uVar27 & (ulonglong)(auVar60._8_8_ * dVar7);
      auVar47._8_4_ = (undefined4)uVar14;
      auVar47._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar82._0_8_ = uVar24 & (ulonglong)(auVar57._0_8_ * dVar87);
      uVar14 = uVar26 & (ulonglong)(auVar57._8_8_ * dVar9);
      auVar82._8_4_ = (undefined4)uVar14;
      auVar82._12_4_ = (undefined4)(uVar14 >> 0x20);
      auVar5._4_4_ = ~(uint)(uVar25 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar5._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar5._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar5._12_4_ =
           ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar65._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar65._4_4_ =
           ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar65._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar65._12_4_ =
           ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x10) = auVar47 | auVar5;
      *(undefined1 (*) [16])(pFVar3 + (longlong)(int)uVar23 * 0x130 + 0x20) = auVar82 | auVar65;
      iVar20 = param_1->ArrayNum;
      uVar23 = this->ConstrainedIndex + 1;
      if ((int)uVar23 < iVar20) {
        local_2a8._0_8_ = (longlong)(int)uVar23 * 0x60;
        lVar21 = (longlong)(int)uVar23 * 0x130;
        do {
          uVar22 = ~uVar23 >> 0x1f;
          uVar76 = 0;
          if ((int)uVar23 < iVar20) {
            uVar76 = uVar22;
          }
          if ((uVar76 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          uVar76 = *(uint *)((param_1->AllocatorInstance).Data + lVar21);
          uVar89 = 0;
          if ((int)uVar23 < param_1->ArrayNum) {
            uVar89 = uVar22;
          }
          if ((uVar89 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar89 = 0;
          if ((int)uVar23 < local_298->ArrayNum) {
            uVar89 = uVar22;
          }
          if ((uVar89 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          uVar16 = local_2a8._0_8_;
          pTVar19 = (TTransform<double> *)((local_298->AllocatorInstance).Data + local_2a8._0_8_);
          uVar22 = 0;
          if ((int)uVar76 < param_1->ArrayNum) {
            uVar22 = ~uVar76 >> 0x1f;
          }
          local_2a8._0_8_ = pTVar19;
          if ((uVar22 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_148.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_148.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_148.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_148.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_148,(TTransform<double> *)local_2a8._0_8_,
                     (TTransform<double> *)
                     ((param_1->AllocatorInstance).Data + (longlong)(int)uVar76 * 0x130 + 0x10));
          *(double *)(pFVar3 + lVar21 + 0x10) = local_148.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x10 + 8) = local_148.Rotation.XY.m128d_f64[1];
          uVar23 = uVar23 + 1;
          *(double *)(pFVar3 + lVar21 + 0x20) = local_148.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x20 + 8) = local_148.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar3 + lVar21 + 0x30) = local_148.Translation.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x30 + 8) = local_148.Translation.XY.m128d_f64[1];
          *(double *)(pFVar3 + lVar21 + 0x40) = local_148.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x40 + 8) = local_148.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar3 + lVar21 + 0x50) = local_148.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x50 + 8) = local_148.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar3 + lVar21 + 0x60) = local_148.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar3 + lVar21 + 0x60 + 8) = local_148.Scale3D.ZW.m128d_f64[1];
          dVar6 = *(double *)(pFVar3 + lVar21 + 0x10);
          dVar7 = *(double *)(pFVar3 + lVar21 + 0x10 + 8);
          dVar87 = *(double *)(pFVar3 + lVar21 + 0x20);
          dVar9 = *(double *)(pFVar3 + lVar21 + 0x20 + 8);
          auVar66._0_8_ = dVar87 * dVar87 + dVar6 * dVar6;
          auVar66._8_8_ = dVar9 * dVar9 + dVar7 * dVar7;
          auVar48._8_4_ = SUB84(auVar66._8_8_,0);
          auVar48._0_8_ = auVar66._0_8_;
          auVar48._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
          auVar49._0_8_ = auVar48._8_8_ + auVar66._0_8_;
          auVar49._8_8_ = auVar66._0_8_ + auVar66._8_8_;
          auVar57 = sqrtpd(auVar66,auVar49);
          uVar24 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar49._0_8_);
          uVar26 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar49._8_8_);
          uVar25 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar49._0_8_);
          uVar27 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar49._8_8_);
          auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
          auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
          auVar50._0_8_ = (ulonglong)(auVar60._0_8_ * dVar6) & uVar25;
          uVar14 = uVar27 & (ulonglong)(auVar60._8_8_ * dVar7);
          auVar50._8_4_ = (undefined4)uVar14;
          auVar50._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar83._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar83._4_4_ =
               ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar83._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar83._12_4_ =
               ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar78._0_8_ = uVar24 & (ulonglong)(auVar57._0_8_ * dVar87);
          uVar14 = uVar26 & (ulonglong)(auVar57._8_8_ * dVar9);
          auVar78._8_4_ = (undefined4)uVar14;
          auVar78._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar75._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar75._4_4_ =
               ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar75._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar75._12_4_ =
               ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar3 + lVar21 + 0x10) = auVar50 | auVar83;
          *(undefined1 (*) [16])(pFVar3 + lVar21 + 0x20) = auVar78 | auVar75;
          iVar20 = param_1->ArrayNum;
          lVar21 = lVar21 + 0x130;
          local_2a8._0_8_ = uVar16 + 0x60;
        } while ((int)uVar23 < iVar20);
      }
    }
    bVar17 = true;
  }
  return bVar17;
}

