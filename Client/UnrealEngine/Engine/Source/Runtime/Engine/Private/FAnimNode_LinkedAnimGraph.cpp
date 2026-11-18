// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticStruct @ 1474946e0

UScriptStruct * __cdecl FAnimNode_LinkedAnimGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,(UObject *)pUVar1,
                         L"AnimNode_LinkedAnimGraph");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton;
}

// Initialize_AnyThread @ 147495060

void __thiscall
FAnimNode_LinkedAnimGraph::Initialize_AnyThread
          (FAnimNode_LinkedAnimGraph *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FAnimInstanceProxy *this_00;
  FPoseLinkBase *this_01;
  UAnimInstance *this_02;
  FPoseLinkBase *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_14749511f;
  if (this->_padding_ == 0) {
LAB_1474950b4:
    this_02 = (UAnimInstance *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (!bVar3) goto LAB_1474950b4;
    this_02 = (UAnimInstance *)this->_padding_;
  }
  if ((this_02 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
    this_00 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_02);
    (**(code **)(*(longlong *)this_00 + 0x80))(this_00,this_02);
    lVar2 = *(longlong *)param_1;
    (this_00->InitializationCounter).Counter = *(short *)(lVar2 + 0x590);
    (this_00->InitializationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x588);
    (this_00->InitializationCounter).SkipFrames = *(short *)(lVar2 + 0x592);
    FAnimInstanceProxy::InitializeRootNode_WithRoot(this_00,this->LinkedRoot);
  }
LAB_14749511f:
  iVar1 = (this->InputPoses).ArrayNum;
  this_01 = (FPoseLinkBase *)(this->InputPoses).AllocatorInstance.Data;
  pFVar5 = this_01 + iVar1;
  while( true ) {
    if ((this->InputPoses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_01 == pFVar5) break;
    FPoseLinkBase::Initialize(this_01,param_1);
    this_01 = this_01 + 1;
  }
  return;
}

// CacheBones_AnyThread @ 147495170

void __thiscall
FAnimNode_LinkedAnimGraph::CacheBones_AnyThread
          (FAnimNode_LinkedAnimGraph *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UAnimInstance *this_00;
  FPoseLinkBase *this_01;
  FPoseLinkBase *pFVar5;
  undefined1 local_res8 [8];
  FAnimInstanceProxy *local_38;
  undefined8 local_30;
  undefined1 local_28;
  int local_24;
  undefined4 local_20;
  
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_14749523e;
  if (this->_padding_ == 0) {
LAB_1474951c4:
    this_00 = (UAnimInstance *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (!bVar3) goto LAB_1474951c4;
    this_00 = (UAnimInstance *)this->_padding_;
  }
  if ((this_00 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
    local_38 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_00);
    lVar2 = *(longlong *)param_1;
    (local_38->CachedBonesCounter).Counter = *(short *)(lVar2 + 0x5a0);
    (local_38->CachedBonesCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x598);
    (local_38->CachedBonesCounter).SkipFrames = *(short *)(lVar2 + 0x5a2);
    local_24 = this->CachedLinkedNodeIndex;
    local_30 = 0;
    local_28 = 1;
    local_20 = 0xffffffff;
    (**(code **)(this->LinkedRoot->_padding_ + 8))(this->LinkedRoot,&local_38);
  }
LAB_14749523e:
  iVar1 = (this->InputPoses).ArrayNum;
  this_01 = (FPoseLinkBase *)(this->InputPoses).AllocatorInstance.Data;
  pFVar5 = this_01 + iVar1;
  while( true ) {
    if ((this->InputPoses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_01 == pFVar5) break;
    FPoseLinkBase::CacheBones(this_01,param_1);
    this_01 = this_01 + 1;
  }
  return;
}

// Update_AnyThread @ 147495290

void __thiscall
FAnimNode_LinkedAnimGraph::Update_AnyThread
          (FAnimNode_LinkedAnimGraph *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  UBlendProfile *pUVar3;
  UObject *pUVar4;
  bool bVar5;
  FExposedValueHandler *this_00;
  UClass *pUVar6;
  FAnimInstanceProxy *this_01;
  FName *pFVar7;
  IInertializationRequester *pIVar8;
  FText *pFVar9;
  FString *pFVar10;
  UClass *pUVar11;
  UAnimInstance *this_02;
  UAnimInstance *pUVar12;
  undefined1 local_res8 [8];
  FText local_a8;
  undefined1 local_98 [56];
  FString local_60;
  undefined4 local_50;
  UObject *local_48;
  
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  pUVar12 = (UAnimInstance *)0x0;
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    this_02 = pUVar12;
    if (this->_padding_ != 0) {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
      if (bVar5) {
        this_02 = (UAnimInstance *)this->_padding_;
      }
    }
    if ((this_02 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
      this_01 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_02);
      lVar2 = param_1->_padding_;
      (this_01->UpdateCounter).Counter = *(short *)(lVar2 + 0x5b0);
      (this_01->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5a8);
      (this_01->UpdateCounter).SkipFrames = *(short *)(lVar2 + 0x5b2);
      (**(code **)(this->_padding_ + 0xa8))(this,*(undefined8 *)(param_1->_padding_ + 0x140));
      local_98._8_8_ = param_1->_padding_;
      local_98._32_4_ = param_1->CurrentWeight;
      local_98._36_4_ = param_1->RootMotionWeightModifier;
      local_98._20_4_ = this->CachedLinkedNodeIndex;
      local_98._40_4_ = param_1->DeltaTime;
      local_98[0x10] = 1;
      local_98._24_4_ = 0xffffffff;
      local_98._0_8_ = this_01;
      pFVar7 = (FName *)(**(code **)(this->_padding_ + 0xb8))(this,local_res8);
      FAnimInstanceProxy::UpdateAnimation_WithRoot
                (this_01,(FAnimationUpdateContext *)local_98,this->LinkedRoot,*pFVar7);
      goto LAB_1474953e7;
    }
  }
  if (0 < (this->InputPoses).ArrayNum) {
    FPoseLinkBase::Update((FPoseLinkBase *)(this->InputPoses).AllocatorInstance.Data,param_1);
  }
LAB_1474953e7:
  if ((0.0 < this->PendingBlendOutDuration || this->PendingBlendOutDuration == 0.0) ||
     (0.0 < this->PendingBlendInDuration || this->PendingBlendInDuration == 0.0)) {
    pIVar8 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                       ((FAnimationBaseContext *)param_1);
    if (pIVar8 != (IInertializationRequester *)0x0) {
      if (0.0 <= this->PendingBlendOutDuration) {
        local_98._0_4_ = 0xbf800000;
        local_98._8_8_ = 0;
        local_98._16_2_ = 0;
        local_98._24_8_ = 0;
        local_98._32_4_ = 0.0;
        local_98._36_4_ = 0.0;
        FText::FText((FText *)(local_98 + 0x28));
        local_98._0_4_ = this->PendingBlendOutDuration;
        local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Data.ArrayNum = 0;
        local_60.Data.ArrayMax = 0;
        local_50 = 0xffffffff;
        local_48 = (UObject *)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 = (this->PendingBlendOutProfile).field0_0x0.DebugPtr,
           pUVar3 != (UBlendProfile *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        local_98._8_8_ = (this->PendingBlendOutProfile).field0_0x0;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_a8,L"AnimNode_LinkedAnimGraph",
                            L"InertializationRequestDescriptionOut",L"Out");
        pFVar10 = FText::ToString(pFVar9);
        ::FString::operator=(&local_60,pFVar10);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        local_50 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        pUVar4 = *(UObject **)(param_1->_padding_ + 0x140);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_48 = pUVar4;
        (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,local_98);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if ((longlong *)CONCAT44(local_98._44_4_,local_98._40_4_) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(local_98._44_4_,local_98._40_4_) + 0x10))();
        }
      }
      if (0.0 < this->PendingBlendInDuration || this->PendingBlendInDuration == 0.0) {
        local_98._0_4_ = 0xbf800000;
        local_98._8_8_ = 0;
        local_98._16_2_ = 0;
        local_98._24_8_ = 0;
        local_98._32_4_ = 0.0;
        local_98._36_4_ = 0.0;
        FText::FText((FText *)(local_98 + 0x28));
        local_98._0_4_ = this->PendingBlendInDuration;
        local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Data.ArrayNum = 0;
        local_60.Data.ArrayMax = 0;
        local_50 = 0xffffffff;
        local_48 = (UObject *)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 = (this->PendingBlendInProfile).field0_0x0.DebugPtr,
           pUVar3 != (UBlendProfile *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        local_98._8_8_ = (this->PendingBlendInProfile).field0_0x0;
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_a8,L"AnimNode_LinkedAnimGraph",
                            L"InertializationRequestDescriptionIn",L"In");
        pFVar10 = FText::ToString(pFVar9);
        ::FString::operator=(&local_60,pFVar10);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        local_50 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
        pUVar4 = *(UObject **)(param_1->_padding_ + 0x140);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_48 = pUVar4;
        (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,local_98);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if ((longlong *)CONCAT44(local_98._44_4_,local_98._40_4_) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(local_98._44_4_,local_98._40_4_) + 0x10))();
        }
      }
      (**(code **)((longlong)*pIVar8 + 0x30))
                (pIVar8,param_1->_padding_,*(undefined4 *)((longlong)&param_1->_padding_ + 4));
    }
  }
  this->PendingBlendOutDuration = -1.0;
  (this->PendingBlendOutProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->PendingBlendInDuration = -1.0;
  (this->PendingBlendInProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  pFVar7 = (FName *)(**(code **)(this->_padding_ + 0xb8))(this,local_res8);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             pFVar7);
  pUVar6 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar11 != (UClass *)0x0)) {
    iVar1 = (int)pUVar11->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar11->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar12 = (UAnimInstance *)(this->InstanceClass).Class.field0_0x0.DebugPtr;
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Target Class",(UClass *)pUVar12);
  return;
}

