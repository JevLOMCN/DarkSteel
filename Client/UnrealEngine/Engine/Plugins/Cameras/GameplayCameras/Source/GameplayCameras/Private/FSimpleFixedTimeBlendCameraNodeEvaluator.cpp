// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// FSimpleFixedTimeBlendCameraNodeEvaluator @ 14d5fcf50

FSimpleFixedTimeBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)&this->_padding_ = 7;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  this->TotalTime = 0.0;
  this->CurrentTime = 0.0;
  this->_padding_ = (longlong)&___7FSimpleFixedTimeBlendCameraNodeEvaluator_Cameras_UE__6B_;
  return this;
}

// GetTimeFactor @ 14d61e340

float __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::GetTimeFactor
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this)

{
  if (0.0 < this->TotalTime) {
    return this->CurrentTime / this->TotalTime;
  }
  return __real_3f800000;
}

// GetTypeID @ 14d61e6f0

FCameraObjectTypeID * __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::GetTypeID
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6214e0

bool __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::IsKindOf
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if ((((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
       (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
                 FSimpleBlendCameraNodeEvaluator::PrivateTypeID)) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnInitialize @ 14d628b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::OnInitialize
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this,
          FCameraNodeEvaluatorInitializeParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  float *pfVar4;
  longlong lVar5;
  
  if (this->_padding_ == 0) {
LAB_14d628ba8:
    this->_padding_ = 0x38;
    *(undefined4 *)&this->_padding_ = _DAT_0000003c;
  }
  else {
    pUVar3 = USimpleFixedTimeBlendCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (!bVar2) goto LAB_14d628ba8;
    lVar5 = this->_padding_ + 0x38;
    this->_padding_ = lVar5;
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(this->_padding_ + 0x3c);
    if (lVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultValuePtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                         ,0x31,L"Parameter reader has no value pointer!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((int)this->_padding_ != -1) {
    pfVar4 = FCameraVariableTable::FindValue<float>
                       (&param_2->VariableTable,(FCameraVariableID)(uint)this->_padding_);
    if (pfVar4 != (float *)0x0) goto LAB_14d628be1;
  }
  pfVar4 = (float *)this->_padding_;
LAB_14d628be1:
  this->TotalTime = *pfVar4;
  return;
}

// OnInitializeFromInterruption @ 14d629070

bool __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::OnInitializeFromInterruption
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this,
          FCameraNodeBlendInterruptionParams *param_1)

{
  FBlendCameraNodeEvaluator *pFVar1;
  char cVar2;
  FBlendCameraNodeEvaluator *pFVar3;
  float fVar4;
  
  pFVar1 = param_1->InterruptedBlend;
  if (pFVar1 != (FBlendCameraNodeEvaluator *)0x0) {
    cVar2 = (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1);
    pFVar3 = (FBlendCameraNodeEvaluator *)0x0;
    if (cVar2 != '\0') {
      pFVar3 = pFVar1;
    }
    if (pFVar3 != (FBlendCameraNodeEvaluator *)0x0) {
      fVar4 = __real_3f800000;
      if (0.0 < *(float *)&pFVar3[1].field_0x18) {
        fVar4 = *(float *)&pFVar3[1].field_0x1c / *(float *)&pFVar3[1].field_0x18;
      }
      this->TotalTime = fVar4 * this->TotalTime;
    }
  }
  return false;
}

// OnRun @ 14d62c540

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::OnRun
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float local_res8 [8];
  
  fVar3 = param_1->DeltaTime + this->CurrentTime;
  fVar1 = this->TotalTime;
  this->CurrentTime = fVar3;
  if (fVar1 <= fVar3) {
    this->CurrentTime = fVar1;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  local_res8[0] = 0.0;
  (**(code **)(this->_padding_ + 0x90))(fVar3,fVar1,local_res8);
  fVar1 = __real_3f800000;
  cVar2 = *(char *)((longlong)&this->_padding_ + 5);
  if (__real_3f800000 <= local_res8[0]) {
    local_res8[0] = __real_3f800000;
  }
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  *(float *)&this->_padding_ = local_res8[0];
  if (cVar2 != '\0') {
    *(float *)&this->_padding_ = fVar1 - local_res8[0];
  }
  return;
}

// OnSerialize @ 14d62dea0

void __thiscall
UE::Cameras::FSimpleFixedTimeBlendCameraNodeEvaluator::OnSerialize
          (FSimpleFixedTimeBlendCameraNodeEvaluator *this,
          FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  FSimpleBlendCameraNodeEvaluator::OnSerialize
            ((FSimpleBlendCameraNodeEvaluator *)this,param_1,param_2);
  pfVar1 = &this->CurrentTime;
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d62defe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
  return;
}

