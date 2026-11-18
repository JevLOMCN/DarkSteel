// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732ca70

UClass * __cdecl USoundAttenuationEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundAttenuationEditorSettings",
               &Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton,
               StaticRegisterNativesUSoundAttenuationEditorSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundAttenuationEditorSettings>,
               InternalVTableHelperCtorCaller<USoundAttenuationEditorSettings>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton;
}

// USoundAttenuationEditorSettings @ 147330f20

USoundAttenuationEditorSettings * __thiscall
USoundAttenuationEditorSettings::USoundAttenuationEditorSettings
          (USoundAttenuationEditorSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnableReverbSend = true;
  this->bEnableSendToAudioLink = true;
  this->_padding_ = (longlong)&___7USoundAttenuationEditorSettings__6B_;
  return this;
}

// USoundAttenuationEditorSettings @ 147330f50

USoundAttenuationEditorSettings * __thiscall
USoundAttenuationEditorSettings::USoundAttenuationEditorSettings
          (USoundAttenuationEditorSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bEnableReverbSend = true;
  this->bEnableSendToAudioLink = true;
  this->_padding_ = (longlong)&___7USoundAttenuationEditorSettings__6B_;
  return this;
}

// ~USoundAttenuationEditorSettings @ 1473313c0

void __thiscall
USoundAttenuationEditorSettings::~USoundAttenuationEditorSettings
          (USoundAttenuationEditorSettings *this)

{
  this->_padding_ = (longlong)&___7USoundAttenuationEditorSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147332930

UClass * __cdecl USoundAttenuationEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundAttenuationEditorSettings",
               &Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton,
               StaticRegisterNativesUSoundAttenuationEditorSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundAttenuationEditorSettings>,
               InternalVTableHelperCtorCaller<USoundAttenuationEditorSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundAttenuationEditorSettings.InnerSingleton;
}

// StaticRegisterNativesUSoundAttenuationEditorSettings @ 147333410

void __cdecl
USoundAttenuationEditorSettings::StaticRegisterNativesUSoundAttenuationEditorSettings(void)

{
  return;
}