// Evaluate_AnyThread @ 147495710

void __thiscall
FAnimNode_LinkedAnimGraph::Evaluate_AnyThread(FAnimNode_LinkedAnimGraph *this,FPoseContext *param_1)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FAnimInstanceProxy *this_01;
  FBoneContainer *pFVar5;
  UAnimInstance *this_02;
  
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0))
  goto LAB_147495839;
  if (this->_padding_ == 0) {
LAB_147495762:
    this_02 = (UAnimInstance *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (!bVar3) goto LAB_147495762;
    this_02 = (UAnimInstance *)this->_padding_;
  }
  if ((this_02 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
    this_00 = (FAnimInstanceProxy *)param_1->_padding_;
    this_01 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_02);
    lVar2 = param_1->_padding_;
    (this_01->EvaluationCounter).Counter = *(short *)(lVar2 + 0x5c0);
    (this_01->EvaluationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5b8);
    (this_01->EvaluationCounter).SkipFrames = *(short *)(lVar2 + 0x5c2);
    pFVar5 = FAnimInstanceProxy::GetRequiredBones(this_01);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,pFVar5);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0xffffffff;
    param_1->_padding_ = (longlong)this_01;
    iVar1 = this->CachedLinkedNodeIndex;
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(int *)((longlong)&param_1->_padding_ + 4) = iVar1;
    FAnimInstanceProxy::EvaluateAnimation_WithRoot(this_01,param_1,this->LinkedRoot);
    param_1->_padding_ = (longlong)this_00;
    pFVar5 = FAnimInstanceProxy::GetRequiredBones(this_00);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,pFVar5);
    return;
  }
