// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 6

// StaticClass @ 14d80bd50

UClass * __cdecl UAudioAnalyzerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton;
}

// UAudioAnalyzerSettings @ 14d80cd10

UAudioAnalyzerSettings * __thiscall
UAudioAnalyzerSettings::UAudioAnalyzerSettings(UAudioAnalyzerSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerSettings__6B_;
  return this;
}

// UAudioAnalyzerSettings @ 14d80cd40

UAudioAnalyzerSettings * __thiscall
UAudioAnalyzerSettings::UAudioAnalyzerSettings
          (UAudioAnalyzerSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerSettings__6B_;
  return this;
}

// ~UAudioAnalyzerSettings @ 14d80cfd0

void __thiscall UAudioAnalyzerSettings::~UAudioAnalyzerSettings(UAudioAnalyzerSettings *this)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d80fb50

UClass * __cdecl UAudioAnalyzerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerSettings.InnerSingleton;
}

// StaticRegisterNativesUAudioAnalyzerSettings @ 14d810e80

void __cdecl UAudioAnalyzerSettings::StaticRegisterNativesUAudioAnalyzerSettings(void)

{
  return;
}

