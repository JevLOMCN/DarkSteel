// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 51

// StaticClass @ 14b431b60

UClass * __cdecl UDS_CameraStateBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateBase",
               &Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateBase,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateBase>,
               InternalVTableHelperCtorCaller<UDS_CameraStateBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton;
}

// UDS_CameraStateBase @ 14b4347e0

UDS_CameraStateBase * __thiscall
UDS_CameraStateBase::UDS_CameraStateBase(UDS_CameraStateBase *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  double dVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->CameraStateType = CameraStateBase;
  this->PrevCameraStateType = CameraStateBase;
  this->_padding_ = (longlong)&___7UDS_CameraStateBase__6B_;
  (this->OwnerPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCameraBoom).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerFollowCamera).WeakPtr = (FWeakObjectPtr)0x0;
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
  (this->CameraActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraActions).ArrayNum = 0;
  (this->CameraActions).ArrayMax = 0;
  (this->PrevAxisDeltaValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CurAxisDeltaValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CameraLagSpeed = 0.0;
  this->CameraLagDeltaSpeed = 0.0;
  (this->AxisValue).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->CameraControlData).LastMousePosition.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CameraControlData).CurMousePosition.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CameraControlData).CameraRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CameraControlData).CameraRotation.Yaw = dVar3;
  (this->CameraControlData).CameraRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CameraControlData).CameraZoomValue = 0.0;
  (this->CameraControlData).IsDragReleased = false;
  (this->CameraControlData).bIsRotateCameraByUserInput = false;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Z = (double)uVar2;
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CameraInterp_Rotation).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_FOV).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevSocketOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevSocketOffset).field0_0x0._s_0.Y = (double)uVar2;
  (this->PrevSocketOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->Curve_ZoomSocketOffset).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CameraInterp_Zoom).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  this->PrevCameraZoomValue = 0.0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsPostUpdated = false;
  this->CameraChangeTime = 0.0;
  this->SkillModeID = 0;
  this->CameraChangeStartTime = 0.0;
  this->CameraChangeEndTime = 0.0;
  this->CameraChangeElapsedTime = 0.0;
  (this->NowMousePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_CameraStateBase @ 14b435110

void __thiscall UDS_CameraStateBase::~UDS_CameraStateBase(UDS_CameraStateBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_CameraStateBase__6B_;
  pFVar1 = (this->CameraActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// GetPrivateStaticClass @ 14b436e50

UClass * __cdecl UDS_CameraStateBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateBase",
               &Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateBase,0x330,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateBase>,
               InternalVTableHelperCtorCaller<UDS_CameraStateBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateBase.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraStateBase @ 14b437100

void __cdecl UDS_CameraStateBase::StaticRegisterNativesUDS_CameraStateBase(void)

{
  return;
}

// __VTableCtorCaller @ 14b438350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_CameraStateBase::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  double dVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined2 *)&pUVar4[0xc].field_0x8 = 0x101;
    *(undefined ***)pUVar4 = &___7UDS_CameraStateBase__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined8 *)&pUVar4[1].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)&pUVar4[2].field_0x8 = 0;
    *(undefined8 *)&pUVar4[2].field_0x10 = 0;
    *(undefined8 *)&pUVar4[2].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined8 *)&pUVar4[5].field_0x8 = 0;
    *(undefined8 *)&pUVar4[5].field_0x10 = 0;
    *(undefined4 *)&pUVar4[5].field_0x18 = 0;
    *(undefined2 *)&pUVar4[5].field_0x1c = 0;
    *(undefined4 *)&pUVar4[6].field_0x10 = 0;
    *(undefined8 *)&pUVar4[10].field_0x10 = 0;
    *(undefined8 *)&pUVar4[10].field_0x18 = 0;
    *(undefined8 *)&pUVar4[10].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 0xb) = 0;
    *(undefined8 *)&pUVar4[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar4[0xc].field_0x18 = 0;
    *(TVector2<double>_u_0 *)&pUVar4[0xc].field_0x20 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&pUVar4[0xd].field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&pUVar4[0xd].field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    *(undefined8 *)&pUVar4[0xe].field_0x10 = 0;
    ((TVector2<double>_u_0 *)(pUVar4 + 0xe))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    *(TVector2<double>_u_0 *)&pUVar4[0xe].field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    ((TVector2<double>_u_0 *)(pUVar4 + 0xf))->_s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    *(double *)&pUVar4[0xf].field_0x10 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    *(double *)&pUVar4[0xf].field_0x18 = dVar3;
    *(double *)&pUVar4[0xf].field_0x20 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pUVar4 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar4[0x10].field_0x8 = uVar2;
    *(double *)&pUVar4[0x10].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)&pUVar4[0x10].field_0x18 = 0;
    *(undefined2 *)&pUVar4[0x10].field_0x1c = 0;
    *(TVector2<double>_u_0 *)&pUVar4[0x10].field_0x20 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(undefined8 *)&pUVar4[0x11].field_0x8 = 0;
    *(undefined8 *)&pUVar4[0x11].field_0x10 = 0;
    *(undefined8 *)&pUVar4[0x11].field_0x18 = 0;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&pUVar4[0x11].field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pUVar4 + 0x12) = uVar2;
    *(double *)&pUVar4[0x12].field_0x8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)&pUVar4[0x12].field_0x10 = 0;
    *(undefined8 *)&pUVar4[0x12].field_0x18 = 0;
    *(undefined8 *)&pUVar4[0x12].field_0x20 = 0;
    *(undefined8 *)&pUVar4[0x13].field_0x8 = 0;
    *(undefined4 *)(pUVar4 + 0x13) = 0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    pUVar4[0x13].field_0x20 = 0;
    *(undefined8 *)&pUVar4[0x13].field_0x24 = 0;
    *(TVector2<double>_u_0 *)&pUVar4[0x13].field_0x10 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    *(undefined8 *)&pUVar4[0x14].field_0x4 = 0;
    *(undefined4 *)&pUVar4[0x14].field_0xc = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// UDS_CameraStateBase @ 14b8b2590

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CameraStateBase * __thiscall
UDS_CameraStateBase::UDS_CameraStateBase(UDS_CameraStateBase *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  double dVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UEnum *this_00;
  FName *pFVar7;
  long64 lVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FString local_68;
  TStringView<wchar_t> local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraStateBase__6B_;
  (this->OwnerPlayerController).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerCameraBoom).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerFollowCamera).WeakPtr = (FWeakObjectPtr)0x0;
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
  iVar11 = 0;
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
  this->CameraStateType = CameraStateBase;
  this->PrevCameraStateType = CameraStateBase;
  (this->CameraActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraActions).ArrayNum = 0;
  (this->CameraActions).ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  (this->PrevAxisDeltaValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CurAxisDeltaValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CameraLagSpeed = 0.0;
  this->CameraLagDeltaSpeed = 0.0;
  (this->AxisValue).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->CameraControlData).LastMousePosition.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CameraControlData).CurMousePosition.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CameraControlData).CameraRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CameraControlData).CameraRotation.Yaw = dVar3;
  (this->CameraControlData).CameraRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Y = (double)uVar2;
  (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CameraControlData).CameraZoomValue = 0.0;
  (this->CameraControlData).IsDragReleased = false;
  (this->CameraControlData).bIsRotateCameraByUserInput = false;
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CameraInterp_Rotation).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_FOV).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevSocketOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevSocketOffset).field0_0x0._s_0.Y = (double)uVar2;
  (this->PrevSocketOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  (this->Curve_ZoomSocketOffset).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CameraInterp_Zoom).field0_0x0.DebugPtr = (UDS_CameraInterp *)0x0;
  lVar9 = this->_padding_;
  this->PrevCameraZoomValue = 0.0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IsPostUpdated = false;
  this->CameraChangeTime = 0.0;
  this->SkillModeID = 0;
  this->CameraChangeStartTime = 0.0;
  this->CameraChangeEndTime = 0.0;
  this->CameraChangeElapsedTime = 0.0;
  (this->NowMousePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  if (lVar9 != 0) {
    local_58.DataPtr = *(wchar_t **)(lVar9 + 0x18);
    ::FName::ToString((FName *)&local_58,&local_68);
  }
  pFVar4 = ::FString::Replace(&local_68,&local_38,L"DS_",L"",IgnoreCase);
  if (&local_68 != pFVar4) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,"EDS_CameraStateType");
  FVar10.Data = local_68.Data.AllocatorInstance.Data;
  lVar9 = (longlong)local_68.Data.ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,&local_48,local_68.Data.ArrayNum,&local_3c);
    memcpy(local_48.Data,FVar10.Data,lVar9 * 2);
  }
  if (local_38.Data.ArrayNum == 0) {
    local_58.DataPtr = L"";
  }
  else {
    local_58.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14b8b2894;
  }
  sVar5 = wcslen(local_58.DataPtr);
  iVar11 = (int)sVar5;
LAB_14b8b2894:
  local_58.Size = iVar11;
  pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
  this_00 = (UEnum *)StaticFindFirstObjectSafe(pUVar6,&local_58,None,NoLogging,(wchar_t *)0x0);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_40 != 0) {
    FVar10.Data = local_48.Data;
  }
  pFVar7 = ::FName::FName((FName *)&local_58,(wchar_t *)FVar10.Data);
  lVar8 = UEnum::GetValueByName(this_00,*pFVar7,None);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  this->CameraStateType = (EDS_CameraStateType)lVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this;
}

// AddCameraAction @ 14b8b4df0

void __thiscall
UDS_CameraStateBase::AddCameraAction
          (UDS_CameraStateBase *this,TObjectPtr<UDS_CameraAction_Base> param_1)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  int iVar5;
  
  plVar2 = *(longlong **)param_1.field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&this->CameraPresetData,&this->CameraCommonData);
    iVar5 = (this->CameraActions).ArrayNum;
    piVar1 = &(this->CameraActions).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->CameraActions).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->CameraActions).AllocatorInstance.Data;
    (this->CameraActions).ArrayNum = iVar5 + 1;
    pUVar4 = *(UObject **)param_1.field0_0x0;
    *(UObject **)(pFVar3 + (longlong)iVar5 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  return;
}

// CheckAbleUpdateRotate @ 14b8b8360

bool __thiscall UDS_CameraStateBase::CheckAbleUpdateRotate(UDS_CameraStateBase *this)

{
  TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *this_00;
  UObject *pUVar1;
  
  this_00 = &this->OwnerPlayerController;
  pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if ((*(uint *)&pUVar1[0x34].field_0xc & 0x8000) != 0) {
    return false;
  }
  pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (((((pUVar1[0x34].field_0xc & 1) == 0) &&
       (pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr), (pUVar1[0x34].field_0xc & 4) == 0)) &&
      (pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr), (pUVar1[0x34].field_0xc & 0x40) == 0)) &&
     (pUVar1 = FWeakObjectPtr::Get(&this_00->WeakPtr), pUVar1[0x3d].field_0x21 != '\0')) {
    return false;
  }
  return true;
}

// CheckAndAddCameraAction @ 14b8b83e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::CheckAndAddCameraAction(UDS_CameraStateBase *this)

