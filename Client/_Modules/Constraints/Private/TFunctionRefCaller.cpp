// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 10

// Call @ 1464a8ab0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),unsigned_int,UObject_const_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001464a8abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2,param_3);
  return uVar1;
}

// Call @ 1464a8ad0

UTransformableHandle * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),UTransformableHandle_*,UObject_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  UTransformableHandle *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001464a8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UTransformableHandle *)(**(code **)param_1)(*param_2,param_3);
  return pUVar1;
}

// Call @ 1464a8af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  TQuat<double> *pTVar13;
  int iVar14;
  uint uVar15;
  TVector<double>_u_0 *__return_storage_ptr__;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
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
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar39;
  undefined4 uVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_1f8 [40];
  double dStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  TVector<double>_u_0 TStack_1b8;
  double dStack_1a0;
  TVector<double> TStack_198;
  TTransform<double> TStack_178;
  TTransform<double> TStack_118;
  ulonglong uStack_b8;
  
  uStack_b8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  cVar11 = (**(code **)(**(longlong **)param_1 + 0x2d0))();
  if (cVar11 == '\0') {
    return;
  }
  UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)param_1);
  UTickableTransformConstraint::GetParentGlobalTransform
            (*(UTickableTransformConstraint **)param_1,&TStack_118);
  UTickableTransformConstraint::GetChildGlobalTransform
            (*(UTickableTransformConstraint **)param_1,&TStack_178);
  uVar10 = _UNK_15061cc8c;
  uVar9 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee0000000;
  TStack_118.Translation.XY.m128d_f64[0] =
       TStack_118.Translation.XY.m128d_f64[0] - TStack_178.Translation.XY.m128d_f64[0];
  dVar41 = TStack_118.Translation.XY.m128d_f64[1] - TStack_178.Translation.XY.m128d_f64[1];
  uStack_1c0 = TStack_118.Translation.ZW.m128d_f64[0] - TStack_178.Translation.ZW.m128d_f64[0];
  TStack_198.field0_0x0._s_0.Z = TStack_178.Translation.ZW.m128d_f64[0];
  dVar28 = dVar41 * dVar41 +
           TStack_118.Translation.XY.m128d_f64[0] * TStack_118.Translation.XY.m128d_f64[0] +
           (double)uStack_1c0 * (double)uStack_1c0;
  if (dVar28 != __real_3ff0000000000000) {
    if (dVar28 < __real_3e45798ee0000000) {
      TStack_118.Translation.XY.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      auVar6._4_8_ = TStack_118.Translation.XY.m128d_f64[1];
      auVar6._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      auVar36._0_8_ = auVar6._0_8_ << 0x20;
      auVar36._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar36._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      dVar41 = auVar36._8_8_;
      _dStack_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      uStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_1464a0a07;
    }
    dVar28 = __real_3ff0000000000000 / SQRT(dVar28);
    TStack_118.Translation.XY.m128d_f64[0] = TStack_118.Translation.XY.m128d_f64[0] * dVar28;
    dVar41 = dVar41 * dVar28;
    uStack_1c0 = (double)uStack_1c0 * dVar28;
  }
  dStack_1c8 = dVar41;
  dStack_1d0 = TStack_118.Translation.XY.m128d_f64[0];
