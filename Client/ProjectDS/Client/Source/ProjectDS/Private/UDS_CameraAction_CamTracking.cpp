// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b431f10

UClass * __cdecl UDS_CameraAction_CamTracking::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_CamTracking",
               &Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_CamTracking,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraAction_CamTracking>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_CamTracking>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton;
}

// UDS_CameraAction_CamTracking @ 14b4345b0

UDS_CameraAction_CamTracking * __thiscall
UDS_CameraAction_CamTracking::UDS_CameraAction_CamTracking
          (UDS_CameraAction_CamTracking *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraAction_CamTracking__6B_;
  this->WaitYawDeltaTime = 0.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->WaitPitchDeltaTime = 0.0;
  (this->PrevCameraRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PrevCameraRotation).Yaw = dVar1;
  (this->PrevCameraRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// ~UDS_CameraAction_CamTracking @ 14b434f40

void __thiscall
UDS_CameraAction_CamTracking::~UDS_CameraAction_CamTracking(UDS_CameraAction_CamTracking *this)

{
  this->_padding_ = (longlong)&___7UDS_CameraAction_Base__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4369e0

UClass * __cdecl UDS_CameraAction_CamTracking::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_CamTracking",
               &Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_CamTracking,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraAction_CamTracking>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_CamTracking>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_CamTracking.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraAction_CamTracking @ 14b4370a0

void __cdecl UDS_CameraAction_CamTracking::StaticRegisterNativesUDS_CameraAction_CamTracking(void)

{
  return;
}

// UDS_CameraAction_CamTracking @ 14b8b23b0

UDS_CameraAction_CamTracking * __thiscall
UDS_CameraAction_CamTracking::UDS_CameraAction_CamTracking
          (UDS_CameraAction_CamTracking *this,FObjectInitializer *param_1)

{
  double dVar1;
  
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraAction_CamTracking__6B_;
  this->WaitYawDeltaTime = 0.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->WaitPitchDeltaTime = 0.0;
  (this->PrevCameraRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PrevCameraRotation).Yaw = dVar1;
  (this->PrevCameraRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return this;
}

// Initialize @ 14b8cad70

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
UDS_CameraAction_CamTracking::Initialize
          (UDS_CameraAction_CamTracking *this,FDS_CameraPresetData *param_1,
          FDS_CameraCommonData *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar6;
  FWeakObjectPtr FStackX_8;
  UObject *pUStackX_10;
  
  *(float *)&this->_padding_ = param_1->FOV;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->Distance;
  *(float *)&this->_padding_ = param_1->Pitch;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->Yaw;
  *(float *)&this->_padding_ = param_1->DistanceMin;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->DistanceMax;
  *(float *)&this->_padding_ = param_1->PitchMin;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->PitchMax;
  *(float *)&this->_padding_ = param_1->CameraRotationLag;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->CamSensitivityUpdown;
  *(float *)&this->_padding_ = param_1->CamSensitivityLeftRight;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->CamSensitivityZoomInOut;
  dVar2 = (param_1->TargetOffset).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->TargetOffset).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)(param_1->TargetOffset).field0_0x0._s_0.Z;
  dVar2 = (param_1->SocketOffset).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->SocketOffset).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)(param_1->SocketOffset).field0_0x0._s_0.Z;
  dVar2 = (param_1->PivotOffset).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->PivotOffset).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)(param_1->PivotOffset).field0_0x0._s_0.Z;
  ::FString::operator=((FString *)&this->_padding_,&param_1->TargetSocketName);
  *(float *)&this->_padding_ = param_1->DistanceLagMaxRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->DistanceLagSpeed;
  *(float *)&this->_padding_ = param_1->RecoveryWaitTime;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RecoverySpeedDistance;
  *(float *)&this->_padding_ = param_1->RecoverySpeedPitch;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RecoverySpeedYaw;
  *(float *)&this->_padding_ = param_1->TargetingModeLagSpeed;
  *(bool *)((longlong)&this->_padding_ + 4) = param_1->IsSlopeCam;
  *(bool *)((longlong)&this->_padding_ + 5) = param_1->IsBattleMode;
  dVar2 = (param_1->ZoomInSocketOffset).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->ZoomInSocketOffset).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = (longlong)(param_1->ZoomInSocketOffset).field0_0x0._s_0.Z;
  *(float *)&this->_padding_ = param_1->ZoomInSocketOffsetRange;
  FDS_CameraCommonData::operator=((FDS_CameraCommonData *)&this->_padding_,param_2);
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (!bVar3) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
  pUStackX_10 = *(UObject **)&pUVar4[0x12].field_0x20;
  if (pUStackX_10 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUStackX_10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUStackX_10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14b8cab9c;
  }
  pUStackX_10 = (UObject *)0x0;
