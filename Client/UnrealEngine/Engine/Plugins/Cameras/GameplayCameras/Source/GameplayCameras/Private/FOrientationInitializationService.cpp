// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// GetTypeID @ 14d5abc20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FOrientationInitializationService::GetTypeID(FOrientationInitializationService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FOrientationInitializationService::IsKindOf
          (FOrientationInitializationService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FOrientationInitializationService>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
      FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d64b500

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::OnInitialize
          (FOrientationInitializationService *this,FCameraEvaluationServiceInitializeParams *param_1
          )

{
  FCameraEvaluationService::SetEvaluationServiceFlags
            ((FCameraEvaluationService *)this,NeedsRootCameraNodeEvents|NeedsPostUpdate);
  this->Evaluator = param_1->Evaluator;
  return;
}

// OnPostUpdate @ 14d64b540

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::OnPostUpdate
          (FOrientationInitializationService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  FCameraEvaluationContextStack::GetActiveContext(&param_1->Evaluator->ContextStack,&local_18);
  this->bHasPreviousContextTransform = false;
  if (local_18.Object != (FCameraEvaluationContext *)0x0) {
    if ((local_18.Object == (FCameraEvaluationContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar8 = ((local_18.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
    (this->PreviousContextLocation).field0_0x0._s_0.X =
         ((local_18.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
    (this->PreviousContextLocation).field0_0x0._s_0.Y = dVar8;
    (this->PreviousContextLocation).field0_0x0._s_0.Z =
         ((local_18.Object)->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
    uVar5 = *(undefined4 *)
             ((longlong)&((local_18.Object)->InitialResult).CameraPose.Rotation.Pitch + 4);
    uVar6 = *(undefined4 *)&((local_18.Object)->InitialResult).CameraPose.Rotation.Yaw;
    uVar7 = *(undefined4 *)
             ((longlong)&((local_18.Object)->InitialResult).CameraPose.Rotation.Yaw + 4);
    *(undefined4 *)&(this->PreviousContextRotation).Pitch =
         *(undefined4 *)&((local_18.Object)->InitialResult).CameraPose.Rotation.Pitch;
    *(undefined4 *)((longlong)&(this->PreviousContextRotation).Pitch + 4) = uVar5;
    *(undefined4 *)&(this->PreviousContextRotation).Yaw = uVar6;
    *(undefined4 *)((longlong)&(this->PreviousContextRotation).Yaw + 4) = uVar7;
    (this->PreviousContextRotation).Roll =
         ((local_18.Object)->InitialResult).CameraPose.Rotation.Roll;
    this->bHasPreviousContextTransform = true;
  }
  FVar9.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  (this->PreviousEvaluationContext).Object = local_18.Object;
  if (local_18.SharedReferenceCount.ReferenceController !=
      (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController) {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController =
         FVar9.ReferenceController;
  }
  if ((this->YawPitchPreservationOverride).bIsSet != false) {
    (this->YawPitchPreservationOverride).bIsSet = false;
  }
  if ((this->TargetPreservationOverride).bIsSet != false) {
    (this->TargetPreservationOverride).bIsSet = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// OnRootCameraNodeEvent @ 14d64b650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::OnRootCameraNodeEvent
          (FOrientationInitializationService *this,FRootCameraNodeCameraRigEvent *param_1)

{
  FScriptContainerElement *pFVar1;
  UCameraRigAsset *pUVar2;
  UCameraRigTransition *pUVar3;
  FCameraSystemEvaluator *pFVar4;
  FCameraEvaluationContext *pFVar5;
  int iVar6;
  FString *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  ulonglong uVar9;
  ECameraRigInitialOrientation EVar10;
  ForAnyElementType FVar11;
  TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined1 local_res10 [8];
  TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> local_58;
  TArray<UCameraRigAsset_const_*,TSizedDefaultAllocator<32>_> local_48;
  double local_38;
  
  if (param_1->EventType != Activated) {
    return;
  }
  if (param_1->EventLayer != Main) {
    return;
  }
  pUVar2 = (param_1->CameraRigInfo).CameraRig.field0_0x0.DebugPtr;
  EVar10 = None;
  if (pUVar2 != (UCameraRigAsset *)0x0) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    UCombinedCameraRigsCameraNode::GetAllCombinationCameraRigs(pUVar2,&local_58);
    iVar6 = local_58.ArrayNum;
    uVar9 = (ulonglong)local_58.ArrayNum;
    pFVar1 = local_58.AllocatorInstance.Data + uVar9 * 8;
    FVar11.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar6) {
        `TCheckedPointerIterator<UCameraRigAsset_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        uVar9 = local_58._8_8_ & 0xffffffff;
      }
      EVar10 = None;
      if ((FVar11.Data == pFVar1) ||
         (EVar10 = *(ECameraRigInitialOrientation *)(*(longlong *)FVar11.Data + 0x110),
         EVar10 != None)) break;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  pUVar3 = (param_1->Transition).field0_0x0.DebugPtr;
  if ((pUVar3 != (UCameraRigTransition *)0x0) && (pUVar3->bOverrideInitialOrientation != false)) {
    EVar10 = pUVar3->InitialOrientation;
  }
  if (EVar10 == ContextYawPitch) {
    pUVar2 = (param_1->CameraRigInfo).CameraRig.field0_0x0.DebugPtr;
    if (pUVar2 == (UCameraRigAsset *)0x0) {
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    pFVar5 = (param_1->CameraRigInfo).EvaluationContext.Object;
    if (pFVar5 == (FCameraEvaluationContext *)0x0) {
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      pFVar7 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)pUVar2,(FString *)&local_48,(UObject *)0x0);
      if ((pFVar7->Data).ArrayNum == 0) {
        pFVar8 = &::LOG_Static;
      }
      else {
        pFVar8 = &::LOG_Static;
      }
    }
    else {
      if ((pFVar5->InitialResult).bIsValid != false) {
        local_48.AllocatorInstance.Data =
             (FScriptContainerElement *)(pFVar5->InitialResult).CameraPose.Rotation.Pitch;
        local_58.AllocatorInstance.Data =
             (FScriptContainerElement *)(pFVar5->InitialResult).CameraPose.Rotation.Yaw;
        pTVar13 = &local_48;
        local_38 = (pFVar5->InitialResult).CameraPose.Rotation.Roll;
        pTVar12 = &local_58;
        goto LAB_14d64b8eb;
      }
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)pUVar2,(FString *)&local_48,(UObject *)0x0);
      pFVar8 = &::LOG_Static;
    }
    Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogCameraSystem);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  else {
    if (EVar10 != PreviousYawPitch) {
      if (EVar10 == PreviousAbsoluteTarget) {
        TryPreserveTarget(this,&param_1->CameraRigInfo,false);
        return;
      }
      if (EVar10 != PreviousRelativeTarget) {
        return;
      }
      TryPreserveTarget(this,&param_1->CameraRigInfo,true);
      return;
    }
    pFVar4 = this->Evaluator;
    if ((pFVar4->Result).bIsValid == false) {
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    if ((param_1->CameraRigInfo).CameraRig.field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
      if ((byte)LogCameraSystem._0_1_ < 2) {
        return;
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
    local_38 = (pFVar4->Result).CameraPose.Rotation.Roll;
    local_58.AllocatorInstance.Data =
         (FScriptContainerElement *)(pFVar4->Result).CameraPose.Rotation.Pitch;
    local_48.AllocatorInstance.Data =
         (FScriptContainerElement *)(pFVar4->Result).CameraPose.Rotation.Yaw;
    if ((this->YawPitchPreservationOverride).bIsSet != false) {
      local_38 = (this->YawPitchPreservationOverride).TypedValue.Roll;
      local_58.AllocatorInstance.Data =
           (FScriptContainerElement *)(this->YawPitchPreservationOverride).TypedValue.Pitch;
      local_48.AllocatorInstance.Data =
           (FScriptContainerElement *)(this->YawPitchPreservationOverride).TypedValue.Yaw;
    }
    pTVar13 = &local_58;
    pTVar12 = &local_48;
LAB_14d64b8eb:
    local_48.ArrayNum._0_1_ = 1;
    local_58.ArrayNum._0_1_ = 1;
    TryInitializeYawPitch
              (this,&param_1->CameraRigInfo,(TOptional<double> *)pTVar12,
               (TOptional<double> *)pTVar13);
  }
  return;
}

// OnBuildDebugBlocks @ 14d64b920

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::OnBuildDebugBlocks
          (FOrientationInitializationService *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int *piVar1;
  int iVar2;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar3;
  double dVar4;
  undefined8 uVar5;
  FCameraDebugBlock *pFVar6;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *_Dst;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar6 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x230,8);
  (pFVar6->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->Attachments).ArrayNum = 0;
  (pFVar6->Attachments).ArrayMax = 0;
  (pFVar6->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar6->Children).ArrayNum = 0;
  (pFVar6->Children).ArrayMax = 0;
  pFVar6[0xc].Children.ArrayNum = 0;
  pFVar6[0xc].Children.ArrayMax = 0;
  pFVar6->_padding_ = (longlong)&___7FOrientationInitializationDebugBlock_Cameras_UE__6B_;
  *(undefined4 *)&pFVar6[0xd]._padding_ = 0;
  piVar1 = (int *)((longlong)&pFVar6[0xd]._padding_ + 4);
  *piVar1 = 4;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar6[0xd].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&pFVar6[0xd].Attachments.ArrayNum = uVar5;
  pFVar6[0xd].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&pFVar6[0xd].Children.ArrayNum = 0;
  pFVar3 = (FScriptContainerElement *)(this->DebugLastEvaluatedTarget).field0_0x0._s_0.Y;
  pFVar6[1]._padding_ = (longlong)(this->DebugLastEvaluatedTarget).field0_0x0._s_0.X;
  pFVar6[1].Attachments.AllocatorInstance.Data = pFVar3;
  *(double *)&pFVar6[1].Attachments.ArrayNum = (this->DebugLastEvaluatedTarget).field0_0x0._s_0.Z;
  if (pFVar6 != (FCameraDebugBlock *)&(this->YawPitchPreservationOverride).bIsSet) {
    iVar2 = (this->LastAimDebugInfo).Iterations.ArrayNum;
    _Src = (this->LastAimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    *(int *)&pFVar6[0xd]._padding_ = iVar2;
    if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
      _Src = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&this->LastAimDebugInfo;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
              (0x70,8,iVar2,4,
               (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)&pFVar6[1].Children,
               iVar2,piVar1);
    _Dst = *(TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> **)
            &pFVar6[0xc].Children.ArrayNum;
    if (iVar2 != 0) {
      if (_Dst == (TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)0x0) {
        _Dst = &pFVar6[1].Children;
      }
      memcpy(_Dst,(void *)_Src,(longlong)iVar2 * 0x70);
    }
  }
  dVar4 = (this->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Y;
  pFVar6[0xd].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.X;
  *(double *)&pFVar6[0xd].Attachments.ArrayNum = dVar4;
  pFVar6[0xd].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Z;
  *(bool *)&pFVar6[0xd].Children.ArrayNum = (this->LastAimDebugInfo).bSucceeded;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar6);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar6);
  return;
}

// SetTargetPreservationOverride @ 14d671d50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::SetTargetPreservationOverride
          (FOrientationInitializationService *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((TOptional<UE::Math::TVector<double>_> *)param_1 != &this->TargetPreservationOverride) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->TargetPreservationOverride).TypedValue.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->TargetPreservationOverride).TypedValue.field0_0x0._s_0.Y = dVar1;
    (this->TargetPreservationOverride).TypedValue.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    (this->TargetPreservationOverride).bIsSet = true;
  }
  return;
}

// SetYawPitchPreservationOverride @ 14d671d80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::SetYawPitchPreservationOverride
          (FOrientationInitializationService *this,TRotator<double> *param_1)

{
  double dVar1;
  
  if ((TOptional<UE::Math::TRotator<double>_> *)param_1 != &this->YawPitchPreservationOverride) {
    dVar1 = param_1->Yaw;
    (this->YawPitchPreservationOverride).TypedValue.Pitch = param_1->Pitch;
    (this->YawPitchPreservationOverride).TypedValue.Yaw = dVar1;
    (this->YawPitchPreservationOverride).TypedValue.Roll = param_1->Roll;
    (this->YawPitchPreservationOverride).bIsSet = true;
  }
  return;
}

// TryInitializeContextYawPitch @ 14d673990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::TryInitializeContextYawPitch
          (FOrientationInitializationService *this,FCameraRigEvaluationInfo *param_1)

{
  UCameraRigAsset *this_00;
  FCameraEvaluationContext *pFVar1;
  FString *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  TOptional<double> local_38;
  TOptional<double> local_28;
  double local_18;
  
  this_00 = (param_1->CameraRig).field0_0x0.DebugPtr;
  if (this_00 == (UCameraRigAsset *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    return;
  }
  pFVar1 = (param_1->EvaluationContext).Object;
  if (pFVar1 == (FCameraEvaluationContext *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_00,(FString *)&local_28,(UObject *)0x0);
    pFVar3 = &::LOG_Static;
  }
  else {
    if ((pFVar1->InitialResult).bIsValid != false) {
      local_38.TypedValue = (pFVar1->InitialResult).CameraPose.Rotation.Pitch;
      local_28.TypedValue = (pFVar1->InitialResult).CameraPose.Rotation.Yaw;
      local_18 = (pFVar1->InitialResult).CameraPose.Rotation.Roll;
      local_38.bIsSet = true;
      local_28.bIsSet = true;
      TryInitializeYawPitch(this,param_1,&local_28,&local_38);
      return;
    }
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    pFVar2 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_00,(FString *)&local_28,(UObject *)0x0);
    if ((pFVar2->Data).ArrayNum == 0) {
      pFVar3 = &::LOG_Static;
    }
    else {
      pFVar3 = &::LOG_Static;
    }
  }
  Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogCameraSystem);
  if ((void *)local_28.TypedValue == (void *)0x0) {
    return;
  }
  FMemory::Free((void *)local_28.TypedValue);
  return;
}

// TryInitializeYawPitch @ 14d673ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::TryInitializeYawPitch
          (FOrientationInitializationService *this,FCameraRigEvaluationInfo *param_1,
          TOptional<double> *param_2,TOptional<double> *param_3)

{
  undefined1 auStack_f8 [32];
  FString local_d8;
  FCameraOperationParams local_c8;
  FCameraOperation local_b0 [2];
  double local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  double local_98;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 local_88 [80];
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1->RootEvaluator == (FCameraNodeEvaluator *)0x0) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(param_1->CameraRig).field0_0x0.DebugPtr,&local_d8,
                 (UObject *)0x0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if ((void *)CONCAT44(local_d8.Data.AllocatorInstance.Data._4_4_,
                           local_d8.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_d8.Data.AllocatorInstance.Data._4_4_,
                                       local_d8.Data.AllocatorInstance.Data._0_4_));
      }
    }
  }
  else {
    local_c8.Evaluator = this->Evaluator;
    local_c8.EvaluationContext.Object = (param_1->EvaluationContext).Object;
    local_c8.EvaluationContext.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_c8.EvaluationContext.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.EvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.EvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_a8 = 0.0;
    local_98 = 0.0;
    local_b0[0].OperationTypeID.Value = (FCameraOperationTypeID)0;
    uStack_a0 = (uint)uStack_a0._2_2_ << 0x10;
    uStack_90 = (uint)uStack_90._2_2_ << 0x10;
    if (param_2->bIsSet != false) {
      local_d8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_2->TypedValue;
      local_d8.Data.AllocatorInstance.Data._4_4_ =
           *(undefined4 *)((longlong)&param_2->TypedValue + 4);
      local_a8 = param_2->TypedValue;
      local_d8.Data.ArrayNum = CONCAT22(local_d8.Data.ArrayNum._2_2_,1);
      uStack_a0 = local_d8.Data.ArrayNum;
      iStack_9c = local_d8.Data.ArrayMax;
    }
    if (param_3->bIsSet != false) {
      local_98 = param_3->TypedValue;
      local_d8.Data.ArrayNum = CONCAT22(local_d8.Data.ArrayNum._2_2_,1);
      uStack_90 = local_d8.Data.ArrayNum;
      iStack_8c = local_d8.Data.ArrayMax;
    }
    FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
              ((FCameraNodeEvaluatorHierarchy *)local_88,param_1->RootEvaluator);
    FCameraNodeEvaluatorHierarchy::CallExecuteOperation
              ((FCameraNodeEvaluatorHierarchy *)local_88,&local_c8,local_b0);
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_88 + 0x10));
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  return;
}

// TryPreserveTarget @ 14d673c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::TryPreserveTarget
          (FOrientationInitializationService *this,FCameraRigEvaluationInfo *param_1,bool param_2)

{
  double dVar1;
  FCameraSystemEvaluator *pFVar2;
  UCameraRigAsset *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationContext *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  atomic<int> aVar9;
  atomic<int> aVar10;
  TVector<double> *pTVar11;
  FCameraEvaluationContext *pFVar12;
  FCameraEvaluationContext *pFVar13;
  bool bVar14;
  undefined1 auStack_dc8 [32];
  TVector<double>_u_0 local_da8;
  TVector<double>_u_0 local_d90;
  FCameraIKAimParams local_d78;
  TRotator<double> local_d28;
  TRotator<double> local_d10;
  TVector<double> local_cf8;
  TVector<double> local_ce0;
  undefined1 local_cc8 [2640];
  void *local_278;
  undefined4 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> local_98;
  int local_90;
  int local_8c;
  TVector<double>_u_0 local_88;
  bool local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_dc8;
  pFVar2 = this->Evaluator;
  if ((pFVar2->Result).bIsValid == false) {
    return;
  }
  this_00 = (param_1->CameraRig).field0_0x0.DebugPtr;
  if (this_00 == (UCameraRigAsset *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    return;
  }
  if (param_1->RootEvaluator == (FCameraNodeEvaluator *)0x0) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)this_00,(FString *)&local_d90._s_0,(UObject *)0x0);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if ((void *)local_d90._s_0.X == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_d90._s_0.X);
    return;
  }
  FCameraPose::GetTarget(&(pFVar2->Result).CameraPose,(TVector<double> *)&local_da8._s_0);
  pFVar12 = (FCameraEvaluationContext *)0x0;
  if ((this->TargetPreservationOverride).bIsSet != false) {
    pTVar11 = TOptional<UE::Math::TVector<double>_>::GetValue(&this->TargetPreservationOverride);
    local_da8._0_16_ = *(undefined1 (*) [16])&pTVar11->field0_0x0;
    local_da8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
    uVar6 = (pTVar11->field0_0x0)._s_0.X;
    uVar5 = *(double *)((longlong)&pTVar11->field0_0x0 + 8);
    goto LAB_14d673e03;
  }
  if ((param_2) && (this->bHasPreviousContextTransform != false)) {
    if (((this->PreviousEvaluationContext).Object != (FCameraEvaluationContext *)0x0) &&
       ((pTVar3 = (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController,
        pTVar3 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar3->SharedReferenceCount)))) {
      pFVar4 = (FCameraEvaluationContext *)
               (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController;
      pFVar13 = pFVar4;
      if (pFVar4 != (FCameraEvaluationContext *)0x0) {
        aVar9 = *(atomic<int> *)&pFVar4->field_0x8;
        do {
          pFVar13 = pFVar12;
          if (aVar9 == (atomic<int>)0x0) goto LAB_14d673dd5;
          LOCK();
          aVar10 = *(atomic<int> *)&pFVar4->field_0x8;
          bVar14 = aVar9 == aVar10;
          if (bVar14) {
            *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar9 + 1);
            aVar10 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar10;
        } while (!bVar14);
        pFVar12 = (this->PreviousEvaluationContext).Object;
        pFVar13 = pFVar4;
      }
LAB_14d673dd5:
      pFVar4 = (param_1->EvaluationContext).Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
      if (pFVar4 != pFVar12) goto LAB_14d673df6;
    }
    UE::Math::TRotator<double>::GetInverse(&this->PreviousContextRotation,&local_d10);
    local_d90._s_0.X = local_da8._s_0.X - (this->PreviousContextLocation).field0_0x0._s_0.X;
    local_d90._s_0.Y = local_da8._s_0.Y - (this->PreviousContextLocation).field0_0x0._s_0.Y;
    local_d90._s_0.Z = local_da8._s_0.Z - (this->PreviousContextLocation).field0_0x0._s_0.Z;
    UE::Math::TRotator<double>::RotateVector
              (&local_d10,&local_cf8,(TVector<double> *)&local_d90._s_0);
    pFVar12 = TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>::operator->
                        (&param_1->EvaluationContext);
    local_d28.Pitch = (pFVar12->InitialResult).CameraPose.Rotation.Pitch;
    local_d28.Yaw = (pFVar12->InitialResult).CameraPose.Rotation.Yaw;
    dVar7 = (pFVar12->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
    dVar8 = (pFVar12->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
    dVar1 = (pFVar12->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
    local_d28.Roll = (pFVar12->InitialResult).CameraPose.Rotation.Roll;
    pTVar11 = UE::Math::TRotator<double>::RotateVector
                        (&local_d28,(TVector<double> *)&local_d90._s_0,&local_cf8);
    uVar6 = dVar7 + (pTVar11->field0_0x0)._s_0.X;
    uVar5 = dVar8 + (pTVar11->field0_0x0)._s_0.Y;
    local_da8._s_0.Z = dVar1 + (pTVar11->field0_0x0)._s_0.Z;
    local_da8._8_4_ = (int)uVar5;
    local_da8._s_0.X = (double)uVar6;
    local_da8._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    local_ce0.field0_0x0._s_0.Z = dVar1;
  }
  else {
LAB_14d673df6:
    uVar6 = local_da8._s_0.X;
    uVar5 = local_da8._s_0.Y;
  }
LAB_14d673e03:
  local_d78.Evaluator = this->Evaluator;
  local_d78.MinDistance = __real_bff0000000000000;
  local_d78.TargetLocation.field0_0x0._s_0.Z = local_da8._s_0.Z;
  local_d78.AngleTolerance = ___xmm_bff0000000000000bff0000000000000;
  local_d78.DistanceTolerance = _UNK_15076c718;
  local_d78.MaxIterations = '\0';
  local_d78.bIsFirstFrame = true;
  local_d78.bIsActiveCameraRig = true;
  local_d78.DeltaTime = 0.0;
  local_d78.TargetLocation.field0_0x0._8_4_ = (int)uVar5;
  local_d78.TargetLocation.field0_0x0._0_8_ = uVar6;
  local_d78.TargetLocation.field0_0x0._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult((FCameraNodeEvaluationResult *)local_cc8)
  ;
  FCameraNodeEvaluatorHierarchy::FCameraNodeEvaluatorHierarchy
            ((FCameraNodeEvaluatorHierarchy *)(local_cc8 + 0xa00));
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260._0_4_ = 0;
  local_260._4_4_ = 0;
  local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_98 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0;
  local_90 = 0;
  local_8c = 4;
  local_70 = false;
  FCameraIKAim::Run((FCameraIKAim *)local_cc8,&local_d78,param_1);
  pTVar11 = FCameraPose::GetTarget(&(pFVar2->Result).CameraPose,&local_ce0);
  dVar1 = (pTVar11->field0_0x0)._s_0.Y;
  (this->DebugLastEvaluatedTarget).field0_0x0._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  (this->DebugLastEvaluatedTarget).field0_0x0._s_0.Y = dVar1;
  (this->DebugLastEvaluatedTarget).field0_0x0._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  FCameraIKAim::GetLastRunDebugInfo((FCameraIKAim *)local_cc8,&this->LastAimDebugInfo);
  if (local_98 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    FMemory::Free((void *)local_98);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  local_270 = 0;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_cc8 + 0xa10));
  if ((FScriptContainerElement *)local_cc8._2560_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_cc8._2560_8_);
  }
  if ((FScriptContainerElement *)local_cc8._2536_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_cc8._2536_8_);
  }
  if ((FScriptContainerElement *)local_cc8._2504_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_cc8._2504_8_);
  }
  if ((ForElementType<UE::Cameras::FCameraRigJoint>)local_cc8._592_8_ !=
      (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)local_cc8._592_8_);
  }
  FCameraContextDataTable::~FCameraContextDataTable((FCameraContextDataTable *)(local_cc8 + 0xf8));
  FCameraVariableTable::~FCameraVariableTable((FCameraVariableTable *)(local_cc8 + 0x88));
  return;
}

// TryPreserveYawPitch @ 14d6740b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrientationInitializationService::TryPreserveYawPitch
          (FOrientationInitializationService *this,FCameraRigEvaluationInfo *param_1)

{
  FCameraSystemEvaluator *pFVar1;
  TOptional<double> local_38;
  TOptional<double> local_28;
  double local_18;
  
  pFVar1 = this->Evaluator;
  if ((pFVar1->Result).bIsValid == false) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
  }
  else if ((param_1->CameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      return;
    }
  }
  else {
    local_18 = (pFVar1->Result).CameraPose.Rotation.Roll;
    local_38.TypedValue = (pFVar1->Result).CameraPose.Rotation.Pitch;
    local_28.TypedValue = (pFVar1->Result).CameraPose.Rotation.Yaw;
    if ((this->YawPitchPreservationOverride).bIsSet != false) {
      local_18 = (this->YawPitchPreservationOverride).TypedValue.Roll;
      local_38.TypedValue = (this->YawPitchPreservationOverride).TypedValue.Pitch;
      local_28.TypedValue = (this->YawPitchPreservationOverride).TypedValue.Yaw;
    }
    local_38.bIsSet = true;
    local_28.bIsSet = true;
    TryInitializeYawPitch(this,param_1,&local_28,&local_38);
  }
  return;
}

