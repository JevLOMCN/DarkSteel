// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// StaticClass @ 14d813610

UClass * __cdecl UMeterSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterSettings",
               &Z_Registration_Info_UClass_UMeterSettings.InnerSingleton,
               StaticRegisterNativesUMeterSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeterSettings>,InternalVTableHelperCtorCaller<UMeterSettings>,
               local_res8,UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterSettings.InnerSingleton;
}

// UMeterSettings @ 14d81bbb0

UMeterSettings * __thiscall
UMeterSettings::UMeterSettings(UMeterSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  this->AnalysisPeriod = 0.01;
  this->_padding_ = (longlong)&___7UMeterSettings__6B_;
  this->PeakMode = RootMeanSquared;
  this->MeterAttackTime = 300;
  this->MeterReleaseTime = 300;
  this->PeakHoldTime = 100;
  this->ClippingThreshold = 1.0;
  return this;
}

// ~UMeterSettings @ 14d81c7b0

void __thiscall UMeterSettings::~UMeterSettings(UMeterSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d824120

UClass * __cdecl UMeterSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterSettings",
               &Z_Registration_Info_UClass_UMeterSettings.InnerSingleton,
               StaticRegisterNativesUMeterSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeterSettings>,InternalVTableHelperCtorCaller<UMeterSettings>,
               local_res8,UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterSettings.InnerSingleton;
}

// GetSettings @ 14d825980

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
UMeterSettings::GetSettings(UMeterSettings *this,int param_1,int param_2)

{
  IAnalyzerSettings IVar1;
  undefined4 in_register_00000014;
  
  IVar1 = (IAnalyzerSettings)::operator_new(0x20);
  if (IVar1 == (IAnalyzerSettings)0x0) {
    IVar1 = (IAnalyzerSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar1 + 8) = 1;
    *(undefined4 *)((longlong)IVar1 + 0xc) = 300;
    *(undefined4 *)((longlong)IVar1 + 0x10) = 300;
    *(undefined4 *)((longlong)IVar1 + 0x14) = 100;
    *(undefined4 *)((longlong)IVar1 + 0x18) = 0x3f800000;
    *(undefined ***)IVar1 = &___7FMeterSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar1 + 0x1c) = 0x3c23d70a;
  }
  *(float *)((longlong)IVar1 + 0x1c) = this->AnalysisPeriod;
  if (this->PeakMode == MeanSquared) {
    *(undefined4 *)((longlong)IVar1 + 8) = 0;
  }
  else if (this->PeakMode == RootMeanSquared) {
    *(undefined4 *)((longlong)IVar1 + 8) = 1;
  }
  else {
    *(undefined4 *)((longlong)IVar1 + 8) = 2;
  }
  *(int *)((longlong)IVar1 + 0xc) = this->MeterAttackTime;
  *(int *)((longlong)IVar1 + 0x10) = this->MeterReleaseTime;
  *(int *)((longlong)IVar1 + 0x14) = this->PeakHoldTime;
  *(float *)((longlong)IVar1 + 0x18) = this->ClippingThreshold;
  *(IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1) = IVar1;
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
         (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
}

// StaticRegisterNativesUMeterSettings @ 14d827390

void __cdecl UMeterSettings::StaticRegisterNativesUMeterSettings(void)

{
  return;
}