LAB_14b8cab9c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUStackX_10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&pUStackX_10);
  pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
  TVar6 = FDS_EntityBase::GetCharStateData((FDS_EntityBase *)&pUVar4[0x29].field_0x10);
  this->_padding_ = *(longlong *)TVar6.WeakPtr;
  return;
}

// Reset @ 14b8e5a10

void __thiscall UDS_CameraAction_CamTracking::Reset(UDS_CameraAction_CamTracking *this)

{
  this->WaitYawDeltaTime = 0.0;
  this->WaitPitchDeltaTime = 0.0;
  return;
}

// UpdateCameraData @ 14b8f2410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_CameraAction_CamTracking::UpdateCameraData
          (UDS_CameraAction_CamTracking *this,FDS_CameraControlData *param_1,float param_2)

{
  longlong *this_00;
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  TVector<double>_u_0 *pTVar4;
  TRotator<double> *pTVar5;
  float fVar6;
  TVector<double>_u_0 local_98;
  TRotator<double> local_80;
  TVector<double>_u_0 local_68;
  TRotator<double> local_50;
  TVector<double> local_38 [2];
  
  this_00 = &this->_padding_;
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 == (UObject *)0x0) {
        return;
      }
    }
    else {
      if (pUVar3 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((*(float *)((longlong)&this->_padding_ + 4) != 0.0) &&
       (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), pUVar3[0x3d].field_0x21 != '\x01'))
    {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      if ((*(uint *)&pUVar3[0x34].field_0xc & 0x100) == 0) {
        this->WaitYawDeltaTime = 0.0;
        this->WaitPitchDeltaTime = 0.0;
      }
      else {
        this->WaitYawDeltaTime = param_2 + this->WaitYawDeltaTime;
        this->WaitPitchDeltaTime = param_2 + this->WaitPitchDeltaTime;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        if ((((pUVar3[0x34].field_0xc & 1) != 0) ||
            (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
            (pUVar3[0x34].field_0xc & 4) != 0)) ||
           (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
           (pUVar3[0x34].field_0xc & 0x40) != 0)) {
          this->WaitPitchDeltaTime = 0.0;
        }
        if (*(float *)&this->_padding_ < this->WaitYawDeltaTime ||
            *(float *)&this->_padding_ == this->WaitYawDeltaTime) {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
          pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
            pTVar4 = &local_98;
            local_98._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
            local_98._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
            local_98._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
          }
          else {
            pTVar4 = &USceneComponent::GetForwardVector
                                (*(USceneComponent **)(pUVar3 + 0xb),(TVector<double> *)&local_50)->
                      field0_0x0;
          }
          local_68._s_0.X = (((TVector<double>_u_0 *)&(pTVar4->_s_0).X)->_s_0).X;
          local_68._s_0.Y = (pTVar4->_s_0).Y;
          local_68._s_0.Z = (pTVar4->_s_0).Z;
          DS_Util::GetForwardVectorFromYaw(local_38,(float)(param_1->CameraRotation).Yaw);
          fVar6 = DS_Util::CalculateAngleBetweenVectors((TVector<double> *)&local_68._s_0,local_38);
          if (fVar6 < *(float *)&this->_padding_) {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
              pTVar5 = &local_80;
              local_80.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
              local_80.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
              local_80.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            }
            else {
              pTVar5 = USceneComponent::GetComponentRotation
                                 (*(USceneComponent **)(pUVar3 + 0xb),&local_80);
            }
            local_98._s_0.Y = (double)*(float *)((longlong)&this->_padding_ + 4) + pTVar5->Yaw;
            local_98._s_0.X = 0.0;
            local_98._s_0.Z = 0.0;
            FMath::RInterpTo(&local_50,&param_1->CameraRotation,(TRotator<double> *)&local_98._s_0,
                             param_2,*(float *)((longlong)&this->_padding_ + 4));
            (param_1->CameraRotation).Yaw = local_50.Yaw;
            (param_1->CameraRotation).Roll = 0.0;
            dVar1 = (param_1->CameraRotation).Yaw;
            (this->PrevCameraRotation).Pitch = (param_1->CameraRotation).Pitch;
            (this->PrevCameraRotation).Yaw = dVar1;
            (this->PrevCameraRotation).Roll = (param_1->CameraRotation).Roll;
          }
        }
      }
    }
  }
  return;
}

