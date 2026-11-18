// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 10

// CalculateAngularVelocity1 @ 1436248d0

TVector<float,3> * __cdecl
Chaos::TRotation<float,3>::CalculateAngularVelocity1
          (TVector<float,3> *__return_storage_ptr__,TRotation<float,3> *param_1,
          TRotation<float,3> *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  TVector<float,3> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  
  if (__real_322bcc77 < param_3) {
    fVar5 = *(float *)param_1;
    fVar6 = *(float *)&param_1->field_0x4;
    fVar7 = *(float *)&param_1->field_0x8;
    fVar14 = *(float *)&param_1->field_0xc;
    fVar4 = __real_bf800000;
    if (0.0 <= *(float *)&param_2->field_0xc * fVar14 + *(float *)&param_2->field_0x8 * fVar7 +
               *(float *)&param_2->field_0x4 * fVar6 + *(float *)param_2 * fVar5) {
      fVar4 = __real_3f800000;
    }
    fVar8 = fVar5 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
    fVar9 = fVar6 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
    fVar10 = fVar7 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
    fVar11 = fVar14 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
    auVar12._0_4_ = *(float *)param_2 * fVar4 - fVar5;
    auVar12._4_4_ = *(float *)&param_2->field_0x4 * fVar4 - fVar6;
    auVar12._8_4_ = *(float *)&param_2->field_0x8 * fVar4 - fVar7;
    auVar12._12_4_ = fVar4 * *(float *)&param_2->field_0xc - fVar14;
    auVar13._4_4_ = param_3;
    auVar13._0_4_ = param_3;
    auVar13._8_4_ = param_3;
    auVar13._12_4_ = param_3;
    auVar13 = divps(auVar12,auVar13);
    fVar7 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar4 = auVar13._8_4_;
    fVar15 = auVar13._12_4_;
    fVar5 = fVar7 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar15 * fVar8 +
            fVar14 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
            fVar4 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar6 = fVar7 * fVar10 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar15 * fVar9 +
            fVar14 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
            fVar4 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar7 = fVar7 * fVar9 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar15 * fVar10 +
            fVar14 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
            fVar4 * fVar11 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    *(float *)__return_storage_ptr__ = fVar5 + fVar5;
    *(float *)&__return_storage_ptr__->field_0x8 = fVar7 + fVar7;
    *(float *)&__return_storage_ptr__->field_0x4 = fVar6 + fVar6;
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4849772161772028013>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Rotation.cpp"
                     ,0x6d,"InDt > (1.e-8f)");
  if (!bVar2) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TVector<float,3> *)(*pcVar1)();
  return pTVar3;
}

// CalculateAngularVelocity1 @ 143624a90

