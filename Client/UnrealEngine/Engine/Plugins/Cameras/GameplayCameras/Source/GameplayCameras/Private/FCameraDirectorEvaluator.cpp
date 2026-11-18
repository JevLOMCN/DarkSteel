// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 25

// FCameraDirectorEvaluator @ 14d542e30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UE::Cameras::FCameraDirectorEvaluator::FCameraDirectorEvaluator(FCameraDirectorEvaluator *this)

{
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  (this->WeakOwnerContext).Object = (FCameraEvaluationContext *)0x0;
  (this->WeakOwnerContext).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PrivateCameraDirector).field0_0x0.DebugPtr = (UCameraDirector *)0x0;
  (this->NextActivationTransitionOverride).field0_0x0.DebugPtr = (UCameraRigTransition *)0x0;
  this->bNextActivationForce = false;
  return this;
}

// ~FCameraDirectorEvaluator @ 14d5445b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::~FCameraDirectorEvaluator(FCameraDirectorEvaluator *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  pTVar3 = (this->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014d5445da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// Activate @ 14d546080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::Activate
          (FCameraDirectorEvaluator *this,FCameraDirectorActivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  this->Evaluator = param_1->Evaluator;
                    /* WARNING: Could not recover jumptable at 0x00014d54608a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// AddChildEvaluationContext @ 14d546aa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraDirectorEvaluator::AddChildEvaluationContext
          (FCameraDirectorEvaluator *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  FCameraEvaluationContext *pFVar5;
  FCameraEvaluationContext *pFVar6;
  FCameraEvaluationContext *this_00;
  FCameraEvaluationContext *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  int local_res18 [4];
  FSharedReferencer<1> local_a0;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_98;
  FCameraEvaluationContext *local_88;
  FCameraEvaluationContext *pFStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FCameraEvaluationContextActivateParams local_68;
  FCameraEvaluationContext *local_50;
  FCameraEvaluationContext *pFStack_48;
  FCameraEvaluationContext *local_40;
  FSharedReferencer<1> local_38 [2];
  
  pFVar6 = (FCameraEvaluationContext *)
           (this->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  pFVar7 = (FCameraEvaluationContext *)0x0;
  pFVar5 = pFVar6;
  this_00 = pFVar7;
  if (pFVar6 != (FCameraEvaluationContext *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar6->field_0x8;
    do {
      pFVar5 = pFVar7;
      this_00 = (FCameraEvaluationContext *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d546ae5;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar6->field_0x8;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pFVar6->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    this_00 = (this->WeakOwnerContext).Object;
    pFVar5 = pFVar6;
    if (this_00 != (FCameraEvaluationContext *)0x0) goto LAB_14d546b17;
  }
LAB_14d546ae5:
  local_res8[0] = 0;
  bVar8 = `UE::Cameras::FCameraDirectorEvaluator::AddChildEvaluationContext'::__l3::<lambda_1>::
          operator()(local_res8);
  pFVar6 = pFVar5;
  if (!bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
LAB_14d546b17:
  local_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pFVar6 != (FCameraEvaluationContext *)0x0) {
    LOCK();
    *(int *)&pFVar6->field_0x8 = *(int *)&pFVar6->field_0x8 + 1;
    UNLOCK();
  }
  local_78 = 0;
  uStack_70 = 0;
  local_50 = this_00;
  pFStack_48 = pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_40 = param_1->Object;
  if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_38,&local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  local_res18[0] = 0;
  (**(code **)(this->_padding_ + 0x38))(this,&local_50,local_res18);
  if (local_res18[0] == 1) {
    pFVar7 = (FCameraEvaluationContext *)&DAT_00000001;
    if ((this_00 == (FCameraEvaluationContext *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_98.Object = param_1->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCameraEvaluationContext::RegisterChildContext(this_00,&local_98);
    local_68.Evaluator = this->Evaluator;
    if (pFVar6 != (FCameraEvaluationContext *)0x0) {
      LOCK();
      *(int *)&pFVar6->field_0x8 = *(int *)&pFVar6->field_0x8 + 1;
      UNLOCK();
    }
    local_88 = this_00;
    pFStack_80 = pFVar6;
    local_68.ParentContext.Object = this_00;
    local_68.ParentContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)pFVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FCameraEvaluationContext::Activate(param_1->Object,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.ParentContext.SharedReferenceCount.ReferenceController);
  }
  else if (local_res18[0] == 2) {
    pFVar7 = (FCameraEvaluationContext *)&DAT_00000001;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)(char)pFVar7;
}

// AddReferencedObjects @ 14d547800

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::AddReferencedObjects
          (FCameraDirectorEvaluator *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PrivateCameraDirector,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014d547839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))(this,param_1);
  return;
}

// Deactivate @ 14d551ab0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::Deactivate
          (FCameraDirectorEvaluator *this,FCameraDirectorDeactivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  (**(code **)(this->_padding_ + 0x28))();
  this->Evaluator = (FCameraSystemEvaluator *)0x0;
  return;
}

// FindCameraRigByProxy @ 14d554040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraRigAsset * __thiscall
UE::Cameras::FCameraDirectorEvaluator::FindCameraRigByProxy
          (FCameraDirectorEvaluator *this,UCameraRigProxyAsset *param_1)

{
  UCameraDirector *pUVar1;
  code *pcVar2;
  bool bVar3;
  UCameraRigAsset *pUVar4;
  FCameraRigProxyResolveParams local_res8 [4];
  
  pUVar1 = (this->PrivateCameraDirector).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraDirector *)0x0) {
    local_res8[0].CameraRigProxy = param_1;
    pUVar4 = FCameraRigProxyRedirectTable::ResolveProxy
                       (&pUVar1->CameraRigProxyRedirectTable,local_res8);
    return pUVar4;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<648644704279199835>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraDirectorEvaluator.cpp"
                     ,0x5b,"PrivateCameraDirector");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCameraRigAsset *)(*pcVar2)();
    return pUVar4;
  }
  return (UCameraRigAsset *)0x0;
}

// ForceNextActivation @ 14d554700

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::ForceNextActivation(FCameraDirectorEvaluator *this)

{
  this->bNextActivationForce = true;
  return;
}

// GetTypeID @ 14d558d10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraDirectorEvaluator::GetTypeID(FCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d559450

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::Initialize
          (FCameraDirectorEvaluator *this,FCameraDirectorInitializeParams *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  (this->WeakOwnerContext).Object = (param_1->OwnerContext).Object;
  pTVar3 = (param_1->OwnerContext).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (this->WeakOwnerContext).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WeakOwnerContext).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->WeakOwnerContext).WeakReferenceCount.ReferenceController = pTVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d5594be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  return;
}

// IsKindOf @ 14d55a4b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraDirectorEvaluator::IsKindOf
          (FCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  return (TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID == PrivateTypeID;
}

// OnActivate @ 14d55ab90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnActivate
          (FCameraDirectorEvaluator *this,FCameraDirectorActivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  return;
}

// OnAddChildEvaluationContext @ 14d55abb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnAddChildEvaluationContext
          (FCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  return;
}

// OnAddReferencedObjects @ 14d55ad70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnAddReferencedObjects
          (FCameraDirectorEvaluator *this,FReferenceCollector *param_1)

{
  return;
}

// OnDeactivate @ 14d55b580

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnDeactivate
          (FCameraDirectorEvaluator *this,FCameraDirectorDeactivateParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  return;
}

// OnEndCameraSystemUpdate @ 14d55bb10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnEndCameraSystemUpdate(FCameraDirectorEvaluator *this)

{
  (this->NextActivationTransitionOverride).field0_0x0.DebugPtr = (UCameraRigTransition *)0x0;
  this->bNextActivationForce = false;
  return;
}

// OnInitialize @ 14d55ccb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnInitialize
          (FCameraDirectorEvaluator *this,FCameraDirectorInitializeParams *param_1)

{
  return;
}

// OnRemoveChildEvaluationContext @ 14d55cd10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnRemoveChildEvaluationContext
          (FCameraDirectorEvaluator *this,FChildContextManulationParams *param_1,
          FChildContextManulationResult *param_2)

{
  return;
}

// OnRun @ 14d55ce00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OnRun
          (FCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  return;
}

// OverrideNextActivationTransition @ 14d55d5c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::OverrideNextActivationTransition
          (FCameraDirectorEvaluator *this,UCameraRigTransition *param_1)

{
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigTransition *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
    (this->NextActivationTransitionOverride).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->NextActivationTransitionOverride).field0_0x0.DebugPtr = param_1;
  return;
}

// RemoveChildEvaluationContext @ 14d560dd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraDirectorEvaluator::RemoveChildEvaluationContext
          (FCameraDirectorEvaluator *this,
          TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraEvaluationContext *this_00;
  bool bVar7;
  undefined1 local_res8 [16];
  FCameraEvaluationContextDeactivateParams local_res18 [8];
  int local_res20 [2];
  FSharedReferencer<1> local_70;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FCameraEvaluationContext *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar6 = (this->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  this_00 = (FCameraEvaluationContext *)0x0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d560e06;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    this_00 = (this->WeakOwnerContext).Object;
    if (this_00 != (FCameraEvaluationContext *)0x0) goto LAB_14d560e3e;
  }
LAB_14d560e06:
  local_res8[0] = 0;
  bVar7 = `UE::Cameras::FCameraDirectorEvaluator::RemoveChildEvaluationContext'::__l3::<lambda_1>::
          operator()(local_res8);
  if (!bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
LAB_14d560e3e:
  local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = this_00;
  pTStack_40 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_70.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_38 = param_1->Object;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  local_res20[0] = 0;
  (**(code **)(this->_padding_ + 0x40))(this,&local_48,local_res20);
  bVar7 = false;
  if (local_res20[0] == 1) {
    bVar7 = true;
    if ((this_00 == (FCameraEvaluationContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_68.Object = param_1->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCameraEvaluationContext::UnregisterChildContext(this_00,&local_68);
    FCameraEvaluationContext::Deactivate(param_1->Object,local_res18);
  }
  else if (local_res20[0] == 2) {
    bVar7 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar7;
}

// Run @ 14d562080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::Run
          (FCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar3;
  UCameraRigTransition *pUVar4;
  uchar *puVar5;
  undefined1 local_res8 [8];
  
  (**(code **)(this->_padding_ + 0x30))();
  if (((this->NextActivationTransitionOverride).field0_0x0.DebugPtr != (UCameraRigTransition *)0x0)
     || (this->bNextActivationForce != false)) {
    FVar3 = (param_2->Requests).AllocatorInstance.SecondaryData;
    piVar1 = &(param_2->Requests).ArrayNum;
    iVar2 = *piVar1;
    if (FVar3 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      param_2 = (FCameraDirectorEvaluationResult *)FVar3;
    }
    puVar5 = (uchar *)((longlong)param_2 + 0x24);
    while( true ) {
      if (*piVar1 != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::FCameraRigActivationDeactivationRequest,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)(puVar5 + -0x24)
          == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *)
             ((longlong)iVar2 * 0x38 + (longlong)param_2)) break;
      if ((*(int *)(puVar5 + -4) == 0) && (*puVar5 == '\x02')) {
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 = (this->NextActivationTransitionOverride).field0_0x0.DebugPtr,
           pUVar4 != (UCameraRigTransition *)0x0)) {
          GC::MarkAsReachable((UObject *)pUVar4);
        }
        *(TObjectPtr<UCameraRigTransition_const_>_u_0 *)(puVar5 + 4) =
             (this->NextActivationTransitionOverride).field0_0x0;
        puVar5[0x10] = puVar5[0x10] | this->bNextActivationForce;
      }
      puVar5 = puVar5 + 0x38;
    }
  }
  this->bNextActivationForce = false;
  (this->NextActivationTransitionOverride).field0_0x0.DebugPtr = (UCameraRigTransition *)0x0;
  return;
}

// SetPrivateCameraDirector @ 14d564e00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraDirectorEvaluator::SetPrivateCameraDirector
          (FCameraDirectorEvaluator *this,UCameraDirector *param_1)

{
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraDirector *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
    (this->PrivateCameraDirector).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->PrivateCameraDirector).field0_0x0.DebugPtr = param_1;
  return;
}

// operator() @ 150580c90

bool __thiscall
`UE::Cameras::FCameraDirectorEvaluator::AddChildEvaluationContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<648644704279199867>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<648644704279199867>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580e10

bool __thiscall
`UE::Cameras::FCameraDirectorEvaluator::RemoveChildEvaluationContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<648644704279199912>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<648644704279199912>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

