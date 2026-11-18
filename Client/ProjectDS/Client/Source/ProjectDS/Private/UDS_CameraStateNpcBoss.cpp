// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b438700

UClass * __cdecl UDS_CameraStateNpcBoss::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateNpcBoss",
               &Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateNpcBoss,0x338,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateNpcBoss>,
               InternalVTableHelperCtorCaller<UDS_CameraStateNpcBoss>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton;
}

// UDS_CameraStateNpcBoss @ 14b43bf10

UDS_CameraStateNpcBoss * __thiscall
UDS_CameraStateNpcBoss::UDS_CameraStateNpcBoss(UDS_CameraStateNpcBoss *this,FVTableHelper *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  this->BossEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_CameraStateNpcBoss__6B_;
  return this;
}

// ~UDS_CameraStateNpcBoss @ 14b43cd20

void __thiscall UDS_CameraStateNpcBoss::~UDS_CameraStateNpcBoss(UDS_CameraStateNpcBoss *this)

{
  this->_padding_ = (longlong)&___7UDS_CameraStateNpcBoss__6B_;
  UDS_CameraStateBase::~UDS_CameraStateBase((UDS_CameraStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43e080

UClass * __cdecl UDS_CameraStateNpcBoss::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateNpcBoss",
               &Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateNpcBoss,0x338,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateNpcBoss>,
               InternalVTableHelperCtorCaller<UDS_CameraStateNpcBoss>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateNpcBoss.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraStateNpcBoss @ 14b43e880

void __cdecl UDS_CameraStateNpcBoss::StaticRegisterNativesUDS_CameraStateNpcBoss(void)

{
  return;
}

// UDS_CameraStateNpcBoss @ 14b8b29d0

UDS_CameraStateNpcBoss * __thiscall
UDS_CameraStateNpcBoss::UDS_CameraStateNpcBoss
          (UDS_CameraStateNpcBoss *this,FObjectInitializer *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  this->BossEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_CameraStateNpcBoss__6B_;
  return this;
}

// Initialize @ 14b8cc1a0

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
UDS_CameraStateNpcBoss::Initialize
          (UDS_CameraStateNpcBoss *this,TWeakObjectPtr<APlayerController,FWeakObjectPtr> param_1,
          FDS_CameraParametersTableRow *param_2,FDS_CameraCommonData *param_3,
          EDS_CameraStateType param_4)

{
  bool bVar1;
  UClass *pUVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr *this_00;
  UObject *pUVar4;
  ADS_NPCBoss *pAVar5;
  TWeakObjectPtr<UDS_SpringArmComponent,FWeakObjectPtr> TVar6;
  UDS_SpringArmComponent *this_01;
  TWeakObjectPtr<UDS_CameraComponent,FWeakObjectPtr> TVar7;
  UDS_CameraInterp *pUVar8;
  FString *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FString local_68;
  TStringView<wchar_t> local_58;
  FSoftObjectPath local_48;
  
  if (param_2 == (FDS_CameraParametersTableRow *)0x0) {
    return;
  }
  local_res10 = param_1.WeakPtr;
  FDS_CameraPresetData::CopyFrom((FDS_CameraPresetData *)&this->_padding_,param_2);
  FDS_CameraCommonData::operator=((FDS_CameraCommonData *)&this->_padding_,param_3);
  *(EDS_CameraStateType *)&this->_padding_ = param_4;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    return;
  }
  local_68.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FWeakObjectPtr::Get(&local_res10);
  if ((UObject *)local_68.Data.AllocatorInstance.Data == (UObject *)0x0) {
LAB_14b8cc245:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)(UObject *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar12 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&((UObject *)local_68.Data.AllocatorInstance.Data)->field_0x10 + 0x38
                 ) < iVar12) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)
           (*(longlong *)&((UObject *)local_68.Data.AllocatorInstance.Data)->field_0x10 + 0x30) +
         (longlong)iVar12 * 8) != &pUVar2->_padding_)) goto LAB_14b8cc245;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68.Data.AllocatorInstance.Data);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_68);
  UDS_CameraStateBase::CheckAndAddCameraAction((UDS_CameraStateBase *)this);
  pFVar3 = FDS_EntityBase::GetEntityBase(&this->BossEntityID);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    return;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 0x150))(pFVar3,&local_58);
  pUVar4 = FWeakObjectPtr::Get(this_00);
  if (pUVar4 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ADS_NPCBoss_NoRegister();
    iVar12 = (int)pUVar2->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar2->_padding_)) goto LAB_14b8cc2db;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b8cc2db:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
  bVar1 = TWeakObjectPtr<ADS_NPCBoss,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_NPCBoss,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar1) {
    pAVar5 = (ADS_NPCBoss *)FWeakObjectPtr::Get(&local_res18);
    TVar6 = ADS_NPCBoss::GetCameraBoom(pAVar5);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    this_01 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SpringArmComponent::SetBattleModeRatio(this_01,*(float *)&this->_padding_);
    pAVar5 = (ADS_NPCBoss *)FWeakObjectPtr::Get(&local_res18);
    TVar7 = ADS_NPCBoss::GetFollowCamera(pAVar5);
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
  }
  iVar12 = 0;
  if (this->_padding_ == 0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDS_CameraInterp>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    this->_padding_ = (longlong)pUVar8;
    pFVar9 = FWN_SoftObjectUtils::GetObjectPath(&local_68,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_58.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar11 = (pFVar9->Data).ArrayNum;
    local_58.Size = iVar11 + -1;
    if (iVar11 == 0) {
      local_58.Size = iVar12;
    }
    FSoftObjectPath::SetPath(&local_48,&local_58);
    if ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDS_CameraInterp>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    this->_padding_ = (longlong)pUVar8;
    pFVar9 = FWN_SoftObjectUtils::GetObjectPath(&local_68,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_58.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar11 = (pFVar9->Data).ArrayNum;
    iVar10 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar10 = iVar12;
    }
    local_58.Size = iVar10;
    FSoftObjectPath::SetPath(&local_48,&local_58);
    if ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDS_CameraInterp>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    this->_padding_ = (longlong)pUVar8;
    pFVar9 = FWN_SoftObjectUtils::GetObjectPath(&local_68,&param_3->CameraZoomCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_58.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar11 = (pFVar9->Data).ArrayNum;
    iVar10 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar10 = iVar12;
    }
    local_58.Size = iVar10;
    FSoftObjectPath::SetPath(&local_48,&local_58);
    if ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDS_CameraInterp>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    this->_padding_ = (longlong)pUVar8;
    pFVar9 = FWN_SoftObjectUtils::GetObjectPath(&local_68,&param_3->CameraBattleCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_58.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar12 = (pFVar9->Data).ArrayNum;
    iVar11 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar11 = 0;
    }
    local_58.Size = iVar11;
    FSoftObjectPath::SetPath(&local_48,&local_58);
    if ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar4 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UDS_CameraInterp>(pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    this->_padding_ = (longlong)pUVar8;
    pFVar9 = FWN_SoftObjectUtils::GetObjectPath(&local_68,&param_3->CameraZoomCurvePath,false);
    local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_48.AssetPath.PackageName.Number = 0;
    local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_48.AssetPath.AssetName.Number = 0;
    local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.SubPathString.Data.ArrayNum = 0;
    local_48.SubPathString.Data.ArrayMax = 0;
    local_58.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar12 = (pFVar9->Data).ArrayNum;
    iVar11 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar11 = 0;
    }
    local_58.Size = iVar11;
    FSoftObjectPath::SetPath(&local_48,&local_58);
    if ((UObject *)local_68.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBossEntityID @ 14b8e7110

void __thiscall
UDS_CameraStateNpcBoss::SetBossEntityID(UDS_CameraStateNpcBoss *this,ulong64 param_1)

{
  this->BossEntityID = param_1;
  return;
}

// Tick @ 14b8ee720

void __thiscall UDS_CameraStateNpcBoss::Tick(UDS_CameraStateNpcBoss *this,float param_1)

{
  UDS_CameraStateBase::Tick((UDS_CameraStateBase *)this,param_1);
  TickBossCamera(this,param_1);
  return;
}

// TickBossCamera @ 14b8ee760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UDS_CameraStateNpcBoss::TickBossCamera(UDS_CameraStateNpcBoss *this,float param_1)

{
  undefined1 *this_00;
  longlong *this_01;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr *pFVar9;
  TMatrix<double> *this_02;
  TVector<double>_u_0 *pTVar10;
  USceneComponent *pUVar11;
  UDS_MovementCore *this_03;
  double *pdVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1c8;
  FName local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  TRotator<double> local_180;
  TVector<double>_u_0 local_168;
  FWeakObjectPtr local_150;
  TVector<double>_u_0 local_148;
  TRotator<double> local_130;
  TVector<double> local_118;
  TRotator<double> local_100;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  ADS_PlayerController::GetPlayerController();
  bVar4 = FWeakObjectPtr::IsValid(&local_1a0);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&local_1a0);
    this_00 = &pUVar5[0x16].field_0x20;
    if (*(longlong *)this_00 != 0) {
      pUVar6 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
      if ((((bVar4) && (*(longlong *)this_00 != 0)) && (this->BossEntityID != 0)) &&
         (pFVar7 = FDS_EntityBase::GetEntityBase(&this->BossEntityID),
         pFVar7 != (FDS_EntityBase *)0x0)) {
        (**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_150);
        bVar4 = FWeakObjectPtr::IsValid(&local_150);
        if (bVar4) {
          UDS_MovementCore::GetMovementCore((ulong64)&local_190);
          bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_190,
                             (void *)0x0);
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          if (!bVar4) {
            pFVar8 = (FDS_EntityBase *)0x0;
            local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                      ((ulong64 *)&local_198,(EDS_AbilityTagType *)&this->BossEntityID);
            bVar4 = FWeakObjectPtr::IsValid(&local_198);
            if (bVar4) {
              pUVar5 = FWeakObjectPtr::Get(&local_198);
              pFVar8 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x10);
              if (pFVar8 != (FDS_EntityBase *)0x0) {
                pFVar9 = (FWeakObjectPtr *)
                         (**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,&local_1a8);
                bVar4 = FWeakObjectPtr::IsValid(pFVar9);
                if (bVar4) {
                  pFVar9 = (FWeakObjectPtr *)
                           (**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,&local_1a8);
                  pUVar5 = FWeakObjectPtr::Get(pFVar9);
                  lVar1 = *(longlong *)(pUVar5 + 0xb);
                  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  local_1c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  if (lVar1 != 0) {
                    local_1c8._s_0.Z = *(double *)(lVar1 + 0x220);
                    uVar14 = *(undefined4 *)(lVar1 + 0x210);
                    uVar15 = *(undefined4 *)(lVar1 + 0x214);
                    uVar16 = *(undefined4 *)(lVar1 + 0x218);
                    uVar17 = *(undefined4 *)(lVar1 + 0x21c);
                  }
                }
                bVar4 = DS_Util::IsCloseDist(pFVar7,pFVar8,(float *)&this->_padding_);
                if (bVar4) {
                  return;
                }
              }
            }
            uVar3 = local_1c8._s_0.Z;
            local_180.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            if ((pFVar8 == (FDS_EntityBase *)0x0) ||
               ((((double)CONCAT44(uVar15,uVar14) ==
                  (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_) &&
                 ((double)CONCAT44(uVar17,uVar16) ==
                  (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_))) &&
                (local_1c8._s_0.Z == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)))) {
              pFVar9 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_1a8)
              ;
              pUVar5 = FWeakObjectPtr::Get(pFVar9);
              if (*(USceneComponent **)(pUVar5 + 0xb) == (USceneComponent *)0x0) {
                pTVar10 = &local_1c8;
                local_1c8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
                local_1c8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
                local_1c8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
              }
              else {
                pTVar10 = &USceneComponent::GetForwardVector
                                     (*(USceneComponent **)(pUVar5 + 0xb),&local_118)->field0_0x0;
              }
              local_168._s_0.X = (((TVector<double>_u_0 *)&(pTVar10->_s_0).X)->_s_0).X;
              local_168._s_0.Y = (pTVar10->_s_0).Y;
              local_168._s_0.Z = (pTVar10->_s_0).Z;
              UE::Math::TVector<double>::ToOrientationRotator
                        ((TVector<double> *)&local_168._s_0,(TRotator<double> *)&local_1c8._s_0);
            }
            else {
              pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
              local_118.field0_0x0._s_0.Z = (double)*(undefined8 *)&pUVar5[0xd].field_0x18;
              local_168._s_0.X = (double)CONCAT44(uVar15,uVar14) - *(double *)&pUVar5[0xd].field_0x8
              ;
              local_168._s_0.Z = (double)uVar3 - local_118.field0_0x0._s_0.Z;
              local_168._s_0.Y =
                   (double)CONCAT44(uVar17,uVar16) - *(double *)&pUVar5[0xd].field_0x10;
              this_02 = UE::Math::TRotationMatrix<double>::MakeFromX
                                  (&local_e8,(TVector<double> *)&local_168._s_0);
              UE::Math::TMatrix<double>::Rotator(this_02,(TRotator<double> *)&local_1c8._s_0);
            }
            local_180.Pitch = (double)*(float *)((longlong)&this->_padding_ + 4);
            this_01 = &this->_padding_;
            local_180.Yaw = local_1c8._s_0.Y;
            local_180.Roll = local_1c8._s_0.Z;
            if (local_1c8._s_0.X <= local_180.Pitch) {
              local_180.Pitch = local_1c8._s_0.X;
            }
            if (local_180.Pitch <= (double)*(float *)&this->_padding_) {
              local_180.Pitch = (double)*(float *)&this->_padding_;
            }
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            USceneComponent::GetComponentRotation(pUVar11,&local_100);
            FMath::RInterpTo(&local_130,&local_100,&local_180,param_1,__real_41200000);
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            local_1c8._s_0.X = local_130.Pitch;
            local_1c8._s_0.Y = local_130.Yaw;
            local_1c8._s_0.Z = local_130.Roll;
            USceneComponent::SetWorldRotation
                      (pUVar11,(TRotator<double> *)&local_1c8._s_0,false,(FHitResult *)0x0,None);
            this_03 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_190);
            UDS_MovementCore::GetActorHeadLocation(this_03,(TVector<double> *)&local_148._s_0);
            (**(code **)(pFVar7->_padding_ + 0x80))(pFVar7);
            bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_188,
                               (void *)0x0);
            if (!bVar4) {
              pUVar5 = FWeakObjectPtr::Get(&local_188);
              pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x528);
              if ((int)this->_padding_ == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)this->_padding_;
              }
              ::FName::FName(&local_1a8,pwVar13);
              pdVar12 = (double *)(*pcVar2)(pUVar5,&local_118);
              local_148._s_0.X = *pdVar12;
              local_148._s_0.Y = pdVar12[1];
              local_148._s_0.Z = pdVar12[2];
            }
            pUVar11 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
            local_1c8._s_0.X = local_148._s_0.X;
            local_1c8._s_0.Y = local_148._s_0.Y;
            local_1c8._s_0.Z = local_148._s_0.Z;
            USceneComponent::SetWorldLocation
                      (pUVar11,(TVector<double> *)&local_1c8._s_0,false,(FHitResult *)0x0,None);
          }
        }
      }
    }
  }
  return;
}

