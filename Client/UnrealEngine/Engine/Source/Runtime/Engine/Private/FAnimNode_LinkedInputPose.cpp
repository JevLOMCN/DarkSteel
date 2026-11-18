// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147495c10

UScriptStruct * __cdecl FAnimNode_LinkedInputPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose,(UObject *)pUVar1,
                         L"AnimNode_LinkedInputPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton;
}

// Update_AnyThread @ 147495c70

void __thiscall
FAnimNode_LinkedInputPose::Update_AnyThread
          (FAnimNode_LinkedInputPose *this,FAnimationUpdateContext *param_1)

{
  FAnimationUpdateContext local_38;
  
  local_38._padding_ = (longlong)this->InputProxy;
  if ((FAnimInstanceProxy *)local_38._padding_ != (FAnimInstanceProxy *)0x0) {
    local_38.CurrentWeight = param_1->CurrentWeight;
    local_38.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_._0_4_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_38._padding_._4_4_ = this->OuterGraphNodeIndex;
    local_38.DeltaTime = param_1->DeltaTime;
    local_38._padding_._0_1_ = 1;
    FPoseLinkBase::Update((FPoseLinkBase *)&this->InputPose,&local_38);
  }
  return;
}

// Evaluate_AnyThread @ 147495ce0

void __thiscall
FAnimNode_LinkedInputPose::Evaluate_AnyThread(FAnimNode_LinkedInputPose *this,FPoseContext *param_1)

{
  int iVar1;
  longlong lVar2;
  FAnimInstanceProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->InputProxy == (FAnimInstanceProxy *)0x0) {
    lVar2 = *(longlong *)&(this->CachedInputPose).field_0x10;
    if ((((lVar2 != 0) && (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x30)), bVar5)
         ) && (*(longlong *)(lVar2 + 0x48) != 0)) && (0 < *(int *)(lVar2 + 8))) {
      if (*(int *)&(param_1->Pose).field_0x8 == *(int *)&(this->CachedInputPose).field_0x8) {
        if (this->bIsCachedInputPoseInitialized != 0) {
          FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<TSizedDefaultAllocator<32>_>
                    ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                     (FBaseCompactPose<TSizedDefaultAllocator<32>_> *)&this->CachedInputPose);
          TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
          CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
                    ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                     &param_1->Curve,
                     (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                     &this->CachedInputCurve);
          UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
          CopyFrom<TSizedDefaultAllocator<32>_>
                    ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                     &param_1->CustomAttributes,
                     (TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     &this->CachedAttributes);
          return;
        }
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2885234780343894072>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedInputPose.cpp"
                           ,0x38,"Output.Pose.GetNumBones() == CachedInputPose.GetNumBones()");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
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
  }
  else {
    lVar2 = param_1->_padding_;
    param_1->_padding_ = (longlong)this->InputProxy;
    pFVar3 = this->InputProxy;
    if (((pFVar3->RequiredBones).Object == (FBoneContainer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               (pFVar3->RequiredBones).Object);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0xffffffff;
    iVar1 = this->OuterGraphNodeIndex;
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(int *)((longlong)&param_1->_padding_ + 4) = iVar1;
    FPoseLink::Evaluate(&this->InputPose,param_1);
    param_1->_padding_ = lVar2;
    if ((*(longlong *)(lVar2 + 0x660) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)(lVar2 + 0x660));
  }
  return;
}

// GatherDebugData @ 147495ea0

void __thiscall
FAnimNode_LinkedInputPose::GatherDebugData(FAnimNode_LinkedInputPose *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose,(UObject *)pUVar2,
                         L"AnimNode_LinkedInputPose");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_LinkedInputPose.OuterSingleton)->
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
  if ((this->InputProxy != (FAnimInstanceProxy *)0x0) &&
     (plVar1 = *(longlong **)&this->InputPose, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// DynamicLink @ 1474cc140

void __thiscall
FAnimNode_LinkedInputPose::DynamicLink
          (FAnimNode_LinkedInputPose *this,FAnimInstanceProxy *param_1,FPoseLinkBase *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((GIsReinstancing == (atomic<bool>)0x0) && (this->InputProxy != (FAnimInstanceProxy *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsReinstancing || InputProxy == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedInputPose.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->InputProxy = param_1;
  if (param_2 == (FPoseLinkBase *)0x0) {
    *(undefined8 *)&this->InputPose = 0;
    *(undefined4 *)&(this->InputPose).field_0x8 = 0xffffffff;
  }
  else {
    *(FAnimNode_Base **)&this->InputPose = param_2->LinkedNode;
    *(int *)&(this->InputPose).field_0x8 = param_2->LinkID;
  }
  this->OuterGraphNodeIndex = param_3;
  return;
}

// DynamicUnlink @ 1474cc630

void __thiscall FAnimNode_LinkedInputPose::DynamicUnlink(FAnimNode_LinkedInputPose *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((GIsReinstancing == (atomic<bool>)0x0) && (this->InputProxy == (FAnimInstanceProxy *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsReinstancing || InputProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedInputPose.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->InputProxy = (FAnimInstanceProxy *)0x0;
  *(undefined8 *)&this->InputPose = 0;
  *(undefined4 *)&(this->InputPose).field_0x8 = 0xffffffff;
  this->OuterGraphNodeIndex = -1;
  return;
}

