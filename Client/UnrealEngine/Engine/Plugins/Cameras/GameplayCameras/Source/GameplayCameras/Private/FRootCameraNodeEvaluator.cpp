// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 25

// ~FRootCameraNodeEvaluator @ 14d5916e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::~FRootCameraNodeEvaluator(FRootCameraNodeEvaluator *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar3;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCameraRigEventDelegate).field_0x8,
             *(int *)&(this->OnCameraRigEventDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnCameraRigEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCameraRigEventDelegate);
  pFVar2 = (this->PreVisualResult).CameraPoseLocationTrail.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreVisualResult).PostProcessSettings.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->PreVisualResult).CameraRigJoints.Joints.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FCameraContextDataTable::~FCameraContextDataTable(&(this->PreVisualResult).ContextDataTable);
  FCameraVariableTable::~FCameraVariableTable(&(this->PreVisualResult).VariableTable);
  return;
}

// ActivateCameraRig @ 14d5965f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UE::Cameras::FRootCameraNodeEvaluator::ActivateCameraRig
          (FRootCameraNodeEvaluator *this,FActivateCameraRigParams *param_1)

{
  (**(code **)(this->_padding_ + 0x68))();
  return (FCameraRigInstanceID)param_1;
}

// BroadcastCameraRigEvent @ 14d59a980

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::BroadcastCameraRigEvent
          (FRootCameraNodeEvaluator *this,FRootCameraNodeCameraRigEvent *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FCameraSystemEvaluator *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FCameraEvaluationService *this_00;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  FDestructionSentinel local_48;
  
  pFVar3 = this->OwningEvaluator;
  if (pFVar3 == (FCameraSystemEvaluator *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8386929805953597325>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\RootCameraNode.cpp"
                       ,0x73,"OwningEvaluator");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pFVar14 = (pFVar3->EvaluationServices).AllocatorInstance.Data;
    iVar2 = (pFVar3->EvaluationServices).ArrayNum;
    pFVar15 = pFVar14 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((pFVar3->EvaluationServices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar15) break;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
      this_00 = *(FCameraEvaluationService **)pFVar14;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FCameraEvaluationService *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = FCameraEvaluationService::HasAllEvaluationServiceFlags
                        (this_00,NeedsRootCameraNodeEvents);
      if (bVar8) {
        if ((this_00 == (FCameraEvaluationService *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FCameraEvaluationService::NotifyRootCameraNodeEvent(this_00,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar14 = pFVar14 + 0x10;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnCameraRigEventDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnCameraRigEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar8 = false;
  uVar12 = *(int *)&(this->OnCameraRigEventDelegate).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar12 < *(int *)&(this->OnCameraRigEventDelegate).field_0x10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)&(this->OnCameraRigEventDelegate).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar5) == 0) ||
          (plVar6 = *(longlong **)(lVar13 + lVar5), plVar6 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar6 + 0x68))(), cVar10 == '\0')) {
        bVar8 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->OnCameraRigEventDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnCameraRigEventDelegate
               ,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// BuildSingleCameraRigHierarchy @ 14d59bb40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::BuildSingleCameraRigHierarchy
          (FRootCameraNodeEvaluator *this,FSingleCameraRigHierarchyBuildParams *param_1,
          FCameraNodeEvaluatorHierarchy *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d59bb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))();
  return;
}

// DeactivateAllCameraRigs @ 14d59c7d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::DeactivateAllCameraRigs
          (FRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,bool param_2)

{
  code *pcVar1;
  FCameraEvaluationContext *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x78);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DeactivateCameraRig @ 14d59c890

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::DeactivateCameraRig
          (FRootCameraNodeEvaluator *this,FDeactivateCameraRigParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d59c893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))();
  return;
}

// ExecuteCameraDirectorRequest @ 14d5a3690

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::ExecuteCameraDirectorRequest
          (FRootCameraNodeEvaluator *this,FCameraRigActivationDeactivationRequest *param_1)

{
  UCameraRigAsset *pUVar1;
  UCameraRigTransition *pUVar2;
  TObjectPtr<UCameraRigAsset_const_>_u_0 TVar3;
  undefined1 local_res10 [8];
  FCameraEvaluationContext *local_48;
  TObjectPtr<UCameraRigAsset_const_>_u_0 TStack_40;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_38;
  TObjectPtr<UCameraRigAsset_const_>_u_0 local_30;
  ECameraRigLayer local_28;
  int local_24;
  TObjectPtr<UCameraRigTransition_const_>_u_0 local_20;
  undefined1 local_18;
  
  if (param_1->RequestType == Activate) {
    TStack_40 = (TObjectPtr<UCameraRigAsset_const_>_u_0)
                (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    local_48 = (param_1->EvaluationContext).Object;
    if (TStack_40.DebugPtr != (UCameraRigAsset *)0x0) {
      LOCK();
      *(atomic<int> *)&(TStack_40.DebugPtr)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TStack_40.DebugPtr)->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->CameraRig).field0_0x0.DebugPtr, pUVar1 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_38 = (param_1->CameraRig).field0_0x0;
    local_28 = param_1->Layer;
    local_24 = param_1->OrderKey;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->TransitionOverride).field0_0x0.DebugPtr,
       pUVar2 != (UCameraRigTransition *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_30 = *(TObjectPtr<UCameraRigAsset_const_>_u_0 *)&(param_1->TransitionOverride).field0_0x0;
    local_20._0_1_ = param_1->bForceActivateDeactivate;
    (**(code **)(this->_padding_ + 0x68))(this,local_res10,&local_48);
    TVar3 = TStack_40;
  }
  else {
    if (param_1->RequestType != Deactivate) {
      return;
    }
    local_38 = (TObjectPtr<UCameraRigAsset_const_>_u_0)
               (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    TStack_40.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->EvaluationContext).Object;
    local_48 = (FCameraEvaluationContext *)CONCAT35(local_48._5_3_,0xffffffff);
    if (local_38.DebugPtr != (UCameraRigAsset *)0x0) {
      LOCK();
      *(atomic<int> *)&(local_38.DebugPtr)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(local_38.DebugPtr)->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->CameraRig).field0_0x0.DebugPtr, pUVar1 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_30 = (param_1->CameraRig).field0_0x0;
    local_28 = param_1->Layer;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->TransitionOverride).field0_0x0.DebugPtr,
       pUVar2 != (UCameraRigTransition *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_20 = (param_1->TransitionOverride).field0_0x0;
    local_18 = param_1->bForceActivateDeactivate;
    (**(code **)(this->_padding_ + 0x70))(this,&local_48);
    TVar3 = local_38;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar3.DebugPtr);
  return;
}

