// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b42f8f0

UScriptStruct * __cdecl FDS_CameraPresetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_CameraPresetData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_CameraPresetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_CameraPresetData,(UObject *)pUVar1,
                         L"DS_CameraPresetData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_CameraPresetData.OuterSingleton;
}

// CopyFrom @ 14ba3a150

void __thiscall
FDS_CameraPresetData::CopyFrom(FDS_CameraPresetData *this,FDS_CameraParametersTableRow *param_1)

{
  double dVar1;
  
  if (param_1 != (FDS_CameraParametersTableRow *)0x0) {
    this->FOV = param_1->FOV;
    this->Distance = param_1->Distance;
    this->Pitch = param_1->Pitch;
    this->Yaw = param_1->Yaw;
    this->DistanceMin = param_1->DistanceMin;
    this->DistanceMax = param_1->DistanceMax;
    this->PitchMin = param_1->PitchMin;
    this->PitchMax = param_1->PitchMax;
    dVar1 = (param_1->TargetOffset).field0_0x0._s_0.Y;
    (this->TargetOffset).field0_0x0._s_0.X = (param_1->TargetOffset).field0_0x0._s_0.X;
    (this->TargetOffset).field0_0x0._s_0.Y = dVar1;
    (this->TargetOffset).field0_0x0._s_0.Z = (param_1->TargetOffset).field0_0x0._s_0.Z;
    dVar1 = (param_1->SocketOffset).field0_0x0._s_0.Y;
    (this->SocketOffset).field0_0x0._s_0.X = (param_1->SocketOffset).field0_0x0._s_0.X;
    (this->SocketOffset).field0_0x0._s_0.Y = dVar1;
    (this->SocketOffset).field0_0x0._s_0.Z = (param_1->SocketOffset).field0_0x0._s_0.Z;
    dVar1 = (param_1->PivotOffset).field0_0x0._s_0.Y;
    (this->PivotOffset).field0_0x0._s_0.X = (param_1->PivotOffset).field0_0x0._s_0.X;
    (this->PivotOffset).field0_0x0._s_0.Y = dVar1;
    (this->PivotOffset).field0_0x0._s_0.Z = (param_1->PivotOffset).field0_0x0._s_0.Z;
    ::FString::operator=(&this->TargetSocketName,&param_1->TargetSocket);
    this->DistanceLagMaxRange = param_1->DistanceLagMaxRange;
    this->DistanceLagSpeed = param_1->DistanceLagSpeed;
    this->RecoveryWaitTime = param_1->RecoveryWaitTime;
    this->RecoverySpeedDistance = param_1->RecoverySpeedDistance;
    this->RecoverySpeedPitch = param_1->RecoverySpeedPitch;
    this->RecoverySpeedYaw = param_1->RecoverySpeedYaw;
    this->CamSensitivityUpdown = param_1->CamSensitivityUpdown;
    this->CamSensitivityLeftRight = param_1->CamSensitivityLeftRight;
    this->CamSensitivityZoomInOut = param_1->CamSensitivityZoomInOut;
    this->CameraRotationLag = param_1->CameraRotationLag;
    this->TargetingModeLagSpeed = param_1->TargetingModeLagSpeed;
    this->IsSlopeCam = param_1->IsSlopeCam;
    this->IsBattleMode = param_1->IsMargin;
    dVar1 = (param_1->ZoomInSocketOffset).field0_0x0._s_0.Y;
    (this->ZoomInSocketOffset).field0_0x0._s_0.X = (param_1->ZoomInSocketOffset).field0_0x0._s_0.X;
    (this->ZoomInSocketOffset).field0_0x0._s_0.Y = dVar1;
    (this->ZoomInSocketOffset).field0_0x0._s_0.Z = (param_1->ZoomInSocketOffset).field0_0x0._s_0.Z;
    this->ZoomInSocketOffsetRange = param_1->ZoomInSocketOffsetRange;
  }
  return;
}

