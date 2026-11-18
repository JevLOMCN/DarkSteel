// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 6

// StaticClass @ 14de58560

UClass * __cdecl UStreamlineOverrideSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineOverrideSettings",
               &Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton,
               StaticRegisterNativesUStreamlineOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineOverrideSettings>,
               InternalVTableHelperCtorCaller<UStreamlineOverrideSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton;
}

// UStreamlineOverrideSettings @ 14de59b70

UStreamlineOverrideSettings * __thiscall
UStreamlineOverrideSettings::UStreamlineOverrideSettings
          (UStreamlineOverrideSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LoadDebugOverlayOverride = UseProjectSettings;
  this->AllowOTAUpdateOverride = UseProjectSettings;
  this->EnableDLSSFGInPlayInEditorViewportsOverride = UseProjectSettings;
  this->UseSlSetTagOverride = UseProjectSettings;
  this->_padding_ = (longlong)&___7UStreamlineOverrideSettings__6B_;
  return this;
}

// UStreamlineOverrideSettings @ 14de59ba0

UStreamlineOverrideSettings * __thiscall
UStreamlineOverrideSettings::UStreamlineOverrideSettings
          (UStreamlineOverrideSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LoadDebugOverlayOverride = UseProjectSettings;
  this->AllowOTAUpdateOverride = UseProjectSettings;
  this->EnableDLSSFGInPlayInEditorViewportsOverride = UseProjectSettings;
  this->UseSlSetTagOverride = UseProjectSettings;
  this->_padding_ = (longlong)&___7UStreamlineOverrideSettings__6B_;
  return this;
}

// ~UStreamlineOverrideSettings @ 14de59e70

void __thiscall
UStreamlineOverrideSettings::~UStreamlineOverrideSettings(UStreamlineOverrideSettings *this)

{
  this->_padding_ = (longlong)&___7UStreamlineOverrideSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14de5ac20

UClass * __cdecl UStreamlineOverrideSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineOverrideSettings",
               &Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton,
               StaticRegisterNativesUStreamlineOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineOverrideSettings>,
               InternalVTableHelperCtorCaller<UStreamlineOverrideSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton;
}

// StaticRegisterNativesUStreamlineOverrideSettings @ 14de63640

void __cdecl UStreamlineOverrideSettings::StaticRegisterNativesUStreamlineOverrideSettings(void)

{
  return;
}

