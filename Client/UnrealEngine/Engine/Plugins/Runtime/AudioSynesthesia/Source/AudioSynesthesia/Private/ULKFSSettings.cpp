// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 6

// StaticClass @ 14d813450

UClass * __cdecl ULKFSSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSSettings",
               &Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton,
               StaticRegisterNativesULKFSSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULKFSSettings>,InternalVTableHelperCtorCaller<ULKFSSettings>,
               local_res8,UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton;
}

// ULKFSSettings @ 14d81b5b0

ULKFSSettings * __thiscall ULKFSSettings::ULKFSSettings(ULKFSSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerSettings::UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this,param_1);
  this->AnalysisPeriod = 0.1;
  this->_padding_ = (longlong)&___7ULKFSSettings__6B_;
  this->AnalysisWindowDuration = 0.4;
  this->ShortTermLoudnessDuration = 3.0;
  this->IntegratedLoudnessAnalysisPeriod = 1.0;
  this->IntegratedLoudnessDuration = 60.0;
  return this;
}

// ~ULKFSSettings @ 14d81c520

void __thiscall ULKFSSettings::~ULKFSSettings(ULKFSSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaSettings__6B_;
  UAudioAnalyzerSettings::~UAudioAnalyzerSettings((UAudioAnalyzerSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d823ca0

UClass * __cdecl ULKFSSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSSettings",
               &Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton,
               StaticRegisterNativesULKFSSettings,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULKFSSettings>,InternalVTableHelperCtorCaller<ULKFSSettings>,
               local_res8,UAudioSynesthesiaSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSSettings.InnerSingleton;
}

// GetSettings @ 14d8252a0

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
ULKFSSettings::GetSettings(ULKFSSettings *this,int param_1,int param_2)

{
  IAnalyzerSettings IVar1;
  undefined4 in_register_00000014;
  
  IVar1 = (IAnalyzerSettings)::operator_new(0x38);
  if (IVar1 != (IAnalyzerSettings)0x0) {
    *(undefined4 *)((longlong)IVar1 + 0xc) = 0x403;
    *(undefined2 *)((longlong)IVar1 + 0x1d) = 0;
    *(undefined1 *)((longlong)IVar1 + 0x1f) = 0;
    *(undefined ***)IVar1 = &___7FLKFSSettings_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x30) = 0x42700000;
    *(undefined4 *)((longlong)IVar1 + 8) = 0x800;
    *(undefined4 *)((longlong)IVar1 + 0x10) = 0x41a00000;
    *(undefined4 *)((longlong)IVar1 + 0x14) = 0x469c4000;
    *(undefined4 *)((longlong)IVar1 + 0x18) = 0xffffffff;
    *(undefined1 *)((longlong)IVar1 + 0x1c) = 1;
    *(undefined4 *)((longlong)IVar1 + 0x20) = 0x3dcccccd;
    *(undefined4 *)((longlong)IVar1 + 0x24) = 0x3ecccccd;
    *(undefined4 *)((longlong)IVar1 + 0x28) = 0x40400000;
    *(undefined4 *)((longlong)IVar1 + 0x2c) = 0x3f800000;
  }
  *(float *)((longlong)IVar1 + 0x20) = this->AnalysisPeriod;
  *(float *)((longlong)IVar1 + 0x24) = this->AnalysisWindowDuration;
  *(float *)((longlong)IVar1 + 0x28) = this->ShortTermLoudnessDuration;
  *(float *)((longlong)IVar1 + 0x2c) = this->IntegratedLoudnessAnalysisPeriod;
  *(float *)((longlong)IVar1 + 0x30) = this->IntegratedLoudnessDuration;
  *(IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1) = IVar1;
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
         (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
}

// StaticRegisterNativesULKFSSettings @ 14d827300

void __cdecl ULKFSSettings::StaticRegisterNativesULKFSSettings(void)

{
  return;
}