{
  int *piVar1;
  EDS_CameraStateType EVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_d8 [32];
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  piVar1 = &(this->CameraActions).ArrayMax;
  (this->CameraActions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CameraActions).AllocatorInstance,0,piVar1);
  }
  if ((this->CameraPresetData).IsSlopeCam == true) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraAction_Slope_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = this;
    local_a8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_a8[0]);
    }
    AddCameraAction(this,(TObjectPtr<UDS_CameraAction_Base>)local_a8);
  }
  EVar2 = this->CameraStateType;
  if (((EVar2 == CameraStateBase) || (EVar2 == CameraStateBattle)) ||
     ((byte)(EVar2 - CameraStateBase2) < 2)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraAction_CamTracking_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = this;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    local_a8[0] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    AddCameraAction(this,(TObjectPtr<UDS_CameraAction_Base>)local_a8);
  }
  if ((this->CameraPresetData).IsBattleMode == true) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_CameraAction_Battle_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = this;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    local_a8[0] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    AddCameraAction(this,(TObjectPtr<UDS_CameraAction_Base>)local_a8);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_CameraAction_SmoothRotation_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = this;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  local_a8[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  AddCameraAction(this,(TObjectPtr<UDS_CameraAction_Base>)local_a8);
  return;
}

// CheckCameraChangeTime @ 14b8b8670

void __thiscall UDS_CameraStateBase::CheckCameraChangeTime(UDS_CameraStateBase *this,float param_1)

{
  float fVar1;
  
  if ((this->CameraChangeTime != __real_3f800000) &&
     (fVar1 = param_1 * InterpSpeed + this->CameraChangeElapsedTime,
     this->CameraChangeElapsedTime = fVar1, this->CameraChangeTime < fVar1)) {
    this->CameraChangeTime = 1.0;
  }
  return;
}

// CopyFromOtherCameraState @ 14b8b9200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CameraStateBase::CopyFromOtherCameraState
          (UDS_CameraStateBase *this,TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> param_1)

{
  double dVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar5 = TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CameraStateBase::CopyFromOtherCameraState",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x3b9,L"InOtherCameraState is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    dVar1 = *(double *)&pUVar7[0xe].field_0x20;
    (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X =
         *(double *)&pUVar7[0xe].field_0x18;
    (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)&pUVar7[0xf].field_0x8;
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X = *(double *)(pUVar7 + 0xf);
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)&pUVar7[0xf].field_0x18;
    (this->CameraControlData).CameraRotation.Pitch = *(double *)&pUVar7[0xf].field_0x10;
    (this->CameraControlData).CameraRotation.Yaw = dVar1;
    dVar1 = *(double *)(pUVar7 + 0x10);
    (this->CameraControlData).CameraRotation.Roll = *(double *)&pUVar7[0xf].field_0x20;
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.X = dVar1;
    dVar1 = *(double *)&pUVar7[0x10].field_0x10;
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Y =
         *(double *)&pUVar7[0x10].field_0x8;
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Z = dVar1;
    uVar2 = pUVar7[0x10].field_0x1c;
    uVar3 = pUVar7[0x10].field_0x1d;
    uVar4 = *(undefined2 *)&pUVar7[0x10].field_0x1e;
    dVar1 = *(double *)&pUVar7[0x10].field_0x20;
    (this->CameraControlData).CameraZoomValue = (float)*(undefined4 *)&pUVar7[0x10].field_0x18;
    (this->CameraControlData).IsDragReleased = (bool)uVar2;
    (this->CameraControlData).bIsRotateCameraByUserInput = (bool)uVar3;
    *(undefined2 *)&(this->CameraControlData).field_0x56 = uVar4;
    (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.X = dVar1;
    (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.Y = *(double *)(pUVar7 + 0x11);
  }
  return;
}

// GetAbsoluteMousePos @ 14b8c4020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_CameraStateBase::GetAbsoluteMousePos
          (UDS_CameraStateBase *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  FSceneViewport *pFVar2;
  FSlateApplication *pFVar3;
  float *pfVar4;
  TTransform2<float> *pTVar5;
  float fVar6;
  float fVar7;
  undefined1 local_30 [8];
  TTransform2<float> local_28;
  
  pFVar2 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
  pFVar3 = FSlateApplication::Get();
  pfVar4 = (float *)(**(code **)(*(longlong *)pFVar3 + 0x68))(pFVar3,local_30);
  fVar7 = *pfVar4;
  fVar1 = pfVar4[1];
  pTVar5 = Inverse<TTransform2<float>_>
                     (&local_28,&(pFVar2->CachedGeometry).AccumulatedRenderTransform);
  fVar6 = fVar1 * (pTVar5->M).M[1][0] + fVar7 * (pTVar5->M).M[0][0] +
          (pTVar5->Trans).field0_0x0._s_0.X;
  fVar7 = fVar7 * (pTVar5->M).M[0][1] + fVar1 * (pTVar5->M).M[1][1] +
          (pTVar5->Trans).field0_0x0._s_0.Y;
  fVar7 = fVar7 + fVar7 + __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((int)ROUND(fVar6 + fVar6 + __real_3f000000) >> 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((int)ROUND(fVar7) >> 1);
  return __return_storage_ptr__;
}

// GetAxisDeltaValue @ 14b8c42c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_CameraStateBase::GetAxisDeltaValue
          (UDS_CameraStateBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  UGameViewportClient *pUVar3;
  FViewport *pFVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  UObject *pUVar9;
  int *piVar10;
  longlong lVar11;
  double dVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58 [5];
  
  pUVar9 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  dVar8 = __real_3f1a36e2e0000000;
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (pUVar9[0x36].field_0x8 == '\x02') {
    dVar12 = (this->AxisValue).field0_0x0._s_0.Y * __real_407f400000000000 * (double)param_2;
    dVar5 = (this->AxisValue).field0_0x0._s_0.X * __real_4089000000000000 * (double)param_2;
  }
  else {
    local_58[0]._0_8_ = (this->NowMousePosition).field0_0x0._s_0.X;
    local_58[0]._8_8_ = (this->NowMousePosition).field0_0x0._s_0.Y;
    FMath::Vector2DInterpTo<double>
              ((TVector2<double> *)&local_68._s_0,param_1,(TVector2<double> *)&local_58[0]._s_0,
               param_2,(this->CameraPresetData).CameraRotationLag);
    local_68._s_0.X =
         (double)((longlong)
                  ROUND(local_68._s_0.X * __real_4000000000000000 + __real_3fe0000000000000) >> 1);
    local_68._s_0.Y =
         (double)((longlong)
                  ROUND(local_68._s_0.Y * __real_4000000000000000 + __real_3fe0000000000000) >> 1);
    FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    dVar12 = local_68._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar5 = local_68._s_0.X - (param_1->field0_0x0)._s_0.X;
    if (((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,SUB84(dVar5,0) & uVar6) <= dVar8)
       && ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar7,SUB84(dVar12,0) & uVar6) <=
           dVar8)) {
      uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
      uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
      dVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
      uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
      uVar17 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
      uVar18 = uVar16;
      uVar19 = uVar17;
      goto LAB_14b8c443d;
    }
    *(undefined4 *)&param_1->field0_0x0 = local_68._0_4_;
    *(undefined4 *)((longlong)&param_1->field0_0x0 + 4) = local_68._4_4_;
    *(undefined4 *)((longlong)&param_1->field0_0x0 + 8) = local_68._8_4_;
    *(int *)((longlong)&param_1->field0_0x0 + 0xc) = (int)((ulonglong)local_68._8_8_ >> 0x20);
  }
  uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uVar15 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uVar16 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uVar17 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  uVar18 = SUB84(dVar12,0);
  uVar19 = (uint)((ulonglong)dVar12 >> 0x20);
LAB_14b8c443d:
  if (((((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,SUB84(dVar5,0) & uVar6) <= dVar8)
       && ((double)CONCAT44(uVar19 & uVar7,uVar18 & uVar6) <= dVar8)) || (GEngine == (UEngine *)0x0)
      ) || (pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr,
           pUVar3 == (UGameViewportClient *)0x0)) {
    *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar13;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar15;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar16;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar17;
  }
  else {
    pFVar4 = pUVar3->Viewport;
    piVar10 = (int *)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,local_res8);
    iVar2 = *piVar10;
    lVar11 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,local_res8);
    fVar14 = __real_44340000 / (float)*(int *)(lVar11 + 4);
    fVar1 = (this->CameraPresetData).CamSensitivityUpdown;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((__real_44870000 / (float)iVar2) *
                 (this->CameraPresetData).CamSensitivityLeftRight) * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(fVar14 * fVar1) * (double)CONCAT44(uVar19,uVar18);
  }
  return __return_storage_ptr__;
}

// GetAxisSpeedViewportRatio @ 14b8c4530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_CameraStateBase::GetAxisSpeedViewportRatio
          (UDS_CameraStateBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  UGameViewportClient *pUVar4;
  FViewport *pFVar5;
  int *piVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_res18 [16];
  
  if (((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&param_1->field0_0x0 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
       && (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
          (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) || (GEngine == (UEngine *)0x0)) ||
     (pUVar4 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar4 == (UGameViewportClient *)0x0)) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  }
  else {
    pFVar5 = pUVar4->Viewport;
    piVar6 = (int *)(**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,local_res18);
    iVar3 = *piVar6;
    lVar7 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,local_res18);
    fVar8 = __real_44340000 / (float)*(int *)(lVar7 + 4);
    fVar1 = (this->CameraPresetData).CamSensitivityUpdown;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((__real_44870000 / (float)iVar3) *
                 (this->CameraPresetData).CamSensitivityLeftRight) * (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(fVar8 * fVar1) * (param_1->field0_0x0)._s_0.Y;
  }
  return __return_storage_ptr__;
}

// GetCameraDistance @ 14b8c48e0

float __thiscall UDS_CameraStateBase::GetCameraDistance(UDS_CameraStateBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  if (!bVar1) {
    return 0.0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
  return *(float *)&pUVar2[0xe].field_0x20;
}

// GetCameraLagSpeed @ 14b8c4950

float __thiscall UDS_CameraStateBase::GetCameraLagSpeed(UDS_CameraStateBase *this)

{
  return (this->CameraPresetData).DistanceLagSpeed;
}

// GetCameraRotation @ 14b8c4960

TRotator<double> * __thiscall
UDS_CameraStateBase::GetCameraRotation
          (UDS_CameraStateBase *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerPlayerController).WeakPtr);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (!bVar2) {
    __return_storage_ptr__->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    __return_storage_ptr__->Yaw = dVar1;
    __return_storage_ptr__->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    return __return_storage_ptr__;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFOV @ 14b8c63f0

float __thiscall UDS_CameraStateBase::GetFOV(UDS_CameraStateBase *this)

{
  return (this->CameraPresetData).FOV;
}

// GetMouseDelta @ 14b8c7a50

TVector2<double> * __thiscall
UDS_CameraStateBase::GetMouseDelta
          (UDS_CameraStateBase *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1,float param_2)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28 [2];
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if (pUVar1[0x36].field_0x8 == '\x02') {
    dVar4 = (this->AxisValue).field0_0x0._s_0.Y * __real_407f400000000000 * (double)param_2;
    dVar5 = (this->AxisValue).field0_0x0._s_0.X * __real_4089000000000000 * (double)param_2;
  }
  else {
    local_28[0]._0_8_ = (this->NowMousePosition).field0_0x0._s_0.X;
    local_28[0]._8_8_ = (this->NowMousePosition).field0_0x0._s_0.Y;
    FMath::Vector2DInterpTo<double>
              ((TVector2<double> *)&local_38._s_0,param_1,(TVector2<double> *)&local_28[0]._s_0,
               param_2,(this->CameraPresetData).CameraRotationLag);
    local_38._s_0.X =
         (double)((longlong)
                  ROUND(local_38._s_0.X * __real_4000000000000000 + __real_3fe0000000000000) >> 1);
    local_38._s_0.Y =
         (double)((longlong)
                  ROUND(local_38._s_0.Y * __real_4000000000000000 + __real_3fe0000000000000) >> 1);
    FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    dVar5 = local_38._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar4 = local_38._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    uVar2 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
         (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000) &&
       (uVar2 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar3 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar3,uVar2) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar3,uVar2) == __real_3f1a36e2e0000000)) {
      (__return_storage_ptr__->field0_0x0)._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
      return __return_storage_ptr__;
    }
    *(undefined4 *)&param_1->field0_0x0 = local_38._0_4_;
    *(undefined4 *)((longlong)&param_1->field0_0x0 + 4) = local_38._4_4_;
    *(undefined4 *)((longlong)&param_1->field0_0x0 + 8) = local_38._8_4_;
    *(int *)((longlong)&param_1->field0_0x0 + 0xc) = (int)((ulonglong)local_38._8_8_ >> 0x20);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  return __return_storage_ptr__;
}

