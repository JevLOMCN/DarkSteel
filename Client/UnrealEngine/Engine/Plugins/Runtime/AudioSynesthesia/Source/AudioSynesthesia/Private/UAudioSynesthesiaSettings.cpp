// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// StaticClass @ 14d8144c0

UClass * __cdecl UAudioSynesthesiaSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSynesthesiaSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaSettings>,local_res8,
               UAudioAnalyzerSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton;
}

// UAudioSynesthesiaSettings @ 14d81adf0

UAudioSynesthesiaSettings * __thiscall
UAudioSynesthesiaSettings::UAudioSynesthesiaSettings
          (UAudioSynesthesiaSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaSettings__6B_;
  return this;
}

// UAudioSynesthesiaSettings @ 14d81ae20

UAudioSynesthesiaSettings * __thiscall
UAudioSynesthesiaSettings::UAudioSynesthesiaSettings
          (UAudioSynesthesiaSettings *this,FObjectInitializer *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  *(undefined ***)this = &___7UAudioSynesthesiaSettings__6B_;
  return this;
}

// ~UAudioSynesthesiaSettings @ 14d81c230

void __thiscall
UAudioSynesthesiaSettings::~UAudioSynesthesiaSettings(UAudioSynesthesiaSettings *this)

{
  *(undefined ***)this = &___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d8236a0

UClass * __cdecl UAudioSynesthesiaSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"AudioSynesthesiaSettings",
               &Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton,
               StaticRegisterNativesUAudioSynesthesiaSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioSynesthesiaSettings>,
               InternalVTableHelperCtorCaller<UAudioSynesthesiaSettings>,local_res8,
               UAudioAnalyzerSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioSynesthesiaSettings.InnerSingleton;
}

// StaticRegisterNativesUAudioSynesthesiaSettings @ 14d8271f0

void __cdecl UAudioSynesthesiaSettings::StaticRegisterNativesUAudioSynesthesiaSettings(void)

{
  return;
}

