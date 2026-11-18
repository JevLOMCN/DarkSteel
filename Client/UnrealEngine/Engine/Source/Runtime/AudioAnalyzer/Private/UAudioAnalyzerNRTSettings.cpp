// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 6

// StaticClass @ 14d80bb20

UClass * __cdecl UAudioAnalyzerNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRTSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerNRTSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRTSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton;
}

// UAudioAnalyzerNRTSettings @ 14d80ccb0

UAudioAnalyzerNRTSettings * __thiscall
UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
          (UAudioAnalyzerNRTSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerNRTSettings__6B_;
  return this;
}

// UAudioAnalyzerNRTSettings @ 14d80cce0

UAudioAnalyzerNRTSettings * __thiscall
UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings
          (UAudioAnalyzerNRTSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAudioAnalyzerNRTSettings__6B_;
  return this;
}

// ~UAudioAnalyzerNRTSettings @ 14d80cfb0

void __thiscall
UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings(UAudioAnalyzerNRTSettings *this)

{
  *(undefined ***)this = &___7UAudioAnalyzerAssetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d80fa90

UClass * __cdecl UAudioAnalyzerNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzerNRTSettings",
               &Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzerNRTSettings,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzerNRTSettings>,
               InternalVTableHelperCtorCaller<UAudioAnalyzerNRTSettings>,local_res8,
               UAudioAnalyzerAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzerNRTSettings.InnerSingleton;
}

// StaticRegisterNativesUAudioAnalyzerNRTSettings @ 14d810e70

void __cdecl UAudioAnalyzerNRTSettings::StaticRegisterNativesUAudioAnalyzerNRTSettings(void)

{
  return;
}

