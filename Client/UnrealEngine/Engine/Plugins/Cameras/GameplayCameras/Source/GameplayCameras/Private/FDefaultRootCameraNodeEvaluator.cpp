// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 21

// BuildBlendStackEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator> @ 14d57b700

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPersistentBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::
BuildBlendStackEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
          (FDefaultRootCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1,
          UBlendStackCameraNode *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FPersistentBlendStackCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FPersistentBlendStackCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,(UCameraNode *)param_2);
  if (pFVar4 == (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    pFVar4 = (FPersistentBlendStackCameraNodeEvaluator *)0x0;
  }
  else {
    cVar2 = (**(code **)(pFVar4->_padding_ + 8))
                      (pFVar4,&FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID);
    if (cVar2 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPersistentBlendStackCameraNodeEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::Cameras::FDefaultRootCameraNodeEvaluator>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar4->_padding_,(FDefaultRootCameraNodeEvaluator *)&stack0x00000020,
             (pmf_998aae1b)this);
  return pFVar4;
}

// BuildBlendStackEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator> @ 14d57b790

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FTransientBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::
BuildBlendStackEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>
          (FDefaultRootCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1,
          UBlendStackCameraNode *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FTransientBlendStackCameraNodeEvaluator *pFVar4;
  
  pFVar4 = (FTransientBlendStackCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,(UCameraNode *)param_2);
  if (pFVar4 == (FTransientBlendStackCameraNodeEvaluator *)0x0) {
    pFVar4 = (FTransientBlendStackCameraNodeEvaluator *)0x0;
  }
  else {
    cVar2 = (**(code **)(pFVar4->_padding_ + 8))
                      (pFVar4,&FTransientBlendStackCameraNodeEvaluator::PrivateTypeID);
    if (cVar2 == '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransientBlendStackCameraNodeEvaluator *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::Cameras::FDefaultRootCameraNodeEvaluator>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar4->_padding_,(FDefaultRootCameraNodeEvaluator *)&stack0x00000020,
             (pmf_998aae1b)this);
  return pFVar4;
}

// FDefaultRootCameraNodeEvaluator @ 14d58e7c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDefaultRootCameraNodeEvaluator * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::FDefaultRootCameraNodeEvaluator
          (FDefaultRootCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRootCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = 0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
            ((FCameraNodeEvaluationResult *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDefaultRootCameraNodeEvaluator_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  (this->ParameterSetterService).Object = (FCameraParameterSetterService *)0x0;
  (this->ParameterSetterService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// GetTypeID @ 14d5abc10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::GetTypeID(FDefaultRootCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4840

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::IsKindOf
          (FDefaultRootCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnActivateCameraRig @ 14d5b76f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnActivateCameraRig
          (FDefaultRootCameraNodeEvaluator *this,FActivateCameraRigParams *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FCameraRigInstanceID FVar4;
  TReferenceControllerBase<1> *pTVar5;
  FPersistentBlendStackCameraNodeEvaluator *this_00;
  longlong in_R8;
  undefined4 local_res18;
  undefined4 local_res20;
  
  cVar1 = *(char *)(in_R8 + 0x20);
  if (cVar1 == '\x02') {
    if (*(int *)(in_R8 + 0x24) != 0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_843412640700039059>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\DefaultRootCameraNode.cpp"
                         ,0x6d,"Params.OrderKey == 0");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FCameraRigInstanceID)(*pcVar2)();
        return FVar4;
      }
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(in_R8 + 8);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(in_R8 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)(in_R8 + 0x10));
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(in_R8 + 0x18) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)(in_R8 + 0x18));
    }
    FTransientBlendStackCameraNodeEvaluator::Push
              (this->MainLayer,(FBlendStackCameraPushParams *)&local_res18);
    *(undefined4 *)&(param_1->EvaluationContext).Object = local_res18;
    *(undefined1 *)((longlong)&(param_1->EvaluationContext).Object + 4) = 2;
LAB_14d5b7914:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    if (cVar1 == '\x01') {
      this_00 = this->BaseLayer;
LAB_14d5b7824:
      if (this_00 != (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
        pTVar5 = *(TReferenceControllerBase<1> **)(in_R8 + 8);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(in_R8 + 0x10) != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)(in_R8 + 0x10));
        }
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(in_R8 + 0x18) != (UObject *)0x0)) {
          GC::MarkAsReachable(*(UObject **)(in_R8 + 0x18));
        }
        FPersistentBlendStackCameraNodeEvaluator::Insert
                  (this_00,(FBlendStackCameraInsertParams *)&local_res20);
        *(undefined4 *)&(param_1->EvaluationContext).Object = local_res20;
        *(undefined1 *)((longlong)&(param_1->EvaluationContext).Object + 4) =
             *(undefined1 *)(in_R8 + 0x20);
        goto LAB_14d5b7914;
      }
    }
    else {
      if (cVar1 == '\x03') {
        this_00 = this->GlobalLayer;
        goto LAB_14d5b7824;
      }
      if (cVar1 == '\x04') {
        this_00 = this->VisualLayer;
        goto LAB_14d5b7824;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_843412640700039034>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\DefaultRootCameraNode.cpp"
                       ,0x86,"TargetLayer");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FCameraRigInstanceID)(*pcVar2)();
      return FVar4;
    }
    *(undefined4 *)&(param_1->EvaluationContext).Object = 0xffffffff;
    *(undefined1 *)((longlong)&(param_1->EvaluationContext).Object + 4) = 0;
  }
  return (FCameraRigInstanceID)param_1;
}