TVector<double,3> * __cdecl
Chaos::TRotation<double,3>::CalculateAngularVelocity1
          (TVector<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1,
          TRotation<double,3> *param_2,double param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double,3> *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  double dVar11;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  
  uVar12 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (__real_3e45798ee0000000 < param_3) {
    dVar15 = *(double *)param_1;
    dVar4 = *(double *)&param_1->field_0x8;
    dVar5 = *(double *)&param_1->field_0x10;
    dVar6 = *(double *)&param_1->field_0x18;
    if (*(double *)&param_2->field_0x18 * dVar6 + *(double *)&param_2->field_0x10 * dVar5 +
        *(double *)&param_2->field_0x8 * dVar4 + *(double *)param_2 * dVar15 < 0.0) {
      uVar9 = (undefined4)__real_bff0000000000000;
      uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar9 = (undefined4)__real_3ff0000000000000;
      uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    auVar17._0_8_ = *(double *)param_2 * (double)CONCAT44(uVar10,uVar9) - dVar15;
    auVar17._8_8_ = *(double *)&param_2->field_0x8 * (double)CONCAT44(uVar10,uVar9) - dVar4;
    dVar15 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar4 = dVar4 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar18._8_4_ = SUB84(param_3,0);
    auVar18._0_8_ = param_3;
    auVar18._12_4_ = uVar12;
    auVar18 = divpd(auVar17,auVar18);
    dVar16 = auVar18._0_8_;
    dVar19 = auVar18._8_8_;
    auVar20._0_8_ = *(double *)&param_2->field_0x10 * (double)CONCAT44(uVar10,uVar9) - dVar5;
    auVar20._8_8_ = *(double *)&param_2->field_0x18 * (double)CONCAT44(uVar10,uVar9) - dVar6;
    dVar5 = dVar5 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar2._8_4_ = SUB84(param_3,0);
    auVar2._0_8_ = param_3;
    auVar2._12_4_ = uVar12;
    auVar18 = divpd(auVar20,auVar2);
    dVar11 = auVar18._0_8_;
    dVar13 = auVar18._8_8_;
    dVar3 = dVar16 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar13 * dVar5 +
            dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar11 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar14 = dVar16 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar13 * dVar15 +
             dVar19 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar11 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar15 = dVar16 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar13 * dVar4 +
             dVar19 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    *(double *)&__return_storage_ptr__->field_0x10 = dVar3 + dVar3;
    *(double *)__return_storage_ptr__ = dVar14 + dVar14;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar15 + dVar15;
    return __return_storage_ptr__;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4849772161772027994>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Rotation.cpp"
                     ,0x5a,"InDt > (1.e-8f)");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TVector<double,3> *)(*pcVar1)();
    return pTVar8;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// CalculateAngularVelocity2 @ 143624cd0

TVector<double,3> * __cdecl
Chaos::TRotation<double,3>::CalculateAngularVelocity2
          (TVector<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1,
          TRotation<double,3> *param_2,double param_3)

{
  code *pcVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  ulonglong uVar10;
  bool bVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (__real_3e45798ee0000000 < param_3) {
    dVar22 = __real_bff0000000000000;
    if (0.0 <= *(double *)&param_2->field_0x18 * *(double *)&param_1->field_0x18 +
               *(double *)&param_2->field_0x10 * *(double *)&param_1->field_0x10 +
               *(double *)&param_2->field_0x8 * *(double *)&param_1->field_0x8 +
               *(double *)param_2 * *(double *)param_1) {
      dVar22 = __real_3ff0000000000000;
    }
    dVar5 = *(double *)&param_1->field_0x10 *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar16 = *(double *)&param_1->field_0x18 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar23 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar26 = *(double *)&param_1->field_0x8 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar6 = *(double *)&param_2->field_0x8 * dVar22;
    dVar18 = *(double *)param_2 * dVar22;
    dVar21 = *(double *)&param_2->field_0x10 * dVar22;
    dVar22 = *(double *)&param_2->field_0x18 * dVar22;
    auVar20._8_4_ = SUB84(dVar6,0);
    auVar20._0_8_ = dVar6;
    auVar20._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar17 = auVar20._8_8_ * dVar16 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    auVar19._0_8_ = dVar6 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
    ;
    auVar19._8_8_ = dVar6 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
    ;
    dVar7 = dVar18 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar22 * dVar23 +
            dVar6 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar21 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar8 = dVar18 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar22 * dVar26 + dVar17 +
            dVar21 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar6 = dVar18 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar22 * dVar5 + auVar19._0_8_ +
            dVar21 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar22 = dVar18 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar22 * dVar16 + auVar19._8_8_ +
             dVar21 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar9._4_8_ = dVar17;
    auVar9._0_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar24._0_8_ = auVar9._0_8_ << 0x20;
    auVar24._8_4_ = SUB84(dVar22,0);
    auVar24._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar5 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= auVar24._8_8_) &&
       (dVar5 = dVar22, __real_3ff0000000000000 <= auVar24._8_8_)) {
      dVar5 = __real_3ff0000000000000;
    }
    dVar16 = dVar6 * dVar6 + dVar7 * dVar7;
    dVar17 = dVar8 * dVar8 + 0.0;
    dVar22 = dVar17 + dVar16;
    dVar16 = dVar16 + dVar17;
    auVar3._8_4_ = SUB84(dVar16,0);
    auVar3._0_8_ = dVar22;
    auVar3._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar20 = sqrtpd(auVar19,auVar3);
    uVar13 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar22);
    uVar15 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar16);
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
    uVar14 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar22);
    auVar25._0_8_ = uVar13 & (ulonglong)(auVar24._0_8_ * dVar7);
    uVar10 = uVar15 & (ulonglong)(auVar24._8_8_ * dVar8);
    auVar25._8_4_ = (undefined4)uVar10;
    auVar25._12_4_ = (undefined4)(uVar10 >> 0x20);
    fVar2 = GlobalVectorConstants::Float1000.m128_f32[2];
    auVar4._4_4_ = ~(uint)(uVar13 >> 0x20) &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
    auVar4._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
    auVar4._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
    auVar4._12_4_ =
         ~(uint)(uVar15 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
    auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
    dVar22 = acos(dVar5);
    dVar22 = (dVar22 + dVar22) / param_3;
    *(double *)&__return_storage_ptr__->field_0x8 = SUB168(auVar25 | auVar4,8) * dVar22;
    *(double *)&__return_storage_ptr__->field_0x10 =
         (double)(CONCAT44(~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(double)fVar2 >> 0x20),
                           ~(uint)uVar14 & SUB84((double)fVar2,0)) |
                 uVar14 & (ulonglong)(auVar20._0_8_ * dVar6)) * dVar22;
    *(double *)__return_storage_ptr__ = SUB168(auVar25 | auVar4,0) * dVar22;
    return __return_storage_ptr__;
  }
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4849772161772028042>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Private\\Rotation.cpp"
                      ,0x8a,"InDt > (1.e-8f)");
  if (!bVar11) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pTVar12 = (TVector<double,3> *)(*pcVar1)();
  return pTVar12;
}

