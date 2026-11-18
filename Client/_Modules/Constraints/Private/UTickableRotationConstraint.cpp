// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 11

// StaticClass @ 14648d940

UClass * __cdecl UTickableRotationConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableRotationConstraint",
               &Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton,
               StaticRegisterNativesUTickableRotationConstraint,0xf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableRotationConstraint>,
               InternalVTableHelperCtorCaller<UTickableRotationConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton;
}

// UTickableRotationConstraint @ 14649eac0

UTickableRotationConstraint * __thiscall
UTickableRotationConstraint::UTickableRotationConstraint
          (UTickableRotationConstraint *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint
            ((UTickableTransformConstraint *)this,param_1);
  *(undefined ***)this = &___7UTickableRotationConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->OffsetRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->OffsetRotation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->OffsetRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->OffsetRotation).W = dVar1;
  (this->AxisFilter).bX = true;
  (this->AxisFilter).bY = true;
  (this->AxisFilter).bZ = true;
  return this;
}

// UTickableRotationConstraint @ 14649eb20

UTickableRotationConstraint * __thiscall
UTickableRotationConstraint::UTickableRotationConstraint(UTickableRotationConstraint *this)

{
  double dVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint((UTickableTransformConstraint *)this);
  *(undefined ***)this = &___7UTickableRotationConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->OffsetRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->OffsetRotation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->OffsetRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->OffsetRotation).W = dVar1;
  (this->AxisFilter).bX = true;
  (this->AxisFilter).bY = true;
  (this->AxisFilter).bZ = true;
  this->field_0xa9 = 1;
  return this;
}

// ~UTickableRotationConstraint @ 14649fbf0

void __thiscall
UTickableRotationConstraint::~UTickableRotationConstraint(UTickableRotationConstraint *this)

{
  *(undefined ***)this = &___7UTickableConstraint__6B_;
  *(undefined4 *)&this->field_0x88 = 0;
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x40);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1464a1080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>::operator()(void *this)

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
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  float fVar31;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  TRotator<double> local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  cVar13 = (**(code **)(**(longlong **)this + 0x2d0))();
  if (cVar13 != '\0') {
    fVar31 = (*(UTickableTransformConstraint **)this)->Weight;
    if (__real_3f800000 <= fVar31) {
      fVar31 = __real_3f800000;
    }
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    if (__real_38d1b717 <= fVar31) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)this);
      pTVar14 = UTickableTransformConstraint::GetParentGlobalTransform
                          (*(UTickableTransformConstraint **)this,&local_148);
      auVar25 = *(undefined1 (*) [16])(pTVar14->Rotation).XY.m128d_f64;
      dVar3 = auVar25._0_8_;
      dVar19 = auVar25._8_8_;
      auVar27 = *(undefined1 (*) [16])(pTVar14->Rotation).ZW.m128d_f64;
      dVar6 = auVar27._0_8_;
      dVar7 = auVar27._8_8_;
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)this,&local_e8);
      lVar1 = *(longlong *)this;
      local_188.X = local_e8.Rotation.XY.m128d_f64[0];
      local_188.Y = local_e8.Rotation.XY.m128d_f64[1];
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
      local_1c8._8_4_ = SUB84(dVar19,0);
      local_1c8._0_8_ = dVar3;
      local_1c8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_1b8._8_4_ = SUB84(dVar7,0);
      local_1b8._0_8_ = dVar6;
      local_1b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      if (fVar31 < __real_3f7ff972) {
        pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (&local_168,&local_188,(TQuat<double> *)local_1c8,(double)fVar31);
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
        local_1c8 = auVar28 | auVar20;
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
        local_1b8 = auVar23 | auVar21;
      }
      lVar1 = *(longlong *)this;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1c8,&local_1a8);
      pTVar16 = UE::Math::TQuat<double>::Rotator(&local_188,(TRotator<double> *)&local_168);
      if (*(char *)(lVar1 + 0xe0) == '\0') {
        local_1a8.Roll = pTVar16->Roll;
      }
      if (*(char *)(lVar1 + 0xe1) == '\0') {
        local_1a8.Pitch = pTVar16->Pitch;
      }
      if (*(char *)(lVar1 + 0xe2) == '\0') {
        local_1a8.Yaw = pTVar16->Yaw;
      }
      pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_1a8,&local_168);
      lVar1 = *(longlong *)this;
      local_e8.Rotation.XY.m128d_f64[0] = pTVar15->X;
      local_e8.Rotation.XY.m128d_f64[1] = pTVar15->Y;
      local_1c8._0_8_ = pTVar15->X;
      local_1c8._8_8_ = pTVar15->Y;
      local_e8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar15->Z;
      local_e8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&pTVar15->Z + 4);
      local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar15->W;
      local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar15->W + 4);
      local_1b8._0_8_ = pTVar15->Z;
      local_1b8._8_8_ = pTVar15->W;
      plVar2 = *(longlong **)(lVar1 + 0x98);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar13 = (**(code **)(*plVar2 + 0x2b0))(plVar2,1), cVar13 != '\0')) {
        plVar2 = *(longlong **)(lVar1 + 0x98);
        (**(code **)(*plVar2 + 0x2b8))(plVar2,&local_e8);
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)this + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)this + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// CalculateInputHash @ 1464a85b0

