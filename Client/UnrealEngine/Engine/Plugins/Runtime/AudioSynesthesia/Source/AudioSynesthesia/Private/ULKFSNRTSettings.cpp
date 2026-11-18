// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d811e30

UClass * __cdecl ULKFSNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRTSettings",
               &Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton,
               StaticRegisterNativesULKFSNRTSettings,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<ULKFSNRTSettings>,
               InternalVTableHelperCtorCaller<ULKFSNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton;
}

// ULKFSNRTSettings @ 14d81b520

ULKFSNRTSettings * __thiscall
ULKFSNRTSettings::ULKFSNRTSettings(ULKFSNRTSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  this->AnalysisPeriod = 0.1;
  this->_padding_ = (longlong)&___7ULKFSNRTSettings__6B_;
  this->AnalysisWindowDuration = 0.4;
  this->ShortTermLoudnessDuration = 3.0;
  return this;
}

// ULKFSNRTSettings @ 14d81b560

ULKFSNRTSettings * __thiscall ULKFSNRTSettings::ULKFSNRTSettings(ULKFSNRTSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,pFVar1);
  this->AnalysisPeriod = 0.1;
  this->_padding_ = (longlong)&___7ULKFSNRTSettings__6B_;
  this->AnalysisWindowDuration = 0.4;
  this->ShortTermLoudnessDuration = 3.0;
  return this;
}

// ~ULKFSNRTSettings @ 14d81c500

void __thiscall ULKFSNRTSettings::~ULKFSNRTSettings(ULKFSNRTSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d823be0

UClass * __cdecl ULKFSNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRTSettings",
               &Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton,
               StaticRegisterNativesULKFSNRTSettings,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<ULKFSNRTSettings>,
               InternalVTableHelperCtorCaller<ULKFSNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRTSettings.InnerSingleton;
}

// GetSettings @ 14d8251e0

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
ULKFSNRTSettings::GetSettings(ULKFSNRTSettings *this,float param_1,int param_2)

{
  IAnalyzerNRTSettings IVar1;
  IAnalyzerNRTSettings *in_RDX;
  
  IVar1 = (IAnalyzerNRTSettings)::operator_new(0x30);
  if (IVar1 != (IAnalyzerNRTSettings)0x0) {
    *(undefined2 *)((longlong)IVar1 + 0xe) = 0;
    *(undefined2 *)((longlong)IVar1 + 0x1d) = 0;
    *(undefined1 *)((longlong)IVar1 + 0x1f) = 0;
    *(undefined ***)IVar1 = &___7FLKFSNRTSettings_Audio__6B_;
    *(undefined8 *)((longlong)IVar1 + 0x28) = 0x40400000;
    *(undefined4 *)((longlong)IVar1 + 0x20) = 0x3dcccccd;
    *(undefined4 *)((longlong)IVar1 + 0x24) = 0x3ecccccd;
  }
  *(undefined4 *)((longlong)IVar1 + 8) = 0x800;
  *(undefined2 *)((longlong)IVar1 + 0xc) = 0x403;
  *(undefined4 *)((longlong)IVar1 + 0x10) = 0x41a00000;
  *(undefined4 *)((longlong)IVar1 + 0x14) = 0x469c4000;
  *(undefined4 *)((longlong)IVar1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)IVar1 + 0x1c) = 1;
  *(float *)((longlong)IVar1 + 0x20) = this->AnalysisPeriod;
  *(float *)((longlong)IVar1 + 0x24) = this->AnalysisWindowDuration;
  *(float *)((longlong)IVar1 + 0x28) = this->ShortTermLoudnessDuration;
  *in_RDX = IVar1;
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesULKFSNRTSettings @ 14d8272f0

void __cdecl ULKFSNRTSettings::StaticRegisterNativesULKFSNRTSettings(void)

{
  return;
}

