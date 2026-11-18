// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// GetTypeID @ 14d661c10

FCameraObjectTypeID * __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::GetTypeID(FEnvelopeShakeCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662f10

bool __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::IsKindOf
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FShakeCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d663960

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnBuild
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  FCameraNodeEvaluator *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ != 0) {
    pUVar4 = UEnvelopeShakeCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      lVar6 = this->_padding_;
      goto LAB_14d663999;
    }
  }
  lVar6 = 0;
LAB_14d663999:
  pFVar5 = FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar6 + 0x68));
  if (pFVar5 == (FCameraNodeEvaluator *)0x0) {
    this->ShakeEvaluator = (FShakeCameraNodeEvaluator *)0x0;
    return;
  }
  cVar3 = (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&FShakeCameraNodeEvaluator::PrivateTypeID);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsKindOf<Type>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                       ,0x123,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ShakeEvaluator = (FShakeCameraNodeEvaluator *)pFVar5;
  return;
}

// OnGetChildren @ 14d6674c0

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnGetChildren
          (FEnvelopeShakeCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = (FCameraNodeEvaluator *)this->ShakeEvaluator;
  local_18._First = &local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitialize @ 14d668200

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnInitialize
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  if (this->_padding_ != 0) {
    pUVar2 = UEnvelopeShakeCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d668248;
    }
  }
  lVar3 = 0;
LAB_14d668248:
  fVar4 = FFloatCameraParameter::GetValue
                    ((FFloatCameraParameter *)(lVar3 + 0x38),&param_2->VariableTable);
  this->EaseInTime = fVar4;
  fVar4 = FFloatCameraParameter::GetValue
                    ((FFloatCameraParameter *)(lVar3 + 0x48),&param_2->VariableTable);
  this->EaseOutTime = fVar4;
  fVar5 = FFloatCameraParameter::GetValue
                    ((FFloatCameraParameter *)(lVar3 + 0x58),&param_2->VariableTable);
  fVar4 = this->EaseOutTime;
  fVar6 = this->EaseInTime;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->CurrentTime = 0.0;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->EaseOutTime = fVar4;
  this->EaseInTime = fVar6;
  this->TotalTime = fVar5;
  if (fVar5 < fVar4 + fVar6) {
    fVar5 = fVar5 * __real_3f000000;
    this->EaseOutTime = fVar5;
    this->EaseInTime = fVar5;
  }
  return;
}

// OnRestartShake @ 14d6691f0

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnRestartShake
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeShakeRestartParams *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->EaseInTime;
  if ((fVar1 <= 0.0) || (fVar1 <= this->CurrentTime)) {
    fVar2 = this->EaseOutTime;
    if (0.0 < fVar2) {
      if (this->TotalTime - fVar2 < this->CurrentTime) {
        this->CurrentTime = ((this->TotalTime - this->CurrentTime) / fVar2) * fVar1;
        goto LAB_14d66925c;
      }
    }
    this->TotalTime = (this->TotalTime - this->CurrentTime) + this->TotalTime;
  }
  else {
    this->TotalTime = this->CurrentTime + this->TotalTime;
  }
LAB_14d66925c:
  if (this->ShakeEvaluator == (FShakeCameraNodeEvaluator *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d5cc723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->ShakeEvaluator + 0x78))();
  return;
}

// OnRun @ 14d66cf80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnRun
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FShakeCameraNodeEvaluator *pFVar1;
  TVector<double>_u_0 TStack_28;
  
  if (this->CurrentTime < this->TotalTime) {
    this->CurrentTime = this->CurrentTime + param_1->DeltaTime;
    pFVar1 = this->ShakeEvaluator;
    if (pFVar1 != (FShakeCameraNodeEvaluator *)0x0) {
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
  }
  return;
}