// Conjugate @ 143627d30

TRotation<float,3> * __cdecl
Chaos::TRotation<float,3>::Conjugate
          (TRotation<float,3> *__return_storage_ptr__,TRotation<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)&param_1->field_0x4;
  fVar5 = *(float *)&param_1->field_0x8;
  fVar6 = *(float *)&param_1->field_0xc;
  fVar1 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar2 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar3 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  *(float *)__return_storage_ptr__ =
       *(float *)param_1 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  *(float *)&__return_storage_ptr__->field_0x4 = fVar4 * fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar5 * fVar2;
  *(float *)&__return_storage_ptr__->field_0xc = fVar6 * fVar3;
  return __return_storage_ptr__;
}

// Conjugate @ 143627d50

TRotation<double,3> * __cdecl
Chaos::TRotation<double,3>::Conjugate
          (TRotation<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar6 = *(double *)&param_1->field_0x10;
  dVar5 = *(double *)&param_1->field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&param_1->field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar4;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar6 * dVar1;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar2;
  return __return_storage_ptr__;
}

// FromRotatedVector @ 14362a730

TRotation<double,3> * __cdecl
Chaos::TRotation<double,3>::FromRotatedVector
          (TRotation<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  
  dVar13 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)&param_1->field_0x10;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar1;
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)param_2;
  dVar5 = *(double *)&param_2->field_0x10;
  dVar8 = dVar3 * dVar5 - dVar13 * dVar1;
  dVar9 = dVar4 * dVar1 - dVar2 * dVar5;
  dVar10 = dVar13 * dVar2 - dVar3 * dVar4;
  auVar11._0_8_ = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
  auVar11._8_8_ = 0;
  auVar11 = sqrtpd(auVar11,auVar11);
  if (auVar11._0_8_ == 0.0) {
    *(double *)__return_storage_ptr__ = dVar2;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar3;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  }
  else {
    dVar13 = dVar13 * dVar3 + dVar4 * dVar2 + dVar5 * dVar1;
    if (__real_3ff0000000000000 <= dVar13) {
      dVar13 = __real_3ff0000000000000;
    }
    if (dVar13 <= __real_bff0000000000000) {
      dVar13 = __real_bff0000000000000;
    }
    dVar13 = (dVar13 + __real_3ff0000000000000) * __real_3fe0000000000000;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar13;
    auVar12 = sqrtpd(auVar11,auVar12);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = __real_3ff0000000000000 - dVar13;
    auVar14 = sqrtpd(auVar14,auVar6);
    dVar13 = auVar14._0_8_ * (__real_3ff0000000000000 / auVar11._0_8_);
    auVar7._8_4_ = SUB84(dVar13 * dVar9,0);
    auVar7._0_8_ = dVar13 * dVar8;
    auVar7._12_4_ = (int)((ulonglong)(dVar13 * dVar9) >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__ = auVar7;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar13 * dVar10;
    *(longlong *)&__return_storage_ptr__->field_0x18 = auVar12._0_8_;
  }
  return __return_storage_ptr__;
}