// GetScreenCenterPosition @ 14b8c88f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_CameraStateBase::GetScreenCenterPosition
          (UDS_CameraStateBase *this,TVector2<double> *__return_storage_ptr__)

{
  FDeprecateSlateVector2D FVar1;
  undefined8 uVar2;
  FSceneViewport *pFVar3;
  TIntPoint<int> TVar4;
  float local_res10;
  float fStackX_14;
  TVector2<double>_u_0 local_18;
  
  pFVar3 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
  FVar1 = (pFVar3->CachedGeometry).Size;
  local_res10 = FVar1._0_4_;
  local_18._s_0.X = (double)local_res10 * __real_3fe0000000000000;
  fStackX_14 = FVar1._4_4_;
  local_18._s_0.Y = (double)fStackX_14 * __real_3fe0000000000000;
  TVar4 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_18._s_0);
  uVar2 = *(undefined8 *)TVar4.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)((ulonglong)uVar2 >> 0x20);
  return __return_storage_ptr__;
}

// GetSocketOffset @ 14b8c8990

TVector<double> * __thiscall
UDS_CameraStateBase::GetSocketOffset
          (UDS_CameraStateBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (!bVar4) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
  dVar2 = *(double *)&pUVar5[0xf].field_0x8;
  dVar1 = *(double *)&pUVar5[0xf].field_0x10;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pUVar5 + 0xf);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetTargetOffset @ 14b8c8db0

