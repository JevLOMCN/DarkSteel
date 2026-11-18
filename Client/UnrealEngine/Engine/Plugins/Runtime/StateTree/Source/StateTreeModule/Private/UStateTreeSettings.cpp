// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 6

// StaticClass @ 14d49eb40

UClass * __cdecl UStateTreeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSettings",
               &Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton,
               StaticRegisterNativesUStateTreeSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"StateTree",
               InternalConstructor<UStateTreeSettings>,
               InternalVTableHelperCtorCaller<UStateTreeSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton;
}

// UStateTreeSettings @ 14d4b2a40

UStateTreeSettings * __thiscall
UStateTreeSettings::UStateTreeSettings(UStateTreeSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoStartDebuggerTracesOnNonEditorTargets = false;
  this->_padding_ = (longlong)&___7UStateTreeSettings__6B_;
  return this;
}

// UStateTreeSettings @ 14d4b2a70

UStateTreeSettings * __thiscall
UStateTreeSettings::UStateTreeSettings(UStateTreeSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoStartDebuggerTracesOnNonEditorTargets = false;
  this->_padding_ = (longlong)&___7UStateTreeSettings__6B_;
  return this;
}

// ~UStateTreeSettings @ 14d4b3ef0

void __thiscall UStateTreeSettings::~UStateTreeSettings(UStateTreeSettings *this)

{
  this->_padding_ = (longlong)&___7UStateTreeSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d4bf320

UClass * __cdecl UStateTreeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeSettings",
               &Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton,
               StaticRegisterNativesUStateTreeSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"StateTree",
               InternalConstructor<UStateTreeSettings>,
               InternalVTableHelperCtorCaller<UStateTreeSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeSettings.InnerSingleton;
}

// StaticRegisterNativesUStateTreeSettings @ 14d4d1090

void __cdecl UStateTreeSettings::StaticRegisterNativesUStateTreeSettings(void)

{
  return;
}

