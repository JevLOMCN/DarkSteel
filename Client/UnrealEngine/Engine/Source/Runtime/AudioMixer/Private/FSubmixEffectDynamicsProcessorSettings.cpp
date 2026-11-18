// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// StaticStruct @ 1465343f0

UScriptStruct * __cdecl FSubmixEffectDynamicsProcessorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings,
                         (UObject *)pUVar1,L"SubmixEffectDynamicsProcessorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicsProcessorSettings.OuterSingleton;
}

// FSubmixEffectDynamicsProcessorSettings @ 14653e390

FSubmixEffectDynamicsProcessorSettings * __thiscall
FSubmixEffectDynamicsProcessorSettings::FSubmixEffectDynamicsProcessorSettings
          (FSubmixEffectDynamicsProcessorSettings *this,
          FSubmixEffectDynamicsProcessorSettings *param_1)

{
  UAudioBus *pUVar1;
  USoundSubmix *pUVar2;
  float fVar3;
  byte bVar4;
  
  this->DynamicsProcessorType = param_1->DynamicsProcessorType;
  this->PeakMode = param_1->PeakMode;
  this->LinkMode = param_1->LinkMode;
  this->InputGainDb = param_1->InputGainDb;
  this->ThresholdDb = param_1->ThresholdDb;
  this->Ratio = param_1->Ratio;
  this->KneeBandwidthDb = param_1->KneeBandwidthDb;
  this->LookAheadMsec = param_1->LookAheadMsec;
  this->AttackTimeMsec = param_1->AttackTimeMsec;
  this->ReleaseTimeMsec = param_1->ReleaseTimeMsec;
  this->KeySource = param_1->KeySource;
  pUVar1 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr;
  (this->ExternalAudioBus).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->ExternalSubmix).field0_0x0.DebugPtr;
  (this->ExternalSubmix).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  bVar4 = (this->bChannelLinked_DEPRECATED ^ param_1->bChannelLinked_DEPRECATED) & 1 ^
          this->field_0x38;
  this->field_0x38 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x38) & 2 ^ bVar4;
  this->field_0x38 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x38) & 4 ^ bVar4;
  this->field_0x38 = bVar4;
  this->field_0x38 = (bVar4 ^ param_1->field_0x38) & 8 ^ bVar4;
  this->KeyGainDb = param_1->KeyGainDb;
  this->OutputGainDb = param_1->OutputGainDb;
  fVar3 = (param_1->KeyHighshelf).Cutoff;
  *(undefined4 *)&(this->KeyHighshelf).field_0x0 = *(undefined4 *)&(param_1->KeyHighshelf).field_0x0
  ;
  (this->KeyHighshelf).Cutoff = fVar3;
  (this->KeyHighshelf).GainDb = (param_1->KeyHighshelf).GainDb;
  fVar3 = (param_1->KeyLowshelf).Cutoff;
  *(undefined4 *)&(this->KeyLowshelf).field_0x0 = *(undefined4 *)&(param_1->KeyLowshelf).field_0x0;
  (this->KeyLowshelf).Cutoff = fVar3;
  (this->KeyLowshelf).GainDb = (param_1->KeyLowshelf).GainDb;
  return this;
}

// operator= @ 146542390

FSubmixEffectDynamicsProcessorSettings * __thiscall
FSubmixEffectDynamicsProcessorSettings::operator=
          (FSubmixEffectDynamicsProcessorSettings *this,
          FSubmixEffectDynamicsProcessorSettings *param_1)

{
  UAudioBus *pUVar1;
  USoundSubmix *pUVar2;
  float fVar3;
  byte bVar4;
  
  this->DynamicsProcessorType = param_1->DynamicsProcessorType;
  this->PeakMode = param_1->PeakMode;
  this->LinkMode = param_1->LinkMode;
  this->InputGainDb = param_1->InputGainDb;
  this->ThresholdDb = param_1->ThresholdDb;
  this->Ratio = param_1->Ratio;
  this->KneeBandwidthDb = param_1->KneeBandwidthDb;
  this->LookAheadMsec = param_1->LookAheadMsec;
  this->AttackTimeMsec = param_1->AttackTimeMsec;
  this->ReleaseTimeMsec = param_1->ReleaseTimeMsec;
  this->KeySource = param_1->KeySource;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr, pUVar1 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ExternalAudioBus).field0_0x0 = (param_1->ExternalAudioBus).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ExternalSubmix).field0_0x0.DebugPtr, pUVar2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ExternalSubmix).field0_0x0 = (param_1->ExternalSubmix).field0_0x0;
  bVar4 = (this->bChannelLinked_DEPRECATED ^ param_1->bChannelLinked_DEPRECATED) & 1 ^
          this->field_0x38;
  this->field_0x38 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x38) & 2 ^ bVar4;
  this->field_0x38 = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x38) & 4 ^ bVar4;
  this->field_0x38 = bVar4;
  this->field_0x38 = (bVar4 ^ param_1->field_0x38) & 8 ^ bVar4;
  this->KeyGainDb = param_1->KeyGainDb;
  this->OutputGainDb = param_1->OutputGainDb;
  fVar3 = (param_1->KeyHighshelf).Cutoff;
  *(undefined4 *)&(this->KeyHighshelf).field_0x0 = *(undefined4 *)&(param_1->KeyHighshelf).field_0x0
  ;
  (this->KeyHighshelf).Cutoff = fVar3;
  (this->KeyHighshelf).GainDb = (param_1->KeyHighshelf).GainDb;
  fVar3 = (param_1->KeyLowshelf).Cutoff;
  *(undefined4 *)&(this->KeyLowshelf).field_0x0 = *(undefined4 *)&(param_1->KeyLowshelf).field_0x0;
  (this->KeyLowshelf).Cutoff = fVar3;
  (this->KeyLowshelf).GainDb = (param_1->KeyLowshelf).GainDb;
  return this;
}

