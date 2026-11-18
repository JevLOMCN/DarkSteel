// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 11

// StaticClass @ 14648dc80

UClass * __cdecl UTickableLookAtConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableLookAtConstraint",
               &Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton,
               StaticRegisterNativesUTickableLookAtConstraint,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTickableLookAtConstraint>,
               InternalVTableHelperCtorCaller<UTickableLookAtConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton;
}

// UTickableLookAtConstraint @ 14649e8b0

UTickableLookAtConstraint * __thiscall
UTickableLookAtConstraint::UTickableLookAtConstraint
          (UTickableLookAtConstraint *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint
            ((UTickableTransformConstraint *)this,param_1);
  this->_padding_ = (longlong)&___7UTickableLookAtConstraint__6B_;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->Axis).field0_0x0._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->Axis).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis).field0_0x0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  return this;
}

// UTickableLookAtConstraint @ 14649e900

UTickableLookAtConstraint * __thiscall
UTickableLookAtConstraint::UTickableLookAtConstraint(UTickableLookAtConstraint *this)

{
  undefined8 uVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint((UTickableTransformConstraint *)this);
  this->_padding_ = (longlong)&___7UTickableLookAtConstraint__6B_;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->Axis).field0_0x0._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->Axis).field0_0x0._s_0.Y = (double)uVar1;
  (this->Axis).field0_0x0._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x400;
  return this;
}

// ~UTickableLookAtConstraint @ 14649fb30

void __thiscall
UTickableLookAtConstraint::~UTickableLookAtConstraint(UTickableLookAtConstraint *this)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1464a08b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>::operator()(void *this)

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
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  TVector<double>_u_0 local_1b8;
  double dStack_1a0;
  TVector<double> local_198;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  cVar11 = (**(code **)(**(longlong **)this + 0x2d0))();
  if (cVar11 == '\0') {
    return;
  }
  UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)this);
  UTickableTransformConstraint::GetParentGlobalTransform
            (*(UTickableTransformConstraint **)this,&local_118);
  UTickableTransformConstraint::GetChildGlobalTransform
            (*(UTickableTransformConstraint **)this,&local_178);
  uVar10 = _UNK_15061cc8c;
  uVar9 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3e45798ee0000000;
  local_118.Translation.XY.m128d_f64[0] =
       local_118.Translation.XY.m128d_f64[0] - local_178.Translation.XY.m128d_f64[0];
  dVar41 = local_118.Translation.XY.m128d_f64[1] - local_178.Translation.XY.m128d_f64[1];
  local_1c0 = local_118.Translation.ZW.m128d_f64[0] - local_178.Translation.ZW.m128d_f64[0];
  local_198.field0_0x0._s_0.Z = local_178.Translation.ZW.m128d_f64[0];
  dVar28 = dVar41 * dVar41 +
           local_118.Translation.XY.m128d_f64[0] * local_118.Translation.XY.m128d_f64[0] +
           (double)local_1c0 * (double)local_1c0;
  if (dVar28 != __real_3ff0000000000000) {
    if (dVar28 < __real_3e45798ee0000000) {
      local_118.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_
      ;
      auVar6._4_8_ = local_118.Translation.XY.m128d_f64[1];
      auVar6._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      auVar36._0_8_ = auVar6._0_8_ << 0x20;
      auVar36._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar36._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      dVar41 = auVar36._8_8_;
      _local_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_1464a0a07;
    }
    dVar28 = __real_3ff0000000000000 / SQRT(dVar28);
    local_118.Translation.XY.m128d_f64[0] = local_118.Translation.XY.m128d_f64[0] * dVar28;
    dVar41 = dVar41 * dVar28;
    local_1c0 = (double)local_1c0 * dVar28;
  }
  dStack_1c8 = dVar41;
  local_1d0 = local_118.Translation.XY.m128d_f64[0];