LAB_1464a0a07:
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)TStack_118.Translation.XY.m128d_f64[0] >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(TStack_118.Translation.XY.m128d_f64[0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar48 = (uint)uStack_1c0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar49 = (uint)((ulonglong)uStack_1c0 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar49,uVar48) &&
      (double)CONCAT44(uVar49,uVar48) != __real_3f1a36e2e0000000)) &&
     (((lVar17 = *(longlong *)param_1,
       uVar48 = (uint)*(undefined8 *)(lVar17 + 0xb0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar49 = (uint)((ulonglong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar49,uVar48) &&
       (double)CONCAT44(uVar49,uVar48) != __real_3f1a36e2e0000000 ||
       (uVar48 = (uint)*(undefined8 *)(lVar17 + 0xb8) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
       , uVar49 = (uint)((ulonglong)*(undefined8 *)(lVar17 + 0xb8) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar49,uVar48) &&
       (double)CONCAT44(uVar49,uVar48) != __real_3f1a36e2e0000000)) ||
      (uVar48 = (uint)*(undefined8 *)(lVar17 + 0xc0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar49 = (uint)((ulonglong)*(undefined8 *)(lVar17 + 0xc0) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar49,uVar48) &&
      (double)CONCAT44(uVar49,uVar48) != __real_3f1a36e2e0000000)))) {
    auVar36 = *(undefined1 (*) [16])(lVar17 + 0xb0);
    dVar28 = *(double *)(lVar17 + 0xc0);
    dVar44 = auVar36._8_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar28;
    auVar19 = blendpd(auVar36,auVar4,2);
    dVar41 = TStack_178.Rotation.ZW.m128d_f64[0];
    dVar32 = TStack_178.Rotation.ZW.m128d_f64[1];
    dVar47 = TStack_178.Rotation.XY.m128d_f64[0];
    dVar5 = TStack_178.Rotation.XY.m128d_f64[1];
    auVar45 = blendpd((undefined1  [16])TStack_178.Rotation.XY.m128d_f64,
                      (undefined1  [16])TStack_178.Rotation.ZW.m128d_f64,2);
    auVar50._0_8_ = dVar44 * dVar47 - dVar5 * auVar36._0_8_;
    auVar50._8_8_ = dVar28 * dVar5 - dVar41 * dVar44;
    auVar34._8_4_ = SUB84(auVar50._8_8_,0);
    auVar34._0_8_ = auVar50._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar20._0_8_ = auVar19._0_8_ * dVar41 - auVar45._0_8_ * dVar28;
    auVar20._8_8_ = auVar19._8_8_ * dVar32 - auVar45._8_8_ * 0.0;
    auVar19 = blendpd(auVar50,auVar20,2);
    dVar33 = auVar34._8_8_ + auVar34._8_8_;
    dVar39 = auVar20._0_8_ + auVar20._0_8_;
    auVar51._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar51._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar29._8_4_ = SUB84(dVar39,0);
    auVar29._0_8_ = dVar33;
    uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
    auVar29._12_4_ = uVar40;
    auVar21._8_4_ = SUB84(dVar39,0);
    auVar21._0_8_ = dVar33;
    auVar21._12_4_ = uVar40;
    auVar19 = blendpd(auVar21,auVar51,2);
    auVar30._0_8_ = auVar29._8_8_ * dVar47 - dVar33 * dVar5;
    auVar30._8_8_ = auVar51._0_8_ * dVar5 - dVar39 * dVar41;
    auVar22._0_8_ = auVar19._0_8_ * dVar41 - auVar51._0_8_ * auVar45._0_8_;
    auVar22._8_8_ = auVar19._8_8_ * dVar32 - auVar51._8_8_ * auVar45._8_8_;
    auVar19 = blendpd(auVar30,auVar22,2);
    TStack_1b8._s_0.Z = auVar51._0_8_ * dVar32 + dVar28 + auVar19._0_8_;
    TStack_1b8._s_0.X = dVar33 * dVar32 + auVar36._0_8_ + auVar30._8_8_;
    TStack_1b8._s_0.Y = dVar39 * dVar32 + dVar44 + auVar22._0_8_;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&TStack_1b8._s_0,&TStack_198,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    __return_storage_ptr__ = &TStack_1b8;
    pTVar13 = UTickableLookAtConstraint::FindQuatBetweenNormals
                        ((TQuat<double> *)&__return_storage_ptr__->_s_0,&TStack_198,
                         (TVector<double> *)&dStack_1d0);
    auVar23._0_8_ =
         (double)CONCAT44((uint)((ulonglong)
                                 (TStack_1b8._s_0.Z - UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                          & uVar15,SUB84(TStack_1b8._s_0.Z - UE::Math::TQuat<double>::Identity.Z,0)
                                   & uVar12);
    auVar23._8_4_ = SUB84(dStack_1a0 - UE::Math::TQuat<double>::Identity.W,0) & uVar9;
    auVar23._12_4_ =
         (uint)((ulonglong)(dStack_1a0 - UE::Math::TQuat<double>::Identity.W) >> 0x20) & uVar10;
    auVar42._0_8_ =
         (double)CONCAT44((uint)((ulonglong)
                                 (TStack_1b8._s_0.X + UE::Math::TQuat<double>::Identity.X) >> 0x20)
                          & uVar15,SUB84(TStack_1b8._s_0.X + UE::Math::TQuat<double>::Identity.X,0)
                                   & uVar12);
    auVar42._8_4_ = SUB84(TStack_1b8._s_0.Y + UE::Math::TQuat<double>::Identity.Y,0) & uVar9;
    auVar42._12_4_ =
         (uint)((ulonglong)(TStack_1b8._s_0.Y + UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
         uVar10;
    lVar17 = -(ulonglong)(dVar8 < auVar23._8_8_);
    auVar19._8_4_ = (int)lVar17;
    auVar19._0_8_ = -(ulonglong)(dVar8 < auVar23._0_8_);
    auVar19._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar14 = movmskpd((int)__return_storage_ptr__,auVar19);
    auVar46._0_8_ =
         (double)CONCAT44((uint)((ulonglong)
                                 (UE::Math::TQuat<double>::Identity.Z + TStack_1b8._s_0.Z) >> 0x20)
                          & uVar15,SUB84(UE::Math::TQuat<double>::Identity.Z + TStack_1b8._s_0.Z,0)
                                   & uVar12);
    auVar46._8_4_ = SUB84(UE::Math::TQuat<double>::Identity.W + dStack_1a0,0) & uVar9;
    auVar46._12_4_ =
         (uint)((ulonglong)(UE::Math::TQuat<double>::Identity.W + dStack_1a0) >> 0x20) & uVar10;
    auVar24._0_8_ =
         (double)CONCAT44((uint)((ulonglong)
                                 (TStack_1b8._s_0.X - UE::Math::TQuat<double>::Identity.X) >> 0x20)
                          & uVar15,SUB84(TStack_1b8._s_0.X - UE::Math::TQuat<double>::Identity.X,0)
                                   & uVar12);
    auVar24._8_4_ = SUB84(TStack_1b8._s_0.Y - UE::Math::TQuat<double>::Identity.Y,0) & uVar9;
    auVar24._12_4_ =
         (uint)((ulonglong)(TStack_1b8._s_0.Y - UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
         uVar10;
    lVar17 = -(ulonglong)(dVar8 < auVar24._8_8_);
    auVar45._8_4_ = (int)lVar17;
    auVar45._0_8_ = -(ulonglong)(dVar8 < auVar24._0_8_);
    auVar45._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar12 = movmskpd((int)pTVar13,auVar45);
    uVar15 = iVar14 << 2 | uVar12;
    if (uVar15 != 0) {
      lVar17 = -(ulonglong)(dVar8 < auVar46._8_8_);
      auVar2._8_4_ = (int)lVar17;
      auVar2._0_8_ = -(ulonglong)(dVar8 < auVar46._0_8_);
      auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar15 = movmskpd(uVar15,auVar2);
      auVar35._8_8_ = -(ulonglong)(dVar8 < auVar42._8_8_);
      auVar35._0_8_ = -(ulonglong)(dVar8 < auVar42._0_8_);
      iVar14 = movmskpd(uVar12,auVar35);
      if ((uVar15 & 0x3fffffff) != 0 || iVar14 != 0) {
        lVar17 = *(longlong *)param_1;
        auVar43._8_8_ = dVar47;
        auVar43._0_8_ = dVar5;
        auVar25._8_4_ = SUB84(TStack_1b8._s_0.Y,0);
        auVar25._0_8_ = TStack_1b8._s_0.Y;
        auVar25._12_4_ = (int)((ulonglong)TStack_1b8._8_8_ >> 0x20);
        TStack_118.Translation.XY.m128d_f64[0] = TStack_178.Translation.XY.m128d_f64[0];
        TStack_118.Translation.XY.m128d_f64[1] = TStack_178.Translation.XY.m128d_f64[1];
        dVar33 = TStack_1b8._s_0.X * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dStack_1a0 * dVar41 +
                 TStack_1b8._s_0.Y * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 TStack_1b8._s_0.Z * dVar32 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar39 = TStack_1b8._s_0.X * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dStack_1a0 * dVar32 +
                 auVar25._8_8_ * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 TStack_1b8._s_0.Z * dVar41 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        TStack_118.Scale3D.XY.m128d_f64[0] = TStack_178.Scale3D.XY.m128d_f64[0];
        TStack_118.Scale3D.XY.m128d_f64[1] = TStack_178.Scale3D.XY.m128d_f64[1];
        TStack_118.Scale3D.ZW.m128d_f64[0] = TStack_178.Scale3D.ZW.m128d_f64[0];
        TStack_118.Scale3D.ZW.m128d_f64[1] = TStack_178.Scale3D.ZW.m128d_f64[1];
        TStack_118.Translation.ZW.m128d_f64[0] = TStack_178.Translation.ZW.m128d_f64[0];
        TStack_118.Translation.ZW.m128d_f64[1] = TStack_178.Translation.ZW.m128d_f64[1];
        dVar44 = dVar32 * TStack_1b8._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dStack_1a0 * dVar47 +
                 TStack_1b8._s_0.Y * dVar41 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 TStack_1b8._s_0.Z * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar47 = dVar41 * TStack_1b8._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dStack_1a0 * dVar5 +
                 TStack_1b8._s_0.Y * dVar32 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 TStack_1b8._s_0.Z * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar31._8_4_ = SUB84(dVar47,0);
        auVar31._0_8_ = dVar44;
        auVar31._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        dVar41 = dVar44 * dVar44 + dVar33 * dVar33;
        dVar32 = auVar31._8_8_ * dVar47 + dVar39 * dVar39;
        dVar28 = dVar32 + dVar41;
        dVar41 = dVar41 + dVar32;
        auVar3._8_4_ = SUB84(dVar41,0);
        auVar3._0_8_ = dVar28;
        auVar3._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        auVar19 = sqrtpd(auVar43,auVar3);
        uVar16 = -(ulonglong)(dVar8 <= dVar28);
        uVar18 = -(ulonglong)(dVar8 <= dVar41);
        uVar12 = (uint)(uVar16 >> 0x20);
        uVar15 = (uint)(uVar18 >> 0x20);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
        auVar26._0_4_ =
             ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar26._4_4_ =
             ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar26._8_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar26._12_4_ =
             ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar37._0_8_ = uVar16 & (ulonglong)(auVar36._0_8_ * dVar44);
        uVar7 = uVar18 & (ulonglong)(auVar36._8_8_ * dVar47);
        auVar37._8_4_ = (undefined4)uVar7;
        auVar37._12_4_ = (undefined4)(uVar7 >> 0x20);
        TStack_118.Rotation.XY.m128d_f64 = (double  [2])(auVar37 | auVar26);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
        auVar27._0_8_ = (ulonglong)(auVar36._0_8_ * dVar33) & uVar16;
        uVar7 = (ulonglong)(auVar36._8_8_ * dVar39) & uVar18;
        auVar27._8_4_ = (undefined4)uVar7;
        auVar27._12_4_ = (undefined4)(uVar7 >> 0x20);
        auVar38._0_4_ =
             ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar38._4_4_ =
             ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar38._8_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar38._12_4_ =
             ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        TStack_118.Rotation.ZW.m128d_f64 = (double  [2])(auVar38 | auVar27);
        plVar1 = *(longlong **)(lVar17 + 0x98);
        if ((plVar1 != (longlong *)0x0) &&
           (cVar11 = (**(code **)(*plVar1 + 0x2b0))(plVar1,1), cVar11 != '\0')) {
          plVar1 = *(longlong **)(lVar17 + 0x98);
          (**(code **)(*plVar1 + 0x2b8))(plVar1,&TStack_118);
        }
        if ((TransformableHandleUtils::bNewEvaluation == false) &&
           (*(longlong **)(*(longlong *)param_1 + 0x98) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x98) + 0x2f0))();
        }
      }
    }
  }
  return;
}

// Call @ 1464a8b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_168 [32];
  float afStack_148 [4];
  TTransform<double> TStack_138;
  TTransform<double> TStack_d8;
  TTransform<double> TStack_78;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  cVar3 = (**(code **)(**(longlong **)param_1 + 0x2d0))();
  if (cVar3 != '\0') {
    afStack_148[0] = (*(UTickableTransformConstraint **)param_1)->Weight;
    if (__real_3f800000 <= afStack_148[0]) {
      afStack_148[0] = __real_3f800000;
    }
    if (afStack_148[0] <= 0.0) {
      afStack_148[0] = 0.0;
    }
    if (__real_38d1b717 <= afStack_148[0]) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)param_1);
      UTickableTransformConstraint::GetParentGlobalTransform
                (*(UTickableTransformConstraint **)param_1,&TStack_78);
      TStack_d8.Rotation.XY.m128d_f64[0]._0_4_ = TStack_78.Rotation.XY.m128d_f64[0]._0_4_;
      TStack_d8.Rotation.XY.m128d_f64[0]._4_4_ = TStack_78.Rotation.XY.m128d_f64[0]._4_4_;
      TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ = TStack_78.Rotation.XY.m128d_f64[1]._0_4_;
      TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ = TStack_78.Rotation.XY.m128d_f64[1]._4_4_;
      TStack_d8.Rotation.ZW.m128d_f64[0]._0_4_ = TStack_78.Rotation.ZW.m128d_f64[0]._0_4_;
      TStack_d8.Rotation.ZW.m128d_f64[0]._4_4_ = TStack_78.Rotation.ZW.m128d_f64[0]._4_4_;
      TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ = TStack_78.Rotation.ZW.m128d_f64[1]._0_4_;
      TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ = TStack_78.Rotation.ZW.m128d_f64[1]._4_4_;
      TStack_d8.Translation.XY.m128d_f64[0]._0_4_ = TStack_78.Translation.XY.m128d_f64[0]._0_4_;
      TStack_d8.Translation.XY.m128d_f64[0]._4_4_ = TStack_78.Translation.XY.m128d_f64[0]._4_4_;
      TStack_d8.Translation.XY.m128d_f64[1]._0_4_ = TStack_78.Translation.XY.m128d_f64[1]._0_4_;
      TStack_d8.Translation.XY.m128d_f64[1]._4_4_ = TStack_78.Translation.XY.m128d_f64[1]._4_4_;
      TStack_d8.Translation.ZW.m128d_f64[0]._0_4_ = TStack_78.Translation.ZW.m128d_f64[0]._0_4_;
      TStack_d8.Translation.ZW.m128d_f64[0]._4_4_ = TStack_78.Translation.ZW.m128d_f64[0]._4_4_;
      TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ = TStack_78.Translation.ZW.m128d_f64[1]._0_4_;
      TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ = TStack_78.Translation.ZW.m128d_f64[1]._4_4_;
      TStack_d8.Scale3D.XY.m128d_f64[0]._0_4_ = TStack_78.Scale3D.XY.m128d_f64[0]._0_4_;
      TStack_d8.Scale3D.XY.m128d_f64[0]._4_4_ = TStack_78.Scale3D.XY.m128d_f64[0]._4_4_;
      TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ = TStack_78.Scale3D.XY.m128d_f64[1]._0_4_;
      TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ = TStack_78.Scale3D.XY.m128d_f64[1]._4_4_;
      if (*(char *)(*(longlong *)param_1 + 0xa0) != '\0') {
        TStack_138.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        TStack_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        TStack_138.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        TStack_138.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        TStack_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        TStack_138.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        TStack_138.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        TStack_138.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        TStack_138.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        TStack_138.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        TStack_138.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        TStack_138.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        TStack_138.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        TStack_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        TStack_138.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        TStack_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        TStack_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        TStack_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&TStack_138,(TTransform<double> *)(*(longlong *)param_1 + 0xc0),&TStack_78);
        TStack_d8.Rotation.XY.m128d_f64[0]._0_4_ = TStack_138.Rotation.XY.m128d_f64[0]._0_4_;
        TStack_d8.Rotation.XY.m128d_f64[0]._4_4_ = TStack_138.Rotation.XY.m128d_f64[0]._4_4_;
        TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ = TStack_138.Rotation.XY.m128d_f64[1]._0_4_;
        TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ = TStack_138.Rotation.XY.m128d_f64[1]._4_4_;
        TStack_d8.Rotation.ZW.m128d_f64[0]._0_4_ = TStack_138.Rotation.ZW.m128d_f64[0]._0_4_;
        TStack_d8.Rotation.ZW.m128d_f64[0]._4_4_ = TStack_138.Rotation.ZW.m128d_f64[0]._4_4_;
        TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ = TStack_138.Rotation.ZW.m128d_f64[1]._0_4_;
        TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ = TStack_138.Rotation.ZW.m128d_f64[1]._4_4_;
        TStack_d8.Translation.XY.m128d_f64[0]._0_4_ = TStack_138.Translation.XY.m128d_f64[0]._0_4_;
        TStack_d8.Translation.XY.m128d_f64[0]._4_4_ = TStack_138.Translation.XY.m128d_f64[0]._4_4_;
        TStack_d8.Translation.XY.m128d_f64[1]._0_4_ = TStack_138.Translation.XY.m128d_f64[1]._0_4_;
        TStack_d8.Translation.XY.m128d_f64[1]._4_4_ = TStack_138.Translation.XY.m128d_f64[1]._4_4_;
        TStack_d8.Translation.ZW.m128d_f64[0]._0_4_ = TStack_138.Translation.ZW.m128d_f64[0]._0_4_;
        TStack_d8.Translation.ZW.m128d_f64[0]._4_4_ = TStack_138.Translation.ZW.m128d_f64[0]._4_4_;
        TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ = TStack_138.Translation.ZW.m128d_f64[1]._0_4_;
        TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ = TStack_138.Translation.ZW.m128d_f64[1]._4_4_;
        TStack_d8.Scale3D.XY.m128d_f64[0]._0_4_ = TStack_138.Scale3D.XY.m128d_f64[0]._0_4_;
        TStack_d8.Scale3D.XY.m128d_f64[0]._4_4_ = TStack_138.Scale3D.XY.m128d_f64[0]._4_4_;
        TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ = TStack_138.Scale3D.XY.m128d_f64[1]._0_4_;
        TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ = TStack_138.Scale3D.XY.m128d_f64[1]._4_4_;
        TStack_78.Scale3D.ZW.m128d_f64[0]._0_4_ = TStack_138.Scale3D.ZW.m128d_f64[0]._0_4_;
        TStack_78.Scale3D.ZW.m128d_f64[0]._4_4_ = TStack_138.Scale3D.ZW.m128d_f64[0]._4_4_;
        TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_ = TStack_138.Scale3D.ZW.m128d_f64[1]._0_4_;
        TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_ = TStack_138.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      TStack_d8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(TStack_78.Scale3D.ZW.m128d_f64[0]._4_4_,
                            TStack_78.Scale3D.ZW.m128d_f64[0]._0_4_);
      TStack_d8.Scale3D.ZW.m128d_f64[1] =
           (double)CONCAT44(TStack_78.Scale3D.ZW.m128d_f64[1]._4_4_,
                            TStack_78.Scale3D.ZW.m128d_f64[1]._0_4_);
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)param_1,&TStack_138);
      ``UTickableParentConstraint::GetFunction'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
      operator()(afStack_148,&TStack_138,&TStack_d8,
                 (FTransformFilter *)(*(longlong *)param_1 + 0x121));
      lVar1 = *(longlong *)param_1;
      if (*(char *)(lVar1 + 0x120) == '\0') {
        TStack_d8.Scale3D.XY.m128d_f64[0]._0_4_ = TStack_138.Scale3D.XY.m128d_f64[0]._0_4_;
        TStack_d8.Scale3D.XY.m128d_f64[0]._4_4_ = TStack_138.Scale3D.XY.m128d_f64[0]._4_4_;
        TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ = TStack_138.Scale3D.XY.m128d_f64[1]._0_4_;
        TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ = TStack_138.Scale3D.XY.m128d_f64[1]._4_4_;
        TStack_d8.Scale3D.ZW.m128d_f64[0] = TStack_138.Scale3D.ZW.m128d_f64[0];
        TStack_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      plVar2 = *(longlong **)(lVar1 + 0x98);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2,1), cVar3 != '\0')) {
        (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x2b8))
                  (*(longlong **)(lVar1 + 0x98),&TStack_d8);
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)param_1 + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// Call @ 1464a8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  TTransform<double> *pTVar14;
  TQuat<double> *pTVar15;
  TRotator<double> *pTVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  float fVar31;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  TRotator<double> TStack_1a8;
  TQuat<double> TStack_188;
  TQuat<double> TStack_168;
  TTransform<double> TStack_148;
  TTransform<double> TStack_e8;
  ulonglong uStack_88;
  
  uStack_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  cVar13 = (**(code **)(**(longlong **)param_1 + 0x2d0))();
  if (cVar13 != '\0') {
    fVar31 = (*(UTickableTransformConstraint **)param_1)->Weight;
    if (__real_3f800000 <= fVar31) {
      fVar31 = __real_3f800000;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    if (__real_38d1b717 <= fVar31) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)param_1);
      pTVar14 = UTickableTransformConstraint::GetParentGlobalTransform
                          (*(UTickableTransformConstraint **)param_1,&TStack_148);
      auVar25 = *(undefined1 (*) [16])(pTVar14->Rotation).XY.m128d_f64;
      dVar3 = auVar25._0_8_;
      dVar19 = auVar25._8_8_;
      auVar27 = *(undefined1 (*) [16])(pTVar14->Rotation).ZW.m128d_f64;
      dVar6 = auVar27._0_8_;
      dVar7 = auVar27._8_8_;
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)param_1,&TStack_e8);
      lVar1 = *(longlong *)param_1;
      TStack_188.X = TStack_e8.Rotation.XY.m128d_f64[0];
      TStack_188.Y = TStack_e8.Rotation.XY.m128d_f64[1];
      if (*(char *)(lVar1 + 0xa0) != '\0') {
        dVar9 = *(double *)(lVar1 + 0xd0);
        dVar10 = *(double *)(lVar1 + 0xd8);
        auVar24._8_4_ = auVar25._8_4_;
        auVar24._0_8_ = dVar19;
        auVar24._12_4_ = auVar25._12_4_;
        auVar26._8_4_ = auVar27._0_4_;
        auVar26._0_8_ = dVar6;
        auVar26._12_4_ = auVar27._4_4_;
        dVar11 = *(double *)(lVar1 + 0xc0);
        dVar12 = *(double *)(lVar1 + 200);
        auVar27._8_4_ = auVar25._8_4_;
        auVar27._0_8_ = dVar19;
        auVar27._12_4_ = auVar25._12_4_;
        dVar4 = dVar3 * dVar9;
        in_XMM4._0_8_ =
             dVar19 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        in_XMM4._8_8_ =
             auVar24._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar5 = dVar3 * dVar12;
        dVar22 = dVar3 * dVar11;
        dVar3 = dVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar7 * dVar11 +
                dVar19 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar19 = dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar7 * dVar12 +
                 auVar27._8_8_ * dVar10 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar6 = dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar7 * dVar9 + in_XMM4._0_8_ +
                dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar7 = dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar7 * dVar10 + in_XMM4._8_8_ +
                auVar26._8_8_ * dVar9 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      }
      auStack_1c8._8_4_ = SUB84(dVar19,0);
      auStack_1c8._0_8_ = dVar3;
      auStack_1c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      auStack_1b8._8_4_ = SUB84(dVar7,0);
      auStack_1b8._0_8_ = dVar6;
      auStack_1b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      if (fVar31 < __real_3f7ff972) {
        pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (&TStack_168,&TStack_188,(TQuat<double> *)auStack_1c8,(double)fVar31);
        dVar6 = pTVar15->X;
        dVar7 = pTVar15->Y;
        dVar4 = pTVar15->Z;
        dVar5 = pTVar15->W;
        dVar19 = dVar4 * dVar4 + dVar6 * dVar6;
        dVar22 = dVar5 * dVar5 + dVar7 * dVar7;
        dVar3 = dVar22 + dVar19;
        dVar19 = dVar19 + dVar22;
        auVar25._8_4_ = SUB84(dVar19,0);
        auVar25._0_8_ = dVar3;
        auVar25._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        auVar25 = sqrtpd(in_XMM4,auVar25);
        uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
        uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
        uVar29 = (uint)(uVar17 >> 0x20);
        uVar30 = (uint)(uVar18 >> 0x20);
        auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
        auVar28._0_8_ = uVar17 & (ulonglong)(auVar27._0_8_ * dVar6);
        uVar8 = uVar18 & (ulonglong)(auVar27._8_8_ * dVar7);
        auVar28._8_4_ = (undefined4)uVar8;
        auVar28._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar20._0_4_ =
             ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar20._4_4_ =
             ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar20._8_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar20._12_4_ =
             ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auStack_1c8 = auVar28 | auVar20;
        auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
        auVar23._0_4_ =
             ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar23._4_4_ =
             ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar23._8_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar23._12_4_ =
             ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar21._0_8_ = (ulonglong)(auVar25._0_8_ * dVar4) & uVar17;
        uVar18 = (ulonglong)(auVar25._8_8_ * dVar5) & uVar18;
        auVar21._8_4_ = (undefined4)uVar18;
        auVar21._12_4_ = (undefined4)(uVar18 >> 0x20);
        auStack_1b8 = auVar23 | auVar21;
      }
      lVar1 = *(longlong *)param_1;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)auStack_1c8,&TStack_1a8);
      pTVar16 = UE::Math::TQuat<double>::Rotator(&TStack_188,(TRotator<double> *)&TStack_168);
      if (*(char *)(lVar1 + 0xe0) == '\0') {
        TStack_1a8.Roll = pTVar16->Roll;
      }
      if (*(char *)(lVar1 + 0xe1) == '\0') {
        TStack_1a8.Pitch = pTVar16->Pitch;
      }
      if (*(char *)(lVar1 + 0xe2) == '\0') {
        TStack_1a8.Yaw = pTVar16->Yaw;
      }
      pTVar15 = UE::Math::TRotator<double>::Quaternion(&TStack_1a8,&TStack_168);
      lVar1 = *(longlong *)param_1;
      TStack_e8.Rotation.XY.m128d_f64[0] = pTVar15->X;
      TStack_e8.Rotation.XY.m128d_f64[1] = pTVar15->Y;
      auStack_1c8._0_8_ = pTVar15->X;
      auStack_1c8._8_8_ = pTVar15->Y;
      TStack_e8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar15->Z;
      TStack_e8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar15->Z + 4);
      TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar15->W;
      TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar15->W + 4);
      auStack_1b8._0_8_ = pTVar15->Z;
      auStack_1b8._8_8_ = pTVar15->W;
      plVar2 = *(longlong **)(lVar1 + 0x98);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar13 = (**(code **)(*plVar2 + 0x2b0))(plVar2,1), cVar13 != '\0')) {
        plVar2 = *(longlong **)(lVar1 + 0x98);
        (**(code **)(*plVar2 + 0x2b8))(plVar2,&TStack_e8);
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)param_1 + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// Call @ 1464a8b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  TTransform<double> *pTVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [12];
  undefined4 uStack_12c;
  double dStack_128;
  double dStack_110;
  TTransform<double> TStack_108;
  TTransform<double> TStack_a8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  cVar10 = (**(code **)(**(longlong **)param_1 + 0x2d0))();
  if (cVar10 != '\0') {
    fVar17 = (*(UTickableTransformConstraint **)param_1)->Weight;
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (__real_38d1b717 <= fVar17) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)param_1);
      pTVar11 = UTickableTransformConstraint::GetParentGlobalTransform
                          (*(UTickableTransformConstraint **)param_1,&TStack_108);
      dVar14 = (pTVar11->Scale3D).ZW.m128d_f64[0];
      uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar1 = *(undefined1 (*) [16])(pTVar11->Scale3D).XY.m128d_f64;
      dVar6 = auVar1._0_8_;
      uVar16 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      dStack_128 = dVar14;
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)param_1,&TStack_a8);
      lVar2 = *(longlong *)param_1;
      dVar8 = (double)CONCAT44(TStack_a8.Scale3D.XY.m128d_f64[0]._4_4_,
                               TStack_a8.Scale3D.XY.m128d_f64[0]._0_4_);
      dVar9 = (double)CONCAT44(TStack_a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               TStack_a8.Scale3D.XY.m128d_f64[1]._0_4_);
      dStack_110 = TStack_a8.Scale3D.ZW.m128d_f64[0];
      dVar13 = auVar1._8_8_;
      if (*(char *)(lVar2 + 0xa0) == '\0') {
        uVar7 = SUB84(dVar14,0);
      }
      else {
        dVar6 = dVar6 * *(double *)(lVar2 + 0xb8);
        dVar14 = dStack_128 * *(double *)(lVar2 + 200);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar13 = dVar13 * *(double *)(lVar2 + 0xc0);
        uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar7 = SUB84(dVar14,0);
        uVar16 = SUB84(dVar13,0);
      }
      dVar5 = (double)CONCAT44(uVar12,uVar7);
      auStack_138._8_4_ = uVar16;
      auStack_138._0_8_ = dVar6;
      uStack_12c = uVar15;
      if (fVar17 < __real_3f7ff972) {
        dVar4 = (double)fVar17;
        dVar5 = (dVar14 - TStack_a8.Scale3D.ZW.m128d_f64[0]) * dVar4 +
                TStack_a8.Scale3D.ZW.m128d_f64[0];
        dVar14 = (dVar13 - dVar9) * dVar4 + dVar9;
        auStack_138._8_4_ = SUB84(dVar14,0);
        auStack_138._0_8_ = (dVar6 - dVar8) * dVar4 + dVar8;
        uStack_12c = (int)((ulonglong)dVar14 >> 0x20);
      }
      if (*(char *)(lVar2 + 0xd0) == '\0') {
        auStack_138._0_8_ = dVar8;
      }
      if (*(char *)(lVar2 + 0xd1) == '\0') {
        stack0xfffffffffffffed0 = dVar9;
      }
      if (*(char *)(lVar2 + 0xd2) == '\0') {
        dVar5 = TStack_a8.Scale3D.ZW.m128d_f64[0];
      }
      TStack_a8.Scale3D.XY.m128d_f64[0]._0_4_ = auStack_138._0_4_;
      TStack_a8.Scale3D.XY.m128d_f64[0]._4_4_ = auStack_138._4_4_;
      TStack_a8.Scale3D.XY.m128d_f64[1]._0_4_ = auStack_138._8_4_;
      TStack_a8.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_12c;
      TStack_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
      plVar3 = *(longlong **)(lVar2 + 0x98);
      TStack_a8.Scale3D.ZW.m128d_f64[0] = dVar5;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar10 = (**(code **)(*plVar3 + 0x2b0))(plVar3,1), cVar10 != '\0')) {
        (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x2b8))
                  (*(longlong **)(lVar2 + 0x98),&TStack_a8);
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)param_1 + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// Call @ 1464a8b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  TTransform<double> *pTVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [12];
  undefined4 uStack_12c;
  double dStack_128;
  double dStack_110;
  TTransform<double> TStack_108;
  TTransform<double> TStack_a8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  cVar10 = (**(code **)(**(longlong **)param_1 + 0x2d0))();
  if (cVar10 != '\0') {
    fVar17 = (*(UTickableTransformConstraint **)param_1)->Weight;
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (__real_38d1b717 <= fVar17) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)param_1);
      pTVar11 = UTickableTransformConstraint::GetParentGlobalTransform
                          (*(UTickableTransformConstraint **)param_1,&TStack_108);
      dVar14 = (pTVar11->Translation).ZW.m128d_f64[0];
      uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar1 = *(undefined1 (*) [16])(pTVar11->Translation).XY.m128d_f64;
      dVar6 = auVar1._0_8_;
      uVar16 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      dStack_128 = dVar14;
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)param_1,&TStack_a8);
      lVar2 = *(longlong *)param_1;
      dVar8 = (double)CONCAT44(TStack_a8.Translation.XY.m128d_f64[0]._4_4_,
                               TStack_a8.Translation.XY.m128d_f64[0]._0_4_);
      dVar9 = (double)CONCAT44(TStack_a8.Translation.XY.m128d_f64[1]._4_4_,
                               TStack_a8.Translation.XY.m128d_f64[1]._0_4_);
      dStack_110 = TStack_a8.Translation.ZW.m128d_f64[0];
      dVar13 = auVar1._8_8_;
      if (*(char *)(lVar2 + 0xa0) == '\0') {
        uVar7 = SUB84(dVar14,0);
      }
      else {
        dVar6 = dVar6 + *(double *)(lVar2 + 0xb8);
        dVar14 = dStack_128 + *(double *)(lVar2 + 200);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar13 = dVar13 + *(double *)(lVar2 + 0xc0);
        uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar7 = SUB84(dVar14,0);
        uVar16 = SUB84(dVar13,0);
      }
      dVar5 = (double)CONCAT44(uVar12,uVar7);
      auStack_138._8_4_ = uVar16;
      auStack_138._0_8_ = dVar6;
      uStack_12c = uVar15;
      if (fVar17 < __real_3f7ff972) {
        dVar4 = (double)fVar17;
        dVar5 = (dVar14 - TStack_a8.Translation.ZW.m128d_f64[0]) * dVar4 +
                TStack_a8.Translation.ZW.m128d_f64[0];
        dVar14 = (dVar13 - dVar9) * dVar4 + dVar9;
        auStack_138._8_4_ = SUB84(dVar14,0);
        auStack_138._0_8_ = (dVar6 - dVar8) * dVar4 + dVar8;
        uStack_12c = (int)((ulonglong)dVar14 >> 0x20);
      }
      if (*(char *)(lVar2 + 0xd0) == '\0') {
        auStack_138._0_8_ = dVar8;
      }
      if (*(char *)(lVar2 + 0xd1) == '\0') {
        stack0xfffffffffffffed0 = dVar9;
      }
      if (*(char *)(lVar2 + 0xd2) == '\0') {
        dVar5 = TStack_a8.Translation.ZW.m128d_f64[0];
      }
      TStack_a8.Translation.XY.m128d_f64[0]._0_4_ = auStack_138._0_4_;
      TStack_a8.Translation.XY.m128d_f64[0]._4_4_ = auStack_138._4_4_;
      TStack_a8.Translation.XY.m128d_f64[1]._0_4_ = auStack_138._8_4_;
      TStack_a8.Translation.XY.m128d_f64[1]._4_4_ = uStack_12c;
      TStack_a8.Translation.ZW.m128d_f64[1] = 0.0;
      plVar3 = *(longlong **)(lVar2 + 0x98);
      TStack_a8.Translation.ZW.m128d_f64[0] = dVar5;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar10 = (**(code **)(*plVar3 + 0x2b0))(plVar3,1), cVar10 != '\0')) {
        (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x2b8))
                  (*(longlong **)(lVar2 + 0x98),&TStack_a8);
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)param_1 + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// Call @ 1464a8b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)((longlong)param_1 + 8));
  pUVar1[0x33].field_0x11 =
       (*(char *)param_1 << 3 ^ pUVar1[0x33].field_0x11) & 8U ^ pUVar1[0x33].field_0x11;
  return;
}

// Call @ 1464a8b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTransformableHandle * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  int iVar1;
  UObject *pUVar2;
  USceneComponent *pUVar3;
  UClass *pUVar4;
  UTransformableComponentHandle *pUVar5;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (pUVar3 = *(USceneComponent **)(pUVar2 + 0xb), pUVar3 != (USceneComponent *)0x0)) {
      pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = TransformConstraintUtil::CreateHandleForSceneComponent(pUVar3,param_3);
        return (UTransformableHandle *)pUVar5;
      }
    }
  }
  return (UTransformableHandle *)0x0;
}

// Call @ 1464a8c10

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
::Call(void *param_1,UObject **param_2,FName *param_3)

{
  int iVar1;
  UObject *pUVar2;
  ulonglong uVar3;
  UClass *pUVar4;
  uint uVar5;
  
  pUVar2 = *param_2;
  if (pUVar2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) && (uVar3 = *(ulonglong *)(pUVar2 + 0xb), uVar3 != 0)) {
      pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(uVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar4->_padding_)) {
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        return uVar5 >> 0x10 ^ uVar5;
      }
    }
  }
  return 0;
}

