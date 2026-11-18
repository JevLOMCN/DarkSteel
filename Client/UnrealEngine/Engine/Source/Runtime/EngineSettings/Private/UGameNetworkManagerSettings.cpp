// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 6

// StaticClass @ 143129dc0

UClass * __cdecl UGameNetworkManagerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameNetworkManagerSettings",
               &Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton,
               StaticRegisterNativesUGameNetworkManagerSettings,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameNetworkManagerSettings>,
               InternalVTableHelperCtorCaller<UGameNetworkManagerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton;
}

// UGameNetworkManagerSettings @ 14312ae10

UGameNetworkManagerSettings * __thiscall
UGameNetworkManagerSettings::UGameNetworkManagerSettings
          (UGameNetworkManagerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameNetworkManagerSettings__6B_;
  return this;
}

// UGameNetworkManagerSettings @ 14312ae40

UGameNetworkManagerSettings * __thiscall
UGameNetworkManagerSettings::UGameNetworkManagerSettings
          (UGameNetworkManagerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameNetworkManagerSettings__6B_;
  return this;
}

// ~UGameNetworkManagerSettings @ 14312b2b0

void __thiscall
UGameNetworkManagerSettings::~UGameNetworkManagerSettings(UGameNetworkManagerSettings *this)

{
  this->_padding_ = (longlong)&___7UGameNetworkManagerSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14312c6c0

UClass * __cdecl UGameNetworkManagerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameNetworkManagerSettings",
               &Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton,
               StaticRegisterNativesUGameNetworkManagerSettings,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameNetworkManagerSettings>,
               InternalVTableHelperCtorCaller<UGameNetworkManagerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameNetworkManagerSettings.InnerSingleton;
}

// StaticRegisterNativesUGameNetworkManagerSettings @ 14312ce30

void __cdecl UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings(void)

{
  return;
}

