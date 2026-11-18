// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 6

// StaticClass @ 146b924f0

UClass * __cdecl UTranslationPickerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationPickerSettings",
               &Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton,
               StaticRegisterNativesUTranslationPickerSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"TranslationPickerSettings",
               InternalConstructor<UTranslationPickerSettings>,
               InternalVTableHelperCtorCaller<UTranslationPickerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton;
}

// UTranslationPickerSettings @ 146b98530

UTranslationPickerSettings * __thiscall
UTranslationPickerSettings::UTranslationPickerSettings
          (UTranslationPickerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTranslationPickerSettings__6B_;
  return this;
}

// UTranslationPickerSettings @ 146b98560

UTranslationPickerSettings * __thiscall
UTranslationPickerSettings::UTranslationPickerSettings
          (UTranslationPickerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTranslationPickerSettings__6B_;
  return this;
}

// ~UTranslationPickerSettings @ 146b994c0

void __thiscall
UTranslationPickerSettings::~UTranslationPickerSettings(UTranslationPickerSettings *this)

{
  this->_padding_ = (longlong)&___7UTranslationPickerSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146baf960

UClass * __cdecl UTranslationPickerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TranslationEditor",L"TranslationPickerSettings",
               &Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton,
               StaticRegisterNativesUTranslationPickerSettings,0x30,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"TranslationPickerSettings",
               InternalConstructor<UTranslationPickerSettings>,
               InternalVTableHelperCtorCaller<UTranslationPickerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTranslationPickerSettings.InnerSingleton;
}

// StaticRegisterNativesUTranslationPickerSettings @ 146bc09f0

void __cdecl UTranslationPickerSettings::StaticRegisterNativesUTranslationPickerSettings(void)

{
  return;
}

