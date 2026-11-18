// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a37c0c0

UScriptStruct * __cdecl FAnimNode_ControlRigInputPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose,(UObject *)pUVar1,
                         L"AnimNode_ControlRigInputPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.OuterSingleton;
}

// CacheBones_AnyThread @ 14a3ecfa0

void __thiscall
FAnimNode_ControlRigInputPose::CacheBones_AnyThread
          (FAnimNode_ControlRigInputPose *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base *pFVar1;
  FAnimationBaseContext local_28;
  
  if (this->InputProxy != (FAnimInstanceProxy *)0x0) {
    FAnimationBaseContext::FAnimationBaseContext
              (&local_28,this->InputProxy,(FAnimationUpdateSharedContext *)0x0);
    pFVar1 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->InputPose);
    if (pFVar1 != (FAnimNode_Base *)0x0) {
      FPoseLinkBase::CacheBones
                ((FPoseLinkBase *)&this->InputPose,(FAnimationCacheBonesContext *)&local_28);
      return;
    }
    FAnimInstanceProxy::CacheBonesInputProxy(this->InputProxy);
  }
  return;
}

// Evaluate_AnyThread @ 14a407ae0

void __thiscall
FAnimNode_ControlRigInputPose::Evaluate_AnyThread
          (FAnimNode_ControlRigInputPose *this,FPoseContext *param_1)