// OnBlendStackEvent @ 14d5b7c60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnBlendStackEvent
          (FDefaultRootCameraNodeEvaluator *this,FBlendStackCameraRigEvent *param_1)

{
  UCameraRigAsset *pUVar1;
  UCameraRigTransition *pUVar2;
  FTransientBlendStackCameraNodeEvaluator *pFVar3;
  FRootCameraNodeCameraRigEvent local_48;
  
  if ((param_1->EventType == Pushed) || (param_1->EventType == Popped)) {
    local_48.CameraRigInfo.InstanceID = (param_1->CameraRigInfo).InstanceID;
    local_48.CameraRigInfo.EvaluationContext.Object =
         (param_1->CameraRigInfo).EvaluationContext.Object;
    local_48.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_1->CameraRigInfo).EvaluationContext.SharedReferenceCount.ReferenceController;
    local_48.EventType = Activated;
    local_48.EventLayer = Main;
    if (local_48.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController)
                 ->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->CameraRigInfo).CameraRig.field0_0x0.DebugPtr,
       pUVar1 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_48.CameraRigInfo.CameraRig.field0_0x0 = (param_1->CameraRigInfo).CameraRig.field0_0x0;
    local_48.CameraRigInfo.LastResult = (param_1->CameraRigInfo).LastResult;
    local_48.CameraRigInfo.RootEvaluator = (param_1->CameraRigInfo).RootEvaluator;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->Transition).field0_0x0.DebugPtr, pUVar2 != (UCameraRigTransition *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_48.Transition.field0_0x0 = (param_1->Transition).field0_0x0;
    if ((param_1->EventType != Pushed) && (param_1->EventType == Popped)) {
      local_48.EventType = Deactivated;
    }
    pFVar3 = (FTransientBlendStackCameraNodeEvaluator *)param_1->BlendStackEvaluator;
    if (pFVar3 == (FTransientBlendStackCameraNodeEvaluator *)this->BaseLayer) {
      local_48.EventLayer = Base;
    }
    else if (pFVar3 != this->MainLayer) {
      if (pFVar3 == (FTransientBlendStackCameraNodeEvaluator *)this->GlobalLayer) {
        local_48.EventLayer = Global;
      }
      else if (pFVar3 == (FTransientBlendStackCameraNodeEvaluator *)this->VisualLayer) {
        local_48.EventLayer = Visual;
      }
    }
    FRootCameraNodeEvaluator::BroadcastCameraRigEvent((FRootCameraNodeEvaluator *)this,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.CameraRigInfo.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnBuild @ 14d5b7f20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnBuild
          (FDefaultRootCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  FPersistentBlendStackCameraNodeEvaluator *pFVar5;
  FTransientBlendStackCameraNodeEvaluator *pFVar6;
  longlong lVar7;
  
  if (this->_padding_ != 0) {
    pUVar4 = UDefaultRootCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      lVar7 = this->_padding_;
      goto LAB_14d5b7f56;
    }
  }
  lVar7 = 0;
LAB_14d5b7f56:
  pFVar5 = BuildBlendStackEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
                     (this,param_1,*(UBlendStackCameraNode **)(lVar7 + 0x38));
  this->BaseLayer = pFVar5;
  pFVar6 = (FTransientBlendStackCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar7 + 0x40));
  if (pFVar6 == (FTransientBlendStackCameraNodeEvaluator *)0x0) {
    pFVar6 = (FTransientBlendStackCameraNodeEvaluator *)0x0;
  }
  else {
    cVar3 = (**(code **)(pFVar6->_padding_ + 8))
                      (pFVar6,&FTransientBlendStackCameraNodeEvaluator::PrivateTypeID);
    if (cVar3 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::Cameras::FDefaultRootCameraNodeEvaluator>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar6->_padding_,(FDefaultRootCameraNodeEvaluator *)&stack0x00000008,
             (pmf_998aae1b)this);
  this->MainLayer = pFVar6;
  pFVar5 = (FPersistentBlendStackCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar7 + 0x48));
  if (pFVar5 == (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    pFVar5 = (FPersistentBlendStackCameraNodeEvaluator *)0x0;
  }
  else {
    cVar3 = (**(code **)(pFVar5->_padding_ + 8))
                      (pFVar5,&FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID);
    if (cVar3 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::Cameras::FDefaultRootCameraNodeEvaluator>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->_padding_,(FDefaultRootCameraNodeEvaluator *)&stack0x00000018,
             (pmf_998aae1b)this);
  this->GlobalLayer = pFVar5;
  pFVar5 = (FPersistentBlendStackCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar7 + 0x50));
  if (pFVar5 == (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    pFVar5 = (FPersistentBlendStackCameraNodeEvaluator *)0x0;
  }
  else {
    cVar3 = (**(code **)(pFVar5->_padding_ + 8))
                      (pFVar5,&FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID);
    if (cVar3 == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::Cameras::FDefaultRootCameraNodeEvaluator>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar5->_padding_,(FDefaultRootCameraNodeEvaluator *)&stack0x00000020,
             (pmf_998aae1b)this);
  this->VisualLayer = pFVar5;
  return;
}

// OnBuildDebugBlocks @ 14d5b8480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnBuildDebugBlocks
          (FDefaultRootCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  float fVar1;
  FBlendStacksCameraDebugBlock *this_01;
  FBlendStackCameraDebugBlock *pFVar2;
  FLinearColor_u_0 local_58;
  FLinearColor_u_0 local_48;
  FString local_38 [2];
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      (this_00,0x38,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  (this_01->BlendStackNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->BlendStackNames).ArrayNum = 0;
  (this_01->BlendStackNames).ArrayMax = 0;
  this_01->_padding_ = (longlong)&___7FBlendStacksCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            (this_00,(FCameraDebugBlock *)this_01);
  fVar1 = __real_3b808081;
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightGrey.field0_0x0._s_0.B];
  local_58._s_0.A = (float)FColorList::LightGrey.field0_0x0._3_1_ * __real_3b808081;
  local_48._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.R];
  local_48._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.G];
  local_48._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Grey.field0_0x0._s_0.B];
  local_48._s_0.A = (float)FColorList::Grey.field0_0x0._3_1_ * __real_3b808081;
  pFVar2 = FBlendStackCameraNodeEvaluator::BuildDetailedDebugBlock
                     ((FBlendStackCameraNodeEvaluator *)this->BaseLayer,param_1,
                      (FLinearColor *)&local_48._s_0,(FLinearColor *)&local_58._s_0,param_2);
  ::FString::FString(local_38,L"Base Layer");
  FBlendStacksCameraDebugBlock::AddBlendStack(this_01,local_38,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  local_48._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.R];
  local_48._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.G];
  local_48._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.B];
  local_48._s_0.A = (float)FColorList::SlateBlue.field0_0x0._3_1_ * fVar1;
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::LightBlue.field0_0x0._s_0.B];
  local_58._s_0.A = (float)FColorList::LightBlue.field0_0x0._3_1_ * fVar1;
  pFVar2 = FBlendStackCameraNodeEvaluator::BuildDetailedDebugBlock
                     ((FBlendStackCameraNodeEvaluator *)this->MainLayer,param_1,
                      (FLinearColor *)&local_58._s_0,(FLinearColor *)&local_48._s_0,param_2);
  ::FString::FString(local_38,L"Main Layer");
  FBlendStacksCameraDebugBlock::AddBlendStack(this_01,local_38,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  local_48._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.R];
  local_48._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.G];
  local_48._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::OrangeRed.field0_0x0._s_0.B];
  local_48._s_0.A = (float)FColorList::OrangeRed.field0_0x0._3_1_ * fVar1;
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Orange.field0_0x0._s_0.B];
  local_58._s_0.A = (float)FColorList::Orange.field0_0x0._3_1_ * fVar1;
  pFVar2 = FBlendStackCameraNodeEvaluator::BuildDetailedDebugBlock
                     ((FBlendStackCameraNodeEvaluator *)this->GlobalLayer,param_1,
                      (FLinearColor *)&local_58._s_0,(FLinearColor *)&local_48._s_0,param_2);
  ::FString::FString(local_38,L"Global Layer");
  FBlendStacksCameraDebugBlock::AddBlendStack(this_01,local_38,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  local_48._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::NeonPink.field0_0x0._s_0.R];
  local_48._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::NeonPink.field0_0x0._s_0.G];
  local_48._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::NeonPink.field0_0x0._s_0.B];
  local_48._s_0.A = (float)FColorList::NeonPink.field0_0x0._3_1_ * fVar1;
  local_58._s_0.R = FLinearColor::sRGBToLinearTable[FColorList::Pink.field0_0x0._s_0.R];
  local_58._s_0.G = FLinearColor::sRGBToLinearTable[FColorList::Pink.field0_0x0._s_0.G];
  local_58._s_0.B = FLinearColor::sRGBToLinearTable[FColorList::Pink.field0_0x0._s_0.B];
  local_58._s_0.A = (float)FColorList::Pink.field0_0x0._3_1_ * fVar1;
  pFVar2 = FBlendStackCameraNodeEvaluator::BuildDetailedDebugBlock
                     ((FBlendStackCameraNodeEvaluator *)this->VisualLayer,param_1,
                      (FLinearColor *)&local_58._s_0,(FLinearColor *)&local_48._s_0,param_2);
  ::FString::FString(local_38,L"Visual Layer");
  FBlendStacksCameraDebugBlock::AddBlendStack(this_01,local_38,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)param_2->RootBlock,(FCameraDebugBlock *)this_01);
  return;
}

