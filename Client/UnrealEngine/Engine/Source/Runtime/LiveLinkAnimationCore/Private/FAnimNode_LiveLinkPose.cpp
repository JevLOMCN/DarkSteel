// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 14

// StaticStruct @ 14cfc1b40

UScriptStruct * __cdecl FAnimNode_LiveLinkPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkAnimationCore();
    Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose,(UObject *)pUVar1,
                         L"AnimNode_LiveLinkPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton;
}

// FAnimNode_LiveLinkPose @ 14cfc27a0

FAnimNode_LiveLinkPose * __thiscall
FAnimNode_LiveLinkPose::FAnimNode_LiveLinkPose(FAnimNode_LiveLinkPose *this)

{
  UClass *pUVar1;
  
  *(undefined4 *)&(this->InputPose).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_LiveLinkPose__6B_;
  *(undefined8 *)&this->InputPose = 0;
  (this->InputPose).field_0xc = 0;
  (this->LiveLinkSubjectName).Name = (FName)0x0;
  this->bDoLiveLinkEvaluation = true;
  pUVar1 = ULiveLinkRemapAsset::StaticClass();
  (this->RetargetAsset).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)0x0;
  this->LiveLinkClient_AnyThread = (ILiveLinkClient *)0x0;
  this->CachedDeltaTime = 0.0;
  (this->CachedLiveLinkData).Object = (FLiveLinkSubjectFrameData *)0x0;
  (this->CachedLiveLinkData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// operator= @ 14cfc2ae0

FAnimNode_LiveLinkPose * __thiscall
FAnimNode_LiveLinkPose::operator=(FAnimNode_LiveLinkPose *this,FAnimNode_LiveLinkPose *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLiveLinkSubjectFrameData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  
  this->_padding_ = param_1->_padding_;
  uVar6 = *(undefined8 *)&(param_1->InputPose).field_0x8;
  *(undefined8 *)&this->InputPose = *(undefined8 *)&param_1->InputPose;
  *(undefined8 *)&(this->InputPose).field_0x8 = uVar6;
  (this->LiveLinkSubjectName).Name = (param_1->LiveLinkSubjectName).Name;
  this->bDoLiveLinkEvaluation = param_1->bDoLiveLinkEvaluation;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->RetargetAsset).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RetargetAsset).Class.field0_0x0 = (param_1->RetargetAsset).Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (UObject *)(param_1->CurrentRetargetAsset).field0_0x0.DebugPtr,
     pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->CurrentRetargetAsset).field0_0x0 = (param_1->CurrentRetargetAsset).field0_0x0;
  this->LiveLinkClient_AnyThread = param_1->LiveLinkClient_AnyThread;
  this->CachedDeltaTime = param_1->CachedDeltaTime;
  pTVar3 = (param_1->CachedLiveLinkData).SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->CachedLiveLinkData).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->CachedLiveLinkData).SharedReferenceCount.ReferenceController;
  (this->CachedLiveLinkData).Object = pFVar4;
  (this->CachedLiveLinkData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->CachedEvaluatedRole).Class.field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CachedEvaluatedRole).Class.field0_0x0 = (param_1->CachedEvaluatedRole).Class.field0_0x0;
  return this;
}

// BuildPoseFromAnimData @ 14cfc4010

void __thiscall
FAnimNode_LiveLinkPose::BuildPoseFromAnimData
          (FAnimNode_LiveLinkPose *this,FLiveLinkSubjectFrameData *param_1,FPoseContext *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  ULiveLinkRetargetAsset *pUVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  longlong lVar10;
  
  lVar6 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar7 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar7 == 0) {
LAB_14cfc40a1:
    lVar6 = 0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) goto LAB_14cfc40a1;
    pUVar9 = FLiveLinkSkeletonStaticData::StaticStruct();
    if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14cfc40a1;
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14cfc40a1;
  }
  pFVar1 = &param_1->FrameData;
  lVar7 = (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x10))(pFVar1);
  lVar10 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
  if (lVar10 != 0) {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) {
      pUVar9 = FLiveLinkAnimationFrameData::StaticStruct();
      if (pUVar9 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14cfc4118;
      }
    }
  }
  lVar7 = 0;
LAB_14cfc4118:
  if (lVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletonData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkAnimationCore\\Private\\AnimNode_LiveLinkPose.cpp"
                       ,0x24,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (lVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkAnimationCore\\Private\\AnimNode_LiveLinkPose.cpp"
                       ,0x25,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar3 = (this->CurrentRetargetAsset).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0x2b8))
            (pUVar3,this->CachedDeltaTime,lVar6,lVar7,&param_2->Pose);
  pUVar3 = (this->CurrentRetargetAsset).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0x2c0))
            (pUVar3,this->CachedDeltaTime,lVar6,lVar7,&param_2->Pose,&param_2->Curve);
  this->CachedDeltaTime = 0.0;
  return;
}

