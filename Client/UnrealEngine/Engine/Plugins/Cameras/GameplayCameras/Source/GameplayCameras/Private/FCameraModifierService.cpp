// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTypeID @ 14d5abb60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraModifierService::GetTypeID(FCameraModifierService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b46e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraModifierService::IsKindOf
          (FCameraModifierService *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraModifierService>)param_1->ID != PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID !=
      FCameraEvaluationService::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d644340

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraModifierService::OnInitialize
          (FCameraModifierService *this,FCameraEvaluationServiceInitializeParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FCameraEvaluationService::SetEvaluationServiceFlags((FCameraEvaluationService *)this,None);
  if (this->Evaluator != (FCameraSystemEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2535301843160924179>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraModifierService.cpp"
                       ,0x13,"Evaluator == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Evaluator = param_1->Evaluator;
  return;
}

// OnTeardown @ 14d6443b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraModifierService::OnTeardown
          (FCameraModifierService *this,FCameraEvaluationServiceTeardownParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Evaluator != (FCameraSystemEvaluator *)0x0) {
    this->Evaluator = (FCameraSystemEvaluator *)0x0;
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2535301843160924185>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraModifierService.cpp"
                     ,0x19,"Evaluator != nullptr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  return;
}

// EnsureModifierContextCreated @ 14d65ef00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraModifierService::EnsureModifierContextCreated(FCameraModifierService *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraEvaluationContext *pFVar7;
  FCameraEvaluationContext *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->ModifierContext).Object != (FCameraEvaluationContext *)0x0) {
    return;
  }
  pTVar6 = ::operator_new(0xb00);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = (FCameraEvaluationContext *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    FCameraEvaluationContext::FCameraEvaluationContext((FCameraEvaluationContext *)(pTVar6 + 1));
    pFVar7 = (FCameraEvaluationContext *)(pTVar6 + 1);
    if (pFVar7 == (FCameraEvaluationContext *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d65effd;
    }
  }
  if (((*(longlong *)&pFVar7->field_0x10 == 0) || (*(longlong *)&pFVar7->field_0x18 == 0)) ||
     (*(int *)(*(longlong *)&pFVar7->field_0x18 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FCameraEvaluationContext **)&pFVar7->field_0x10 = pFVar7;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar7->field_0x18) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar7->field_0x18;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar7->field_0x18 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d65effd:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pFVar7;
  local_10.ReferenceController = pTVar6;
  if (&this->ModifierContext != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_18) {
    (this->ModifierContext).Object = pFVar7;
    local_18 = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ModifierContext).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// StartCameraModifierRig @ 14d672010

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UE::Cameras::FCameraModifierService::StartCameraModifierRig
          (FCameraModifierService *this,UCameraRigAsset *param_1,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_2,ECameraRigLayer param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigInstanceID FVar3;
  undefined7 in_register_00000089;
  undefined8 *puVar4;
  int in_stack_00000030;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTStack_28;
  undefined8 local_20;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  puVar4 = (undefined8 *)CONCAT71(in_register_00000089,param_3);
  if (this->Evaluator == (FCameraSystemEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2535301843160924198>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraModifierService.cpp"
                       ,0x26,"Evaluator");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FCameraRigInstanceID)(*pcVar1)();
      return FVar3;
    }
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  else {
    local_40.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
    local_38 = *puVar4;
    local_20 = 0;
    local_18 = 2;
    local_14 = 0;
    local_10 = 0;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTStack_28 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)0x0;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_18 = (undefined1)param_4;
    local_14 = in_stack_00000030 + 100;
    pTStack_28 = param_2;
    FRootCameraNodeEvaluator::ActivateCameraRig
              (this->Evaluator->RootEvaluator,(FActivateCameraRigParams *)param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar4[1]);
  return (FCameraRigInstanceID)param_1;
}

// StartCameraModifierRig @ 14d672150

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
UE::Cameras::FCameraModifierService::StartCameraModifierRig
          (FCameraModifierService *this,UCameraRigAsset *param_1,ECameraRigLayer param_2,int param_3
          )

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar3;
  FCameraRigInstanceID FVar4;
  undefined7 in_register_00000081;
  UObject *pUVar5;
  int in_stack_00000028;
  FSharedReferencer<1> local_50;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_48;
  FCameraEvaluationContext *local_38;
  FSharedReferencer<1> local_30;
  UObject *pUStack_28;
  undefined8 local_20;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  
  pUVar5 = (UObject *)CONCAT71(in_register_00000081,param_2);
  EnsureModifierContextCreated(this);
  pTVar3 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                     (&this->ModifierContext,&local_48);
  if (this->Evaluator == (FCameraSystemEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2535301843160924198>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraModifierService.cpp"
                       ,0x26,"Evaluator");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FCameraRigInstanceID)(*pcVar1)();
      return FVar4;
    }
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  else {
    local_38 = pTVar3->Object;
    local_50.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    local_20 = 0;
    local_18 = 2;
    local_14 = 0;
    local_10 = 0;
    local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUStack_28 = (UObject *)0x0;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar5);
    }
    local_14 = in_stack_00000028 + 100;
    pUStack_28 = pUVar5;
    local_18 = (char)param_3;
    FRootCameraNodeEvaluator::ActivateCameraRig
              (this->Evaluator->RootEvaluator,(FActivateCameraRigParams *)param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return (FCameraRigInstanceID)param_1;
}

// StopCameraModifierRig @ 14d673490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraModifierService::StopCameraModifierRig
          (FCameraModifierService *this,FCameraRigInstanceID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FDeactivateCameraRigParams local_48;
  
  if (this->Evaluator == (FCameraSystemEvaluator *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2535301843160924212>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Services\\CameraModifierService.cpp"
                       ,0x34,"Evaluator");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_48.CameraRig.field0_0x0.DebugPtr = (TObjectPtr<UCameraRigAsset_const_>_u_0)0x0;
    local_48.EvaluationContext.Object = (FCameraEvaluationContext *)0x0;
    local_48.EvaluationContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_48.TransitionOverride.field0_0x0.DebugPtr =
         (TObjectPtr<UCameraRigTransition_const_>_u_0)0x0;
    local_48.Layer = Main;
    local_48.InstanceID = param_1;
    local_48.bDeactiveImmediately = param_2;
    FRootCameraNodeEvaluator::DeactivateCameraRig(this->Evaluator->RootEvaluator,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.EvaluationContext.SharedReferenceCount.ReferenceController);
  }
  return;
}

