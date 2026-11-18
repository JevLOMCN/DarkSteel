// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463e81a0

UScriptStruct * __cdecl FAnimNode_Constraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Constraint,(UObject *)pUVar1,
                         L"AnimNode_Constraint");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton;
}

// FAnimNode_Constraint @ 146403810

FAnimNode_Constraint * __thiscall
FAnimNode_Constraint::FAnimNode_Constraint(FAnimNode_Constraint *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_Constraint__6B_;
  (this->BoneToModify).BoneName.ComparisonIndex = 0;
  (this->BoneToModify).BoneName.Number = 0;
  puVar1 = &(this->BoneToModify).field_0x8;
  (this->BoneToModify).BoneIndex = -1;
  (this->BoneToModify).bUseSkeletonIndex = 0;
  (this->BoneToModify).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->ConstraintSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSetup).ArrayNum = 0;
  (this->ConstraintSetup).ArrayMax = 0;
  (this->ConstraintWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintWeights).ArrayNum = 0;
  (this->ConstraintWeights).ArrayMax = 0;
  (this->ConstraintData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintData).ArrayNum = 0;
  (this->ConstraintData).ArrayMax = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedConstrainedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedConstrainedTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedConstrainedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedConstrainedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedConstrainedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedConstrainedTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedConstrainedTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedConstrainedTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedConstrainedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedConstrainedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->CachedConstrainedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->CachedConstrainedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->CachedTargetTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedTargetTransforms).ArrayNum = 0;
  (this->CachedTargetTransforms).ArrayMax = 0;
  return this;
}

// ~FAnimNode_Constraint @ 146408850

