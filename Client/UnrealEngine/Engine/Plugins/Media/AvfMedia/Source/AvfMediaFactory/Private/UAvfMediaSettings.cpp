// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AvfMediaFactory
// Functions: 6

// StaticClass @ 14ea25160

UClass * __cdecl UAvfMediaSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AvfMediaFactory",L"AvfMediaSettings",
               &Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton,
               StaticRegisterNativesUAvfMediaSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAvfMediaSettings>,
               InternalVTableHelperCtorCaller<UAvfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton;
}

// UAvfMediaSettings @ 14ea273c0

UAvfMediaSettings * __thiscall
UAvfMediaSettings::UAvfMediaSettings(UAvfMediaSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAvfMediaSettings__6B_;
  return this;
}

// UAvfMediaSettings @ 14ea273f0

UAvfMediaSettings * __thiscall UAvfMediaSettings::UAvfMediaSettings(UAvfMediaSettings *this)

{
  UObject::UObject((UObject *)this);
  this->NativeAudioOut = false;
  this->_padding_ = (longlong)&___7UAvfMediaSettings__6B_;
  return this;
}

// ~UAvfMediaSettings @ 14ea27440

void __thiscall UAvfMediaSettings::~UAvfMediaSettings(UAvfMediaSettings *this)

{
  this->_padding_ = (longlong)&___7UAvfMediaSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ea274e0

UClass * __cdecl UAvfMediaSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AvfMediaFactory",L"AvfMediaSettings",
               &Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton,
               StaticRegisterNativesUAvfMediaSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAvfMediaSettings>,
               InternalVTableHelperCtorCaller<UAvfMediaSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAvfMediaSettings.InnerSingleton;
}

// StaticRegisterNativesUAvfMediaSettings @ 14ea27600

void __cdecl UAvfMediaSettings::StaticRegisterNativesUAvfMediaSettings(void)

{
  return;
}

