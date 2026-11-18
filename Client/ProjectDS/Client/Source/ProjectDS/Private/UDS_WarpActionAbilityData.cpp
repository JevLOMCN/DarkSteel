// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b760620

UClass * __cdecl UDS_WarpActionAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpActionAbilityData",
               &Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_WarpActionAbilityData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpActionAbilityData>,
               InternalVTableHelperCtorCaller<UDS_WarpActionAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton;
}

// UDS_WarpActionAbilityData @ 14b764230

UDS_WarpActionAbilityData * __thiscall
UDS_WarpActionAbilityData::UDS_WarpActionAbilityData
          (UDS_WarpActionAbilityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WarpActionAbilityData__6B_;
  this->TryActivateType = PrepareWarp;
  this->WarpType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bIsEndWarp = false;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StartLoadingDelegate = 0;
  *(undefined8 *)&(this->StartLoadingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartLoadingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WarpArriveDelegate = 0;
  *(undefined8 *)&(this->WarpArriveDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WarpArriveDelegate).field_0x10 = 0;
  this->WarpYaw = 0.0;
  this->IslandID = 0;
  this->WarpLocationID = 0;
  return this;
}

// UDS_WarpActionAbilityData @ 14b7642b0

UDS_WarpActionAbilityData * __thiscall
UDS_WarpActionAbilityData::UDS_WarpActionAbilityData
          (UDS_WarpActionAbilityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WarpActionAbilityData__6B_;
  this->TryActivateType = PrepareWarp;
  this->WarpType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bIsEndWarp = false;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StartLoadingDelegate = 0;
  *(undefined8 *)&(this->StartLoadingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartLoadingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WarpArriveDelegate = 0;
  *(undefined8 *)&(this->WarpArriveDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WarpArriveDelegate).field_0x10 = 0;
  this->WarpYaw = 0.0;
  this->IslandID = 0;
  this->WarpLocationID = 0;
  return this;
}

// ~UDS_WarpActionAbilityData @ 14b7650d0

void __thiscall
UDS_WarpActionAbilityData::~UDS_WarpActionAbilityData(UDS_WarpActionAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WarpActionAbilityData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WarpArriveDelegate);
  pvVar1 = *(void **)&(this->WarpArriveDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WarpArriveDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartLoadingDelegate);
  pvVar1 = *(void **)&(this->StartLoadingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartLoadingDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b7663d0

UClass * __cdecl UDS_WarpActionAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpActionAbilityData",
               &Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_WarpActionAbilityData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WarpActionAbilityData>,
               InternalVTableHelperCtorCaller<UDS_WarpActionAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpActionAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_WarpActionAbilityData @ 14b766cd0

void __cdecl UDS_WarpActionAbilityData::StaticRegisterNativesUDS_WarpActionAbilityData(void)

{
  return;
}

// ResetData @ 14ba696f0

void __thiscall UDS_WarpActionAbilityData::ResetData(UDS_WarpActionAbilityData *this)

{
  undefined8 uVar1;
  
  this->TryActivateType = PrepareWarp;
  this->WarpType = None;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bIsEndWarp = false;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->WarpLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WarpYaw = 0.0;
  this->IslandID = 0;
  this->WarpLocationID = 0;
  return;
}