TVector<double> * __thiscall
UDS_CameraStateBase::GetTargetOffset
          (UDS_CameraStateBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (!bVar4) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
  dVar2 = *(double *)&pUVar5[0xf].field_0x20;
  dVar1 = *(double *)(pUVar5 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&pUVar5[0xf].field_0x18;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetZoomValue @ 14b8c9300

float __thiscall UDS_CameraStateBase::GetZoomValue(UDS_CameraStateBase *this,float param_1)

{
  return param_1 * (this->CameraPresetData).CamSensitivityZoomInOut;
}

// Initialize @ 14b8cafb0

void __thiscall
UDS_CameraStateBase::Initialize
          (UDS_CameraStateBase *this,TWeakObjectPtr<APlayerController,FWeakObjectPtr> param_1,
          FDS_CameraParametersTableRow *param_2,FDS_CameraCommonData *param_3,
          EDS_CameraStateType param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  UClass *pUVar4;
  ADS_MainCharacter *pAVar5;
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> TVar6;
  UDS_SpringArmComponent *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> TVar7;
  UObject *pUVar8;
  UDS_CameraInterp *pUVar9;
  FName *pFVar10;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  FSoftObjectPath local_68;
  FSoftObjectPath local_48;
  
  if (param_2 == (FDS_CameraParametersTableRow *)0x0) {
    return;
  }
  local_res10 = param_1.WeakPtr;
  FDS_CameraPresetData::CopyFrom(&this->CameraPresetData,param_2);
  FDS_CameraCommonData::operator=(&this->CameraCommonData,param_3);
  this->CameraStateType = param_4;
  this->CameraChangeTime = 1.0;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return;
  }
  local_88._0_8_ = FWeakObjectPtr::Get(&local_res10);
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  if ((FName)local_88._0_8_ != (FName)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(local_88._0_8_ + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)(local_88._0_8_ + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b8cb06d;
  }
  local_88._0_8_ = FVar13;
LAB_14b8cb06d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)local_88._0_8_ != (FName)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_88._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->OwnerPlayerController).WeakPtr,(FObjectPtr)local_88);
  CheckAndAddCameraAction(this);
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar3) {
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res18);
    TVar6 = ADS_MainCharacter::GetCameraBoom(pAVar5);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerCameraBoom).WeakPtr = *TVar6.WeakPtr;
    this_00 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    UDS_SpringArmComponent::SetBattleModeRatio(this_00,(this->CameraCommonData).MarginWidthRatioDef)
    ;
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res18);
    TVar7 = ADS_MainCharacter::GetFollowCamera(pAVar5);
                    /* WARNING: Load size is inaccurate */
    (this->OwnerFollowCamera).WeakPtr = *TVar7.WeakPtr;
  }
  if ((this->CameraInterp_Rotation).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_Rotation).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)local_78,&param_3->CameraBattleCurvePath,false);
    local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_68.AssetPath.PackageName.Number = 0;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_68.AssetPath.AssetName.Number = 0;
    local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.SubPathString.Data.ArrayNum = 0;
    local_68.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar11 = pFVar10[1].ComparisonIndex.Value;
    local_88._8_4_ = uVar11 - 1;
    if (uVar11 == 0) {
      local_88._8_4_ = 0;
    }
    FSoftObjectPath::SetPath(&local_68,(TStringView<wchar_t> *)local_88);
    if ((FName)local_78._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_Rotation).field0_0x0.DebugPtr,&local_68);
    if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = 0;
  if ((this->CameraInterp_FOV).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_FOV).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)&local_68,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar2 = pFVar10[1].ComparisonIndex.Value;
    FVar12.Value = uVar2 - 1;
    if (uVar2 == 0) {
      FVar12.Value = uVar11;
    }
    local_88._8_4_ = FVar12.Value;
    local_78._8_8_ = local_88._8_8_;
    local_78._0_8_ = local_88._0_8_;
    FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)local_78);
    if (local_68.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_68.AssetPath.PackageName);
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_FOV).field0_0x0.DebugPtr,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)local_78,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar2 = pFVar10[1].ComparisonIndex.Value;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar2 - 1;
    if (uVar2 == 0) {
      local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar11;
    }
    local_88._8_4_ = local_68.AssetPath.AssetName.ComparisonIndex.Value;
    local_68.AssetPath.AssetName.Number = local_88._12_4_;
    local_68.AssetPath.PackageName = (FName)local_88._0_8_;
    FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)&local_68);
    if ((FName)local_78._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_TargetOffset).field0_0x0.DebugPtr,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)local_78,&param_3->CameraZoomCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar2 = pFVar10[1].ComparisonIndex.Value;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar2 - 1;
    if (uVar2 == 0) {
      local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar11;
    }
    local_88._8_4_ = local_68.AssetPath.AssetName.ComparisonIndex.Value;
    local_68.AssetPath.AssetName.Number = local_88._12_4_;
    local_68.AssetPath.PackageName = (FName)local_88._0_8_;
    FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)&local_68);
    if ((FName)local_78._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    UDS_CameraInterp::Initialize
              ((this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)local_78,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar2 = pFVar10[1].ComparisonIndex.Value;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar2 - 1;
    if (uVar2 == 0) {
      local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar11;
    }
    local_88._8_4_ = local_68.AssetPath.AssetName.ComparisonIndex.Value;
    local_68.AssetPath.AssetName.Number = local_88._12_4_;
    local_68.AssetPath.PackageName = (FName)local_88._0_8_;
    FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)&local_68);
    if ((FName)local_78._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if ((this->CameraInterp_Zoom).field0_0x0.DebugPtr == (UDS_CameraInterp *)0x0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->CameraInterp_Zoom).field0_0x0.DebugPtr = pUVar9;
    pFVar10 = (FName *)FWN_SoftObjectUtils::GetObjectPath
                                 ((FString *)local_78,&param_3->CameraZoomCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_88._0_8_ = *pFVar10;
    uVar11 = pFVar10[1].ComparisonIndex.Value;
    local_68.AssetPath.AssetName.ComparisonIndex.Value = uVar11 - 1;
    if (uVar11 == 0) {
      local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
    }
    local_88._8_4_ = local_68.AssetPath.AssetName.ComparisonIndex.Value;
    local_68.AssetPath.AssetName.Number = local_88._12_4_;
    local_68.AssetPath.PackageName = (FName)local_88._0_8_;
    FSoftObjectPath::SetPath(&local_48,(TStringView<wchar_t> *)&local_68);
    if ((FName)local_78._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    UDS_CameraInterp::Initialize((this->CameraInterp_Zoom).field0_0x0.DebugPtr,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Initialize @ 14b8cb580

void __thiscall
UDS_CameraStateBase::Initialize
          (UDS_CameraStateBase *this,TWeakObjectPtr<APlayerController,FWeakObjectPtr> param_1,
          FDS_CameraParametersTableRow *param_2,FDS_CameraCommonData *param_3,
          EDS_CameraStateType param_4,int param_5)

{
  FDS_SkillModeTableRow *pFVar1;
  
  (**(code **)(this->_padding_ + 0x2b0))
            (this,(char)param_1.WeakPtr.ObjectIndex,param_2,param_3,param_4);
  pFVar1 = FDS_SkillModeTableRow::Get((longlong)param_5,true);
  if (pFVar1 != (FDS_SkillModeTableRow *)0x0) {
    this->SkillModeID = param_5;
    this->CameraChangeStartTime = InterpSpeed * pFVar1->AimModeStartTime;
    this->CameraChangeEndTime = InterpSpeed * pFVar1->AimModeEndTime;
  }
  return;
}

// OnChangedCursorState @ 14b8d4c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::OnChangedCursorState(UDS_CameraStateBase *this,bool param_1)

{
  FDeprecateSlateVector2D FVar1;
  undefined8 uVar2;
  double dVar3;
  UObject *pUVar4;
  FSceneViewport *pFVar5;
  TIntPoint<int> TVar6;
  float local_res8;
  float fStackX_c;
  TVector2<double>_u_0 local_18;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if (pUVar4[0x36].field_0x9 == '\x02') {
    if (param_1) {
      dVar3 = (this->NowMousePosition).field0_0x0._s_0.Y;
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X =
           (this->NowMousePosition).field0_0x0._s_0.X;
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y = dVar3;
    }
    else {
      pFVar5 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
      FVar1 = (pFVar5->CachedGeometry).Size;
      local_res8 = FVar1._0_4_;
      local_18._s_0.X = (double)local_res8 * __real_3fe0000000000000;
      fStackX_c = FVar1._4_4_;
      local_18._s_0.Y = (double)fStackX_c * __real_3fe0000000000000;
      TVar6 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_18._s_0);
      uVar2 = *(undefined8 *)TVar6.field0_0x0;
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X = (double)(int)uVar2;
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y =
           (double)(int)((ulonglong)uVar2 >> 0x20);
      local_18._s_0.X = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
      local_18._s_0.Y = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
      SetAbsoluteMousePos(this,(TVector2<double> *)&local_18._s_0);
    }
    dVar3 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
    (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X =
         (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
    (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y = dVar3;
  }
  return;
}

// OnEnter @ 14b8d5c00

void __thiscall
UDS_CameraStateBase::OnEnter
          (UDS_CameraStateBase *this,TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> param_1,
          EDS_CameraStateType param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  UDS_CameraInterp *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  UDS_SpringArmComponent *this_00;
  UObject *pUVar10;
  TVector2<double> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  FWeakObjectPtr local_res10;
  TVector2<double> local_38 [3];
  
  local_res10 = param_1.WeakPtr;
  bVar9 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCameraBoom,(void *)0x0);
  if (!bVar9) {
    this_00 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    UDS_SpringArmComponent::SetActiveBattleMode(this_00,(this->CameraPresetData).IsBattleMode);
    bVar9 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar9) {
      uVar13 = 0;
      this->PrevCameraStateType = param_2;
      uVar12 = 0;
      this->CameraChangeElapsedTime = 0.0;
      if (this->CameraStateType == CameraStateSkillMode) {
        fVar16 = this->CameraChangeStartTime;
      }
      else {
        fVar16 = __real_3f800000;
        if (param_2 == CameraStateSkillMode) {
          pUVar10 = FWeakObjectPtr::Get(&local_res10);
          fVar16 = *(float *)&pUVar10[0x14].field_0x8;
        }
      }
      this->CameraChangeTime = fVar16;
      pUVar10 = FWeakObjectPtr::Get(&local_res10);
      dVar6 = *(double *)&pUVar10[0xf].field_0x8;
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X = *(double *)(pUVar10 + 0xf);
      (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y = dVar6;
      fVar16 = RecoveryZoomValue;
      if (param_2 != CameraStateSkillMode) {
        if ((ADS_CameraManager::StaticInstance == (ADS_CameraManager *)0x0) ||
           (ADS_CameraManager::StaticInstance->UnlimitCameraDist != false)) {
          pUVar10 = FWeakObjectPtr::Get(&local_res10);
          fVar16 = *(float *)&pUVar10[0x10].field_0x18;
        }
        else {
          fVar2 = (this->CameraPresetData).DistanceMax;
          fVar3 = (this->CameraPresetData).DistanceMin;
          pUVar10 = FWeakObjectPtr::Get(&local_res10);
          fVar16 = *(float *)&pUVar10[0x10].field_0x18;
          if (fVar2 <= *(float *)&pUVar10[0x10].field_0x18) {
            fVar16 = fVar2;
          }
          if (fVar16 <= fVar3) {
            fVar16 = fVar3;
          }
        }
      }
      SetZoomInOutValue(this,fVar16);
      pUVar10 = FWeakObjectPtr::Get(&local_res10);
      pfVar1 = &(this->CameraPresetData).DistanceLagSpeed;
      fVar16 = *(float *)&pUVar10[5].field_0x4;
      this->CameraLagSpeed = fVar16;
      if ((fVar16 <= 0.0) ||
         (__real_322bcc77 < (float)((uint)*pfVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        fVar16 = *pfVar1;
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(uint *)&pUVar10[0x10].field_0x10 = *(uint *)&pUVar10[0x10].field_0x10 & 0xffffffdf;
        if (0.0 < fVar16) {
          uVar12 = 0x20;
        }
        *(uint *)&pUVar10[0x10].field_0x10 = *(uint *)&pUVar10[0x10].field_0x10 | uVar12;
        fVar16 = *pfVar1;
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(float *)&pUVar10[0x10].field_0x14 = fVar16;
        fVar16 = (this->CameraPresetData).DistanceLagMaxRange;
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(float *)&pUVar10[0x10].field_0x20 = fVar16;
        this->CameraLagSpeed = *pfVar1;
      }
      else {
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(uint *)&pUVar10[0x10].field_0x10 = *(uint *)&pUVar10[0x10].field_0x10 | 0x20;
        fVar16 = this->CameraLagSpeed;
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(float *)&pUVar10[0x10].field_0x14 = fVar16;
        pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
        *(undefined4 *)&pUVar10[0x10].field_0x20 = 0x44c80000;
        this->CameraLagDeltaSpeed = 100.0;
      }
      pUVar10 = FWeakObjectPtr::Get(&local_res10);
      dVar6 = *(double *)&pUVar10[0xe].field_0x8;
      (this->AxisValue).field0_0x0._s_0.X = *(double *)(pUVar10 + 0xe);
      (this->AxisValue).field0_0x0._s_0.Y = dVar6;
      uVar15 = uVar13;
      if (0 < (this->CameraActions).ArrayNum) {
        do {
          uVar14 = (uint)uVar15;
          uVar12 = 0;
          if ((int)uVar14 < (this->CameraActions).ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)(**(longlong **)((this->CameraActions).AllocatorInstance.Data + uVar13) +
                      0x2c0))();
          uVar13 = uVar13 + 8;
          uVar15 = (ulonglong)(uVar14 + 1);
        } while ((int)(uVar14 + 1) < (this->CameraActions).ArrayNum);
      }
      pUVar4 = (this->CameraInterp_Rotation).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      pUVar4 = (this->CameraInterp_FOV).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      pUVar4 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      pUVar4 = (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      pUVar4 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      pUVar4 = (this->CameraInterp_Zoom).field0_0x0.DebugPtr;
      pUVar4->ElapsedTime = 0.0;
      dVar6 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar4->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar4->StartRotationValue).Yaw = dVar6;
      (pUVar4->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar4->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Y = (double)uVar8;
      (pUVar4->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar4->StartFloatValue = 0.0;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->PrevSocketOffset).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->PrevSocketOffset).field0_0x0._s_0.Y = (double)uVar8;
      (this->PrevSocketOffset).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this->IsPostUpdated = false;
      pTVar11 = GetAbsoluteMousePos(this,local_38);
      dVar6 = (pTVar11->field0_0x0)._s_0.X;
      dVar7 = (pTVar11->field0_0x0)._s_0.Y;
      (this->NowMousePosition).field0_0x0._s_0.X = dVar6;
      (this->NowMousePosition).field0_0x0._s_0.Y = dVar7;
      (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X = dVar6;
      (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y = dVar7;
      (this->CurAxisDeltaValue).field0_0x0._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      (this->PrevAxisDeltaValue).field0_0x0._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    }
  }
  return;
}

// OnExit @ 14b8d6900

void __thiscall UDS_CameraStateBase::OnExit(UDS_CameraStateBase *this)

{
  EDS_CameraStateType EVar1;
  UObject *pUVar2;
  
  EVar1 = this->CameraStateType;
  if (((EVar1 == CameraStateBase) || ((byte)(EVar1 - CameraStateBase2) < 2)) ||
     (EVar1 == CameraStateBattle)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    RecoveryZoomValue = *(float *)&pUVar2[0xe].field_0x20;
  }
  return;
}

// OnGamepadRotationEnd @ 14b8d6e70

void __thiscall
UDS_CameraStateBase::OnGamepadRotationEnd(UDS_CameraStateBase *this,TVector2<double> *param_1)

{
  TVector2<double> TVar1;
  
  TVar1.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->CameraControlData).IsDragReleased = true;
  (this->CameraControlData).bIsRotateCameraByUserInput = false;
  (this->AxisValue).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// OnGamepadRotationTriggered @ 14b8d6e90

void __thiscall
UDS_CameraStateBase::OnGamepadRotationTriggered(UDS_CameraStateBase *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->AxisValue).field0_0x0._s_0.X = dVar1;
  (this->AxisValue).field0_0x0._s_0.Y = dVar2;
  dVar2 = dVar2 * __real_4059000000000000;
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.X =
       dVar1 * __real_4059000000000000;
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.Y = dVar2;
  (this->CameraControlData).IsDragReleased = false;
  (this->CameraControlData).bIsRotateCameraByUserInput = true;
  return;
}

// OnPressedMouse @ 14b8d95c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::OnPressedMouse(UDS_CameraStateBase *this)

{
  FDeprecateSlateVector2D FVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  UObject *pUVar5;
  FSceneViewport *pFVar6;
  TIntPoint<int> TVar7;
  float local_res8;
  float fStackX_c;
  TVector2<double>_u_0 local_18;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if (pUVar5[0x3d].field_0x21 == '\x01') {
    dVar3 = (this->NowMousePosition).field0_0x0._s_0.Y;
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X =
         (this->NowMousePosition).field0_0x0._s_0.X;
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y = dVar3;
  }
  else {
    pFVar6 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
    FVar1 = (pFVar6->CachedGeometry).Size;
    local_res8 = FVar1._0_4_;
    local_18._s_0.X = (double)local_res8 * __real_3fe0000000000000;
    fStackX_c = FVar1._4_4_;
    local_18._s_0.Y = (double)fStackX_c * __real_3fe0000000000000;
    TVar7 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_18._s_0);
    uVar2 = *(undefined8 *)TVar7.field0_0x0;
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X = (double)(int)uVar2;
    (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y =
         (double)(int)((ulonglong)uVar2 >> 0x20);
  }
  dVar3 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
  dVar4 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
  (this->CameraControlData).IsDragReleased = false;
  (this->CameraControlData).bIsRotateCameraByUserInput = true;
  (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X = dVar3;
  (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y = dVar4;
  return;
}

// OnReleasedMouse @ 14b8d96a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::OnReleasedMouse(UDS_CameraStateBase *this)

{
  TVector2<double>_u_0_s_0 TVar1;
  FDeprecateSlateVector2D FVar2;
  undefined1 auVar3 [12];
  UObject *pUVar4;
  FSceneViewport *pFVar5;
  TIntPoint<int> TVar6;
  double dVar7;
  double dVar8;
  undefined8 in_XMM3_Qb;
  undefined1 auVar9 [16];
  float local_res8;
  float fStackX_c;
  TVector2<double>_u_0 local_18;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if (pUVar4[0x3d].field_0x21 == '\x01') {
    TVar1 = (this->NowMousePosition).field0_0x0._s_0;
    dVar7 = TVar1.X;
    auVar3._4_8_ = in_XMM3_Qb;
    auVar3._0_4_ = TVar1.X._4_4_;
    auVar9._0_8_ = auVar3._0_8_ << 0x20;
    auVar9._8_4_ = TVar1.Y._0_4_;
    auVar9._12_4_ = TVar1.Y._4_4_;
    dVar8 = auVar9._8_8_;
  }
  else {
    pFVar5 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
    FVar2 = (pFVar5->CachedGeometry).Size;
    local_res8 = FVar2._0_4_;
    local_18._s_0.X = (double)local_res8 * __real_3fe0000000000000;
    fStackX_c = FVar2._4_4_;
    local_18._s_0.Y = (double)fStackX_c * __real_3fe0000000000000;
    TVar6 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_18._s_0);
    dVar7 = (double)(int)*(undefined8 *)TVar6.field0_0x0;
    dVar8 = (double)(int)((ulonglong)*(undefined8 *)TVar6.field0_0x0 >> 0x20);
  }
  dVar7 = dVar7 - (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X;
  dVar8 = dVar8 - (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y;
  if (__real_4066600000000000 <= dVar7) {
    dVar7 = __real_4066600000000000;
  }
  if (__real_4066600000000000 <= dVar8) {
    dVar8 = __real_4066600000000000;
  }
  if (dVar7 <= __real_c066600000000000) {
    dVar7 = __real_c066600000000000;
  }
  if (dVar8 <= __real_c066600000000000) {
    dVar8 = __real_c066600000000000;
  }
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.X = dVar7;
  (this->CameraControlData).SmoothTargetAxisDelta.field0_0x0._s_0.Y = dVar8;
  (this->CameraControlData).IsDragReleased = true;
  (this->CameraControlData).bIsRotateCameraByUserInput = false;
  return;
}

// PostTickMousePosition @ 14b8df470

void __thiscall UDS_CameraStateBase::PostTickMousePosition(UDS_CameraStateBase *this,float param_1)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  TVector2<double>_u_0 TVar4;
  double dVar5;
  char cVar6;
  TVector2<double> *pTVar7;
  UObject *pUVar8;
  UClass *this_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  EDS_InputFlags local_res8 [2];
  TVector<double>_u_0 local_58;
  undefined1 local_40;
  
  pTVar7 = GetAbsoluteMousePos(this,(TVector2<double> *)&local_58._s_0);
  dVar5 = (pTVar7->field0_0x0)._s_0.Y;
  (this->NowMousePosition).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (this->NowMousePosition).field0_0x0._s_0.Y = dVar5;
  pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  dVar5 = __real_3f1a36e2e0000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (pUVar8[0x3d].field_0x21 == '\0') {
    dVar15 = (this->NowMousePosition).field0_0x0._s_0.X;
    dVar2 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
    dVar16 = (this->NowMousePosition).field0_0x0._s_0.Y;
    dVar13 = dVar16 - (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
    uVar9 = SUB84(dVar15 - dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)(dVar15 - dVar2) >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar9) &&
         (double)CONCAT44(uVar11,uVar9) != __real_3f1a36e2e0000000) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      dVar13 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
      dVar17 = (double)(this->CameraCommonData).MaxRotateAnglePerSec;
      dVar14 = dVar17 + dVar2;
      if (dVar15 <= dVar17 + dVar2) {
        dVar14 = dVar15;
      }
      if (dVar14 <= dVar2 - dVar17) {
        dVar14 = dVar2 - dVar17;
      }
      dVar15 = dVar13 + dVar17;
      dVar13 = dVar13 - dVar17;
      (this->NowMousePosition).field0_0x0._s_0.X = dVar14;
      if (dVar16 <= dVar15) {
        dVar15 = dVar16;
      }
      if (dVar15 <= dVar13) {
        dVar15 = dVar13;
      }
      (this->NowMousePosition).field0_0x0._s_0.Y = dVar15;
    }
  }
  dVar15 = (this->CurAxisDeltaValue).field0_0x0._s_0.Y;
  (this->PrevAxisDeltaValue).field0_0x0._s_0.X = (this->CurAxisDeltaValue).field0_0x0._s_0.X;
  (this->PrevAxisDeltaValue).field0_0x0._s_0.Y = dVar15;
  pTVar7 = GetAxisDeltaValue(this,(TVector2<double> *)&local_58._s_0,
                             &(this->CameraControlData).LastMousePosition,param_1);
  dVar15 = (pTVar7->field0_0x0)._s_0.Y;
  (this->CurAxisDeltaValue).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  (this->CurAxisDeltaValue).field0_0x0._s_0.Y = dVar15;
  this_00 = Z_Construct_UClass_UInputSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  dVar15 = __real_3ff0000000000000;
  if (((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 0x40) != 0) {
    dVar15 = __real_3fd999999999999a;
  }
  dVar2 = (this->CurAxisDeltaValue).field0_0x0._s_0.Y * dVar15;
  TVar4._8_4_ = SUB84(dVar2,0);
  TVar4._s_0.X = (this->CurAxisDeltaValue).field0_0x0._s_0.X * dVar15;
  TVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (this->CurAxisDeltaValue).field0_0x0 = TVar4;
  pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if ((pUVar8[0x3d].field_0x21 == '\x01') &&
     ((dVar15 = (this->CurAxisDeltaValue).field0_0x0._s_0.X, uVar9 = SUB84(dVar15,0) & uVar10,
      uVar11 = (uint)((ulonglong)dVar15 >> 0x20) & uVar12,
      dVar5 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar5 ||
      (uVar3 = *(undefined8 *)((longlong)&(this->CurAxisDeltaValue).field0_0x0 + 8),
      uVar9 = (uint)uVar3 & uVar10, uVar11 = (uint)((ulonglong)uVar3 >> 0x20) & uVar12,
      dVar5 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar5)))) {
    fVar1 = (this->CameraCommonData).MaxMouseRotate;
    dVar16 = (double)fVar1;
    dVar14 = (double)(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
    dVar2 = (this->CurAxisDeltaValue).field0_0x0._s_0.Y;
    dVar13 = dVar16;
    if (dVar2 <= dVar16) {
      dVar13 = dVar2;
    }
    if (dVar15 <= dVar16) {
      dVar16 = dVar15;
    }
    if (dVar13 <= dVar14) {
      dVar13 = dVar14;
    }
    if (dVar16 <= dVar14) {
      dVar16 = dVar14;
    }
    (this->CurAxisDeltaValue).field0_0x0._s_0.Y = dVar13;
    (this->CurAxisDeltaValue).field0_0x0._s_0.X = dVar16;
  }
  uVar3 = *(undefined8 *)&(this->CurAxisDeltaValue).field0_0x0;
  uVar9 = (uint)uVar3 & uVar10;
  uVar11 = (uint)((ulonglong)uVar3 >> 0x20) & uVar12;
  if ((dVar5 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar5) ||
     (uVar3 = *(undefined8 *)((longlong)&(this->CurAxisDeltaValue).field0_0x0 + 8),
     uVar10 = (uint)uVar3 & uVar10, uVar12 = (uint)((ulonglong)uVar3 >> 0x20) & uVar12,
     dVar5 <= (double)CONCAT44(uVar12,uVar10) && (double)CONCAT44(uVar12,uVar10) != dVar5)) {
    cVar6 = (**(code **)(this->_padding_ + 800))(this);
    if (cVar6 == '\x01') {
      pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
      local_res8[0] = MOUSE_MOVE;
      if ((*(uint *)&pUVar8[0x34].field_0xc >> 0xd & 1) == 0) {
        *(uint *)&pUVar8[0x34].field_0xc = *(uint *)&pUVar8[0x34].field_0xc | 0x2000;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&pUVar8[0x30].field_0x10,local_res8);
      }
      local_58._s_0.X = (this->CurAxisDeltaValue).field0_0x0._s_0.X;
      local_58._s_0.Y = (this->CurAxisDeltaValue).field0_0x0._s_0.Y;
      local_40 = 2;
      local_res8[0] = MOUSE_MOVE;
      local_58._s_0.Z = 0.0;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&ADS_PlayerController::ChangeInputDelegate,local_res8,
                  (FInputActionValue *)&local_58._s_0);
    }
  }
  else {
    pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    local_res8[0] = MOUSE_MOVE;
    if ((*(uint *)&pUVar8[0x34].field_0xc >> 0xd & 1) != 0) {
      *(uint *)&pUVar8[0x34].field_0xc = *(uint *)&pUVar8[0x34].field_0xc & 0xffffdfff;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&pUVar8[0x31].field_0x8,local_res8);
    }
  }
  this->IsPostUpdated = true;
  return;
}

// RefreshCameraData @ 14b8e0f70

void __thiscall UDS_CameraStateBase::RefreshCameraData(UDS_CameraStateBase *this)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UObject *pUVar10;
  uint uVar11;
  float fVar12;
  
  bVar9 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  if (bVar9) {
    fVar12 = (this->CameraPresetData).DistanceLagSpeed;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(uint *)&pUVar10[0x10].field_0x10 = *(uint *)&pUVar10[0x10].field_0x10 & 0xffffffdf;
    uVar11 = 0;
    if (0.0 < fVar12) {
      uVar11 = 0x20;
    }
    *(uint *)&pUVar10[0x10].field_0x10 = *(uint *)&pUVar10[0x10].field_0x10 | uVar11;
    fVar12 = (this->CameraPresetData).DistanceLagSpeed;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar10[0x10].field_0x14 = fVar12;
    fVar12 = (this->CameraPresetData).DistanceLagMaxRange;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar10[0x10].field_0x20 = fVar12;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    if (*(float *)&pUVar10[0xe].field_0x20 == 0.0) {
      fVar12 = (this->CameraPresetData).Distance;
    }
    else {
      pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
      fVar12 = *(float *)&pUVar10[0xe].field_0x20;
    }
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar10[0xe].field_0x20 = fVar12;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    (this->CameraControlData).CameraZoomValue = *(float *)&pUVar10[0xe].field_0x20;
    pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    fVar12 = (this->CameraPresetData).ZoomInSocketOffsetRange;
    if (*(float *)&pUVar10[0xe].field_0x20 <= fVar12) {
      dVar6 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Y;
      dVar4 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Z;
      dVar7 = (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Y;
      dVar8 = (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Z;
      dVar5 = (double)((fVar12 - (this->CameraControlData).CameraZoomValue) /
                      (fVar12 - (this->CameraPresetData).DistanceMin));
      dVar1 = (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.X;
      dVar2 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.X;
      pUVar10 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
      *(double *)(pUVar10 + 0xf) = dVar5 * dVar1 + dVar2;
      dVar4 = dVar5 * dVar8 + dVar4;
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar5 * dVar7 + dVar6;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])&pUVar10[0xf].field_0x8 = auVar3;
    }
  }
  return;
}

// SetAbsoluteMousePos @ 14b8e6a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_CameraStateBase::SetAbsoluteMousePos(UDS_CameraStateBase *this,TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FDeprecateSlateVector2D FVar4;
  FSceneViewport *pFVar5;
  FSlateApplication *pFVar6;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_res10;
  float fStackX_14;
  undefined8 local_18;
  undefined8 local_10;
  float fVar7;
  
  pFVar5 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
  FVar4 = (pFVar5->CachedGeometry).Size;
  fStackX_14 = FVar4._4_4_;
  local_res10 = FVar4._0_4_;
  fStackX_14 = fStackX_14 * ((float)(param_1->field0_0x0)._s_0.Y / fStackX_14);
  local_res10 = local_res10 * ((float)(param_1->field0_0x0)._s_0.X / local_res10);
  fVar1 = (pFVar5->CachedGeometry).AccumulatedRenderTransform.M.M[1][0];
  fVar2 = (pFVar5->CachedGeometry).AccumulatedRenderTransform.M.M[0][0];
  fVar3 = (pFVar5->CachedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
  fVar7 = fStackX_14 * (pFVar5->CachedGeometry).AccumulatedRenderTransform.M.M[1][1] +
          local_res10 * (pFVar5->CachedGeometry).AccumulatedRenderTransform.M.M[0][1] +
          (pFVar5->CachedGeometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
  auVar8 = ZEXT416((uint)fVar7);
  pFVar6 = FSlateApplication::Get();
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (double)fVar7 + __real_3fe0000000000000;
  auVar9 = roundpd(auVar8,auVar9,1);
  local_10 = auVar9._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (double)(fStackX_14 * fVar1 + local_res10 * fVar2 + fVar3) +
                 __real_3fe0000000000000;
  auVar9 = roundpd(extraout_XMM0,auVar8,1);
  local_18 = auVar9._0_8_;
  (**(code **)(*(longlong *)&pFVar6->field_0x198 + 0x1d0))(&pFVar6->field_0x198,&local_18);
  return;
}

// SetCameraDataAtOnce @ 14b8e7120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::SetCameraDataAtOnce(UDS_CameraStateBase *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  TRotator<double> *pTVar6;
  double local_58;
  double local_50;
  undefined8 local_48;
  TRotator<double> local_40 [2];
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  if (bVar4) {
    dVar1 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Z;
    dVar2 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.X;
    dVar3 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Y;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(double *)&pUVar5[0xf].field_0x18 = dVar2;
    *(double *)&pUVar5[0xf].field_0x20 = dVar3;
    *(double *)(pUVar5 + 0x10) = dVar1;
    dVar2 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.X;
    dVar3 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Y;
    dVar1 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Z;
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(double *)(pUVar5 + 0xf) = dVar2;
    *(double *)&pUVar5[0xf].field_0x8 = dVar3;
    *(double *)&pUVar5[0xf].field_0x10 = dVar1;
  }
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerFollowCamera).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerFollowCamera).WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x640))(pUVar5,(this->CameraPresetData).FOV);
  }
  (**(code **)(this->_padding_ + 0x2f0))(this);
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerPlayerController).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    pUVar5 = *(UObject **)&pUVar5[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 != (UObject *)0x0) {
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
      pUVar5 = *(UObject **)&pUVar5[0x13].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if (*(USceneComponent **)(pUVar5 + 0xb) == (USceneComponent *)0x0) {
        pTVar6 = local_40;
        local_40[0].Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_40[0].Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_40[0].Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar6 = USceneComponent::GetComponentRotation(*(USceneComponent **)(pUVar5 + 0xb),local_40)
        ;
      }
      local_58 = (double)(this->CameraPresetData).Pitch + pTVar6->Pitch;
      local_50 = (double)(this->CameraPresetData).Yaw + pTVar6->Yaw;
      local_48 = 0;
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
      (**(code **)(*(longlong *)pUVar5 + 0x7b0))(pUVar5,&local_58);
    }
  }
  return;
}