LAB_1464a0a07:
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)local_118.Translation.XY.m128d_f64[0] >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_118.Translation.XY.m128d_f64[0],0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar48 = (uint)local_1c0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar49 = (uint)((ulonglong)local_1c0 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar49,uVar48) &&
      (double)CONCAT44(uVar49,uVar48) != __real_3f1a36e2e0000000)) &&
     (((lVar17 = *(longlong *)this,
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
    dVar41 = local_178.Rotation.ZW.m128d_f64[0];
    dVar32 = local_178.Rotation.ZW.m128d_f64[1];
    dVar47 = local_178.Rotation.XY.m128d_f64[0];
    dVar5 = local_178.Rotation.XY.m128d_f64[1];
    auVar45 = blendpd((undefined1  [16])local_178.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_178.Rotation.ZW.m128d_f64,2);
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
    local_1b8._s_0.Z = auVar51._0_8_ * dVar32 + dVar28 + auVar19._0_8_;
    local_1b8._s_0.X = dVar33 * dVar32 + auVar36._0_8_ + auVar30._8_8_;
    local_1b8._s_0.Y = dVar39 * dVar32 + dVar44 + auVar22._0_8_;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_1b8._s_0,&local_198,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    __return_storage_ptr__ = &local_1b8;
    pTVar13 = UTickableLookAtConstraint::FindQuatBetweenNormals
                        ((TQuat<double> *)&__return_storage_ptr__->_s_0,&local_198,
                         (TVector<double> *)&local_1d0);
    auVar23._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1b8._s_0.Z - UE::Math::TQuat<double>::Identity.Z)
                                >> 0x20) & uVar15,
                          SUB84(local_1b8._s_0.Z - UE::Math::TQuat<double>::Identity.Z,0) & uVar12);
    auVar23._8_4_ = SUB84(dStack_1a0 - UE::Math::TQuat<double>::Identity.W,0) & uVar9;
    auVar23._12_4_ =
         (uint)((ulonglong)(dStack_1a0 - UE::Math::TQuat<double>::Identity.W) >> 0x20) & uVar10;
    auVar42._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1b8._s_0.X + UE::Math::TQuat<double>::Identity.X)
                                >> 0x20) & uVar15,
                          SUB84(local_1b8._s_0.X + UE::Math::TQuat<double>::Identity.X,0) & uVar12);
    auVar42._8_4_ = SUB84(local_1b8._s_0.Y + UE::Math::TQuat<double>::Identity.Y,0) & uVar9;
    auVar42._12_4_ =
         (uint)((ulonglong)(local_1b8._s_0.Y + UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
         uVar10;
    lVar17 = -(ulonglong)(dVar8 < auVar23._8_8_);
    auVar19._8_4_ = (int)lVar17;
    auVar19._0_8_ = -(ulonglong)(dVar8 < auVar23._0_8_);
    auVar19._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar14 = movmskpd((int)__return_storage_ptr__,auVar19);
    auVar46._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.Z + local_1b8._s_0.Z)
                                >> 0x20) & uVar15,
                          SUB84(UE::Math::TQuat<double>::Identity.Z + local_1b8._s_0.Z,0) & uVar12);
    auVar46._8_4_ = SUB84(UE::Math::TQuat<double>::Identity.W + dStack_1a0,0) & uVar9;
    auVar46._12_4_ =
         (uint)((ulonglong)(UE::Math::TQuat<double>::Identity.W + dStack_1a0) >> 0x20) & uVar10;
    auVar24._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(local_1b8._s_0.X - UE::Math::TQuat<double>::Identity.X)
                                >> 0x20) & uVar15,
                          SUB84(local_1b8._s_0.X - UE::Math::TQuat<double>::Identity.X,0) & uVar12);
    auVar24._8_4_ = SUB84(local_1b8._s_0.Y - UE::Math::TQuat<double>::Identity.Y,0) & uVar9;
    auVar24._12_4_ =
         (uint)((ulonglong)(local_1b8._s_0.Y - UE::Math::TQuat<double>::Identity.Y) >> 0x20) &
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
        lVar17 = *(longlong *)this;
        auVar43._8_8_ = dVar47;
        auVar43._0_8_ = dVar5;
        auVar25._8_4_ = SUB84(local_1b8._s_0.Y,0);
        auVar25._0_8_ = local_1b8._s_0.Y;
        auVar25._12_4_ = (int)((ulonglong)local_1b8._8_8_ >> 0x20);
        local_118.Translation.XY.m128d_f64[0] = local_178.Translation.XY.m128d_f64[0];
        local_118.Translation.XY.m128d_f64[1] = local_178.Translation.XY.m128d_f64[1];
        dVar33 = local_1b8._s_0.X * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dStack_1a0 * dVar41 +
                 local_1b8._s_0.Y * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 local_1b8._s_0.Z * dVar32 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar39 = local_1b8._s_0.X * dVar47 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dStack_1a0 * dVar32 +
                 auVar25._8_8_ * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 local_1b8._s_0.Z * dVar41 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_118.Scale3D.XY.m128d_f64[0] = local_178.Scale3D.XY.m128d_f64[0];
        local_118.Scale3D.XY.m128d_f64[1] = local_178.Scale3D.XY.m128d_f64[1];
        local_118.Scale3D.ZW.m128d_f64[0] = local_178.Scale3D.ZW.m128d_f64[0];
        local_118.Scale3D.ZW.m128d_f64[1] = local_178.Scale3D.ZW.m128d_f64[1];
        local_118.Translation.ZW.m128d_f64[0] = local_178.Translation.ZW.m128d_f64[0];
        local_118.Translation.ZW.m128d_f64[1] = local_178.Translation.ZW.m128d_f64[1];
        dVar44 = dVar32 * local_1b8._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dStack_1a0 * dVar47 +
                 local_1b8._s_0.Y * dVar41 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_1b8._s_0.Z * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar47 = dVar41 * local_1b8._s_0.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dStack_1a0 * dVar5 +
                 local_1b8._s_0.Y * dVar32 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 local_1b8._s_0.Z * dVar47 *
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
        local_118.Rotation.XY.m128d_f64 = (double  [2])(auVar37 | auVar26);
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
        local_118.Rotation.ZW.m128d_f64 = (double  [2])(auVar38 | auVar27);
        plVar1 = *(longlong **)(lVar17 + 0x98);
        if ((plVar1 != (longlong *)0x0) &&
           (cVar11 = (**(code **)(*plVar1 + 0x2b0))(plVar1,1), cVar11 != '\0')) {
          plVar1 = *(longlong **)(lVar17 + 0x98);
          (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_118);
        }
        if ((TransformableHandleUtils::bNewEvaluation == false) &&
           (*(longlong **)(*(longlong *)this + 0x98) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(*(longlong *)this + 0x98) + 0x2f0))();
        }
      }
    }
  }
  return;
}