// BuildPoseFromCurveData @ 14cfc4760

void __thiscall
FAnimNode_LiveLinkPose::BuildPoseFromCurveData
          (FAnimNode_LiveLinkPose *this,FLiveLinkSubjectFrameData *param_1,FPoseContext *param_2)

{
  ULiveLinkRetargetAsset *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x10))(param_1);
  lVar5 = (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (lVar5 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  lVar5 = (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x10))(&param_1->FrameData);
  lVar6 = (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x20))(&param_1->FrameData);
  if (lVar6 != 0) {
    Z_Construct_UClass_UScriptStruct_NoRegister();
  }
  if (lVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseStaticData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkAnimationCore\\Private\\AnimNode_LiveLinkPose.cpp"
                       ,0x30,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (lVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseFrameData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkAnimationCore\\Private\\AnimNode_LiveLinkPose.cpp"
                       ,0x31,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->CurrentRetargetAsset).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar1 + 0x2c0))
            (pUVar1,this->CachedDeltaTime,lVar4,lVar5,&param_2->Pose,&param_2->Curve);
  this->CachedDeltaTime = 0.0;
  return;
}

// CacheBones_AnyThread @ 14cfc4870

void __thiscall
FAnimNode_LiveLinkPose::CacheBones_AnyThread
          (FAnimNode_LiveLinkPose *this,FAnimationCacheBonesContext *param_1)

{
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->InputPose,param_1);
  return;
}

// Evaluate_AnyThread @ 14cfc49c0

