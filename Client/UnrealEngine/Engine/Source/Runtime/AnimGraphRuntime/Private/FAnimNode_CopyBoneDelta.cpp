// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463eef00

UScriptStruct * __cdecl FAnimNode_CopyBoneDelta::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta,(UObject *)pUVar1,
                         L"AnimNode_CopyBoneDelta");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton;
}

// FAnimNode_CopyBoneDelta @ 1464039b0

FAnimNode_CopyBoneDelta * __thiscall
FAnimNode_CopyBoneDelta::FAnimNode_CopyBoneDelta(FAnimNode_CopyBoneDelta *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_CopyBoneDelta__6B_;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->TargetBone).BoneName.ComparisonIndex = 0;
  (this->TargetBone).BoneName.Number = 0;
  puVar1 = &(this->TargetBone).field_0x8;
  (this->TargetBone).BoneIndex = -1;
  (this->TargetBone).bUseSkeletonIndex = 0;
  (this->TargetBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bCopyTranslation = false;
  this->bCopyRotation = false;
  this->bCopyScale = false;
  this->CopyMode = Accumulate;
  this->TranslationMultiplier = 1.0;
  this->RotationMultiplier = 1.0;
  this->ScaleMultiplier = 1.0;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642c230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_CopyBoneDelta::EvaluateSkeletalControl_AnyThread
          (FAnimNode_CopyBoneDelta *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  uint uVar2;
  FCompactPoseBoneIndex *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  bool bVar14;
  FMeshPoseBoneIndex FVar15;
  uint uVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  undefined4 extraout_var;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dd_00;
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  double dVar33;
  FScriptContainerElement *pFVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auStackY_398 [32];
  FCompactPoseBoneIndex local_348;
  FCompactPoseBoneIndex local_344;
  undefined1 local_340 [16];
  FScriptContainerElement *pFStack_330;
  ForElementType<unsigned_int> local_328;
  undefined1 local_320 [16];
  FWeakObjectPtr local_310;
  undefined1 local_308 [16];
  ForAnyElementType local_2f8;
  ForAnyElementType local_2f0;
  ForAnyElementType FStack_2e8;
  ForAnyElementType local_2e0;
  ForAnyElementType local_2d8;
  ForAnyElementType FStack_2d0;
  ForAnyElementType local_2c8;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_2c0;
  ForAnyElementType local_2b0;
  ForAnyElementType local_2a8;
  ForAnyElementType FStack_2a0;
  ForElementType<unsigned_int> local_298;
  undefined1 local_290 [16];
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  FSkelMeshRefPoseOverride *local_260;
  FSharedReferencer<1> FStack_258;
  FSharedReferencer<1> local_250;
  undefined1 local_248 [16];
  FScriptContainerElement *local_238;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  FCompactPoseBoneIndex local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  FScriptContainerElement *local_108;
  double dStack_100;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_398;
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBoneDelta::EvaluateSkeletalControl_AnyThread")
  ;
  if (((this->bCopyTranslation == false) && (this->bCopyRotation == false)) &&
     (this->bCopyScale == false)) goto LAB_14642cb4e;
  lVar20 = *(longlong *)&(param_1->Pose).Pose.field_0x10;
  FBoneReference::GetCompactPoseIndex(&this->SourceBone,(FBoneContainer *)&local_344);
  FBoneReference::GetCompactPoseIndex(&this->TargetBone,(FBoneContainer *)&local_348);
  pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_344);
  local_1c8.Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
  local_1c8.Rotation.XY.m128d_f64[1] = (pTVar18->Rotation).XY.m128d_f64[1];
  local_1c8.Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
  local_1c8.Rotation.ZW.m128d_f64[1] = (pTVar18->Rotation).ZW.m128d_f64[1];
  local_1c8.Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
  local_1c8.Translation.XY.m128d_f64[1] = (pTVar18->Translation).XY.m128d_f64[1];
  local_1c8.Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
  local_1c8.Translation.ZW.m128d_f64[1] = (pTVar18->Translation).ZW.m128d_f64[1];
  local_1c8.Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
  local_1c8.Scale3D.XY.m128d_f64[1] = (pTVar18->Scale3D).XY.m128d_f64[1];
  local_1c8.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
  local_1c8.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
  pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_348);
  local_228.Rotation.XY.m128d_f64 = *&(pTVar18->Rotation).XY.m128d_f64;
  local_228.Rotation.ZW.m128d_f64 = *&(pTVar18->Rotation).ZW.m128d_f64;
  local_228.Translation.XY.m128d_f64 = *&(pTVar18->Translation).XY.m128d_f64;
  local_228.Translation.ZW.m128d_f64 = *&(pTVar18->Translation).ZW.m128d_f64;
  local_228.Scale3D.XY.m128d_f64 = *&(pTVar18->Scale3D).XY.m128d_f64;
  local_228.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
  local_228.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_1c8,local_344,
             BCS_ParentBoneSpace);
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_228,local_348,
             BCS_ParentBoneSpace);
  lVar20 = *(longlong *)(lVar20 + 0x48);
  FVar15 = FBoneReference::GetMeshPoseIndex(&this->SourceBone,(FBoneContainer *)local_340);
  uVar2 = *(uint *)CONCAT44(extraout_var,FVar15);
  uVar16 = 0;
  if ((int)uVar2 < *(int *)(lVar20 + 0x38)) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar20 = *(longlong *)(lVar20 + 0x30);
  lVar19 = (longlong)(int)uVar2 * 0x60;
  local_f8.Rotation.XY.m128d_f64[0] = *(double *)(lVar19 + lVar20);
  local_f8.Rotation.XY.m128d_f64[1] = ((double *)(lVar19 + lVar20))[1];
  pdVar1 = (double *)(lVar19 + 0x10 + lVar20);
  local_f8.Rotation.ZW.m128d_f64[0] = *pdVar1;
  local_f8.Rotation.ZW.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar19 + 0x20 + lVar20);
  local_f8.Translation.XY.m128d_f64[0] = *pdVar1;
  local_f8.Translation.XY.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar19 + 0x30 + lVar20);
  local_f8.Translation.ZW.m128d_f64[0] = *pdVar1;
  local_f8.Translation.ZW.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar19 + 0x40 + lVar20);
  local_f8.Scale3D.XY.m128d_f64[0] = *pdVar1;
  local_f8.Scale3D.XY.m128d_f64[1] = pdVar1[1];
  pdVar1 = (double *)(lVar19 + 0x50 + lVar20);
  local_f8.Scale3D.ZW.m128d_f64[0] = *pdVar1;
  local_f8.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
  UE::Math::TTransform<double>::SetToRelativeTransform(&local_1c8,&local_f8);
  uVar5 = (undefined4)((ulonglong)local_1c8.Rotation.ZW.m128d_f64[1] >> 0x20);
  uVar39 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar24 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (this->CopyMode == Accumulate) {
    if (this->bCopyTranslation != false) {
      local_340._8_8_ = local_1c8.Translation.XY.m128d_f64[0];
      pFStack_330 = (FScriptContainerElement *)local_1c8.Translation.XY.m128d_f64[1];
      dVar35 = (double)this->TranslationMultiplier;
      local_328 = (ForElementType<unsigned_int>)local_1c8.Translation.ZW.m128d_f64[0];
      in_XMM3._0_8_ = dVar35 * local_1c8.Translation.XY.m128d_f64[0];
      in_XMM3._8_8_ = 0;
      dVar27 = dVar35 * local_1c8.Translation.XY.m128d_f64[1];
      local_310 = (FWeakObjectPtr)(dVar35 * local_1c8.Translation.ZW.m128d_f64[0]);
      local_320._8_4_ = SUB84(dVar27,0);
      local_320._0_8_ = in_XMM3._0_8_;
      local_320._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      dVar35 = local_228.Translation.ZW.m128d_f64[1] + 0.0;
      local_228.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
      local_228.Translation.ZW.m128d_f64[0] =
           local_228.Translation.ZW.m128d_f64[0] + (double)local_310;
      local_228.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
      local_228.Translation.XY.m128d_f64[1] = local_228.Translation.XY.m128d_f64[1] + dVar27;
      local_228.Translation.XY.m128d_f64[0] = local_228.Translation.XY.m128d_f64[0] + in_XMM3._0_8_;
    }
    if (this->bCopyRotation != false) {
      uVar25 = SUB84(__real_bff0000000000000,0);
      if ((__real_bff0000000000000 <= local_1c8.Rotation.ZW.m128d_f64[1]) &&
         (uVar25 = SUB84(local_1c8.Rotation.ZW.m128d_f64[1],0), uVar39 = uVar5,
         __real_3ff0000000000000 <= local_1c8.Rotation.ZW.m128d_f64[1])) {
        uVar25 = SUB84(__real_3ff0000000000000,0);
        uVar39 = uVar24;
      }
      dVar27 = local_1c8.Rotation.XY.m128d_f64[0] * local_1c8.Rotation.XY.m128d_f64[0] +
               local_1c8.Rotation.ZW.m128d_f64[0] * local_1c8.Rotation.ZW.m128d_f64[0];
      dVar29 = local_1c8.Rotation.XY.m128d_f64[1] * local_1c8.Rotation.XY.m128d_f64[1] + 0.0;
      dVar35 = dVar29 + dVar27;
      dVar27 = dVar27 + dVar29;
      auVar6._8_4_ = SUB84(dVar27,0);
      auVar6._0_8_ = dVar35;
      auVar6._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar32 = sqrtpd(in_XMM3,auVar6);
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar35);
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar27);
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      uVar22 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar35);
      dVar35 = (double)GlobalVectorConstants::Float1000.m128_f32[0];
      dVar29 = (double)GlobalVectorConstants::Float1000.m128_f32[1];
      auVar37._0_8_ = uVar21 & (ulonglong)(auVar36._0_8_ * local_1c8.Rotation.XY.m128d_f64[0]);
      uVar13 = uVar23 & (ulonglong)(auVar36._8_8_ * local_1c8.Rotation.XY.m128d_f64[1]);
      auVar37._8_4_ = (undefined4)uVar13;
      auVar37._12_4_ = (undefined4)(uVar13 >> 0x20);
      dVar27 = (double)GlobalVectorConstants::Float1000.m128_f32[2];
      auVar7._4_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar7._0_4_ = ~(uint)uVar21 & SUB84(dVar35,0);
      auVar7._8_4_ = ~(uint)uVar23 & SUB84(dVar29,0);
      auVar7._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar29 >> 0x20);
      auVar37 = auVar37 | auVar7;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      pFVar34 = (FScriptContainerElement *)
                (CONCAT44(~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20),
                          ~(uint)uVar22 & SUB84(dVar27,0)) |
                uVar22 & (ulonglong)(auVar32._0_8_ * local_1c8.Rotation.ZW.m128d_f64[0]));
      local_308 = auVar37;
      acos((double)CONCAT44(uVar39,uVar25));
      __libm_sse2_sincos_();
      dVar30 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * auVar37._0_8_;
      dVar29 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * auVar37._8_8_;
      dVar35 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar11 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)pFVar34;
      auVar28._8_4_ = SUB84(dVar29,0);
      auVar28._0_8_ = dVar29;
      auVar28._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar27 = dVar11 * local_228.Rotation.ZW.m128d_f64[1];
      dVar9 = dVar30 * local_228.Rotation.ZW.m128d_f64[1];
      dVar10 = dVar30 * local_228.Rotation.ZW.m128d_f64[0];
      dVar8 = dVar30 * local_228.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar35 * local_228.Rotation.ZW.m128d_f64[1] +
              auVar28._8_8_ * local_228.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar11 * local_228.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar12 = dVar11 * local_228.Rotation.XY.m128d_f64[1];
      dVar31 = dVar29 * local_228.Rotation.ZW.m128d_f64[0];
      dVar33 = dVar29 * local_228.Rotation.ZW.m128d_f64[1];
      local_228.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
      local_228.Rotation.ZW.m128d_f64[0] =
           dVar30 * local_228.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar35 * local_228.Rotation.ZW.m128d_f64[0] +
           dVar29 * local_228.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_228.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar27 = dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar35 * local_228.Rotation.XY.m128d_f64[1] +
               dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar11 * local_228.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_228.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
      local_228.Rotation.XY.m128d_f64[0] =
           dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar35 * local_228.Rotation.XY.m128d_f64[0] +
           dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_228.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
      local_2f8.Data = pFVar34;
    }
    if (this->bCopyScale != false) {
      dVar27 = (double)this->ScaleMultiplier;
      local_2f0.Data = (FScriptContainerElement *)local_1c8.Scale3D.XY.m128d_f64[0];
      FStack_2e8.Data = (FScriptContainerElement *)local_1c8.Scale3D.XY.m128d_f64[1];
      local_2e0.Data = (FScriptContainerElement *)local_1c8.Scale3D.ZW.m128d_f64[0];
      dVar35 = dVar27 * local_1c8.Scale3D.XY.m128d_f64[0] * local_228.Scale3D.XY.m128d_f64[0];
      local_2d8.Data = (FScriptContainerElement *)local_228.Scale3D.XY.m128d_f64[0];
      FStack_2d0.Data = (FScriptContainerElement *)local_228.Scale3D.XY.m128d_f64[1];
      local_2b0.Data =
           (FScriptContainerElement *)
           (dVar27 * local_1c8.Scale3D.ZW.m128d_f64[0] * local_228.Scale3D.ZW.m128d_f64[0]);
      dVar29 = dVar27 * local_1c8.Scale3D.XY.m128d_f64[1] * local_228.Scale3D.XY.m128d_f64[1];
      local_2c8.Data = (FScriptContainerElement *)local_228.Scale3D.ZW.m128d_f64[0];
      local_2c0.ArrayNum = SUB84(dVar29,0);
      local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)dVar35;
      local_2c0.ArrayMax = (int)((ulonglong)dVar29 >> 0x20);
      local_228.Scale3D.ZW.m128d_f64[0] = (double)local_2b0.Data;
