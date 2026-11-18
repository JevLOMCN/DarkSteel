// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 6

// StaticClass @ 14de1d910

UClass * __cdecl UDLSSOverrideSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSOverrideSettings",
               &Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton,
               StaticRegisterNativesUDLSSOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSOverrideSettings>,
               InternalVTableHelperCtorCaller<UDLSSOverrideSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton;
}

// UDLSSOverrideSettings @ 14de21c00

UDLSSOverrideSettings * __thiscall
UDLSSOverrideSettings::UDLSSOverrideSettings(UDLSSOverrideSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
  this->ShowDLSSSDebugOnScreenMessages = UseProjectSettings;
  this->EnableDLSSInEditorViewportsOverride = UseProjectSettings;
  this->EnableDLSSInPlayInEditorViewportsOverride = UseProjectSettings;
  this->_padding_ = (longlong)&___7UDLSSOverrideSettings__6B_;
  return this;
}

// UDLSSOverrideSettings @ 14de21c30

UDLSSOverrideSettings * __thiscall
UDLSSOverrideSettings::UDLSSOverrideSettings
          (UDLSSOverrideSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
  this->ShowDLSSSDebugOnScreenMessages = UseProjectSettings;
  this->EnableDLSSInEditorViewportsOverride = UseProjectSettings;
  this->EnableDLSSInPlayInEditorViewportsOverride = UseProjectSettings;
  this->_padding_ = (longlong)&___7UDLSSOverrideSettings__6B_;
  return this;
}

// ~UDLSSOverrideSettings @ 14de22010

void __thiscall UDLSSOverrideSettings::~UDLSSOverrideSettings(UDLSSOverrideSettings *this)

{
  this->_padding_ = (longlong)&___7UDLSSOverrideSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14de27590

UClass * __cdecl UDLSSOverrideSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSOverrideSettings",
               &Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton,
               StaticRegisterNativesUDLSSOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSOverrideSettings>,
               InternalVTableHelperCtorCaller<UDLSSOverrideSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSOverrideSettings.InnerSingleton;
}

// StaticRegisterNativesUDLSSOverrideSettings @ 14de29cd0

void __cdecl UDLSSOverrideSettings::StaticRegisterNativesUDLSSOverrideSettings(void)

{
  return;
}

