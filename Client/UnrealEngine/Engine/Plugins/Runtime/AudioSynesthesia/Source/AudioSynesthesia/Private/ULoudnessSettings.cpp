// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// StaticClass @ 14d813950

UClass * __cdecl ULoudnessSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessSettings",
               &Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton,
               StaticRegisterNativesULoudnessSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessSettings>,
               InternalVTableHelperCtorCaller<ULoudnessSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton;
}

// ULoudnessSettings @ 14d81b8e0

ULoudnessSettings * __thiscall
ULoudnessSettings::ULoudnessSettings(ULoudnessSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  this->AnalysisPeriod = 0.01;
  this->_padding_ = (longlong)&___7ULoudnessSettings__6B_;
  this->MinimumFrequency = 20.0;
  this->MaximumFrequency = 20000.0;
  this->CurveType = D;
  this->NoiseFloorDb = -60.0;
  this->ExpectedMaxLoudness = 0.0;
  return this;
}

// ~ULoudnessSettings @ 14d81c630

void __thiscall ULoudnessSettings::~ULoudnessSettings(ULoudnessSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d823fa0

UClass * __cdecl ULoudnessSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessSettings",
               &Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton,
               StaticRegisterNativesULoudnessSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessSettings>,
               InternalVTableHelperCtorCaller<ULoudnessSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessSettings.InnerSingleton;
}

// GetSettings @ 14d825730

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
ULoudnessSettings::GetSettings(ULoudnessSettings *this,int param_1,int param_2)

{
  IAnalyzerSettings IVar1;
  undefined4 in_register_00000014;
  IAnalyzerSettings *pIVar2;
  
  pIVar2 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  IVar1 = (IAnalyzerSettings)::operator_new(0x28);
  if (IVar1 != (IAnalyzerSettings)0x0) {
    *(undefined4 *)((longlong)IVar1 + 0xc) = 0x303;
    *(undefined2 *)((longlong)IVar1 + 0x1d) = 0;
    *(undefined1 *)((longlong)IVar1 + 0x1f) = 0;
    *(undefined1 *)((longlong)IVar1 + 0x1c) = 0;
    *(undefined ***)IVar1 = &___7FLoudnessSettings_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x20) = 0x3c23d70a;
    *(undefined4 *)((longlong)IVar1 + 8) = 0x2000;
    *(undefined4 *)((longlong)IVar1 + 0x10) = 0x41a00000;
    *(undefined4 *)((longlong)IVar1 + 0x14) = 0x461c4000;
    *(undefined4 *)((longlong)IVar1 + 0x18) = 0xffffffff;
  }
  *(float *)((longlong)IVar1 + 0x20) = this->AnalysisPeriod;
  *(float *)((longlong)IVar1 + 0x10) = this->MinimumFrequency;
  *(float *)((longlong)IVar1 + 0x14) = this->MaximumFrequency;
  switch(this->CurveType) {
  case A:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 0;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  case B:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 1;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  case C:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 2;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  case D:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 3;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  case K:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 4;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  default:
    *(undefined1 *)((longlong)IVar1 + 0xd) = 5;
    *pIVar2 = IVar1;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar2;
  }
}

// StaticRegisterNativesULoudnessSettings @ 14d827370

void __cdecl ULoudnessSettings::StaticRegisterNativesULoudnessSettings(void)

{
  return;
}

