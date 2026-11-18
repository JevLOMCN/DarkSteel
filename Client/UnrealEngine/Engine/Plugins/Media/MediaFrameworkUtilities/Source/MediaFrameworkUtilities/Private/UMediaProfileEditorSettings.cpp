// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 8

// StaticClass @ 14d7cb070

UClass * __cdecl UMediaProfileEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileEditorSettings",
               &Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton,
               StaticRegisterNativesUMediaProfileEditorSettings,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMediaProfileEditorSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton;
}

// UMediaProfileEditorSettings @ 14d7d0c40

UMediaProfileEditorSettings * __thiscall
UMediaProfileEditorSettings::UMediaProfileEditorSettings(UMediaProfileEditorSettings *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UMediaProfileEditorSettings__6B_;
  return this;
}

// UMediaProfileEditorSettings @ 14d7d0c70

UMediaProfileEditorSettings * __thiscall
UMediaProfileEditorSettings::UMediaProfileEditorSettings
          (UMediaProfileEditorSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMediaProfileEditorSettings__6B_;
  return this;
}

// ~UMediaProfileEditorSettings @ 14d7d1c10

void __thiscall
UMediaProfileEditorSettings::~UMediaProfileEditorSettings(UMediaProfileEditorSettings *this)

{
  *(undefined ***)this = &___7UMediaProfileEditorSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d7dab90

UClass * __cdecl UMediaProfileEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileEditorSettings",
               &Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton,
               StaticRegisterNativesUMediaProfileEditorSettings,0x28,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UMediaProfileEditorSettings>,
               InternalVTableHelperCtorCaller<UMediaProfileEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileEditorSettings.InnerSingleton;
}

// GetUserMediaProfile @ 14d7db730

UMediaProfile * __thiscall
UMediaProfileEditorSettings::GetUserMediaProfile(UMediaProfileEditorSettings *this)

{
  return (UMediaProfile *)0x0;
}

// SetUserMediaProfile @ 14d7e1990

void __thiscall
UMediaProfileEditorSettings::SetUserMediaProfile
          (UMediaProfileEditorSettings *this,UMediaProfile *param_1)

{
  return;
}

// StaticRegisterNativesUMediaProfileEditorSettings @ 14d7e1f00

void __cdecl UMediaProfileEditorSettings::StaticRegisterNativesUMediaProfileEditorSettings(void)

{
  return;
}

