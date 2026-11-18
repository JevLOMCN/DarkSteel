// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463e5a70

UScriptStruct * __cdecl FAnimNode_TwoBoneIK::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK,(UObject *)pUVar1,
                         L"AnimNode_TwoBoneIK");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton;
}

// FAnimNode_TwoBoneIK @ 146406100

FAnimNode_TwoBoneIK * __thiscall FAnimNode_TwoBoneIK::FAnimNode_TwoBoneIK(FAnimNode_TwoBoneIK *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  *(undefined ***)this = &___7FAnimNode_TwoBoneIK__6B_;
  (this->IKBone).BoneName.ComparisonIndex = 0;
  (this->IKBone).BoneName.Number = 0;
  puVar1 = &(this->IKBone).field_0x8;
  (this->IKBone).BoneIndex = -1;
  (this->IKBone).bUseSkeletonIndex = 0;
  (this->IKBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->StartStretchRatio = 1.0;
  this->MaxStretchScale = 1.2000000476837158;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EffectorLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EffectorLocation).field0_0x0._s_0.Y = (double)uVar16;
  (this->EffectorLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CachedUpperLimbIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->EffectorTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->EffectorTarget).BoneReference.BoneName.Number = 0;
  puVar1 = &(this->EffectorTarget).BoneReference.field_0x8;
  (this->EffectorTarget).BoneReference.BoneIndex = -1;
  (this->EffectorTarget).BoneReference.bUseSkeletonIndex = 0;
  (this->EffectorTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64 =
       auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64 =
       auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->EffectorTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64 = auVar9;
  (this->EffectorTarget).SocketReference.SocketName.ComparisonIndex = 0;
  (this->EffectorTarget).SocketReference.SocketName.Number = 0;
  (this->EffectorTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
  (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex =
       (FCompactPoseBoneIndex)0xffffffff;
  (this->EffectorTarget).bUseSocket = false;
  (this->EffectorTarget).BoneReference.BoneName.ComparisonIndex = 0;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EffectorTarget).BoneReference.BoneName.Number = 0;
  (this->JointTargetLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->JointTargetLocation).field0_0x0._s_0.Y = (double)uVar16;
  (this->JointTargetLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CachedLowerLimbIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->JointTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->JointTarget).BoneReference.BoneName.Number = 0;
  puVar1 = &(this->JointTarget).BoneReference.field_0x8;
  (this->JointTarget).BoneReference.BoneIndex = -1;
  (this->JointTarget).BoneReference.bUseSkeletonIndex = 0;
  (this->JointTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64 = auVar12
  ;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64 = auVar13
  ;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->JointTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64 = auVar15;
  (this->JointTarget).SocketReference.SocketName.ComparisonIndex = 0;
  (this->JointTarget).SocketReference.SocketName.Number = 0;
  (this->JointTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
  (this->JointTarget).SocketReference.CachedSocketCompactBoneIndex =
       (FCompactPoseBoneIndex)0xffffffff;
  (this->JointTarget).bUseSocket = false;
  (this->JointTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->JointTarget).BoneReference.BoneName.Number = 0;
  FAxis::FAxis(&this->TwistAxis,&UE::Math::TVector<double>::ForwardVector);
  this->bAllowStretching = '\0';
  this->bMaintainEffectorRelRot = '\0';
  this->bTakeRotationFromEffectorSpace = '\0';
  this->bAllowTwist = '\x01';
  this->EffectorLocationSpace = '\x01';
  this->JointTargetLocationSpace = '\x01';
  return this;
}

// operator() @ 14640f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FAnimNode_TwoBoneIK::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
          (void *this,TTransform<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar24;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TQuat<double> local_168;
  TQuat<double> local_148;
  TQuat<double> local_128;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_108,param_1);
  local_198 = local_108.Rotation.ZW.m128d_f64[0];
  dStack_190 = local_108.Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::ToSwingTwist
            ((TQuat<double> *)local_1a8,param_4,(TQuat<double> *)local_188,&local_148);
  dVar9 = __real_3e45798ee0000000;
  local_1b8 = __real_3e45798ee0000000;
  dVar23 = (double)local_188._0_8_ * (double)local_188._0_8_ +
           (double)local_178._0_8_ * (double)local_178._0_8_;
  dVar32 = (double)local_188._8_8_ * (double)local_188._8_8_ +
           (double)local_178._8_8_ * (double)local_178._8_8_;
  auVar42._8_4_ = SUB84(dVar32,0);
  auVar42._0_8_ = dVar23;
  auVar42._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar38._0_8_ = auVar42._8_8_ + dVar23;
  auVar38._8_8_ = dVar23 + dVar32;
  auVar39 = sqrtpd(in_XMM4,auVar38);
  uVar11 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._0_8_);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= auVar38._8_8_);
  uVar46 = (uint)(uVar11 >> 0x20);
  uVar47 = (uint)(uVar12 >> 0x20);
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
  auVar43._0_8_ = uVar11 & (ulonglong)(auVar42._0_8_ * (double)local_188._0_8_);
  uVar10 = uVar12 & (ulonglong)(auVar42._8_8_ * (double)local_188._8_8_);
  auVar43._8_4_ = (undefined4)uVar10;
  auVar43._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar25._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar25._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar25._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar25._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_188 = auVar43 | auVar25;
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
  auVar37._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar37._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar37._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar37._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_198 = (param_3->Rotation).ZW.m128d_f64[0];
  dStack_190 = (param_3->Rotation).ZW.m128d_f64[1];
  auVar26._0_8_ = (ulonglong)(auVar39._0_8_ * (double)local_178._0_8_) & uVar11;
  uVar12 = (ulonglong)(auVar39._8_8_ * (double)local_178._8_8_) & uVar12;
  auVar26._8_4_ = (undefined4)uVar12;
  auVar26._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar37 = auVar37 | auVar26;
  local_1a8 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  local_178 = auVar37;
  UE::Math::TQuat<double>::ToSwingTwist((TQuat<double> *)local_1a8,param_4,&local_128,&local_168);
  dVar23 = local_168.X * local_168.X + local_168.Z * local_168.Z;
  dVar32 = local_168.Y * local_168.Y + local_168.W * local_168.W;
  auVar15._8_4_ = SUB84(dVar32,0);
  auVar15._0_8_ = dVar23;
  auVar15._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  auVar16._0_8_ = auVar15._8_8_ + dVar23;
  auVar16._8_8_ = dVar23 + dVar32;
  auVar38 = sqrtpd(auVar37,auVar16);
  uVar12 = -(ulonglong)(dVar9 <= auVar16._0_8_);
  uVar11 = -(ulonglong)(dVar9 <= auVar16._8_8_);
  uVar46 = (uint)(uVar12 >> 0x20);
  uVar47 = (uint)(uVar11 >> 0x20);
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
  auVar44._0_8_ = uVar12 & (ulonglong)(auVar39._0_8_ * local_168.X);
  uVar10 = uVar11 & (ulonglong)(auVar39._8_8_ * local_168.Y);
  auVar44._8_4_ = (undefined4)uVar10;
  auVar44._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar39 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar42 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  auVar27._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar27._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar27._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  dVar9 = auVar39._0_8_;
  dVar23 = auVar39._8_8_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
  auVar28._0_8_ = (ulonglong)(auVar38._0_8_ * local_168.Z) & uVar12;
  uVar10 = (ulonglong)(auVar38._8_8_ * local_168.W) & uVar11;
  auVar28._8_4_ = (undefined4)uVar10;
  auVar28._12_4_ = (undefined4)(uVar10 >> 0x20);
  dVar3 = auVar42._8_8_;
  auVar34._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar34._4_4_ =
       ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar34._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar34._12_4_ =
       ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar2 = auVar42._0_8_;
  auVar29._8_4_ = auVar39._8_4_;
  auVar29._0_8_ = dVar23;
  auVar29._12_4_ = auVar39._12_4_;
  local_1b8 = SUB168(auVar44 | auVar27,0);
  dStack_1b0 = SUB168(auVar44 | auVar27,8);
  auVar17._8_4_ = auVar42._0_4_;
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = auVar42._4_4_;
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar6 = dVar9 * (double)local_178._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          (double)local_188._0_8_ * dVar3 +
          dVar23 * (double)local_178._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar2 * (double)local_188._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar7 = dVar9 * (double)local_178._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          (double)local_188._8_8_ * dVar3 +
          auVar29._8_8_ * (double)local_178._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar17._8_8_ * (double)local_188._0_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = dVar9 * (double)local_188._8_8_ * dVar4 + dVar3 * (double)local_178._0_8_ +
          (double)local_188._0_8_ * dVar23 * dVar24 + dVar2 * (double)local_178._8_8_ * dVar32;
  dVar9 = dVar9 * (double)local_188._0_8_ * dVar5 + dVar3 * (double)local_178._8_8_ +
          (double)local_188._8_8_ * dVar23 * dVar33 + dVar2 * (double)local_178._0_8_ * dVar1;
  uVar48 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_1a8._0_8_ = SUB168(auVar34 | auVar28,0);
  local_1a8._8_8_ = SUB168(auVar34 | auVar28,8);
  auVar35._8_4_ = SUB84(dVar6,0);
  auVar35._0_8_ = dVar6;
  auVar35._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar40._8_4_ = SUB84(dVar9,0);
  auVar40._0_8_ = dVar8;
  auVar40._12_4_ = uVar48;
  dVar23 = auVar40._8_8_;
  auVar18._8_4_ = SUB84(dVar9,0);
  auVar18._0_8_ = dVar23;
  auVar18._12_4_ = uVar48;
  auVar30._8_4_ = SUB84(dVar7,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar36._0_8_ =
       dVar6 * (double)local_1a8._8_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar23 * local_1b8 +
       dVar7 * (double)local_1a8._0_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar8 * dStack_1b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar36._8_8_ =
       auVar35._8_8_ * (double)local_1a8._0_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar18._8_8_ * dStack_1b0
       + auVar30._8_8_ * (double)local_1a8._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar19._8_8_ * local_1b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar36;
  dVar9 = dVar6 * local_1b8 * dVar5 + dVar9 * (double)local_1a8._8_8_ + dVar7 * dStack_1b0 * dVar33
          + dVar8 * (double)local_1a8._0_8_ * dVar1;
  auVar39._8_4_ = SUB84(dVar9,0);
  auVar39._0_8_ =
       dVar6 * dStack_1b0 * dVar4 + dVar23 * (double)local_1a8._0_8_ + dVar7 * local_1b8 * dVar24 +
       dVar8 * (double)local_1a8._8_8_ * dVar32;
  auVar39._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar39;
  dVar9 = (param_2->Rotation).XY.m128d_f64[0];
  dVar23 = (param_2->Rotation).XY.m128d_f64[1];
  dVar32 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar24 = dVar32 * dVar32 + dVar9 * dVar9;
  dVar33 = dVar1 * dVar1 + dVar23 * dVar23;
  auVar20._8_4_ = SUB84(dVar33,0);
  auVar20._0_8_ = dVar24;
  auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar21._0_8_ = auVar20._8_8_ + dVar24;
  auVar21._8_8_ = dVar24 + dVar33;
  auVar42 = sqrtpd(auVar36,auVar21);
  uVar12 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar21._0_8_);
  uVar13 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar21._8_8_);
  uVar11 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar21._0_8_);
  uVar14 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar21._8_8_);
  auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
  auVar22._0_8_ = (ulonglong)(auVar39._0_8_ * dVar9) & uVar11;
  uVar10 = uVar14 & (ulonglong)(auVar39._8_8_ * dVar23);
  auVar22._8_4_ = (undefined4)uVar10;
  auVar22._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar45._0_4_ = ~(uint)uVar11 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar45._4_4_ = ~(uint)(uVar11 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar45._8_4_ = ~(uint)uVar14 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar45._12_4_ = ~(uint)(uVar14 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar41._0_8_ = uVar12 & (ulonglong)(auVar42._0_8_ * dVar32);
  uVar10 = uVar13 & (ulonglong)(auVar42._8_8_ * dVar1);
  auVar41._8_4_ = (undefined4)uVar10;
  auVar41._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar31._0_4_ = ~(uint)uVar12 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar31._4_4_ = ~(uint)(uVar12 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar31._8_4_ = ~(uint)uVar13 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar31._12_4_ = ~(uint)(uVar13 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar22 | auVar45;
  *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar41 | auVar31;
  return;
}

// EvaluateSkeletalControl_AnyThread @ 1464383f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_TwoBoneIK::EvaluateSkeletalControl_AnyThread
          (FAnimNode_TwoBoneIK *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uchar uVar4;
  FBoneContainer *this_00;
  FCompactPoseBoneIndex *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_TwoBoneIK_Eval> FVar21;
  TTransform<double> *pTVar22;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar23;
  longlong lVar24;
  FNameEntryId FVar25;
  FName FVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStackY_708 [32];
  FCompactPoseBoneIndex local_6a4;
  FCompactPoseBoneIndex local_6a0;
  uint uStack_69c;
  FColor_u_0 local_698 [2];
  FName local_690;
  FAnimNode_TwoBoneIK *local_688;
  FName local_680;
  LARGE_INTEGER local_670;
  FStatMessage local_668;
  TVector<double>_u_0 local_658;
  FName local_640;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  double local_608;
  double dStack_600;
  double local_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  undefined1 local_5b8 [32];
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  FCompactPoseBoneIndex local_498;
  undefined4 uStack_494;
  undefined8 uStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  FCompactPoseBoneIndex local_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  FCompactPoseBoneIndex local_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  int local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined1 auStack_38c [12];
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [32];
  double local_328;
  double dStack_320;
  __m128d local_318;
  double local_308;
  double dStack_300;
  __m128d local_2f8;
  TTransform<double> local_2e8;
  undefined1 local_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_708;
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoBoneIK::EvaluateSkeletalControl_AnyThread");
  FVar21 = StatPtr_STAT_TwoBoneIK_Eval;
  if (StatPtr_STAT_TwoBoneIK_Eval == (FThreadSafeStaticStat<FStat_STAT_TwoBoneIK_Eval>)0x0) {
    pFVar20 = ::FName::FName(&local_640,"STAT_TwoBoneIK_Eval");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_TwoBoneIK_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TwoBoneIK_Eval,*pFVar20,
                        L"TwoBoneIK Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar12 = false;
  bVar14 = false;
  local_680.ComparisonIndex.Value = 0;
  local_680.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar23 = FVar26.Number;
  if ((FVar25.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_698[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_698[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_690.ComparisonIndex.Value = FVar25.Value;
        local_690.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_690,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_TwoBoneIK.cpp"
                   ,0x4e);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_6a0 = (FCompactPoseBoneIndex)FVar25.Value;
      uStack_69c = uVar23;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar13 = true;
      goto LAB_14643857b;
    }
  }
  bVar13 = false;
  FVar26 = local_680;
LAB_14643857b:
  if (param_2->ArrayNum != 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutBoneTransforms.Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_TwoBoneIK.cpp"
                        ,0x50,L"");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  FBoneReference::GetCompactPoseIndex(&this->IKBone,(FBoneContainer *)&local_6a4);
  uVar4 = (this->EffectorLocationSpace).Value;
  if ((uVar4 == '\x02') || (bVar17 = false, uVar4 == '\x03')) {
    bVar17 = true;
  }
  FCSPose<FCompactPose>::GetLocalSpaceTransform(&param_1->Pose,&local_108,local_6a4);
  FCSPose<FCompactPose>::GetLocalSpaceTransform
            (&param_1->Pose,&local_168,this->CachedLowerLimbIndex);
  FCSPose<FCompactPose>::GetLocalSpaceTransform
            (&param_1->Pose,&local_1c8,this->CachedUpperLimbIndex);
  pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,this->CachedLowerLimbIndex);
  local_4f8.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
  local_4f8.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
  local_4f8.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
  local_4f8.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
  local_4f8.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
  local_4f8.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
  local_4f8.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
  local_4f8.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
  local_4f8.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
  local_4f8.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
  local_4f8.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
  local_4f8.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
  pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,this->CachedUpperLimbIndex);
  local_558.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
  local_558.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
  local_558.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
  local_558.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
  local_558.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
  local_558.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
  local_558.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
  local_558.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
  local_558.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
  local_558.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
  local_558.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
  local_558.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
  pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_6a4);
  dVar16 = local_4f8.Translation.ZW.m128d_f64[0];
  dVar15 = local_4f8.Translation.XY.m128d_f64[1];
  dVar38 = local_4f8.Translation.XY.m128d_f64[0];
  dVar34 = local_558.Translation.ZW.m128d_f64[0];
  dVar11 = local_558.Translation.XY.m128d_f64[1];
  dVar10 = local_558.Translation.XY.m128d_f64[0];
  local_5b8._0_8_ = (pTVar22->Rotation).XY.m128d_f64[0];
  local_5b8._8_8_ = (pTVar22->Rotation).XY.m128d_f64[1];
  local_5b8._16_8_ = (pTVar22->Rotation).ZW.m128d_f64[0];
  local_5b8._24_8_ = (pTVar22->Rotation).ZW.m128d_f64[1];
  dVar8 = (pTVar22->Translation).XY.m128d_f64[0];
  dVar9 = (pTVar22->Translation).XY.m128d_f64[1];
  dVar2 = (pTVar22->Translation).ZW.m128d_f64[0];
  dStack_580 = (pTVar22->Translation).ZW.m128d_f64[1];
  local_578 = (pTVar22->Scale3D).XY.m128d_f64[0];
  dStack_570 = (pTVar22->Scale3D).XY.m128d_f64[1];
  local_568 = (pTVar22->Scale3D).ZW.m128d_f64[0];
  dStack_560 = (pTVar22->Scale3D).ZW.m128d_f64[1];
  local_608 = local_558.Translation.XY.m128d_f64[0];
  dStack_600 = local_558.Translation.XY.m128d_f64[1];
  local_5f8 = local_558.Translation.ZW.m128d_f64[0];
  local_5f0 = local_4f8.Translation.XY.m128d_f64[0];
  dStack_5e8 = local_4f8.Translation.XY.m128d_f64[1];
  local_5e0 = local_4f8.Translation.ZW.m128d_f64[0];
  local_5d8 = dVar8;
  dStack_5d0 = dVar9;
  local_5c8 = dVar2;
  local_598 = dVar8;
  dStack_590 = dVar9;
  local_588 = dVar2;
  GetTargetTransform((TTransform<double> *)local_288,
                     (TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,
                     &this->EffectorTarget,(uint)(this->EffectorLocationSpace).Value,
                     &this->EffectorLocation);
  GetTargetTransform(&local_228,(TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,
                     &this->JointTarget,(uint)(this->JointTargetLocationSpace).Value,
                     &this->JointTargetLocation);
  local_620._s_0.X = local_228.Translation.XY.m128d_f64[0];
  local_620._s_0.Y = local_228.Translation.XY.m128d_f64[1];
  local_638._s_0.X = local_268;
  local_638._s_0.Y = dStack_260;
  local_620._s_0.Z = local_228.Translation.ZW.m128d_f64[0];
  local_558.Translation.ZW.m128d_f64[1] = 0.0;
  local_638._s_0.Z = local_258;
  local_4f8.Translation.ZW.m128d_f64[1] = 0.0;
  dStack_580 = 0.0;
  local_598 = dVar8;
  dStack_590 = dVar9;
  local_588 = dVar2;
  local_558.Translation.XY.m128d_f64[0] = dVar10;
  local_558.Translation.XY.m128d_f64[1] = dVar11;
  local_558.Translation.ZW.m128d_f64[0] = dVar34;
  local_4f8.Translation.XY.m128d_f64[0] = dVar38;
  local_4f8.Translation.XY.m128d_f64[1] = dVar15;
  local_4f8.Translation.ZW.m128d_f64[0] = dVar16;
  AnimationCore::SolveTwoBoneIK
            (&local_558,&local_4f8,(TTransform<double> *)local_5b8,
             (TVector<double> *)&local_620._s_0,(TVector<double> *)&local_638._s_0,
             this->bAllowStretching,this->StartStretchRatio,this->MaxStretchScale);
  if (this->bAllowTwist == '\0') {
    local_688 = this;
    FBoneContainer::GetParentBoneIndex(this_00,&local_6a0);
    if ((this->TwistAxis).bInLocalSpace == false) {
      local_658._0_16_ = *(undefined1 (*) [16])&(this->TwistAxis).Axis.field0_0x0;
      local_658._s_0.Z = (this->TwistAxis).Axis.field0_0x0._s_0.Z;
    }
    else {
      auVar3 = *(undefined1 (*) [16])&(this->TwistAxis).Axis.field0_0x0;
      dVar2 = (this->TwistAxis).Axis.field0_0x0._s_0.Z;
      dVar34 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      dVar10 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      dVar38 = auVar3._8_8_;
      dVar11 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      auVar36._0_8_ =
           dVar38 * UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] -
           dVar34 * auVar3._0_8_;
      auVar36._8_8_ = dVar2 * dVar34 - dVar10 * dVar38;
      auVar35 = blendpd((undefined1  [16])
                        UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64,
                        (undefined1  [16])
                        UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64,2);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar2;
      auVar27 = blendpd(auVar3,auVar27,2);
      auVar28._0_8_ = auVar27._0_8_ * dVar10 - auVar35._0_8_ * dVar2;
      auVar28._8_8_ = auVar27._8_8_ * dVar11 - auVar35._8_8_ * 0.0;
      auVar27 = blendpd(auVar36,auVar28,2);
      dVar8 = auVar36._8_8_ + auVar36._8_8_;
      dVar9 = auVar28._0_8_ + auVar28._0_8_;
      uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar37._0_8_ = auVar27._0_8_ + auVar27._0_8_;
      auVar37._8_8_ = auVar27._8_8_ + auVar27._8_8_;
      auVar31._8_4_ = SUB84(dVar9,0);
      auVar31._0_8_ = dVar8;
      auVar31._12_4_ = uVar33;
      auVar29._8_4_ = SUB84(dVar9,0);
      auVar29._0_8_ = dVar8;
      auVar29._12_4_ = uVar33;
      auVar27 = blendpd(auVar29,auVar37,2);
      auVar32._0_8_ =
           auVar31._8_8_ * UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] -
           dVar8 * dVar34;
      auVar32._8_8_ = auVar37._0_8_ * dVar34 - dVar9 * dVar10;
      auVar30._0_8_ = auVar27._0_8_ * dVar10 - auVar37._0_8_ * auVar35._0_8_;
      auVar30._8_8_ = auVar27._8_8_ * dVar11 - auVar37._8_8_ * auVar35._8_8_;
      auVar27 = blendpd(auVar32,auVar30,2);
      dVar9 = dVar9 * dVar11 + dVar38 + auVar30._0_8_;
      local_658._s_0.Z = auVar37._0_8_ * dVar11 + dVar2 + auVar27._0_8_;
      local_658._8_4_ = SUB84(dVar9,0);
      local_658._0_8_ = dVar8 * dVar11 + auVar3._0_8_ + auVar32._8_8_;
      local_658._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    }
    if (local_6a0 != (FCompactPoseBoneIndex)0xffffffff) {
      pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_6a0);
      local_2e8.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
      local_2e8.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
      local_2e8.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
      local_2e8.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
      local_2e8.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
      local_2e8.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
      local_2e8.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
      local_2e8.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
      local_2e8.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
      local_2e8.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
      local_2e8.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
      local_2e8.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
      `FAnimNode_TwoBoneIK::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
                (&local_688,&local_2e8,&local_558,&local_1c8,(TVector<double> *)&local_658._s_0);
    }
    `FAnimNode_TwoBoneIK::EvaluateSkeletalControl_AnyThread'::__l12::<lambda_1>::operator()
              (&local_688,&local_558,&local_4f8,&local_168,(TVector<double> *)&local_658._s_0);
  }
  local_498 = this->CachedUpperLimbIndex;
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_488 = local_558.Rotation.XY.m128d_f64[0];
  dStack_480 = local_558.Rotation.XY.m128d_f64[1];
  local_478 = local_558.Rotation.ZW.m128d_f64[0];
  dStack_470 = local_558.Rotation.ZW.m128d_f64[1];
  local_468 = local_558.Translation.XY.m128d_f64[0];
  dStack_460 = local_558.Translation.XY.m128d_f64[1];
  local_458 = local_558.Translation.ZW.m128d_f64[0];
  dStack_450 = local_558.Translation.ZW.m128d_f64[1];
  local_448 = local_558.Scale3D.XY.m128d_f64[0];
  dStack_440 = local_558.Scale3D.XY.m128d_f64[1];
  local_438 = local_558.Scale3D.ZW.m128d_f64[0];
  dStack_430 = local_558.Scale3D.ZW.m128d_f64[1];
  if ((pFVar5 <= &local_498) && (&local_498 < pFVar5 + (longlong)param_2->ArrayMax * 0x1c)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  lVar24 = (longlong)iVar19 * 0x70;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar6 + lVar24) = CONCAT44(uStack_494,local_498);
  *(undefined8 *)(pFVar6 + lVar24 + 8) = uStack_490;
  *(double *)(pFVar6 + lVar24 + 0x10) = local_488;
  *(double *)(pFVar6 + lVar24 + 0x10 + 8) = dStack_480;
  *(double *)(pFVar6 + lVar24 + 0x20) = local_478;
  *(double *)(pFVar6 + lVar24 + 0x20 + 8) = dStack_470;
  *(double *)(pFVar6 + lVar24 + 0x30) = local_468;
  *(double *)(pFVar6 + lVar24 + 0x30 + 8) = dStack_460;
  *(double *)(pFVar6 + lVar24 + 0x40) = local_458;
  *(double *)(pFVar6 + lVar24 + 0x40 + 8) = dStack_450;
  *(double *)(pFVar6 + lVar24 + 0x50) = local_448;
  *(double *)(pFVar6 + lVar24 + 0x50 + 8) = dStack_440;
  *(double *)(pFVar6 + lVar24 + 0x60) = local_438;
  *(double *)(pFVar6 + lVar24 + 0x60 + 8) = dStack_430;
  local_428 = this->CachedLowerLimbIndex;
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_418 = local_4f8.Rotation.XY.m128d_f64[0];
  dStack_410 = local_4f8.Rotation.XY.m128d_f64[1];
  local_408 = local_4f8.Rotation.ZW.m128d_f64[0];
  dStack_400 = local_4f8.Rotation.ZW.m128d_f64[1];
  local_3f8 = local_4f8.Translation.XY.m128d_f64[0];
  dStack_3f0 = local_4f8.Translation.XY.m128d_f64[1];
  local_3e8 = local_4f8.Translation.ZW.m128d_f64[0];
  dStack_3e0 = local_4f8.Translation.ZW.m128d_f64[1];
  local_3d8 = local_4f8.Scale3D.XY.m128d_f64[0];
  dStack_3d0 = local_4f8.Scale3D.XY.m128d_f64[1];
  local_3c8 = local_4f8.Scale3D.ZW.m128d_f64[0];
  dStack_3c0 = local_4f8.Scale3D.ZW.m128d_f64[1];
  if ((pFVar5 <= &local_428) && (&local_428 < pFVar5 + (longlong)param_2->ArrayMax * 0x1c)) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  lVar24 = (longlong)iVar19 * 0x70;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar6 + lVar24) = CONCAT44(uStack_424,local_428);
  *(undefined8 *)(pFVar6 + lVar24 + 8) = uStack_420;
  *(double *)(pFVar6 + lVar24 + 0x10) = local_418;
  *(double *)(pFVar6 + lVar24 + 0x10 + 8) = dStack_410;
  *(double *)(pFVar6 + lVar24 + 0x20) = local_408;
  *(double *)(pFVar6 + lVar24 + 0x20 + 8) = dStack_400;
  *(double *)(pFVar6 + lVar24 + 0x30) = local_3f8;
  *(double *)(pFVar6 + lVar24 + 0x30 + 8) = dStack_3f0;
  *(double *)(pFVar6 + lVar24 + 0x40) = local_3e8;
  *(double *)(pFVar6 + lVar24 + 0x40 + 8) = dStack_3e0;
  *(double *)(pFVar6 + lVar24 + 0x50) = local_3d8;
  *(double *)(pFVar6 + lVar24 + 0x50 + 8) = dStack_3d0;
  *(double *)(pFVar6 + lVar24 + 0x60) = local_3c8;
  *(double *)(pFVar6 + lVar24 + 0x60 + 8) = dStack_3c0;
  if ((bVar17) && (this->bTakeRotationFromEffectorSpace != '\0')) {
    local_5b8._0_8_ = local_288._0_8_;
    local_5b8._8_8_ = local_288._8_8_;
    local_5b8._20_4_ = local_288._20_4_;
    local_5b8._16_4_ = local_288._16_4_;
    local_5b8._28_4_ = local_288._28_4_;
    local_5b8._24_4_ = local_288._24_4_;
  }
  else if (this->bMaintainEffectorRelRot == '\0') {
    local_288._16_4_ = local_5b8._16_4_;
    local_288._20_4_ = local_5b8._20_4_;
    local_288._24_4_ = local_5b8._24_4_;
    local_288._28_4_ = local_5b8._28_4_;
  }
  else {
    local_348._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_348._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_348._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_328 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dStack_320 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_348._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_348._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_348._28_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_308 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dStack_300 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_318.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_318.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_318.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_2f8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_2f8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2f8.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply((TTransform<double> *)local_348,&local_108,&local_4f8);
    local_598 = local_328;
    dStack_590 = dStack_320;
    local_588 = local_318.m128d_f64[0];
    dStack_580 = local_318.m128d_f64[1];
    local_578 = local_308;
    dStack_570 = dStack_300;
    local_568 = local_2f8.m128d_f64[0];
    dStack_560 = local_2f8.m128d_f64[1];
    local_5b8._0_8_ = local_348._0_8_;
    local_5b8._8_8_ = local_348._8_8_;
    local_5b8._16_8_ = local_348._16_8_;
    local_5b8._24_8_ = local_348._24_8_;
    local_288._16_4_ = local_348._16_4_;
    local_288._20_4_ = local_348._20_4_;
    local_288._24_4_ = local_348._24_4_;
    local_288._28_4_ = local_348._28_4_;
  }
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_3b8 = local_6a4;
  auStack_38c._4_8_ = local_598;
  dStack_380 = dStack_590;
  local_378 = local_588;
  dStack_370 = dStack_580;
  local_368 = local_578;
  dStack_360 = dStack_570;
  local_358 = local_568;
  dStack_350 = dStack_560;
  local_3a8 = (double)local_5b8._0_8_;
  dStack_3a0 = (double)local_5b8._8_8_;
  local_398 = local_288._16_4_;
  uStack_394 = local_288._20_4_;
  iStack_390 = local_288._24_4_;
  auStack_38c._0_4_ = local_288._28_4_;
  if ((pFVar5 <= &local_3b8) && (&local_3b8 < pFVar5 + (longlong)param_2->ArrayMax * 0x1c)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  lVar24 = (longlong)iVar19 * 0x70;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar6 + lVar24) = CONCAT44(uStack_3b4,local_3b8);
  *(undefined8 *)(pFVar6 + lVar24 + 8) = uStack_3b0;
  *(double *)(pFVar6 + lVar24 + 0x10) = local_3a8;
  *(double *)(pFVar6 + lVar24 + 0x10 + 8) = dStack_3a0;
  *(ulonglong *)(pFVar6 + lVar24 + 0x20) = CONCAT44(uStack_394,local_398);
  *(ulonglong *)(pFVar6 + lVar24 + 0x20 + 8) = CONCAT44(auStack_38c._0_4_,iStack_390);
  *(undefined8 *)(pFVar6 + lVar24 + 0x30) = auStack_38c._4_8_;
  *(double *)(pFVar6 + lVar24 + 0x30 + 8) = dStack_380;
  *(double *)(pFVar6 + lVar24 + 0x40) = local_378;
  *(double *)(pFVar6 + lVar24 + 0x40 + 8) = dStack_370;
  *(double *)(pFVar6 + lVar24 + 0x50) = local_368;
  *(double *)(pFVar6 + lVar24 + 0x50 + 8) = dStack_360;
  *(double *)(pFVar6 + lVar24 + 0x60) = local_358;
  *(double *)(pFVar6 + lVar24 + 0x60 + 8) = dStack_350;
  if (param_2->ArrayNum != 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("OutBoneTransforms.Num() == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_TwoBoneIK.cpp"
                        ,0xc2,L"");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"IK Bone",&(this->IKBone).BoneName);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_668.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_668.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_670);
      local_668.StatData.Pad[4] = '\0';
      local_668.StatData.Pad[5] = '\0';
      local_668.StatData.Pad[6] = '\0';
      local_668.StatData.Pad[7] = '\0';
      local_668.StatData.Pad[0] = local_670.s.LowPart._0_1_;
      local_668.StatData.Pad[1] = local_670.s.LowPart._1_1_;
      local_668.StatData.Pad[2] = local_670.s.LowPart._2_1_;
      local_668.StatData.Pad[3] = local_670.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_668);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446ec0

