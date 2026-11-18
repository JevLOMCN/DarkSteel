// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// FReverseBlendCameraNodeEvaluator @ 14d5fce60

FReverseBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator
          (FReverseBlendCameraNodeEvaluator *this,FBlendCameraNodeEvaluator *param_1)

{
  this->ChildBlend = param_1;
  this->_padding_ = (longlong)&___7FReverseBlendCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 7;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  return this;
}

// FReverseBlendCameraNodeEvaluator @ 14d5fcea0

FReverseBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator
          (FReverseBlendCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->ChildBlend = (FBlendCameraNodeEvaluator *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FReverseBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  return this;
}

// GetTypeID @ 14d61e6a0

FCameraObjectTypeID * __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::GetTypeID(FReverseBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621420

bool __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::IsKindOf
          (FReverseBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBlendParameters @ 14d622d70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::OnBlendParameters
          (FReverseBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  FCameraNodePreBlendResult local_38;
  FCameraNodePreBlendParams local_28;
  
  if (this->ChildBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_28.EvaluationParams = param_1->EvaluationParams;
    local_28.LastCameraPose = param_1->LastCameraPose;
    local_28.ChildVariableTable = param_2->VariableTable;
    local_38.VariableTable = param_1->ChildVariableTable;
    local_28.VariableTableFilter = None;
    local_38.bIsBlendFull = false;
    local_38.bIsBlendFinished = false;
    FBlendCameraNodeEvaluator::BlendParameters(this->ChildBlend,&local_28,&local_38);
  }
  return;
}

// OnBlendResults @ 14d623bc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::OnBlendResults
          (FReverseBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  FCameraNodeBlendResult local_28;
  FCameraNodeBlendParams local_18;
  
  if (this->ChildBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_18.ChildParams = param_1->ChildParams;
    local_18.ChildResult = param_2->BlendedResult;
    local_28.BlendedResult = param_1->ChildResult;
    local_28.bIsBlendFull = false;
    local_28.bIsBlendFinished = false;
    FBlendCameraNodeEvaluator::BlendResults(this->ChildBlend,&local_18,&local_28);
  }
  return;
}

// OnGetChildren @ 14d6277a0

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::OnGetChildren
          (FReverseBlendCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = (FCameraNodeEvaluator *)this->ChildBlend;
  local_18._First = &local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitializeFromInterruption @ 14d629050

bool __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::OnInitializeFromInterruption
          (FReverseBlendCameraNodeEvaluator *this,FCameraNodeBlendInterruptionParams *param_1)

{
  undefined1 uVar1;
  
  if (this->ChildBlend == (FBlendCameraNodeEvaluator *)0x0) {
    return true;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d559fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->ChildBlend + 0x78))();
  return (bool)uVar1;
}

// OnRun @ 14d62bb10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FReverseBlendCameraNodeEvaluator::OnRun
          (FReverseBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FBlendCameraNodeEvaluator *pFVar1;
  TVector<double>_u_0 TStack_28;
  
  pFVar1 = this->ChildBlend;
  if (pFVar1 == (FBlendCameraNodeEvaluator *)0x0) {
    return;
  }
  if ((*(longlong *)&pFVar1->field_0x10 == 0) ||
     (*(char *)(*(longlong *)&pFVar1->field_0x10 + 0x30) != '\0')) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))();
    if (pFVar1->field_0x8 != '\0') {
      TStack_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      TStack_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      TStack_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&TStack_28._s_0);
    }
  }
  return;
}