uint __thiscall UTickableRotationConstraint::CalculateInputHash(UTickableRotationConstraint *this)

{
  uint uVar1;
  TVector<double> *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TQuat<double> local_a8;
  TVector<double> local_88;
  TTransform<double> local_68;
  
  UTickableTransformConstraint::GetChildLocalTransform
            ((UTickableTransformConstraint *)this,&local_68);
  local_a8.X = local_68.Rotation.XY.m128d_f64[0];
  local_a8.Y = local_68.Rotation.XY.m128d_f64[1];
  local_a8.Z = local_68.Rotation.ZW.m128d_f64[0];
  local_a8.W = local_68.Rotation.ZW.m128d_f64[1];
  pTVar2 = UE::Math::TQuat<double>::Euler(&local_a8,&local_88);
  uVar1 = FCrc::MemCrc_DEPRECATED(pTVar2,0x18,0);
  uVar4 = uVar1 >> 0xd ^ -uVar1;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar5 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar1 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_68);
  local_a8.X = local_68.Rotation.XY.m128d_f64[0];
  local_a8.Y = local_68.Rotation.XY.m128d_f64[1];
  local_a8.Z = local_68.Rotation.ZW.m128d_f64[0];
  local_a8.W = local_68.Rotation.ZW.m128d_f64[1];
  pTVar2 = UE::Math::TQuat<double>::Euler(&local_a8,&local_88);
  uVar1 = FCrc::MemCrc_DEPRECATED(pTVar2,0x18,0);
  uVar4 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
  return (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// ComputeOffset @ 1464a9d80

void __thiscall UTickableRotationConstraint::ComputeOffset(UTickableRotationConstraint *this)

{
  char cVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  double dVar20;
  
  UTickableTransformConstraint::GetParentGlobalTransform
            ((UTickableTransformConstraint *)this,&local_118);
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_b8);
  dVar8 = UE::Math::TQuat<double>::Identity.Y;
  cVar1 = this->field_0xa0;
  (this->OffsetRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->OffsetRotation).Y = dVar8;
  dVar8 = UE::Math::TQuat<double>::Identity.W;
  (this->OffsetRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->OffsetRotation).W = dVar8;
  dVar8 = __real_3e45798ee0000000;
  if ((cVar1 != '\0') || (this->field_0xa8 != '\0')) {
    local_118.Rotation.XY.m128d_f64[0] =
         local_118.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_118.Rotation.XY.m128d_f64[1] =
         local_118.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_118.Rotation.ZW.m128d_f64[0] =
         local_118.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_118.Rotation.ZW.m128d_f64[1] =
         local_118.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar17._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
    auVar17._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
    auVar17._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[1] >> 0x20);
    dVar20 = auVar17._8_8_;
    auVar18._8_8_ = local_118.Rotation.ZW.m128d_f64[1];
    auVar18._0_8_ = dVar20;
    dVar2 = local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            local_b8.Rotation.XY.m128d_f64[0] * dVar20 +
            local_b8.Rotation.ZW.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar11 = local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_b8.Rotation.XY.m128d_f64[1] * local_118.Rotation.ZW.m128d_f64[1] +
             local_b8.Rotation.ZW.m128d_f64[1] * local_118.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar20 = local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             local_b8.Rotation.ZW.m128d_f64[0] * dVar20 +
             local_b8.Rotation.XY.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar4 = local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            local_b8.Rotation.ZW.m128d_f64[1] * local_118.Rotation.ZW.m128d_f64[1] +
            local_b8.Rotation.XY.m128d_f64[1] * local_118.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar21._8_4_ = SUB84(dVar11,0);
    auVar21._0_8_ = dVar2;
    auVar21._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->OffsetRotation).X = dVar2;
    (this->OffsetRotation).Y = (double)auVar21._8_8_;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar20;
    auVar3._12_4_ = uVar25;
    (this->OffsetRotation).Z = dVar20;
    (this->OffsetRotation).W = (double)auVar3._8_8_;
    dVar6 = (this->OffsetRotation).X;
    dVar7 = (this->OffsetRotation).Y;
    auVar12._8_4_ = SUB84(dVar4,0);
    auVar12._0_8_ = dVar20;
    auVar12._12_4_ = uVar25;
    dVar11 = dVar20 * dVar20 + dVar6 * dVar6;
    dVar15 = auVar12._8_8_ * dVar4 + dVar7 * dVar7;
    dVar2 = dVar15 + dVar11;
    dVar11 = dVar11 + dVar15;
    auVar19._8_4_ = SUB84(dVar11,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar19 = sqrtpd(auVar18,auVar19);
    uVar9 = -(ulonglong)(dVar8 <= dVar2);
    uVar10 = -(ulonglong)(dVar8 <= dVar11);
    uVar23 = (uint)(uVar9 >> 0x20);
    uVar24 = (uint)(uVar10 >> 0x20);
    auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar22._0_8_ = uVar9 & (ulonglong)(auVar21._0_8_ * dVar6);
    uVar5 = uVar10 & (ulonglong)(auVar21._8_8_ * dVar7);
    auVar22._8_4_ = (undefined4)uVar5;
    auVar22._12_4_ = (undefined4)(uVar5 >> 0x20);
    auVar13._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar13._4_4_ =
         ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar13._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar13._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
    auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar16._4_4_ =
         ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar16._12_4_ =
         ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    (this->OffsetRotation).X = (double)SUB168(auVar22 | auVar13,0);
    (this->OffsetRotation).Y = (double)SUB168(auVar22 | auVar13,8);
    auVar14._0_8_ = (ulonglong)(auVar19._0_8_ * dVar20) & uVar9;
    uVar10 = (ulonglong)(auVar19._8_8_ * dVar4) & uVar10;
    auVar14._8_4_ = (undefined4)uVar10;
    auVar14._12_4_ = (undefined4)(uVar10 >> 0x20);
    (this->OffsetRotation).Z = (double)SUB168(auVar16 | auVar14,0);
    (this->OffsetRotation).W = (double)SUB168(auVar16 | auVar14,8);
  }
  return;
}

