// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticStruct @ 14a89d130

UScriptStruct * __cdecl FAnimNode_PoseSearchComponentSpaceHistoryCollector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector
                         ,(UObject *)pUVar1,L"AnimNode_PoseSearchComponentSpaceHistoryCollector");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector.
         OuterSingleton;
}

// Initialize_AnyThread @ 14a89d170

void __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::Initialize_AnyThread
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,
          FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_PoseSearchComponentSpaceHistoryCollector::Initialize_AnyThread");
  FAnimNode_PoseSearchHistoryCollector_Base::Initialize_AnyThread
            ((FAnimNode_PoseSearchHistoryCollector_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Source,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 14a89d1c0

void __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::CacheBones_AnyThread
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,
          FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_PoseSearchComponentSpaceHistoryCollector::CacheBones_AnyThread");
  FAnimNode_PoseSearchHistoryCollector_Base::CacheBones_AnyThread
            ((FAnimNode_PoseSearchHistoryCollector_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Source,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateComponentSpace_AnyThread @ 14a89d210

void __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::EvaluateComponentSpace_AnyThread
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,
          FComponentSpacePoseContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  FPoseHistory *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar7;
  UScriptStruct *pUVar8;
  longlong *plVar9;
  short sVar10;
  undefined4 local_res8;
  UObject *local_res10;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_88;
  TArrayView<FName_const_,int> local_78;
  FComponentSpacePoseProvider local_68;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_58;
  FInteractionValidator local_48;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_PoseSearchComponentSpaceHistoryCollector::EvaluateComponentSpace_AnyThread")
  ;
  FAnimNode_Base::EvaluateComponentSpace_AnyThread((FAnimNode_Base *)this,param_1);
  FComponentSpacePoseLink::EvaluateComponentSpace(&this->Source,param_1);
  if (param_1->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.AnimInstanceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                       ,0xe0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::PoseSearch::FInteractionValidator::FInteractionValidator
            (&local_48,*(UObject **)(param_1->_padding_ + 0x140));
  if ((((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
       (sVar10 = (short)this->_padding_, sVar10 != -1)) && (this->_padding_ != -1)) &&
     (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar6 = (short)this->_padding_ + 1;
    sVar10 = 0;
    if (sVar6 != -1) {
      sVar10 = sVar6;
    }
    if (((sVar10 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar10 != *(short *)(param_1->_padding_ + 0x5b0))) {
      bVar4 = true;
      goto LAB_14a89d2f5;
    }
  }
  bVar4 = false;
LAB_14a89d2f5:
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if ((char)this->_padding_ != '\0') {
    pTVar7 = FAnimNode_PoseSearchHistoryCollector_Base::GetRequiredBones
                       ((FAnimNode_PoseSearchHistoryCollector_Base *)this,&local_58,
                        (FAnimInstanceProxy *)param_1->_padding_);
    if (&local_88 != pTVar7) {
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      local_88.AllocatorInstance.Data = (pTVar7->AllocatorInstance).Data;
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = pTVar7->ArrayNum;
      local_88.ArrayMax = pTVar7->ArrayMax;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  UE::PoseSearch::FComponentSpacePoseProvider::FComponentSpacePoseProvider(&local_68,&param_1->Pose)
  ;
  plVar1 = &this->_padding_;
  if (*plVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistoryPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                       ,0x75,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_78.DataPtr = (FName *)this->_padding_;
  iVar2 = (int)this->_padding_;
  this_00 = (FPoseHistory *)*plVar1;
  if (iVar2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_78.ArrayNum = iVar2;
  UE::PoseSearch::FPoseHistory::EvaluateComponentSpace_AnyThread
            (this_00,*(float *)(param_1->_padding_ + 0x168),(IComponentSpacePoseProvider *)&local_68
             ,*(bool *)((longlong)&this->_padding_ + 2),*(float *)((longlong)&this->_padding_ + 4),
             *(float *)&this->_padding_,*(float *)((longlong)&this->_padding_ + 4),bVar4,
             SUB81(this->_padding_,0),&local_88,&param_1->Curve,&local_78);
  pUVar8 = FPoseHistoryAnimationAttribute::StaticStruct();
  plVar9 = (longlong *)
           UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                     ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                      &param_1->CustomAttributes,pUVar8,&UE::PoseSearch::PoseHistoryAttributeId);
  if (plVar9 != (longlong *)0x0) {
    if (*plVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseHistoryPtr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                         ,0x75,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *plVar9 = *plVar1;
    local_res10 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar9 + 1),(FObjectPtr)&local_res10);
  }
  *(undefined1 *)&this->_padding_ = 0;
  FLinearColor::ToFColorSRGB(&FLinearColor::Red);
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistoryPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*(longlong *)*plVar1 + 0x70))((longlong *)*plVar1,param_1->_padding_,local_res8);
  local_68._padding_ = (longlong)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  UE::PoseSearch::FInteractionValidator::~FInteractionValidator(&local_48);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14a89d580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::Update_AnyThread
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,FAnimationUpdateContext *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  TSharedRef<UE::Anim::IGraphMessage,1> local_28;
  FScopedGraphMessage local_18;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_PoseSearchComponentSpaceHistoryCollector::Update_AnyThread");
  FAnimNode_PoseSearchHistoryCollector_Base::Update_AnyThread
            ((FAnimNode_PoseSearchHistoryCollector_Base *)this,param_1);
  UE::Anim::FScopedGraphMessage::FScopedGraphMessage(&local_18,(FAnimationBaseContext *)param_1);
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    FVar4 = UE::PoseSearch::FPoseHistoryProvider::TypeName;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPoseHistoryProvider_PoseSearch_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPoseHistoryProvider_PoseSearch_UE__6B_;
    *(FAnimNode_PoseSearchComponentSpaceHistoryCollector **)&pTVar3[1].SharedReferenceCount = this;
    if (this == (FAnimNode_PoseSearchComponentSpaceHistoryCollector *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HistoryCollector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseHistoryProvider.h"
                         ,0x15,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar4 = UE::PoseSearch::FPoseHistoryProvider::TypeName;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Object = (IGraphMessage *)(pTVar3 + 1);
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  UE::Anim::FScopedGraphMessage::PushMessage
            (&local_18,(FAnimationBaseContext *)param_1,&local_28,FVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Source,param_1);
  UE::Anim::FScopedGraphMessage::PopMessage(&local_18);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 14a89d700

void __thiscall
FAnimNode_PoseSearchComponentSpaceHistoryCollector::GatherDebugData
          (FAnimNode_PoseSearchComponentSpaceHistoryCollector *this,FNodeDebugData *param_1)

{
  FAnimNode_Base::GatherDebugData((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Source,param_1);
  return;
}

