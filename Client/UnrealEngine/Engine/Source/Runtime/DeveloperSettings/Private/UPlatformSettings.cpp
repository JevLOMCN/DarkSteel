// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 8

// StaticClass @ 14241a650

UClass * __cdecl UPlatformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettings",
               &Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton,
               StaticRegisterNativesUPlatformSettings,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformSettings>,
               InternalVTableHelperCtorCaller<UPlatformSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton;
}

// UPlatformSettings @ 14241be20

UPlatformSettings * __thiscall
UPlatformSettings::UPlatformSettings(UPlatformSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformSettings__6B_;
  (this->ConfigPlatformName).ComparisonIndex = 0;
  (this->ConfigPlatformName).Number = 0;
  (this->ConfigPlatformNameStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatformNameStr).Data.ArrayNum = 0;
  (this->ConfigPlatformNameStr).Data.ArrayMax = 0;
  return this;
}

// UPlatformSettings @ 14241be60

UPlatformSettings * __thiscall
UPlatformSettings::UPlatformSettings(UPlatformSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformSettings__6B_;
  (this->ConfigPlatformName).ComparisonIndex = 0;
  (this->ConfigPlatformName).Number = 0;
  (this->ConfigPlatformNameStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatformNameStr).Data.ArrayNum = 0;
  (this->ConfigPlatformNameStr).Data.ArrayMax = 0;
  return this;
}

// ~UPlatformSettings @ 14241c0e0

void __thiscall UPlatformSettings::~UPlatformSettings(UPlatformSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPlatformSettings__6B_;
  pFVar1 = (this->ConfigPlatformNameStr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetConfigOverridePlatform @ 14241cc10

wchar_t * __thiscall UPlatformSettings::GetConfigOverridePlatform(UPlatformSettings *this)

{
  if ((this->ConfigPlatformNameStr).Data.ArrayNum < 2) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)(this->ConfigPlatformNameStr).Data.AllocatorInstance.Data;
}

// GetPrivateStaticClass @ 14241cf80

UClass * __cdecl UPlatformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettings",
               &Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton,
               StaticRegisterNativesUPlatformSettings,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformSettings>,
               InternalVTableHelperCtorCaller<UPlatformSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettings.InnerSingleton;
}

// InitializePlatformDefaults @ 14241d310

void __thiscall UPlatformSettings::InitializePlatformDefaults(UPlatformSettings *this)

{
  return;
}

// StaticRegisterNativesUPlatformSettings @ 14241d6d0

void __cdecl UPlatformSettings::StaticRegisterNativesUPlatformSettings(void)

{
  return;
}

