// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// GetTypeID @ 14d61e4e0

FCameraObjectTypeID * __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::GetTypeID(FAutoFocusCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621040

bool __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::IsKindOf
          (FAutoFocusCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FAutoFocusCameraNodeEvaluator>)param_1->ID != PrivateTypeID
      ) && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
            FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d624440

void __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::OnBuildDebugBlocks
          (FAutoFocusCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x40,8);
  pFVar1[1]._padding_ = 0;
  pFVar1[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1[1].Attachments.ArrayNum = 0;
  pFVar1[1].Attachments.ArrayMax = 0;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FAutoFocusCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar1);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar1);
  *(bool *)&pFVar1[1].Attachments.ArrayMax = this->bLastEnableAutoFocus;
  pFVar1[1]._padding_ = (longlong)this->LastUndampedFocusDistance;
  pFVar1[1].Attachments.AllocatorInstance.Data =
       (FScriptContainerElement *)this->LastDampedFocusDistance;
  pFVar1[1].Attachments.ArrayNum = (int)(this->AutoFocusDamper).W0;
  return;
}

// OnInitialize @ 14d627d70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::OnInitialize
          (FAutoFocusCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  FCameraVariableID FVar2;
  UClass *pUVar3;
  undefined4 extraout_var;
  longlong lVar5;
  uint *puVar4;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  if (this->_padding_ != 0) {
    pUVar3 = UAutoFocusCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar1) {
      lVar5 = this->_padding_;
      goto LAB_14d627dab;
    }
  }
  lVar5 = 0;
LAB_14d627dab:
  puVar4 = (uint *)(lVar5 + 0x38);
  if (*(longlong *)(lVar5 + 0x40) == 0) {
    (this->EnableAutoFocusReader).DefaultValue = false;
  }
  else {
    (this->EnableAutoFocusReader).DefaultValue = *(bool *)(*(longlong *)(lVar5 + 0x40) + 0x40);
    FVar2 = UCameraVariableAsset::GetVariableID(*(UCameraVariableAsset **)(lVar5 + 0x40));
    puVar4 = (uint *)CONCAT44(extraout_var,FVar2.Value);
  }
  (this->EnableAutoFocusReader).VariableID.Value = *puVar4;
  (this->AutoFocusDampingFactorReader).DefaultValuePtr = (float *)(lVar5 + 0x48);
  (this->AutoFocusDampingFactorReader).VariableID.Value = *(uint *)(lVar5 + 0x4c);
  return;
}

// OnRun @ 14d629ab0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::OnRun
          (FAutoFocusCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TCameraVariableReferenceReader<bool> *pTVar6;
  float *pfVar7;
  TCameraVariableReferenceReader<bool> *pTVar8;
  float fVar9;
  
  uVar3 = (this->EnableAutoFocusReader).VariableID.Value;
  this->bLastEnableAutoFocus = true;
  if (uVar3 != 0xffffffff) {
    pTVar6 = (TCameraVariableReferenceReader<bool> *)
             FCameraVariableTable::FindValue<bool>
                       (&param_2->VariableTable,
                        (FCameraVariableID)(this->EnableAutoFocusReader).VariableID.Value);
    pTVar8 = &this->EnableAutoFocusReader;
    if (pTVar6 != (TCameraVariableReferenceReader<bool> *)0x0) {
      pTVar8 = pTVar6;
    }
    bVar5 = pTVar8->DefaultValue;
    this->bLastEnableAutoFocus = bVar5;
    if (bVar5 == false) {
      return;
    }
  }
  if (((this->AutoFocusDampingFactorReader).DefaultValuePtr == (float *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->AutoFocusDampingFactorReader).VariableID.Value == 0xffffffff) ||
     (pfVar7 = FCameraVariableTable::FindValue<float>
                         (&param_2->VariableTable,
                          (FCameraVariableID)(this->AutoFocusDampingFactorReader).VariableID.Value),
     pfVar7 == (float *)0x0)) {
    pfVar7 = (this->AutoFocusDampingFactorReader).DefaultValuePtr;
  }
  (this->AutoFocusDamper).W0 = *pfVar7;
  dVar2 = (param_2->CameraPose).TargetDistance;
  this->LastUndampedFocusDistance = dVar2;
  if (param_1->bIsFirstFrame == false) {
    fVar9 = (float)(param_2->CameraPose).TargetDistance;
    FCriticalDamper::Update
              (&this->AutoFocusDamper,fVar9 - (float)this->LastDampedFocusDistance,
               param_1->DeltaTime);
    fVar9 = fVar9 - (this->AutoFocusDamper).X0;
    this->LastDampedFocusDistance = (double)fVar9;
    if (fVar9 == (param_2->CameraPose).FocusDistance) {
      return;
    }
    (param_2->CameraPose).FocusDistance = fVar9;
  }
  else {
    this->LastDampedFocusDistance = dVar2;
    if ((float)dVar2 == (param_2->CameraPose).FocusDistance) {
      return;
    }
    (param_2->CameraPose).FocusDistance = (float)dVar2;
  }
  pFVar1->FocusDistance = true;
  return;
}

// OnSerialize @ 14d62d780

void __thiscall
UE::Cameras::FAutoFocusCameraNodeEvaluator::OnSerialize
          (FAutoFocusCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  Cameras::operator<<(param_2,&this->AutoFocusDamper);
  pdVar1 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->LastUndampedFocusDistance,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&this->LastUndampedFocusDistance);
    }
  }
  else {
    this->LastUndampedFocusDistance = *pdVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  pdVar1 = &this->LastDampedFocusDistance;
  pdVar2 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  ::operator<<(param_2,&this->bLastEnableAutoFocus);
  return;
}