LAB_147495839:
  if (0 < (this->InputPoses).ArrayNum) {
    FPoseLink::Evaluate((FPoseLink *)(this->InputPoses).AllocatorInstance.Data,param_1);
    return;
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

// GatherDebugData @ 1474958a0

void __thiscall
FAnimNode_LinkedAnimGraph::GatherDebugData(FAnimNode_LinkedAnimGraph *this,FNodeDebugData *param_1)

{
  FAnimNode_Base *pFVar1;
  FName FVar2;
  longlong *plVar3;
  ForAnyElementType _Src;
  bool bVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FAnimInstanceProxy *this_00;
  FName *pFVar8;
  FNodeDebugData *pFVar9;
  UAnimInstance *this_01;
  int iVar10;
  UAnimInstance *pUVar11;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  this_01 = (UAnimInstance *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph,(UObject *)pUVar5,
                         L"AnimNode_LinkedAnimGraph");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimGraph.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  pUVar7 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  pUVar11 = this_01;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar10 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) != &pUVar6->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (pUVar7 = (this->InstanceClass).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) {
      pUVar6 = Z_Construct_UClass_UAnimInstance_NoRegister();
      if (pUVar6 != (UClass *)0x0) {
        iVar10 = (int)pUVar6->_padding_;
        if (((int)pUVar7->_padding_ < iVar10) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar11 = (UAnimInstance *)(this->InstanceClass).Class.field0_0x0.DebugPtr;
        }
      }
      local_res8 = *(FName *)&pUVar11->field_0x18;
      ::FName::ToString(&local_res8,local_48);
      pUVar11 = (UAnimInstance *)0x1;
    }
  }
  ::FString::PrintfImpl(&local_68,L"Target: %s");
  iVar10 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((pUVar11 != (UAnimInstance *)0x0) &&
     (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
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
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    if (this->_padding_ != 0) {
      pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
      if (bVar4) {
        this_01 = (UAnimInstance *)this->_padding_;
      }
    }
    if ((this_01 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
      this_00 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_01);
      pFVar8 = (FName *)(**(code **)(this->_padding_ + 0xb8))(this,&local_res8);
      pFVar1 = this->LinkedRoot;
      local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar2 = *pFVar8;
      local_48[0].Data.ArrayNum = 0;
      local_48[0].Data.ArrayMax = 0;
      pFVar9 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,local_48);
      FAnimInstanceProxy::GatherDebugData_WithRoot(this_00,pFVar9,pFVar1,FVar2);
      goto LAB_147495b96;
    }
  }
  if ((0 < (this->InputPoses).ArrayNum) &&
     (plVar3 = *(longlong **)(this->InputPoses).AllocatorInstance.Data, plVar3 != (longlong *)0x0))
  {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  }
LAB_147495b96:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// FAnimNode_LinkedAnimGraph @ 1474b16a0

FAnimNode_LinkedAnimGraph * __thiscall
FAnimNode_LinkedAnimGraph::FAnimNode_LinkedAnimGraph(FAnimNode_LinkedAnimGraph *this)

{
  undefined1 *puVar1;
  
  this->bReceiveNotifiesFromLinkedInstances = '\0';
  this->bPropagateNotifiesToLinkedInstances = '\0';
  this->_padding_ = (longlong)&___7FAnimNode_LinkedAnimGraph__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InputPoses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPoses).ArrayNum = 0;
  (this->InputPoses).ArrayMax = 0;
  (this->InputPoseNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPoseNames).ArrayNum = 0;
  (this->InputPoseNames).ArrayMax = 0;
  (this->InstanceClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->LinkedRoot = (FAnimNode_Base *)0x0;
  this->NodeIndex = -1;
  this->CachedLinkedNodeIndex = -1;
  this->PendingBlendOutDuration = -1.0;
  (this->PendingBlendOutProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  this->PendingBlendInDuration = -1.0;
  (this->PendingBlendInProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  return this;
}

// ~FAnimNode_LinkedAnimGraph @ 1474b4eb0

void __thiscall
FAnimNode_LinkedAnimGraph::~FAnimNode_LinkedAnimGraph(FAnimNode_LinkedAnimGraph *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InputPoseNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputPoses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_CustomProperty__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 1474b67c0

FAnimNode_LinkedAnimGraph * __thiscall
FAnimNode_LinkedAnimGraph::operator=
          (FAnimNode_LinkedAnimGraph *this,FAnimNode_LinkedAnimGraph *param_1)

{
  UClass *pUVar1;
  UBlendProfile *pUVar2;
  byte bVar3;
  
  FAnimNode_CustomProperty::operator=
            ((FAnimNode_CustomProperty *)this,(FAnimNode_CustomProperty *)param_1);
  TArray<FPoseLink,TSizedDefaultAllocator<32>_>::operator=(&this->InputPoses,&param_1->InputPoses);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->InputPoseNames,&param_1->InputPoseNames);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->InstanceClass).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->InstanceClass).Class.field0_0x0 = (param_1->InstanceClass).Class.field0_0x0;
  this->LinkedRoot = param_1->LinkedRoot;
  this->NodeIndex = param_1->NodeIndex;
  this->CachedLinkedNodeIndex = param_1->CachedLinkedNodeIndex;
  this->PendingBlendOutDuration = param_1->PendingBlendOutDuration;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->PendingBlendOutProfile).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PendingBlendOutProfile).field0_0x0 = (param_1->PendingBlendOutProfile).field0_0x0;
  this->PendingBlendInDuration = param_1->PendingBlendInDuration;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->PendingBlendInProfile).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PendingBlendInProfile).field0_0x0 = (param_1->PendingBlendInProfile).field0_0x0;
  bVar3 = (this->bReceiveNotifiesFromLinkedInstances ^ param_1->bReceiveNotifiesFromLinkedInstances)
          & 1 ^ this->field_0xb0;
  this->field_0xb0 = bVar3;
  this->field_0xb0 = (bVar3 ^ param_1->field_0xb0) & 2 ^ bVar3;
  return this;
}