// FromVector @ 14362a8a0

TRotation<double,3> * __cdecl
Chaos::TRotation<double,3>::FromVector
          (TRotation<double,3> *__return_storage_ptr__,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double _X;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar5 [16];
  
  dVar4 = *(double *)&param_1->field_0x10;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar4 * dVar4;
  auVar5 = sqrtpd(unaff_XMM6,auVar5);
  _X = auVar5._0_8_ * __real_3fe0000000000000;
  dVar3 = __real_3ff0000000000000;
  if (__real_3e45798ee2308c3a < _X) {
    dVar3 = sin(_X);
    dVar3 = dVar3 / _X;
  }
  dVar3 = dVar3 * __real_3fe0000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3 * dVar4;
  *(double *)__return_storage_ptr__ = dVar3 * dVar1;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar3 * dVar2;
  dVar4 = cos(_X);
  *(double *)&__return_storage_ptr__->field_0x18 = dVar4;
  return __return_storage_ptr__;
}

// IntegrateRotationWithAngularVelocity @ 14362b9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotation<float,3> * __cdecl
Chaos::TRotation<float,3>::IntegrateRotationWithAngularVelocity
          (TRotation<float,3> *__return_storage_ptr__,TRotation<float,3> *param_1,
          TVector<float,3> *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar11 = *(float *)param_2;
  fVar12 = *(float *)&param_2->field_0x4;
  fVar13 = *(float *)&param_2->field_0x8;
  fVar15 = param_3 * __real_3f000000;
  fVar14 = *(float *)param_1;
  fVar7 = *(float *)&param_1->field_0x4;
  fVar8 = *(float *)&param_1->field_0x8;
  fVar19 = *(float *)&param_1->field_0xc;
  fVar16 = (fVar11 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] + fVar14 * 0.0 +
            fVar12 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
           fVar13 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0]) * fVar15 + fVar14;
  fVar17 = (fVar11 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] + fVar7 * 0.0 +
            fVar12 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
           fVar13 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1]) * fVar15 + fVar7;
  fVar18 = (fVar11 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] + fVar8 * 0.0 +
            fVar12 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
           fVar13 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2]) * fVar15 + fVar8;
  fVar19 = (fVar11 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] + fVar19 * 0.0 +
            fVar12 * fVar7 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
           fVar13 * fVar8 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3]) * fVar15 + fVar19;
  fVar11 = fVar17 * fVar17 + fVar16 * fVar16;
  fVar12 = fVar16 * fVar16 + fVar17 * fVar17;
  fVar13 = fVar19 * fVar19 + fVar18 * fVar18;
  fVar14 = fVar18 * fVar18 + fVar19 * fVar19;
  auVar9._0_4_ = fVar13 + fVar11;
  auVar9._4_4_ = fVar14 + fVar12;
  auVar9._8_4_ = fVar11 + fVar13;
  auVar9._12_4_ = fVar12 + fVar14;
  bVar4 = _UNK_1506895d4 <= auVar9._4_4_;
  bVar5 = _UNK_1506895d8 <= auVar9._8_4_;
  bVar6 = _UNK_1506895dc <= auVar9._12_4_;
  auVar10 = sqrtps(auVar9,auVar9);
  auVar10 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
  uVar1 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar2 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar3 = GlobalVectorConstants::Float0001.m128_u32[3];
  *(uint *)__return_storage_ptr__ =
       (uint)(auVar10._0_4_ * fVar16) &
       -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar9._0_4_) |
       ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar9._0_4_) &
       GlobalVectorConstants::Float0001.m128_u32[0];
  *(uint *)&__return_storage_ptr__->field_0x4 =
       (uint)(auVar10._4_4_ * fVar17) & -(uint)bVar4 | ~-(uint)bVar4 & uVar1;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       (uint)(auVar10._8_4_ * fVar18) & -(uint)bVar5 | ~-(uint)bVar5 & uVar2;
  *(uint *)&__return_storage_ptr__->field_0xc =
       (uint)(auVar10._12_4_ * fVar19) & -(uint)bVar6 | ~-(uint)bVar6 & uVar3;
  return __return_storage_ptr__;
}

