// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// FCameraRigCameraNodeEvaluator @ 14d5fb7b0

FCameraRigCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::FCameraRigCameraNodeEvaluator
          (FCameraRigCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->CameraRigRootEvaluator = (FCameraNodeEvaluator *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FCameraRigCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsParameterUpdate);
  return this;
}

// ApplyParameterOverrides @ 14d60c9a0

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::ApplyParameterOverrides
          (FCameraRigCameraNodeEvaluator *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2,bool param_3)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if (this->_padding_ != 0) {
    pUVar2 = UCameraRigCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d60c9e4;
    }
  }
  lVar3 = 0;
LAB_14d60c9e4:
  FCameraRigAssetReference::ApplyParameterOverrides
            ((FCameraRigAssetReference *)(lVar3 + 0x48),param_1,param_2,param_3);
  return;
}

// ApplyParameterOverrides @ 14d60ca20

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::ApplyParameterOverrides
          (FCameraRigCameraNodeEvaluator *this,FCameraVariableTable *param_1,bool param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if (this->_padding_ != 0) {
    pUVar2 = UCameraRigCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d60ca5c;
    }
  }
  lVar3 = 0;
LAB_14d60ca5c:
  FCameraRigAssetReference::ApplyParameterOverrides
            ((FCameraRigAssetReference *)(lVar3 + 0x48),param_1,param_2);
  return;
}

// GetTypeID @ 14d61e530

FCameraObjectTypeID * __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::GetTypeID(FCameraRigCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6210e0

bool __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::IsKindOf
          (FCameraRigCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCameraRigCameraNodeEvaluator>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
            FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d623ed0

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::OnBuild
          (FCameraRigCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FCameraNodeEvaluator *pFVar5;
  UObjectBaseUtility *this_00;
  
  if (this->_padding_ != 0) {
    pUVar3 = UCameraRigCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      this_00 = (UObjectBaseUtility *)this->_padding_;
      goto LAB_14d623f09;
    }
  }
  this_00 = (UObjectBaseUtility *)0x0;
LAB_14d623f09:
  pUVar3 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter(this_00,pUVar3);
  pUVar1 = *(UObject **)&this_00[3].field_0x8;
  if (((pUVar1 != (UObject *)0x0) && (*(UCameraNode **)(pUVar1 + 5) != (UCameraNode *)0x0)) &&
     (pUVar1 != pUVar4)) {
    pFVar5 = FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(pUVar1 + 5));
    this->CameraRigRootEvaluator = pFVar5;
  }
  return;
}

// OnGetChildren @ 14d627640

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::OnGetChildren
          (FCameraRigCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = this->CameraRigRootEvaluator;
  local_18._First = &local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitialize @ 14d627f10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::OnInitialize
          (FCameraRigCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  longlong lVar4;
  
  this_00 = &this->_padding_;
  lVar4 = 0;
  lVar3 = lVar4;
  if (*this_00 != 0) {
    pUVar2 = UCameraRigCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      lVar3 = *this_00;
    }
  }
  FCameraRigAssetReference::ApplyParameterOverrides
            ((FCameraRigAssetReference *)(lVar3 + 0x48),&param_2->VariableTable,
             &param_2->ContextDataTable,false);
  if (*this_00 != 0) {
    pUVar2 = UCameraRigCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      lVar4 = *this_00;
    }
  }
  if (*(UBaseCameraObject **)(lVar4 + 0x80) != (UBaseCameraObject *)0x0) {
    FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParametersImpl
              (*(UBaseCameraObject **)(lVar4 + 0x80),&param_2->VariableTable,
               (FCameraContextDataTable *)0x0);
  }
  return;
}

// OnRun @ 14d62a300

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::OnRun
          (FCameraRigCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  UCameraNode *pUVar1;
  FCameraNodeEvaluator *pFVar2;
  TVector<double>_u_0 TStack_28;
  
  pFVar2 = this->CameraRigRootEvaluator;
  if (pFVar2 == (FCameraNodeEvaluator *)0x0) {
    return;
  }
  pUVar1 = (pFVar2->PrivateCameraNode).field0_0x0.DebugPtr;
  if ((pUVar1 == (UCameraNode *)0x0) || (pUVar1->bIsEnabled != false)) {
    (**(code **)(pFVar2->_padding_ + 0x48))();
    if (pFVar2->bAutoCameraPoseMovementTrail != false) {
      TStack_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      TStack_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      TStack_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&TStack_28._s_0);
    }
  }
  return;
}

// OnUpdateParameters @ 14d62e220

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraRigCameraNodeEvaluator::OnUpdateParameters
          (FCameraRigCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  FCameraVariableTable *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pFVar1 = param_2->VariableTable;
  if (this->_padding_ != 0) {
    pUVar3 = UCameraRigCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d62e253;
    }
  }
  lVar4 = 0;
LAB_14d62e253:
  FCameraRigAssetReference::ApplyParameterOverrides
            ((FCameraRigAssetReference *)(lVar4 + 0x48),pFVar1,false);
  return;
}

