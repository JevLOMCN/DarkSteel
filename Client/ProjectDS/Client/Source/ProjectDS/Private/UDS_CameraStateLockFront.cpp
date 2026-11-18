// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b43a9b0

UClass * __cdecl UDS_CameraStateLockFront::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateLockFront",
               &Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateLockFront,0x338,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateLockFront>,
               InternalVTableHelperCtorCaller<UDS_CameraStateLockFront>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton;
}

// UDS_CameraStateLockFront @ 14b43beb0

UDS_CameraStateLockFront * __thiscall
UDS_CameraStateLockFront::UDS_CameraStateLockFront
          (UDS_CameraStateLockFront *this,FVTableHelper *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  this->bIsRotateCamera = false;
  this->_padding_ = (longlong)&___7UDS_CameraStateLockFront__6B_;
  return this;
}

// ~UDS_CameraStateLockFront @ 14b43cce0

void __thiscall UDS_CameraStateLockFront::~UDS_CameraStateLockFront(UDS_CameraStateLockFront *this)

{
  this->_padding_ = (longlong)&___7UDS_CameraStateLockFront__6B_;
  UDS_CameraStateBase::~UDS_CameraStateBase((UDS_CameraStateBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b43df00

UClass * __cdecl UDS_CameraStateLockFront::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraStateLockFront",
               &Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton,
               StaticRegisterNativesUDS_CameraStateLockFront,0x338,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CameraStateLockFront>,
               InternalVTableHelperCtorCaller<UDS_CameraStateLockFront>,local_res8,
               UDS_CameraStateBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraStateLockFront.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraStateLockFront @ 14b43e860

void __cdecl UDS_CameraStateLockFront::StaticRegisterNativesUDS_CameraStateLockFront(void)

{
  return;
}

// UDS_CameraStateLockFront @ 14b8b2970

UDS_CameraStateLockFront * __thiscall
UDS_CameraStateLockFront::UDS_CameraStateLockFront
          (UDS_CameraStateLockFront *this,FObjectInitializer *param_1)

{
  UDS_CameraStateBase::UDS_CameraStateBase((UDS_CameraStateBase *)this,param_1);
  this->bIsRotateCamera = false;
  this->_padding_ = (longlong)&___7UDS_CameraStateLockFront__6B_;
  return this;
}

// GetDirVector @ 14b8c4c00

void __thiscall
UDS_CameraStateLockFront::GetDirVector
          (UDS_CameraStateLockFront *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TRotator<double> local_38;
  TVector<double> local_20;
  
  local_38.Pitch = 0.0;
  local_38.Yaw = (double)param_1;
  local_38.Roll = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&local_38,&local_20,&UE::Math::TVector<double>::RightVector);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&local_38,&local_20,&UE::Math::TVector<double>::ForwardVector);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// Initialize @ 14b8cb600

void __thiscall
UDS_CameraStateLockFront::Initialize
          (UDS_CameraStateLockFront *this,TWeakObjectPtr<APlayerController,FWeakObjectPtr> param_1,
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
  FDS_CameraPresetData::CopyFrom((FDS_CameraPresetData *)&this->_padding_,param_2);
  FDS_CameraCommonData::operator=((FDS_CameraCommonData *)&this->_padding_,param_3);
  *(EDS_CameraStateType *)&this->_padding_ = param_4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
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
        &pUVar4->_padding_)) goto LAB_14b8cb6bc;
  }
  local_88._0_8_ = FVar13;
