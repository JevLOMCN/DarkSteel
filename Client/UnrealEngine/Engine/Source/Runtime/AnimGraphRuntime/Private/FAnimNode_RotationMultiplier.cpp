// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463e1c30

UScriptStruct * __cdecl FAnimNode_RotationMultiplier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier,(UObject *)pUVar1,
                         L"AnimNode_RotationMultiplier");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton;
}

// FAnimNode_RotationMultiplier @ 146405690

FAnimNode_RotationMultiplier * __thiscall
FAnimNode_RotationMultiplier::FAnimNode_RotationMultiplier(FAnimNode_RotationMultiplier *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_RotationMultiplier__6B_;
  (this->TargetBone).BoneName.ComparisonIndex = 0;
  (this->TargetBone).BoneName.Number = 0;
  puVar1 = &(this->TargetBone).field_0x8;
  (this->TargetBone).BoneIndex = -1;
  (this->TargetBone).bUseSkeletonIndex = 0;
  (this->TargetBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->Multiplier = 0.0;
  this->RotationAxisToRefer = '\0';
  this->bIsAdditive = false;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 146433c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_RotationMultiplier::EvaluateSkeletalControl_AnyThread
          (FAnimNode_RotationMultiplier *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  byte bVar2;
  FCompactPoseBoneIndex *pFVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  TTransform<double> *pTVar11;
  TTransform<double> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined1 auStackY_358 [32];
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  FCompactPoseBoneIndex local_300 [2];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  TQuat<double> local_2d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  FCompactPoseBoneIndex local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  ForAnyElementType local_288;
  double dStack_280;
  ForAnyElementType local_278;
  double dStack_270;
  ForAnyElementType local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [8];
  double dStack_230;
  FCompactPoseBoneIndex local_228 [2];
  FSkelMeshRefPoseOverride *pFStack_220;
  FSharedReferencer<1> local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [8];
  double dStack_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_358;
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RotationMultiplier::EvaluateSkeletalControl_AnyThread");
  if ((param_2->ArrayNum != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBoneTransforms.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNodeRotationMultiplier.cpp"
                         ,0x87,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->Multiplier != 0.0) {
    FBoneReference::GetCompactPoseIndex(&this->TargetBone,(FBoneContainer *)local_308);
    FBoneReference::GetCompactPoseIndex(&this->SourceBone,(FBoneContainer *)local_304);
    pTVar11 = FBoneContainer::GetRefPoseTransform
                        (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,
                         (FCompactPoseBoneIndex *)local_308);
    local_2d8.X = (pTVar11->Rotation).XY.m128d_f64[0];
    local_2d8.Y = *(double *)((pTVar11->Rotation).XY.m128d_f64 + 1);
    local_2d8.Z = (pTVar11->Rotation).ZW.m128d_f64[0];
    local_2d8.W = (pTVar11->Rotation).ZW.m128d_f64[1];
    pTVar11 = FBoneContainer::GetRefPoseTransform
                        (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,
                         (FCompactPoseBoneIndex *)local_304);
    fVar1 = this->Multiplier;
    bVar2 = (this->RotationAxisToRefer).Value;
    pTVar12 = FCSPose<FCompactPose>::GetLocalSpaceTransform
                        (&param_1->Pose,&local_f8,(FCompactPoseBoneIndex)local_304);
    MultiplyQuatBasedOnSourceIndex
              (this,(TQuat<double> *)local_2f8,pTVar11,pTVar12,(uint)bVar2,fVar1,&local_2d8);
    FCSPose<FCompactPose>::GetLocalSpaceTransform
              (&param_1->Pose,&local_158,(FCompactPoseBoneIndex)local_308);
    dVar7 = (double)local_2f8._0_8_;
    dVar8 = (double)local_2f8._8_8_;
    FVar5 = (ForElementType<unsigned_int>)local_2e8._0_8_;
    dVar6 = (double)local_2e8._8_8_;
    if (this->bIsAdditive != false) {
      dVar7 = local_158.Rotation.XY.m128d_f64[0] * (double)local_2e8._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              local_158.Rotation.ZW.m128d_f64[1] * (double)local_2f8._0_8_ +
              (double)local_2e8._0_8_ * local_158.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              local_158.Rotation.ZW.m128d_f64[0] * (double)local_2f8._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar8 = local_158.Rotation.XY.m128d_f64[0] * (double)local_2e8._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              local_158.Rotation.ZW.m128d_f64[1] * (double)local_2f8._8_8_ +
              (double)local_2e8._8_8_ * local_158.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              local_158.Rotation.ZW.m128d_f64[0] * (double)local_2f8._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar15 = SUB84(dVar8,0);
      iVar19 = (int)((ulonglong)dVar8 >> 0x20);
      FVar5 = (ForElementType<unsigned_int>)
              (local_158.Rotation.XY.m128d_f64[0] * (double)local_2f8._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               (double)local_2e8._0_8_ * local_158.Rotation.ZW.m128d_f64[1] +
               local_158.Rotation.XY.m128d_f64[1] * (double)local_2f8._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              local_158.Rotation.ZW.m128d_f64[0] * (double)local_2e8._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
      dVar6 = local_158.Rotation.XY.m128d_f64[0] * (double)local_2f8._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              (double)local_2e8._8_8_ * local_158.Rotation.ZW.m128d_f64[1] +
              local_158.Rotation.XY.m128d_f64[1] * (double)local_2f8._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              local_158.Rotation.ZW.m128d_f64[0] * (double)local_2e8._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      iVar10 = (int)((ulonglong)dVar6 >> 0x20);
      local_2b8.ArrayNum = uVar15;
      local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)dVar7;
      local_2b8.ArrayMax = iVar19;
      local_2f8[8] = (char)uVar15;
      local_2f8[9] = (char)((uint)uVar15 >> 8);
      local_2f8[10] = (char)((uint)uVar15 >> 0x10);
      local_2f8[0xb] = (char)((uint)uVar15 >> 0x18);
      local_2f8._0_8_ = dVar7;
      local_2f8[0xc] = (char)iVar19;
      local_2f8[0xd] = (char)((uint)iVar19 >> 8);
      local_2f8[0xe] = (char)((uint)iVar19 >> 0x10);
      local_2f8[0xf] = (char)((uint)iVar19 >> 0x18);
      local_2a8.ArrayNum = SUB84(dVar6,0);
      local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
      local_2a8.ArrayMax = iVar10;
      local_2e8._8_4_ = SUB84(dVar6,0);
      local_2e8._0_8_ = FVar5;
      local_2e8._12_4_ = iVar10;
    }
    local_158.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
    local_158.Rotation.XY.m128d_f64[0] = dVar7;
    local_158.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_158.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
    local_158.Rotation.ZW.m128d_f64[0] = (double)FVar5;
    local_158.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
    FBoneContainer::GetParentBoneIndex
              (*(FBoneContainer **)&(param_1->Pose).Pose.field_0x10,local_300);
    if (local_300[0] == (FCompactPoseBoneIndex)0xffffffff) {
      pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
      local_218.ReferenceController =
           (TReferenceControllerBase<1> *)local_158.Rotation.XY.m128d_f64[0];
      dStack_210 = local_158.Rotation.XY.m128d_f64[1];
      local_208 = local_158.Rotation.ZW.m128d_f64[0];
      dStack_200 = local_158.Rotation.ZW.m128d_f64[1];
      local_228[0] = (FCompactPoseBoneIndex)local_308;
      local_1f8 = local_158.Translation.XY.m128d_f64[0];
      dStack_1f0 = local_158.Translation.XY.m128d_f64[1];
      local_1e8 = local_158.Translation.ZW.m128d_f64[0];
      dStack_1e0 = local_158.Translation.ZW.m128d_f64[1];
      local_1d8 = local_158.Scale3D.XY.m128d_f64[0];
      dStack_1d0 = local_158.Scale3D.XY.m128d_f64[1];
      local_1c8 = (undefined1  [8])local_158.Scale3D.ZW.m128d_f64[0];
      dStack_1c0 = local_158.Scale3D.ZW.m128d_f64[1];
      if (((pFVar3 <= local_228) && (local_228 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      lVar14 = (longlong)iVar10 * 0x70;
      pFVar13 = (param_2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar13 + lVar14) = CONCAT44(local_228[1],local_228[0]);
      *(FSkelMeshRefPoseOverride **)(pFVar13 + lVar14 + 8) = pFStack_220;
      *(TReferenceControllerBase<1> **)(pFVar13 + lVar14 + 0x10) = local_218.ReferenceController;
      *(double *)(pFVar13 + lVar14 + 0x10 + 8) = dStack_210;
      *(double *)(pFVar13 + lVar14 + 0x20) = local_208;
      *(double *)(pFVar13 + lVar14 + 0x20 + 8) = dStack_200;
      *(double *)(pFVar13 + lVar14 + 0x30) = local_1f8;
      *(double *)(pFVar13 + lVar14 + 0x30 + 8) = dStack_1f0;
      *(double *)(pFVar13 + lVar14 + 0x40) = local_1e8;
      *(double *)(pFVar13 + lVar14 + 0x40 + 8) = dStack_1e0;
      *(double *)(pFVar13 + lVar14 + 0x50) = local_1d8;
      *(double *)(pFVar13 + lVar14 + 0x50 + 8) = dStack_1d0;
      uVar15 = local_1c8._0_4_;
      uVar16 = local_1c8._4_4_;
      uVar17 = dStack_1c0._0_4_;
      uVar18 = dStack_1c0._4_4_;
    }
    else {
      pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_300[0]);
      local_1b8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1b8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1b8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1b8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1b8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_1b8,&local_158,pTVar11);
      pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
      local_288.Data = (FScriptContainerElement *)local_1b8.Rotation.XY.m128d_f64[0];
      dStack_280 = local_1b8.Rotation.XY.m128d_f64[1];
      local_278.Data = (FScriptContainerElement *)local_1b8.Rotation.ZW.m128d_f64[0];
      dStack_270 = local_1b8.Rotation.ZW.m128d_f64[1];
      local_298 = (FCompactPoseBoneIndex)local_308;
      local_268.Data = (FScriptContainerElement *)local_1b8.Translation.XY.m128d_f64[0];
      dStack_260 = local_1b8.Translation.XY.m128d_f64[1];
      local_258 = local_1b8.Translation.ZW.m128d_f64[0];
      dStack_250 = local_1b8.Translation.ZW.m128d_f64[1];
      local_248 = local_1b8.Scale3D.XY.m128d_f64[0];
      dStack_240 = local_1b8.Scale3D.XY.m128d_f64[1];
      local_238 = (undefined1  [8])local_1b8.Scale3D.ZW.m128d_f64[0];
      dStack_230 = local_1b8.Scale3D.ZW.m128d_f64[1];
      if (((pFVar3 <= &local_298) && (&local_298 < pFVar3 + (longlong)param_2->ArrayMax * 0x1c)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      lVar14 = (longlong)iVar10 * 0x70;
      pFVar13 = (param_2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar13 + lVar14) = CONCAT44(uStack_294,local_298);
      *(undefined8 *)(pFVar13 + lVar14 + 8) = uStack_290;
      *(FScriptContainerElement **)(pFVar13 + lVar14 + 0x10) = local_288.Data;
      *(double *)(pFVar13 + lVar14 + 0x10 + 8) = dStack_280;
      *(FScriptContainerElement **)(pFVar13 + lVar14 + 0x20) = local_278.Data;
      *(double *)(pFVar13 + lVar14 + 0x20 + 8) = dStack_270;
      *(FScriptContainerElement **)(pFVar13 + lVar14 + 0x30) = local_268.Data;
      *(double *)(pFVar13 + lVar14 + 0x30 + 8) = dStack_260;
      *(double *)(pFVar13 + lVar14 + 0x40) = local_258;
      *(double *)(pFVar13 + lVar14 + 0x40 + 8) = dStack_250;
      *(double *)(pFVar13 + lVar14 + 0x50) = local_248;
      *(double *)(pFVar13 + lVar14 + 0x50 + 8) = dStack_240;
      uVar15 = local_238._0_4_;
      uVar16 = local_238._4_4_;
      uVar17 = dStack_230._0_4_;
      uVar18 = dStack_230._4_4_;
    }
    pFVar13 = pFVar13 + lVar14 + 0x60;
    *(undefined4 *)pFVar13 = uVar15;
    *(undefined4 *)(pFVar13 + 4) = uVar16;
    *(undefined4 *)(pFVar13 + 8) = uVar17;
    *(undefined4 *)(pFVar13 + 0xc) = uVar18;
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Source Bone",&(this->SourceBone).BoneName);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Target Bone",&(this->TargetBone).BoneName);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Multiplier",this->Multiplier);
  FStatsHierarchical::EndMeasurement();
  return;
}

// ExtractAngle @ 14643ef30

TQuat<double> * __thiscall
FAnimNode_RotationMultiplier::ExtractAngle
          (FAnimNode_RotationMultiplier *this,TQuat<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TTransform<double> *param_2,EBoneAxis param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  TVector<double>_u_0 local_188;
  double local_168;
  double dStack_160;
  TQuat<double> local_158;
  double local_138;
  double dStack_130;
  TQuat<double> local_128;
  TVector<double> local_108;
  TVector<double> local_f0 [9];
  
  dVar2 = (param_1->Rotation).XY.m128d_f64[0];
  dVar4 = (param_1->Rotation).XY.m128d_f64[1];
  dVar6 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  uVar14 = (undefined4)__real_3ff0000000000000;
  uVar15 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (param_3 == BA_X) {
LAB_14643efb9:
    uVar12 = 0;
    uVar13 = 0;
    uVar16 = uVar14;
    uVar17 = uVar15;
  }
  else {
    if (param_3 == BA_Y) {
      uVar12 = 0;
      uVar13 = 0;
      uVar16 = 0;
      uVar17 = 0;
      goto LAB_14643efc8;
    }
    if (param_3 != BA_Z) goto LAB_14643efb9;
    uVar12 = uVar14;
    uVar13 = uVar15;
    uVar16 = 0;
    uVar17 = 0;
  }
  uVar14 = 0;
  uVar15 = 0;
LAB_14643efc8:
  local_158.X = (param_2->Rotation).XY.m128d_f64[0];
  local_158.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_158.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_158.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_188._s_0.X = (double)CONCAT44(uVar17,uVar16);
  local_188._s_0.Y = (double)CONCAT44(uVar15,uVar14);
  local_188._s_0.Z = (double)CONCAT44(uVar13,uVar12);
  local_138 = dVar2;
  dStack_130 = dVar4;
  local_168 = dVar6;
  dStack_160 = dVar7;
  UE::Math::TQuat<double>::RotateVector(&local_158,local_f0,(TVector<double> *)&local_188._s_0);
  local_188._s_0.X = (double)CONCAT44(uVar17,uVar16);
  local_188._s_0.Y = (double)CONCAT44(uVar15,uVar14);
  local_188._s_0.Z = (double)CONCAT44(uVar13,uVar12);
  local_158.X = dVar2;
  local_158.Y = dVar4;
  local_158.Z = dVar6;
  local_158.W = dVar7;
  UE::Math::TQuat<double>::RotateVector(&local_158,&local_108,(TVector<double> *)&local_188._s_0);
  UE::Math::TQuat<double>::FindBetweenNormals(&local_128,local_f0,&local_108);
  dVar2 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar6 = (param_2->Rotation).XY.m128d_f64[0];
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  dVar10 = local_128.X * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_128.W * dVar2 +
           local_128.Y * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           local_128.Z * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = local_128.X * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           local_128.W * dVar4 +
           local_128.Y * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           local_128.Z * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_138 = local_138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dStack_130 = dStack_130 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar8 = dVar4 * local_128.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          local_128.W * dVar6 +
          local_128.Y * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          local_128.Z * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar2 * local_128.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          local_128.W * dVar7 +
          local_128.Y * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_128.Z * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_168 = local_168 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar2 = dStack_160 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(local_168,0);
  auVar1._0_8_ = local_168;
  auVar1._12_4_ = (int)((ulonglong)local_168 >> 0x20);
  dStack_160 = auVar1._8_8_;
  dVar6 = local_138 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar2 * dVar10 +
          dStack_130 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          local_168 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = local_138 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar2 * dVar11 +
          dStack_130 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dStack_160 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar4 = local_138 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar2 * dVar8 +
          dStack_130 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          local_168 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar2 = local_138 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar2 * dVar9 +
          dStack_130 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dStack_160 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->X = dVar4;
  __return_storage_ptr__->Y = (double)auVar3._8_8_;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  __return_storage_ptr__->Z = dVar6;
  __return_storage_ptr__->W = (double)auVar5._8_8_;
  return __return_storage_ptr__;
}

// GatherDebugData @ 146445d00

void __thiscall
FAnimNode_RotationMultiplier::GatherDebugData
          (FAnimNode_RotationMultiplier *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationMultiplier::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier,(UObject *)pUVar1,
                         L"AnimNode_RotationMultiplier");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RotationMultiplier.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_58,"(",1);
  ::FString::PrintfImpl(&local_68,L"Alpha: %.1f%%");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->TargetBone).BoneName,local_38);
  ::FName::ToString(&(this->SourceBone).BoneName,&local_48);
  ::FString::PrintfImpl(&local_68,L" Src: %s Dst: %s Multiplier: %.2f)");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_68,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146457c40

void __thiscall
FAnimNode_RotationMultiplier::InitializeBoneReferences
          (FAnimNode_RotationMultiplier *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationMultiplier::InitializeBoneReferences");
  FBoneReference::Initialize(&this->SourceBone,param_1);
  FBoneReference::Initialize(&this->TargetBone,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bc50

bool __thiscall
FAnimNode_RotationMultiplier::IsValidToEvaluate
          (FAnimNode_RotationMultiplier *this,USkeleton *param_1,FBoneContainer *param_2)

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

// MultiplyQuatBasedOnSourceIndex @ 14645e950

TQuat<double> * __thiscall
FAnimNode_RotationMultiplier::MultiplyQuatBasedOnSourceIndex
          (FAnimNode_RotationMultiplier *this,TQuat<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TTransform<double> *param_2,EBoneAxis param_3,float param_4,
          TQuat<double> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  uint uVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar18;
  double dVar19;
  double dVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar20;
  double dVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  uint uVar47;
  TQuat<double> local_78 [3];
  
  ExtractAngle(this,local_78,param_1,param_2,param_3);
  dVar19 = __real_3ff0000000000000;
  uVar42 = SUB84(__real_3ff0000000000000,0);
  uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar20 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= local_78[0].W) {
    uVar14 = SUB84(local_78[0].W,0);
    uVar16 = (int)((ulonglong)local_78[0].W >> 0x20);
    if (__real_3ff0000000000000 <= local_78[0].W) {
      uVar14 = uVar42;
      uVar16 = uVar44;
    }
    dVar20 = (double)CONCAT44(uVar16,uVar14);
  }
  dVar20 = acos(dVar20);
  fVar39 = (float)(dVar20 + dVar20);
  dVar18 = local_78[0].Z * local_78[0].Z + local_78[0].X * local_78[0].X;
  dVar25 = local_78[0].Y * local_78[0].Y + 0.0;
  dVar20 = dVar25 + dVar18;
  dVar18 = dVar18 + dVar25;
  auVar31._8_4_ = SUB84(dVar18,0);
  auVar31._0_8_ = dVar20;
  auVar31._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar31 = sqrtpd(in_XMM3,auVar31);
  uVar11 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar20)
  ;
  uVar13 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar18)
  ;
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
  uVar12 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar20)
  ;
  auVar41._0_8_ = uVar11 & (ulonglong)(auVar40._0_8_ * local_78[0].X);
  uVar7 = uVar13 & (ulonglong)(auVar40._8_8_ * local_78[0].Y);
  auVar41._8_4_ = (undefined4)uVar7;
  auVar41._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar40._0_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar40._4_4_ =
       ~(uint)(uVar11 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar40._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar40._12_4_ =
       ~(uint)(uVar13 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar41 = auVar41 | auVar40;
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
  local_78[0].Z =
       (double)(CONCAT44(~(uint)(uVar12 >> 0x20) &
                         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                               0x20),
                         ~(uint)uVar12 &
                         SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
               uVar12 & (ulonglong)(auVar31._0_8_ * local_78[0].Z));
  if (param_3 == BA_X) {
LAB_14645ea8a:
    uVar43 = 0;
    uVar45 = 0;
    uVar14 = uVar42;
    uVar16 = uVar44;
  }
  else {
    if (param_3 == BA_Y) {
      uVar14 = 0;
      uVar16 = 0;
      uVar43 = 0;
      uVar45 = 0;
      goto LAB_14645ea95;
    }
    if (param_3 != BA_Z) goto LAB_14645ea8a;
    uVar14 = 0;
    uVar16 = 0;
    uVar43 = uVar42;
    uVar45 = uVar44;
  }
  dVar19 = 0.0;
LAB_14645ea95:
  uVar46 = SUB84(local_78[0].Z,0);
  uVar47 = (uint)((ulonglong)local_78[0].Z >> 0x20);
  uVar37 = auVar41._8_4_;
  uVar38 = auVar41._12_4_;
  dVar20 = auVar41._0_8_;
  if (dVar20 * (double)CONCAT44(uVar16,uVar14) + auVar41._8_8_ * dVar19 +
      local_78[0].Z * (double)CONCAT44(uVar45,uVar43) < 0.0) {
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    fVar39 = (float)((uint)fVar39 ^ __xmm_80000000800000008000000080000000);
    dVar20 = (double)CONCAT44(auVar41._4_4_ ^ uVar17,auVar41._0_4_ ^ uVar15);
    uVar37 = uVar37 ^ uVar15;
    uVar38 = uVar38 ^ uVar17;
    uVar46 = uVar46 ^ uVar15;
    uVar47 = uVar47 ^ uVar17;
  }
  for (; __real_40490fdb < fVar39; fVar39 = fVar39 + __real_c0c90fdb) {
  }
  for (; fVar39 < __real_c0490fdb; fVar39 = fVar39 + __real_40c90fdb) {
  }
  __libm_sse2_sincos_();
  dVar10 = __real_3e45798ee0000000;
  dVar35 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)CONCAT44(uVar47,uVar46);
  auVar34._0_8_ = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar20;
  uVar1 = param_5->X;
  uVar2 = param_5->Y;
  dVar8 = param_5->Z;
  dVar9 = param_5->W;
  dVar27 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)CONCAT44(uVar38,uVar37);
  dVar5 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  auVar34._8_8_ = dVar27;
  auVar29._8_4_ = (int)uVar1;
  auVar29._0_8_ = uVar1;
  auVar29._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
  auVar32._8_4_ = SUB84(dVar27,0);
  auVar32._0_8_ = auVar34._0_8_;
  auVar32._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar21._8_4_ = (int)uVar2;
  auVar21._0_8_ = uVar2;
  auVar21._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar28 = (double)uVar1 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar9 * auVar34._0_8_ +
           (double)uVar2 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar8 * auVar32._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
  ;
  dVar30 = auVar29._8_8_ * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar9 * dVar27 +
           auVar21._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar8 * auVar34._0_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  __return_storage_ptr__->X = dVar28;
  __return_storage_ptr__->Y = dVar30;
  dVar18 = (double)uVar1 * auVar32._8_8_ * dVar19 + dVar9 * dVar35 +
           (double)uVar2 * auVar34._0_8_ * dVar20 + dVar8 * dVar5 * dVar18;
  dVar25 = (double)uVar1 * auVar34._0_8_ * dVar25 + dVar9 * dVar5 + (double)uVar2 * dVar27 * dVar26
           + dVar8 * dVar35 * dVar3;
  uVar42 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar22._8_4_ = SUB84(dVar25,0);
  auVar22._0_8_ = dVar18;
  auVar22._12_4_ = uVar42;
  auVar6._8_4_ = SUB84(dVar25,0);
  auVar6._0_8_ = dVar18;
  auVar6._12_4_ = uVar42;
  __return_storage_ptr__->Z = dVar18;
  __return_storage_ptr__->W = (double)auVar6._8_8_;
  dVar20 = dVar18 * dVar18 + dVar28 * dVar28;
  dVar26 = auVar22._8_8_ * dVar25 + dVar30 * dVar30;
  dVar19 = dVar26 + dVar20;
  dVar20 = dVar20 + dVar26;
  auVar4._8_4_ = SUB84(dVar20,0);
  auVar4._0_8_ = dVar19;
  auVar4._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar31 = sqrtpd(auVar34,auVar4);
  uVar12 = -(ulonglong)(dVar10 <= dVar19);
  uVar11 = -(ulonglong)(dVar10 <= dVar20);
  uVar37 = (uint)(uVar12 >> 0x20);
  uVar38 = (uint)(uVar11 >> 0x20);
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
  auVar36._0_8_ = uVar12 & (ulonglong)(auVar40._0_8_ * dVar28);
  uVar7 = uVar11 & (ulonglong)(auVar40._8_8_ * dVar30);
  auVar36._8_4_ = (undefined4)uVar7;
  auVar36._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar23._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar23._4_4_ =
       ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._12_4_ =
       ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
  auVar33._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar33._4_4_ =
       ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar33._8_4_ = ~(uint)uVar11 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar33._12_4_ =
       ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar36 | auVar23,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar36 | auVar23,8);
  auVar24._0_8_ = (ulonglong)(auVar31._0_8_ * dVar18) & uVar12;
  uVar11 = (ulonglong)(auVar31._8_8_ * dVar25) & uVar11;
  auVar24._8_4_ = (undefined4)uVar11;
  auVar24._12_4_ = (undefined4)(uVar11 >> 0x20);
  __return_storage_ptr__->Z = (double)SUB168(auVar33 | auVar24,0);
  __return_storage_ptr__->W = (double)SUB168(auVar33 | auVar24,8);
  return __return_storage_ptr__;
}