void __thiscall
FAnimNode_LiveLinkPose::Evaluate_AnyThread(FAnimNode_LiveLinkPose *this,FPoseContext *param_1)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  int iVar2;
  ILiveLinkClient *pIVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  UClass *pUVar8;
  FLiveLinkSubjectFrameData *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  longlong local_res8;
  UClass *local_res18 [2];
  FLiveLinkSubjectFrameData local_78;
  
  FPoseLink::Evaluate(&this->InputPose,param_1);
  if (this->LiveLinkClient_AnyThread == (ILiveLinkClient *)0x0) {
    return;
  }
  if ((this->CurrentRetargetAsset).field0_0x0.DebugPtr == (ULiveLinkRetargetAsset *)0x0) {
    return;
  }
  FStructOnScope::FStructOnScope((FStructOnScope *)&local_78);
  FStructOnScope::FStructOnScope(&local_78.FrameData.WrappedStruct);
  if (this->bDoLiveLinkEvaluation == false) {
    if ((((this->CachedLiveLinkData).Object != (FLiveLinkSubjectFrameData *)0x0) &&
        (pUVar8 = (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0))
       && (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar10 != (UClass *)0x0)) {
      iVar2 = (int)pUVar10->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) &&
         (pUVar8 = (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr, pUVar8 != (UClass *)0x0))
      {
        pUVar11 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
        pUVar10 = (UClass *)0x0;
        pUVar12 = pUVar10;
        if (pUVar11 != (UClass *)0x0) {
          iVar2 = (int)pUVar11->_padding_;
          if (((int)pUVar8->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar11->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pUVar12 = (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr;
          }
        }
        pUVar8 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
        if (pUVar12 == pUVar8) {
          pFVar9 = TSharedPtr<FLiveLinkSubjectFrameData,1>::operator*<FLiveLinkSubjectFrameData>
                             (&this->CachedLiveLinkData);
          BuildPoseFromAnimData(this,pFVar9,param_1);
        }
        else {
          pUVar8 = (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr;
          if ((pUVar8 != (UClass *)0x0) &&
             (pUVar12 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar2 = (int)pUVar12->_padding_;
            if (((int)pUVar8->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar12->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar10 = (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr;
            }
          }
          pUVar8 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
          if (pUVar10 == pUVar8) {
            pFVar9 = TSharedPtr<FLiveLinkSubjectFrameData,1>::operator*<FLiveLinkSubjectFrameData>
                               (&this->CachedLiveLinkData);
            BuildPoseFromCurveData(this,pFVar9,param_1);
          }
        }
      }
    }
    goto LAB_14cfc4d81;
  }
  (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (**(code **)((longlong)*this->LiveLinkClient_AnyThread + 0xd0))
            (this->LiveLinkClient_AnyThread,&local_res8,(this->LiveLinkSubjectName).Name);
  lVar6 = local_res8;
  if ((local_res8 == 0) ||
     (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 == (UClass *)0x0))
  goto LAB_14cfc4d81;
  iVar2 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar8->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) || (local_res8 == 0)) goto LAB_14cfc4d81;
  pIVar3 = this->LiveLinkClient_AnyThread;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0xe8);
  local_res18[0] = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  cVar7 = (*pcVar4)(pIVar3,(this->LiveLinkSubjectName).Name,local_res18);
  pIVar3 = this->LiveLinkClient_AnyThread;
  if (cVar7 == '\0') {
    pcVar4 = *(code **)((longlong)*pIVar3 + 0xe8);
    local_res18[0] = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    cVar7 = (*pcVar4)(pIVar3,(this->LiveLinkSubjectName).Name,local_res18);
    if (cVar7 != '\0') {
      pIVar3 = this->LiveLinkClient_AnyThread;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x198);
      local_res18[0] = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_res18[0]);
      }
      cVar7 = (*pcVar4)(pIVar3,(this->LiveLinkSubjectName).Name,local_res18,&local_78);
      if (cVar7 != '\0') {
        BuildPoseFromCurveData(this,&local_78,param_1);
        pUVar8 = Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
        goto LAB_14cfc4bb0;
      }
    }
  }
  else {
    pcVar4 = *(code **)((longlong)*pIVar3 + 0x198);
    local_res18[0] = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    cVar7 = (*pcVar4)(pIVar3,(this->LiveLinkSubjectName).Name,local_res18,&local_78);
    if (cVar7 != '\0') {
      BuildPoseFromAnimData(this,&local_78,param_1);
      pUVar8 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
LAB_14cfc4bb0:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->CachedEvaluatedRole).Class.field0_0x0.DebugPtr = pUVar8;
    }
  }
  pFVar9 = TSharedPtr<FLiveLinkSubjectFrameData,1>::operator->(&this->CachedLiveLinkData);
  if (pFVar9 != &local_78) {
    (**(code **)((pFVar9->StaticData).WrappedStruct._padding_ + 0x48))(pFVar9);
    (pFVar9->StaticData).WrappedStruct.ScriptStruct.WeakPtr =
         local_78.StaticData.WrappedStruct.ScriptStruct.WeakPtr;
    (pFVar9->StaticData).WrappedStruct.SampleStructMemory =
         local_78.StaticData.WrappedStruct.SampleStructMemory;
    (pFVar9->StaticData).WrappedStruct.OwnsMemory = local_78.StaticData.WrappedStruct.OwnsMemory;
    local_78.StaticData.WrappedStruct.OwnsMemory = false;
    (**(code **)(local_78.StaticData.WrappedStruct._padding_ + 0x48))(&local_78);
  }
  pFVar9 = TSharedPtr<FLiveLinkSubjectFrameData,1>::operator->(&this->CachedLiveLinkData);
  pFVar1 = &pFVar9->FrameData;
  if (pFVar1 != &local_78.FrameData) {
    (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x48))(pFVar1);
    (pFVar9->FrameData).WrappedStruct.ScriptStruct.WeakPtr =
         local_78.FrameData.WrappedStruct.ScriptStruct.WeakPtr;
    (pFVar9->FrameData).WrappedStruct.SampleStructMemory =
         local_78.FrameData.WrappedStruct.SampleStructMemory;
    (pFVar9->FrameData).WrappedStruct.OwnsMemory = local_78.FrameData.WrappedStruct.OwnsMemory;
    local_78.FrameData.WrappedStruct.OwnsMemory = false;
    (**(code **)(local_78.FrameData.WrappedStruct._padding_ + 0x48))(&local_78.FrameData);
  }
LAB_14cfc4d81:
  FStructOnScope::~FStructOnScope(&local_78.FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&local_78);
  return;
}

// GatherDebugData @ 14cfc4dc0

