// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// StaticClass @ 14e031a70

UClass * __cdecl UGroomPluginSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomPluginSettings",
               &Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton,
               StaticRegisterNativesUGroomPluginSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomPluginSettings>,
               InternalVTableHelperCtorCaller<UGroomPluginSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton;
}

// UGroomPluginSettings @ 14e03e090

UGroomPluginSettings * __thiscall
UGroomPluginSettings::UGroomPluginSettings(UGroomPluginSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGroomPluginSettings__6B_;
  return this;
}

// UGroomPluginSettings @ 14e03e0c0

UGroomPluginSettings * __thiscall
UGroomPluginSettings::UGroomPluginSettings(UGroomPluginSettings *this)

{
  UObject::UObject((UObject *)this);
  this->GroomCacheLookAheadBuffer = 1.0;
  this->_padding_ = (longlong)&___7UGroomPluginSettings__6B_;
  return this;
}

// ~UGroomPluginSettings @ 14e03efe0

void __thiscall UGroomPluginSettings::~UGroomPluginSettings(UGroomPluginSettings *this)

{
  this->_padding_ = (longlong)&___7UGroomPluginSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e052420

UClass * __cdecl UGroomPluginSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomPluginSettings",
               &Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton,
               StaticRegisterNativesUGroomPluginSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroomPluginSettings>,
               InternalVTableHelperCtorCaller<UGroomPluginSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomPluginSettings.InnerSingleton;
}

// StaticRegisterNativesUGroomPluginSettings @ 14e064cd0

void __cdecl UGroomPluginSettings::StaticRegisterNativesUGroomPluginSettings(void)

{
  return;
}