// SetCameraLagSpeed @ 14b8e7320

void __thiscall UDS_CameraStateBase::SetCameraLagSpeed(UDS_CameraStateBase *this,float param_1)

{
  float fVar1;
  UObject *pUVar2;
  uint uVar3;
  
  this->CameraLagSpeed = param_1;
  if ((param_1 <= 0.0) ||
     (__real_322bcc77 <
      (float)((uint)(this->CameraPresetData).DistanceLagSpeed &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar1 = (this->CameraPresetData).DistanceLagSpeed;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(uint *)&pUVar2[0x10].field_0x10 = *(uint *)&pUVar2[0x10].field_0x10 & 0xffffffdf;
    uVar3 = 0;
    if (0.0 < fVar1) {
      uVar3 = 0x20;
    }
    *(uint *)&pUVar2[0x10].field_0x10 = *(uint *)&pUVar2[0x10].field_0x10 | uVar3;
    fVar1 = (this->CameraPresetData).DistanceLagSpeed;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar2[0x10].field_0x14 = fVar1;
    fVar1 = (this->CameraPresetData).DistanceLagMaxRange;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar2[0x10].field_0x20 = fVar1;
    this->CameraLagSpeed = (this->CameraPresetData).DistanceLagSpeed;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(uint *)&pUVar2[0x10].field_0x10 = *(uint *)&pUVar2[0x10].field_0x10 | 0x20;
    fVar1 = this->CameraLagSpeed;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar2[0x10].field_0x14 = fVar1;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(undefined4 *)&pUVar2[0x10].field_0x20 = 0x44c80000;
    this->CameraLagDeltaSpeed = 100.0;
  }
  return;
}

// SetCameraRotation @ 14b8e7490

void __thiscall
UDS_CameraStateBase::SetCameraRotation(UDS_CameraStateBase *this,TRotator<double> *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  (**(code **)(*(longlong *)pUVar1 + 0x7b0))(pUVar1,param_1);
  return;
}

// SetCurrentPitchMinMax @ 14b8e74d0

void __thiscall
UDS_CameraStateBase::SetCurrentPitchMinMax(UDS_CameraStateBase *this,float *param_1,float *param_2)

{
  *param_1 = (this->CameraPresetData).PitchMin;
  *param_2 = (this->CameraPresetData).PitchMax;
  return;
}

// SetFOV @ 14b8e7aa0

void __thiscall UDS_CameraStateBase::SetFOV(UDS_CameraStateBase *this,float param_1)

{
  UDS_CameraInterp *pUVar1;
  undefined8 uVar2;
  double dVar3;
  UObject *pUVar4;
  
  pUVar1 = (this->CameraInterp_FOV).field0_0x0.DebugPtr;
  pUVar1->ElapsedTime = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (pUVar1->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (pUVar1->StartRotationValue).Yaw = dVar3;
  (pUVar1->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pUVar1->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pUVar1->StartVectorValue).field0_0x0._s_0.Y = (double)uVar2;
  (pUVar1->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar1->StartFloatValue = 0.0;
  pUVar4 = FWeakObjectPtr::Get(&(this->OwnerFollowCamera).WeakPtr);
  *(float *)&pUVar4[0xe].field_0x20 = param_1;
  return;
}

// SetZoomDelta @ 14b8eaea0

void __thiscall UDS_CameraStateBase::SetZoomDelta(UDS_CameraStateBase *this,float param_1)

{
  UObject *pUVar1;
  UDS_SpringArmComponent *this_00;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  float fVar8;
  TVector<double>_u_0 local_48 [2];
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if ((*(uint *)&pUVar1[0x34].field_0xc & 0x4000) == 0) {
    fVar8 = param_1 * (this->CameraPresetData).CamSensitivityZoomInOut +
            (this->CameraControlData).CameraZoomValue;
    this_00 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    UDS_SpringArmComponent::GetRelativeSocketLocation(this_00,(TVector<double> *)&local_48[0]._s_0);
    dVar7 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.X - (double)local_48[0]._0_8_;
    dVar3 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Y - (double)local_48[0]._8_8_;
    dVar6 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Z - (double)local_48[0]._16_8_;
    auVar4._0_8_ = dVar3 * dVar3;
    auVar4._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar7 * dVar7 + auVar4._0_8_ + dVar6 * dVar6;
    auVar5 = sqrtpd(auVar4,auVar5);
    if ((param_1 < 0.0) && ((float)auVar5._0_8_ < (this->CameraControlData).CameraZoomValue)) {
      fVar8 = (float)auVar5._0_8_;
    }
    fVar2 = (this->CameraPresetData).DistanceMax;
    if ((ADS_CameraManager::StaticInstance != (ADS_CameraManager *)0x0) &&
       (ADS_CameraManager::StaticInstance->UnlimitCameraDist == true)) {
      fVar2 = fVar2 * __real_42c80000;
    }
    if (fVar8 <= fVar2) {
      fVar2 = fVar8;
    }
    fVar8 = (this->CameraPresetData).DistanceMin;
    if (fVar2 <= fVar8) {
      fVar2 = fVar8;
    }
    (this->CameraControlData).CameraZoomValue = fVar2;
  }
  return;
}

// SetZoomInOutValue @ 14b8eafe0

void __thiscall UDS_CameraStateBase::SetZoomInOutValue(UDS_CameraStateBase *this,float param_1)

{
  float fVar1;
  UDS_CameraInterp *pUVar2;
  undefined8 uVar3;
  double dVar4;
  UObject *pUVar5;
  float fVar6;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
  if ((*(uint *)&pUVar5[0x34].field_0xc & 0x4000) == 0) {
    pUVar2 = (this->CameraInterp_Zoom).field0_0x0.DebugPtr;
    pUVar2->ElapsedTime = 0.0;
    dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    (pUVar2->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    (pUVar2->StartRotationValue).Yaw = dVar4;
    (pUVar2->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (pUVar2->StartVectorValue).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (pUVar2->StartVectorValue).field0_0x0._s_0.Y = (double)uVar3;
    (pUVar2->StartVectorValue).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pUVar2->StartFloatValue = 0.0;
    fVar6 = (this->CameraPresetData).DistanceMax;
    if (param_1 <= fVar6) {
      fVar6 = param_1;
    }
    fVar1 = (this->CameraPresetData).DistanceMin;
    if (fVar6 <= fVar1) {
      fVar6 = fVar1;
    }
    (this->CameraControlData).CameraZoomValue = fVar6;
  }
  return;
}

// Tick @ 14b8edd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_CameraStateBase::Tick(UDS_CameraStateBase *this,float param_1)

{
  TRotator<double> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UObject *pUVar11;
  double *pdVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 local_98 [128];
  
  bVar8 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerPlayerController,(void *)0x0);
  if (((!bVar8) &&
      (bVar8 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                         (&this->OwnerCameraBoom,(void *)0x0), !bVar8)) &&
     (bVar8 = TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerFollowCamera,(void *)0x0), !bVar8)) {
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    pTVar1 = &(this->CameraControlData).CameraRotation;
    pdVar12 = (double *)(**(code **)(*(longlong *)pUVar11 + 0x7a8))(pUVar11,local_98);
    dVar32 = pdVar12[1];
    pTVar1->Pitch = *pdVar12;
    (this->CameraControlData).CameraRotation.Yaw = dVar32;
    dVar32 = pdVar12[2];
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar32;
    (this->CameraControlData).CameraRotation.Roll = dVar32;
    auVar27._0_8_ = pTVar1->Pitch;
    auVar27._8_8_ = pTVar1->Yaw;
    auVar19 = divpd(auVar27,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar19 = roundpd(auVar25,auVar19,3);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar26._0_8_ = auVar19._0_8_ * dVar6;
    dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar26._8_8_ = auVar19._8_8_ * dVar7;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = dVar32;
    auVar19 = divpd(auVar33,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar24 = (double)auVar27._0_8_ - auVar26._0_8_;
    dVar4 = (double)auVar27._8_8_ - auVar26._8_8_;
    auVar27 = roundpd(auVar26,auVar19,3);
    dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar20._8_4_ = SUB84(dVar4,0);
    auVar20._0_8_ = dVar24;
    auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    dVar23 = auVar20._8_8_ + dVar7;
    dVar32 = dVar32 - auVar27._0_8_ * dVar5;
    dVar34 = 0.0 - auVar27._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar15 = -(ulonglong)(0.0 <= dVar24);
    uVar17 = -(ulonglong)(0.0 <= dVar4);
    uVar16 = -(ulonglong)(0.0 <= dVar32);
    uVar18 = -(ulonglong)(0.0 <= dVar34);
    auVar28._0_8_ = uVar15 & (ulonglong)dVar24;
    auVar28._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar4);
    auVar28._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar4) >> 0x20);
    auVar31._0_4_ = ~(uint)uVar15 & SUB84(dVar24 + dVar6,0);
    auVar31._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar6) >> 0x20);
    auVar31._8_4_ = ~(uint)uVar17 & SUB84(dVar23,0);
    auVar31._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar23 >> 0x20);
    auVar31 = auVar31 | auVar28;
    auVar21._8_4_ = SUB84(dVar34,0);
    auVar21._0_8_ = dVar32;
    auVar21._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    dVar24 = auVar21._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar30._0_8_ = (ulonglong)dVar32 & uVar16;
    auVar30._8_4_ = (undefined4)(uVar18 & (ulonglong)dVar34);
    auVar30._12_4_ = (undefined4)((uVar18 & (ulonglong)dVar34) >> 0x20);
    auVar29._0_4_ = ~(uint)uVar16 & SUB84(dVar32 + dVar5,0);
    auVar29._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar5) >> 0x20);
    auVar29._8_4_ = ~(uint)uVar18 & SUB84(dVar24,0);
    auVar29._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar24 >> 0x20);
    auVar29 = auVar29 | auVar30;
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar29._0_8_);
    uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar31._0_8_);
    uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar31._8_8_);
    auVar22._0_8_ = uVar17 & (ulonglong)(auVar31._0_8_ - dVar6);
    uVar15 = uVar18 & (ulonglong)(auVar31._8_8_ - dVar7);
    auVar22._8_4_ = (undefined4)uVar15;
    auVar22._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar19._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar31._4_4_;
    auVar19._0_4_ = ~(uint)uVar17 & auVar31._0_4_;
    auVar19._8_4_ = ~(uint)uVar18 & auVar31._8_4_;
    auVar19._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar31._12_4_;
    pTVar1->Pitch = (double)SUB168(auVar22 | auVar19,0);
    pTVar1->Yaw = (double)SUB168(auVar22 | auVar19,8);
    (this->CameraControlData).CameraRotation.Roll =
         (double)(uVar16 & (ulonglong)(auVar29._0_8_ - dVar5) |
                 CONCAT44(~(uint)(uVar16 >> 0x20) & auVar29._4_4_,~(uint)uVar16 & auVar29._0_4_));
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    dVar32 = *(double *)&pUVar11[0xf].field_0x8;
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.X = *(double *)(pUVar11 + 0xf);
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Y = dVar32;
    lVar13 = this->_padding_;
    (this->CameraControlData).CameraSocketOffset.field0_0x0._s_0.Z =
         *(double *)&pUVar11[0xf].field_0x10;
    (**(code **)(lVar13 + 0x330))(this);
    (**(code **)(this->_padding_ + 0x338))(this);
    (**(code **)(this->_padding_ + 0x340))(this);
    (**(code **)(this->_padding_ + 0x348))(this);
    (**(code **)(this->_padding_ + 0x350))(this);
    cVar9 = (**(code **)(this->_padding_ + 800))(this);
    if (cVar9 == '\x01') {
      (**(code **)(this->_padding_ + 0x328))(this);
    }
    uVar14 = 0;
    if (0 < (this->CameraActions).ArrayNum) {
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar14 < (this->CameraActions).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((this->CameraActions).AllocatorInstance.Data + lVar13);
        (**(code **)(*plVar2 + 0x2b8))(plVar2,&this->CameraControlData);
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar14 < (this->CameraActions).ArrayNum);
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    (**(code **)(*(longlong *)pUVar11 + 0x7b0))(pUVar11,pTVar1);
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    auVar27 = ___xmm_408f400000000000408f400000000000;
    uVar37 = (undefined4)__xmm_408f400000000000408f400000000000;
    uVar40 = __xmm_408f400000000000408f400000000000._4_4_;
    dVar32 = *(double *)&pUVar11[0xf].field_0x10;
    auVar19 = minpd(*(undefined1 (*) [16])(pUVar11 + 0xf),___xmm_408f400000000000408f400000000000);
    dVar24 = (double)__xmm_408f400000000000408f400000000000;
    uVar35 = SUB84(dVar32,0);
    uVar38 = (int)((ulonglong)dVar32 >> 0x20);
    if (dVar24 <= dVar32) {
      uVar35 = uVar37;
      uVar38 = uVar40;
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(undefined1 (*) [16])(pUVar11 + 0xf) = auVar19;
    *(ulonglong *)&pUVar11[0xf].field_0x10 = CONCAT44(uVar38,uVar35);
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    auVar19 = ___xmm_c08f400000000000c08f400000000000;
    uVar35 = (undefined4)__xmm_c08f400000000000c08f400000000000;
    uVar38 = __xmm_c08f400000000000c08f400000000000._4_4_;
    dVar32 = *(double *)&pUVar11[0xf].field_0x10;
    auVar33 = maxpd(*(undefined1 (*) [16])(pUVar11 + 0xf),___xmm_c08f400000000000c08f400000000000);
    dVar4 = (double)__xmm_c08f400000000000c08f400000000000;
    uVar36 = SUB84(dVar32,0);
    uVar39 = (int)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= dVar4) {
      uVar36 = uVar35;
      uVar39 = uVar38;
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(undefined1 (*) [16])(pUVar11 + 0xf) = auVar33;
    *(ulonglong *)&pUVar11[0xf].field_0x10 = CONCAT44(uVar39,uVar36);
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    dVar32 = *(double *)(pUVar11 + 0x10);
    auVar27 = minpd(*(undefined1 (*) [16])&pUVar11[0xf].field_0x18,auVar27);
    uVar36 = SUB84(dVar32,0);
    uVar39 = (int)((ulonglong)dVar32 >> 0x20);
    if (dVar24 <= dVar32) {
      uVar36 = uVar37;
      uVar39 = uVar40;
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(undefined1 (*) [16])&pUVar11[0xf].field_0x18 = auVar27;
    *(ulonglong *)(pUVar11 + 0x10) = CONCAT44(uVar39,uVar36);
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    dVar32 = *(double *)(pUVar11 + 0x10);
    auVar27 = maxpd(*(undefined1 (*) [16])&pUVar11[0xf].field_0x18,auVar19);
    uVar37 = SUB84(dVar32,0);
    uVar40 = (int)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= dVar4) {
      uVar37 = uVar35;
      uVar40 = uVar38;
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(undefined1 (*) [16])&pUVar11[0xf].field_0x18 = auVar27;
    *(ulonglong *)(pUVar11 + 0x10) = CONCAT44(uVar40,uVar37);
    if ((this->CameraChangeTime != __real_3f800000) &&
       (fVar41 = param_1 * InterpSpeed + this->CameraChangeElapsedTime,
       this->CameraChangeElapsedTime = fVar41, this->CameraChangeTime < fVar41)) {
      this->CameraChangeTime = 1.0;
    }
  }
  return;
}