// ComputeOffset @ 1464a9880

void __thiscall UTickableLookAtConstraint::ComputeOffset(UTickableLookAtConstraint *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  TTransform<double> *pTVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  TTransform<double> local_148;
  TTransform<double> local_e8 [2];
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  pTVar4 = UTickableTransformConstraint::GetParentGlobalTransform
                     ((UTickableTransformConstraint *)this,local_e8);
  dVar19 = (pTVar4->Translation).XY.m128d_f64[0];
  dVar1 = (pTVar4->Translation).XY.m128d_f64[1];
  dVar2 = (pTVar4->Translation).ZW.m128d_f64[0];
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_148);
  dVar19 = dVar19 - local_148.Translation.XY.m128d_f64[0];
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  dVar1 = dVar1 - local_148.Translation.XY.m128d_f64[1];
  dVar2 = dVar2 - local_148.Translation.ZW.m128d_f64[0];
  dVar15 = dVar1 * dVar1 + dVar19 * dVar19 + dVar2 * dVar2;
  if (dVar15 != __real_3ff0000000000000) {
    dVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    if (dVar15 < __real_3e45798ee0000000) goto LAB_1464a999b;
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    dVar19 = dVar19 * dVar15;
    dVar1 = dVar1 * dVar15;
    dVar2 = dVar2 * dVar15;
  }
  uVar18 = SUB84(dVar19,0);
  uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
  dVar8 = dVar1;
  uVar9 = dVar2;
  dVar27 = dVar19;
