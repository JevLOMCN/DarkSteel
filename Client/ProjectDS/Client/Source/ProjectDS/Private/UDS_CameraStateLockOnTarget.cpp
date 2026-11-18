// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b438600

UClass * __cdecl UDS_CameraStateLockOnTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateLockOnTarget",
               &Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateLockOnTarget,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraStateLockOnTarget>,
               InternalVTableHelperCtorCaller<UDS_CameraStateLockOnTarget>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton;
}

// UDS_CameraStateLockOnTarget @ 14b43bee0

UDS_CameraStateLockOnTarget * __thiscall
UDS_CameraStateLockOnTarget::UDS_CameraStateLockOnTarget
          (UDS_CameraStateLockOnTarget *this,FVTableHelper *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CameraStateLockOnTarget__6B_;
  return this;
}

// ~UDS_CameraStateLockOnTarget @ 14b43cd00

void __thiscall
UDS_CameraStateLockOnTarget::~UDS_CameraStateLockOnTarget(UDS_CameraStateLockOnTarget *this)

{
  *(undefined ***)this = &___7UDS_CameraStateLockOnTarget__6B_;
  UDS_CameraStateBase::~UDS_CameraStateBase((UDS_CameraStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43dfc0

UClass * __cdecl UDS_CameraStateLockOnTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateLockOnTarget",
               &Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateLockOnTarget,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CameraStateLockOnTarget>,
               InternalVTableHelperCtorCaller<UDS_CameraStateLockOnTarget>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateLockOnTarget.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraStateLockOnTarget @ 14b43e870

void __cdecl UDS_CameraStateLockOnTarget::StaticRegisterNativesUDS_CameraStateLockOnTarget(void)

{
  return;
}

// UDS_CameraStateLockOnTarget @ 14b8b29a0

UDS_CameraStateLockOnTarget * __thiscall
UDS_CameraStateLockOnTarget::UDS_CameraStateLockOnTarget
          (UDS_CameraStateLockOnTarget *this,FObjectInitializer *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  *(undefined ***)this = &___7UDS_CameraStateLockOnTarget__6B_;
  return this;
}

// GetRotationDifferenceMax @ 14b8c8820

float __thiscall
UDS_CameraStateLockOnTarget::GetRotationDifferenceMax
          (UDS_CameraStateLockOnTarget *this,TRotator<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar1 = __real_4076800000000000;
  dVar3 = FGenericPlatformMath::Fmod(param_1->Pitch - param_2->Pitch,__real_4076800000000000);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar1;
  }
  if (__real_4066800000000000 < dVar3) {
    dVar3 = dVar3 - dVar1;
  }
  fVar4 = (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar3 = FGenericPlatformMath::Fmod(param_1->Yaw - param_2->Yaw,dVar1);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar1;
  }
  if (__real_4066800000000000 < dVar3) {
    dVar3 = dVar3 - dVar1;
  }
  fVar2 = (float)(double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (fVar2 <= fVar4) {
    fVar2 = fVar4;
  }
  return fVar2;
}

// Initialize @ 14b8cbbd0

void __thiscall
UDS_CameraStateLockOnTarget::Initialize
          (UDS_CameraStateLockOnTarget *this,
          TWeakObjectPtr<APlayerController,FWeakObjectPtr> param_1,
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
  local_res18 = param_1.WeakPtr;
  FDS_CameraPresetData::CopyFrom((FDS_CameraPresetData *)&this->field_0x40,param_2);
  FDS_CameraCommonData::operator=((FDS_CameraCommonData *)&this->field_0x108,param_3);
  this->field_0x1e8 = param_4;
  *(undefined4 *)&this->field_0x31c = 0x3f800000;
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    return;
  }
  local_88._0_8_ = FWeakObjectPtr::Get(&local_res18);
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  if ((FName)local_88._0_8_ != (FName)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(local_88._0_8_ + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)(local_88._0_8_ + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14b8cbc8c;
  }
  local_88._0_8_ = FVar13;
LAB_14b8cbc8c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)local_88._0_8_ != (FName)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_88._0_8_);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)local_88);
  UDS_CameraStateBase::CheckAndAddCameraAction((UDS_CameraStateBase *)this);
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar3) {
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    TVar6 = ADS_MainCharacter::GetCameraBoom(pAVar5);
    *(undefined8 *)&this->field_0x30 = *(undefined8 *)TVar6.WeakPtr;
    this_00 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x30);
    UDS_SpringArmComponent::SetBattleModeRatio(this_00,*(float *)&this->field_0x108);
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    TVar7 = ADS_MainCharacter::GetFollowCamera(pAVar5);
    *(undefined8 *)&this->field_0x38 = *(undefined8 *)TVar7.WeakPtr;
  }
  if (*(longlong *)&this->field_0x2b0 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x2b0 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x2b0,&local_68);
    if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = 0;
  if (*(longlong *)&this->field_0x2b8 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x2b8 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x2b8,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->field_0x2c0 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x2c0 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x2c0,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->field_0x2e0 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x2e0 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x2e0,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->field_0x2e8 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x2e8 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x2e8,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (*(longlong *)&this->field_0x300 == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    *(UDS_CameraInterp **)&this->field_0x300 = pUVar9;
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
    UDS_CameraInterp::Initialize(*(UDS_CameraInterp **)&this->field_0x300,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// LookAtTargetSocket @ 14b8d1630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CameraStateLockOnTarget::LookAtTargetSocket
          (UDS_CameraStateLockOnTarget *this,float param_1,FDS_EntityBase *param_2,FName *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  FWeakObjectPtr *pFVar10;
  UObject *pUVar11;
  FName *pFVar12;
  undefined4 *puVar13;
  TMatrix<double> *this_00;
  APlayerController *pAVar14;
  FDS_EntityBase *pFVar15;
  FName FVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_238 [32];
  float local_208 [2];
  TVector2<double>_u_0 local_200;
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  TRotator<double> local_1e0;
  TVector<double>_u_0 local_1c8;
  TRotator<double> local_1b0;
  TVector<double>_u_0 local_198;
  TRotator<double> local_178;
  double local_150;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar8 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&this->field_0x28,
                     (void *)0x0);
  if (bVar8) {
    return;
  }
  if (param_2 == (FDS_EntityBase *)0x0) {
    return;
  }
  pFVar10 = (FWeakObjectPtr *)(**(code **)(param_2->_padding_ + 0x150))(param_2,&local_200);
  bVar8 = FWeakObjectPtr::IsValid(pFVar10);
  if (!bVar8) {
    return;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar8 = FWeakObjectPtr::IsValid(&local_1e8);
  if (!bVar8) {
    return;
  }
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x38);
  local_150 = *(double *)&pUVar11[0xd].field_0x18;
  dVar21 = *(double *)&pUVar11[0xd].field_0x8;
  dVar5 = *(double *)&pUVar11[0xd].field_0x10;
  pFVar10 = (FWeakObjectPtr *)(**(code **)(param_2->_padding_ + 0x150))(param_2,&local_200);
  pUVar11 = FWeakObjectPtr::Get(pFVar10);
  lVar2 = *(longlong *)(pUVar11 + 0xb);
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar2 != 0) {
    uVar22 = *(double *)(lVar2 + 0x220);
    uVar26 = *(undefined4 *)(lVar2 + 0x210);
    uVar27 = *(undefined4 *)(lVar2 + 0x214);
    uVar29 = *(undefined4 *)(lVar2 + 0x218);
    uVar30 = *(undefined4 *)(lVar2 + 0x21c);
  }
  FVar16 = *param_3;
  local_198._s_0.Z = (double)uVar22;
  if (FVar16 == DefaultSocketName) {
    pFVar12 = ::FName::FName((FName *)&local_200._s_0,"FocusMode01");
    FVar16 = *pFVar12;
  }
  (**(code **)(param_2->_padding_ + 0x80))(param_2);
  bVar8 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_1f0,(void *)0x0
                    );
  if (!bVar8) {
    pUVar11 = FWeakObjectPtr::Get(&local_1f0);
    cVar9 = (**(code **)(*(longlong *)pUVar11 + 0x540))(pUVar11,FVar16);
    if (cVar9 == '\x01') {
      pUVar11 = FWeakObjectPtr::Get(&local_1f0);
      puVar13 = (undefined4 *)(**(code **)(*(longlong *)pUVar11 + 0x528))(pUVar11,&local_1c8,FVar16)
      ;
      uVar22 = *(undefined8 *)(puVar13 + 4);
      uVar26 = *puVar13;
      uVar27 = puVar13[1];
      uVar29 = puVar13[2];
      uVar30 = puVar13[3];
      local_198._s_0.Z = (double)uVar22;
    }
  }
  local_208[0] = param_2->ScaledCapsuleRadius * __real_3f000000 + *(float *)&this->field_0x150;
  pUVar11 = FWeakObjectPtr::Get(&local_1e8);
  pFVar15 = (FDS_EntityBase *)&pUVar11[0x29].field_0x10;
  if (pUVar11 == (UObject *)0x0) {
    pFVar15 = (FDS_EntityBase *)0x0;
  }
  bVar8 = DS_Util::IsCloseDist(pFVar15,param_2,local_208);
  if (bVar8) {
    return;
  }
  local_1c8._s_0.Z = local_198._s_0.Z - local_150;
  dVar3 = (double)CONCAT44(uVar27,uVar26) - dVar21;
  dVar4 = (double)CONCAT44(uVar30,uVar29) - dVar5;
  local_1c8._s_0.X = dVar3;
  local_1c8._s_0.Y = dVar4;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromX
                      (&local_148,(TVector<double> *)&local_1c8._s_0);
  UE::Math::TMatrix<double>::Rotator(this_00,&local_1e0);
  local_1e0.Yaw = local_1e0.Yaw + *(double *)&this->field_0xa8;
  fVar17 = *(float *)&this->field_0x1d8;
  local_1e0.Pitch = local_1e0.Pitch + *(double *)&this->field_0xa0;
  if ((double)*(float *)&this->field_0x158 <= local_1e0.Pitch) {
    local_1e0.Pitch = (double)*(float *)&this->field_0x158;
  }
  fVar24 = *(float *)&this->field_0x1dc;
  if (local_1e0.Pitch <= (double)*(float *)&this->field_0x154) {
    local_1e0.Pitch = (double)*(float *)&this->field_0x154;
  }
  fVar25 = ((fVar24 - fVar17) / *(float *)&this->field_0x1e0) * param_2->ScaledCapsuleHalfHeight +
           fVar17;
  if (fVar24 <= fVar25) {
    fVar25 = fVar24;
  }
  if (fVar25 <= fVar17) {
    fVar25 = fVar17;
  }
  pAVar14 = (APlayerController *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  local_198._0_4_ = uVar26;
  local_198._4_4_ = uVar27;
  local_198._8_4_ = uVar29;
  local_198._12_4_ = uVar30;
  local_198._16_8_ = uVar22;
  APlayerController::ProjectWorldLocationToScreen
            (pAVar14,(TVector<double> *)&local_198._s_0,(TVector2<double> *)&local_1c8._s_0,false);
  local_200._s_0.X = (double)((ulonglong)(uint)local_200._4_4_ << 0x20);
  local_208[0] = 0.0;
  pAVar14 = (APlayerController *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  APlayerController::GetViewportSize(pAVar14,(int *)&local_200,(int *)local_208);
  uVar6 = __xmm_80000000800000008000000080000000;
  local_1e0.Pitch =
       local_1e0.Pitch +
       (double)(float)((uint)(((float)(local_1c8._s_0.Y / (double)(int)local_208[0]) -
                              (__real_42c80000 - fVar25) * __real_3c23d70a) *
                             *(float *)&this->field_0x40) ^ __xmm_80000000800000008000000080000000);
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar11 + 0x7a8))(pUVar11,&local_1b0);
  dVar18 = UE::Math::TRotator<double>::NormalizeAxis(local_1b0.Pitch - local_1e0.Pitch);
  dVar19 = UE::Math::TRotator<double>::NormalizeAxis(local_1b0.Pitch - local_1e0.Pitch);
  fVar28 = (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar20 = UE::Math::TRotator<double>::NormalizeAxis(local_1b0.Yaw - local_1e0.Yaw);
  dVar7 = _UNK_151b112b8;
  dVar19 = ___xmm_3ff00000000000003f847ae140000000;
  fVar17 = *(float *)&this->field_0x160;
  fVar25 = (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar24 = fVar25;
  if (fVar25 <= fVar28) {
    fVar24 = fVar28;
  }
  if (((fVar25 <= fVar17) && ((float)((uint)fVar17 ^ uVar6) <= (float)dVar18)) &&
     ((float)dVar18 <= 0.0)) {
    return;
  }
  fVar25 = *(float *)&this->field_0x15c;
  if (0.0 <= fVar24) {
    fVar23 = fVar25;
    if (fVar24 <= fVar25) {
      fVar23 = fVar24;
    }
  }
  else {
    fVar23 = 0.0;
  }
  local_200._s_0.X = (double)fVar17;
  local_200._s_0.Y = (double)fVar25;
  local_1c8._s_0.X = ___xmm_3ff00000000000003f847ae140000000;
  local_1c8._s_0.Y = _UNK_151b112b8;
  dVar18 = FMath::GetMappedRangeValueClamped<double,float>
                     ((TVector2<double> *)&local_200._s_0,(TVector2<double> *)&local_1c8._s_0,fVar23
                     );
  fVar17 = *(float *)&this->field_0x164;
  if (0.0 <= fVar28) {
    fVar24 = fVar17;
    if (fVar28 <= fVar17) {
      fVar24 = fVar28;
    }
  }
  else {
    fVar24 = 0.0;
  }
  local_200._s_0.X = (double)*(float *)&this->field_0x168;
  local_200._s_0.Y = (double)fVar17;
  local_1c8._s_0.X = dVar19;
  local_1c8._s_0.Y = dVar7;
  dVar19 = FMath::GetMappedRangeValueClamped<double,float>
                     ((TVector2<double> *)&local_200._s_0,(TVector2<double> *)&local_1c8._s_0,fVar24
                     );
  fVar17 = *(float *)&this->field_0xe0;
  if (*(float *)&this->field_0xe0 <= 0.0) {
    fVar17 = __real_41200000;
  }
  FMath::RInterpTo(&local_178,&local_1b0,&local_1e0,param_1,fVar17 * (float)dVar18);
  pUVar11 = FWeakObjectPtr::Get(&local_1e8);
  dVar7 = __real_4066800000000000;
  if (*(longlong *)(pUVar11 + 0xb) == 0) {
    auVar1._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    auVar1._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    auVar1._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    auVar1._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    dVar18 = auVar1._8_8_;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(*(longlong *)(pUVar11 + 0xb) + 0x210);
    dVar18 = auVar1._8_8_;
    uVar26 = auVar1._0_4_;
    uVar27 = auVar1._4_4_;
  }
  dVar21 = (double)CONCAT44(uVar27,uVar26) - dVar21;
  dVar18 = dVar18 - dVar5;
  if (dVar3 * dVar3 + dVar4 * dVar4 < dVar21 * dVar21 + dVar18 * dVar18) {
    local_178.Pitch = local_1b0.Pitch;
    goto LAB_14b8d1c53;
  }
  dVar21 = local_1e0.Pitch - local_1b0.Pitch;
  uVar26 = SUB84(__real_c066800000000000,0);
  uVar27 = (undefined4)((ulonglong)__real_c066800000000000 >> 0x20);
  if (__real_c066800000000000 <= dVar21) {
    uVar26 = SUB84(__real_4066800000000000,0);
    uVar27 = (undefined4)((ulonglong)__real_4066800000000000 >> 0x20);
    if (__real_4066800000000000 < dVar21) {
      dVar21 = FGenericPlatformMath::Fmod(dVar21 - __real_4066800000000000,__real_4076800000000000);
      if (dVar21 == 0.0) goto LAB_14b8d1c23;
      dVar21 = dVar21 - dVar7;
    }
  }
  else {
    dVar21 = FGenericPlatformMath::Fmod(__real_c066800000000000 - dVar21,__real_4076800000000000);
    if (dVar21 == 0.0) {
LAB_14b8d1c23:
      dVar21 = (double)CONCAT44(uVar27,uVar26);
    }
    else {
      dVar21 = __real_4066800000000000 - dVar21;
    }
  }
  fVar17 = FMath::FInterpTo<float,float,float,float>
                     (0.0,(float)dVar21,param_1,fVar17 * (float)dVar19);
  local_178.Pitch = (double)fVar17 + local_1b0.Pitch;
LAB_14b8d1c53:
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar11 + 0x7b0))(pUVar11,&local_178);
  return;
}