// TickMousePosition @ 14b8eec90

void __thiscall UDS_CameraStateBase::TickMousePosition(UDS_CameraStateBase *this,float param_1)

{
  if (this->IsPostUpdated != true) {
    (**(code **)(this->_padding_ + 0x2d0))();
    this->IsPostUpdated = false;
  }
  return;
}

// UpdateFOV @ 14b8f31c0

void __thiscall UDS_CameraStateBase::UpdateFOV(UDS_CameraStateBase *this,float param_1)

{
  UDS_CameraInterp *pUVar1;
  UCurveFloat *this_00;
  undefined8 uVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  float fVar7;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerFollowCamera).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerFollowCamera).WeakPtr);
    pUVar1 = (this->CameraInterp_FOV).field0_0x0.DebugPtr;
    if ((this->CameraPresetData).FOV == *(float *)&pUVar5[0xe].field_0x20) {
      pUVar1->ElapsedTime = 0.0;
      dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar1->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar1->StartRotationValue).Yaw = dVar3;
      (pUVar1->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar1->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar1->StartVectorValue).field0_0x0._s_0.Y = (double)uVar2;
      (pUVar1->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar1->StartFloatValue = 0.0;
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&(this->OwnerFollowCamera).WeakPtr);
      pUVar6 = FWeakObjectPtr::Get(&(this->OwnerFollowCamera).WeakPtr);
      if (pUVar1->ElapsedTime == 0.0) {
        pUVar1->StartFloatValue = *(float *)&pUVar5[0xe].field_0x20;
      }
      this_00 = (pUVar1->CurveData).field0_0x0.DebugPtr;
      fVar7 = param_1 * InterpSpeed + pUVar1->ElapsedTime;
      pUVar1->ElapsedTime = fVar7;
      fVar7 = fVar7 / this->CameraChangeTime;
      if (this_00 == (UCurveFloat *)0x0) {
        if (__real_3f800000 <= fVar7) {
          fVar7 = __real_3f800000;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
      }
      else {
        fVar7 = UCurveFloat::GetFloatValue(this_00,fVar7);
      }
      *(float *)&pUVar6[0xe].field_0x20 =
           ((this->CameraPresetData).FOV - pUVar1->StartFloatValue) * fVar7 +
           pUVar1->StartFloatValue;
    }
  }
  return;
}