LAB_1464a999b:
  uVar24 = (uint)((ulonglong)dVar8 >> 0x20);
  uVar23 = SUB84(dVar8,0);
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <=
       (double)CONCAT44(uVar24 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar23 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
       (double)CONCAT44(uVar24 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        uVar23 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
       __real_3f1a36e2e0000000)) ||
     (uVar25 = (uint)uVar9 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar26 = (uint)((ulonglong)uVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar25) &&
     (double)CONCAT44(uVar26,uVar25) != __real_3f1a36e2e0000000)) {
    auVar5._0_8_ = (double)CONCAT44(uVar22,uVar18);
    auVar5._8_4_ = uVar23;
    auVar5._12_4_ = uVar24;
    local_148.Rotation.XY.m128d_f64[0] =
         local_148.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_148.Rotation.XY.m128d_f64[1] =
         local_148.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar10._4_4_ = uVar22;
    auVar10._0_4_ = uVar18;
    auVar10._8_4_ = uVar23;
    auVar10._12_4_ = uVar24;
    local_148.Rotation.ZW.m128d_f64[0] =
         local_148.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_148.Rotation.ZW.m128d_f64[1] =
         local_148.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar20._8_4_ = SUB84(local_148.Rotation.XY.m128d_f64[1],0);
    auVar20._0_8_ = local_148.Rotation.XY.m128d_f64[0];
    auVar20._12_4_ = (int)((ulonglong)local_148.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar28._4_4_ = uVar22;
    auVar28._0_4_ = uVar18;
    auVar28._8_4_ = uVar23;
    auVar28._12_4_ = uVar24;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar9;
    auVar11 = blendpd(auVar10,auVar11,2);
    auVar30._8_4_ = SUB84(local_148.Rotation.ZW.m128d_f64[1],0);
    auVar30._0_8_ = local_148.Rotation.ZW.m128d_f64[0];
    auVar30._12_4_ = (int)((ulonglong)local_148.Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar21 = blendpd(auVar20,auVar30,2);
    auVar29._0_8_ =
         auVar28._8_8_ * local_148.Rotation.XY.m128d_f64[0] -
         auVar5._0_8_ * local_148.Rotation.XY.m128d_f64[1];
    auVar29._8_8_ =
         (double)uVar9 * local_148.Rotation.XY.m128d_f64[1] -
         auVar5._8_8_ * local_148.Rotation.ZW.m128d_f64[0];
    auVar12._0_8_ =
         auVar11._0_8_ * local_148.Rotation.ZW.m128d_f64[0] - auVar21._0_8_ * (double)uVar9;
    auVar12._8_8_ = auVar11._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar21._8_8_ * 0.0;
    auVar30 = blendpd(auVar29,auVar12,2);
    auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    dVar1 = auVar29._8_8_ + auVar29._8_8_;
    dVar2 = auVar12._0_8_ + auVar12._0_8_;
    uVar32 = SUB84(dVar2,0);
    uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar16._8_4_ = uVar32;
    auVar16._0_8_ = dVar1;
    auVar16._12_4_ = uVar33;
    auVar6._8_4_ = uVar32;
    auVar6._0_8_ = dVar1;
    auVar6._12_4_ = uVar33;
    auVar13._8_4_ = uVar32;
    auVar13._0_8_ = dVar1;
    auVar13._12_4_ = uVar33;
    auVar30 = blendpd(auVar13,auVar31,2);
    auVar17._0_8_ =
         auVar16._8_8_ * local_148.Rotation.XY.m128d_f64[0] -
         dVar1 * local_148.Rotation.XY.m128d_f64[1];
    auVar17._8_8_ =
         auVar31._0_8_ * local_148.Rotation.XY.m128d_f64[1] -
         auVar6._8_8_ * local_148.Rotation.ZW.m128d_f64[0];
    auVar7._8_4_ = SUB84(auVar31._8_8_,0);
    auVar7._0_8_ = auVar31._0_8_;
    auVar7._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar14._0_8_ =
         auVar30._0_8_ * local_148.Rotation.ZW.m128d_f64[0] - auVar31._0_8_ * auVar21._0_8_;
    auVar14._8_8_ =
         auVar30._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar7._8_8_ * auVar21._8_8_;
    auVar21._8_4_ = SUB84(auVar17._8_8_,0);
    auVar21._0_8_ = auVar17._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar30 = blendpd(auVar17,auVar14,2);
    dVar27 = auVar31._0_8_ * local_148.Rotation.ZW.m128d_f64[1] + (double)uVar9 + auVar30._0_8_;
    dVar1 = dVar1 * local_148.Rotation.ZW.m128d_f64[1] + (double)CONCAT44(uVar22,uVar18) +
            auVar21._8_8_;
    dVar2 = dVar2 * local_148.Rotation.ZW.m128d_f64[1] + dVar8 + auVar14._0_8_;
    dVar8 = dVar2 * dVar2 + dVar1 * dVar1 + dVar27 * dVar27;
    uVar9 = dVar27;
    dVar19 = dVar1;
    dVar15 = dVar2;
    if ((dVar8 != __real_3ff0000000000000) &&
       (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       dVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_,
       dVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
       __real_3e45798ee0000000 <= dVar8)) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar9 = dVar27 * dVar15;
      dVar19 = dVar1 * dVar15;
      dVar15 = dVar2 * dVar15;
    }
    auVar3._8_4_ = SUB84(dVar15,0);
    auVar3._0_8_ = dVar19;
    auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])&(this->Axis).field0_0x0 = auVar3;
    (this->Axis).field0_0x0._s_0.Z = (double)uVar9;
  }
  return;
}