// GetActiveCameraRigInfo @ 14d5a5e40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::GetActiveCameraRigInfo
          (FRootCameraNodeEvaluator *this,FCameraRigEvaluationInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5a5e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x80))();
  return;
}

// GetBlendedParameters @ 14d5a6a30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableTable * __thiscall
UE::Cameras::FRootCameraNodeEvaluator::GetBlendedParameters(FRootCameraNodeEvaluator *this)

{
  FCameraVariableTable *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d5a6a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FCameraVariableTable *)(**(code **)(this->_padding_ + 0x98))();
  return pFVar1;
}

// GetCameraRigInfo @ 14d5a6df0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::GetCameraRigInfo
          (FRootCameraNodeEvaluator *this,FCameraRigInstanceID param_1,
          FCameraRigEvaluationInfo *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5a6df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))();
  return;
}

// GetPreVisualLayerResult @ 14d5a8af0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraNodeEvaluationResult * __thiscall
UE::Cameras::FRootCameraNodeEvaluator::GetPreVisualLayerResult(FRootCameraNodeEvaluator *this)

{
  return &this->PreVisualResult;
}

// HasAnyActiveCameraRig @ 14d5ad040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FRootCameraNodeEvaluator::HasAnyActiveCameraRig(FRootCameraNodeEvaluator *this)

{
  bool bVar1;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30 = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  local_10 = 0;
  local_20 = 0;
  uStack_18 = 0;
  (**(code **)(this->_padding_ + 0x80))(0,&local_38);
  bVar1 = local_10 != 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return bVar1;
}

// HasAnyRunningCameraRig @ 14d5ad1d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FRootCameraNodeEvaluator::HasAnyRunningCameraRig
          (FRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FCameraEvaluationContext *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x88);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// OnActivateCameraRig @ 14d5b7940

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnActivateCameraRig
          (FRootCameraNodeEvaluator *this,FActivateCameraRigParams *param_1)

{
  *(undefined4 *)&(param_1->EvaluationContext).Object = 0xffffffff;
  *(undefined1 *)((longlong)&(param_1->EvaluationContext).Object + 4) = 0;
  return (FCameraRigInstanceID)param_1;
}

// OnBuildSingleCameraRigHierarchy @ 14d5b8c30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnBuildSingleCameraRigHierarchy
          (FRootCameraNodeEvaluator *this,FSingleCameraRigHierarchyBuildParams *param_1,
          FCameraNodeEvaluatorHierarchy *param_2)

{
  return;
}

// OnDeactivateAllCameraRigs @ 14d5b94a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnDeactivateAllCameraRigs
          (FRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1,bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnDeactivateCameraRig @ 14d5b97f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnDeactivateCameraRig
          (FRootCameraNodeEvaluator *this,FDeactivateCameraRigParams *param_1)

{
  return;
}

// OnGetActiveCameraRigInfo @ 14d5c1cd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnGetActiveCameraRigInfo
          (FRootCameraNodeEvaluator *this,FCameraRigEvaluationInfo *param_1)

{
  return;
}

// OnGetBlendedParameters @ 14d5c1d00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraVariableTable * __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnGetBlendedParameters(FRootCameraNodeEvaluator *this)

{
  return (FCameraVariableTable *)0x0;
}

// OnGetCameraRigInfo @ 14d5c1dc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnGetCameraRigInfo
          (FRootCameraNodeEvaluator *this,FCameraRigInstanceID param_1,
          FCameraRigEvaluationInfo *param_2)

{
  return;
}

// OnHasAnyRunningCameraRig @ 14d5c2020

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnHasAnyRunningCameraRig
          (FRootCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// OnInitialize @ 14d5c23f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnInitialize
          (FRootCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  this->OwningEvaluator = param_1->Evaluator;
  return;
}

// OnRunSingleCameraRig @ 14d5c3560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::OnRunSingleCameraRig
          (FRootCameraNodeEvaluator *this,FSingleCameraRigEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  return;
}

// RunSingleCameraRig @ 14d5cccd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::RunSingleCameraRig
          (FRootCameraNodeEvaluator *this,FSingleCameraRigEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraVariableTable::AutoResetValues(&param_2->VariableTable);
                    /* WARNING: Could not recover jumptable at 0x00014d5ccd0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa8))(this,param_1,param_2);
  return;
}

// SetPreVisualLayerResult @ 14d5cee20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FRootCameraNodeEvaluator::SetPreVisualLayerResult
          (FRootCameraNodeEvaluator *this,FCameraNodeEvaluationResult *param_1)

{
  FCameraNodeEvaluationResult::OverrideAll(&this->PreVisualResult,param_1,true);
  return;
}