void __thiscall FAnimNode_Constraint::~FAnimNode_Constraint(FAnimNode_Constraint *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CachedTargetTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FConstraintData,int>
            ((FConstraintData *)(this->ConstraintData).AllocatorInstance.Data,
             (this->ConstraintData).ArrayNum);
  pFVar1 = (this->ConstraintData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSetup).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14642b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_Constraint::EvaluateSkeletalControl_AnyThread
          (FAnimNode_Constraint *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  FString *pFVar23;
  longlong lVar24;
  FBoneReference *this_00;
  wchar_t *pwVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  FCompactPoseBoneIndex *pFVar29;
  undefined1 auStack_268 [32];
  FCompactPoseBoneIndex *local_248;
  FCompactPoseBoneIndex *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_218;
  FComponentSpacePoseContext *local_210;
  FBoneContainer *local_208;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_200;
  FString local_1f8;
  FCompactPoseBoneIndex local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_210 = param_1;
  local_200 = param_2;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Constraint::EvaluateSkeletalControl_AnyThread");
  fVar2 = __real_3727c5ac;
  lVar28 = (longlong)(this->ConstraintSetup).ArrayNum;
  uVar27 = 0;
  local_208 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  local_218 = lVar28;
  if (0 < lVar28) {
    pFVar29 = (FCompactPoseBoneIndex *)0x0;
    lVar26 = 0;
    do {
      iVar21 = (this->ConstraintSetup).ArrayNum;
      uVar19 = 0;
      if ((int)uVar27 < iVar21) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_248 = (FCompactPoseBoneIndex *)(longlong)(int)uVar27;
        local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar21 = (this->ConstraintWeights).ArrayNum;
      this_00 = (FBoneReference *)((this->ConstraintSetup).AllocatorInstance.Data + lVar26);
      uVar19 = 0;
      if ((int)uVar27 < iVar21) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_248 = pFVar29, local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21,
         bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar1 = *(float *)((this->ConstraintWeights).AllocatorInstance.Data + (longlong)pFVar29 * 4);
      if (((fVar2 < fVar1) &&
          (bVar18 = FBoneReference::IsValidToEvaluate(this_00,local_208), bVar18)) &&
         ((*(char *)((longlong)&this_00[1].BoneName.ComparisonIndex.Value + 2) != '\0' ||
          ((*(char *)((longlong)&this_00[1].BoneName.ComparisonIndex.Value + 3) != '\0' ||
           ((char)this_00[1].BoneName.Number != '\0')))))) {
        uVar3 = *(undefined4 *)&this_00[1].field_0x8;
        if (SPULL(uVar3,0,0x1f) != -1 || this_00[1].bUseSkeletonIndex != 1) {
          iVar21 = (this->ConstraintData).ArrayNum;
          uVar19 = 0;
          if ((int)uVar3 < iVar21) {
            uVar19 = (uint)~uVar3 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (local_248 = (FCompactPoseBoneIndex *)(longlong)(int)uVar3,
             local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21,
             bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)((this->ConstraintData).AllocatorInstance.Data +
                    (longlong)(int)uVar3 * 0xe0 + 0x10) = fVar1;
          pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (&local_210->Pose,this_00->CachedCompactPoseIndex);
          uVar19 = *(uint *)&this_00[1].field_0x8;
          iVar21 = (this->ConstraintData).ArrayNum;
          dVar6 = (pTVar22->Rotation).XY.m128d_f64[0];
          dVar7 = (pTVar22->Rotation).XY.m128d_f64[1];
          dVar8 = (pTVar22->Rotation).ZW.m128d_f64[0];
          dVar9 = (pTVar22->Rotation).ZW.m128d_f64[1];
          dVar10 = (pTVar22->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar22->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar22->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar22->Translation).ZW.m128d_f64[1];
          dVar14 = (pTVar22->Scale3D).XY.m128d_f64[0];
          dVar15 = (pTVar22->Scale3D).XY.m128d_f64[1];
          dVar16 = (pTVar22->Scale3D).ZW.m128d_f64[0];
          dVar17 = (pTVar22->Scale3D).ZW.m128d_f64[1];
          uVar20 = 0;
          if ((int)uVar19 < iVar21) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (local_248 = (FCompactPoseBoneIndex *)(longlong)(int)uVar19,
             local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21,
             bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->ConstraintData).AllocatorInstance.Data;
          lVar24 = (longlong)(int)uVar19 * 0xe0;
          *(double *)(pFVar4 + lVar24 + 0x80) = dVar6;
          *(double *)(pFVar4 + lVar24 + 0x80 + 8) = dVar7;
          *(double *)(pFVar4 + lVar24 + 0x90) = dVar8;
          *(double *)(pFVar4 + lVar24 + 0x90 + 8) = dVar9;
          *(double *)(pFVar4 + lVar24 + 0xa0) = dVar10;
          *(double *)(pFVar4 + lVar24 + 0xa0 + 8) = dVar11;
          *(double *)(pFVar4 + lVar24 + 0xb0) = dVar12;
          *(double *)(pFVar4 + lVar24 + 0xb0 + 8) = dVar13;
          *(double *)(pFVar4 + lVar24 + 0xc0) = dVar14;
          *(double *)(pFVar4 + lVar24 + 0xc0 + 8) = dVar15;
          *(double *)(pFVar4 + lVar24 + 0xd0) = dVar16;
          *(double *)(pFVar4 + lVar24 + 0xd0 + 8) = dVar17;
        }
      }
      uVar27 = uVar27 + 1;
      pFVar29 = (FCompactPoseBoneIndex *)&pFVar29->field_0x1;
      lVar26 = lVar26 + 0x1c;
      param_1 = local_210;
      param_2 = local_200;
    } while ((longlong)pFVar29 < lVar28);
  }
  lVar28 = local_218;
  if (0 < (this->ConstraintData).ArrayNum) {
    pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(this->BoneToModify).CachedCompactPoseIndex);
    local_178.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
    local_178.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
    local_178.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
    local_178.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
    local_178.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
    local_178.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
    local_178.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
    local_178.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
    local_178.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
    local_178.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
    local_178.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
    AnimationCore::SolveConstraints
              (&local_118,&local_178,&UE::Math::TTransform<double>::Identity,&this->ConstraintData);
    local_1e8 = (this->BoneToModify).CachedCompactPoseIndex;
    pFVar29 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
    local_1d8 = local_118.Rotation.XY.m128d_f64[0];
    dStack_1d0 = local_118.Rotation.XY.m128d_f64[1];
    local_1c8 = local_118.Rotation.ZW.m128d_f64[0];
    dStack_1c0 = local_118.Rotation.ZW.m128d_f64[1];
    local_1b8 = local_118.Translation.XY.m128d_f64[0];
    dStack_1b0 = local_118.Translation.XY.m128d_f64[1];
    local_1a8 = local_118.Translation.ZW.m128d_f64[0];
    dStack_1a0 = local_118.Translation.ZW.m128d_f64[1];
    local_198 = local_118.Scale3D.XY.m128d_f64[0];
    dStack_190 = local_118.Scale3D.XY.m128d_f64[1];
    local_188 = local_118.Scale3D.ZW.m128d_f64[0];
    dStack_180 = local_118.Scale3D.ZW.m128d_f64[1];
    if ((pFVar29 <= &local_1e8) && (&local_1e8 < pFVar29 + (longlong)param_2->ArrayMax * 0x1c)) {
      local_230 = (longlong)param_2->ArrayNum;
      local_228 = 0x70;
      local_248 = &local_1e8;
      local_240 = pFVar29;
      local_238 = (longlong)param_2->ArrayMax;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar21 = param_2->ArrayNum;
    if (iVar21 == param_2->ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar21 + 1;
    lVar26 = (longlong)iVar21 * 0x70;
    pFVar4 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + lVar26) = CONCAT44(uStack_1e4,local_1e8);
    *(undefined8 *)(pFVar4 + lVar26 + 8) = uStack_1e0;
    *(double *)(pFVar4 + lVar26 + 0x10) = local_1d8;
    *(double *)(pFVar4 + lVar26 + 0x10 + 8) = dStack_1d0;
    *(double *)(pFVar4 + lVar26 + 0x20) = local_1c8;
    *(double *)(pFVar4 + lVar26 + 0x20 + 8) = dStack_1c0;
    *(double *)(pFVar4 + lVar26 + 0x30) = local_1b8;
    *(double *)(pFVar4 + lVar26 + 0x30 + 8) = dStack_1b0;
    *(double *)(pFVar4 + lVar26 + 0x40) = local_1a8;
    *(double *)(pFVar4 + lVar26 + 0x40 + 8) = dStack_1a0;
    *(double *)(pFVar4 + lVar26 + 0x50) = local_198;
    *(double *)(pFVar4 + lVar26 + 0x50 + 8) = dStack_190;
    *(double *)(pFVar4 + lVar26 + 0x60) = local_188;
    *(double *)(pFVar4 + lVar26 + 0x60 + 8) = dStack_180;
  }
  uVar27 = 0;
  if (0 < lVar28) {
    lVar26 = 0;
    do {
      iVar21 = (this->ConstraintWeights).ArrayNum;
      uVar19 = 0;
      if ((int)uVar27 < iVar21) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_248 = (FCompactPoseBoneIndex *)(longlong)(int)uVar27;
        local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar21 = (this->ConstraintSetup).ArrayNum;
      fVar2 = *(float *)((this->ConstraintWeights).AllocatorInstance.Data + lVar26 * 4);
      uVar19 = 0;
      if ((int)uVar27 < iVar21) {
        uVar19 = ~uVar27 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_248 = (FCompactPoseBoneIndex *)(longlong)(int)uVar27;
        local_240 = (FCompactPoseBoneIndex *)(longlong)iVar21;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar23 = ::FName::ToString((FName *)((this->ConstraintSetup).AllocatorInstance.Data +
                                           (longlong)(int)uVar27 * 0x1c),&local_1f8);
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      FAnimTrace::OutputAnimNodeValue
                ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                 pwVar25,fVar2);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      uVar27 = uVar27 + 1;
      lVar26 = lVar26 + 1;
    } while (lVar26 < lVar28);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146442d10

void __thiscall
FAnimNode_Constraint::GatherDebugData(FAnimNode_Constraint *this,FNodeDebugData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  FName local_res8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Constraint::GatherDebugData");
  FInputScaleBias::ApplyTo
            ((FInputScaleBias *)&this->_padding_,*(float *)((longlong)&this->_padding_ + 4));
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Constraint,(UObject *)pUVar6,
                         L"AnimNode_Constraint");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Constraint.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_78);
  ::FString::PrintfImpl(&local_b8,L"%s<W:%.1f%%> %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_68,L"(Alpha: %.1f%%)");
  uVar8 = 0;
  iVar10 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AppendChars(&local_b8,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar3.Data = local_b8.Data.AllocatorInstance.Data;
  lVar7 = (longlong)local_b8.Data.ArrayNum;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = local_b8.Data.ArrayNum;
  if (local_b8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_b8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,FVar3.Data,lVar7 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_a8,false);
  lVar7 = (longlong)(this->ConstraintSetup).ArrayNum;
  uVar11 = uVar8;
  if (0 < lVar7) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < (this->ConstraintSetup).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ConstraintSetup).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar9 < (this->ConstraintWeights).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FName::ToString((FName *)(pFVar1 + (longlong)(int)uVar9 * 0x1c),local_58);
      ::FString::PrintfImpl(&local_98,L"  Target : %s (%0.2f) ");
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = local_98.Data.ArrayNum;
      local_b8.Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
      }
      iVar10 = local_b8.Data.ArrayNum;
      FVar3.Data = local_b8.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = local_b8.Data.ArrayNum;
      if (local_b8.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_b8.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,FVar3.Data,(longlong)iVar10 * 2);
      }
      FNodeDebugData::AddDebugItem(param_1,&local_88,false);
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < lVar7);
  }
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_Constraint::InitializeBoneReferences(FAnimNode_Constraint *this,FBoneContainer *param_1)