// CacheBonesSubGraph_AnyThread @ 1474c19c0

void __thiscall
FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
          (FAnimNode_LinkedAnimGraph *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  UAnimInstance *this_00;
  FAnimInstanceProxy *local_28;
  undefined8 local_20;
  undefined1 local_18;
  int local_14;
  undefined4 local_10;
  
  if (this->_padding_ == 0) {
    return;
  }
  if ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0) {
    return;
  }
  if (this->_padding_ != 0) {
    pUVar3 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      this_00 = (UAnimInstance *)this->_padding_;
      goto LAB_1474c1a13;
    }
  }
  this_00 = (UAnimInstance *)0x0;
LAB_1474c1a13:
  if ((this_00 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
    local_28 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_00);
    lVar1 = *(longlong *)param_1;
    (local_28->CachedBonesCounter).Counter = *(short *)(lVar1 + 0x5a0);
    (local_28->CachedBonesCounter).LastSyncronizedFrame = *(ulong64 *)(lVar1 + 0x598);
    (local_28->CachedBonesCounter).SkipFrames = *(short *)(lVar1 + 0x5a2);
    local_14 = this->CachedLinkedNodeIndex;
    local_20 = 0;
    local_18 = 1;
    local_10 = 0xffffffff;
    (**(code **)(this->LinkedRoot->_padding_ + 8))(this->LinkedRoot,&local_28);
  }
  return;
}

// CanTeardownLinkedInstance @ 1474c42e0

bool __thiscall
FAnimNode_LinkedAnimGraph::CanTeardownLinkedInstance
          (FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1)

{
  return true;
}

