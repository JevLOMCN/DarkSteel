// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b415f50

UClass * __cdecl UDS_AnimNotifyState_Camera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_Camera",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_Camera,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotifyState_Camera>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_Camera>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton;
}

// UDS_AnimNotifyState_Camera @ 14b41afa0

UDS_AnimNotifyState_Camera * __thiscall
UDS_AnimNotifyState_Camera::UDS_AnimNotifyState_Camera
          (UDS_AnimNotifyState_Camera *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_Camera__6B_;
  this->Distance = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->SocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketName).Data.ArrayNum = 0;
  (this->SocketName).Data.ArrayMax = 0;
  this->CurveStartTime = 0.30000001192092896;
  this->FOV = 0.0;
  this->bUseReturn = true;
  this->InputIgnoreStartTime = 0.0;
  this->InputIgnoreEndTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SocketOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SocketOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->SocketOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_AnimNotifyState_Camera @ 14b41ba00

void __thiscall
UDS_AnimNotifyState_Camera::~UDS_AnimNotifyState_Camera(UDS_AnimNotifyState_Camera *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_Camera__6B_;
  pFVar1 = (this->SocketName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d190

UClass * __cdecl UDS_AnimNotifyState_Camera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_Camera",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_Camera,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AnimNotifyState_Camera>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_Camera>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_Camera.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState_Camera @ 14b41e180

void __cdecl UDS_AnimNotifyState_Camera::StaticRegisterNativesUDS_AnimNotifyState_Camera(void)

{
  return;
}

// UDS_AnimNotifyState_Camera @ 14b8646e0

UDS_AnimNotifyState_Camera * __thiscall
UDS_AnimNotifyState_Camera::UDS_AnimNotifyState_Camera
          (UDS_AnimNotifyState_Camera *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UDS_AnimNotifyState::UDS_AnimNotifyState((UDS_AnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_Camera__6B_;
  this->Distance = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->SocketName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SocketName).Data.ArrayNum = 0;
  (this->SocketName).Data.ArrayMax = 0;
  this->CurveStartTime = 0.30000001192092896;
  this->FOV = 0.0;
  this->bUseReturn = true;
  this->InputIgnoreStartTime = 0.0;
  this->InputIgnoreEndTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SocketOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SocketOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->SocketOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// IsValidData @ 14b87e440

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

bool __thiscall
UDS_AnimNotifyState_Camera::IsValidData
          (UDS_AnimNotifyState_Camera *this,USkeletalMeshComponent *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  int iVar3;
  ADS_CameraManager *pAVar4;
  FDS_EntityBase *this_00;
  UDS_GameOptionManager *this_01;
  UDS_GameOptionData *this_02;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (((bVar2) && (pAVar4 = ADS_CameraManager::GetInst(), pAVar4 != (ADS_CameraManager *)0x0)) &&
     (param_1 != (USkeletalMeshComponent *)0x0)) {
    pUVar1 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_18[0] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_18);
    this_00 = FDS_EntityBase::GetEntityBaseFromActor
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    if ((this_00 != (FDS_EntityBase *)0x0) &&
       (bVar2 = FDS_EntityBase::IsMainCharacter(this_00), bVar2)) {
      this_01 = UDS_GameOptionManager::GetInst();
      if ((this_01 != (UDS_GameOptionManager *)0x0) &&
         ((this_02 = UDS_GameOptionManager::GetGameOptionData(this_01,CameraNotify),
          this_02 != (UDS_GameOptionData *)0x0 &&
          (iVar3 = UDS_GameOptionData::GetGameOptionValue(this_02,0), iVar3 == 0)))) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// NotifyBegin @ 14b880870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AnimNotifyState_Camera::NotifyBegin
          (UDS_AnimNotifyState_Camera *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3,FAnimNotifyEventReference *param_4)

{
  int iVar1;
  bool bVar2;
  ADS_CameraManager *this_00;
  FName *pFVar3;
  FString *pFVar4;
  UCurveFloat *pUVar5;
  UClass *pUVar6;
  AActor *this_01;
  TRotator<double> *pTVar7;
  FTimerManager *this_02;
  undefined8 *puVar8;
  ulong64 uVar9;
  double dVar10;
  FDelegateAllocation local_c8;
  FName local_b8;
  FWeakObjectPtr local_b0;
  TVector<double>_u_0 local_a8;
  TStringView<wchar_t> local_88;
  FSoftObjectPath local_78;
  FTimerHandle local_58;
  FString local_50 [3];
  
  bVar2 = IsValidData(this,param_1);
  if (!bVar2) {
    return;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_b0);
  if (!bVar2) {
    return;
  }
  this_00 = ADS_CameraManager::GetInst();
  if (this_00 == (ADS_CameraManager *)0x0) {
    return;
  }
  ADS_CameraManager::OnCameraNotifyBegin(this_00,(float)this->CurveStartTime);
  ADS_CameraManager::OnCameraNotifyInputIgnore
            (this_00,(float)this->InputIgnoreStartTime,(float)this->InputIgnoreEndTime);
  if (this->CurveStartTime <= 0.0) {
    OnCameraStart(this,param_1,param_3);
    return;
  }
  if (this->DefaultCurveData != (UCurveFloat *)0x0) goto LAB_14b880a18;
  pFVar3 = ::FName::FName((FName *)&local_c8,
                          "/Game/Datas/Curve/Curve_CameraBattle.Curve_CameraBattle");
  local_b8 = *pFVar3;
  pFVar4 = ::FName::ToString(&local_b8,(FString *)&local_a8._s_0);
  pFVar4 = FWN_SoftObjectUtils::GetObjectPath(local_50,pFVar4,false);
  local_78.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetPath.PackageName.Number = 0;
  local_78.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetPath.AssetName.Number = 0;
  local_78.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.SubPathString.Data.ArrayNum = 0;
  local_78.SubPathString.Data.ArrayMax = 0;
  local_88.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_88.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_88.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_78,&local_88);
  if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
  }
  if ((void *)local_a8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_a8._s_0.X);
  }
  pUVar5 = (UCurveFloat *)FSoftObjectPath::ResolveObject(&local_78);
  if (pUVar5 == (UCurveFloat *)0x0) {
LAB_14b880a00:
    pUVar5 = (UCurveFloat *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14b880a00;
  }
  this->DefaultCurveData = pUVar5;
  if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14b880a18:
  if ((this->DistanceCurve != (UCurveFloat *)0x0) && (this->DefaultCurveData != (UCurveFloat *)0x0))
  {
    ADS_CameraManager::OnCameraNotifyDistance
              (this_00,this->Distance,this->DefaultCurveData,(float)this->CurveStartTime);
  }
  if ((this->RotationCurve != (UCurveVector *)0x0) && (this->DefaultCurveData != (UCurveFloat *)0x0)
     ) {
    this_01 = (AActor *)FWeakObjectPtr::Get(&local_b0);
    pTVar7 = AActor::GetActorRotation(this_01,(TRotator<double> *)&local_a8._s_0);
    dVar10 = (this->Rotation).Yaw + pTVar7->Yaw;
    local_a8._s_0.Z = (this->Rotation).Roll + pTVar7->Roll;
    local_a8._8_4_ = SUB84(dVar10,0);
    local_a8._s_0.X = pTVar7->Pitch + (this->Rotation).Pitch;
    local_a8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    ADS_CameraManager::OnCameraNotifyRotation
              (this_00,(TRotator<double> *)&local_a8._s_0,(UCurveBase *)this->DefaultCurveData,
               (float)this->CurveStartTime);
  }
  if ((this->FOVCurve != (UCurveFloat *)0x0) && (this->DefaultCurveData != (UCurveFloat *)0x0)) {
    ADS_CameraManager::OnCameraNotifyFOV
              (this_00,this->FOV,this->DefaultCurveData,(float)this->CurveStartTime);
  }
  local_a8._0_16_ = *(undefined1 (*) [16])&(this->SocketOffset).field0_0x0;
  local_a8._s_0.Z = (this->SocketOffset).field0_0x0._s_0.Z;
  ADS_CameraManager::OnCameraNotifySocket
            (this_00,(AActor *)param_1->_padding_,&this->SocketName,
             (TVector<double> *)&local_a8._s_0);
  local_58.Handle = 0;
  this_02 = FDS_TimerManager::Get((UObject *)0x0);
  dVar10 = this->CurveStartTime;
  local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c8.DelegateSize = 0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_c8);
  if (puVar8 != (undefined8 *)0x0) {
    *(float *)(puVar8 + 2) = param_3;
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUSkeletalMeshComponent__M__6B_
    ;
    puVar8[1] = param_1;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_AnimNotifyState_Camera____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUSkeletalMeshComponent__M__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_b8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_b8);
    puVar8[5] = OnCameraStart;
  }
  FTimerManager::SetTimer
            (this_02,&local_58,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_c8,
             (float)dVar10,false,__real_bf800000);
  if ((local_c8.DelegateSize != 0) &&
     (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c8,0,0,0x10);
    local_c8.DelegateSize = 0;
  }
  if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c8.DelegateAllocator);
  }
  return;
}

