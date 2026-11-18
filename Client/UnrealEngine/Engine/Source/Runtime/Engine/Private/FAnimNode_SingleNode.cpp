// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14750e1c0

UScriptStruct * __cdecl FAnimNode_SingleNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SingleNode,(UObject *)pUVar1,
                         L"AnimNode_SingleNode");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SingleNode.OuterSingleton;
}

// Evaluate_AnyThread @ 147550fa0

void __thiscall
FAnimNode_SingleNode::Evaluate_AnyThread(FAnimNode_SingleNode *this,FPoseContext *param_1)

{
  int iVar1;
  UBlendSpace *pUVar2;
  FAnimSingleNodeInstanceProxy *pFVar3;
  UAnimMontage *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  UClass *pUVar7;
  FAnimTrack *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  UAnimationAsset *pUVar9;
  UAnimationAsset *pUVar10;
  FBaseCompactPose<TMemStackAllocator<0>_> local_2e8;
  FBlendedCurve local_2d0;
  FBlendedCurve local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_288;
  undefined8 local_280;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_278;
  undefined8 local_270;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_268
  ;
  undefined8 local_260;
  void *local_258;
  undefined8 local_250;
  TArray<int,TSizedDefaultAllocator<32>_> *local_248;
  undefined8 local_240;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_238;
  undefined8 local_230;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_228
  ;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  TArray<int,TSizedDefaultAllocator<32>_> *local_208;
  undefined8 local_200;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_1f8;
  undefined8 local_1f0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_1e8
  ;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  FAnimationPoseData local_1c8;
  double local_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined1 local_190;
  TArray<int,TSizedDefaultAllocator<32>_> *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_167;
  double local_158;
  byte local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_140;
  TArray<int,TSizedDefaultAllocator<32>_> *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_117;
  FBaseCompactPose<TMemStackAllocator<0>_> local_108;
  FBaseCompactPose<TMemStackAllocator<0>_> local_f0;
  double local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> local_88;
  FAnimationPoseData local_68;
  FAnimationPoseData local_50;
  FAnimationPoseData local_38;
  
  pUVar9 = this->Proxy->CurrentAsset;
  if ((pUVar9 == (UAnimationAsset *)0x0) || (((uint)pUVar9->_padding_ >> 0xf & 1) != 0)) {
    if (param_1->bExpectsAdditivePose != false) {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
    return;
  }
  FAnimationPoseData::FAnimationPoseData(&local_1c8,param_1);
  pUVar2 = (UBlendSpace *)this->Proxy->CurrentAsset;
  if (pUVar2 != (UBlendSpace *)0x0) {
    pUVar7 = UBlendSpace::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      FAnimSingleNodeInstanceProxy::InternalBlendSpaceEvaluatePose
                (this->Proxy,pUVar2,&this->Proxy->BlendSampleData,param_1);
      return;
    }
  }
  pUVar10 = (UAnimationAsset *)0x0;
  pUVar9 = this->Proxy->CurrentAsset;
  if (pUVar9 == (UAnimationAsset *)0x0) {
LAB_147551078:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_147551078;
  }
  pFVar3 = this->Proxy;
  if (pUVar9 != (UAnimationAsset *)0x0) {
    local_190 = pFVar3->bLooping;
    local_19c._0_4_ = (pFVar3->DeltaTimeRecord).Delta;
    local_19c._4_4_ = (pFVar3->DeltaTimeRecord).Previous;
    local_194 = *(undefined4 *)&(pFVar3->DeltaTimeRecord).bPreviousIsValid;
    local_1a0 = *(undefined1 *)((longlong)&pUVar9[2].AssetUserData.AllocatorInstance.Data + 1);
    local_1a8 = (double)pFVar3->CurrentTime;
    local_188 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_180 = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_167 = 0;
    if ((&pFVar3->field_0x5e8 != &local_168) && (pFVar3->field_0x5e9 != '\0')) {
      local_168 = pFVar3->field_0x5e8;
      local_167 = 1;
    }
    cVar5 = (**(code **)(pUVar9->_padding_ + 0x2d0))(pUVar9);
    if (cVar5 == '\0') {
      (**(code **)(pUVar9->_padding_ + 0x330))(pUVar9,&local_1c8,&local_1a8);
    }
    else {
      if (param_1->bExpectsAdditivePose == false) {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                  ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                   *(FBoneContainer **)&(param_1->Pose).field_0x10);
      }
      else {
        FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
      }
      local_108._padding_ = 0;
      local_108._padding_ = 0;
      local_108.BoneContainer = (FBoneContainer *)0x0;
      local_2d0._0_8_ = 0;
      local_2d0._8_8_ = 0;
      local_2d0._16_1_ = 0;
      local_2d0._24_8_ = 0;
      local_288 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_280 = 0;
      local_278 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_270 = 0;
      local_268 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      local_260 = 0;
      local_258 = (void *)0x0;
      local_250 = 0;
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
                (&local_108,*(FBoneContainer **)&(param_1->Pose).field_0x10);
      if (&param_1->Curve == &local_2d0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4808592878626406918>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                           ,0x206,"&InCurveToInitFrom != this");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (((longlong)local_2d0._8_8_ < 0) && (local_2d0._12_4_ != 0)) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_2d0,0,
                     (int *)&local_2d0.field_0xc);
        }
        local_2d0._24_8_ = *(undefined8 *)&(param_1->Curve).field_0x18;
        local_2d0._16_1_ = 0;
      }
      FAnimationPoseData::FAnimationPoseData
                (&local_68,(FCompactPose *)&local_108,&local_2d0,
                 (FStackAttributeContainer *)&local_288);
      (**(code **)(pUVar9->_padding_ + 0x330))(pUVar9,&local_68,&local_1a8);
      FAnimationRuntime::AccumulateAdditivePose
                (&local_1c8,&local_68,__real_3f800000,(uint)(byte)pUVar9[2].SkeletonGuid.C);
      FCompactPose::NormalizeRotations(&param_1->Pose);
      if (local_258 != (void *)0x0) {
        FMemory::Free(local_258);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_268,(int)local_260);
      if (local_268 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_268);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_278,(int)local_270);
      if (local_278 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_278);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_288,(int)local_280);
      if (local_288 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_288);
      }
    }
    pTVar8 = local_188;
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
      pTVar8 = local_188;
    }
    goto LAB_147551328;
  }
  pUVar9 = pFVar3->CurrentAsset;
  if (pUVar9 == (UAnimationAsset *)0x0) {
LAB_14755137c:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = UAnimStreamable::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14755137c;
  }
  pFVar3 = this->Proxy;
  if (pUVar9 != (UAnimationAsset *)0x0) {
    local_c0 = pFVar3->bLooping;
    local_cc._0_4_ = (pFVar3->DeltaTimeRecord).Delta;
    local_cc._4_4_ = (pFVar3->DeltaTimeRecord).Previous;
    local_c4 = *(undefined4 *)&(pFVar3->DeltaTimeRecord).bPreviousIsValid;
    local_d0 = *(undefined1 *)&pUVar9[1].AssetUserData.AllocatorInstance.Data;
    local_d8 = (double)pFVar3->CurrentTime;
    local_b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_b0 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_97 = 0;
    if ((&pFVar3->field_0x5e8 != &local_98) && (pFVar3->field_0x5e9 != '\0')) {
      local_98 = pFVar3->field_0x5e8;
      local_97 = 1;
    }
    (**(code **)(pUVar9->_padding_ + 0x330))(pUVar9,&local_1c8,&local_d8);
    pTVar8 = local_b8;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
      pTVar8 = local_b8;
    }
    goto LAB_147551328;
  }
  pUVar9 = pFVar3->CurrentAsset;
  if (pUVar9 == (UAnimationAsset *)0x0) {
LAB_147551488:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UAnimComposite_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_147551488;
  }
  pFVar3 = this->Proxy;
  if (pUVar9 != (UAnimationAsset *)0x0) {
    local_144 = *(undefined4 *)&(pFVar3->DeltaTimeRecord).bPreviousIsValid;
    local_140 = pFVar3->bLooping;
    local_14c._0_4_ = (pFVar3->DeltaTimeRecord).Delta;
    local_14c._4_4_ = (pFVar3->DeltaTimeRecord).Previous;
    local_150 = (byte)pFVar3->field_0x801 >> 1 & 1;
    local_158 = (double)pFVar3->CurrentTime;
    local_138 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_130 = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_117 = 0;
    if ((&pFVar3->field_0x5e8 != &local_118) && (pFVar3->field_0x5e9 != '\0')) {
      local_118 = pFVar3->field_0x5e8;
      local_117 = 1;
    }
    bVar6 = FAnimTrack::IsAdditive((FAnimTrack *)&pUVar9[1].Skeleton);
    if (bVar6) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
      bVar6 = FAnimTrack::IsRotationOffsetAdditive((FAnimTrack *)&pUVar9[1].Skeleton);
      local_f0._padding_ = 0;
      local_f0._padding_ = 0;
      local_f0.BoneContainer = (FBoneContainer *)0x0;
      local_88._padding_ = 0;
      local_88._padding_ = 0;
      local_88._padding_._0_1_ = 0;
      local_88.Filter = (FCurveFilter *)0x0;
      local_248 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_240 = 0;
      local_238 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_230 = 0;
      local_228 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      local_220 = 0;
      local_218 = (void *)0x0;
      local_210 = 0;
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
                (&local_f0,*(FBoneContainer **)&(param_1->Pose).field_0x10);
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      InitFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
                (&local_88,
                 (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve
                );
      FAnimationPoseData::FAnimationPoseData
                (&local_50,(FCompactPose *)&local_f0,(FBlendedCurve *)&local_88,
                 (FStackAttributeContainer *)&local_248);
      (**(code **)(pUVar9->_padding_ + 0x330))(pUVar9,&local_50,&local_158);
      FAnimationRuntime::AccumulateAdditivePose
                (&local_1c8,&local_50,__real_3f800000,bVar6 + AAT_LocalSpaceBase);
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_228,(int)local_220);
      if (local_228 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_228);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_238,(int)local_230);
      if (local_238 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_238);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_248,(int)local_240);
      if (local_248 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_248);
      }
    }
    else {
      (**(code **)(pUVar9->_padding_ + 0x330))(pUVar9,&local_1c8,&local_158);
    }
    pTVar8 = local_138;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
      pTVar8 = local_138;
    }
