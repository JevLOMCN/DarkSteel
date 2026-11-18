// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// FSimpleBlendCameraNodeEvaluator @ 14d5fcef0

FSimpleBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::FSimpleBlendCameraNodeEvaluator
          (FSimpleBlendCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  (this->BlendTimeReader).DefaultValuePtr = (float *)0x0;
  this->BlendFactor = 0.0;
  this->bIsBlendFinished = false;
  this->bReverse = false;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  (this->BlendTimeReader).VariableID.Value = 0xffffffff;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  return this;
}

// GetTypeID @ 14d61e6e0

FCameraObjectTypeID * __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::GetTypeID(FSimpleBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6214b0

bool __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::IsKindOf
          (FSimpleBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

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

// OnBlendParameters @ 14d622dd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnBlendParameters
          (FSimpleBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  bool bVar1;
  
  FCameraVariableTable::Lerp
            (param_2->VariableTable,param_1->ChildVariableTable,param_1->VariableTableFilter,
             this->BlendFactor);
  if (this->bReverse == false) {
    bVar1 = __real_3f800000 <= this->BlendFactor;
  }
  else {
    bVar1 = this->BlendFactor <= 0.0;
  }
  param_2->bIsBlendFull = bVar1;
  param_2->bIsBlendFinished = this->bIsBlendFinished;
  return;
}

// OnBlendResults @ 14d623c10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnBlendResults
          (FSimpleBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  bool bVar1;
  
  FCameraNodeEvaluationResult::LerpAll
            (param_2->BlendedResult,param_1->ChildResult,this->BlendFactor,false);
  if (this->bReverse == false) {
    bVar1 = __real_3f800000 <= this->BlendFactor;
  }
  else {
    bVar1 = this->BlendFactor <= 0.0;
  }
  param_2->bIsBlendFull = bVar1;
  param_2->bIsBlendFinished = this->bIsBlendFinished;
  return;
}

// OnBuildDebugBlocks @ 14d624ab0

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnBuildDebugBlocks
          (FSimpleBlendCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FCameraDebugBlock *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x30,8);
  pFVar1[1]._padding_ = 0;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FSimpleBlendCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar1);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar1);
  *(float *)&pFVar1[1]._padding_ = this->BlendFactor;
  return;
}

// OnComputeBlendFactor @ 14d626080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnComputeBlendFactor
          (FSimpleBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FSimpleBlendCameraNodeEvaluationResult *param_2)

{
  return;
}

// OnRun @ 14d62c4d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnRun
          (FSimpleBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  (**(code **)(this->_padding_ + 0x90))(this,param_1,local_res8);
  fVar1 = __real_3f800000;
  if (__real_3f800000 <= local_res8[0]) {
    local_res8[0] = __real_3f800000;
  }
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  this->BlendFactor = local_res8[0];
  if (this->bReverse != false) {
    this->BlendFactor = fVar1 - local_res8[0];
  }
  return;
}

// OnSerialize @ 14d62de20

void __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnSerialize
          (FSimpleBlendCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->BlendFactor,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->BlendFactor);
    }
  }
  else {
    this->BlendFactor = *pfVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  ::operator<<(param_2,&this->bIsBlendFinished);
  ::operator<<(param_2,&this->bReverse);
  return;
}

// OnSetReversed @ 14d62e0a0

bool __thiscall
UE::Cameras::FSimpleBlendCameraNodeEvaluator::OnSetReversed
          (FSimpleBlendCameraNodeEvaluator *this,bool param_1)

{
  this->bReverse = param_1;
  return true;
}

