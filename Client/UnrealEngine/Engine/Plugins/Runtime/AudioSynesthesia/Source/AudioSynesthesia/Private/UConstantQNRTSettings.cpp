// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 7

// StaticClass @ 14d814340

UClass * __cdecl UConstantQNRTSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRTSettings",
               &Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton,
               StaticRegisterNativesUConstantQNRTSettings,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstantQNRTSettings>,
               InternalVTableHelperCtorCaller<UConstantQNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton;
}

// UConstantQNRTSettings @ 14d81b0d0

UConstantQNRTSettings * __thiscall
UConstantQNRTSettings::UConstantQNRTSettings(UConstantQNRTSettings *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UConstantQNRTSettings__6B_;
  return this;
}

// UConstantQNRTSettings @ 14d81b100

UConstantQNRTSettings * __thiscall
UConstantQNRTSettings::UConstantQNRTSettings(UConstantQNRTSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAudioAnalyzerNRTSettings::UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this,pFVar1);
  this->StartingFrequency = 40.0;
  this->_padding_ = (longlong)&___7UConstantQNRTSettings__6B_;
  this->NumBands = 0x30;
  this->NumBandsPerOctave = 12.0;
  this->AnalysisPeriod = 0.01;
  this->bDownmixToMono = false;
  this->FFTSize = XLarge;
  this->WindowType = Blackman;
  this->SpectrumType = PowerSpectrum;
  this->BandWidthStretch = 1.0;
  this->CQTNormalization = EqualEnergy;
  this->NoiseFloorDb = -60.0;
  return this;
}

// ~UConstantQNRTSettings @ 14d81c340