// UpdateLagCamera @ 14b8f4780

void __thiscall UDS_CameraStateBase::UpdateLagCamera(UDS_CameraStateBase *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  float fVar3;
  
  bVar1 = TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCameraBoom,(void *)0x0);
  if (((!bVar1) &&
      ((float)((uint)(this->CameraPresetData).DistanceLagSpeed &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
     (0.0 < this->CameraLagSpeed)) {
    fVar3 = param_1 * __real_42c80000 + this->CameraLagDeltaSpeed;
    this->CameraLagDeltaSpeed = fVar3;
    fVar3 = fVar3 * param_1 + this->CameraLagSpeed;
    bVar1 = __real_447a0000 <= fVar3;
    this->CameraLagSpeed = fVar3;
    if (bVar1) {
      this->CameraLagSpeed = 0.0;
      this->CameraLagDeltaSpeed = 0.0;
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
      *(uint *)&pUVar2[0x10].field_0x10 = *(uint *)&pUVar2[0x10].field_0x10 & 0xffffffdf;
    }
    fVar3 = this->CameraLagSpeed;
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    *(float *)&pUVar2[0x10].field_0x14 = fVar3;
  }
  return;
}

// UpdateRotationInput @ 14b8f4d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_CameraStateBase::UpdateRotationInput(UDS_CameraStateBase *this,float param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  FViewport *pFVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_38 [3];
  
  bVar7 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerPlayerController,(void *)0x0);
  dVar2 = __real_3e45798ee2308c3a;
  if (!bVar7) {
    uVar1 = *(undefined8 *)&(this->CurAxisDeltaValue).field0_0x0;
    uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar11,uVar10) &&
        (double)CONCAT44(uVar11,uVar10) != __real_3e45798ee2308c3a) {
      pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
      (**(code **)(*(longlong *)pUVar8 + 0xd48))(pUVar8);
    }
    uVar1 = *(undefined8 *)((longlong)&(this->CurAxisDeltaValue).field0_0x0 + 8);
    uVar10 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar2 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != dVar2) {
      pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
      (**(code **)(*(longlong *)pUVar8 + 0xd40))(pUVar8);
    }
    pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
    if ((pUVar8[0x3d].field_0x21 == '\0') &&
       (pUVar8 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr),
       pUVar8[0x36].field_0x8 != '\x02')) {
      dVar5 = (this->NowMousePosition).field0_0x0._s_0.X;
      dVar6 = (this->NowMousePosition).field0_0x0._s_0.Y;
      dVar2 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
      dVar3 = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
      pFVar4 = ((GEngine->GameViewport).field0_0x0.DebugPtr)->Viewport;
      puVar9 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,local_res8);
      uVar1 = *puVar9;
      (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X =
           (this->CameraControlData).LastMousePosition.field0_0x0._s_0.X -
           (double)(int)uVar1 * (dVar5 - dVar2) * ___real_3f41111111111111;
      (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y =
           (this->CameraControlData).LastMousePosition.field0_0x0._s_0.Y -
           (double)(int)((ulonglong)uVar1 >> 0x20) * (dVar6 - dVar3) * ___real_3f4e573ac901e574;
      local_38[0]._0_8_ = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.X;
      local_38[0]._8_8_ = (this->CameraControlData).CurMousePosition.field0_0x0._s_0.Y;
      SetAbsoluteMousePos(this,(TVector2<double> *)&local_38[0]._s_0);
    }
  }
  return;
}

// UpdateSocketOffset @ 14b8f4f10

void __thiscall UDS_CameraStateBase::UpdateSocketOffset(UDS_CameraStateBase *this,float param_1)