// DynamicLink @ 1474cbb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimGraph::DynamicLink(FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  IAnimClassInterface *pIVar7;
  FAnimInstanceProxy *pFVar8;
  longlong *plVar9;
  void *pvVar10;
  FAnimNode_Base *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FAnimBlueprintFunction *pFVar17;
  longlong lVar18;
  longlong local_res18;
  longlong local_res20;
  FName local_80;
  FString local_78;
  FString local_68;
  FAnimationBaseContext local_58;
  
  this->CachedLinkedNodeIndex = -1;
  pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0xc0))();
  if (pUVar6 == (UObject *)0x0) {
    return;
  }
  pIVar7 = IAnimClassInterface::GetFromClass(*(UClass **)&pUVar6->field_0x10);
  if (pIVar7 == (IAnimClassInterface *)0x0) {
    return;
  }
  pFVar8 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(param_1);
  (**(code **)(this->_padding_ + 0xb8))(this,&local_80);
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x80))(pIVar7);
  uVar12 = 0;
  lVar18 = plVar9[1];
  if ((longlong)(int)lVar18 < 1) {
    return;
  }
  lVar15 = 0;
  lVar13 = 0;
  while( true ) {
    uVar14 = 0;
    if ((int)uVar12 < (int)plVar9[1]) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar17 = (FAnimBlueprintFunction *)(*plVar9 + lVar13);
    if (pFVar17->Name == local_80) break;
    uVar12 = uVar12 + 1;
    lVar15 = lVar15 + 1;
    lVar13 = lVar13 + 0x78;
    if ((int)lVar18 <= lVar15) {
      return;
    }
  }
  uVar12 = 0;
  this->CachedLinkedNodeIndex = pFVar17->OutputPoseNodeIndex;
  if (0 < (pFVar17->InputPoseNames).ArrayNum) {
    local_res18 = 0;
    local_res20 = 0;
    do {
      if ((this->InputPoses).ArrayNum <= (int)uVar12) break;
      local_58.SharedContext = (FAnimationUpdateSharedContext *)0x0;
      uVar14 = ~uVar12 >> 0x1f;
      local_58.bIsActive = true;
      local_58.CurrentNodeId = -1;
      local_58.PreviousNodeId = -1;
      local_58.AnimInstanceProxy = pFVar8;
      if (((int)uVar12 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar18 = (longlong)(int)uVar12;
      FPoseLinkBase::AttemptRelink
                ((FPoseLinkBase *)((this->InputPoses).AllocatorInstance.Data + lVar18 * 0x10),
                 &local_58);
      uVar4 = 0;
      if ((int)uVar12 < (pFVar17->InputPoseNames).ArrayNum) {
        uVar4 = uVar14;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = FindFunctionInputIndex
                        (this,pFVar17,
                         (FName *)((pFVar17->InputPoseNames).AllocatorInstance.Data + lVar18 * 8));
      if (uVar4 == 0xffffffff) {
LAB_1474cbfd9:
        if (2 < (byte)LogAnimation._0_1_) {
          uVar4 = 0;
          if ((int)uVar12 < (pFVar17->InputPoseNames).ArrayNum) {
            uVar4 = uVar14;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ::FName::ToString((FName *)((pFVar17->InputPoseNames).AllocatorInstance.Data + lVar18 * 8)
                            ,&local_78);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        uVar5 = 0;
        if ((int)uVar4 < (pFVar17->InputPoseNodeProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)
             ((pFVar17->InputPoseNodeProperties).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)
            == 0) goto LAB_1474cbfd9;
        uVar5 = 0;
        if ((int)uVar4 < (pFVar17->InputPoseNodeProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                            (*(FProperty **)
                              ((pFVar17->InputPoseNodeProperties).AllocatorInstance.Data +
                              (longlong)(int)uVar4 * 8),pUVar6,0);
        uVar4 = 0;
        if ((int)uVar12 < (pFVar17->InputPoseNames).ArrayNum) {
          uVar4 = uVar14;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((*(longlong *)((longlong)pvVar10 + 0x10) !=
             *(longlong *)((pFVar17->InputPoseNames).AllocatorInstance.Data + local_res18)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkedInputPoseNode->Name == AnimBlueprintFunction.InputPoseNames[InputPoseIndex]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimGraph.cpp"
                               ,0x192,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar1 = this->NodeIndex;
        uVar4 = 0;
        if ((int)uVar12 < (this->InputPoses).ArrayNum) {
          uVar4 = uVar14;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar16 = (this->InputPoses).AllocatorInstance.Data + local_res20;
        if (((GIsReinstancing == (atomic<bool>)0x0) &&
            (*(longlong *)((longlong)pvVar10 + 0xb0) != 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GIsReinstancing || InputProxy == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedInputPose.cpp"
                               ,0x51,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FAnimInstanceProxy **)((longlong)pvVar10 + 0xb0) = pFVar8;
        if (pFVar16 == (FScriptContainerElement *)0x0) {
          *(undefined8 *)((longlong)pvVar10 + 0x20) = 0;
          *(undefined4 *)((longlong)pvVar10 + 0x28) = 0xffffffff;
          *(int *)((longlong)pvVar10 + 0xac) = iVar1;
        }
        else {
          *(undefined8 *)((longlong)pvVar10 + 0x20) = *(undefined8 *)pFVar16;
          *(undefined4 *)((longlong)pvVar10 + 0x28) = *(undefined4 *)(pFVar16 + 8);
          *(int *)((longlong)pvVar10 + 0xac) = iVar1;
        }
      }
      local_res18 = local_res18 + 8;
      local_res20 = local_res20 + 0x10;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (pFVar17->InputPoseNames).ArrayNum);
  }
  if (pFVar17->OutputPoseNodeProperty == (FStructProperty *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      ::FName::ToString(&local_80,&local_68);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        ((FProperty *)pFVar17->OutputPoseNodeProperty,pUVar6,0);
    this->LinkedRoot = pFVar11;
  }
  return;
}

// DynamicUnlink @ 1474cc1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimGraph::DynamicUnlink(FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  IAnimClassInterface *pIVar7;
  longlong *plVar8;
  void *pvVar9;
  FAnimBlueprintFunction *pFVar10;
  uint uVar11;
  uint uVar12;
  FAnimBlueprintFunction *pFVar13;
  undefined1 local_res8 [8];
  longlong local_res18;
  FName local_res20;
  FString local_50;
  
  this->LinkedRoot = (FAnimNode_Base *)0x0;
  pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0xc0))();
  if (pUVar6 == (UObject *)0x0) {
    this->CachedLinkedNodeIndex = -1;
    return;
  }
  pIVar7 = IAnimClassInterface::GetFromClass(*(UClass **)&pUVar6->field_0x10);
  if (pIVar7 == (IAnimClassInterface *)0x0) {
    this->CachedLinkedNodeIndex = -1;
    return;
  }
  (**(code **)(this->_padding_ + 0xb8))(this,&local_res20);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x80))(pIVar7);
  lVar2 = plVar8[1];
  pFVar10 = (FAnimBlueprintFunction *)*plVar8;
  pFVar13 = pFVar10 + (int)lVar2;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimBlueprintFunction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar13) goto LAB_1474cc5dd;
    if (pFVar10->Name == local_res20) break;
    pFVar10 = pFVar10 + 1;
  }
  uVar12 = 0;
  if ((pFVar10->InputPoseNames).ArrayNum < 1) {
LAB_1474cc5dd:
    this->CachedLinkedNodeIndex = -1;
  }
  else {
    local_res18 = 0;
    do {
      if ((this->InputPoses).ArrayNum <= (int)uVar12) break;
      uVar11 = ~uVar12 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar12 < (pFVar10->InputPoseNames).ArrayNum) {
        uVar4 = uVar11;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = FindFunctionInputIndex
                        (this,pFVar10,
                         (FName *)((pFVar10->InputPoseNames).AllocatorInstance.Data +
                                  (longlong)(int)uVar12 * 8));
      if (uVar4 == 0xffffffff) {
LAB_1474cc4f9:
        if (2 < (byte)LogAnimation._0_1_) {
          uVar4 = 0;
          if ((int)uVar12 < (pFVar10->InputPoseNames).ArrayNum) {
            uVar4 = uVar11;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ::FName::ToString((FName *)((pFVar10->InputPoseNames).AllocatorInstance.Data +
                                     (longlong)(int)uVar12 * 8),&local_50);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        uVar5 = 0;
        if ((int)uVar4 < (pFVar10->InputPoseNodeProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(longlong *)
             ((pFVar10->InputPoseNodeProperties).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)
            == 0) goto LAB_1474cc4f9;
        uVar5 = 0;
        if ((int)uVar4 < (pFVar10->InputPoseNodeProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (*(FProperty **)
                             ((pFVar10->InputPoseNodeProperties).AllocatorInstance.Data +
                             (longlong)(int)uVar4 * 8),pUVar6,0);
        uVar4 = 0;
        if ((int)uVar12 < (pFVar10->InputPoseNames).ArrayNum) {
          uVar4 = uVar11;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*(longlong *)((longlong)pvVar9 + 0x10) !=
             *(longlong *)((pFVar10->InputPoseNames).AllocatorInstance.Data + local_res18)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkedInputPoseNode->Name == AnimBlueprintFunction.InputPoseNames[InputPoseIndex]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimGraph.cpp"
                               ,0x1c4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((GIsReinstancing == (atomic<bool>)0x0) && (*(longlong *)((longlong)pvVar9 + 0xb0) == 0)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("GIsReinstancing || InputProxy != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedInputPose.cpp"
                                     ,0x5a,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined8 *)((longlong)pvVar9 + 0xb0) = 0;
        *(undefined8 *)((longlong)pvVar9 + 0x20) = 0;
        *(undefined4 *)((longlong)pvVar9 + 0x28) = 0xffffffff;
        *(undefined4 *)((longlong)pvVar9 + 0xac) = 0xffffffff;
      }
      local_res18 = local_res18 + 8;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (pFVar10->InputPoseNames).ArrayNum);
    this->CachedLinkedNodeIndex = -1;
  }
  return;
}

// FindFunctionInputIndex @ 1474d3270

int __thiscall
FAnimNode_LinkedAnimGraph::FindFunctionInputIndex
          (FAnimNode_LinkedAnimGraph *this,FAnimBlueprintFunction *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (param_1->InputPoseNames).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (param_1->InputPoseNames).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*param_2 == *(FName *)((param_1->InputPoseNames).AllocatorInstance.Data + lVar6)) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (param_1->InputPoseNames).ArrayNum);
  }
  return -1;
}

// GetDynamicLinkFunctionName @ 1474d92d0

FName __thiscall
FAnimNode_LinkedAnimGraph::GetDynamicLinkFunctionName(FAnimNode_LinkedAnimGraph *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = NAME_AnimGraph;
  return in_RDX;
}

// GetDynamicLinkTarget @ 1474d92f0

UAnimInstance * __thiscall
FAnimNode_LinkedAnimGraph::GetDynamicLinkTarget
          (FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->_padding_;
  if (((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) &&
     (*this_00 != 0)) {
    pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      return (UAnimInstance *)*this_00;
    }
  }
  return (UAnimInstance *)0x0;
}

// GetTargetClass @ 1474e0190

UClass * __thiscall FAnimNode_LinkedAnimGraph::GetTargetClass(FAnimNode_LinkedAnimGraph *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->InstanceClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// InitializeSubGraph_AnyThread @ 1474e92e0

void __thiscall
FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
          (FAnimNode_LinkedAnimGraph *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  FAnimInstanceProxy *this_00;
  UAnimInstance *this_01;
  
  if (this->_padding_ == 0) {
    return;
  }
  if ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0) {
    return;
  }
  if (this->_padding_ != 0) {
    pUVar3 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      this_01 = (UAnimInstance *)this->_padding_;
      goto LAB_1474e9339;
    }
  }
  this_01 = (UAnimInstance *)0x0;
LAB_1474e9339:
  if ((this_01 != (UAnimInstance *)0x0) && (this->LinkedRoot != (FAnimNode_Base *)0x0)) {
    this_00 = UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(this_01);
    (**(code **)(*(longlong *)this_00 + 0x80))(this_00,this_01);
    lVar1 = *(longlong *)param_1;
    (this_00->InitializationCounter).Counter = *(short *)(lVar1 + 0x590);
    (this_00->InitializationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar1 + 0x588);
    (this_00->InitializationCounter).SkipFrames = *(short *)(lVar1 + 0x592);
    FAnimInstanceProxy::InitializeRootNode_WithRoot(this_00,this->LinkedRoot);
  }
  return;
}

// NeedsOnInitializeAnimInstance @ 1474ed8a0

bool __thiscall
FAnimNode_LinkedAnimGraph::NeedsOnInitializeAnimInstance(FAnimNode_LinkedAnimGraph *this)

{
  return true;
}

// OnInitializeAnimInstance @ 1474ef1a0

void __thiscall
FAnimNode_LinkedAnimGraph::OnInitializeAnimInstance
          (FAnimNode_LinkedAnimGraph *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  FAnimInstanceProxy *pFVar6;
  UAnimInstance *this_00;
  
  if (((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0)) ||
     (this->_padding_ == 0)) {
LAB_1474ef1ee:
    this_00 = (UAnimInstance *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (!bVar2) goto LAB_1474ef1ee;
    this_00 = (UAnimInstance *)this->_padding_;
  }
  pUVar3 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((this->InstanceClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      ReinitializeLinkedAnimInstance(this,param_2,(UAnimInstance *)0x0);
      if (this_00 == (UAnimInstance *)0x0) {
        return;
      }
      goto LAB_1474ef253;
    }
  }
  if (this_00 == (UAnimInstance *)0x0) {
    return;
  }
  TeardownInstance(this,param_2);
LAB_1474ef253:
  bVar2 = UAnimInstance::IsSkeletalMeshComponent(*(UObject **)&this_00->field_0x20);
  if ((bVar2) && (bVar2 = IsInGameThread(), bVar2)) {
    pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(this_00);
    UAnimInstance::HandleExistingParallelEvaluationTask(pUVar5);
  }
  pFVar6 = this_00->AnimInstanceProxy;
  if (pFVar6 == (FAnimInstanceProxy *)0x0) {
    pFVar6 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this_00 + 0x378))(this_00);
    this_00->AnimInstanceProxy = pFVar6;
  }
  (**(code **)(*(longlong *)pFVar6 + 0x80))(pFVar6,this_00);
  return;
}

// ReinitializeLinkedAnimInstance @ 1474f4830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimGraph::ReinitializeLinkedAnimInstance
          (FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1,UAnimInstance *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  USkeletalMeshComponent *pUVar11;
  UClass *pUVar12;
  UAnimInstance *this_00;
  UClass *pUVar13;
  byte bVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_128 [32];
  UAnimInstance **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  UAnimInstance *local_d8;
  FName local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar13 = (UClass *)0x0;
  pUVar10 = pUVar13;
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) {
    pUVar12 = pUVar13;
    if (this->_padding_ != 0) {
      pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
      if (bVar7) {
        pUVar12 = (UClass *)this->_padding_;
      }
    }
    if (pUVar12 != (UClass *)0x0) {
      pUVar10 = (UClass *)IAnimClassInterface::GetFromClass((UClass *)pUVar12->_padding_);
    }
  }
  TeardownInstance(this,param_1);
  pUVar12 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  if ((pUVar12 == (UClass *)0x0) ||
     (pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_1474f48f2:
    if (param_2 == (UAnimInstance *)0x0) goto LAB_1474f4b95;
  }
  else {
    iVar8 = (int)pUVar9->_padding_;
    if (((int)pUVar12->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar8 * 8) != &pUVar9->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) || ((this->InstanceClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
    goto LAB_1474f48f2;
  }
  pUVar11 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if ((pUVar11 == (USkeletalMeshComponent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimGraph.cpp"
                         ,0x124,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = param_2;
  if (param_2 == (UAnimInstance *)0x0) {
    pUVar12 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    if ((pUVar12 != (UClass *)0x0) &&
       (pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar9 != (UClass *)0x0)) {
      iVar8 = (int)pUVar9->_padding_;
      if (((int)pUVar12->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar13 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
      }
    }
    FVar5 = local_d0;
    if (local_d0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar11,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar12 = Z_Construct_UClass_UAnimInstance_NoRegister();
    CheckIsClassChildOf_Internal(pUVar12,pUVar13);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar13);
    FVar6 = local_d0;
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_d0.ComparisonIndex = FVar5.ComparisonIndex.Value;
    local_d0.Number = FVar5.Number;
    local_c8._16_4_ = local_d0.ComparisonIndex.Value;
    local_c8._20_4_ = local_d0.Number;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_d0 = FVar6;
    local_c8._8_8_ = pUVar11;
    this_00 = (UAnimInstance *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar15 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    this_00->bCreatedByLinkedAnimGraph = '\x01';
    bVar14 = (this->field_0xb0 << 4 ^ this_00->field_0x31) & 0x20 ^ this_00->field_0x31;
    this_00->field_0x31 = bVar14;
    this_00->field_0x31 = (this->field_0xb0 << 4 ^ bVar14) & 0x10 ^ bVar14;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  this->_padding_ = (longlong)this_00;
  DynamicLink(this,param_1);
  if (param_2 == (UAnimInstance *)0x0) {
    UAnimInstance::InitializeAnimation(this_00,false);
    if ((pUVar11->_padding_ & 0x20000000) != 0) {
      (**(code **)(*(longlong *)this_00 + 0x350))(this_00);
      UAnimInstance::BlueprintBeginPlay(this_00);
    }
    pTVar2 = &pUVar11->LinkedInstances;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_d8 = this_00;
    if ((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
       (lVar16 = (longlong)(pUVar11->LinkedInstances).ArrayMax,
       (FScriptContainerElement *)&local_d8 < pFVar3 + lVar16 * 8)) {
      local_f0 = (longlong)(pUVar11->LinkedInstances).ArrayNum;
      local_e8 = 8;
      local_108 = &local_d8;
      local_100 = pFVar3;
      local_f8 = lVar16;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (pUVar11->LinkedInstances).ArrayNum;
    piVar1 = &(pUVar11->LinkedInstances).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (pUVar11->LinkedInstances).ArrayNum = iVar8 + 1;
    *(UAnimInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_d8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UAnimInstance *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_d8);
    }
  }
  (**(code **)(this->_padding_ + 0xa0))(this,param_1,*(undefined8 *)&this_00->field_0x10);
  pUVar13 = (UClass *)IAnimClassInterface::GetFromClass(*(UClass **)&this_00->field_0x10);
LAB_1474f4b95:
  RequestBlend(this,(IAnimClassInterface *)pUVar10,(IAnimClassInterface *)pUVar13);
  return;
}

// RequestBlend @ 1474f53c0

void __thiscall
FAnimNode_LinkedAnimGraph::RequestBlend
          (FAnimNode_LinkedAnimGraph *this,IAnimClassInterface *param_1,IAnimClassInterface *param_2
          )

{
  UBlendProfile *pUVar1;
  TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
  *pTVar2;
  FAnimGraphBlendOptions *pFVar3;
  FAnimGraphBlendOptions *pFVar4;
  TObjectPtr<UBlendProfile>_u_0 TVar5;
  FName local_res8;
  
  (**(code **)(this->_padding_ + 0xb8))(this,&local_res8);
  pFVar3 = (FAnimGraphBlendOptions *)0x0;
  if (param_1 != (IAnimClassInterface *)0x0) {
    pTVar2 = (TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
              *)(**(code **)((longlong)*param_1 + 0x90))(param_1);
    pFVar3 = TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
             ::Find(pTVar2,local_res8);
  }
  pFVar4 = (FAnimGraphBlendOptions *)0x0;
  if (param_2 != (IAnimClassInterface *)0x0) {
    pTVar2 = (TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
              *)(**(code **)((longlong)*param_2 + 0x90))(param_2);
    pFVar4 = TMapBase<FName,FAnimGraphBlendOptions,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGraphBlendOptions,0>_>
             ::Find(pTVar2,local_res8);
  }
  if ((pFVar3 == (FAnimGraphBlendOptions *)0x0) || (pFVar3->BlendOutTime < 0.0)) {
    this->PendingBlendOutDuration = -1.0;
    TVar5.DebugPtr = (UBlendProfile *)0x0;
  }
  else {
    this->PendingBlendOutDuration = pFVar3->BlendOutTime;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (pFVar3->BlendOutProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TVar5 = (pFVar3->BlendOutProfile).field0_0x0;
  }
  (this->PendingBlendOutProfile).field0_0x0 = (TObjectPtr<UBlendProfile_const_>_u_0)TVar5;
  if ((pFVar4 == (FAnimGraphBlendOptions *)0x0) || (pFVar4->BlendInTime < 0.0)) {
    this->PendingBlendInDuration = -1.0;
    (this->PendingBlendInProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  }
  else {
    this->PendingBlendInDuration = pFVar4->BlendInTime;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (pFVar4->BlendInProfile).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->PendingBlendInProfile).field0_0x0 =
         (TObjectPtr<UBlendProfile_const_>_u_0)(pFVar4->BlendInProfile).field0_0x0;
  }
  return;
}

// SetAnimClass @ 1474f8240

void __thiscall
FAnimNode_LinkedAnimGraph::SetAnimClass
          (FAnimNode_LinkedAnimGraph *this,TSubclassOf<UAnimInstance> param_1,UAnimInstance *param_2
          )

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  IAnimClassInterface *pIVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (*(UClass **)param_1.Class.field0_0x0 != (UClass *)0x0)) &&
       (pIVar6 = IAnimClassInterface::GetFromClass(*(UClass **)param_1.Class.field0_0x0),
       pIVar6 == (IAnimClassInterface *)0x0)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7954898805130788520>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimGraph.cpp"
                         ,0x158,"false");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
  }
  pUVar8 = *(UClass **)param_1.Class.field0_0x0;
  (this->InstanceClass).Class.field0_0x0.DebugPtr = pUVar8;
  if ((pUVar8 == (UClass *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1474f834f:
    pUVar8 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1474f834f;
    pUVar8 = (this->InstanceClass).Class.field0_0x0.DebugPtr;
  }
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1474f8386;
  }
  pUVar5 = (UClass *)0x0;
LAB_1474f8386:
  if (pUVar8 != pUVar5) {
    ReinitializeLinkedAnimInstance(this,param_2,(UAnimInstance *)0x0);
  }
  return;
}

// TeardownInstance @ 1474fb4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimGraph::TeardownInstance(FAnimNode_LinkedAnimGraph *this,UAnimInstance *param_1)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *pUVar5;
  UWorld *pUVar6;
  TObjectPtr<UAnimInstance>_u_0 this_01;
  TObjectPtr<UAnimInstance>_u_0 local_res8;
  
  this_01.DebugPtr = (UAnimInstance *)0x0;
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0)) {
    this->_padding_ = 0;
    return;
  }
  if (this->_padding_ != 0) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      this_01 = (TObjectPtr<UAnimInstance>_u_0)this->_padding_;
    }
  }
  if (((this_01.DebugPtr == (UAnimInstance *)0x0) ||
      (DynamicUnlink(this,param_1), this_01.DebugPtr == param_1)) ||
     (cVar3 = (**(code **)(this->_padding_ + 200))(this,this_01.DebugPtr), cVar3 == '\0')) {
    this->_padding_ = 0;
    return;
  }
  bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_01.DebugPtr);
  if (!bVar2) {
    pUVar5 = UAnimInstance::GetOwningComponent(this_01.DebugPtr);
    bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar5);
    if (!bVar2) {
      if (pUVar5 == (USkeletalMeshComponent *)0x0) goto LAB_1474fb5be;
      this_00 = (AActor *)pUVar5->_padding_;
      bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
      if ((!bVar2) || (this_00 == (AActor *)0x0)) goto LAB_1474fb5be;
      pUVar6 = AActor::GetWorld(this_00);
      bVar2 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
      if (!bVar2) goto LAB_1474fb5be;
    }
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this_01.DebugPtr);
LAB_1474fb5be:
  pUVar5 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if ((pUVar5 == (USkeletalMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimGraph.cpp"
                         ,0x10a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8 = this_01;
  TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar5->LinkedInstances,(TObjectPtr<UAnimInstance> *)&local_res8.ObjectPtr);
  UAnimInstance::UninitializeAnimation(this_01.DebugPtr);
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01.DebugPtr);
  this->_padding_ = 0;
  return;
}

