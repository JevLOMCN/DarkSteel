// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b42fa60

UClass * __cdecl UDS_CameraAction_Base::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Base",
               &Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Base,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Base>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Base>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton;
}

// UDS_CameraAction_Base @ 14b4344b0

UDS_CameraAction_Base * __thiscall
UDS_CameraAction_Base::UDS_CameraAction_Base(UDS_CameraAction_Base *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraAction_Base__6B_;
  (this->CameraPresetData).FOV = 0.0;
  (this->CameraPresetData).Distance = 0.0;
  (this->CameraPresetData).Pitch = 0.0;
  (this->CameraPresetData).Yaw = 0.0;
  (this->CameraPresetData).DistanceMin = 0.0;
  (this->CameraPresetData).DistanceMax = 0.0;
  (this->CameraPresetData).PitchMin = 0.0;
  (this->CameraPresetData).PitchMax = 0.0;
  (this->CameraPresetData).CameraRotationLag = 0.0;
  (this->CameraPresetData).CamSensitivityUpdown = 0.0;
  (this->CameraPresetData).CamSensitivityLeftRight = 0.0;
  (this->CameraPresetData).CamSensitivityZoomInOut = 0.0;
  (this->CameraPresetData).TargetSocketName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraPresetData).TargetSocketName.Data.ArrayNum = 0;
  (this->CameraPresetData).TargetSocketName.Data.ArrayMax = 0;
  (this->CameraPresetData).DistanceLagMaxRange = 0.0;
  (this->CameraPresetData).DistanceLagSpeed = 0.0;
  (this->CameraPresetData).RecoveryWaitTime = 0.0;
  (this->CameraPresetData).RecoverySpeedDistance = 0.0;
  (this->CameraPresetData).RecoverySpeedPitch = 0.0;
  (this->CameraPresetData).RecoverySpeedYaw = 0.0;
  (this->CameraPresetData).TargetingModeLagSpeed = 0.0;
  (this->CameraPresetData).IsSlopeCam = false;
  (this->CameraPresetData).IsBattleMode = false;
  (this->CameraPresetData).ZoomInSocketOffsetRange = 0.0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  (this->OwnerPlayerControl).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_CameraAction_Base @ 14b434e80