LAB_147551328:
    if (pTVar8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTVar8);
    }
    return;
  }
  this_00 = (UAnimMontage *)pFVar3->CurrentAsset;
  if (this_00 != (UAnimMontage *)0x0) {
    pUVar7 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      if ((this_00->SlotAnimTracks).ArrayNum < 1) {
        return;
      }
      local_2e8._padding_ = 0;
      local_2e8._padding_ = 0;
      local_2e8.BoneContainer = (FBoneContainer *)0x0;
      local_2b0._0_8_ = 0;
      local_2b0._8_8_ = 0;
      local_2b0._16_1_ = 0;
      local_2b0._24_8_ = 0;
      FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
                (&local_2e8,*(FBoneContainer **)&(param_1->Pose).field_0x10);
      if (&param_1->Curve == &local_2b0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4808592878626406918>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                           ,0x206,"&InCurveToInitFrom != this");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (0x7fffffff < (uint)local_2b0._12_4_) {
          UE::Core::Private::
          ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                    (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)&local_2b0,0,
                     (int *)&local_2b0.field_0xc);
        }
        local_2b0._24_8_ = *(undefined8 *)&(param_1->Curve).field_0x18;
        local_2b0._16_1_ = 0;
      }
      local_208 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_200 = 0;
      local_1f8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_1f0 = 0;
      local_1e8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                   *)0x0;
      local_1e0 = 0;
      local_1d8 = (void *)0x0;
      local_1d0 = 0;
      this_01 = UAnimMontage::GetAnimationData(this_00,this->ActiveMontageSlot);
      if (this_01 != (FAnimTrack *)0x0) {
        FAnimTrack::IsAdditive(this_01);
      }
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_2e8,local_2e8.BoneContainer);
      FAnimationPoseData::FAnimationPoseData
                (&local_38,(FCompactPose *)&local_2e8,&local_2b0,
                 (FStackAttributeContainer *)&local_208);
      pFVar3 = this->Proxy;
      FAnimInstanceProxy::SlotEvaluatePose
                ((FAnimInstanceProxy *)pFVar3,&this->ActiveMontageSlot,&local_38,
                 (pFVar3->WeightInfo).SourceWeight,&local_1c8,(pFVar3->WeightInfo).SlotNodeWeight,
                 (pFVar3->WeightInfo).TotalNodeWeight);
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_1e8,(int)local_1e0);
      if (local_1e8 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_1e8);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_1f8,(int)local_1f0);
      if (local_1f8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1f8);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_208,(int)local_200);
      pTVar8 = local_208;
      goto LAB_147551328;
    }
  }
  if (param_1->bExpectsAdditivePose != false) {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    return;
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
             *(FBoneContainer **)&(param_1->Pose).field_0x10);
  return;
}

