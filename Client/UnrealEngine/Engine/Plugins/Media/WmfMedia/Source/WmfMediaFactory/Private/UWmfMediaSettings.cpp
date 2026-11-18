// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMediaFactory
// Functions: 7

// StaticClass @ 14eac5650

UClass * __cdecl UWmfMediaSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WmfMediaFactory",L"WmfMediaSettings",
               &Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton,
               StaticRegisterNativesUWmfMediaSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWmfMediaSettings>,
               InternalVTableHelperCtorCaller<UWmfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton;
}

// UWmfMediaSettings @ 14eac5880

UWmfMediaSettings * __thiscall
UWmfMediaSettings::UWmfMediaSettings(UWmfMediaSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWmfMediaSettings__6B_;
  return this;
}

// UWmfMediaSettings @ 14eac58b0

UWmfMediaSettings * __thiscall UWmfMediaSettings::UWmfMediaSettings(UWmfMediaSettings *this)

{
  UObject::UObject((UObject *)this);
  this->AllowNonStandardCodecs = false;
  this->LowLatency = false;
  this->NativeAudioOut = false;
  this->HardwareAcceleratedVideoDecoding = false;
  this->_padding_ = (longlong)&___7UWmfMediaSettings__6B_;
  this->bAreHardwareAcceleratedCodecRegistered = false;
  return this;
}

// ~UWmfMediaSettings @ 14eac58f0

void __thiscall UWmfMediaSettings::~UWmfMediaSettings(UWmfMediaSettings *this)

{
  this->_padding_ = (longlong)&___7UWmfMediaSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EnableHardwareAcceleratedCodecRegistered @ 14eac5990

void __thiscall UWmfMediaSettings::EnableHardwareAcceleratedCodecRegistered(UWmfMediaSettings *this)

{
  this->bAreHardwareAcceleratedCodecRegistered = true;
  return;
}

// GetPrivateStaticClass @ 14eac59a0

UClass * __cdecl UWmfMediaSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WmfMediaFactory",L"WmfMediaSettings",
               &Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton,
               StaticRegisterNativesUWmfMediaSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWmfMediaSettings>,
               InternalVTableHelperCtorCaller<UWmfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWmfMediaSettings.InnerSingleton;
}

// StaticRegisterNativesUWmfMediaSettings @ 14eac5ac0

void __cdecl UWmfMediaSettings::StaticRegisterNativesUWmfMediaSettings(void)

{
  return;
}