LAB_14b8cb6bc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((FName)local_88._0_8_ != (FName)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_88._0_8_);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)local_88);
  UDS_CameraStateBase::CheckAndAddCameraAction((UDS_CameraStateBase *)this);
  ADS_MainCharacter::GetMainPlayer();
  bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar3) {
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    TVar6 = ADS_MainCharacter::GetCameraBoom(pAVar5);
    this->_padding_ = *(longlong *)TVar6.WeakPtr;
    this_00 = (UDS_SpringArmComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_SpringArmComponent::SetBattleModeRatio(this_00,*(float *)&this->_padding_);
    pAVar5 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    TVar7 = ADS_MainCharacter::GetFollowCamera(pAVar5);
    this->_padding_ = *(longlong *)TVar7.WeakPtr;
  }
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_68);
    if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = 0;
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDS_CameraInterp>(pUVar8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_CameraInterp *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    this->_padding_ = (longlong)pUVar9;
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
    UDS_CameraInterp::Initialize((UDS_CameraInterp *)this->_padding_,&local_48);
    if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnEnter @ 14b8d60b0

void __thiscall
UDS_CameraStateLockFront::OnEnter
          (UDS_CameraStateLockFront *this,TWeakObjectPtr<UDS_CameraStateBase,FWeakObjectPtr> param_1
          ,EDS_CameraStateType param_2)

{
  UDS_CameraStateBase::OnEnter((UDS_CameraStateBase *)this,param_1,param_2);
  this->bIsRotateCamera = true;
  return;
}

// Tick @ 14b8ee420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_CameraStateLockFront::Tick(UDS_CameraStateLockFront *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  TVector2<double>_u_0 *pTVar8;
  TVector<double> *pTVar9;
  FObjectPtr_u_0 local_res8;
  TVector2<double>_u_0 local_98;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  UDS_CameraStateBase::Tick((UDS_CameraStateBase *)this,param_1);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((*(uint *)&pUVar6[0x34].field_0xc & 0x100) == 0) {
    cVar4 = this->bIsRotateCamera;
  }
  else {
    this->bIsRotateCamera = true;
    cVar4 = '\x01';
  }
  if (*(char *)((longlong)&this->_padding_ + 5) == '\x01') {
    this->bIsRotateCamera = false;
  }
  else if (cVar4 == '\x01') {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&pUVar6[0x13].field_0x18;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_res8.Handle == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if (local_res8.Handle != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar7);
      if ((bVar5) && (local_res8.Handle != (UObject *)0x0)) {
        if (*(USceneComponent **)(local_res8.Handle + 0xb) == (USceneComponent *)0x0) {
          pTVar8 = &local_98;
          local_98._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_88 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else {
          pTVar8 = (TVector2<double>_u_0 *)
                   USceneComponent::GetComponentRotation
                             (*(USceneComponent **)(local_res8.Handle + 0xb),
                              (TRotator<double> *)&local_58[0]._s_0);
        }
        local_58[0]._16_8_ = pTVar8->XY[2];
        local_98._s_0.X = 0.0;
        local_98._s_0.Y = (double)(float)(pTVar8->_s_0).Y;
        local_88 = 0.0;
        pTVar9 = UE::Math::TRotator<double>::RotateVector
                           ((TRotator<double> *)&local_98._s_0,(TVector<double> *)&local_58[0]._s_0,
                            &UE::Math::TVector<double>::RightVector);
        dVar2 = (pTVar9->field0_0x0)._s_0.X;
        dVar3 = (pTVar9->field0_0x0)._s_0.Y;
        dVar1 = (pTVar9->field0_0x0)._s_0.Z;
        pTVar9 = UE::Math::TRotator<double>::RotateVector
                           ((TRotator<double> *)&local_98._s_0,(TVector<double> *)&local_58[0]._s_0,
                            &UE::Math::TVector<double>::ForwardVector);
        local_78._s_0.X = (pTVar9->field0_0x0)._s_0.X;
        local_78._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
        local_78._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        local_98._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_98._s_0.Y = _UNK_15061cbc8;
        local_58[0]._0_8_ = dVar2;
        local_58[0]._8_8_ = dVar3;
        local_58[0]._16_8_ = dVar1;
        TickRotateByPCAxis(this,param_1,(TVector2<double> *)&local_98._s_0,
                           (TVector<double> *)&local_58[0]._s_0,(TVector<double> *)&local_78._s_0,
                           true,__real_40400000);
      }
    }
  }
  return;
}