{
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this_00;
  float *pfVar1;
  TVector<double> *pTVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UDS_CameraInterp *pUVar9;
  UCurveFloat *this_01;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  bool bVar15;
  USpringArmComponent *this_02;
  UObject *pUVar16;
  UObject *pUVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 local_88 [128];
  
  this_00 = &this->OwnerCameraBoom;
  bVar15 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar15) {
    fVar19 = (this->CameraPresetData).ZoomInSocketOffsetRange;
    fVar20 = (this->CameraControlData).CameraZoomValue;
    pTVar2 = &(this->CameraPresetData).SocketOffset;
    dVar13 = (pTVar2->field0_0x0)._s_0.X;
    dVar12 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Y;
    local_88._0_16_ = *(undefined1 (*) [16])&pTVar2->field0_0x0;
    dVar4 = (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Z;
    if (fVar20 <= fVar19) {
      dVar12 = (double)((fVar19 - fVar20) / (fVar19 - (this->CameraPresetData).DistanceMin));
      dVar13 = dVar12 * (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.X +
               (this->CameraPresetData).SocketOffset.field0_0x0._s_0.X;
      dVar4 = dVar12 * (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Z +
              (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Z;
      dVar12 = dVar12 * (this->CameraPresetData).ZoomInSocketOffset.field0_0x0._s_0.Y +
               (this->CameraPresetData).SocketOffset.field0_0x0._s_0.Y;
      local_88._8_4_ = SUB84(dVar12,0);
      local_88._0_8_ = dVar13;
      local_88._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    }
    uVar21 = (undefined4)((ulonglong)dVar12 >> 0x20);
    local_88._16_8_ = dVar4;
    this_02 = (USpringArmComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar15 = USpringArmComponent::IsCollisionFixApplied(this_02);
    if (bVar15) {
      pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      auVar10._8_4_ = SUB84(dVar12,0);
      auVar10._0_8_ = dVar13;
      auVar10._12_4_ = uVar21;
      *(undefined1 (*) [16])(pUVar16 + 0xf) = auVar10;
      *(double *)&pUVar16[0xf].field_0x10 = dVar4;
    }
    else {
      pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (((dVar13 == *(double *)(pUVar16 + 0xf)) && (dVar12 == *(double *)&pUVar16[0xf].field_0x8))
         && (dVar4 == *(double *)&pUVar16[0xf].field_0x10)) {
        pUVar9 = (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr;
        (this->PrevSocketOffset).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (this->PrevSocketOffset).field0_0x0._s_0.Y = (double)uVar14;
        (this->PrevSocketOffset).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar9->ElapsedTime = 0.0;
        dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        (pUVar9->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        (pUVar9->StartRotationValue).Yaw = dVar4;
        (pUVar9->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (pUVar9->StartVectorValue).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (pUVar9->StartVectorValue).field0_0x0._s_0.Y = (double)uVar14;
        (pUVar9->StartVectorValue).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar9->StartFloatValue = 0.0;
        pUVar9 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
        pUVar9->ElapsedTime = 0.0;
        dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        (pUVar9->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        (pUVar9->StartRotationValue).Yaw = dVar4;
        (pUVar9->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (pUVar9->StartVectorValue).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (pUVar9->StartVectorValue).field0_0x0._s_0.Y = (double)uVar14;
        (pUVar9->StartVectorValue).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar9->StartFloatValue = 0.0;
      }
      else {
        if (((dVar13 != (this->PrevSocketOffset).field0_0x0._s_0.X) ||
            (dVar12 != (this->PrevSocketOffset).field0_0x0._s_0.Y)) ||
           (dVar4 != (this->PrevSocketOffset).field0_0x0._s_0.Z)) {
          pUVar9 = (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr;
          auVar11._8_4_ = SUB84(dVar12,0);
          auVar11._0_8_ = dVar13;
          auVar11._12_4_ = uVar21;
          *(undefined1 (*) [16])&(this->PrevSocketOffset).field0_0x0 = auVar11;
          (this->PrevSocketOffset).field0_0x0._s_0.Z = dVar4;
          pUVar9->ElapsedTime = 0.0;
          ((this->CameraInterp_SocketOffset).field0_0x0.DebugPtr)->ElapsedTime = 0.0;
        }
        if ((this->CameraPresetData).IsBattleMode == true) {
          pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          dVar12 = *(double *)&pUVar16[0xf].field_0x8;
          local_88._8_8_ = dVar12;
        }
        pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pfVar3 = &this->CameraChangeTime;
        if (((this->CameraControlData).CameraZoomValue == *(float *)&pUVar16[0xe].field_0x20) ||
           (pUVar9 = (this->CameraInterp_SocketOffsetZoom).field0_0x0.DebugPtr,
           pfVar1 = &pUVar9->ElapsedTime, *pfVar3 < *pfVar1 || *pfVar3 == *pfVar1)) {
          fVar19 = (this->CameraCommonData).MarginRecoverySpeed;
          if ((this->CameraStateType == CameraStateBase) &&
             (this->PrevCameraStateType == CameraStateBattle)) {
            pUVar16 = FWeakObjectPtr::Get(&(this->OwnerPlayerController).WeakPtr);
            if ((*(uint *)&pUVar16[0x34].field_0xc & 0x100) == 0) {
              fVar19 = 0.0;
            }
            else {
              fVar19 = (this->CameraCommonData).SocketOffsetLerpSpeed;
            }
          }
          pUVar9 = (this->CameraInterp_SocketOffset).field0_0x0.DebugPtr;
          pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          fVar20 = pUVar9->ElapsedTime;
          if (fVar20 == 0.0) {
            dVar5 = *(double *)&pUVar16[0xf].field_0x8;
            (pUVar9->StartVectorValue).field0_0x0._s_0.X = *(double *)(pUVar16 + 0xf);
            (pUVar9->StartVectorValue).field0_0x0._s_0.Y = dVar5;
            (pUVar9->StartVectorValue).field0_0x0._s_0.Z = *(double *)&pUVar16[0xf].field_0x10;
          }
          this_01 = (pUVar9->CurveData).field0_0x0.DebugPtr;
          fVar20 = fVar19 * param_1 + fVar20;
          pUVar9->ElapsedTime = fVar20;
          fVar20 = fVar20 / *pfVar3;
          if (this_01 == (UCurveFloat *)0x0) {
            if (__real_3f800000 <= fVar20) {
              fVar20 = __real_3f800000;
            }
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
          }
          else {
            fVar20 = UCurveFloat::GetFloatValue(this_01,fVar20);
          }
          dVar5 = (pUVar9->StartVectorValue).field0_0x0._s_0.Y;
          dVar6 = (pUVar9->StartVectorValue).field0_0x0._s_0.Z;
          dVar18 = (double)fVar20;
          dVar7 = (pUVar9->StartVectorValue).field0_0x0._s_0.Y;
          dVar8 = (pUVar9->StartVectorValue).field0_0x0._s_0.Z;
          *(double *)(pUVar17 + 0xf) =
               (dVar13 - (pUVar9->StartVectorValue).field0_0x0._s_0.X) * dVar18 +
               (pUVar9->StartVectorValue).field0_0x0._s_0.X;
          *(double *)&pUVar17[0xf].field_0x8 = (dVar12 - dVar5) * dVar18 + dVar7;
          *(double *)&pUVar17[0xf].field_0x10 = (dVar4 - dVar6) * dVar18 + dVar8;
        }
        else {
          pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar17 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_CameraInterp::UpdateVector
                    (pUVar9,(TVector<double> *)(pUVar17 + 0xf),param_1,
                     (TVector<double> *)(pUVar16 + 0xf),(TVector<double> *)local_88,pfVar3,
                     &InterpSpeed);
        }
      }
    }
  }
  return;
}

// UpdateTargetOffset @ 14b8f53b0

void __thiscall UDS_CameraStateBase::UpdateTargetOffset(UDS_CameraStateBase *this,float param_1)

{
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> *this_00;
  TVector<double> *pTVar1;
  double dVar2;
  UDS_CameraInterp *pUVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  USpringArmComponent *this_01;
  UObject *pUVar8;
  UObject *pUVar9;
  
  this_00 = &this->OwnerCameraBoom;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar7) {
    this_01 = (USpringArmComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pTVar1 = &(this->CameraPresetData).TargetOffset;
    bVar7 = USpringArmComponent::IsCollisionFixApplied(this_01);
    if (bVar7) {
      dVar2 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Z;
      dVar4 = (pTVar1->field0_0x0)._s_0.X;
      dVar5 = (this->CameraPresetData).TargetOffset.field0_0x0._s_0.Y;
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      *(double *)&pUVar8[0xf].field_0x18 = dVar4;
      *(double *)&pUVar8[0xf].field_0x20 = dVar5;
      *(double *)(pUVar8 + 0x10) = dVar2;
    }
    else {
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if ((((pTVar1->field0_0x0)._s_0.X == *(double *)&pUVar8[0xf].field_0x18) &&
          ((this->CameraPresetData).TargetOffset.field0_0x0._s_0.Y ==
           *(double *)&pUVar8[0xf].field_0x20)) &&
         ((this->CameraPresetData).TargetOffset.field0_0x0._s_0.Z == *(double *)(pUVar8 + 0x10))) {
        pUVar3 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
        pUVar3->ElapsedTime = 0.0;
        dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        (pUVar3->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        (pUVar3->StartRotationValue).Yaw = dVar2;
        (pUVar3->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (pUVar3->StartVectorValue).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (pUVar3->StartVectorValue).field0_0x0._s_0.Y = (double)uVar6;
        (pUVar3->StartVectorValue).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pUVar3->StartFloatValue = 0.0;
      }
      else {
        pUVar3 = (this->CameraInterp_TargetOffset).field0_0x0.DebugPtr;
        pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_CameraInterp::UpdateVector
                  (pUVar3,(TVector<double> *)&pUVar9[0xf].field_0x18,param_1,
                   (TVector<double> *)&pUVar8[0xf].field_0x18,pTVar1,&this->CameraChangeTime,
                   &InterpSpeed);
      }
    }
  }
  return;
}

// UpdateZoomValue @ 14b8f5700

void __thiscall UDS_CameraStateBase::UpdateZoomValue(UDS_CameraStateBase *this,float param_1)

{
  float *pfVar1;
  UDS_CameraInterp *pUVar2;
  UCurveFloat *this_00;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  float fVar8;
  
  bVar5 = FWeakObjectPtr::IsValid(&(this->OwnerCameraBoom).WeakPtr);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    fVar8 = (this->CameraControlData).CameraZoomValue;
    if (fVar8 == *(float *)&pUVar6[0xe].field_0x20) {
      pUVar2 = (this->CameraInterp_Zoom).field0_0x0.DebugPtr;
      this->PrevCameraZoomValue = 0.0;
      pUVar2->ElapsedTime = 0.0;
      dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pUVar2->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pUVar2->StartRotationValue).Yaw = dVar4;
      (pUVar2->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (pUVar2->StartVectorValue).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pUVar2->StartVectorValue).field0_0x0._s_0.Y = (double)uVar3;
      (pUVar2->StartVectorValue).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pUVar2->StartFloatValue = 0.0;
      return;
    }
    if (fVar8 != this->PrevCameraZoomValue) {
      pUVar2 = (this->CameraInterp_Zoom).field0_0x0.DebugPtr;
      this->PrevCameraZoomValue = fVar8;
      pUVar2->ElapsedTime = 0.0;
    }
    pUVar2 = (this->CameraInterp_Zoom).field0_0x0.DebugPtr;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerCameraBoom).WeakPtr);
    pfVar1 = &pUVar2->StartFloatValue;
    if (pUVar2->ElapsedTime == 0.0) {
      *pfVar1 = *(float *)&pUVar6[0xe].field_0x20;
    }
    this_00 = (pUVar2->CurveData).field0_0x0.DebugPtr;
    fVar8 = param_1 * InterpSpeed + pUVar2->ElapsedTime;
    pUVar2->ElapsedTime = fVar8;
    fVar8 = fVar8 / this->CameraChangeTime;
    if (this_00 == (UCurveFloat *)0x0) {
      if (__real_3f800000 <= fVar8) {
        fVar8 = __real_3f800000;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
    }
    else {
      fVar8 = UCurveFloat::GetFloatValue(this_00,fVar8);
    }
    *(float *)&pUVar7[0xe].field_0x20 =
         ((this->CameraControlData).CameraZoomValue - *pfVar1) * fVar8 + *pfVar1;
  }
  return;
}