// OnSerialize @ 14d66e6a0

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnSerialize
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->EaseInTime,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->EaseInTime);
    }
  }
  else {
    this->EaseInTime = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pfVar2 = &this->EaseOutTime;
  puVar1 = &param_2->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pfVar2 = &this->TotalTime;
  pfVar3 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pfVar2 = &this->CurrentTime;
  pfVar3 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((*puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d66e7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar2);
  return;
}

// OnShakeResult @ 14d66ebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::OnShakeResult
          (FEnvelopeShakeCameraNodeEvaluator *this,FCameraNodeShakeParams *param_1,
          FCameraNodeShakeResult *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_138 [32];
  FCameraNodeShakeResult local_118;
  FCameraNodeShakeParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  fVar3 = this->TotalTime;
  fVar1 = this->CurrentTime;
  if ((fVar3 <= fVar1) || (this->ShakeEvaluator == (FShakeCameraNodeEvaluator *)0x0)) {
    param_2->ShakeTimeLeft = 0.0;
    return;
  }
  fVar2 = this->EaseInTime;
  if ((fVar2 <= 0.0) || (fVar2 <= fVar1)) {
    fVar2 = this->EaseOutTime;
    local_c8.ShakeScale = __real_3f800000;
    if ((fVar2 <= 0.0) || (fVar1 <= fVar3 - fVar2)) goto LAB_14d66ec8d;
    fVar2 = (fVar3 - fVar1) / fVar2;
  }
  else {
    fVar2 = fVar1 / fVar2;
  }
  local_c8.ShakeScale = (__real_40400000 - (fVar2 + fVar2)) * fVar2 * fVar2;
LAB_14d66ec8d:
  local_c8.UserPlaySpaceMatrix.M[0][0] = (param_1->UserPlaySpaceMatrix).M[0][0];
  local_c8.UserPlaySpaceMatrix.M[0][1] = (param_1->UserPlaySpaceMatrix).M[0][1];
  fVar3 = fVar3 - fVar1;
  local_c8.UserPlaySpaceMatrix.M[0][2] = (param_1->UserPlaySpaceMatrix).M[0][2];
  local_c8.UserPlaySpaceMatrix.M[0][3] = (param_1->UserPlaySpaceMatrix).M[0][3];
  local_c8.ChildParams._0_4_ = *(undefined4 *)&param_1->ChildParams;
  local_c8.ChildParams._4_4_ = *(undefined4 *)((longlong)&param_1->ChildParams + 4);
  local_c8.PlaySpace = param_1->PlaySpace;
  local_c8._13_3_ = *(undefined3 *)&param_1->field_0xd;
  local_118.ShakenResult = param_2->ShakenResult;
  local_c8.UserPlaySpaceMatrix.M[1][0] = (param_1->UserPlaySpaceMatrix).M[1][0];
  local_c8.UserPlaySpaceMatrix.M[1][1] = (param_1->UserPlaySpaceMatrix).M[1][1];
  local_c8.UserPlaySpaceMatrix.M[2][0] = (param_1->UserPlaySpaceMatrix).M[2][0];
  local_c8.UserPlaySpaceMatrix.M[2][1] = (param_1->UserPlaySpaceMatrix).M[2][1];
  local_c8.UserPlaySpaceMatrix.M[3][0] = (param_1->UserPlaySpaceMatrix).M[3][0];
  local_c8.UserPlaySpaceMatrix.M[3][1] = (param_1->UserPlaySpaceMatrix).M[3][1];
  local_c8.UserPlaySpaceMatrix.M[1][2] = (param_1->UserPlaySpaceMatrix).M[1][2];
  local_c8.UserPlaySpaceMatrix.M[1][3] = (param_1->UserPlaySpaceMatrix).M[1][3];
  local_c8.UserPlaySpaceMatrix.M[2][2] = (param_1->UserPlaySpaceMatrix).M[2][2];
  local_c8.UserPlaySpaceMatrix.M[2][3] = (param_1->UserPlaySpaceMatrix).M[2][3];
  local_c8.UserPlaySpaceMatrix.M[3][2] = (param_1->UserPlaySpaceMatrix).M[3][2];
  local_c8.UserPlaySpaceMatrix.M[3][3] = (param_1->UserPlaySpaceMatrix).M[3][3];
  local_118.ShakeDelta.Location.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118.ShakeDelta.Location.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118.ShakeDelta.FieldOfView = 0.0;
  local_118.ShakeTimeLeft = 0.0;
  local_c8.ShakeScale = param_1->ShakeScale * local_c8.ShakeScale;
  local_118.ShakeDelta.Location.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_118.ShakeDelta.Rotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_118.ShakeDelta.Rotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_118.ShakeDelta.Rotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  FShakeCameraNodeEvaluator::ShakeResult(this->ShakeEvaluator,&local_c8,&local_118);
  FCameraNodeShakeDelta::Combine(&param_2->ShakeDelta,&local_118.ShakeDelta,local_c8.ShakeScale);
  param_2->ShakeTimeLeft = local_118.ShakeTimeLeft;
  if (local_118.ShakeTimeLeft < 0.0) {
    param_2->ShakeTimeLeft = fVar3;
  }
  else {
    if (fVar3 <= local_118.ShakeTimeLeft) {
      local_118.ShakeTimeLeft = fVar3;
    }
    if (local_118.ShakeTimeLeft <= 0.0) {
      local_118.ShakeTimeLeft = 0.0;
    }
    param_2->ShakeTimeLeft = local_118.ShakeTimeLeft;
  }
  return;
}