// TickRotateByPCAxis @ 14b8eecc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CameraStateLockFront::TickRotateByPCAxis
          (UDS_CameraStateLockFront *this,float param_1,TVector2<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,bool param_5,float param_6)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  TMatrix<double> *pTVar5;
  TRotator<double> *pTVar6;
  longlong lVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  FObjectPtr_u_0 local_168;
  TVector<double>_u_0 local_160;
  TRotator<double> local_148;
  double local_130;
  double dStack_128;
  double local_120;
  TRotator<double> local_118;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_168 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&pUVar3[0x13].field_0x18;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_168.Handle == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_168.Handle);
  }
  if (local_168.Handle != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_168,pUVar4);
    if ((bVar2) && (local_168.Handle != (UObject *)0x0)) {
      dVar1 = (param_2->field0_0x0)._s_0.X;
      local_160._s_0.Z = dVar1 * (param_3->field0_0x0)._s_0.Z;
      local_160._s_0.X = dVar1 * (param_3->field0_0x0)._s_0.X;
      local_160._s_0.Y = dVar1 * (param_3->field0_0x0)._s_0.Y;
      pTVar5 = UE::Math::TRotationMatrix<double>::MakeFromX
                         (&local_f8,(TVector<double> *)&local_160._s_0);
      UE::Math::TMatrix<double>::Rotator(pTVar5,&local_148);
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      local_160._s_0.Z = dVar1 * (param_4->field0_0x0)._s_0.Z;
      local_160._s_0.X = dVar1 * (param_4->field0_0x0)._s_0.X;
      local_160._s_0.Y = dVar1 * (param_4->field0_0x0)._s_0.Y;
      fVar13 = (float)local_148.Yaw;
      pTVar5 = UE::Math::TRotationMatrix<double>::MakeFromX
                         (&local_f8,(TVector<double> *)&local_160._s_0);
      UE::Math::TMatrix<double>::Rotator(pTVar5,&local_148);
      fVar11 = (float)local_148.Yaw;
      if (((float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) ||
         ((float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
        fVar12 = fVar11 + fVar13;
      }
      else if (0x7fffffff < (uint)fVar13 == 0x7fffffff < (uint)fVar11) {
        fVar12 = (fVar11 + fVar13) * __real_3f000000;
      }
      else {
        fVar8 = fVar11;
        if (fVar11 <= fVar13) {
          fVar8 = fVar13;
        }
        fVar12 = fVar8 * __real_3f000000;
        if (fVar8 <= __real_42b40000) {
          if (fVar13 <= fVar11) {
            fVar11 = fVar13;
          }
          fVar12 = fVar11 * __real_3f000000 + fVar12;
        }
        else {
          fVar12 = fVar12 + __real_42340000 + fVar12;
        }
      }
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,&local_118);
      local_118.Yaw = (double)fVar12;
      local_118.Pitch = (double)*(float *)&this->_padding_;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar6 = (TRotator<double> *)(**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,&local_148);
      fVar11 = __real_41200000;
      if (param_5) {
        fVar11 = param_6;
      }
      pTVar6 = FMath::RInterpTo((TRotator<double> *)&local_160._s_0,pTVar6,&local_118,param_1,fVar11
                               );
      local_130 = pTVar6->Pitch;
      dStack_128 = pTVar6->Yaw;
      local_120 = pTVar6->Roll;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar3 + 0x7b0))(pUVar3,&local_130);
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      lVar7 = (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,&local_148);
      local_118.Yaw = local_118.Yaw - *(double *)(lVar7 + 8);
      uVar9 = SUB84(local_118.Yaw,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = (uint)((ulonglong)local_118.Yaw >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar10,uVar9) < __real_3f847ae140000000 ||
          (double)CONCAT44(uVar10,uVar9) == __real_3f847ae140000000) {
        this->bIsRotateCamera = false;
      }
    }
  }
  return;
}

// TickRotateToCharacterForward @ 14b8eefe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_CameraStateLockFront::TickRotateToCharacterForward(UDS_CameraStateLockFront *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TVector2<double>_u_0 *pTVar7;
  TVector<double> *pTVar8;
  FObjectPtr_u_0 local_res8;
  TVector2<double>_u_0 local_98;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&pUVar5[0x13].field_0x18;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8.Handle == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if (local_res8.Handle != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
    if ((bVar4) && (local_res8.Handle != (UObject *)0x0)) {
      if (*(USceneComponent **)(local_res8.Handle + 0xb) == (USceneComponent *)0x0) {
        pTVar7 = &local_98;
        local_98._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_88 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar7 = (TVector2<double>_u_0 *)
                 USceneComponent::GetComponentRotation
                           (*(USceneComponent **)(local_res8.Handle + 0xb),
                            (TRotator<double> *)&local_58[0]._s_0);
      }
      local_58[0]._16_8_ = pTVar7->XY[2];
      local_98._s_0.X = 0.0;
      local_98._s_0.Y = (double)(float)(pTVar7->_s_0).Y;
      local_88 = 0.0;
      pTVar8 = UE::Math::TRotator<double>::RotateVector
                         ((TRotator<double> *)&local_98._s_0,(TVector<double> *)&local_58[0]._s_0,
                          &UE::Math::TVector<double>::RightVector);
      dVar2 = (pTVar8->field0_0x0)._s_0.X;
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      dVar1 = (pTVar8->field0_0x0)._s_0.Z;
      pTVar8 = UE::Math::TRotator<double>::RotateVector
                         ((TRotator<double> *)&local_98._s_0,(TVector<double> *)&local_58[0]._s_0,
                          &UE::Math::TVector<double>::ForwardVector);
      local_78._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      local_78._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
      local_78._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
      local_98._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_98._s_0.Y = _UNK_15061cbc8;
      local_58[0]._0_8_ = dVar2;
      local_58[0]._8_8_ = dVar3;
      local_58[0]._16_8_ = dVar1;
      TickRotateByPCAxis(this,param_1,(TVector2<double> *)&local_98._s_0,
                         (TVector<double> *)&local_58[0]._s_0,(TVector<double> *)&local_78._s_0,true
                         ,__real_40400000);
    }
  }
  return;
}

