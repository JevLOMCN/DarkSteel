// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// StaticStruct @ 14f09f3d0

UScriptStruct * __cdecl FSubmixEffectConvolutionReverbSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings,
                         (UObject *)pUVar1,L"SubmixEffectConvolutionReverbSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectConvolutionReverbSettings.OuterSingleton;
}

// FSubmixEffectConvolutionReverbSettings @ 14f0b88a0

FSubmixEffectConvolutionReverbSettings * __thiscall
FSubmixEffectConvolutionReverbSettings::FSubmixEffectConvolutionReverbSettings
          (FSubmixEffectConvolutionReverbSettings *this)

{
  this->NormalizationVolumeDb = -24.0;
  this->WetVolumeDb = 0.0;
  this->bInvertRearChannelBleedPhase = false;
  this->bSurroundRearChannelFlip = false;
  this->SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  (this->ImpulseResponse_DEPRECATED).field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  this->DryVolumeDb = -96.0;
  this->bBypass = false;
  this->bMixInputChannelFormatToImpulseResponseFormat = true;
  this->bMixReverbOutputToOutputChannelFormat = true;
  this->SurroundRearChannelBleedDb = -60.0;
  this->AllowHardwareAcceleration_DEPRECATED = true;
  return this;
}

// operator= @ 14f0c1410

FSubmixEffectConvolutionReverbSettings * __thiscall
FSubmixEffectConvolutionReverbSettings::operator=
          (FSubmixEffectConvolutionReverbSettings *this,
          FSubmixEffectConvolutionReverbSettings *param_1)

{
  UAudioImpulseResponse *pUVar1;
  
  this->NormalizationVolumeDb = param_1->NormalizationVolumeDb;
  this->WetVolumeDb = param_1->WetVolumeDb;
  this->DryVolumeDb = param_1->DryVolumeDb;
  this->bBypass = param_1->bBypass;
  this->bMixInputChannelFormatToImpulseResponseFormat =
       param_1->bMixInputChannelFormatToImpulseResponseFormat;
  this->bMixReverbOutputToOutputChannelFormat = param_1->bMixReverbOutputToOutputChannelFormat;
  this->SurroundRearChannelBleedDb = param_1->SurroundRearChannelBleedDb;
  this->bInvertRearChannelBleedPhase = param_1->bInvertRearChannelBleedPhase;
  this->bSurroundRearChannelFlip = param_1->bSurroundRearChannelFlip;
  this->SurroundRearChannelBleedAmount_DEPRECATED =
       param_1->SurroundRearChannelBleedAmount_DEPRECATED;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ImpulseResponse_DEPRECATED).field0_0x0.DebugPtr,
     pUVar1 != (UAudioImpulseResponse *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ImpulseResponse_DEPRECATED).field0_0x0 = (param_1->ImpulseResponse_DEPRECATED).field0_0x0;
  this->AllowHardwareAcceleration_DEPRECATED = param_1->AllowHardwareAcceleration_DEPRECATED;
  return this;
}