void __thiscall UConstantQNRTSettings::~UConstantQNRTSettings(UConstantQNRTSettings *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRTSettings__6B_;
  UAudioAnalyzerNRTSettings::~UAudioAnalyzerNRTSettings((UAudioAnalyzerNRTSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d8238e0

UClass * __cdecl UConstantQNRTSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRTSettings",
               &Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton,
               StaticRegisterNativesUConstantQNRTSettings,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstantQNRTSettings>,
               InternalVTableHelperCtorCaller<UConstantQNRTSettings>,local_res8,
               UAudioSynesthesiaNRTSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRTSettings.InnerSingleton;
}

// GetSettings @ 14d8245d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
UConstantQNRTSettings::GetSettings(UConstantQNRTSettings *this,float param_1,int param_2)

{
  longlong lVar1;
  EWindowType EVar2;
  ESpectrumType EVar3;
  EPseudoConstantQNormalization EVar4;
  int iVar5;
  IAnalyzerNRTSettings IVar6;
  ulonglong uVar7;
  IAnalyzerNRTSettings *in_RDX;
  undefined1 auStack_198 [32];
  ESpectrumType local_178 [8];
  EConstantQNormalizationEnum local_170 [8];
  undefined1 local_168;
  undefined1 local_167;
  EPseudoConstantQNormalization local_166 [6];
  EConstantQNormalizationEnum local_160 [8];
  EPseudoConstantQNormalization local_158 [8];
  EFFTWindowType local_150 [8];
  EPseudoConstantQNormalization local_148;
  EConstantQNormalizationEnum local_147 [3];
  int local_144 [3];
  initializer_list<TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>_>
  local_138;
  EPseudoConstantQNormalization local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_108;
  undefined1 *local_f8;
  undefined1 *local_f0;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_e8;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_d8;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_c8;
  EFFTWindowType *local_b8;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined4 *local_a0;
  EConstantQNormalizationEnum *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  EAudioSpectrumType *local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  int *local_40;
  TPairInitializer<EConstantQNormalizationEnum_const_&,Audio::EPseudoConstantQNormalization_const_&>
  local_38;
  
  local_38.Key = (EConstantQNormalizationEnum *)(__security_cookie.value ^ (ulonglong)auStack_198);
  IVar6 = (IAnalyzerNRTSettings)::operator_new(0x30);
  if (IVar6 == (IAnalyzerNRTSettings)0x0) {
    IVar6 = (IAnalyzerNRTSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar6 + 8) = 0x60;
    *(undefined4 *)((longlong)IVar6 + 0xc) = 0x41400000;
    *(undefined4 *)((longlong)IVar6 + 0x10) = 0x42200000;
    *(undefined4 *)((longlong)IVar6 + 0x14) = 0x3f800000;
    *(undefined1 *)((longlong)IVar6 + 0x18) = 2;
    *(undefined4 *)((longlong)IVar6 + 0x1c) = 0x400;
    *(undefined2 *)((longlong)IVar6 + 0x20) = 0x103;
    *(undefined1 *)((longlong)IVar6 + 0x22) = 1;
    *(undefined ***)IVar6 = &___7FConstantQNRTSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar6 + 0x24) = 0x3c23d70a;
    *(undefined1 *)((longlong)IVar6 + 0x28) = 0;
  }
  uVar7 = (ulonglong)_tls_index;
  *(float *)((longlong)IVar6 + 0x24) = this->AnalysisPeriod;
  *(bool *)((longlong)IVar6 + 0x28) = this->bDownmixToMono;
  local_178[0] = this->FFTSize;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
  if (*(int *)(lVar1 + 0x9d4c) < `BPConstantQFFTSizeEnumToInt'::`2'::_TSS0) {
    _Init_thread_header(&`BPConstantQFFTSizeEnumToInt'::`2'::_TSS0);
    if (`BPConstantQFFTSizeEnumToInt'::`2'::_TSS0 == -1) {
      local_c8.Key = local_147;
      local_147[0] = EqualEuclideanNorm;
      local_c8.Value = local_128;
      local_128[0] = 0x40;
      local_128[1] = EqualAmplitude;
      local_128[2] = EqualAmplitude;
      local_128[3] = EqualAmplitude;
      local_b8 = local_150;
      local_150[0] = Hamming;
      local_b0 = &local_124;
      local_a8 = &local_148;
      local_a0 = &local_120;
      local_98 = local_160;
      local_90 = &local_11c;
      local_88 = local_158;
      local_80 = &local_118;
      local_78 = local_170;
      local_70 = &local_114;
      local_68 = &local_168;
      local_60 = &local_110;
      local_58 = &local_167;
      local_50 = &local_10c;
      local_48 = local_166;
      local_40 = local_144;
      local_138._First = &local_c8;
      local_138._Last = &local_38;
      local_124 = 0x80;
      local_148 = EqualEnergy;
      local_120 = 0x100;
      local_160[0] = EqualAmplitude|EqualEnergy;
      local_11c = 0x200;
      local_158[0] = 4;
      local_118 = 0x400;
      local_170[0] = 5;
      local_114 = 0x800;
      local_168 = 6;
      local_110 = 0x1000;
      local_167 = 7;
      local_10c = 0x2000;
      local_166[0] = 8;
      local_144[0] = 0x4000;
      TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
      ::
      TMap<enum_EConstantQFFTSizeEnum,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQFFTSizeEnum,int,0>_>
                (&`BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap,
                 (initializer_list<TPairInitializer<EConstantQFFTSizeEnum_const_&,int_const_&>_> *)
                 &local_138);
      atexit(``anonymous_namespace'::BPConstantQFFTSizeEnumToInt'::__l2::
             _dynamic_atexit_destructor_for__FFTSizeMap__);
      _Init_thread_footer(&`BPConstantQFFTSizeEnumToInt'::`2'::_TSS0);
    }
  }
  local_144[0] = 0x800;
  iVar5 = ::`anonymous_namespace'::ConvertType<enum_EConstantQFFTSizeEnum,int>
                    (&`BPConstantQFFTSizeEnumToInt'::`2'::FFTSizeMap,local_178,local_144);
  *(int *)((longlong)IVar6 + 0x1c) = iVar5;
  local_150[0] = this->WindowType;
  if (*(int *)(lVar1 + 0x9d4c) < `BPWindowTypeToAudioWindowType'::`2'::_TSS0) {
    _Init_thread_header(&`BPWindowTypeToAudioWindowType'::`2'::_TSS0);
    if (`BPWindowTypeToAudioWindowType'::`2'::_TSS0 == -1) {
      local_108.Key = local_178;
      local_178[0] = MagnitudeSpectrum;
      local_108.Value = local_166;
      local_166[0] = EqualAmplitude;
      local_f8 = &local_167;
      local_167 = 1;
      local_f0 = &local_168;
      local_e8.Key = local_170;
      local_e8.Value = local_158;
      local_d8.Key = local_160;
      local_d8.Value = &local_148;
      local_138._First = &local_108;
      local_138._Last = &local_c8;
      local_168 = 1;
      local_170[0] = EqualAmplitude;
      local_158[0] = EqualEnergy;
      local_160[0] = EqualAmplitude|EqualEnergy;
      local_148 = EqualEnergy|EqualEuclideanNorm;
      TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
      ::
      TMap<enum_EFFTWindowType,enum_Audio::EWindowType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EFFTWindowType,enum_Audio::EWindowType,0>_>
                (&`BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap,
                 (initializer_list<TPairInitializer<EFFTWindowType_const_&,Audio::EWindowType_const_&>_>
                  *)&local_138);
      atexit(``anonymous_namespace'::BPWindowTypeToAudioWindowType'::__l2::
             _dynamic_atexit_destructor_for__WindowTypeMap__);
      _Init_thread_footer(&`BPWindowTypeToAudioWindowType'::`2'::_TSS0);
    }
  }
  local_178[0] = MagnitudeSpectrum;
  EVar2 = ::`anonymous_namespace'::ConvertType<enum_EFFTWindowType,enum_Audio::EWindowType>
                    (&`BPWindowTypeToAudioWindowType'::`2'::WindowTypeMap,local_150,local_178);
  *(EWindowType *)((longlong)IVar6 + 0x20) = EVar2;
  local_170[0] = this->SpectrumType;
  if (*(int *)(lVar1 + 0x9d4c) < `BPSpectrumTypeToAudioSpectrumType'::`2'::_TSS0) {
    _Init_thread_header(&`BPSpectrumTypeToAudioSpectrumType'::`2'::_TSS0);
    if (`BPSpectrumTypeToAudioSpectrumType'::`2'::_TSS0 == -1) {
      local_108.Key = local_178;
      local_178[0] = MagnitudeSpectrum;
      local_108.Value = local_166;
      local_166[0] = EqualAmplitude;
      local_f8 = &local_167;
      local_167 = 1;
      local_f0 = &local_168;
      local_138._First = &local_108;
      local_138._Last = &local_e8;
      local_168 = 1;
      TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
      ::
      TMap<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EAudioSpectrumType,enum_Audio::ESpectrumType,0>_>
                (&`BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap,
                 (initializer_list<TPairInitializer<EAudioSpectrumType_const_&,Audio::ESpectrumType_const_&>_>
                  *)&local_138);
      atexit(``anonymous_namespace'::BPSpectrumTypeToAudioSpectrumType'::__l2::
             _dynamic_atexit_destructor_for__SpectrumTypeMap__);
      _Init_thread_footer(&`BPSpectrumTypeToAudioSpectrumType'::`2'::_TSS0);
    }
  }
  local_178[0] = PowerSpectrum;
  EVar3 = ::`anonymous_namespace'::ConvertType<enum_EAudioSpectrumType,enum_Audio::ESpectrumType>
                    (&`BPSpectrumTypeToAudioSpectrumType'::`2'::SpectrumTypeMap,local_170,local_178)
  ;
  *(ESpectrumType *)((longlong)IVar6 + 0x21) = EVar3;
  *(int *)((longlong)IVar6 + 8) = this->NumBands;
  *(float *)((longlong)IVar6 + 0xc) = this->NumBandsPerOctave;
  *(float *)((longlong)IVar6 + 0x10) = this->StartingFrequency;
  *(float *)((longlong)IVar6 + 0x14) = this->BandWidthStretch;
  local_160[0] = this->CQTNormalization;
  if (*(int *)(lVar1 + 0x9d4c) < `BPCQTNormalizationToAudioCQTNormalization'::`2'::_TSS0) {
    _Init_thread_header(&`BPCQTNormalizationToAudioCQTNormalization'::`2'::_TSS0);
    if (`BPCQTNormalizationToAudioCQTNormalization'::`2'::_TSS0 == -1) {
      local_108.Key = local_178;
      local_178[0] = 2;
      local_108.Value = local_166;
      local_166[0] = EqualAmplitude;
      local_f8 = &local_167;
      local_167 = 0;
      local_f0 = &local_168;
      local_e8.Key = local_170;
      local_e8.Value = local_158;
      local_138._First = &local_108;
      local_138._Last = &local_d8;
      local_168 = 1;
      local_170[0] = EqualEnergy;
      local_158[0] = EqualEnergy;
      TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
      ::
      TMap<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization,0>_>
                (&`BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap,&local_138);
      atexit(``anonymous_namespace'::BPCQTNormalizationToAudioCQTNormalization'::__l2::
             _dynamic_atexit_destructor_for__NormalizationMap__);
      _Init_thread_footer(&`BPCQTNormalizationToAudioCQTNormalization'::`2'::_TSS0);
    }
  }
  local_178[0] = 2;
  EVar4 = ::`anonymous_namespace'::
          ConvertType<enum_EConstantQNormalizationEnum,enum_Audio::EPseudoConstantQNormalization>
                    (&`BPCQTNormalizationToAudioCQTNormalization'::`2'::NormalizationMap,local_160,
                     local_178);
  *(EPseudoConstantQNormalization *)((longlong)IVar6 + 0x18) = EVar4;
  *(undefined1 *)((longlong)IVar6 + 0x22) = 1;
  *in_RDX = IVar6;
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesUConstantQNRTSettings @ 14d827280

void __cdecl UConstantQNRTSettings::StaticRegisterNativesUConstantQNRTSettings(void)

{
  return;
}

