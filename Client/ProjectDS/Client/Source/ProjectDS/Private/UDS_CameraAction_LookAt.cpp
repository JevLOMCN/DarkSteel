// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b432050

UClass * __cdecl UDS_CameraAction_LookAt::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_LookAt",
               &Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_LookAt,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_LookAt>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_LookAt>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton;
}

// UDS_CameraAction_LookAt @ 14b434600

UDS_CameraAction_LookAt * __thiscall
UDS_CameraAction_LookAt::UDS_CameraAction_LookAt
          (UDS_CameraAction_LookAt *this,FVTableHelper *param_1)

{
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->RecoveryDeltaTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_CameraAction_LookAt__6B_;
  return this;
}

// ~UDS_CameraAction_LookAt @ 14b434fa0

void __thiscall UDS_CameraAction_LookAt::~UDS_CameraAction_LookAt(UDS_CameraAction_LookAt *this)

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

// GetPrivateStaticClass @ 14b436aa0

UClass * __cdecl UDS_CameraAction_LookAt::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_LookAt",
               &Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_LookAt,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_LookAt>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_LookAt>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_LookAt.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraAction_LookAt @ 14b4370b0

void __cdecl UDS_CameraAction_LookAt::StaticRegisterNativesUDS_CameraAction_LookAt(void)

{
  return;
}

// UDS_CameraAction_LookAt @ 14b8b2400

UDS_CameraAction_LookAt * __thiscall
UDS_CameraAction_LookAt::UDS_CameraAction_LookAt
          (UDS_CameraAction_LookAt *this,FObjectInitializer *param_1)

{
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->RecoveryDeltaTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_CameraAction_LookAt__6B_;
  return this;
}

// Initialize @ 14b8cad80

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
UDS_CameraAction_LookAt::Initialize
          (UDS_CameraAction_LookAt *this,FDS_CameraPresetData *param_1,FDS_CameraCommonData *param_2
          )

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

// Reset @ 14b8e5a20

void __thiscall UDS_CameraAction_LookAt::Reset(UDS_CameraAction_LookAt *this)

{
  this->RecoveryDeltaTime = 0.0;
  return;
}

// UpdateCameraData @ 14b8f2700

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
UDS_CameraAction_LookAt::UpdateCameraData
          (UDS_CameraAction_LookAt *this,FDS_CameraControlData *param_1,float param_2)

{
  longlong *this_00;
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  TVector<double>_u_0 *pTVar4;
  TRotator<double> *pTVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  TVector<double>_u_0 local_e8;
  TRotator<double> local_d0;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_a0;
  TVector<double>_u_0 local_88;
  TVector<double> local_70;
  TRotator<double> local_58 [2];
  
  this_00 = &this->_padding_;
  bVar2 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (pUVar3[0x36].field_0x9 == '\x02') {
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
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (((((pUVar3[0x34].field_0xc & 1) != 0) ||
         (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00), (pUVar3[0x34].field_0xc & 4) != 0
         )) || (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
               (pUVar3[0x34].field_0xc & 0x40) != 0)) ||
       (((pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
         (pUVar3[0x34].field_0xc & 0x10) != 0 ||
         (pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00),
         (*(uint *)&pUVar3[0x34].field_0xc & 0x100) != 0)) ||
        ((dVar1 = (this->PrevMousePosition).field0_0x0._s_0.X -
                  (param_1->LastMousePosition).field0_0x0._s_0.X,
         uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar6) &&
         (double)CONCAT44(uVar8,uVar6) != __real_3f1a36e2e0000000 ||
         (dVar1 = (this->PrevMousePosition).field0_0x0._s_0.Y -
                  (param_1->LastMousePosition).field0_0x0._s_0.Y,
         uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar8,uVar6) &&
         (double)CONCAT44(uVar8,uVar6) != __real_3f1a36e2e0000000)))))) {
      this->RecoveryDeltaTime = 0.0;
    }
    else {
      this->RecoveryDeltaTime = param_2 + this->RecoveryDeltaTime;
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
      pTVar4 = &local_e8;
      local_e8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_e8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_e8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar4 = &USceneComponent::GetForwardVector
                          (*(USceneComponent **)(pUVar3 + 0xb),(TVector<double> *)&local_88._s_0)->
                field0_0x0;
    }
    local_b8._s_0.X = (((TVector<double>_u_0 *)&(pTVar4->_s_0).X)->_s_0).X;
    local_b8._s_0.Y = (pTVar4->_s_0).Y;
    local_b8._s_0.Z = (pTVar4->_s_0).Z;
    DS_Util::GetForwardVectorFromYaw(&local_70,(float)(param_1->CameraRotation).Yaw);
    fVar7 = DS_Util::CalculateAngleBetweenVectors((TVector<double> *)&local_b8._s_0,&local_70);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if ((((*(uint *)&pUVar3[0x34].field_0xc & 0x100) != 0) && (fVar7 < __real_43160000)) ||
       (*(float *)&this->_padding_ < this->RecoveryDeltaTime)) {
      fVar7 = FMath::FInterpTo<float,float,float,float>
                        (param_1->CameraZoomValue,*(float *)((longlong)&this->_padding_ + 4),param_2
                         ,*(float *)((longlong)&this->_padding_ + 4));
      param_1->CameraZoomValue = fVar7;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      pUVar3 = *(UObject **)&pUVar3[0x13].field_0x18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (*(USceneComponent **)(pUVar3 + 0xb) == (USceneComponent *)0x0) {
        pTVar5 = &local_d0;
        local_d0.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_d0.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_d0.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar5 = USceneComponent::GetComponentRotation
                           (*(USceneComponent **)(pUVar3 + 0xb),&local_d0);
      }
      local_a0.Yaw = 0.0;
      local_a0.Roll = 0.0;
      local_a0.Pitch = (double)*(float *)&this->_padding_ + pTVar5->Pitch;
      local_e8._s_0.Y = (double)*(float *)((longlong)&this->_padding_ + 4) + pTVar5->Yaw;
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Z = 0.0;
      FMath::RInterpTo((TRotator<double> *)&local_88._s_0,&param_1->CameraRotation,&local_a0,param_2
                       ,*(float *)&this->_padding_);
      FMath::RInterpTo(local_58,&param_1->CameraRotation,(TRotator<double> *)&local_e8._s_0,param_2,
                       *(float *)((longlong)&this->_padding_ + 4));
      (param_1->CameraRotation).Pitch = local_88._s_0.X;
      (param_1->CameraRotation).Yaw = local_58[0].Yaw;
      (param_1->CameraRotation).Roll = 0.0;
    }
    dVar1 = (param_1->LastMousePosition).field0_0x0._s_0.Y;
    (this->PrevMousePosition).field0_0x0._s_0.X = (param_1->LastMousePosition).field0_0x0._s_0.X;
    (this->PrevMousePosition).field0_0x0._s_0.Y = dVar1;
    return;
  }
  return;
}