// GetFunction @ 1464b34f0

TFunction<void___cdecl(void)> * __thiscall
UTickableRotationConstraint::GetFunction
          (UTickableRotationConstraint *this,TFunction<void___cdecl(void)> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(UTickableRotationConstraint **)&__return_storage_ptr__->field_0x18 = this;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,void>::Call
    ;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b5ed0

UClass * __cdecl UTickableRotationConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableRotationConstraint",
               &Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton,
               StaticRegisterNativesUTickableRotationConstraint,0xf0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableRotationConstraint>,
               InternalVTableHelperCtorCaller<UTickableRotationConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableRotationConstraint.InnerSingleton;
}

// OnHandleModified @ 1464bac10

void __thiscall
UTickableRotationConstraint::OnHandleModified
          (UTickableRotationConstraint *this,UTransformableHandle *param_1,EHandleEvent param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  TTransform<double> *pTVar9;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  
  UTickableTransformConstraint::OnHandleModified
            ((UTickableTransformConstraint *)this,param_1,param_2);
  cVar7 = (**(code **)(*(longlong *)this + 0x2d0))(this);
  if ((((cVar7 != '\0') && (this->field_0xa8 != '\0')) && (param_1 != (UTransformableHandle *)0x0))
     && (((*(UTransformableHandle **)&this->field_0x98 != (UTransformableHandle *)0x0 &&
          (*(UTransformableHandle **)&this->field_0x98 == param_1)) && (param_2 < ComponentUpdated))
        )) {
    uVar8 = CalculateInputHash(this);
    if (uVar8 != (this->Cache).CachedInputHash) {
      (this->Cache).CachedInputHash = uVar8;
      if (param_2 == GlobalTransformUpdated) {
        UTickableTransformConstraint::GetParentGlobalTransform
                  ((UTickableTransformConstraint *)this,&local_b8);
        UTickableTransformConstraint::GetChildGlobalTransform
                  ((UTickableTransformConstraint *)this,&local_118);
        local_b8.Rotation.XY.m128d_f64[0] =
             local_b8.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        local_b8.Rotation.XY.m128d_f64[1] =
             local_b8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        local_b8.Rotation.ZW.m128d_f64[0] =
             local_b8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        local_b8.Rotation.ZW.m128d_f64[1] =
             local_b8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar2 = local_b8.Rotation.XY.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[1] +
                local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                local_b8.Rotation.ZW.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar3 = local_b8.Rotation.XY.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                local_118.Rotation.XY.m128d_f64[1] * local_b8.Rotation.ZW.m128d_f64[1] +
                local_118.Rotation.ZW.m128d_f64[1] * local_b8.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                local_b8.Rotation.ZW.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar5 = local_b8.Rotation.XY.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                local_118.Rotation.ZW.m128d_f64[0] * local_b8.Rotation.ZW.m128d_f64[1] +
                local_118.Rotation.XY.m128d_f64[0] * local_b8.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_b8.Rotation.ZW.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar6 = local_b8.Rotation.XY.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                local_118.Rotation.ZW.m128d_f64[1] * local_b8.Rotation.ZW.m128d_f64[1] +
                local_118.Rotation.XY.m128d_f64[1] * local_b8.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                local_b8.Rotation.ZW.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar1._8_4_ = SUB84(dVar3,0);
        auVar1._0_8_ = dVar2;
        auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        (this->OffsetRotation).X = dVar2;
        (this->OffsetRotation).Y = (double)auVar1._8_8_;
        auVar4._8_4_ = SUB84(dVar6,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        (this->OffsetRotation).Z = dVar5;
        (this->OffsetRotation).W = (double)auVar4._8_8_;
      }
      else {
        pTVar9 = UTickableTransformConstraint::GetChildLocalTransform
                           ((UTickableTransformConstraint *)this,&local_118);
        dVar2 = (pTVar9->Rotation).XY.m128d_f64[1];
        dVar3 = (pTVar9->Rotation).ZW.m128d_f64[0];
        dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
        (this->OffsetRotation).X = (pTVar9->Rotation).XY.m128d_f64[0];
        (this->OffsetRotation).Y = dVar2;
        (this->OffsetRotation).Z = dVar3;
        (this->OffsetRotation).W = dVar5;
      }
    }
  }
  return;
}

// StaticRegisterNativesUTickableRotationConstraint @ 1464c2010

void __cdecl UTickableRotationConstraint::StaticRegisterNativesUTickableRotationConstraint(void)

{
  return;
}