void __thiscall
FAnimNode_TwoBoneIK::GatherDebugData(FAnimNode_TwoBoneIK *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoBoneIK::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK,(UObject *)pUVar1,
                         L"AnimNode_TwoBoneIK");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_TwoBoneIK.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_48,"(",1);
  ::FString::PrintfImpl(&local_58,L"Alpha: %.1f%%");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->IKBone).BoneName,local_38);
  ::FString::PrintfImpl(&local_58,L" IKBone: %s)");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetTargetTransform @ 14644fd30

TTransform<double> * __cdecl
FAnimNode_TwoBoneIK::GetTargetTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          FCSPose<FCompactPose> *param_2,FBoneSocketTarget *param_3,EBoneControlSpace param_4,
          TVector<double> *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  longlong lVar12;
  TTransform<double> local_68;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  if (param_4 == BCS_BoneSpace) {
    pTVar11 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                        (param_3,&local_68,param_5,param_2,param_1);
    dVar1 = (pTVar11->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar11->Scale3D).ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  else {
    dVar10 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    lVar12 = 0x8c;
    if (param_3->bUseSocket == false) {
      lVar12 = 0x10;
    }
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (param_1,param_2,__return_storage_ptr__,
               *(FCompactPoseBoneIndex *)
                ((longlong)(&(param_3->SocketReference).CachedSocketLocalTransform.Rotation + -1) +
                lVar12),param_4);
  }
  return __return_storage_ptr__;
}