// IntegrateRotationWithAngularVelocity @ 14362bad0

TRotation<double,3> * __cdecl
Chaos::TRotation<double,3>::IntegrateRotationWithAngularVelocity
          (TRotation<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar17 [16];
  double dVar16;
  double dVar19;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  
  dVar15 = param_3 * __real_3fe0000000000000;
  auVar21 = *(undefined1 (*) [16])param_2;
  dVar10 = auVar21._0_8_;
  dVar14 = auVar21._8_8_;
  dVar5 = *(double *)param_1;
  dVar6 = *(double *)&param_1->field_0x8;
  dVar1 = *(double *)&param_2->field_0x10;
  dVar7 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&param_1->field_0x18;
  auVar17._8_4_ = auVar21._0_4_;
  auVar17._0_8_ = dVar10;
  auVar17._12_4_ = auVar21._4_4_;
  auVar22._8_4_ = auVar21._8_4_;
  auVar22._0_8_ = dVar14;
  auVar22._12_4_ = auVar21._12_4_;
  auVar20._8_8_ = dVar15;
  auVar20._0_8_ = dVar15;
  dVar16 = (dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar5 * 0.0 +
            dVar14 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar1 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]) * dVar15
           + dVar5;
  dVar19 = (auVar17._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
            + dVar6 * 0.0 +
            auVar22._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar1 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]) *
           dVar15 + dVar6;
  dVar2 = (dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar7 * 0.0 +
           dVar14 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar1 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) * dVar15
          + dVar7;
  dVar3 = (dVar10 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar3 * 0.0 +
           dVar14 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar1 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]) * dVar15
          + dVar3;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = dVar2;
  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar10 = dVar2 * dVar2 + dVar16 * dVar16;
  dVar14 = auVar11._8_8_ * dVar3 + dVar19 * dVar19;
  dVar1 = dVar14 + dVar10;
  dVar10 = dVar10 + dVar14;
  auVar21._8_4_ = SUB84(dVar10,0);
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar21 = sqrtpd(auVar20,auVar21);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar24 = (uint)(uVar8 >> 0x20);
  uVar25 = (uint)(uVar9 >> 0x20);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  auVar12._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar12._4_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar12._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._12_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar23._0_8_ = uVar8 & (ulonglong)(auVar22._0_8_ * dVar16);
  uVar4 = uVar9 & (ulonglong)(auVar22._8_8_ * dVar19);
  auVar23._8_4_ = (undefined4)uVar4;
  auVar23._12_4_ = (undefined4)(uVar4 >> 0x20);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar18._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar18._4_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar18._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar18._12_4_ =
       ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar13._0_8_ = (ulonglong)(auVar21._0_8_ * dVar2) & uVar8;
  uVar9 = (ulonglong)(auVar21._8_8_ * dVar3) & uVar9;
  auVar13._8_4_ = (undefined4)uVar9;
  auVar13._12_4_ = (undefined4)(uVar9 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar23 | auVar12;
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar18 | auVar13;
  return __return_storage_ptr__;
}

// Negate @ 14362cf70

TRotation<double,3> * __cdecl
Chaos::TRotation<double,3>::Negate
          (TRotation<double,3> *__return_storage_ptr__,TRotation<double,3> *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  
  dVar2 = 0.0 - *(double *)&param_1->field_0x8;
  dVar5 = *(double *)&param_1->field_0x10;
  dVar4 = 0.0 - *(double *)&param_1->field_0x18;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = 0.0 - *(double *)param_1;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar1;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = 0.0 - dVar5;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar3;
  return __return_storage_ptr__;
}