LAB_14642c9ae:
      local_228.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_228.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar29,0);
      local_228.Scale3D.XY.m128d_f64[0] = dVar35;
      local_228.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
    }
  }
  else {
    if (this->bCopyTranslation != false) {
      in_XMM3._8_8_ = local_1c8.Translation.ZW.m128d_f64[1];
      in_XMM3._0_8_ = local_1c8.Translation.ZW.m128d_f64[0];
      dVar35 = (double)this->TranslationMultiplier;
      local_2a8.Data = (FScriptContainerElement *)local_1c8.Translation.XY.m128d_f64[0];
      FStack_2a0.Data = (FScriptContainerElement *)local_1c8.Translation.XY.m128d_f64[1];
      local_298 = (ForElementType<unsigned_int>)local_1c8.Translation.ZW.m128d_f64[0];
      local_280 = dVar35 * local_1c8.Translation.ZW.m128d_f64[0];
      uVar25 = SUB84(dVar35 * local_1c8.Translation.XY.m128d_f64[1],0);
      uVar26 = (undefined4)((ulonglong)(dVar35 * local_1c8.Translation.XY.m128d_f64[1]) >> 0x20);
      local_290._8_4_ = uVar25;
      local_290._0_8_ = dVar35 * local_1c8.Translation.XY.m128d_f64[0];
      local_290._12_4_ = uVar26;
      local_228.Translation.XY.m128d_f64[1]._0_4_ = uVar25;
      local_228.Translation.XY.m128d_f64[0] = dVar35 * local_1c8.Translation.XY.m128d_f64[0];
      local_228.Translation.XY.m128d_f64[1]._4_4_ = uVar26;
      local_228.Translation.ZW.m128d_f64[1] = 0.0;
      local_228.Translation.ZW.m128d_f64[0] = local_280;
    }
    if (this->bCopyRotation != false) {
      uVar25 = SUB84(__real_bff0000000000000,0);
      if ((__real_bff0000000000000 <= local_1c8.Rotation.ZW.m128d_f64[1]) &&
         (uVar25 = SUB84(local_1c8.Rotation.ZW.m128d_f64[1],0), uVar39 = uVar5,
         __real_3ff0000000000000 <= local_1c8.Rotation.ZW.m128d_f64[1])) {
        uVar25 = SUB84(__real_3ff0000000000000,0);
        uVar39 = uVar24;
      }
      dVar27 = local_1c8.Rotation.XY.m128d_f64[0] * local_1c8.Rotation.XY.m128d_f64[0] +
               local_1c8.Rotation.ZW.m128d_f64[0] * local_1c8.Rotation.ZW.m128d_f64[0];
      dVar29 = local_1c8.Rotation.XY.m128d_f64[1] * local_1c8.Rotation.XY.m128d_f64[1] + 0.0;
      dVar35 = dVar29 + dVar27;
      dVar27 = dVar27 + dVar29;
      auVar32._8_4_ = SUB84(dVar27,0);
      auVar32._0_8_ = dVar35;
      auVar32._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar32 = sqrtpd(in_XMM3,auVar32);
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar35);
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar27);
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      uVar22 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar35);
      dVar35 = (double)GlobalVectorConstants::Float1000.m128_f32[0];
      dVar29 = (double)GlobalVectorConstants::Float1000.m128_f32[1];
      auVar38._0_8_ = uVar21 & (ulonglong)(auVar36._0_8_ * local_1c8.Rotation.XY.m128d_f64[0]);
      uVar13 = uVar23 & (ulonglong)(auVar36._8_8_ * local_1c8.Rotation.XY.m128d_f64[1]);
      auVar38._8_4_ = (undefined4)uVar13;
      auVar38._12_4_ = (undefined4)(uVar13 >> 0x20);
      dVar27 = (double)GlobalVectorConstants::Float1000.m128_f32[2];
      auVar36._4_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar36._0_4_ = ~(uint)uVar21 & SUB84(dVar35,0);
      auVar36._8_4_ = ~(uint)uVar23 & SUB84(dVar29,0);
      auVar36._12_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)dVar29 >> 0x20);
      auVar38 = auVar38 | auVar36;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      dVar35 = (double)(CONCAT44(~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20),
                                 ~(uint)uVar22 & SUB84(dVar27,0)) |
                       uVar22 & (ulonglong)(auVar32._0_8_ * local_1c8.Rotation.ZW.m128d_f64[0]));
      local_278 = auVar38;
      acos((double)CONCAT44(uVar39,uVar25));
      __libm_sse2_sincos_();
      local_228.Rotation.ZW.m128d_f64[1]._4_4_ = extraout_XMM0_Dd_00;
      local_228.Rotation.ZW.m128d_f64[1]._0_4_ = extraout_XMM0_Dc_00;
      local_228.Rotation.XY.m128d_f64[1] =
           auVar38._8_8_ * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_228.Rotation.XY.m128d_f64[0] =
           auVar38._0_8_ * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_228.Rotation.ZW.m128d_f64[0] =
           dVar35 * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      local_268 = dVar35;
    }
    if (this->bCopyScale != false) {
      dVar27 = (double)this->ScaleMultiplier;
      local_260 = (FSkelMeshRefPoseOverride *)local_1c8.Scale3D.XY.m128d_f64[0];
      FStack_258.ReferenceController =
           (TReferenceControllerBase<1> *)local_1c8.Scale3D.XY.m128d_f64[1];
      local_250.ReferenceController =
           (TReferenceControllerBase<1> *)local_1c8.Scale3D.ZW.m128d_f64[0];
      dVar35 = dVar27 * local_1c8.Scale3D.XY.m128d_f64[0];
      dVar29 = dVar27 * local_1c8.Scale3D.XY.m128d_f64[1];
      local_238 = (FScriptContainerElement *)(dVar27 * local_1c8.Scale3D.ZW.m128d_f64[0]);
      local_248._8_4_ = SUB84(dVar29,0);
      local_248._0_8_ = dVar35;
      local_248._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      local_228.Scale3D.ZW.m128d_f64[0] = (double)local_238;
      goto LAB_14642c9ae;
    }
  }
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_228,local_348,
             BCS_ParentBoneSpace);
  pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_158 = local_228.Rotation.XY.m128d_f64[0];
  dStack_150 = local_228.Rotation.XY.m128d_f64[1];
  local_148 = local_228.Rotation.ZW.m128d_f64[0];
  dStack_140 = local_228.Rotation.ZW.m128d_f64[1];
  local_168 = local_348;
  local_138 = local_228.Translation.XY.m128d_f64[0];
  dStack_130 = local_228.Translation.XY.m128d_f64[1];
  local_128 = local_228.Translation.ZW.m128d_f64[0];
  dStack_120 = local_228.Translation.ZW.m128d_f64[1];
  local_118 = local_228.Scale3D.XY.m128d_f64[0];
  dStack_110 = local_228.Scale3D.XY.m128d_f64[1];
  local_108 = (FScriptContainerElement *)local_228.Scale3D.ZW.m128d_f64[0];
  dStack_100 = local_228.Scale3D.ZW.m128d_f64[1];
  if (((pFVar3 <= &local_168) && (&local_168 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar17 = param_2->ArrayNum;
  if (iVar17 == param_2->ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar17 + 1;
  lVar20 = (longlong)iVar17 * 0x70;
  pFVar34 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar34 + lVar20) = CONCAT44(uStack_164,local_168);
  *(undefined8 *)(pFVar34 + lVar20 + 8) = uStack_160;
  *(double *)(pFVar34 + lVar20 + 0x10) = local_158;
  *(double *)(pFVar34 + lVar20 + 0x10 + 8) = dStack_150;
  *(double *)(pFVar34 + lVar20 + 0x20) = local_148;
  *(double *)(pFVar34 + lVar20 + 0x20 + 8) = dStack_140;
  *(double *)(pFVar34 + lVar20 + 0x30) = local_138;
  *(double *)(pFVar34 + lVar20 + 0x30 + 8) = dStack_130;
  *(double *)(pFVar34 + lVar20 + 0x40) = local_128;
  *(double *)(pFVar34 + lVar20 + 0x40 + 8) = dStack_120;
  *(double *)(pFVar34 + lVar20 + 0x50) = local_118;
  *(double *)(pFVar34 + lVar20 + 0x50 + 8) = dStack_110;
  *(FScriptContainerElement **)(pFVar34 + lVar20 + 0x60) = local_108;
  *(double *)(pFVar34 + lVar20 + 0x60 + 8) = dStack_100;
LAB_14642cb4e:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443370

void __thiscall
FAnimNode_CopyBoneDelta::GatherDebugData(FAnimNode_CopyBoneDelta *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBoneDelta::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta,(UObject *)pUVar1,
                         L"AnimNode_CopyBoneDelta");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_CopyBoneDelta.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456870

void __thiscall
FAnimNode_CopyBoneDelta::InitializeBoneReferences
          (FAnimNode_CopyBoneDelta *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBoneDelta::InitializeBoneReferences");
  FBoneReference::Initialize(&this->SourceBone,param_1);
  FBoneReference::Initialize(&this->TargetBone,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b8c0

bool __thiscall
FAnimNode_CopyBoneDelta::IsValidToEvaluate
          (FAnimNode_CopyBoneDelta *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->TargetBone,param_2);
  if (!bVar1) {
    return false;
  }
  if (((this->TargetBone).BoneName != (this->SourceBone).BoneName) &&
     (bVar1 = FBoneReference::IsValidToEvaluate(&this->SourceBone,param_2), !bVar1)) {
    return false;
  }
  return true;
}

