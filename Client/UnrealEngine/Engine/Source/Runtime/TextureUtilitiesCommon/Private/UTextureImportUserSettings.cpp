// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TextureUtilitiesCommon
// Functions: 6

// StaticClass @ 14c93c730

UClass * __cdecl UTextureImportUserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportUserSettings",
               &Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton,
               StaticRegisterNativesUTextureImportUserSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTextureImportUserSettings>,
               InternalVTableHelperCtorCaller<UTextureImportUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton;
}

// UTextureImportUserSettings @ 14c93cc80

UTextureImportUserSettings * __thiscall
UTextureImportUserSettings::UTextureImportUserSettings
          (UTextureImportUserSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->PNGInfill = Default;
  this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
  return this;
}

// UTextureImportUserSettings @ 14c93ccb0

UTextureImportUserSettings * __thiscall
UTextureImportUserSettings::UTextureImportUserSettings
          (UTextureImportUserSettings *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->PNGInfill = Default;
  this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
  ::FName::FName(local_res8,L"Importing");
  this->_padding_ = (longlong)local_res8[0];
  return this;
}

// ~UTextureImportUserSettings @ 14c93cd20

void __thiscall
UTextureImportUserSettings::~UTextureImportUserSettings(UTextureImportUserSettings *this)

{
  this->_padding_ = (longlong)&___7UTextureImportUserSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14c93e2a0

UClass * __cdecl UTextureImportUserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TextureUtilitiesCommon",L"TextureImportUserSettings",
               &Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton,
               StaticRegisterNativesUTextureImportUserSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UTextureImportUserSettings>,
               InternalVTableHelperCtorCaller<UTextureImportUserSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureImportUserSettings.InnerSingleton;
}

// StaticRegisterNativesUTextureImportUserSettings @ 14c93f960

void __cdecl UTextureImportUserSettings::StaticRegisterNativesUTextureImportUserSettings(void)

{
  return;
}

