// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463d3700

UScriptStruct * __cdecl FAnimNode_HandIKRetargeting::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting,(UObject *)pUVar1,
                         L"AnimNode_HandIKRetargeting");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton;
}

// FAnimNode_HandIKRetargeting @ 146403d40

FAnimNode_HandIKRetargeting * __thiscall
FAnimNode_HandIKRetargeting::FAnimNode_HandIKRetargeting(FAnimNode_HandIKRetargeting *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_HandIKRetargeting__6B_;
  (this->RightHandFK).BoneName.ComparisonIndex = 0;
  (this->RightHandFK).BoneName.Number = 0;
  puVar1 = &(this->RightHandFK).field_0x8;
  (this->RightHandFK).BoneIndex = -1;
  (this->RightHandFK).bUseSkeletonIndex = 0;
  (this->RightHandFK).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LeftHandFK).BoneName.ComparisonIndex = 0;
  (this->LeftHandFK).BoneName.Number = 0;
  puVar1 = &(this->LeftHandFK).field_0x8;
  (this->LeftHandFK).BoneIndex = -1;
  (this->LeftHandFK).bUseSkeletonIndex = 0;
  (this->LeftHandFK).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RightHandIK).BoneName.ComparisonIndex = 0;
  (this->RightHandIK).BoneName.Number = 0;
  puVar1 = &(this->RightHandIK).field_0x8;
  (this->RightHandIK).BoneIndex = -1;
  (this->RightHandIK).bUseSkeletonIndex = 0;
  (this->RightHandIK).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LeftHandIK).BoneName.ComparisonIndex = 0;
  (this->LeftHandIK).BoneName.Number = 0;
  puVar1 = &(this->LeftHandIK).field_0x8;
  (this->LeftHandIK).BoneIndex = -1;
  (this->LeftHandIK).bUseSkeletonIndex = 0;
  (this->LeftHandIK).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->IKBonesToMove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IKBonesToMove).ArrayNum = 0;
  (this->IKBonesToMove).ArrayMax = 0;
  (this->PerAxisAlpha).field0_0x0._s_0.X = 1.0;
  (this->PerAxisAlpha).field0_0x0._s_0.Y = 1.0;
  (this->PerAxisAlpha).field0_0x0._s_0.Z = 1.0;
  this->HandFKWeight = 0.5;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642e2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_HandIKRetargeting::EvaluateSkeletalControl_AnyThread
          (FAnimNode_HandIKRetargeting *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FCSPose<FCompactPose> *this_00;
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FBoneContainer *pFVar5;
  FCompactPoseBoneIndex *pFVar6;
  code *pcVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  FWeakObjectPtr FVar11;
  FScriptContainerElement *pFVar12;
  FWeakObjectPtr FVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TConsoleVariableData<bool> *pTVar20;
  bool bVar21;
  int iVar22;
  longlong lVar23;
  TTransform<double> *pTVar24;
  FBoneReference *this_01;
  FBoneReference *pFVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_2a8 [32];
  FCompactPoseBoneIndex *local_288;
  FCompactPoseBoneIndex *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_258;
  FIdentityFunctor local_257 [3];
  FCompactPoseBoneIndex local_254;
  FCompactPoseBoneIndex local_250;
  FCompactPoseBoneIndex local_24c;
  FCompactPoseBoneIndex local_248;
  FCompactPoseBoneIndex local_244;
  FCompactPoseBoneIndex local_240;
  FCompactPoseBoneIndex local_23c;
  FCompactPoseBoneIndex local_238;
  FCompactPoseBoneIndex local_234;
  ForElementType<unsigned_int> local_230;
  ForElementType<unsigned_int> local_228;
  FWeakObjectPtr FStack_220;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FWeakObjectPtr FStack_208;
  ForAnyElementType local_200;
  ForAnyElementType local_1f8;
  ForAnyElementType FStack_1f0;
  ForAnyElementType local_1e8;
  FWeakObjectPtr local_1e0;
  FWeakObjectPtr FStack_1d8;
  ForAnyElementType local_1d0;
  ForAnyElementType local_1c8;
  ForAnyElementType FStack_1c0;
  ForAnyElementType local_1b8;
  ForAnyElementType local_1b0;
  ForAnyElementType FStack_1a8;
  ForAnyElementType local_1a0;
  ForAnyElementType local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  FSkelMeshRefPoseOverride *local_168;
  FSharedReferencer<1> FStack_160;
  FSharedReferencer<1> local_158;
  FCompactPoseBoneIndex local_148;
  int iStack_144;
  undefined1 auStack_140 [16];
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_230 = (ForElementType<unsigned_int>)param_1;
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_HandIKRetargeting::EvaluateSkeletalControl_AnyThread");
  pTVar20 = CVarAnimHandIKRetargetingEnable.Ref;
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar23 = 0;
  }
  else {
    lVar23 = 1;
  }
  dVar10 = __real_3f1a36e2e0000000;
  uVar29 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar28 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((pTVar20->ShadowedValue[lVar23] != false) &&
     (((uVar1 = *(undefined8 *)&(this->PerAxisAlpha).field0_0x0,
       uVar26 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar27 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar27,uVar26) &&
       (double)CONCAT44(uVar27,uVar26) != __real_3f1a36e2e0000000 ||
       (uVar1 = *(undefined8 *)((longlong)&(this->PerAxisAlpha).field0_0x0 + 8),
       uVar26 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar27 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar27,uVar26) &&
       (double)CONCAT44(uVar27,uVar26) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)((longlong)&(this->PerAxisAlpha).field0_0x0 + 0x10),
      uVar26 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar27 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar27,uVar26) &&
      (double)CONCAT44(uVar27,uVar26) != __real_3f1a36e2e0000000)))) {
    pFVar5 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
    this_00 = &param_1->Pose;
    if (this->HandFKWeight < __real_3f7fff58) {
      if (__real_3727c5ac < this->HandFKWeight) {
        FBoneReference::GetCompactPoseIndex(&this->RightHandFK,(FBoneContainer *)&local_240);
        FBoneReference::GetCompactPoseIndex(&this->RightHandIK,(FBoneContainer *)&local_23c);
        FBoneReference::GetCompactPoseIndex(&this->LeftHandFK,(FBoneContainer *)&local_238);
        FBoneReference::GetCompactPoseIndex(&this->LeftHandIK,(FBoneContainer *)&local_234);
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_240);
        pFVar2 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[0];
        pFVar12 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[1];
        pFVar14 = (FScriptContainerElement *)(pTVar24->Translation).ZW.m128d_f64[0];
        local_1b0.Data = pFVar2;
        FStack_1a8.Data = pFVar12;
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_23c);
        dVar15 = (pTVar24->Translation).XY.m128d_f64[0];
        dVar16 = (pTVar24->Translation).XY.m128d_f64[1];
        dVar17 = (pTVar24->Translation).ZW.m128d_f64[0];
        local_180 = dVar15;
        dStack_178 = dVar16;
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_238);
        pFVar3 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[0];
        dVar18 = (pTVar24->Translation).XY.m128d_f64[1];
        dVar19 = (pTVar24->Translation).ZW.m128d_f64[0];
        local_198.Data = pFVar3;
        dStack_190 = dVar18;
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_234);
        dVar8 = (double)this->HandFKWeight;
        local_168 = (FSkelMeshRefPoseOverride *)(pTVar24->Translation).XY.m128d_f64[0];
        FStack_160.ReferenceController =
             (TReferenceControllerBase<1> *)(pTVar24->Translation).XY.m128d_f64[1];
        local_158.ReferenceController =
             (TReferenceControllerBase<1> *)(pTVar24->Translation).ZW.m128d_f64[0];
        FVar13 = (FWeakObjectPtr)(((double)pFVar2 - (double)pFVar3) * dVar8 + (double)pFVar3);
        pFVar9 = (FScriptContainerElement *)
                 ((dVar15 - (double)local_168) * dVar8 + (double)local_168);
        pFVar2 = (FScriptContainerElement *)(((double)pFVar14 - dVar19) * dVar8 + dVar19);
        pFVar3 = (FScriptContainerElement *)
                 ((dVar17 - (double)local_158.ReferenceController) * dVar8 +
                 (double)local_158.ReferenceController);
        FVar11 = (FWeakObjectPtr)(((double)pFVar12 - dVar18) * dVar8 + dVar18);
        pFVar12 = (FScriptContainerElement *)
                  ((dVar16 - (double)FStack_160.ReferenceController) * dVar8 +
                  (double)FStack_160.ReferenceController);
        local_1a0.Data = pFVar14;
        local_188 = dVar19;
        local_170 = dVar17;
      }
      else {
        FBoneReference::GetCompactPoseIndex(&this->LeftHandFK,(FBoneContainer *)&local_248);
        FBoneReference::GetCompactPoseIndex(&this->LeftHandIK,(FBoneContainer *)&local_244);
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_248);
        pFVar2 = (FScriptContainerElement *)(pTVar24->Translation).ZW.m128d_f64[0];
        FVar13 = (FWeakObjectPtr)(pTVar24->Translation).XY.m128d_f64[0];
        FVar11 = *(FWeakObjectPtr *)((pTVar24->Translation).XY.m128d_f64 + 1);
        local_1e0 = FVar13;
        FStack_1d8 = FVar11;
        local_1d0.Data = pFVar2;
        pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_244);
        pFVar9 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[0];
        pFVar12 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[1];
        pFVar3 = (FScriptContainerElement *)(pTVar24->Translation).ZW.m128d_f64[0];
        local_1c8.Data = pFVar9;
        FStack_1c0.Data = pFVar12;
        local_1b8.Data = pFVar3;
      }
    }
    else {
      FBoneReference::GetCompactPoseIndex(&this->RightHandFK,(FBoneContainer *)&local_250);
      FBoneReference::GetCompactPoseIndex(&this->RightHandIK,(FBoneContainer *)&local_24c);
      pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_250);
      pFVar2 = (FScriptContainerElement *)(pTVar24->Translation).ZW.m128d_f64[0];
      FVar13 = (FWeakObjectPtr)(pTVar24->Translation).XY.m128d_f64[0];
      FVar11 = *(FWeakObjectPtr *)((pTVar24->Translation).XY.m128d_f64 + 1);
      local_210 = FVar13;
      FStack_208 = FVar11;
      local_200.Data = pFVar2;
      pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_24c);
      pFVar9 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[0];
      pFVar12 = (FScriptContainerElement *)(pTVar24->Translation).XY.m128d_f64[1];
      pFVar3 = (FScriptContainerElement *)(pTVar24->Translation).ZW.m128d_f64[0];
      local_1f8.Data = pFVar9;
      FStack_1f0.Data = pFVar12;
      local_1e8.Data = pFVar3;
    }
    local_228 = (ForElementType<unsigned_int>)
                (((double)FVar13 - (double)pFVar9) * (this->PerAxisAlpha).field0_0x0._s_0.X);
    FStack_220 = (FWeakObjectPtr)
                 (((double)FVar11 - (double)pFVar12) * (this->PerAxisAlpha).field0_0x0._s_0.Y);
    local_218 = (FWeakObjectPtr)
                (((double)pFVar2 - (double)pFVar3) * (this->PerAxisAlpha).field0_0x0._s_0.Z);
    uVar26 = local_228._0_4_ & uVar28;
    uVar27 = local_228._4_4_ & uVar29;
    if (((dVar10 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar10) ||
        (uVar26 = FStack_220.ObjectIndex & uVar28, uVar27 = FStack_220.ObjectSerialNumber & uVar29,
        dVar10 <= (double)CONCAT44(uVar27,uVar26) && (double)CONCAT44(uVar27,uVar26) != dVar10)) ||
       (uVar28 = local_218.ObjectIndex & uVar28, uVar29 = local_218.ObjectSerialNumber & uVar29,
       dVar10 <= (double)CONCAT44(uVar29,uVar28) && (double)CONCAT44(uVar29,uVar28) != dVar10)) {
      iVar4 = (this->IKBonesToMove).ArrayNum;
      this_01 = (FBoneReference *)(this->IKBonesToMove).AllocatorInstance.Data;
      pFVar25 = this_01 + iVar4;
      while( true ) {
        if ((this->IKBonesToMove).ArrayNum != iVar4) {
          local_258 = 0;
          `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_258);
        }
        if (this_01 == pFVar25) break;
        bVar21 = FBoneReference::IsValidToEvaluate(this_01,pFVar5);
        if (bVar21) {
          FBoneReference::GetCompactPoseIndex(this_01,(FBoneContainer *)&local_254);
          pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_254);
          pFVar6 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
          auStack_140._8_8_ = (pTVar24->Rotation).XY.m128d_f64[0];
          dStack_130 = (pTVar24->Rotation).XY.m128d_f64[1];
          local_128 = (pTVar24->Rotation).ZW.m128d_f64[0];
          dStack_120 = (pTVar24->Rotation).ZW.m128d_f64[1];
          local_f8 = (pTVar24->Scale3D).XY.m128d_f64[0];
          dStack_f0 = (pTVar24->Scale3D).XY.m128d_f64[1];
          local_e8 = (pTVar24->Scale3D).ZW.m128d_f64[0];
          dStack_e0 = (pTVar24->Scale3D).ZW.m128d_f64[1];
          dVar10 = (pTVar24->Translation).XY.m128d_f64[1] + (double)FStack_220;
          local_148 = local_254;
          local_118._8_4_ = SUB84(dVar10,0);
          local_118._0_8_ = (pTVar24->Translation).XY.m128d_f64[0] + (double)local_228;
          local_118._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          dVar10 = (pTVar24->Translation).ZW.m128d_f64[1] + 0.0;
          local_108._8_4_ = SUB84(dVar10,0);
          local_108._0_8_ = (pTVar24->Translation).ZW.m128d_f64[0] + (double)local_218;
          local_108._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          if ((pFVar6 <= &local_148) && (&local_148 < pFVar6 + (longlong)param_2->ArrayMax * 0x1c))
          {
            local_270 = (longlong)param_2->ArrayNum;
            local_268 = 0x70;
            local_288 = &local_148;
            local_280 = pFVar6;
            local_278 = (longlong)param_2->ArrayMax;
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar21) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar22 = param_2->ArrayNum;
          if (iVar22 == param_2->ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar22 + 1;
          lVar23 = (longlong)iVar22 * 0x70;
          pFVar2 = (param_2->AllocatorInstance).Data;
          *(ulonglong *)(pFVar2 + lVar23) = CONCAT44(iStack_144,local_148);
          *(undefined8 *)(pFVar2 + lVar23 + 8) = auStack_140._0_8_;
          *(undefined8 *)(pFVar2 + lVar23 + 0x10) = auStack_140._8_8_;
          *(double *)(pFVar2 + lVar23 + 0x10 + 8) = dStack_130;
          *(double *)(pFVar2 + lVar23 + 0x20) = local_128;
          *(double *)(pFVar2 + lVar23 + 0x20 + 8) = dStack_120;
          *(undefined8 *)(pFVar2 + lVar23 + 0x30) = local_118._0_8_;
          *(undefined8 *)(pFVar2 + lVar23 + 0x30 + 8) = local_118._8_8_;
          *(undefined8 *)(pFVar2 + lVar23 + 0x40) = local_108._0_8_;
          *(undefined8 *)(pFVar2 + lVar23 + 0x40 + 8) = local_108._8_8_;
          *(double *)(pFVar2 + lVar23 + 0x50) = local_f8;
          *(double *)(pFVar2 + lVar23 + 0x50 + 8) = dStack_f0;
          *(double *)(pFVar2 + lVar23 + 0x60) = local_e8;
          *(double *)(pFVar2 + lVar23 + 0x60 + 8) = dStack_e0;
        }
        this_01 = this_01 + 1;
      }
      param_1 = (FComponentSpacePoseContext *)local_230;
      if (0 < param_2->ArrayNum) {
        AlgoImpl::
        IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
                  ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
                   local_257[0],(FCompareBoneTransformIndex *)local_257);
        param_1 = (FComponentSpacePoseContext *)local_230;
      }
    }
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)param_1 + 0x14),
               L"Hand FK Weight",this->HandFKWeight);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443a00

void __thiscall
FAnimNode_HandIKRetargeting::GatherDebugData
          (FAnimNode_HandIKRetargeting *this,FNodeDebugData *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  uint uVar3;
  UPackage *pUVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_HandIKRetargeting::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting,(UObject *)pUVar4,
                         L"AnimNode_HandIKRetargeting");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_HandIKRetargeting.OuterSingleton)
                      ->_padding_;
  ::FName::ToString(&local_res8,&local_88);
  ::FString::PrintfImpl(&local_a8,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_a8,"(",1);
  ::FString::PrintfImpl(&local_78,L"Alpha: %.1f%%");
  iVar6 = 0;
  iVar7 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars(&local_a8,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar7);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_68,L" HandFKWeight: %f)");
  iVar7 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars(&local_a8,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar7);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  uVar5 = 0;
  if (0 < (this->IKBonesToMove).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->IKBonesToMove).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FName::ToString((FName *)((this->IKBonesToMove).AllocatorInstance.Data +
                                 (longlong)(int)uVar5 * 0x10),local_38);
      ::FString::PrintfImpl(&local_58,L", %s)");
      iVar7 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar7 = iVar6;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->IKBonesToMove).ArrayNum);
  }
  ::FString::PrintfImpl(&local_48,L")");
  uVar5 = local_48.Data.ArrayNum - 1;
  if (local_48.Data.ArrayNum == 0) {
    uVar5 = 0;
  }
  ::FString::AppendChars(&local_a8,(wchar_t *)local_48.Data.AllocatorInstance.Data,uVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_a8.Data.AllocatorInstance.Data;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = local_a8.Data.ArrayNum;
  if (local_a8.Data.ArrayNum == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_a8.Data.ArrayNum,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_a8.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_98,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456970

void __thiscall
FAnimNode_HandIKRetargeting::InitializeBoneReferences
          (FAnimNode_HandIKRetargeting *this,FBoneContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_HandIKRetargeting::InitializeBoneReferences");
  FBoneReference::Initialize(&this->RightHandFK,param_1);
  FBoneReference::Initialize(&this->LeftHandFK,param_1);
  FBoneReference::Initialize(&this->RightHandIK,param_1);
  FBoneReference::Initialize(&this->LeftHandIK,param_1);
  uVar4 = 0;
  if (0 < (this->IKBonesToMove).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->IKBonesToMove).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->IKBonesToMove).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10),
                 param_1);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->IKBonesToMove).ArrayNum);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b9d0

bool __thiscall
FAnimNode_HandIKRetargeting::IsValidToEvaluate
          (FAnimNode_HandIKRetargeting *this,USkeleton *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar2 = FBoneReference::IsValidToEvaluate(&this->RightHandFK,param_2);
  if ((((bVar2) && (bVar2 = FBoneReference::IsValidToEvaluate(&this->LeftHandFK,param_2), bVar2)) &&
      (bVar2 = FBoneReference::IsValidToEvaluate(&this->RightHandIK,param_2), bVar2)) &&
     ((bVar2 = FBoneReference::IsValidToEvaluate(&this->LeftHandIK,param_2), bVar2 &&
      (uVar5 = 0, 0 < (this->IKBonesToMove).ArrayNum)))) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->IKBonesToMove).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)
                         ((this->IKBonesToMove).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10
                         ),param_2);
      if (bVar2) {
        return true;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->IKBonesToMove).ArrayNum);
  }
  return false;
}