// NotifyEnd @ 14b880c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AnimNotifyState_Camera::NotifyEnd
          (UDS_AnimNotifyState_Camera *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  bool bVar1;
  ADS_CameraManager *this_00;
  
  bVar1 = IsValidData(this,param_1);
  if (bVar1) {
    this_00 = ADS_CameraManager::GetInst();
    if (this_00 != (ADS_CameraManager *)0x0) {
      ADS_CameraManager::OnCameraNotifyEnd(this_00,(AActor *)param_1->_padding_,this->bUseReturn);
    }
  }
  return;
}

// OnCameraStart @ 14b8847c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AnimNotifyState_Camera::OnCameraStart
          (UDS_AnimNotifyState_Camera *this,USkeletalMeshComponent *param_1,float param_2)

{
  bool bVar1;
  ADS_CameraManager *this_00;
  AActor *this_01;
  TRotator<double> *pTVar2;
  float fVar3;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_58;
  TRotator<double> local_38 [2];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar1) && (this_00 = ADS_CameraManager::GetInst(), this_00 != (ADS_CameraManager *)0x0)) {
    fVar3 = (float)((double)param_2 - this->CurveStartTime);
    if (0.0 < fVar3) {
      if (this->DistanceCurve != (UCurveFloat *)0x0) {
        ADS_CameraManager::OnCameraNotifyDistance(this_00,this->Distance,this->DistanceCurve,fVar3);
      }
      if (this->RotationCurve != (UCurveVector *)0x0) {
        this_01 = (AActor *)FWeakObjectPtr::Get(&local_res20);
        pTVar2 = AActor::GetActorRotation(this_01,local_38);
        local_58._s_0.X = pTVar2->Pitch + (this->Rotation).Pitch;
        local_58._s_0.Y = (this->Rotation).Yaw + pTVar2->Yaw;
        local_58._s_0.Z = (this->Rotation).Roll + pTVar2->Roll;
        ADS_CameraManager::OnCameraNotifyRotation
                  (this_00,(TRotator<double> *)&local_58._s_0,(UCurveBase *)this->RotationCurve,
                   fVar3);
      }
      if (this->FOVCurve != (UCurveFloat *)0x0) {
        ADS_CameraManager::OnCameraNotifyFOV(this_00,this->FOV,this->FOVCurve,fVar3);
      }
    }
    local_58._s_0.X = (this->SocketOffset).field0_0x0._s_0.X;
    local_58._s_0.Y = (this->SocketOffset).field0_0x0._s_0.Y;
    local_58._s_0.Z = (this->SocketOffset).field0_0x0._s_0.Z;
    ADS_CameraManager::OnCameraNotifySocket
              (this_00,(AActor *)param_1->_padding_,&this->SocketName,
               (TVector<double> *)&local_58._s_0);
  }
  return;
}

