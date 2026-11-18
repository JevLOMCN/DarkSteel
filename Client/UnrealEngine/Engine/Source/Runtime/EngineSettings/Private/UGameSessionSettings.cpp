// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 6

// StaticClass @ 143129ec0

UClass * __cdecl UGameSessionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameSessionSettings",
               &Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton,
               StaticRegisterNativesUGameSessionSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameSessionSettings>,
               InternalVTableHelperCtorCaller<UGameSessionSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton;
}

// UGameSessionSettings @ 14312ae70

UGameSessionSettings * __thiscall
UGameSessionSettings::UGameSessionSettings(UGameSessionSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameSessionSettings__6B_;
  return this;
}

// UGameSessionSettings @ 14312aea0

UGameSessionSettings * __thiscall
UGameSessionSettings::UGameSessionSettings(UGameSessionSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGameSessionSettings__6B_;
  return this;
}

// ~UGameSessionSettings @ 14312b2d0

void __thiscall UGameSessionSettings::~UGameSessionSettings(UGameSessionSettings *this)

{
  this->_padding_ = (longlong)&___7UGameSessionSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14312c770

UClass * __cdecl UGameSessionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineSettings",L"GameSessionSettings",
               &Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton,
               StaticRegisterNativesUGameSessionSettings,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameSessionSettings>,
               InternalVTableHelperCtorCaller<UGameSessionSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameSessionSettings.InnerSingleton;
}

// StaticRegisterNativesUGameSessionSettings @ 14312ce40

void __cdecl UGameSessionSettings::StaticRegisterNativesUGameSessionSettings(void)

{
  return;
}

