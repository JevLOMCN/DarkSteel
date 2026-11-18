// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b432320

UClass * __cdecl UDS_CameraAction_Slope::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Slope",
               &Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Slope,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Slope>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Slope>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton;
}

// UDS_CameraAction_Slope @ 14b434640

UDS_CameraAction_Slope * __thiscall
UDS_CameraAction_Slope::UDS_CameraAction_Slope(UDS_CameraAction_Slope *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->WaitDeltaTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_CameraAction_Slope__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsInitSlope = false;
  return this;
}

// ~UDS_CameraAction_Slope @ 14b435000

void __thiscall UDS_CameraAction_Slope::~UDS_CameraAction_Slope(UDS_CameraAction_Slope *this)

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

// GetPrivateStaticClass @ 14b436b60

UClass * __cdecl UDS_CameraAction_Slope::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraAction_Slope",
               &Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton,
               StaticRegisterNativesUDS_CameraAction_Slope,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraAction_Slope>,
               InternalVTableHelperCtorCaller<UDS_CameraAction_Slope>,local_res8,
               UDS_CameraAction_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraAction_Slope.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraAction_Slope @ 14b4370c0

void __cdecl UDS_CameraAction_Slope::StaticRegisterNativesUDS_CameraAction_Slope(void)

{
  return;
}

// UDS_CameraAction_Slope @ 14b8b2440

UDS_CameraAction_Slope * __thiscall
UDS_CameraAction_Slope::UDS_CameraAction_Slope
          (UDS_CameraAction_Slope *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_CameraAction_Base::UDS_CameraAction_Base((UDS_CameraAction_Base *)this,param_1);
  this->WaitDeltaTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_CameraAction_Slope__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->PrevMainPlayerLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->IsInitSlope = false;
  return this;
}

// Initialize @ 14b8cad90

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
UDS_CameraAction_Slope::Initialize
          (UDS_CameraAction_Slope *this,FDS_CameraPresetData *param_1,FDS_CameraCommonData *param_2)

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

// Reset @ 14b8e5a40

void __thiscall UDS_CameraAction_Slope::Reset(UDS_CameraAction_Slope *this)

{
  this->WaitDeltaTime = 0.0;
  return;
}

// UpdateCameraData @ 14b8f2a80

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
UDS_CameraAction_Slope::UpdateCameraData
          (UDS_CameraAction_Slope *this,FDS_CameraControlData *param_1,float param_2)

