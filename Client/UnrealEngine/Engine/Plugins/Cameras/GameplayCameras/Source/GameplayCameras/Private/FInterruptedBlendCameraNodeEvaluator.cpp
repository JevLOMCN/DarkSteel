// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FInterruptedBlendCameraNodeEvaluator @ 14d5fb870

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FInterruptedBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
          (FInterruptedBlendCameraNodeEvaluator *this,FBlendCameraNodeEvaluator *param_1,
          FBlendCameraNodeEvaluator *param_2)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FInterruptedBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 7;
  this->ChildBlend = param_1;
  this->FrozenBlend = param_2;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->FrozenResult);
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  return this;
}

// FInterruptedBlendCameraNodeEvaluator @ 14d5fb8c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FInterruptedBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
          (FInterruptedBlendCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->ChildBlend = (FBlendCameraNodeEvaluator *)0x0;
  this->FrozenBlend = (FBlendCameraNodeEvaluator *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FInterruptedBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&this->FrozenResult);
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  return this;
}

// GetTypeID @ 14d61e5e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraObjectTypeID * __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::GetTypeID
          (FInterruptedBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621240

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::IsKindOf
          (FInterruptedBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

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

// OnBlendParameters @ 14d622c10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::OnBlendParameters
          (FInterruptedBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  FCameraVariableTable *this_00;
  FCameraNodePreBlendParams local_28;
  
  this_00 = &(this->FrozenResult).VariableTable;
  FCameraVariableTable::OverrideAll(this_00,param_2->VariableTable,true);
  if (this->FrozenBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_28.LastCameraPose =
         (FCameraPose *)((ulonglong)local_28.LastCameraPose & 0xffffffffffff0000);
    local_28.EvaluationParams = (FCameraNodeEvaluationParams *)this_00;
    FBlendCameraNodeEvaluator::BlendParameters
              (this->FrozenBlend,param_1,(FCameraNodePreBlendResult *)&local_28);
  }
  if (this->ChildBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_28.EvaluationParams = param_1->EvaluationParams;
    local_28.LastCameraPose = param_1->LastCameraPose;
    local_28.VariableTableFilter = None;
    local_28.ChildVariableTable = this_00;
    FBlendCameraNodeEvaluator::BlendParameters(this->ChildBlend,&local_28,param_2);
  }
  return;
}

// OnBlendResults @ 14d622e30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::OnBlendResults
          (FInterruptedBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  FCameraNodeEvaluationResult *this_00;
  undefined1 local_18 [16];
  
  this_00 = &this->FrozenResult;
  FCameraNodeEvaluationResult::OverrideAll(this_00,param_2->BlendedResult,true);
  if (this->FrozenBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_18._8_8_ = local_18._8_8_ & 0xffffffffffff0000;
    local_18._0_8_ = this_00;
    FBlendCameraNodeEvaluator::BlendResults
              (this->FrozenBlend,param_1,(FCameraNodeBlendResult *)local_18);
  }
  if (this->ChildBlend != (FBlendCameraNodeEvaluator *)0x0) {
    local_18._0_8_ = param_1->ChildParams;
    local_18._8_8_ = this_00;
    FBlendCameraNodeEvaluator::BlendResults
              (this->ChildBlend,(FCameraNodeBlendParams *)local_18,param_2);
  }
  return;
}

// OnGetChildren @ 14d627690

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::OnGetChildren
          (FInterruptedBlendCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FCameraNodeEvaluator *local_28;
  FBlendCameraNodeEvaluator *local_20;
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_28 = (FCameraNodeEvaluator *)this->ChildBlend;
  local_20 = this->FrozenBlend;
  local_18._First = &local_28;
  local_18._Last = (FCameraNodeEvaluator **)&local_18;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnRun @ 14d62b430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FInterruptedBlendCameraNodeEvaluator::OnRun
          (FInterruptedBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
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

