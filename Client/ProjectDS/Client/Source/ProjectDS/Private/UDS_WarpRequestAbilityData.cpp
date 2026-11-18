// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b760f50

UClass * __cdecl UDS_WarpRequestAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpRequestAbilityData",
               &Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_WarpRequestAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_WarpRequestAbilityData>,
               InternalVTableHelperCtorCaller<UDS_WarpRequestAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton;
}

// UDS_WarpRequestAbilityData @ 14b764440

UDS_WarpRequestAbilityData * __thiscall
UDS_WarpRequestAbilityData::UDS_WarpRequestAbilityData
          (UDS_WarpRequestAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->WarpRequestType = None;
  this->ResurrectType = Base;
  this->_padding_ = (longlong)&___7UDS_WarpRequestAbilityData__6B_;
  this->WarpDeviceTableID = 0;
  this->InteractionID = 0;
  this->PortalEntityID = 0;
  this->bIsRequestWarp = false;
  *(undefined8 *)&this->StartWarpCastingDelegate = 0;
  *(undefined8 *)&(this->StartWarpCastingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartWarpCastingDelegate).field_0x10 = 0;
  return this;
}

// UDS_WarpRequestAbilityData @ 14b764490

UDS_WarpRequestAbilityData * __thiscall
UDS_WarpRequestAbilityData::UDS_WarpRequestAbilityData
          (UDS_WarpRequestAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->WarpRequestType = None;
  this->ResurrectType = Base;
  this->_padding_ = (longlong)&___7UDS_WarpRequestAbilityData__6B_;
  this->WarpDeviceTableID = 0;
  this->InteractionID = 0;
  this->PortalEntityID = 0;
  this->bIsRequestWarp = false;
  *(undefined8 *)&this->StartWarpCastingDelegate = 0;
  *(undefined8 *)&(this->StartWarpCastingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartWarpCastingDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_WarpRequestAbilityData @ 14b7651a0

void __thiscall
UDS_WarpRequestAbilityData::~UDS_WarpRequestAbilityData(UDS_WarpRequestAbilityData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WarpRequestAbilityData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartWarpCastingDelegate);
  pvVar1 = *(void **)&(this->StartWarpCastingDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StartWarpCastingDelegate);
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b766610

UClass * __cdecl UDS_WarpRequestAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WarpRequestAbilityData",
               &Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_WarpRequestAbilityData,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_WarpRequestAbilityData>,
               InternalVTableHelperCtorCaller<UDS_WarpRequestAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WarpRequestAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_WarpRequestAbilityData @ 14b766d00

void __cdecl UDS_WarpRequestAbilityData::StaticRegisterNativesUDS_WarpRequestAbilityData(void)

{
  return;
}

// ResetData @ 14ba69730

void __thiscall UDS_WarpRequestAbilityData::ResetData(UDS_WarpRequestAbilityData *this)

{
  this->WarpRequestType = None;
  this->ResurrectType = Base;
  this->WarpDeviceTableID = 0;
  this->PortalEntityID = 0;
  this->bIsRequestWarp = false;
  return;
}