// Tick @ 14b8ee620

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

void __thiscall UDS_CameraStateLockOnTarget::Tick(UDS_CameraStateLockOnTarget *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  ulong64 local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_28 [4];
  
  UDS_CameraStateBase::Tick((UDS_CameraStateBase *)this,param_1);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if ((*(uint *)&pUVar2[0x34].field_0xc & 0x1000) != 0) {
    ADS_MainCharacter::GetMainPlayer();
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      local_res8 = CONCAT71(local_res8._1_7_,0x1c);
      pUVar2 = FWeakObjectPtr::Get(&local_res20);
      UDS_AbilityDataSet::GetAbilityData<UDS_LockOnTargetAbilityData>
                ((ulong64 *)&local_res18,&pUVar2[0x29].field_0x18);
      bVar1 = FWeakObjectPtr::IsValid(&local_res18);
      if ((bVar1) &&
         (pUVar2 = FWeakObjectPtr::Get(&local_res18), *(longlong *)&pUVar2[2].field_0x8 != 0)) {
        pUVar2 = FWeakObjectPtr::Get(&local_res18);
        local_res8 = *(ulong64 *)&pUVar2[2].field_0x8;
        pFVar3 = FDS_EntityBase::GetEntityBase(&local_res8);
        if (pFVar3 != (FDS_EntityBase *)0x0) {
          pUVar2 = FWeakObjectPtr::Get(&local_res18);
          local_28[0].ComparisonIndex.Value = *(uint *)&pUVar2[2].field_0x10;
          local_28[0].Number = *(uint *)&pUVar2[2].field_0x14;
          LookAtTargetSocket(this,param_1,pFVar3,local_28);
        }
      }
    }
  }
  return;
}