// OnBuildSingleCameraRigHierarchy @ 14d5b8b60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnBuildSingleCameraRigHierarchy
          (FDefaultRootCameraNodeEvaluator *this,FSingleCameraRigHierarchyBuildParams *param_1,
          FCameraNodeEvaluatorHierarchy *param_2)

{
  longlong lVar1;
  FPersistentBlendStackCameraNodeEvaluator *pFVar2;
  FCameraNodeEvaluator *pFVar3;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10;
  FName *local_res18;
  
  pFVar2 = this->BaseLayer;
  (param_2->FlattenedHierarchy).ArrayNum = 0;
  if ((param_2->FlattenedHierarchy).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)param_2,0,&(param_2->FlattenedHierarchy).ArrayMax);
  }
  FCameraNodeEvaluatorHierarchy::Append(param_2,(FCameraNodeEvaluator *)pFVar2);
  local_res10 = param_1->CameraRigRangeName;
  pFVar3 = (param_1->CameraRigInfo).RootEvaluator;
  local_res18 = &local_res10;
  TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>,TDefaultMapHashableKeyFuncs<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange,0>,FDefaultSetAllocator>
              *)&param_2->TaggedRanges,&local_res8,(bool *)&local_res18);
  lVar1 = *(longlong *)&param_2->TaggedRanges + (longlong)(int)local_res8.Key * 0x18;
  *(int *)(lVar1 + 8) = (param_2->FlattenedHierarchy).ArrayNum;
  FCameraNodeEvaluatorHierarchy::Append(param_2,pFVar3);
  *(int *)(lVar1 + 0xc) = (param_2->FlattenedHierarchy).ArrayNum;
  FCameraNodeEvaluatorHierarchy::Append(param_2,(FCameraNodeEvaluator *)this->GlobalLayer);
  return;
}