{
  FStackAttributeContainer *pFVar1;
  FAnimInstanceProxy *pFVar2;
  FBoneContainer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FAnimNode_Base *pFVar6;
  undefined1 *puVar7;
  undefined1 local_b8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_60;
  undefined8 local_58;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  bool local_20;
  
  pFVar2 = this->InputProxy;
  if (pFVar2 != (FAnimInstanceProxy *)0x0) {
    if (((pFVar2->RequiredBones).Object == (FBoneContainer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pFVar2->RequiredBones).Object;
    bVar5 = FWeakObjectPtr::IsValid(&(pFVar3->Asset).WeakPtr);
    if (((bVar5) && (pFVar3->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (pFVar3->BoneIndicesArray).ArrayNum)) {
      bVar5 = param_1->bExpectsAdditivePose;
      pFVar2 = this->InputProxy;
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_b8,pFVar2,(FAnimationUpdateSharedContext *)0x0);
      local_b8._32_8_ = 0;
      local_b8._48_8_ = 0;
      local_b8._56_8_ = 0;
      local_b8._80_8_ = 0;
      pTStack_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_b8._40_8_ = 0;
      local_b8._64_8_ = 0;
      local_b8[0x48] = 0;
      local_58 = 0;
      local_50 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_48 = 0;
      local_40 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)0x0;
      local_38 = 0;
      local_30 = (void *)0x0;
      local_28 = 0;
      local_20 = bVar5;
      FPoseContext::InitializeImpl((FPoseContext *)local_b8,pFVar2);
      pFVar6 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->InputPose);
      pFVar2 = this->InputProxy;
      if (pFVar6 == (FAnimNode_Base *)0x0) {
        if (pFVar2->RootNode == (FAnimNode_Base *)0x0) {
          FAnimInstanceProxy::EvaluateInputProxy(pFVar2,(FPoseContext *)local_b8);
        }
        else {
          FAnimInstanceProxy::EvaluateAnimationNode(pFVar2,(FPoseContext *)local_b8);
        }
      }
      else {
        FAnimInstanceProxy::EvaluateAnimation_WithRoot(pFVar2,(FPoseContext *)local_b8,pFVar6);
      }
      if (&param_1->Pose != (FCompactPose *)(local_b8 + 0x20)) {
        *(undefined8 *)&param_1->Pose = local_b8._32_8_;
        *(undefined4 *)&(param_1->Pose).field_0x8 = local_b8._40_4_;
        *(undefined4 *)&(param_1->Pose).field_0xc = local_b8._44_4_;
        *(undefined8 *)&(param_1->Pose).field_0x10 = local_b8._48_8_;
        local_b8._32_8_ = 0;
        local_b8._40_8_ = 0;
        local_b8._48_8_ = 0;
      }
      if (&param_1->Curve != (FBlendedCurve *)(local_b8 + 0x38)) {
        *(undefined8 *)&param_1->Curve = local_b8._56_8_;
        *(undefined4 *)&(param_1->Curve).field_0x8 = local_b8._64_4_;
        *(undefined4 *)&(param_1->Curve).field_0xc = local_b8._68_4_;
        local_b8._64_8_ = 0;
        local_b8._56_8_ = 0;
      }
      pFVar1 = &param_1->CustomAttributes;
      (param_1->Curve).field_0x10 = local_b8[0x48];
      puVar7 = &(param_1->CustomAttributes).field_0x10;
      local_b8[0x48] = 0;
      if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar7 != &local_50) {
        DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar7,
                   *(int *)&(param_1->CustomAttributes).field_0x18);
        if (*(void **)puVar7 != (void *)0x0) {
          FMemory::Free(*(void **)puVar7);
        }
        *(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar7 = local_50;
        *(int *)&(param_1->CustomAttributes).field_0x18 = (int)local_48;
        *(undefined4 *)&(param_1->CustomAttributes).field_0x1c = local_48._4_4_;
        local_48 = 0;
        local_50 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      }
      if (pFVar1 != (FStackAttributeContainer *)&pTStack_60) {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar1,
                   *(int *)&(param_1->CustomAttributes).field_0x8);
        if (*(void **)pFVar1 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar1);
        }
        *(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar1 = pTStack_60;
        *(int *)&(param_1->CustomAttributes).field_0x8 = (int)local_58;
        *(undefined4 *)&(param_1->CustomAttributes).field_0xc = local_58._4_4_;
        local_58 = 0;
        pTStack_60 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      }
      puVar7 = &(param_1->CustomAttributes).field_0x20;
      if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
           **)puVar7 != &local_40) {
        DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                     **)puVar7,*(int *)&(param_1->CustomAttributes).field_0x28);
        if (*(void **)puVar7 != (void *)0x0) {
          FMemory::Free(*(void **)puVar7);
        }
        *(TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> **
         )puVar7 = local_40;
        *(int *)&(param_1->CustomAttributes).field_0x28 = (int)local_38;
        *(undefined4 *)&(param_1->CustomAttributes).field_0x2c = local_38._4_4_;
        local_38 = 0;
        local_40 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                    *)0x0;
      }
      puVar7 = &(param_1->CustomAttributes).field_0x30;
      if ((void **)puVar7 != &local_30) {
        if (*(void **)puVar7 != (void *)0x0) {
          FMemory::Free(*(void **)puVar7);
        }
        *(void **)puVar7 = local_30;
        *(undefined4 *)&(param_1->CustomAttributes).field_0x38 = (undefined4)local_28;
        *(undefined4 *)&(param_1->CustomAttributes).field_0x3c = local_28._4_4_;
        local_28 = 0;
        local_30 = (void *)0x0;
      }
      if (local_30 != (void *)0x0) {
        FMemory::Free(local_30);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_40,(int)local_38);
      if (local_40 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_40);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_50,(int)local_48);
      if (local_50 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_50);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_60,(int)local_58);
      if (pTStack_60 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        return;
      }
      FMemory::Free(pTStack_60);
      return;
    }
  }
  if (param_1->bExpectsAdditivePose == false) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
  return;
}

// GatherDebugData @ 14a40f400

void __thiscall
FAnimNode_ControlRigInputPose::GatherDebugData
          (FAnimNode_ControlRigInputPose *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FAnimNode_Base *pFVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose,(UObject *)pUVar1,
                         L"AnimNode_ControlRigInputPose");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ControlRigInputPose.
                      OuterSingleton)->_padding_;
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
  if (this->InputProxy != (FAnimInstanceProxy *)0x0) {
    pFVar2 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->InputPose);
    if (pFVar2 == (FAnimNode_Base *)0x0) {
      FAnimInstanceProxy::GatherInputProxyDebugData(this->InputProxy,param_1);
    }
    else {
      FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->InputPose,param_1);
    }
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 14a423de0

