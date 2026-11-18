// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// StaticClass @ 14d814680

UClass * __cdecl USynesthesiaSpectrumAnalysisSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalysisSettings",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton,
               StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynesthesiaSpectrumAnalysisSettings>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalysisSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton;
}

// USynesthesiaSpectrumAnalysisSettings @ 14d81bd60

USynesthesiaSpectrumAnalysisSettings * __thiscall
USynesthesiaSpectrumAnalysisSettings::USynesthesiaSpectrumAnalysisSettings
          (USynesthesiaSpectrumAnalysisSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  this->AnalysisPeriod = 0.01;
  this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalysisSettings__6B_;
  this->FFTSize = DefaultSize;
  this->SpectrumType = PowerSpectrum;
  this->WindowType = Hann;
  this->bDownmixToMono = true;
  return this;
}

// ~USynesthesiaSpectrumAnalysisSettings @ 14d81c810

void __thiscall
USynesthesiaSpectrumAnalysisSettings::~USynesthesiaSpectrumAnalysisSettings
          (USynesthesiaSpectrumAnalysisSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d824360

UClass * __cdecl USynesthesiaSpectrumAnalysisSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalysisSettings",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton,
               StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynesthesiaSpectrumAnalysisSettings>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalysisSettings>,local_res8,
               UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalysisSettings.InnerSingleton;
}

// GetSettings @ 14d826000

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
USynesthesiaSpectrumAnalysisSettings::GetSettings
          (USynesthesiaSpectrumAnalysisSettings *this,int param_1,int param_2)

{
  EAudioSpectrumType EVar1;
  EFFTWindowType EVar2;
  undefined1 uVar3;
  IAnalyzerSettings IVar4;
  undefined4 in_register_00000014;
  undefined4 uVar5;
  
  IVar4 = (IAnalyzerSettings)::operator_new(0x18);
  uVar5 = 0x200;
  if (IVar4 == (IAnalyzerSettings)0x0) {
    IVar4 = (IAnalyzerSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar4 + 0xc) = 0x10001;
    *(undefined4 *)((longlong)IVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)IVar4 + 8) = 0x200;
    *(undefined ***)IVar4 = &___7FSynesthesiaSpectrumAnalysisSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar4 + 0x10) = 0x3c23d70a;
  }
  *(float *)((longlong)IVar4 + 0x10) = this->AnalysisPeriod;
  switch(this->FFTSize) {
  case Min:
    uVar5 = 0x40;
    break;
  case Small:
    uVar5 = 0x100;
    break;
  case Large:
    uVar5 = 0x400;
    break;
  case VeryLarge:
    uVar5 = 0x800;
    break;
  case Max:
    uVar5 = 0x1000;
  }
  *(undefined4 *)((longlong)IVar4 + 8) = uVar5;
  EVar1 = this->SpectrumType;
  if (EVar1 == MagnitudeSpectrum) {
    uVar3 = 0;
  }
  else if ((EVar1 == PowerSpectrum) || (EVar1 != Decibel)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(undefined1 *)((longlong)IVar4 + 0xc) = uVar3;
  EVar2 = this->WindowType;
  if (EVar2 != None) {
    if (EVar2 == Hamming) {
      uVar3 = 1;
      goto LAB_14d8260e3;
    }
    if (EVar2 == Hann) {
      uVar3 = 2;
      goto LAB_14d8260e3;
    }
    if (EVar2 == Blackman) {
      uVar3 = 3;
      goto LAB_14d8260e3;
    }
  }
  uVar3 = 0;
LAB_14d8260e3:
  *(undefined1 *)((longlong)IVar4 + 0xd) = uVar3;
  *(bool *)((longlong)IVar4 + 0xe) = this->bDownmixToMono;
  *(IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1) = IVar4;
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
         (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
}

// StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings @ 14d8273f0

void __cdecl
USynesthesiaSpectrumAnalysisSettings::StaticRegisterNativesUSynesthesiaSpectrumAnalysisSettings
          (void)

{
  return;
}