// OnDeactivateAllCameraRigs @ 14d5b9320

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnDeactivateAllCameraRigs
          (FDefaultRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,bool param_2)

{
  int iVar1;
  FPersistentBlendStackCameraNodeEvaluator *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTransientBlendStackCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  FCameraRigEntry *pFVar8;
  FCameraEvaluationContext *pFVar9;
  FCameraRigEntry *pFVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  bool local_res18;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_48;
  
  local_48.Object = param_1->Object;
  pFVar2 = this->BaseLayer;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18 = param_2;
  FPersistentBlendStackCameraNodeEvaluator::RemoveAll(pFVar2,&local_48,param_2);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = this->MainLayer;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = (int)this_00->_padding_;
  pFVar8 = (FCameraRigEntry *)
           (((TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>
              *)&this_00->_padding_)->AllocatorInstance).Data;
  pFVar10 = pFVar8 + iVar1;
  do {
    if ((int)this_00->_padding_ != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      bVar11 = local_res18;
      local_48.Object = param_1->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      pFVar2 = this->GlobalLayer;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FPersistentBlendStackCameraNodeEvaluator::RemoveAll(pFVar2,&local_48,local_res18);
      local_48.Object = param_1->Object;
      pFVar2 = this->VisualLayer;
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FPersistentBlendStackCameraNodeEvaluator::RemoveAll(pFVar2,&local_48,bVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if (!(pFVar8->Flags).bIsFrozen) {
      pTVar7 = (pFVar8->EvaluationContext).WeakReferenceCount.ReferenceController;
      pFVar9 = (FCameraEvaluationContext *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar7->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar7 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14d5b93e0;
          }
          LOCK();
          aVar6 = pTVar7->SharedReferenceCount;
          bVar11 = aVar5 == aVar6;
          if (bVar11) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar11);
        pFVar9 = (pFVar8->EvaluationContext).Object;
      }
LAB_14d5b93e0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pFVar4 == pFVar9) {
        FBlendStackCameraNodeEvaluator::FreezeEntry
                  ((FBlendStackCameraNodeEvaluator *)this_00,pFVar8);
      }
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// OnDeactivateCameraRig @ 14d5b94b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnDeactivateCameraRig
          (FDefaultRootCameraNodeEvaluator *this,FDeactivateCameraRigParams *param_1)

{
  char cVar1;
  FBlendStackEntryID FVar2;
  int iVar3;
  UCameraRigAsset *pUVar4;
  FCameraEvaluationContext *pFVar5;
  FTransientBlendStackCameraNodeEvaluator *this_00;
  FCameraEvaluationContext *pFVar6;
  UCameraRigTransition *pUVar7;
  code *pcVar8;
  int iVar9;
  TObjectPtr<UCameraRigAsset_const_>_u_0 TVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FCameraEvaluationContext *pFVar15;
  FCameraRigEntry *pFVar16;
  uint uVar17;
  FCameraEvaluationContext *pFVar18;
  FCameraEvaluationContext *pFVar19;
  FPersistentBlendStackCameraNodeEvaluator *this_01;
  TReferenceControllerBase<1> *pTVar20;
  FCameraRigEntry *pFVar21;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_res10;
  TReferenceControllerBase<1> *local_res18;
  FBlendStackCameraRemoveParams local_68;
  
  FVar2.Value = (param_1->InstanceID).Value;
  lVar14 = 4;
  if (FVar2.Value == 0xffffffff) {
    lVar14 = 0x20;
  }
  cVar1 = *(char *)((longlong)&(param_1->InstanceID).Value + lVar14);
  if (cVar1 == '\x02') {
    pFVar18 = (FCameraEvaluationContext *)0x0;
    if ((GC::GIsIncrementalReachabilityPending) &&
       (pUVar4 = (param_1->CameraRig).field0_0x0.DebugPtr, pUVar4 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    pTVar20 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    local_res10 = (TObjectPtr<UCameraRigAsset_const_>_u_0)(param_1->CameraRig).field0_0x0.DebugPtr;
    pFVar5 = (param_1->EvaluationContext).Object;
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res18 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TVar10 = local_res10;
    this_00 = this->MainLayer;
    if (FVar2.Value == 0xffffffff) {
      pFVar16 = (FCameraRigEntry *)
                (((TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>
                   *)&this_00->_padding_)->AllocatorInstance).Data;
      iVar3 = (int)this_00->_padding_;
      pFVar21 = pFVar16 + iVar3;
      while( true ) {
        if ((int)this_00->_padding_ != iVar3) {
          `TCheckedPointerIterator<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_res10);
        }
        pTVar20 = local_res18;
        if (pFVar16 == pFVar21) break;
        if ((!(pFVar16->Flags).bIsFrozen) &&
           ((pFVar16->CameraRig).field0_0x0.DebugPtr == TVar10.DebugPtr)) {
          pFVar6 = (FCameraEvaluationContext *)
                   (pFVar16->EvaluationContext).WeakReferenceCount.ReferenceController;
          pFVar15 = pFVar6;
          pFVar19 = pFVar18;
          if (pFVar6 != (FCameraEvaluationContext *)0x0) {
            iVar9 = *(int *)&pFVar6->field_0x8;
            do {
              pFVar15 = pFVar18;
              if (iVar9 == 0) goto LAB_14d5b9661;
              LOCK();
              iVar13 = *(int *)&pFVar6->field_0x8;
              bVar11 = iVar9 == iVar13;
              if (bVar11) {
                *(int *)&pFVar6->field_0x8 = iVar9 + 1;
                iVar13 = iVar9;
              }
              UNLOCK();
              iVar9 = iVar13;
            } while (!bVar11);
            pFVar15 = pFVar6;
            pFVar19 = (pFVar16->EvaluationContext).Object;
          }
LAB_14d5b9661:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar15);
          if (pFVar5 == pFVar19) {
            FBlendStackCameraNodeEvaluator::FreezeEntry
                      ((FBlendStackCameraNodeEvaluator *)this_00,pFVar16);
          }
        }
        pFVar16 = pFVar16 + 1;
      }
    }
    else {
      uVar12 = FBlendStackCameraNodeEvaluator::IndexOfEntry
                         ((FBlendStackCameraNodeEvaluator *)this_00,FVar2);
      if (uVar12 != 0xffffffff) {
        uVar17 = 0;
        if ((int)uVar12 < (int)this_00->_padding_) {
          uVar17 = ~uVar12 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FBlendStackCameraNodeEvaluator::FreezeEntry
                  ((FBlendStackCameraNodeEvaluator *)this_00,
                   (FCameraRigEntry *)
                   ((((TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>
                       *)&this_00->_padding_)->AllocatorInstance).Data +
                   (longlong)(int)uVar12 * 0x14c0));
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    return;
  }
  if (cVar1 == '\x01') {
    this_01 = this->BaseLayer;
  }
  else if (cVar1 == '\x03') {
    this_01 = this->GlobalLayer;
  }
  else {
    if (cVar1 != '\x04') goto LAB_14d5b96f7;
    this_01 = this->VisualLayer;
  }
  if (this_01 != (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    local_68.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    local_68.EvaluationContext.Object = (param_1->EvaluationContext).Object;
    if (local_68.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.EntryID.Value = FVar2.Value;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_1->CameraRig).field0_0x0.DebugPtr, pUVar4 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_68.CameraRig.field0_0x0 = (param_1->CameraRig).field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->TransitionOverride).field0_0x0.DebugPtr,
       pUVar7 != (UCameraRigTransition *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_68.TransitionOverride.field0_0x0 = (param_1->TransitionOverride).field0_0x0;
    local_68.bRemoveImmediately = param_1->bDeactiveImmediately;
    FPersistentBlendStackCameraNodeEvaluator::Remove(this_01,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.EvaluationContext.SharedReferenceCount.ReferenceController);
    return;
  }
LAB_14d5b96f7:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_843412640700038991>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\DefaultRootCameraNode.cpp"
                      ,0xb1,"TargetLayer");
  if (!bVar11) {
    return;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// OnExecuteOperation @ 14d5c1870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnExecuteOperation
          (FDefaultRootCameraNodeEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  FCameraNodeEvaluator::ExecuteOperation((FCameraNodeEvaluator *)this->MainLayer,param_1,param_2);
  return;
}

// OnGetActiveCameraRigInfo @ 14d5c1c90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnGetActiveCameraRigInfo
          (FDefaultRootCameraNodeEvaluator *this,FCameraRigEvaluationInfo *param_1)

{
  FCameraRigEvaluationInfo *pFVar1;
  FCameraRigEvaluationInfo local_38;
  
  pFVar1 = FBlendStackCameraNodeEvaluator::GetActiveCameraRigEvaluationInfo
                     ((FBlendStackCameraNodeEvaluator *)this->MainLayer,&local_38);
  FCameraRigEvaluationInfo::operator=(param_1,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.EvaluationContext.SharedReferenceCount.ReferenceController);
  return;
}

// OnGetBlendedParameters @ 14d5c1ce0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableTable * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnGetBlendedParameters
          (FDefaultRootCameraNodeEvaluator *this)

{
  return &this->MainLayer->PreBlendVariableTable;
}

// OnGetCameraRigInfo @ 14d5c1d10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnGetCameraRigInfo
          (FDefaultRootCameraNodeEvaluator *this,FCameraRigInstanceID param_1,
          FCameraRigEvaluationInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigEvaluationInfo *pFVar3;
  FPersistentBlendStackCameraNodeEvaluator *this_00;
  uint uVar4;
  FCameraRigEvaluationInfo local_38;
  
  uVar4 = param_1._4_4_ & 0xff;
  if (uVar4 == 1) {
    this_00 = this->BaseLayer;
  }
  else if (uVar4 == 3) {
    this_00 = this->GlobalLayer;
  }
  else {
    if (uVar4 != 4) goto LAB_14d5c1d54;
    this_00 = this->VisualLayer;
  }
  if (this_00 != (FPersistentBlendStackCameraNodeEvaluator *)0x0) {
    pFVar3 = FBlendStackCameraNodeEvaluator::GetCameraRigEvaluationInfo
                       ((FBlendStackCameraNodeEvaluator *)this_00,&local_38,
                        (FBlendStackEntryID)param_1.Value);
    FCameraRigEvaluationInfo::operator=(param_2,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.EvaluationContext.SharedReferenceCount.ReferenceController);
    return;
  }
LAB_14d5c1d54:
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_843412640700038945>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\DefaultRootCameraNode.cpp"
                     ,0xdf,"TargetLayer");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnGetChildren @ 14d5c1e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnGetChildren
          (FDefaultRootCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FPersistentBlendStackCameraNodeEvaluator *pFVar1;
  FTransientBlendStackCameraNodeEvaluator *pFVar2;
  FPersistentBlendStackCameraNodeEvaluator *pFVar3;
  FPersistentBlendStackCameraNodeEvaluator *pFVar4;
  code *pcVar5;
  bool bVar6;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar7;
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> FVar8;
  ulonglong uVar9;
  undefined1 auStackY_a8 [32];
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> local_48;
  undefined4 local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar1 = this->BaseLayer;
  pFVar2 = this->MainLayer;
  pFVar3 = this->GlobalLayer;
  pFVar4 = this->VisualLayer;
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  local_48.SecondaryData = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0;
  local_20 = 4;
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
            (8,8,4,0,&local_48,4,&local_1c);
  FVar8 = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)&local_48;
  if (local_48.SecondaryData != (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    FVar8 = local_48.SecondaryData;
  }
  *(FPersistentBlendStackCameraNodeEvaluator **)FVar8 = pFVar1;
  *(FTransientBlendStackCameraNodeEvaluator **)((longlong)FVar8 + 8) = pFVar2;
  *(FPersistentBlendStackCameraNodeEvaluator **)((longlong)FVar8 + 0x10) = pFVar3;
  *(FPersistentBlendStackCameraNodeEvaluator **)((longlong)FVar8 + 0x18) = pFVar4;
  uVar9 = (ulonglong)(__return_storage_ptr__->Storage).TypeIndex;
  if (1 < uVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar5)();
      return pTVar7;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] !=
      Core::Private::TDestructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::
      Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(__return_storage_ptr__);
  }
  (__return_storage_ptr__->Storage)._padding_ = 0;
  if (local_48.SecondaryData == (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    (__return_storage_ptr__->Storage)._padding_ = local_48.InlineData._0_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_48.InlineData._8_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_48.InlineData._16_8_;
    (__return_storage_ptr__->Storage)._padding_ = local_48.InlineData._24_8_;
  }
  (__return_storage_ptr__->Storage)._padding_ = (longlong)local_48.SecondaryData;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = local_20;
  *(int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4) = local_1c;
  (__return_storage_ptr__->Storage).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// OnHasAnyRunningCameraRig @ 14d5c1fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnHasAnyRunningCameraRig
          (FDefaultRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  FTransientBlendStackCameraNodeEvaluator *this_00;
  bool bVar1;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  this_00 = this->MainLayer;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FBlendStackCameraNodeEvaluator::HasAnyRunningCameraRig
                    ((FBlendStackCameraNodeEvaluator *)this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// OnInitialize @ 14d5c2390

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnInitialize
          (FDefaultRootCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> *pTVar1;
  TSharedPtr<UE::Cameras::FCameraParameterSetterService,1> local_18;
  
  this->_padding_ = (longlong)param_1->Evaluator;
  pTVar1 = FCameraSystemEvaluator::FindEvaluationService<UE::Cameras::FCameraParameterSetterService>
                     (param_1->Evaluator,&local_18);
  if (&this->ParameterSetterService != pTVar1) {
    (this->ParameterSetterService).Object = pTVar1->Object;
    pTVar1->Object = (FCameraParameterSetterService *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParameterSetterService).SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRun @ 14d5c2a50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnRun
          (FDefaultRootCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->BaseLayer,param_1,param_2);
  FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->MainLayer,param_1,param_2);
  FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->GlobalLayer,param_1,param_2);
  FCameraNodeEvaluationResult::OverrideAll
            ((FCameraNodeEvaluationResult *)&this->_padding_,param_2,true);
  if ((param_1->EvaluationType != IK) && (param_1->EvaluationType != ViewRotationPreview)) {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->VisualLayer,param_1,param_2);
  }
  return;
}

// OnRunSingleCameraRig @ 14d5c3180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::OnRunSingleCameraRig
          (FDefaultRootCameraNodeEvaluator *this,FSingleCameraRigEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraVariableTable *this_00;
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCameraEvaluationContext *pFVar3;
  FCameraParameterSetterService *this_01;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  bool bVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  FCameraNodeEvaluator *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  FDefaultRootCameraNodeEvaluator *local_d0;
  FCameraNodeEvaluator *local_c8;
  FCameraBlendedParameterUpdateResult local_c0;
  FCameraBlendedParameterUpdateParams local_b8;
  undefined1 local_a8 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0 = this;
  if (((param_1->EvaluationParams).EvaluationContext.Object !=
       (param_1->CameraRigInfo).EvaluationContext.Object) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_843412640700038923>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\DefaultRootCameraNode.cpp"
                         ,0xf5,
                         "Params.EvaluationParams.EvaluationContext == Params.CameraRigInfo.EvaluationContext"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (param_1->EvaluationParams).EvaluationContext.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->EvaluationParams).EvaluationContext.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCameraNodeEvaluator::Run
            ((FCameraNodeEvaluator *)local_d0->BaseLayer,&param_1->EvaluationParams,param_2);
  pFVar12 = (param_1->CameraRigInfo).RootEvaluator;
  local_c8 = pFVar12;
  if ((pFVar3 == (FCameraEvaluationContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &param_2->VariableTable;
  FCameraVariableTable::InternalOverride
            (this_00,&(pFVar3->InitialResult).VariableTable,None,(FCameraVariableTableFlags *)0x0,
             false,(FCameraVariableTableFlags *)0x0);
  FCameraContextDataTable::OverrideAll
            (&param_2->ContextDataTable,&(pFVar3->InitialResult).ContextDataTable);
  if ((param_1->EvaluationParams).bIsActiveCameraRig != false) {
    if ((pFVar3 == (FCameraEvaluationContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(pFVar3->ConditionalResults).field_0x8 !=
        *(int *)&(pFVar3->ConditionalResults).field_0x34) {
      piVar8 = *(int **)&(pFVar3->ConditionalResults).field_0x40;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)&(pFVar3->ConditionalResults).field_0x38;
      }
      iVar10 = *piVar8;
      if (iVar10 != -1) {
        do {
          pcVar9 = (char *)((longlong)iVar10 * 0xa20 + *(longlong *)&pFVar3->ConditionalResults);
          if (*pcVar9 == '\0') {
            pcVar11 = pcVar9 + 0x10;
            if (pcVar9 == (char *)0x0) {
              pcVar11 = (char *)0x0;
            }
            pFVar12 = local_c8;
            if (pcVar11 != (char *)0x0) {
              FCameraVariableTable::InternalOverride
                        (this_00,(FCameraVariableTable *)(pcVar11 + 0x88),None,
                         (FCameraVariableTableFlags *)0x0,false,(FCameraVariableTableFlags *)0x0);
              FCameraContextDataTable::OverrideAll
                        (&param_2->ContextDataTable,(FCameraContextDataTable *)(pcVar11 + 0xf8));
              pFVar12 = local_c8;
            }
            break;
          }
          iVar10 = *(int *)(pcVar9 + 0xa10);
        } while (iVar10 != -1);
      }
    }
  }
  this_01 = (local_d0->ParameterSetterService).Object;
  if (this_01 != (FCameraParameterSetterService *)0x0) {
    FCameraParameterSetterService::ApplyCameraVariableSetters(this_01,this_00);
  }
  local_b8.LastCameraPose = &((param_1->CameraRigInfo).LastResult)->CameraPose;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_c0.VariableTable = this_00;
  local_b8.EvaluationParams = &param_1->EvaluationParams;
  FCameraNodeEvaluatorHierarchy::Append((FCameraNodeEvaluatorHierarchy *)local_a8,pFVar12);
  uVar6 = local_a8._8_4_;
  pFVar1 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)(int)local_a8._8_4_ * 8);
  pFVar13 = (FScriptContainerElement *)local_a8._0_8_;
  while( true ) {
    if (local_a8._8_4_ != uVar6) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraNodeEvaluator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    if (pFVar13 == pFVar1) break;
    if (((*(FCameraNodeEvaluator **)pFVar13)->PrivateFlags & NeedsParameterUpdate) != None) {
      FCameraNodeEvaluator::UpdateParameters(*(FCameraNodeEvaluator **)pFVar13,&local_b8,&local_c0);
    }
    pFVar13 = pFVar13 + 8;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar5 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  if ((pFVar3 == (FCameraEvaluationContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FCameraPose::OverrideChanged(&param_2->CameraPose,&(pFVar3->InitialResult).CameraPose);
  if ((param_2->bIsCameraCut == false) && ((pFVar3->InitialResult).bIsCameraCut == false)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  param_2->bIsCameraCut = bVar7;
  param_2->bIsValid = true;
  if (local_c8 != (FCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Run(local_c8,&param_1->EvaluationParams,param_2);
  }
  FCameraNodeEvaluator::Run
            ((FCameraNodeEvaluator *)local_d0->GlobalLayer,&param_1->EvaluationParams,param_2);
  param_2->bIsValid = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