// InitializeBoneReferences @ 1464580e0

void __thiscall
FAnimNode_TwoBoneIK::InitializeBoneReferences(FAnimNode_TwoBoneIK *this,FBoneContainer *param_1)

{
  undefined1 *puVar1;
  FCompactPoseBoneIndex FVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int local_res8;
  FCompactPoseBoneIndex local_res18 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoBoneIK::InitializeBoneReferences");
  FBoneReference::Initialize(&this->IKBone,param_1);
  if ((this->EffectorTarget).bUseSocket == false) {
    FBoneReference::Initialize(&(this->EffectorTarget).BoneReference,param_1);
    (this->EffectorTarget).SocketReference.CachedSocketMeshBoneIndex =
         (FMeshPoseBoneIndex)0xffffffff;
    (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex =
         (FCompactPoseBoneIndex)0xffffffff;
  }
  else {
    FSocketReference::InitialzeCompactBoneIndex(&(this->EffectorTarget).SocketReference,param_1);
    (this->EffectorTarget).BoneReference.BoneIndex = -1;
    (this->EffectorTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  }
  if ((this->JointTarget).bUseSocket == false) {
    FBoneReference::Initialize(&(this->JointTarget).BoneReference,param_1);
    (this->JointTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
    (this->JointTarget).SocketReference.CachedSocketCompactBoneIndex =
         (FCompactPoseBoneIndex)0xffffffff;
  }
  else {
    FSocketReference::InitialzeCompactBoneIndex(&(this->JointTarget).SocketReference,param_1);
    (this->JointTarget).BoneReference.BoneIndex = -1;
    (this->JointTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  }
  FBoneReference::GetCompactPoseIndex(&this->IKBone,(FBoneContainer *)&local_res8);
  this->CachedLowerLimbIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->CachedUpperLimbIndex = (FCompactPoseBoneIndex)0xffffffff;
  if (local_res8 != -1) {
    FVar2 = FBoneContainer::GetParentBoneIndex(param_1,local_res18);
    FVar2 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar2);
    this->CachedLowerLimbIndex = FVar2;
    if (FVar2 != (FCompactPoseBoneIndex)0xffffffff) {
      FVar2 = FBoneContainer::GetParentBoneIndex(param_1,local_res18);
      this->CachedUpperLimbIndex = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar2);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645aa10

void __thiscall
FAnimNode_TwoBoneIK::Initialize_AnyThread
          (FAnimNode_TwoBoneIK *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_TwoBoneIK::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  this->field_0x41 = 0;
  this->field_0x8b = 0;
  FStatsHierarchical::EndMeasurement();
  if ((this->EffectorTarget).bUseSocket != false) {
    FSocketReference::InitializeSocketInfo
              (&(this->EffectorTarget).SocketReference,*(FAnimInstanceProxy **)param_1);
  }
  if ((this->JointTarget).bUseSocket != false) {
    FSocketReference::InitializeSocketInfo
              (&(this->JointTarget).SocketReference,*(FAnimInstanceProxy **)param_1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bfb0

bool __thiscall
FAnimNode_TwoBoneIK::IsValidToEvaluate
          (FAnimNode_TwoBoneIK *this,USkeleton *param_1,FBoneContainer *param_2)

{
  uchar uVar1;
  bool bVar2;
  
  bVar2 = FBoneReference::IsValidToEvaluate(&this->IKBone,param_2);
  if (((!bVar2) || (this->CachedUpperLimbIndex == (FCompactPoseBoneIndex)0xffffffff)) ||
     (this->CachedLowerLimbIndex == (FCompactPoseBoneIndex)0xffffffff)) {
    return false;
  }
  uVar1 = (this->EffectorLocationSpace).Value;
  if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
    if ((this->EffectorTarget).bUseSocket == false) {
      bVar2 = FBoneReference::IsValidToEvaluate(&(this->EffectorTarget).BoneReference,param_2);
    }
    else {
      bVar2 = (this->EffectorTarget).SocketReference.CachedSocketCompactBoneIndex !=
              (FCompactPoseBoneIndex)0xffffffff;
    }
    if (bVar2 == false) {
      return false;
    }
  }
  uVar1 = (this->JointTargetLocationSpace).Value;
  if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
    if ((this->JointTarget).bUseSocket == false) {
      bVar2 = FBoneReference::IsValidToEvaluate(&(this->JointTarget).BoneReference,param_2);
    }
    else {
      bVar2 = (this->JointTarget).SocketReference.CachedSocketCompactBoneIndex !=
              (FCompactPoseBoneIndex)0xffffffff;
    }
    if (bVar2 == false) {
      return false;
    }
  }
  return true;
}