void __thiscall
FAnimNode_LiveLinkPose::GatherDebugData(FAnimNode_LiveLinkPose *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&(this->LiveLinkSubjectName).Name,&local_28);
  ::FString::PrintfImpl(&local_18,L"LiveLink - SubjectName: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_18.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_28,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->InputPose,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HasPreUpdate @ 14cfc5250

bool __thiscall FAnimNode_LiveLinkPose::HasPreUpdate(FAnimNode_LiveLinkPose *this)

{
  return true;
}

// Initialize_AnyThread @ 14cfc5270

void __thiscall
FAnimNode_LiveLinkPose::Initialize_AnyThread
          (FAnimNode_LiveLinkPose *this,FAnimationInitializeContext *param_1)

{
  TSharedPtr<FLiveLinkSubjectFrameData,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLiveLinkSubjectFrameData *pFVar9;
  longlong local_18 [2];
  
  pTVar1 = &this->CachedLiveLinkData;
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->InputPose,param_1);
  if (pTVar1->Object == (FLiveLinkSubjectFrameData *)0x0) {
    pTVar7 = ::operator_new(0x60);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = (FLiveLinkSubjectFrameData *)&DAT_00000010;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFLiveLinkSubjectFrameData___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = 0;
      pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[2]._padding_ = 0;
      pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[3]._padding_ = 0;
      pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[4]._padding_ = 0;
      pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar7[5]._padding_ = 0;
      pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
      FStructOnScope::FStructOnScope((FStructOnScope *)(pTVar7 + 1));
      FStructOnScope::FStructOnScope((FStructOnScope *)&pTVar7[3].SharedReferenceCount);
      pFVar9 = (FLiveLinkSubjectFrameData *)(pTVar7 + 1);
      if (pFVar9 == (FLiveLinkSubjectFrameData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = pTVar7;
    if (pTVar1 != (TSharedPtr<FLiveLinkSubjectFrameData,1> *)local_18) {
      pTVar1->Object = pFVar9;
      pTVar4 = (this->CachedLiveLinkData).SharedReferenceCount.ReferenceController;
      if (pTVar7 != pTVar4) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        (this->CachedLiveLinkData).SharedReferenceCount.ReferenceController = pTVar7;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar4->SharedReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)pTVar4->_padding_)(pTVar4);
            LOCK();
            paVar2 = &pTVar4->WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
              pTVar8 = (TReferenceControllerBase<1> *)0x0;
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  return;
}

// OnInitializeAnimInstance @ 14cfc5580

void __thiscall
FAnimNode_LiveLinkPose::OnInitializeAnimInstance
          (FAnimNode_LiveLinkPose *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)0x0;
  FAnimNode_Base::OnInitializeAnimInstance((FAnimNode_Base *)this,param_1,param_2);
  return;
}

// PreUpdate @ 14cfc55a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FAnimNode_LiveLinkPose::PreUpdate(FAnimNode_LiveLinkPose *this,UAnimInstance *param_1)

{
  ULiveLinkRetargetAsset *pUVar1;
  bool bVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  ILiveLinkClient *pIVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pIVar10 = (ILiveLinkClient *)0x0;
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar3) {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    pIVar10 = (ILiveLinkClient *)(lVar5 + -8);
    if (lVar5 == 0) {
      pIVar10 = (ILiveLinkClient *)0x0;
    }
  }
  this->LiveLinkClient_AnyThread = pIVar10;
  pUVar7 = (this->RetargetAsset).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = ULiveLinkRetargetAsset::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) &&
        (pUVar7 = (this->RetargetAsset).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) &&
       ((pUVar7->ClassFlags & CLASS_Abstract) == CLASS_None)) goto LAB_14cfc5686;
  }
  pUVar7 = ULiveLinkRemapAsset::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->RetargetAsset).Class.field0_0x0.DebugPtr = pUVar7;
LAB_14cfc5686:
  pUVar1 = (this->CurrentRetargetAsset).field0_0x0.DebugPtr;
  if ((pUVar1 == (ULiveLinkRetargetAsset *)0x0) || (pUVar7 != *(UClass **)&pUVar1->field_0x10)) {
    local_b8 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = ULiveLinkRetargetAsset::StaticClass();
    CheckIsClassChildOf_Internal(pUVar6,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_NoFlags;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = param_1;
    pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    (this->CurrentRetargetAsset).field0_0x0.DebugPtr = (ULiveLinkRetargetAsset *)pUVar8;
    (**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8);
  }
  return;
}

// Serialize @ 14cfc5900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FAnimNode_LiveLinkPose::Serialize(FAnimNode_LiveLinkPose *this,FArchive *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  UPackage *pUVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FLiveLinkCustomVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_LiveLinkAnimationCore();
    Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose,(UObject *)pUVar3,
                         L"AnimNode_LiveLinkPose");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton;
  if ((param_1->field_0x28 & 5) != 0) {
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FAnimNode_LiveLinkPose.OuterSingleton)->
                        _padding_ + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
    FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1c0 = 0;
    local_1c8 = 0;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar4,this,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  }
  return true;
}

// Update_AnyThread @ 14cfc5a80

void __thiscall
FAnimNode_LiveLinkPose::Update_AnyThread
          (FAnimNode_LiveLinkPose *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  FPoseLinkBase::Update((FPoseLinkBase *)&this->InputPose,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  this->CachedDeltaTime = param_1->DeltaTime + this->CachedDeltaTime;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"SubjectName",&(this->LiveLinkSubjectName).Name);
  return;
}

