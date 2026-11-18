// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463e84b0

UScriptStruct * __cdecl FAnimNode_Slot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot,(UObject *)pUVar1,L"AnimNode_Slot"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton;
}

// FAnimNode_Slot @ 146405ab0

FAnimNode_Slot * __thiscall FAnimNode_Slot::FAnimNode_Slot(FAnimNode_Slot *this)

{
  *(undefined8 *)&this->Source = 0;
  *(undefined4 *)&(this->Source).field_0x8 = 0xffffffff;
  (this->Source).field_0xc = 0;
  this->_padding_ = (longlong)&___7FAnimNode_Slot__6B_;
  this->_padding_ = 0;
  this->SlotName = FAnimSlotGroup::DefaultSlotName;
  (this->WeightData).SourceWeight = 0.0;
  (this->WeightData).SlotNodeWeight = 0.0;
  (this->WeightData).TotalNodeWeight = 0.0;
  (this->SlotNodeInitializationCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->SlotNodeInitializationCounter).Counter = -1;
  (this->SlotNodeInitializationCounter).SkipFrames = 0;
  this->bAlwaysUpdateSourcePose = false;
  return this;
}

// CacheBones_AnyThread @ 14641a360

void __thiscall
FAnimNode_Slot::CacheBones_AnyThread(FAnimNode_Slot *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_Slot::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643e540

void __thiscall FAnimNode_Slot::Evaluate_AnyThread(FAnimNode_Slot *this,FPoseContext *param_1)

{
  float fVar1;
  undefined1 local_e8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_90;
  undefined8 local_88;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  bool local_50;
  FAnimationPoseData local_48;
  FAnimationPoseData local_30;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Slot::Evaluate_AnyThread");
  fVar1 = __real_3727c5ac;
  if (__real_3727c5ac < (this->WeightData).SlotNodeWeight) {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_e8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_50 = param_1->bExpectsAdditivePose != false;
    local_e8._32_8_ = 0;
    local_e8._40_8_ = 0;
    local_e8._48_8_ = 0;
    local_e8._56_8_ = 0;
    local_e8._64_8_ = 0;
    local_e8[0x48] = 0;
    local_e8._80_8_ = 0;
    pTStack_90 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_88 = 0;
    local_80 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_78 = 0;
    local_70 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    local_68 = 0;
    local_60 = (void *)0x0;
    local_58 = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_e8,(FAnimInstanceProxy *)param_1->_padding_);
    local_e8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_e8._24_4_ = (undefined4)param_1->_padding_;
    if (fVar1 < (this->WeightData).SourceWeight) {
      FPoseLink::Evaluate(&this->Source,(FPoseContext *)local_e8);
    }
    (**(code **)(this->_padding_ + 0xa0))(this,local_e8);
    FAnimationPoseData::FAnimationPoseData(&local_30,(FPoseContext *)local_e8);
    FAnimationPoseData::FAnimationPoseData(&local_48,param_1);
    FAnimInstanceProxy::SlotEvaluatePose
              ((FAnimInstanceProxy *)param_1->_padding_,&this->SlotName,&local_30,
               (this->WeightData).SourceWeight,&local_48,(this->WeightData).SlotNodeWeight,
               (this->WeightData).TotalNodeWeight);
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_70,(int)local_68);
    if (local_70 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_80,(int)local_78);
    if (local_80 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_80);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_90,(int)local_88);
    if (pTStack_90 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_90);
    }
  }
  else {
    FPoseLink::Evaluate(&this->Source,param_1);
    (**(code **)(this->_padding_ + 0xa0))(this,param_1);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446360

void __thiscall FAnimNode_Slot::GatherDebugData(FAnimNode_Slot *this,FNodeDebugData *param_1)

{
  FName *this_00;
  FScriptContainerElement *pFVar1;
  UAnimInstance *pUVar2;
  longlong *plVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UPackage *pUVar6;
  FNodeDebugData *pFVar7;
  FAnimTrack *this_01;
  FAnimSegment *this_02;
  UAnimSequenceBase *pUVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FName local_res10;
  float local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  local_res8 = (FName)this;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Slot::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot,(UObject *)pUVar6,L"AnimNode_Slot"
                        );
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Slot.OuterSingleton)->_padding_;
  ::FName::ToString(&local_res10,&local_98);
  ::FString::PrintfImpl(&local_88,L"%s<W:%.1f%%> %s");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  this_00 = &this->SlotName;
  ::FName::ToString(this_00,local_68);
  ::FString::PrintfImpl(&local_98,L"(Slot Name: \'%s\' Weight:%.1f%%)");
  iVar9 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars(&local_88,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar9);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  FVar4.Data = local_88.Data.AllocatorInstance.Data;
  bVar5 = (this->WeightData).SourceWeight <= __real_3727c5ac;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_88.Data.ArrayNum;
  local_98.Data.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_98.Data._8_8_ = local_88.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)&local_98,iVar9,&local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_98,bVar5);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar7 = FNodeDebugData::BranchFlow(param_1,(this->WeightData).SourceWeight,&local_98);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,pFVar7);
  pUVar2 = param_1->AnimInstance;
  pFVar10 = (pUVar2->MontageInstances).AllocatorInstance.Data;
  iVar9 = (pUVar2->MontageInstances).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar9 * 8;
  while( true ) {
    if ((pUVar2->MontageInstances).ArrayNum != iVar9) {
      `TCheckedPointerIterator<FAnimMontageInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (pFVar10 == pFVar1) goto LAB_14644673b;
    plVar3 = *(longlong **)pFVar10;
    if (((((UAnimMontage *)*plVar3 != (UAnimMontage *)0x0) &&
         (bVar5 = UAnimMontage::IsValidSlot((UAnimMontage *)*plVar3,*this_00), bVar5)) &&
        (this_01 = UAnimMontage::GetAnimationData((UAnimMontage *)*plVar3,*this_00),
        this_01 != (FAnimTrack *)0x0)) &&
       ((this_02 = FAnimTrack::GetSegmentAtTime(this_01,*(float *)(plVar3 + 0x2f)),
        this_02 != (FAnimSegment *)0x0 &&
        (pUVar8 = FAnimSegment::GetAnimationData(this_02,*(float *)(plVar3 + 0x2f),local_res18),
        pUVar8 != (UAnimSequenceBase *)0x0)))) break;
    pFVar10 = pFVar10 + 8;
  }
  local_res8 = (FName)pUVar8->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  local_res8 = *(FName *)(*plVar3 + 0x18);
  ::FName::ToString(&local_res8,&local_98);
  ::FString::PrintfImpl(local_68,L"Montage(\'%s\') Anim(\'%s\') P(%.2f) W(%.0f%%)");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar7 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_78);
  FVar4.Data = local_68[0].Data.AllocatorInstance.Data;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (int)local_68[0].Data._8_8_;
  local_98.Data.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_98.Data._8_8_ = local_68[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)&local_98,iVar9,&local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
  }
  FNodeDebugData::AddDebugItem(pFVar7,&local_98,true);
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
LAB_14644673b:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645a620

void __thiscall
FAnimNode_Slot::Initialize_AnyThread(FAnimNode_Slot *this,FAnimationInitializeContext *param_1)

{
  short sVar1;
  longlong lVar2;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Slot::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  (this->WeightData).SourceWeight = 0.0;
  (this->WeightData).SlotNodeWeight = 0.0;
  (this->WeightData).TotalNodeWeight = 0.0;
  sVar1 = (this->SlotNodeInitializationCounter).Counter;
  if (((sVar1 == -1) ||
      ((this->SlotNodeInitializationCounter).LastSyncronizedFrame == 0xffffffffffffffff)) ||
     (sVar1 != *(short *)(*(longlong *)param_1 + 0x5d0))) {
    lVar2 = *(longlong *)param_1;
    (this->SlotNodeInitializationCounter).Counter = *(short *)(lVar2 + 0x5d0);
    (this->SlotNodeInitializationCounter).LastSyncronizedFrame = *(ulong64 *)(lVar2 + 0x5c8);
    (this->SlotNodeInitializationCounter).SkipFrames = *(short *)(lVar2 + 0x5d2);
    FAnimInstanceProxy::RegisterSlotNodeWithAnimInstance
              (*(FAnimInstanceProxy **)param_1,&this->SlotName);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// PostEvaluateSourcePose @ 146460020

void __thiscall FAnimNode_Slot::PostEvaluateSourcePose(FAnimNode_Slot *this,FPoseContext *param_1)

{
  return;
}

// Update_AnyThread @ 1464791b0

void __thiscall
FAnimNode_Slot::Update_AnyThread(FAnimNode_Slot *this,FAnimationUpdateContext *param_1)

{
  FName *pFVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  IInertializationRequester *pIVar6;
  float fVar7;
  FAnimationUpdateContext local_b8;
  FInertializationRequest local_88;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Slot::Update_AnyThread");
  pFVar1 = &this->SlotName;
  FAnimInstanceProxy::GetSlotWeight
            ((FAnimInstanceProxy *)param_1->_padding_,pFVar1,&(this->WeightData).SlotNodeWeight,
             &(this->WeightData).SourceWeight,&(this->WeightData).TotalNodeWeight);
  FAnimInstanceProxy::UpdateSlotNodeWeight
            ((FAnimInstanceProxy *)param_1->_padding_,pFVar1,(this->WeightData).SlotNodeWeight,
             param_1->CurrentWeight);
  FInertializationRequest::FInertializationRequest(&local_88);
  bVar5 = FAnimInstanceProxy::GetSlotInertializationRequestData
                    ((FAnimInstanceProxy *)param_1->_padding_,pFVar1,&local_88);
  if (bVar5) {
    pIVar6 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                       ((FAnimationBaseContext *)param_1);
    if (pIVar6 == (IInertializationRequester *)0x0) {
      FAnimNode_Inertialization::LogRequestError(param_1,(FPoseLinkBase *)&this->Source);
    }
    else {
      local_88.NodeId = *(int *)((longlong)&param_1->_padding_ + 4);
      TVar2 = (TObjectPtr<UObject>_u_0)
              ((TObjectPtr<UObject>_u_0 *)(param_1->_padding_ + 0x140))->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar2.DebugPtr);
      }
      local_88.AnimInstance.field0_0x0 = TVar2;
      (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,&local_88);
    }
  }
  fVar4 = __real_3727c5ac;
  if ((this->bAlwaysUpdateSourcePose != false) ||
     (__real_3727c5ac < (this->WeightData).SourceWeight)) {
    local_b8._padding_ = param_1->_padding_;
    local_b8._padding_ = param_1->_padding_;
    local_b8._padding_ = param_1->_padding_;
    local_b8._padding_ = param_1->_padding_;
    fVar7 = (this->WeightData).SourceWeight;
    if (fVar7 <= __real_37a7c5ac) {
      fVar7 = __real_37a7c5ac;
    }
    uVar3 = param_1->RootMotionWeightModifier;
    local_b8.DeltaTime = param_1->DeltaTime;
    local_b8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_b8.RootMotionWeightModifier = (float)uVar3;
    local_b8.CurrentWeight = fVar7 * param_1->CurrentWeight;
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,&local_b8);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             &this->SlotName);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Slot Weight",(this->WeightData).SlotNodeWeight);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Pose Source",(this->WeightData).SourceWeight <= fVar4);
  FAnimInstanceProxy::TraceMontageEvaluationData
            ((FAnimInstanceProxy *)param_1->_padding_,param_1,&this->SlotName);
  if (local_88.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.DescriptionString.Data.AllocatorInstance.Data);
  }
  if (local_88.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.Description_DEPRECATED.TextData.Reference + 0x10))();
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