// FindQuatBetweenNormals @ 1464afe40

TQuat<double> * __cdecl
UTickableLookAtConstraint::FindQuatBetweenNormals
          (TQuat<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  ulonglong uVar12;
  double dVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  uint uVar33;
  uint uVar34;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  dVar13 = __real_3e45798ee0000000;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar17 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  auVar30._8_8_ = 0.0;
  auVar30._0_8_ = dVar2;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar24 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar31 = dVar24 * dVar1 + dVar4 * dVar3 + dVar17 * dVar2 + __real_3ff0000000000000;
  if (__real_3e45798ee0000000 <= dVar31) {
    __return_storage_ptr__->X = dVar4 * dVar2 - dVar3 * dVar17;
    __return_storage_ptr__->Y = dVar1 * dVar17 - dVar24 * dVar2;
    __return_storage_ptr__->Z = dVar3 * dVar24 - dVar4 * dVar1;
    __return_storage_ptr__->W = dVar31;
  }
  else {
    dVar10 = dVar3 * dVar17 - dVar4 * dVar2;
    dVar2 = dVar24 * dVar2 - dVar1 * dVar17;
    dVar31 = __real_4000000000000000 - dVar31;
    dVar3 = dVar4 * dVar1 - dVar3 * dVar24;
    pTVar14 = &UE::Math::TVector<double>::XAxisVector;
    auVar18._8_4_ = SUB84(dVar2,0);
    auVar18._0_8_ = dVar10;
    auVar18._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar17 = dVar10 * dVar10 + dVar3 * dVar3;
    dVar24 = auVar18._8_8_ * dVar2 + dVar31 * dVar31;
    dVar1 = dVar24 + dVar17;
    dVar17 = dVar17 + dVar24;
    auVar36._8_4_ = SUB84(dVar17,0);
    auVar36._0_8_ = dVar1;
    auVar36._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar30 = sqrtpd(auVar30,auVar36);
    uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
    uVar33 = (uint)(uVar15 >> 0x20);
    uVar34 = (uint)(uVar16 >> 0x20);
    fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar37._0_8_ = uVar15 & (ulonglong)(auVar36._0_8_ * dVar10);
    uVar12 = uVar16 & (ulonglong)(auVar36._8_8_ * dVar2);
    auVar37._8_4_ = (undefined4)uVar12;
    auVar37._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar19._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar19._4_4_ =
         ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar19._8_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar19._12_4_ =
         ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
    __return_storage_ptr__->X = (double)SUB168(auVar37 | auVar19,0);
    __return_storage_ptr__->Y = (double)SUB168(auVar37 | auVar19,8);
    auVar20._0_8_ = (ulonglong)(auVar30._0_8_ * dVar3) & uVar15;
    uVar12 = (ulonglong)(auVar30._8_8_ * dVar31) & uVar16;
    auVar20._8_4_ = (undefined4)uVar12;
    auVar20._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar26._0_4_ = ~(uint)uVar15 & SUB84((double)fVar7,0);
    auVar26._4_4_ = ~uVar33 & (uint)((ulonglong)(double)fVar7 >> 0x20);
    auVar26._8_4_ = ~(uint)uVar16 & SUB84((double)fVar8,0);
    auVar26._12_4_ = ~uVar34 & (uint)((ulonglong)(double)fVar8 >> 0x20);
    __return_storage_ptr__->Z = (double)SUB168(auVar26 | auVar20,0);
    __return_storage_ptr__->W = (double)SUB168(auVar26 | auVar20,8);
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar17 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      pTVar14 = &UE::Math::TVector<double>::YAxisVector;
    }
    dVar24 = (pTVar14->field0_0x0)._s_0.X;
    dVar4 = (pTVar14->field0_0x0)._s_0.Y;
    dVar3 = dVar1 * (pTVar14->field0_0x0)._s_0.Z - dVar2 * dVar4;
    dVar29 = dVar2 * dVar24 - dVar17 * (pTVar14->field0_0x0)._s_0.Z;
    dVar24 = dVar17 * dVar4 - dVar1 * dVar24;
    dVar35 = (dVar1 * dVar24 - dVar2 * dVar29) * __real_3feffffffffffff7;
    dVar31 = __return_storage_ptr__->Z;
    dVar10 = __return_storage_ptr__->W;
    uVar5 = __return_storage_ptr__->X;
    uVar6 = __return_storage_ptr__->Y;
    dVar25 = (dVar3 * dVar2 - dVar17 * dVar24) * __real_3feffffffffffff7;
    dVar3 = (dVar17 * dVar29 - dVar3 * dVar1) * __real_3feffffffffffff7;
    auVar27._8_4_ = (int)uVar5;
    auVar27._0_8_ = uVar5;
    auVar27._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    auVar21._8_4_ = SUB84(__real_be6777a5cf72cecc,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = (int)((ulonglong)__real_be6777a5cf72cecc >> 0x20);
    dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    auVar30._0_8_ = dVar3 * dVar10;
    auVar30._8_8_ = __real_be6777a5cf72cecc * dVar10;
    dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar24 = (double)uVar5 * dVar25 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar30._0_8_ +
             dVar35 * (double)uVar6 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar31 * __real_be6777a5cf72cecc *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar4 = (double)uVar5 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
            + auVar30._8_8_ +
            dVar25 * (double)uVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
            + dVar31 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    __return_storage_ptr__->X =
         (double)uVar5 * __real_be6777a5cf72cecc *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar35 * dVar10 +
         dVar3 * (double)uVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar31 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    __return_storage_ptr__->Y =
         auVar27._8_8_ * dVar3 * dVar1 + dVar25 * dVar10 + auVar21._8_8_ * (double)uVar6 * dVar17 +
         dVar31 * dVar35 * dVar2;
    auVar11._8_4_ = SUB84(dVar4,0);
    auVar11._0_8_ = dVar24;
    auVar11._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    __return_storage_ptr__->Z = dVar24;
    __return_storage_ptr__->W = (double)auVar11._8_8_;
  }
  dVar2 = __return_storage_ptr__->X;
  dVar3 = __return_storage_ptr__->Y;
  dVar24 = __return_storage_ptr__->Z;
  dVar4 = __return_storage_ptr__->W;
  dVar17 = dVar24 * dVar24 + dVar2 * dVar2;
  dVar31 = dVar4 * dVar4 + dVar3 * dVar3;
  dVar1 = dVar31 + dVar17;
  dVar17 = dVar17 + dVar31;
  auVar9._8_4_ = SUB84(dVar17,0);
  auVar9._0_8_ = dVar1;
  auVar9._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar30 = sqrtpd(auVar30,auVar9);
  uVar16 = -(ulonglong)(dVar13 <= dVar1);
  uVar15 = -(ulonglong)(dVar13 <= dVar17);
  uVar33 = (uint)(uVar16 >> 0x20);
  uVar34 = (uint)(uVar15 >> 0x20);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
  auVar32._0_8_ = uVar16 & (ulonglong)(auVar36._0_8_ * dVar2);
  uVar12 = uVar15 & (ulonglong)(auVar36._8_8_ * dVar3);
  auVar32._8_4_ = (undefined4)uVar12;
  auVar32._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar22._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  auVar28._0_4_ = ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar28._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar28._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar28._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar23._0_8_ = (ulonglong)(auVar30._0_8_ * dVar24) & uVar16;
  uVar15 = (ulonglong)(auVar30._8_8_ * dVar4) & uVar15;
  auVar23._8_4_ = (undefined4)uVar15;
  auVar23._12_4_ = (undefined4)(uVar15 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar32 | auVar22,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar32 | auVar22,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar28 | auVar23,0);
  __return_storage_ptr__->W = (double)SUB168(auVar28 | auVar23,8);
  return __return_storage_ptr__;
}

// GetFunction @ 1464b3470

TFunction<void___cdecl(void)> * __thiscall
UTickableLookAtConstraint::GetFunction
          (UTickableLookAtConstraint *this,TFunction<void___cdecl(void)> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(UTickableLookAtConstraint **)&__return_storage_ptr__->field_0x18 = this;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,void>::Call;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b5d50

UClass * __cdecl UTickableLookAtConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableLookAtConstraint",
               &Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton,
               StaticRegisterNativesUTickableLookAtConstraint,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTickableLookAtConstraint>,
               InternalVTableHelperCtorCaller<UTickableLookAtConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableLookAtConstraint.InnerSingleton;
}

// NeedsCompensation @ 1464ba100

bool __thiscall UTickableLookAtConstraint::NeedsCompensation(UTickableLookAtConstraint *this)

{
  return false;
}

// StaticRegisterNativesUTickableLookAtConstraint @ 1464c1ff0

void __cdecl UTickableLookAtConstraint::StaticRegisterNativesUTickableLookAtConstraint(void)

{
  return;
}

