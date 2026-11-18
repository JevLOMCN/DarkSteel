// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4bb180

UClass * __cdecl UDS_InteractionAbilityData_StuffWarpDevice::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffWarpDevice",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDevice,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffWarpDevice>,local_res8
               ,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton;
}

// UDS_InteractionAbilityData_StuffWarpDevice @ 14b4c0d90

UDS_InteractionAbilityData_StuffWarpDevice * __thiscall
UDS_InteractionAbilityData_StuffWarpDevice::UDS_InteractionAbilityData_StuffWarpDevice
          (UDS_InteractionAbilityData_StuffWarpDevice *this,FVTableHelper *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffWarpDevice__6B_;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  return this;
}

// UDS_InteractionAbilityData_StuffWarpDevice @ 14b4c0dd0

UDS_InteractionAbilityData_StuffWarpDevice * __thiscall
UDS_InteractionAbilityData_StuffWarpDevice::UDS_InteractionAbilityData_StuffWarpDevice
          (UDS_InteractionAbilityData_StuffWarpDevice *this,FObjectInitializer *param_1)

{
  UDS_AbilityData::UDS_AbilityData((UDS_AbilityData *)this,param_1);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_StuffWarpDevice__6B_;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  return this;
}

// ~UDS_InteractionAbilityData_StuffWarpDevice @ 14b4c2290

void __thiscall
UDS_InteractionAbilityData_StuffWarpDevice::~UDS_InteractionAbilityData_StuffWarpDevice
          (UDS_InteractionAbilityData_StuffWarpDevice *this)

{
  this->_padding_ = (longlong)&___7UDS_InteractionAbilityData_Base__6B_;
  UDS_AbilityData::~UDS_AbilityData((UDS_AbilityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c45a0

UClass * __cdecl UDS_InteractionAbilityData_StuffWarpDevice::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbilityData_StuffWarpDevice",
               &Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton
               ,StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDevice,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InteractionAbilityData_StuffWarpDevice>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbilityData_StuffWarpDevice>,local_res8
               ,UDS_InteractionAbilityData_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbilityData_StuffWarpDevice.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDevice @ 14b4c5620

void __cdecl
UDS_InteractionAbilityData_StuffWarpDevice::
StaticRegisterNativesUDS_InteractionAbilityData_StuffWarpDevice(void)

{
  return;
}

// ResetData @ 14ba18a50

void __thiscall
UDS_InteractionAbilityData_StuffWarpDevice::ResetData
          (UDS_InteractionAbilityData_StuffWarpDevice *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->InteractionStateTag).TagName = FGameplayTag::EmptyTag.TagName;
  return;
}