// Update_AnyThread @ 147582580

void __thiscall
FAnimNode_SingleNode::Update_AnyThread(FAnimNode_SingleNode *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  FAnimSingleNodeInstanceProxy *pFVar2;
  UAnimationAsset *pUVar3;
  code *pcVar4;
  undefined3 uVar5;
  FAnimSyncGroupScope *this_00;
  bool bVar6;
  UClass *pUVar7;
  FMontageEvaluationState *pFVar8;
  UBlendSpace *pUVar9;
  UBlendSpace *pUVar10;
  float fVar11;
  FAnimSyncGroupScope *local_res8;
  FAnimSyncParams local_3a0;
  FAnimSyncParams local_390;
  FAnimSyncParams local_380;
  FAnimSyncParams local_370;
  FAnimSyncParams local_360;
  FAnimSyncGroupScope **local_350;
  code **local_348;
  FAnimSyncDebugInfo local_340;
  FAnimSyncDebugInfo local_330;
  FAnimSyncDebugInfo local_320;
  FAnimSyncDebugInfo local_310;
  FAnimSyncDebugInfo local_300;
  code *local_2f0;
  FAnimSyncGroupScope ***local_2e8;
  code *local_2e0;
  code ***local_2d8;
  FAnimTickRecord local_2c8;
  FAnimTickRecord local_248;
  FAnimTickRecord local_1c8;
  FAnimTickRecord local_148;
  FAnimTickRecord local_c8;
  
  pFVar2 = this->Proxy;
  fVar11 = pFVar2->PlayRate;
  if (pFVar2->bPlaying == false) {
    fVar11 = 0.0;
  }
  if (pFVar2->CurrentAsset == (UAnimationAsset *)0x0) {
    return;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x10d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_350 = &local_res8;
  pUVar10 = (UBlendSpace *)0x0;
  local_2e8 = &local_350;
  local_res8 = (FAnimSyncGroupScope *)0x0;
  local_2f0 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
              ::Call;
  local_348 = &local_2f0;
  local_2d8 = &local_348;
  local_2e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
              ::Call;
  UE::Anim::FMessageStack::TopMessage
            ((FMessageStack *)(param_1->_padding_ + 0x148),UE::Anim::FAnimSyncGroupScope::TypeName,
             (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_2e0);
  if ((local_res8 == (FAnimSyncGroupScope *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Message != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x116,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res8;
  pUVar9 = (UBlendSpace *)this->Proxy->CurrentAsset;
  if (pUVar9 == (UBlendSpace *)0x0) {
LAB_1475826db:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = UBlendSpace::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_1475826db;
  }
  pFVar2 = this->Proxy;
  if (pUVar9 != (UBlendSpace *)0x0) {
    FAnimTickRecord::FAnimTickRecord
              (&local_2c8,pUVar9,&pFVar2->BlendSpacePosition,&pFVar2->BlendSampleData,
               &pFVar2->BlendFilter,pFVar2->bLooping,fVar11,false,false,__real_3f800000,
               &pFVar2->CurrentTime,&pFVar2->MarkerTickRecord);
    local_2c8.DeltaTimeRecord = &this->Proxy->DeltaTimeRecord;
    local_340._12_4_ = 0;
    local_340.SourceProxy = (FAnimInstanceProxy *)0x0;
    local_3a0.GroupName.ComparisonIndex.Value = 0;
    local_3a0.GroupName.Number = 0;
    local_340.SourceNodeId = -1;
    local_3a0.Role = CanBeLeader;
    local_3a0.Method = DoNotSync;
    local_3a0.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_2c8,&local_3a0,&local_340);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_2c8);
    goto LAB_147582cc5;
  }
  pUVar9 = (UBlendSpace *)pFVar2->CurrentAsset;
  if (pUVar9 == (UBlendSpace *)0x0) {
LAB_1475827e6:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_1475827e6;
  }
  pFVar2 = this->Proxy;
  if (pUVar9 != (UBlendSpace *)0x0) {
    FAnimTickRecord::FAnimTickRecord
              (&local_248,(UAnimSequenceBase *)pUVar9,pFVar2->bLooping,fVar11,false,__real_3f800000,
               &pFVar2->CurrentTime,&pFVar2->MarkerTickRecord);
    local_248.DeltaTimeRecord = &this->Proxy->DeltaTimeRecord;
    local_330._12_4_ = 0;
    local_330.SourceProxy = (FAnimInstanceProxy *)0x0;
    local_390.GroupName.ComparisonIndex.Value = 0;
    local_390.GroupName.Number = 0;
    local_330.SourceNodeId = -1;
    local_390.Role = CanBeLeader;
    local_390.Method = DoNotSync;
    local_390.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_248,&local_390,&local_330);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_248);
    pFVar2 = this->Proxy;
    local_2c8.ContextData.SharedReferenceCount.ReferenceController =
         local_248.ContextData.SharedReferenceCount.ReferenceController;
    if (pFVar2->bLooping == false) {
      fVar11 = fVar11 * *(float *)&pUVar9->InterpolationParam[1].InterpolationType;
      if (0.0 <= fVar11) {
        if ((fVar11 <= 0.0) ||
           (fVar11 = (float)(**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9),
           local_2c8.ContextData.SharedReferenceCount.ReferenceController =
                local_248.ContextData.SharedReferenceCount.ReferenceController,
           pFVar2->CurrentTime <= fVar11 && fVar11 != pFVar2->CurrentTime)) goto LAB_147582cc5;
      }
      else if (0.0 < pFVar2->CurrentTime) goto LAB_147582cc5;
      this->Proxy->bPlaying = false;
      local_2c8.ContextData.SharedReferenceCount.ReferenceController =
           local_248.ContextData.SharedReferenceCount.ReferenceController;
    }
    goto LAB_147582cc5;
  }
  pUVar9 = (UBlendSpace *)pFVar2->CurrentAsset;
  if (pUVar9 == (UBlendSpace *)0x0) {
LAB_147582924:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = UAnimStreamable::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_147582924;
  }
  pFVar2 = this->Proxy;
  if (pUVar9 != (UBlendSpace *)0x0) {
    FAnimTickRecord::FAnimTickRecord
              (&local_1c8,(UAnimSequenceBase *)pUVar9,pFVar2->bLooping,fVar11,false,__real_3f800000,
               &pFVar2->CurrentTime,&pFVar2->MarkerTickRecord);
    local_1c8.DeltaTimeRecord = &this->Proxy->DeltaTimeRecord;
    local_320._12_4_ = 0;
    local_320.SourceProxy = (FAnimInstanceProxy *)0x0;
    local_380.GroupName.ComparisonIndex.Value = 0;
    local_380.GroupName.Number = 0;
    local_320.SourceNodeId = -1;
    local_380.Role = CanBeLeader;
    local_380.Method = DoNotSync;
    local_380.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_1c8,&local_380,&local_320);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_1c8);
    pFVar2 = this->Proxy;
    local_2c8.ContextData.SharedReferenceCount.ReferenceController =
         local_1c8.ContextData.SharedReferenceCount.ReferenceController;
    if (pFVar2->bLooping == false) {
      fVar11 = fVar11 * *(float *)&pUVar9->InterpolationParam[1].InterpolationType;
      if (0.0 <= fVar11) {
        if ((fVar11 <= 0.0) ||
           (fVar11 = (float)(**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9),
           local_2c8.ContextData.SharedReferenceCount.ReferenceController =
                local_1c8.ContextData.SharedReferenceCount.ReferenceController,
           pFVar2->CurrentTime <= fVar11 && fVar11 != pFVar2->CurrentTime)) goto LAB_147582cc5;
      }
      else if (0.0 < pFVar2->CurrentTime) goto LAB_147582cc5;
      this->Proxy->bPlaying = false;
      local_2c8.ContextData.SharedReferenceCount.ReferenceController =
           local_1c8.ContextData.SharedReferenceCount.ReferenceController;
    }
    goto LAB_147582cc5;
  }
  pUVar9 = (UBlendSpace *)pFVar2->CurrentAsset;
  if (pUVar9 == (UBlendSpace *)0x0) {
LAB_147582a60:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UAnimComposite_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_147582a60;
  }
  pFVar2 = this->Proxy;
  if (pUVar9 != (UBlendSpace *)0x0) {
    FAnimTickRecord::FAnimTickRecord
              (&local_148,(UAnimSequenceBase *)pUVar9,pFVar2->bLooping,fVar11,false,__real_3f800000,
               &pFVar2->CurrentTime,&pFVar2->MarkerTickRecord);
    local_148.DeltaTimeRecord = &this->Proxy->DeltaTimeRecord;
    local_310._12_4_ = 0;
    local_310.SourceProxy = (FAnimInstanceProxy *)0x0;
    local_370.GroupName.ComparisonIndex.Value = 0;
    local_370.GroupName.Number = 0;
    local_310.SourceNodeId = -1;
    local_370.Role = CanBeLeader;
    local_370.Method = DoNotSync;
    local_370.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_148,&local_370,&local_310);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_148);
    pFVar2 = this->Proxy;
    local_2c8.ContextData.SharedReferenceCount.ReferenceController =
         local_148.ContextData.SharedReferenceCount.ReferenceController;
    if (pFVar2->bLooping == false) {
      fVar11 = fVar11 * *(float *)&pUVar9->InterpolationParam[1].InterpolationType;
      if (0.0 <= fVar11) {
        if ((fVar11 <= 0.0) ||
           (fVar11 = (float)(**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9),
           local_2c8.ContextData.SharedReferenceCount.ReferenceController =
                local_148.ContextData.SharedReferenceCount.ReferenceController,
           pFVar2->CurrentTime <= fVar11 && fVar11 != pFVar2->CurrentTime)) goto LAB_147582cc5;
      }
      else if (0.0 < pFVar2->CurrentTime) goto LAB_147582cc5;
      this->Proxy->bPlaying = false;
      local_2c8.ContextData.SharedReferenceCount.ReferenceController =
           local_148.ContextData.SharedReferenceCount.ReferenceController;
    }
    goto LAB_147582cc5;
  }
  pUVar3 = pFVar2->CurrentAsset;
  if (pUVar3 != (UAnimationAsset *)0x0) {
    pUVar7 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      if (0 < pUVar3[2].MetaData.ArrayNum) {
        FAnimSingleNodeInstanceProxy::UpdateMontageWeightForSlot
                  (this->Proxy,this->ActiveMontageSlot,__real_3f800000);
      }
      pFVar8 = FAnimInstanceProxy::GetActiveMontageEvaluationState
                         ((FAnimInstanceProxy *)this->Proxy);
      pFVar2 = this->Proxy;
      if (pFVar8 != (FMontageEvaluationState *)0x0) {
        pFVar2->CurrentTime = pFVar8->MontagePosition;
        fVar11 = (pFVar8->DeltaTimeRecord).Previous;
        pFVar2 = this->Proxy;
        (pFVar2->DeltaTimeRecord).Delta = (pFVar8->DeltaTimeRecord).Delta;
        (pFVar2->DeltaTimeRecord).Previous = fVar11;
        uVar5 = *(undefined3 *)&(pFVar8->DeltaTimeRecord).field_0x9;
        (pFVar2->DeltaTimeRecord).bPreviousIsValid = (pFVar8->DeltaTimeRecord).bPreviousIsValid;
        *(undefined3 *)&(pFVar2->DeltaTimeRecord).field_0x9 = uVar5;
        return;
      }
      if (pFVar2->bPlaying == false) {
        return;
      }
      pFVar2->bPlaying = false;
      return;
    }
  }
  pUVar9 = (UBlendSpace *)this->Proxy->CurrentAsset;
  if (pUVar9 == (UBlendSpace *)0x0) {
LAB_147582c44:
    pUVar9 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UPoseAsset_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_147582c44;
  }
  if (pUVar9 == (UBlendSpace *)0x0) {
    return;
  }
  FAnimTickRecord::FAnimTickRecord(&local_c8,(UPoseAsset *)pUVar9,__real_3f800000);
  local_c8.DeltaTimeRecord = &this->Proxy->DeltaTimeRecord;
  local_300._12_4_ = 0;
  local_300.SourceProxy = (FAnimInstanceProxy *)0x0;
  local_360.GroupName.ComparisonIndex.Value = 0;
  local_360.GroupName.Number = 0;
  local_300.SourceNodeId = -1;
  local_360.Role = CanBeLeader;
  local_360.Method = DoNotSync;
  local_360.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_c8,&local_360,&local_300);
  FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_c8);
  local_2c8.ContextData.SharedReferenceCount.ReferenceController =
       local_c8.ContextData.SharedReferenceCount.ReferenceController;
LAB_147582cc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

