// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 5

// GetTargetTransform<FCompactPose> @ 1463f5da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FBoneSocketTarget::GetTargetTransform<FCompactPose>
          (FBoneSocketTarget *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,FCSPose<FCompactPose> *param_2,TTransform<double> *param_3)

{
  undefined1 *puVar1;
  FCompactPoseBoneIndex FVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  TTransform<double> *pTVar13;
  undefined1 auStack_138 [32];
  FBoneSocketTarget *local_118 [2];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
  if (this->bUseSocket == false) {
    if (((((this->BoneReference).BoneIndex != -1) &&
         (!(BADTYPE)(this->BoneReference).bUseSkeletonIndex)) &&
        (FVar2 = (this->BoneReference).CachedCompactPoseIndex,
        FVar2 != (FCompactPoseBoneIndex)0xffffffff)) &&
       (((-1 < (int)FVar2 && ((int)FVar2 < *(int *)&(param_2->Pose).field_0x8)) ||
        (local_118[0] = this,
        bVar12 = `FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l15::<lambda_2>::
                 operator()(local_118), bVar12)))) {
      pTVar13 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (param_2,(this->BoneReference).CachedCompactPoseIndex);
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_108,param_1,pTVar13);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
      goto LAB_1463f5feb;
    }
  }
  else if ((this->SocketReference).CachedSocketCompactBoneIndex != (FCompactPoseBoneIndex)0xffffffff
          ) {
    pTVar13 = FSocketReference::GetAnimatedSocketTransform<FCompactPose>
                        (&this->SocketReference,&local_a8,param_2);
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_108,param_1,pTVar13);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
    goto LAB_1463f5feb;
  }
  pTVar13 = UE::Math::TTransform<double>::GetRelativeTransform(param_1,&local_a8,param_3);
  dVar11 = (pTVar13->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar13->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar13->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
  dVar11 = (pTVar13->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
  dVar11 = (pTVar13->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar11;
  local_108.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
  local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
LAB_1463f5feb:
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetTargetTransform<FCompactPose> @ 1463f6020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FBoneSocketTarget::GetTargetTransform<FCompactPose>
          (FBoneSocketTarget *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1,FCSPose<FCompactPose> *param_2,TTransform<double> *param_3)

{
  undefined1 *puVar1;
  FCompactPoseBoneIndex FVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  __m128 _Var12;
  bool bVar13;
  TTransform<double> *pTVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  FBoneSocketTarget *local_140 [5];
  TTransform<double> local_118;
  ulonglong local_b8;
  
  _Var12.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_168;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
  _Var12 = GlobalVectorConstants::FloatZero;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
  _Var12 = GlobalVectorConstants::Float1110;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var12.m128_f32[2];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var12.m128_f32[3];
  if (this->bUseSocket == false) {
    if (((((this->BoneReference).BoneIndex != -1) &&
         (!(BADTYPE)(this->BoneReference).bUseSkeletonIndex)) &&
        (FVar2 = (this->BoneReference).CachedCompactPoseIndex,
        FVar2 != (FCompactPoseBoneIndex)0xffffffff)) &&
       (((-1 < (int)FVar2 && ((int)FVar2 < *(int *)&(param_2->Pose).field_0x8)) ||
        (local_140[0] = this,
        bVar13 = `FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l15::<lambda_2>::
                 operator()(local_140), bVar13)))) {
      pTVar14 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (param_2,(this->BoneReference).CachedCompactPoseIndex);
      dVar9 = (pTVar14->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
      dVar9 = (pTVar14->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
      dVar9 = (pTVar14->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
      dVar9 = (pTVar14->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
      dVar9 = (pTVar14->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
      dVar8 = (pTVar14->Scale3D).ZW.m128d_f64[0];
      dVar9 = (pTVar14->Scale3D).ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar8;
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
      auVar22 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64;
      dVar5 = (param_1->field0_0x0)._s_0.X * (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
      dVar6 = (param_1->field0_0x0)._s_0.Y * (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
      uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar10 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
      dVar8 = (param_1->field0_0x0)._s_0.Z * dVar8;
      dVar9 = dVar9 * 0.0;
      auVar32 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64;
      dVar20 = auVar32._0_8_;
      auVar40._8_4_ = SUB84(dVar6,0);
      auVar40._0_8_ = dVar5;
      auVar40._12_4_ = uVar35;
      auVar26 = blendpd(auVar22,auVar32,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar5;
      auVar41._8_8_ = dVar8 * auVar22._8_8_ - dVar20 * dVar6;
      auVar30._8_4_ = SUB84(dVar6,0);
      auVar30._0_8_ = dVar5;
      auVar30._12_4_ = uVar35;
      auVar42._8_4_ = SUB84(dVar9,0);
      auVar42._0_8_ = dVar8;
      auVar42._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar22 = blendpd(auVar30,auVar42,2);
      auVar19._0_8_ = auVar22._0_8_ * dVar20 - auVar26._0_8_ * dVar8;
      auVar19._8_8_ = auVar22._8_8_ * auVar32._8_8_ - auVar26._8_8_ * dVar9;
      auVar22 = *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64;
      auVar42 = blendpd(auVar41,auVar19,2);
      dVar9 = auVar41._8_8_ + auVar41._8_8_;
      dVar4 = auVar19._0_8_ + auVar19._0_8_;
      uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar43._0_8_ = auVar42._0_8_ + auVar42._0_8_;
      auVar43._8_8_ = auVar42._8_8_ + auVar42._8_8_;
      auVar33._8_4_ = SUB84(dVar4,0);
      auVar33._0_8_ = dVar9;
      auVar33._12_4_ = uVar35;
      auVar29._8_4_ = SUB84(dVar4,0);
      auVar29._0_8_ = dVar9;
      auVar29._12_4_ = uVar35;
      auVar30 = blendpd(auVar29,auVar43,2);
      auVar42 = blendpd(auVar22,auVar32,2);
      auVar34._0_8_ = auVar33._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar9;
      auVar34._8_8_ = auVar43._0_8_ * auVar22._8_8_ - dVar20 * dVar4;
      auVar26._8_4_ = SUB84(auVar34._8_8_,0);
      auVar26._0_8_ = auVar34._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
      auVar31._0_8_ = auVar30._0_8_ * dVar20 - auVar42._0_8_ * auVar43._0_8_;
      auVar31._8_8_ = auVar30._8_8_ * auVar32._8_8_ - auVar42._8_8_ * auVar43._8_8_;
      auVar32 = blendpd(auVar34,auVar31,2);
      dVar4 = dVar4 * dVar10 + dVar6 + auVar31._0_8_ +
              (__return_storage_ptr__->Translation).XY.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar4,0);
      auVar22._0_8_ =
           dVar9 * dVar10 + dVar5 + auVar26._8_8_ +
           (__return_storage_ptr__->Translation).XY.m128d_f64[0];
      auVar22._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar22;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
           auVar43._0_8_ * dVar10 + dVar8 + auVar32._0_8_ +
           (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
      return __return_storage_ptr__;
    }
  }
  else if ((this->SocketReference).CachedSocketCompactBoneIndex != (FCompactPoseBoneIndex)0xffffffff
          ) {
    FSocketReference::GetAnimatedSocketTransform<FCompactPose>
              (&this->SocketReference,&local_118,param_2);
    dVar5 = (param_1->field0_0x0)._s_0.X * local_118.Scale3D.XY.m128d_f64[0];
    dVar6 = (param_1->field0_0x0)._s_0.Y * local_118.Scale3D.XY.m128d_f64[1];
    uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar8 = (param_1->field0_0x0)._s_0.Z * local_118.Scale3D.ZW.m128d_f64[0];
    dVar9 = local_118.Scale3D.ZW.m128d_f64[1] * 0.0;
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 = local_118.Rotation.XY.m128d_f64;
    auVar37._8_4_ = SUB84(dVar6,0);
    auVar37._0_8_ = dVar5;
    auVar37._12_4_ = uVar35;
    auVar21._8_4_ = SUB84(dVar6,0);
    auVar21._0_8_ = dVar5;
    auVar21._12_4_ = uVar35;
    dVar10 = local_118.Rotation.XY.m128d_f64[1];
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar8;
    auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar22 = blendpd(auVar21,auVar7,2);
    dVar20 = local_118.Rotation.ZW.m128d_f64[0];
    dVar11 = local_118.Rotation.ZW.m128d_f64[1];
    auVar32 = blendpd((undefined1  [16])local_118.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_118.Rotation.ZW.m128d_f64,2);
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = local_118.Rotation.ZW.m128d_f64;
    auVar15._8_4_ = local_118.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar15._0_8_ = dVar10;
    auVar15._12_4_ = local_118.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar38._0_8_ = auVar37._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar10 * dVar5;
    auVar38._8_8_ = dVar8 * dVar10 - auVar15._8_8_ * dVar6;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_118.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_118.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_118.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_118.Scale3D.ZW.m128d_f64[1];
    auVar23._0_8_ = auVar22._0_8_ * dVar20 - auVar32._0_8_ * dVar8;
    auVar23._8_8_ = auVar22._8_8_ * dVar11 - auVar32._8_8_ * dVar9;
    auVar22 = blendpd(auVar38,auVar23,2);
    dVar9 = auVar38._8_8_ + auVar38._8_8_;
    dVar4 = auVar23._0_8_ + auVar23._0_8_;
    uVar35 = SUB84(dVar4,0);
    uVar36 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar39._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar39._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    auVar27._8_4_ = uVar35;
    auVar27._0_8_ = dVar9;
    auVar27._12_4_ = uVar36;
    auVar16._8_4_ = uVar35;
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = uVar36;
    auVar24._8_4_ = uVar35;
    auVar24._0_8_ = dVar9;
    auVar24._12_4_ = uVar36;
    auVar22 = blendpd(auVar24,auVar39,2);
    auVar28._0_8_ = auVar27._8_8_ * local_118.Rotation.XY.m128d_f64[0] - dVar9 * dVar10;
    auVar28._8_8_ = auVar39._0_8_ * dVar10 - auVar16._8_8_ * dVar20;
    auVar17._8_4_ = SUB84(auVar39._8_8_,0);
    auVar17._0_8_ = auVar39._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
    auVar25._0_8_ = auVar22._0_8_ * dVar20 - auVar39._0_8_ * auVar32._0_8_;
    auVar25._8_8_ = auVar22._8_8_ * dVar11 - auVar17._8_8_ * auVar32._8_8_;
    auVar18._8_4_ = SUB84(auVar28._8_8_,0);
    auVar18._0_8_ = auVar28._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
    auVar22 = blendpd(auVar28,auVar25,2);
    local_118.Translation.XY.m128d_f64[1] =
         dVar4 * dVar11 + dVar6 + auVar25._0_8_ + local_118.Translation.XY.m128d_f64[1];
    auVar32._8_4_ = SUB84(local_118.Translation.XY.m128d_f64[1],0);
    auVar32._0_8_ = dVar9 * dVar11 + dVar5 + auVar18._8_8_ + local_118.Translation.XY.m128d_f64[0];
    auVar32._12_4_ = (int)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar32;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
         auVar39._0_8_ * dVar11 + dVar8 + auVar22._0_8_ + local_118.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    return __return_storage_ptr__;
  }
  `FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l2::<lambda_1>::operator()
            (local_148,param_1,param_3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 14640de20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  __m128 _Var13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  _Var13.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  (param_3->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (param_3->Rotation).XY.m128d_f64[1] = (double)fVar1;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (param_3->Rotation).ZW.m128d_f64[0] = (double)_Var13.m128_f32[2];
  (param_3->Rotation).ZW.m128d_f64[1] = (double)_Var13.m128_f32[3];
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (param_3->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (param_3->Translation).XY.m128d_f64[1] = (double)fVar1;
  (param_3->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (param_3->Translation).ZW.m128d_f64[1] = (double)fVar3;
  _Var13 = GlobalVectorConstants::Float1110;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  (param_3->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (param_3->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (param_3->Scale3D).ZW.m128d_f64[0] = (double)_Var13.m128_f32[2];
  (param_3->Scale3D).ZW.m128d_f64[1] = (double)_Var13.m128_f32[3];
  dVar29 = (param_2->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar30 = (param_2->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (param_2->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar17 = (param_1->field0_0x0)._s_0.Z - (param_2->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->field0_0x0)._s_0.X - (param_2->Translation).XY.m128d_f64[0];
  dVar9 = (param_1->field0_0x0)._s_0.Y - (param_2->Translation).XY.m128d_f64[1];
  uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar37._8_4_ = SUB84(dVar9,0);
  auVar37._0_8_ = dVar8;
  auVar37._12_4_ = uVar33;
  auVar18._8_4_ = SUB84(dVar4,0);
  auVar18._0_8_ = dVar30;
  auVar18._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar25._8_4_ = SUB84(dVar30,0);
  auVar25._0_8_ = dVar29;
  auVar25._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar33;
  auVar38._0_8_ = auVar37._8_8_ * dVar29 - dVar30 * dVar8;
  auVar38._8_8_ = dVar17 * dVar30 - auVar18._8_8_ * dVar9;
  auVar23._8_4_ = SUB84(dVar5,0);
  auVar23._0_8_ = dVar4;
  auVar23._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar26 = blendpd(auVar25,auVar23,2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar17;
  auVar23 = blendpd(auVar22,auVar10,2);
  auVar24._0_8_ = auVar23._0_8_ * dVar4 - auVar26._0_8_ * dVar17;
  auVar24._8_8_ = auVar23._8_8_ * dVar5 - auVar26._8_8_ * 0.0;
  dVar6 = auVar38._8_8_ + auVar38._8_8_;
  dVar7 = auVar24._0_8_ + auVar24._0_8_;
  uVar33 = SUB84(dVar7,0);
  uVar34 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar23 = blendpd(auVar38,auVar24,2);
  auVar39._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar39._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar35._8_4_ = uVar33;
  auVar35._0_8_ = dVar6;
  auVar35._12_4_ = uVar34;
  auVar19._8_4_ = uVar33;
  auVar19._0_8_ = dVar6;
  auVar19._12_4_ = uVar34;
  auVar31._8_4_ = uVar33;
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = uVar34;
  auVar23 = blendpd(auVar31,auVar39,2);
  auVar36._0_8_ = auVar35._8_8_ * dVar29 - dVar6 * dVar30;
  auVar36._8_8_ = auVar39._0_8_ * dVar30 - auVar19._8_8_ * dVar4;
  auVar20._8_4_ = SUB84(auVar39._8_8_,0);
  auVar20._0_8_ = auVar39._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar32._0_8_ = auVar23._0_8_ * dVar4 - auVar39._0_8_ * auVar26._0_8_;
  auVar32._8_8_ = auVar23._8_8_ * dVar5 - auVar20._8_8_ * auVar26._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
  lVar14 = -(ulonglong)
            ((double)CONCAT44(uVar12 & auVar23._4_4_,uVar11 & auVar23._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
  auVar27._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(param_2->Scale3D).XY.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar27._8_4_ = *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  auVar27._12_4_ = *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  lVar15 = -(ulonglong)(auVar27._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar16 = -(ulonglong)(auVar27._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar21._8_4_ = SUB84(auVar36._8_8_,0);
  auVar21._0_8_ = auVar36._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar28._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar26._4_4_,
                        ~(uint)lVar15 & auVar26._0_4_);
  auVar28._8_4_ = ~(uint)lVar16 & auVar26._8_4_;
  auVar28._12_4_ = ~(uint)((ulonglong)lVar16 >> 0x20) & auVar26._12_4_;
  auVar26._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar26._0_8_ = auVar23._0_8_;
  auVar26._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
  auVar26 = blendpd(auVar36,auVar32,2);
  (param_3->Translation).XY.m128d_f64[0] = auVar28._0_8_ * (dVar6 * dVar5 + dVar8 + auVar21._8_8_);
  (param_3->Translation).XY.m128d_f64[1] = auVar28._8_8_ * (dVar7 * dVar5 + dVar9 + auVar32._0_8_);
  (param_3->Translation).ZW.m128d_f64[0] =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar23._4_4_,
                        ~(uint)lVar14 & auVar23._0_4_) *
       (auVar39._0_8_ * dVar5 + dVar17 + auVar26._0_8_);
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// operator() @ 1504ec050

bool __thiscall
`FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6479332532545388823>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6479332532545388823>,
                       &`public:___cdecl_`public:_struct_UE::Math::TTransform<double>___cdecl_FBoneSocketTarget::GetTargetTransform<FCompactPose>(UE::Math::TTransform<double>_const&___ptr64,FCSPose<FCompactPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)const___ptr64'::`15'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ec0da;
    }
  }
  bVar2 = false;
LAB_1504ec0da:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ec110

bool __thiscall
`FBoneSocketTarget::GetTargetTransform<FCompactPose>'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6479332532545388776>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 4),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6479332532545388776>,
                       &`public:___cdecl_`public:_struct_UE::Math::TTransform<double>___cdecl_FBoneSocketTarget::GetTargetTransform<FCompactPose>(UE::Math::TVector<double>_const&___ptr64,FCSPose<FCompactPose>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)const___ptr64'::`15'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ec19a;
    }
  }
  bVar2 = false;
LAB_1504ec19a:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

