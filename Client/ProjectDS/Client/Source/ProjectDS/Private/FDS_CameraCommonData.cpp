// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b42f930

UScriptStruct * __cdecl FDS_CameraCommonData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CameraCommonData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CameraCommonData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CameraCommonData,(UObject *)pUVar1,
                         L"DS_CameraCommonData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CameraCommonData.OuterSingleton;
}

// operator= @ 14b8b35d0

FDS_CameraCommonData * __thiscall
FDS_CameraCommonData::operator=(FDS_CameraCommonData *this,FDS_CameraCommonData *param_1)

{
  this->MarginWidthRatioDef = param_1->MarginWidthRatioDef;
  this->MarginWidthRatioMin = param_1->MarginWidthRatioMin;
  this->MarginWidthRatioMax = param_1->MarginWidthRatioMax;
  this->MouseSensitivityDef = param_1->MouseSensitivityDef;
  this->MouseSensitivityMin = param_1->MouseSensitivityMin;
  this->MouseSensitivityMax = param_1->MouseSensitivityMax;
  this->MouseZoomSensitivityDef = param_1->MouseZoomSensitivityDef;
  this->MouseZoomSensitivityMin = param_1->MouseZoomSensitivityMin;
  this->MouseZoomSensitivityMax = param_1->MouseZoomSensitivityMax;
  this->GamepadSensitivityDef = param_1->GamepadSensitivityDef;
  this->GamepadSensitivityMin = param_1->GamepadSensitivityMin;
  this->GamepadSensitivityMax = param_1->GamepadSensitivityMax;
  this->GamepadZoomSensitivityDef = param_1->GamepadZoomSensitivityDef;
  this->GamepadZoomSensitivityMin = param_1->GamepadZoomSensitivityMin;
  this->GamepadZoomSensitivityMax = param_1->GamepadZoomSensitivityMax;
  this->CamChangeSpeed = param_1->CamChangeSpeed;
  this->SlopeLagSpeed = param_1->SlopeLagSpeed;
  this->SlopeDefaultPitch = param_1->SlopeDefaultPitch;
  this->LockOnMinDistance = param_1->LockOnMinDistance;
  this->LockOnMinPitch = param_1->LockOnMinPitch;
  this->LockOnMaxPitch = param_1->LockOnMaxPitch;
  this->LockOnMarginAngle = param_1->LockOnMarginAngle;
  this->LockOnMarginCircle = param_1->LockOnMarginCircle;
  this->LockOnMarginPitchAngle = param_1->LockOnMarginPitchAngle;
  this->LockOnMarginPitchCircle = param_1->LockOnMarginPitchCircle;
  this->RecoveryWaiting = param_1->RecoveryWaiting;
  this->CamTrackingAllowAngle = param_1->CamTrackingAllowAngle;
  this->CameraBattleMedian = param_1->CameraBattleMedian;
  this->CameraBattleDistance = param_1->CameraBattleDistance;
  this->CameraBattleRotationSpeed1 = param_1->CameraBattleRotationSpeed1;
  this->CameraBattleRotationSpeed2 = param_1->CameraBattleRotationSpeed2;
  this->CameraBattleRotationLerpSpeed = param_1->CameraBattleRotationLerpSpeed;
  this->FovLerpSpeed = param_1->FovLerpSpeed;
  this->TargetOffsetLerpSpeed = param_1->TargetOffsetLerpSpeed;
  this->SocketOffsetLerpSpeed = param_1->SocketOffsetLerpSpeed;
  this->MarginRecoverySpeed = param_1->MarginRecoverySpeed;
  this->DecelerationFactor = param_1->DecelerationFactor;
  this->InterpSpeed = param_1->InterpSpeed;
  ::FString::operator=(&this->CameraBattleCurvePath,&param_1->CameraBattleCurvePath);
  ::FString::operator=(&this->CameraZoomCurvePath,&param_1->CameraZoomCurvePath);
  this->CameraZoomInCorrectionSpeed = param_1->CameraZoomInCorrectionSpeed;
  this->CameraBattleRotationInterpTime = param_1->CameraBattleRotationInterpTime;
  this->CameraBattleFrontalRadius = param_1->CameraBattleFrontalRadius;
  this->CameraBattleMarginMin = param_1->CameraBattleMarginMin;
  this->MaxMouseRotate = param_1->MaxMouseRotate;
  this->MaxRotateAnglePerSec = param_1->MaxRotateAnglePerSec;
  this->LockOnHeightMinRatio = param_1->LockOnHeightMinRatio;
  this->LockOnHeightMaxRatio = param_1->LockOnHeightMaxRatio;
  this->LockOnMaxHeight = param_1->LockOnMaxHeight;
  return this;
}

// SetData @ 14ba6c570

void __thiscall FDS_CameraCommonData::SetData(FDS_CameraCommonData *this)

{
  bool bVar1;
  FDS_CameraCommonParamTableRow *pFVar2;
  wchar_t *pwVar3;
  wchar_t *_Str;
  double dVar4;
  
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(1,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  _Str = L"";
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MarginWidthRatioDef = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(2,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MarginWidthRatioMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(3,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MarginWidthRatioMax = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(4,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseSensitivityDef = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(5,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseSensitivityMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(6,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseSensitivityMax = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(7,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseZoomSensitivityDef = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(8,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseZoomSensitivityMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(9,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MouseZoomSensitivityMax = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(10,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadSensitivityDef = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0xb,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadSensitivityMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0xc,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadSensitivityMax = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0xd,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadZoomSensitivityDef = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0xe,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadZoomSensitivityMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0xf,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->GamepadZoomSensitivityMax = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x10,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CamChangeSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x11,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->SlopeLagSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x12,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->SlopeDefaultPitch = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x14,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMinDistance = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x13,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMinPitch = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x1f,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMaxPitch = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x2a,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMarginAngle = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x2c,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMarginCircle = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x34,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMarginPitchAngle = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x33,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnMarginPitchCircle = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x15,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->RecoveryWaiting = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x16,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CamTrackingAllowAngle = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x17,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleMedian = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x18,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleDistance = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x19,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleRotationSpeed1 = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x1a,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleRotationSpeed2 = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x22,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleRotationLerpSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x1c,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->FovLerpSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x1d,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->TargetOffsetLerpSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x1e,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->SocketOffsetLerpSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x2b,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MarginRecoverySpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x20,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->DecelerationFactor = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x21,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->InterpSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x24,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraZoomInCorrectionSpeed = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x25,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleRotationInterpTime = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x27,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleFrontalRadius = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x28,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->CameraBattleMarginMin = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x31,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MaxMouseRotate = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x30,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->MaxRotateAnglePerSec = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x2e,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnHeightMinRatio = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x2f,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(pwVar3);
    this->LockOnHeightMaxRatio = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x32,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    if ((pFVar2->ParamValue).Data.ArrayNum != 0) {
      _Str = (wchar_t *)(pFVar2->ParamValue).Data.AllocatorInstance.Data;
    }
    dVar4 = _wtof(_Str);
    this->LockOnMaxHeight = (float)dVar4;
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x23,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    ::FString::operator=(&this->CameraBattleCurvePath,&pFVar2->ParamValue);
  }
  pFVar2 = FDS_CameraCommonParamTableRow::GetRef(0x29,true);
  bVar1 = FDS_CameraCommonParamTableRow::IsValid(pFVar2);
  if (bVar1) {
    ::FString::operator=(&this->CameraZoomCurvePath,&pFVar2->ParamValue);
  }
  return;
}