void __thiscall UDS_CameraAction_Base::~UDS_CameraAction_Base(UDS_CameraAction_Base *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_CameraAction_Base__6B_;
  pFVar1 = (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraPresetData).TargetSocketName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b436870

UClass * __cdecl UDS_CameraAction_Base::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Base",
               &Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Base,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Base>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Base>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Base.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraAction_Base @ 14b437080

void __cdecl UDS_CameraAction_Base::StaticRegisterNativesUDS_CameraAction_Base(void)

{
  return;
}

// UDS_CameraAction_Base @ 14b8b22b0

UDS_CameraAction_Base * __thiscall
UDS_CameraAction_Base::UDS_CameraAction_Base
          (UDS_CameraAction_Base *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraAction_Base__6B_;
  (this->CameraPresetData).FOV = 0.0;
  (this->CameraPresetData).Distance = 0.0;
  (this->CameraPresetData).Pitch = 0.0;
  (this->CameraPresetData).Yaw = 0.0;
  (this->CameraPresetData).DistanceMin = 0.0;
  (this->CameraPresetData).DistanceMax = 0.0;
  (this->CameraPresetData).PitchMin = 0.0;
  (this->CameraPresetData).PitchMax = 0.0;
  (this->CameraPresetData).CameraRotationLag = 0.0;
  (this->CameraPresetData).CamSensitivityUpdown = 0.0;
  (this->CameraPresetData).CamSensitivityLeftRight = 0.0;
  (this->CameraPresetData).CamSensitivityZoomInOut = 0.0;
  (this->CameraPresetData).TargetSocketName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraPresetData).TargetSocketName.Data.ArrayNum = 0;
  (this->CameraPresetData).TargetSocketName.Data.ArrayMax = 0;
  (this->CameraPresetData).DistanceLagMaxRange = 0.0;
  (this->CameraPresetData).DistanceLagSpeed = 0.0;
  (this->CameraPresetData).RecoveryWaitTime = 0.0;
  (this->CameraPresetData).RecoverySpeedDistance = 0.0;
  (this->CameraPresetData).RecoverySpeedPitch = 0.0;
  (this->CameraPresetData).RecoverySpeedYaw = 0.0;
  (this->CameraPresetData).TargetingModeLagSpeed = 0.0;
  (this->CameraPresetData).IsSlopeCam = false;
  (this->CameraPresetData).IsBattleMode = false;
  (this->CameraPresetData).ZoomInSocketOffsetRange = 0.0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraBattleCurvePath.Data.ArrayMax = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayNum = 0;
  (this->CameraCommonData).CameraZoomCurvePath.Data.ArrayMax = 0;
  (this->OwnerPlayerControl).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// Initialize @ 14b8ca9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CameraAction_Base::Initialize
          (UDS_CameraAction_Base *this,FDS_CameraPresetData *param_1,FDS_CameraCommonData *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  (this->CameraPresetData).FOV = param_1->FOV;
  (this->CameraPresetData).Distance = param_1->Distance;
  (this->CameraPresetData).Pitch = param_1->Pitch;
  (this->CameraPresetData).Yaw = param_1->Yaw;
  (this->CameraPresetData).DistanceMin = param_1->DistanceMin;
  (this->CameraPresetData).DistanceMax = param_1->DistanceMax;
  (this->CameraPresetData).PitchMin = param_1->PitchMin;
  (this->CameraPresetData).PitchMax = param_1->PitchMax;
  (this->CameraPresetData).CameraRotationLag = param_1->CameraRotationLag;
  (this->CameraPresetData).CamSensitivityUpdown = param_1->CamSensitivityUpdown;
  (this->CameraPresetData).CamSensitivityLeftRight = param_1->CamSensitivityLeftRight;
  (this->CameraPresetData).CamSensitivityZoomInOut = param_1->CamSensitivityZoomInOut;
  dVar2 = (param_1->TargetOffset).field0_0x0._s_0.Y;
  (this->CameraPresetData).TargetOffset.field0_0x0._s_0.X =
       (param_1->TargetOffset).field0_0x0._s_0.X;
  (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Y = dVar2;
  (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Z =
       (param_1->TargetOffset).field0_0x0._s_0.Z;
  dVar2 = (param_1->SocketOffset).field0_0x0._s_0.Y;
  (this->CameraPresetData).SocketOffset.field0_0x0._s_0.X =
       (param_1->SocketOffset).field0_0x0._s_0.X;
  (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Y = dVar2;
  (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Z =
       (param_1->SocketOffset).field0_0x0._s_0.Z;
  dVar2 = (param_1->PivotOffset).field0_0x0._s_0.Y;
  (this->CameraPresetData).PivotOffset.field0_0x0._s_0.X = (param_1->PivotOffset).field0_0x0._s_0.X;
  (this->CameraPresetData).PivotOffset.field0_0x0._s_0.Y = dVar2;
  (this->CameraPresetData).PivotOffset.field0_0x0._s_0.Z = (param_1->PivotOffset).field0_0x0._s_0.Z;
  ::FString::operator=(&(this->CameraPresetData).TargetSocketName,&param_1->TargetSocketName);
  (this->CameraPresetData).DistanceLagMaxRange = param_1->DistanceLagMaxRange;
  (this->CameraPresetData).DistanceLagSpeed = param_1->DistanceLagSpeed;
  (this->CameraPresetData).RecoveryWaitTime = param_1->RecoveryWaitTime;
  (this->CameraPresetData).RecoverySpeedDistance = param_1->RecoverySpeedDistance;
  (this->CameraPresetData).RecoverySpeedPitch = param_1->RecoverySpeedPitch;
  (this->CameraPresetData).RecoverySpeedYaw = param_1->RecoverySpeedYaw;
  (this->CameraPresetData).TargetingModeLagSpeed = param_1->TargetingModeLagSpeed;
  (this->CameraPresetData).IsSlopeCam = param_1->IsSlopeCam;
  (this->CameraPresetData).IsBattleMode = param_1->IsBattleMode;
  dVar2 = (param_1->ZoomInSocketOffset).field0_0x0._s_0.Y;
  (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.X =
       (param_1->ZoomInSocketOffset).field0_0x0._s_0.X;
  (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Y = dVar2;
  (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Z =
       (param_1->ZoomInSocketOffset).field0_0x0._s_0.Z;
  (this->CameraPresetData).ZoomInSocketOffsetRange = param_1->ZoomInSocketOffsetRange;
  FDS_CameraCommonData::operator=(&this->CameraCommonData,param_2);
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  local_res10 = *(UObject **)&pUVar4[0x12].field_0x20;
  if (local_res10 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b8cab9c;
  }
  local_res10 = (UObject *)0x0;
LAB_14b8cab9c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(this->OwnerPlayerControl).WeakPtr,(FObjectPtr)&local_res10);
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  TVar6 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)&pUVar4[0x29].field_0x10);
                    /* WARNING: Load size is inaccurate */
  (this->OwnerCharStateData).WeakPtr = *TVar6.WeakPtr;
  return;
}

// Reset @ 14b8e59a0

void __thiscall UDS_CameraAction_Base::Reset(UDS_CameraAction_Base *this)

{
  return;
}

// UpdateCameraData @ 14b8f1e70

void __thiscall
UDS_CameraAction_Base::UpdateCameraData
          (UDS_CameraAction_Base *this,FDS_CameraControlData *param_1,float param_2)

{
  return;
}