{
  TArray<FConstraintData,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  FConstraintData *pFVar4;
  code *pcVar5;
  double adVar6 [2];
  double adVar7 [2];
  double adVar8 [2];
  double adVar9 [2];
  double adVar10 [2];
  double adVar11 [2];
  FConstraintDescriptionEx *pFVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FAimConstraintDescription *pFVar16;
  TTransform<double> *pTVar17;
  FConstraintDescriptionEx *pFVar18;
  FConstraintDescriptor *this_00;
  FBoneReference *this_01;
  uint uVar19;
  int *piVar20;
  undefined1 auStackY_338 [32];
  longlong local_2d0;
  longlong local_2c8;
  TTransform<double> local_2a8;
  FConstraintData local_248;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Constraint::InitializeBoneReferences");
  FBoneReference::Initialize(&this->BoneToModify,param_1);
  uVar14 = (this->ConstraintSetup).ArrayNum;
  pTVar1 = &this->ConstraintData;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  pFVar4 = (FConstraintData *)(pTVar1->AllocatorInstance).Data;
  iVar15 = (this->ConstraintData).ArrayNum;
  piVar20 = &(this->ConstraintData).ArrayMax;
  if ((this->ConstraintData).ArrayMax < (int)uVar14) {
    DestructItems<FConstraintData,int>(pFVar4,iVar15);
    (this->ConstraintData).ArrayNum = 0;
    if (*piVar20 != uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,uVar14,&pTVar1->AllocatorInstance,0,piVar20);
    }
  }
  else {
    DestructItems<FConstraintData,int>(pFVar4,iVar15);
    (this->ConstraintData).ArrayNum = 0;
  }
  iVar15 = (this->ConstraintSetup).ArrayNum;
  local_2c8 = (longlong)iVar15;
  bVar13 = FBoneReference::IsValidToEvaluate(&this->BoneToModify,param_1);
  if ((bVar13) &&
     (FAnimationRuntime::GetComponentSpaceRefPose
                (&local_108,&(this->BoneToModify).CachedCompactPoseIndex,param_1), 0 < iVar15)) {
    local_2d0 = 0;
    pFVar16 = (FAimConstraintDescription *)0x0;
    do {
      piVar20 = &(this->ConstraintData).ArrayMax;
      uVar19 = (uint)pFVar16;
      uVar14 = 0;
      if ((int)uVar19 < (this->ConstraintSetup).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (FBoneReference *)((this->ConstraintSetup).AllocatorInstance.Data + local_2d0);
      FBoneReference::Initialize(this_01,param_1);
      bVar13 = FBoneReference::IsValidToEvaluate(this_01,param_1);
      if (bVar13) {
        bVar13 = (char)this_01[1].BoneName.ComparisonIndex.Value != '\0';
        uVar2 = *(undefined1 *)((longlong)&this_01[1].BoneName.ComparisonIndex.Value + 1);
        local_248.Constraint.Type = Transform;
        local_248.Constraint.ConstraintDescription = (FConstraintDescriptionEx *)0x0;
        pFVar16 = ::operator_new(0x18);
        local_248.Constraint.ConstraintDescription =
             (FConstraintDescriptionEx *)(FAimConstraintDescription *)0x0;
        if (pFVar16 != (FAimConstraintDescription *)0x0) {
          *(undefined2 *)&pFVar16->_padding_ = 0x101;
          *(undefined1 *)((longlong)&pFVar16->_padding_ + 2) = 1;
          pFVar16->_padding_ = (longlong)&___7FTransformConstraintDescription__6B_;
          *(undefined1 *)&(pFVar16->LookAt_Axis).Axis.field0_0x0 = uVar2;
          local_248.Constraint.ConstraintDescription = (FConstraintDescriptionEx *)pFVar16;
        }
        local_248.Offset.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_248.Offset.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_248.Offset.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_248.Offset.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_248.bMaintainOffset = bVar13;
        local_248.Weight = 0.0;
        local_248.Offset.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        adVar6[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        adVar6[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        adVar6[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_248.CurrentTransform.Rotation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_248.CurrentTransform.Rotation.XY.m128d_f64[1] = adVar6[1];
        local_248.Offset.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        adVar7[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        adVar7[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        adVar7[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_248.CurrentTransform.Rotation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_248.CurrentTransform.Rotation.ZW.m128d_f64[1] = adVar7[1];
        adVar10[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        adVar10[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        adVar10[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_248.CurrentTransform.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_248.CurrentTransform.Translation.XY.m128d_f64[1] = adVar10[1];
        adVar8[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        adVar8[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        adVar8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_248.CurrentTransform.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_248.CurrentTransform.Translation.ZW.m128d_f64[1] = adVar8[1];
        adVar11[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        adVar11[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        adVar11[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_248.CurrentTransform.Scale3D.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_248.CurrentTransform.Scale3D.XY.m128d_f64[1] = adVar11[1];
        adVar9[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        adVar9[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        adVar9[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_248.CurrentTransform.Scale3D.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_248.CurrentTransform.Scale3D.ZW.m128d_f64[1] = adVar9[1];
        *(undefined2 *)
         &((FAimConstraintDescription *)local_248.Constraint.ConstraintDescription)->_padding_ =
             *(undefined2 *)((longlong)&this_01[1].BoneName.ComparisonIndex.Value + 2);
        *(char *)((longlong)
                  &((FAimConstraintDescription *)local_248.Constraint.ConstraintDescription)->
                   _padding_ + 2) = (char)this_01[1].BoneName.Number;
        if (bVar13) {
          pTVar17 = FAnimationRuntime::GetComponentSpaceRefPose
                              (&local_a8,&this_01->CachedCompactPoseIndex,param_1);
        }
        else {
          pTVar17 = &local_2a8;
          local_2a8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_2a8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_2a8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_2a8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_2a8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_2a8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        local_168.Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
        local_168.Rotation.XY.m128d_f64[1] = (pTVar17->Rotation).XY.m128d_f64[1];
        local_168.Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
        local_168.Rotation.ZW.m128d_f64[1] = (pTVar17->Rotation).ZW.m128d_f64[1];
        local_168.Translation.XY.m128d_f64[0] = (pTVar17->Translation).XY.m128d_f64[0];
        local_168.Translation.XY.m128d_f64[1] = (pTVar17->Translation).XY.m128d_f64[1];
        local_168.Translation.ZW.m128d_f64[0] = (pTVar17->Translation).ZW.m128d_f64[0];
        local_168.Translation.ZW.m128d_f64[1] = (pTVar17->Translation).ZW.m128d_f64[1];
        local_168.Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
        local_168.Scale3D.XY.m128d_f64[1] = (pTVar17->Scale3D).XY.m128d_f64[1];
        local_168.Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
        local_168.Scale3D.ZW.m128d_f64[1] = (pTVar17->Scale3D).ZW.m128d_f64[1];
        FConstraintData::SaveInverseOffset
                  (&local_248,&local_108,&local_168,&UE::Math::TTransform<double>::Identity);
        pFVar4 = (FConstraintData *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= &local_248) && (&local_248 < pFVar4 + *piVar20)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar15 = (this->ConstraintData).ArrayNum;
        if (iVar15 == *piVar20) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10e0,&pTVar1->AllocatorInstance,piVar20);
        }
        pFVar12 = local_248.Constraint.ConstraintDescription;
        (this->ConstraintData).ArrayNum = iVar15 + 1;
        this_00 = (FConstraintDescriptor *)
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 0xe0);
        this_00->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
        this_00->Type = local_248.Constraint.Type;
        if ((FAimConstraintDescription *)local_248.Constraint.ConstraintDescription !=
            (FAimConstraintDescription *)0x0) {
          if (local_248.Constraint.Type == Transform) {
            pFVar18 = ::operator_new(0x18);
            if (pFVar18 == (FConstraintDescriptionEx *)0x0) {
              this_00->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
            }
            else {
              pFVar18->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
              uVar3 = (undefined2)*(longlong *)&pFVar12->AxesFilterOption;
              (pFVar18->AxesFilterOption).bX = (bool)(char)uVar3;
              (pFVar18->AxesFilterOption).bY = (bool)(char)((ushort)uVar3 >> 8);
              (pFVar18->AxesFilterOption).bZ = *(bool *)((longlong)&pFVar12->AxesFilterOption + 2);
              pFVar18->_padding_ = (longlong)&___7FTransformConstraintDescription__6B_;
              *(undefined1 *)&pFVar18[1]._padding_ =
                   *(undefined1 *)&(((FAxis *)((longlong)pFVar12 + 0x10))->Axis).field0_0x0;
              this_00->ConstraintDescription = pFVar18;
            }
          }
          else if (local_248.Constraint.Type == Aim) {
            FConstraintDescriptor::Set
                      (this_00,(FAimConstraintDescription *)
                               local_248.Constraint.ConstraintDescription);
          }
        }
        *(float *)(this_00 + 1) = local_248.Weight;
        this_00[1].field_0x4 = local_248.bMaintainOffset;
        *(double *)(this_00 + 2) = local_248.Offset.Rotation.XY.m128d_f64[0];
        this_00[2].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Rotation.XY.m128d_f64[1];
        *(double *)(this_00 + 3) = local_248.Offset.Rotation.ZW.m128d_f64[0];
        this_00[3].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Rotation.ZW.m128d_f64[1];
        *(double *)(this_00 + 4) = local_248.Offset.Translation.XY.m128d_f64[0];
        this_00[4].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Translation.XY.m128d_f64[1];
        *(double *)(this_00 + 5) = local_248.Offset.Translation.ZW.m128d_f64[0];
        this_00[5].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Translation.ZW.m128d_f64[1];
        *(double *)(this_00 + 6) = local_248.Offset.Scale3D.XY.m128d_f64[0];
        this_00[6].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Scale3D.XY.m128d_f64[1];
        *(double *)(this_00 + 7) = local_248.Offset.Scale3D.ZW.m128d_f64[0];
        this_00[7].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.Offset.Scale3D.ZW.m128d_f64[1];
        *(double *)(this_00 + 8) = local_248.CurrentTransform.Rotation.XY.m128d_f64[0];
        this_00[8].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.CurrentTransform.Rotation.XY.m128d_f64[1];
        *(double *)(this_00 + 9) = local_248.CurrentTransform.Rotation.ZW.m128d_f64[0];
        this_00[9].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.CurrentTransform.Rotation.ZW.m128d_f64[1];
        *(double *)(this_00 + 10) = local_248.CurrentTransform.Translation.XY.m128d_f64[0];
        this_00[10].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.CurrentTransform.Translation.XY.m128d_f64[1];
        *(double *)(this_00 + 0xb) = local_248.CurrentTransform.Translation.ZW.m128d_f64[0];
        this_00[0xb].ConstraintDescription =
             (FConstraintDescriptionEx *)local_248.CurrentTransform.Translation.ZW.m128d_f64[1];
        *(undefined4 *)(this_00 + 0xc) = local_248.CurrentTransform.Scale3D.XY.m128d_f64[0]._0_4_;
        *(undefined4 *)&this_00[0xc].field_0x4 =
             local_248.CurrentTransform.Scale3D.XY.m128d_f64[0]._4_4_;
        *(undefined4 *)&this_00[0xc].ConstraintDescription =
             local_248.CurrentTransform.Scale3D.XY.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)&this_00[0xc].ConstraintDescription + 4) =
             local_248.CurrentTransform.Scale3D.XY.m128d_f64[1]._4_4_;
        *(undefined4 *)(this_00 + 0xd) = local_248.CurrentTransform.Scale3D.ZW.m128d_f64[0]._0_4_;
        *(undefined4 *)&this_00[0xd].field_0x4 =
             local_248.CurrentTransform.Scale3D.ZW.m128d_f64[0]._4_4_;
        *(undefined4 *)&this_00[0xd].ConstraintDescription =
             local_248.CurrentTransform.Scale3D.ZW.m128d_f64[1]._0_4_;
        *(undefined4 *)((longlong)&this_00[0xd].ConstraintDescription + 4) =
             local_248.CurrentTransform.Scale3D.ZW.m128d_f64[1]._4_4_;
        *(int *)&this_01[1].field_0x8 = iVar15;
        if ((FAimConstraintDescription *)local_248.Constraint.ConstraintDescription !=
            (FAimConstraintDescription *)0x0) {
          (**(code **)(local_248.Constraint.ConstraintDescription)->_padding_)
                    (local_248.Constraint.ConstraintDescription,1);
          local_248.Constraint.ConstraintDescription = (FConstraintDescriptionEx *)0x0;
        }
      }
      else {
        this_01[1].BoneIndex = -1;
        this_01[1].bUseSkeletonIndex = 1;
      }
      pFVar16 = (FAimConstraintDescription *)(ulonglong)(uVar19 + 1);
      local_2d0 = local_2d0 + 0x1c;
      local_2c8 = local_2c8 + -1;
    } while (local_2c8 != 0);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b6b0

bool __thiscall
FAnimNode_Constraint::IsValidToEvaluate
          (FAnimNode_Constraint *this,USkeleton *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  byte bVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FBoneReference *this_00;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  fVar3 = __real_3727c5ac;
  bVar6 = false;
  uVar8 = 0;
  if (0 < (this->ConstraintSetup).ArrayNum) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->ConstraintSetup).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      this_00 = (FBoneReference *)((this->ConstraintSetup).AllocatorInstance.Data + lVar10);
      uVar7 = 0;
      if ((int)uVar8 < (this->ConstraintWeights).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      if (fVar3 < *(float *)((this->ConstraintWeights).AllocatorInstance.Data + lVar9 * 4)) {
        bVar4 = FBoneReference::IsValidToEvaluate(this_00,param_2);
        if ((bVar4) &&
           (((*(char *)((longlong)&this_00[1].BoneName.ComparisonIndex.Value + 2) != '\0' ||
             (*(char *)((longlong)&this_00[1].BoneName.ComparisonIndex.Value + 3) != '\0')) ||
            ((char)this_00[1].BoneName.Number != '\0')))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        bVar6 = (bool)(bVar6 | bVar2);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x1c;
    } while ((int)uVar8 < (this->ConstraintSetup).ArrayNum);
    if (bVar6) {
      bVar6 = FBoneReference::IsValidToEvaluate(&this->BoneToModify,param_2);
      if (bVar6) {
        return true;
      }
    }
  }
  return false;
}