void __thiscall
FAnimNode_ControlRigInputPose::Initialize_AnyThread
          (FAnimNode_ControlRigInputPose *this,FAnimationInitializeContext *param_1)

{
  FAnimNode_Base *pFVar1;
  FAnimationBaseContext local_28;
  
  if (this->InputProxy != (FAnimInstanceProxy *)0x0) {
    FAnimationBaseContext::FAnimationBaseContext
              (&local_28,this->InputProxy,(FAnimationUpdateSharedContext *)0x0);
    pFVar1 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->InputPose);
    if (pFVar1 != (FAnimNode_Base *)0x0) {
      FPoseLinkBase::Initialize
                ((FPoseLinkBase *)&this->InputPose,(FAnimationInitializeContext *)&local_28);
      return;
    }
    FAnimInstanceProxy::InitializeInputProxy(this->InputProxy,this->InputAnimInstance);
  }
  return;
}

// Link @ 14a4292d0

void __thiscall
FAnimNode_ControlRigInputPose::Link
          (FAnimNode_ControlRigInputPose *this,UAnimInstance *param_1,FAnimInstanceProxy *param_2)

{
  this->InputProxy = (FAnimInstanceProxy *)0x0;
  this->InputAnimInstance = (UAnimInstance *)0x0;
  FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&this->InputPose,(FAnimNode_Base *)0x0);
  if (param_1 != (UAnimInstance *)0x0) {
    this->InputAnimInstance = param_1;
    this->InputProxy = param_2;
    FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&this->InputPose,param_2->RootNode);
    FAnimInstanceProxy::ResetCounterInputProxy(this->InputProxy);
  }
  return;
}

// Unlink @ 14a45e710

void __thiscall FAnimNode_ControlRigInputPose::Unlink(FAnimNode_ControlRigInputPose *this)

{
  this->InputProxy = (FAnimInstanceProxy *)0x0;
  this->InputAnimInstance = (UAnimInstance *)0x0;
  FPoseLinkBase::SetLinkNode((FPoseLinkBase *)&this->InputPose,(FAnimNode_Base *)0x0);
  return;
}

// Update_AnyThread @ 14a4675d0

void __thiscall
FAnimNode_ControlRigInputPose::Update_AnyThread
          (FAnimNode_ControlRigInputPose *this,FAnimationUpdateContext *param_1)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_Base *pFVar1;
  FName *pFVar2;
  FName local_res8;
  FAnimationUpdateContext local_38;
  
  if (this->InputProxy != (FAnimInstanceProxy *)0x0) {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)&local_38,this->InputProxy,
               (FAnimationUpdateSharedContext *)param_1->_padding_);
    local_38.CurrentWeight = param_1->CurrentWeight;
    local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_38.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
    local_38.DeltaTime = param_1->DeltaTime;
    local_38._padding_._0_4_ = (undefined4)param_1->_padding_;
    pFVar1 = FPoseLinkBase::GetLinkNode((FPoseLinkBase *)&this->InputPose);
    this_00 = this->InputProxy;
    if (pFVar1 != (FAnimNode_Base *)0x0) {
      pFVar2 = ::FName::FName(&local_res8,L"AnimGraph");
      FAnimInstanceProxy::UpdateAnimation_WithRoot(this_00,&local_38,pFVar1,*pFVar2);
      return;
    }
    if (this_00->RootNode != (FAnimNode_Base *)0x0) {
      (**(code **)(*(longlong *)this_00 + 0x28))();
      return;
    }
    FAnimInstanceProxy::UpdateInputProxy(this_00,&local_38);
  }
  return;
}