{
  TVector<double> *this_00;
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_CharStateData *pUVar7;
  TVector<double>_u_0 *pTVar8;
  TRotator<double> *pTVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double local_res8 [2];
  float local_res18;
  TVector<double>_u_0 local_118;
  TRotator<double> local_100;
  TVector<double>_u_0 local_e8;
  TRotator<double> local_d0 [7];
  
  local_res18 = param_2;
  bVar5 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6 = *(UObject **)&pUVar6[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 == (UObject *)0x0) {
        return;
      }
    }
    else {
      if (pUVar6 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar6);
    }
    bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar5) {
      pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res8[0] = (double)CONCAT44(local_res8[0]._4_4_,0x22);
      bVar5 = UDS_CharStateData::HasCharDetailState(pUVar7,(EDS_CharDetailState *)local_res8);
      if (!bVar5) {
        pUVar7 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        local_res8[0] = 1.06099802196344e-314;
        bVar5 = UDS_CharStateData::HasCharState(pUVar7,(EDS_CharState *)local_res8);
        if (!bVar5) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pUVar6 = *(UObject **)&pUVar6[0x13].field_0x18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          lVar1 = *(longlong *)(pUVar6 + 0xb);
          if (lVar1 == 0) {
            uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar12 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
          else {
            local_e8._s_0.Z = *(double *)(lVar1 + 0x220);
            uVar10 = SUB84(local_e8._s_0.Z,0);
            uVar12 = (undefined4)((ulonglong)local_e8._s_0.Z >> 0x20);
            uVar17 = *(undefined4 *)(lVar1 + 0x210);
            uVar18 = *(undefined4 *)(lVar1 + 0x214);
            uVar19 = *(undefined4 *)(lVar1 + 0x218);
            uVar20 = *(undefined4 *)(lVar1 + 0x21c);
          }
          this_00 = &this->PrevMainPlayerLocation;
          if (this->IsInitSlope == false) {
            bVar5 = UE::Math::TVector<double>::IsNearlyZero(this_00,__real_3f1a36e2e0000000);
            if ((bVar5) ||
               (((double)CONCAT44(uVar18,uVar17) == (this_00->field0_0x0)._s_0.X &&
                ((double)CONCAT44(uVar20,uVar19) == (this->PrevMainPlayerLocation).field0_0x0._s_0.Y
                )))) {
              *(undefined4 *)&this_00->field0_0x0 = uVar17;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 4) = uVar18;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 8) = uVar19;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 0xc) = uVar20;
              (this->PrevMainPlayerLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar10);
              return;
            }
            this->IsInitSlope = true;
          }
          dVar3 = (double)CONCAT44(uVar20,uVar19) - (this->PrevMainPlayerLocation).field0_0x0._s_0.Y
          ;
          dVar2 = (double)CONCAT44(uVar18,uVar17) - (this_00->field0_0x0)._s_0.X;
          dVar15 = local_e8._s_0.Z - (this->PrevMainPlayerLocation).field0_0x0._s_0.Z;
          dVar2 = dVar3 * dVar3 + dVar2 * dVar2;
          if (__real_4059000000000000 <= dVar15 * dVar15 + dVar2) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            if ((((pUVar6[0x34].field_0xc & 1) == 0) &&
                (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
                (pUVar6[0x34].field_0xc & 4) == 0)) &&
               (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
               (pUVar6[0x34].field_0xc & 0x40) == 0)) {
              fVar11 = param_2 + this->WaitDeltaTime;
              this->WaitDeltaTime = fVar11;
            }
            else {
              this->WaitDeltaTime = 0.0;
              fVar11 = 0.0;
            }
            if (*(float *)&this->_padding_ <= fVar11) {
              dVar2 = FGenericPlatformMath::Atan2(dVar15,SQRT(dVar2));
              fVar11 = (float)dVar2 * __real_42652ee0;
              pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              pUVar6 = *(UObject **)&pUVar6[0x13].field_0x18;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if (*(USceneComponent **)(pUVar6 + 0xb) == (USceneComponent *)0x0) {
                pTVar8 = &local_e8;
                local_e8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                local_e8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
                local_e8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
              }
              else {
                pTVar8 = &USceneComponent::GetForwardVector
                                    (*(USceneComponent **)(pUVar6 + 0xb),(TVector<double> *)local_d0
                                    )->field0_0x0;
              }
              local_res8[0] = (pTVar8->_s_0).Z;
              dVar2 = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
              dVar4 = (pTVar8->_s_0).Y;
              local_d0[0].Roll = local_res8[0];
              DS_Util::GetForwardVectorFromYaw
                        ((TVector<double> *)&local_118._s_0,(float)(param_1->CameraRotation).Yaw);
              dVar15 = (double)CONCAT44(local_118._12_4_,local_118._8_4_);
              dVar14 = (double)CONCAT44(local_118._4_4_,local_118._0_4_);
              dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
              dVar13 = dVar15 * dVar15 + dVar14 * dVar14 + local_118._s_0.Z * local_118._s_0.Z;
              if (dVar13 != __real_3ff0000000000000) {
                if (__real_3e45798ee0000000 <= dVar13) {
                  dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
                  dVar15 = dVar15 * dVar13;
                  local_118._s_0.Z = local_118._s_0.Z * dVar13;
                  dVar14 = dVar14 * dVar13;
                }
                else {
                  dVar14 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                  local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  dVar15 = dVar3;
                }
              }
              dVar13 = dVar4 * dVar4 + dVar2 * dVar2 + local_d0[0].Roll * local_d0[0].Roll;
              if (dVar13 == __real_3ff0000000000000) {
                local_d0[0].Roll = local_res8[0];
                uVar16 = local_res8[0];
                dVar3 = dVar4;
              }
              else if (__real_3e45798ee0000000 <= dVar13) {
                dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
                dVar3 = dVar4 * dVar13;
                uVar16 = local_d0[0].Roll * dVar13;
                dVar2 = dVar2 * dVar13;
              }
              else {
                dVar2 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                         UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
                local_d0[0].Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
              if ((float)(dVar14 * dVar2 + dVar3 * dVar15 + (double)uVar16 * local_118._s_0.Z) < 0.0
                 ) {
                fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
              }
              local_100.Yaw = (param_1->CameraRotation).Yaw;
              local_100.Roll = (param_1->CameraRotation).Roll;
              local_100.Pitch = (double)(fVar11 + *(float *)((longlong)&this->_padding_ + 4));
              pTVar9 = FMath::RInterpTo(local_d0,&param_1->CameraRotation,&local_100,local_res18,
                                        *(float *)&this->_padding_);
              dVar2 = pTVar9->Yaw;
              (param_1->CameraRotation).Pitch = pTVar9->Pitch;
              (param_1->CameraRotation).Yaw = dVar2;
              (param_1->CameraRotation).Roll = pTVar9->Roll;
              *(undefined4 *)&(this->PrevMainPlayerLocation).field0_0x0 = uVar17;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 4) = uVar18;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 8) = uVar19;
              *(undefined4 *)((longlong)&(this->PrevMainPlayerLocation).field0_0x0 + 0xc) = uVar20;
              (this->PrevMainPlayerLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar10);
            }
          }
        }
      }
    }
  }
  return;
}

