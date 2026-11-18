// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d811fb0

UClass * __cdecl ULoudnessNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRTSettings",
               &Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton,
               StaticRegisterNativesULoudnessNRTSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessNRTSettings>,
               InternalVTableHelperCtorCaller<ULoudnessNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton;
}

// ULoudnessNRTSettings @ 14d81b850

ULoudnessNRTSettings * __thiscall
ULoudnessNRTSettings::ULoudnessNRTSettings(ULoudnessNRTSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  this->_padding_ = (longlong)&___7ULoudnessNRTSettings__6B_;
  return this;
}

// ULoudnessNRTSettings @ 14d81b880

ULoudnessNRTSettings * __thiscall
ULoudnessNRTSettings::ULoudnessNRTSettings(ULoudnessNRTSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,pFVar1);
  this->AnalysisPeriod = 0.01;
  this->_padding_ = (longlong)&___7ULoudnessNRTSettings__6B_;
  this->MinimumFrequency = 20.0;
  this->MaximumFrequency = 20000.0;
  this->CurveType = D;
  this->NoiseFloorDb = -60.0;
  return this;
}

// ~ULoudnessNRTSettings @ 14d81c610

void __thiscall ULoudnessNRTSettings::~ULoudnessNRTSettings(ULoudnessNRTSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d823ee0

UClass * __cdecl ULoudnessNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRTSettings",
               &Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton,
               StaticRegisterNativesULoudnessNRTSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessNRTSettings>,
               InternalVTableHelperCtorCaller<ULoudnessNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRTSettings.InnerSingleton;
}

// GetSettings @ 14d8255e0

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
ULoudnessNRTSettings::GetSettings(ULoudnessNRTSettings *this,float param_1,int param_2)

{
  IAnalyzerNRTSettings IVar1;
  IAnalyzerNRTSettings *in_RDX;
  
  IVar1 = (IAnalyzerNRTSettings)::operator_new(0x28);
  if (IVar1 == (IAnalyzerNRTSettings)0x0) {
    IVar1 = (IAnalyzerNRTSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar1 + 8) = 0x2000;
    *(undefined2 *)((longlong)IVar1 + 0xc) = 0x303;
    *(undefined4 *)((longlong)IVar1 + 0x10) = 0x41a00000;
    *(undefined4 *)((longlong)IVar1 + 0x14) = 0x461c4000;
    *(undefined4 *)((longlong)IVar1 + 0x18) = 0xffffffff;
    *(undefined1 *)((longlong)IVar1 + 0x1c) = 0;
    *(undefined ***)IVar1 = &___7FLoudnessNRTSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar1 + 0x20) = 0x3c23d70a;
  }
  *(float *)((longlong)IVar1 + 0x20) = this->AnalysisPeriod;
  *(float *)((longlong)IVar1 + 0x10) = this->MinimumFrequency;
  *(float *)((longlong)IVar1 + 0x14) = this->MaximumFrequency;
  *(undefined1 *)((longlong)IVar1 + 0xc) = 3;
  *(undefined1 *)((longlong)IVar1 + 0x1c) = 0;
  switch(this->CurveType) {
  case A:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 0;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  case B:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 1;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  case C:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 2;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  case D:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 3;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  case K:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 4;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  default:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 5;
    *in_RDX = IVar1;
    return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
           in_RDX;
  }
}

// StaticRegisterNativesULoudnessNRTSettings @ 14d827360

void __cdecl ULoudnessNRTSettings::StaticRegisterNativesULoudnessNRTSettings(void)

{
  return;
}

