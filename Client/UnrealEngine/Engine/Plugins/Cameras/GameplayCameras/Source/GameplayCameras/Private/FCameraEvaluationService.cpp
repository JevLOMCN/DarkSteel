// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 20

// FCameraEvaluationService @ 14d543150

FCameraEvaluationService * __thiscall
UE::Cameras::FCameraEvaluationService::FCameraEvaluationService(FCameraEvaluationService *this)

{
  this->_padding_ = (longlong)&___7FCameraEvaluationService_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->PrivateFlags = None;
  return this;
}

// ~FCameraEvaluationService @ 14d544800

void __thiscall
UE::Cameras::FCameraEvaluationService::~FCameraEvaluationService(FCameraEvaluationService *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FCameraEvaluationService_Cameras_UE__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d54482a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddReferencedObjects @ 14d547a20

void __thiscall
UE::Cameras::FCameraEvaluationService::AddReferencedObjects
          (FCameraEvaluationService *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d547a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// BuildDebugBlocks @ 14d54c100

void __thiscall
UE::Cameras::FCameraEvaluationService::BuildDebugBlocks
          (FCameraEvaluationService *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d54c103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// GetTypeID @ 14d558d30

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraEvaluationService::GetTypeID(FCameraEvaluationService *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// HasAllEvaluationServiceFlags @ 14d558e30

bool __thiscall
UE::Cameras::FCameraEvaluationService::HasAllEvaluationServiceFlags
          (FCameraEvaluationService *this,ECameraEvaluationServiceFlags param_1)

{
  return (this->PrivateFlags & param_1) == param_1;
}

// Initialize @ 14d559660

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::Initialize
          (FCameraEvaluationService *this,FCameraEvaluationServiceInitializeParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d559663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// IsKindOf @ 14d55a4f0

bool __thiscall
UE::Cameras::FCameraEvaluationService::IsKindOf
          (FCameraEvaluationService *this,FCameraObjectTypeID *param_1)

{
  return (TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)param_1->ID == PrivateTypeID;
}

// NotifyRootCameraNodeEvent @ 14d55ab70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::NotifyRootCameraNodeEvent
          (FCameraEvaluationService *this,FRootCameraNodeCameraRigEvent *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d55ab73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// OnAddReferencedObjects @ 14d55ad90

void __thiscall
UE::Cameras::FCameraEvaluationService::OnAddReferencedObjects
          (FCameraEvaluationService *this,FReferenceCollector *param_1)

{
  return;
}

// OnBuildDebugBlocks @ 14d55b300

void __thiscall
UE::Cameras::FCameraEvaluationService::OnBuildDebugBlocks
          (FCameraEvaluationService *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  return;
}

// OnInitialize @ 14d55ccc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::OnInitialize
          (FCameraEvaluationService *this,FCameraEvaluationServiceInitializeParams *param_1)

{
  return;
}

// OnPostUpdate @ 14d55cce0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::OnPostUpdate
          (FCameraEvaluationService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  return;
}

// OnPreUpdate @ 14d55cd00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::OnPreUpdate
          (FCameraEvaluationService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
  return;
}

// OnRootCameraNodeEvent @ 14d55cd20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::OnRootCameraNodeEvent
          (FCameraEvaluationService *this,FRootCameraNodeCameraRigEvent *param_1)

{
  return;
}

// OnTeardown @ 14d55d4b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::OnTeardown
          (FCameraEvaluationService *this,FCameraEvaluationServiceTeardownParams *param_1)

{
  return;
}

// PostUpdate @ 14d55de90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::PostUpdate
          (FCameraEvaluationService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d55de93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x28))();
  return;
}

// PreUpdate @ 14d55df50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::PreUpdate
          (FCameraEvaluationService *this,FCameraEvaluationServiceUpdateParams *param_1,
          FCameraEvaluationServiceUpdateResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d55df53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))();
  return;
}

// SetEvaluationServiceFlags @ 14d564600

void __thiscall
UE::Cameras::FCameraEvaluationService::SetEvaluationServiceFlags
          (FCameraEvaluationService *this,ECameraEvaluationServiceFlags param_1)

{
  this->PrivateFlags = param_1;
  return;
}

// Teardown @ 14d568630

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraEvaluationService::Teardown
          (FCameraEvaluationService *this,FCameraEvaluationServiceTeardownParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d568633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))();
  return;
}

