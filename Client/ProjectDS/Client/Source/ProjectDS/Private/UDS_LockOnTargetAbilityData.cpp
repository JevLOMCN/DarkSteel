// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4e4570

UClass * __cdecl UDS_LockOnTargetAbilityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LockOnTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton;
}

// UDS_LockOnTargetAbilityData @ 14b4e8370

UDS_LockOnTargetAbilityData * __thiscall
UDS_LockOnTargetAbilityData::UDS_LockOnTargetAbilityData
          (UDS_LockOnTargetAbilityData *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->TargetEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityData__6B_;
  ::FName::FName(&this->TargetSocketName,"FocusMode01");
  return this;
}

// ~UDS_LockOnTargetAbilityData @ 14b4e96d0

void __thiscall
UDS_LockOnTargetAbilityData::~UDS_LockOnTargetAbilityData(UDS_LockOnTargetAbilityData *this)

{
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityData__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eaff0

UClass * __cdecl UDS_LockOnTargetAbilityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LockOnTargetAbilityData",
               &Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton,
               StaticRegisterNativesUDS_LockOnTargetAbilityData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LockOnTargetAbilityData>,
               InternalVTableHelperCtorCaller<UDS_LockOnTargetAbilityData>,local_res8,
               UDS_AbilityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LockOnTargetAbilityData.InnerSingleton;
}

// StaticRegisterNativesUDS_LockOnTargetAbilityData @ 14b4ec0a0

void __cdecl UDS_LockOnTargetAbilityData::StaticRegisterNativesUDS_LockOnTargetAbilityData(void)

{
  return;
}

// UDS_LockOnTargetAbilityData @ 14b9d8090

UDS_LockOnTargetAbilityData * __thiscall
UDS_LockOnTargetAbilityData::UDS_LockOnTargetAbilityData
          (UDS_LockOnTargetAbilityData *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->TargetEntityID = 0;
  this->_padding_ = (longlong)&___7UDS_LockOnTargetAbilityData__6B_;
  ::FName::FName(&this->TargetSocketName,"FocusMode01");
  return this;
}

// ResetData @ 14ba18b40

void __thiscall UDS_LockOnTargetAbilityData::ResetData(UDS_LockOnTargetAbilityData *this)

{
  return;
}

