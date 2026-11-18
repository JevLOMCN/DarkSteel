// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 4

// StaticStruct @ 14f0a6760

UScriptStruct * __cdecl FModularSynthPreset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularSynthPreset.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FModularSynthPreset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularSynthPreset,(UObject *)pUVar1,
                         L"ModularSynthPreset");
  }
  return Z_Registration_Info_UScriptStruct_FModularSynthPreset.OuterSingleton;
}

// FModularSynthPreset @ 14f0b6f90

FModularSynthPreset * __thiscall
FModularSynthPreset::FModularSynthPreset(FModularSynthPreset *this,FModularSynthPreset *param_1)

{
  int *piVar1;
  TArray<FEpicSynth1Patch,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FEpicSynth1Patch *pFVar4;
  uint uVar5;
  
  this->_padding_ = (longlong)&___7FModularSynthPreset__6B_;
  *(uint *)&this->field_0x8 =
       *(uint *)&this->field_0x8 ^ (this->bEnablePolyphony ^ param_1->bEnablePolyphony) & 1;
  this->Osc1Type = param_1->Osc1Type;
  this->Osc1Gain = param_1->Osc1Gain;
  this->Osc1Octave = param_1->Osc1Octave;
  this->Osc1Semitones = param_1->Osc1Semitones;
  this->Osc1Cents = param_1->Osc1Cents;
  this->Osc1PulseWidth = param_1->Osc1PulseWidth;
  this->Osc2Type = param_1->Osc2Type;
  this->Osc2Gain = param_1->Osc2Gain;
  this->Osc2Octave = param_1->Osc2Octave;
  this->Osc2Semitones = param_1->Osc2Semitones;
  this->Osc2Cents = param_1->Osc2Cents;
  this->Osc2PulseWidth = param_1->Osc2PulseWidth;
  this->Portamento = param_1->Portamento;
  uVar5 = (this->bEnableUnison ^ param_1->bEnableUnison) & 1 ^ *(uint *)&this->field_0x40;
  *(uint *)&this->field_0x40 = uVar5;
  *(uint *)&this->field_0x40 = (uVar5 ^ *(uint *)&param_1->field_0x40) & 2 ^ uVar5;
  this->Spread = param_1->Spread;
  this->Pan = param_1->Pan;
  this->LFO1Frequency = param_1->LFO1Frequency;
  this->LFO1Gain = param_1->LFO1Gain;
  this->LFO1Type = param_1->LFO1Type;
  this->LFO1Mode = param_1->LFO1Mode;
  this->LFO1PatchType = param_1->LFO1PatchType;
  this->LFO2Frequency = param_1->LFO2Frequency;
  this->LFO2Gain = param_1->LFO2Gain;
  this->LFO2Type = param_1->LFO2Type;
  this->LFO2Mode = param_1->LFO2Mode;
  this->LFO2PatchType = param_1->LFO2PatchType;
  this->GainDb = param_1->GainDb;
  this->AttackTime = param_1->AttackTime;
  this->DecayTime = param_1->DecayTime;
  this->SustainGain = param_1->SustainGain;
  this->ReleaseTime = param_1->ReleaseTime;
  this->ModEnvPatchType = param_1->ModEnvPatchType;
  this->ModEnvBiasPatchType = param_1->ModEnvBiasPatchType;
  pTVar2 = &this->Patches;
  uVar5 = (this->bInvertModulationEnvelope ^ param_1->bInvertModulationEnvelope) & 1 ^
          *(uint *)&this->field_0x7c;
  *(uint *)&this->field_0x7c = uVar5;
  *(uint *)&this->field_0x7c = (uVar5 ^ *(uint *)&param_1->field_0x7c) & 2 ^ uVar5;
  this->ModulationEnvelopeDepth = param_1->ModulationEnvelopeDepth;
  this->ModulationEnvelopeAttackTime = param_1->ModulationEnvelopeAttackTime;
  this->ModulationEnvelopeDecayTime = param_1->ModulationEnvelopeDecayTime;
  this->ModulationEnvelopeSustainGain = param_1->ModulationEnvelopeSustainGain;
  this->ModulationEnvelopeReleaseTime = param_1->ModulationEnvelopeReleaseTime;
  uVar5 = (ZPULL(*(undefined4 *)&this->field_0x94,0,1) ^ param_1->bLegato) & 1 ^
          *(undefined4 *)&this->field_0x94;
  *(uint *)&this->field_0x94 = uVar5;
  *(uint *)&this->field_0x94 = (uVar5 ^ *(uint *)&param_1->field_0x94) & 2 ^ uVar5;
  this->FilterFrequency = param_1->FilterFrequency;
  this->FilterQ = param_1->FilterQ;
  this->FilterType = param_1->FilterType;
  this->FilterAlgorithm = param_1->FilterAlgorithm;
  *(uint *)&this->field_0xa4 =
       (ZPULL(*(undefined4 *)&this->field_0xa4,0,1) ^ param_1->bStereoDelayEnabled) & 1 ^
       *(undefined4 *)&this->field_0xa4;
  this->StereoDelayMode = param_1->StereoDelayMode;
  this->StereoDelayTime = param_1->StereoDelayTime;
  this->StereoDelayFeedback = param_1->StereoDelayFeedback;
  this->StereoDelayWetlevel = param_1->StereoDelayWetlevel;
  this->StereoDelayRatio = param_1->StereoDelayRatio;
  *(uint *)&this->field_0xbc =
       (ZPULL(*(undefined4 *)&this->field_0xbc,0,1) ^ param_1->bChorusEnabled) & 1 ^
       *(undefined4 *)&this->field_0xbc;
  this->ChorusDepth = param_1->ChorusDepth;
  this->ChorusFeedback = param_1->ChorusFeedback;
  this->ChorusFrequency = param_1->ChorusFrequency;
  piVar1 = &(this->Patches).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Patches).ArrayNum;
  pFVar4 = (FEpicSynth1Patch *)(param_1->Patches).AllocatorInstance.Data;
  (this->Patches).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FEpicSynth1Patch,FEpicSynth1Patch,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// FModularSynthPreset @ 14f0b7270

FModularSynthPreset * __thiscall FModularSynthPreset::FModularSynthPreset(FModularSynthPreset *this)

{
  undefined1 *puVar1;
  
  this->bEnablePolyphony = 0;
  this->bEnableUnison = 0;
  this->bEnableOscillatorSync = 0;
  this->bInvertModulationEnvelope = 0;
  this->bInvertModulationEnvelopeBias = 0;
  this->bStereoDelayEnabled = 1;
  this->bChorusEnabled = 0;
  this->_padding_ = (longlong)&___7FModularSynthPreset__6B_;
  this->Osc1Type = Saw;
  this->Osc1Gain = 1.0;
  this->Osc1Octave = 0.0;
  this->bLegato = 1;
  this->bRetrigger = 0;
  this->Osc1Semitones = 0.0;
  this->Osc1Cents = 0.0;
  this->Osc1PulseWidth = 0.5;
  this->Osc2Type = Saw;
  this->Osc2Gain = 1.0;
  this->Osc2Octave = 0.0;
  this->Osc2Semitones = 0.0;
  this->Osc2Cents = 2.5;
  this->Osc2PulseWidth = 0.5;
  this->Portamento = 0.0;
  this->Spread = 0.5;
  this->Pan = 0.0;
  this->LFO1Frequency = 1.0;
  this->LFO1Gain = 0.0;
  this->LFO1Type = Sine;
  this->LFO1Mode = Sync;
  this->LFO1PatchType = PatchToNone;
  this->LFO2Frequency = 1.0;
  this->LFO2Gain = 0.0;
  this->LFO2Type = Sine;
  this->LFO2Mode = Sync;
  this->LFO2PatchType = PatchToNone;
  this->GainDb = -3.0;
  this->AttackTime = 10.0;
  this->DecayTime = 100.0;
  this->SustainGain = 0.707;
  this->ReleaseTime = 5000.0;
  this->ModEnvPatchType = PatchToNone;
  this->ModEnvBiasPatchType = PatchToNone;
  this->ModulationEnvelopeDepth = 1.0;
  this->ModulationEnvelopeAttackTime = 10.0;
  this->ModulationEnvelopeDecayTime = 100.0;
  this->ModulationEnvelopeSustainGain = 0.707;
  this->ModulationEnvelopeReleaseTime = 5000.0;
  this->FilterFrequency = 8000.0;
  this->FilterQ = 2.0;
  this->FilterType = LowPass;
  this->FilterAlgorithm = Ladder;
  this->StereoDelayMode = PingPong;
  this->StereoDelayTime = 700.0;
  this->StereoDelayFeedback = 0.7;
  this->StereoDelayWetlevel = 0.3;
  this->StereoDelayRatio = 0.2;
  this->ChorusDepth = 0.2;
  this->ChorusFeedback = 0.5;
  this->ChorusFrequency = 2.0;
  (this->Patches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Patches).ArrayNum = 0;
  (this->Patches).ArrayMax = 0;
  return this;
}

// operator= @ 14f0c0ee0

FModularSynthPreset * __thiscall
FModularSynthPreset::operator=(FModularSynthPreset *this,FModularSynthPreset *param_1)

{
  int *piVar1;
  TArray<FEpicSynth1Patch,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FEpicSynth1Patch *pFVar4;
  uint uVar5;
  
  *(uint *)&this->field_0x8 =
       *(uint *)&this->field_0x8 ^ (this->bEnablePolyphony ^ param_1->bEnablePolyphony) & 1;
  this->Osc1Type = param_1->Osc1Type;
  this->Osc1Gain = param_1->Osc1Gain;
  this->Osc1Octave = param_1->Osc1Octave;
  this->Osc1Semitones = param_1->Osc1Semitones;
  this->Osc1Cents = param_1->Osc1Cents;
  this->Osc1PulseWidth = param_1->Osc1PulseWidth;
  this->Osc2Type = param_1->Osc2Type;
  this->Osc2Gain = param_1->Osc2Gain;
  this->Osc2Octave = param_1->Osc2Octave;
  this->Osc2Semitones = param_1->Osc2Semitones;
  this->Osc2Cents = param_1->Osc2Cents;
  this->Osc2PulseWidth = param_1->Osc2PulseWidth;
  this->Portamento = param_1->Portamento;
  uVar5 = (this->bEnableUnison ^ param_1->bEnableUnison) & 1 ^ *(uint *)&this->field_0x40;
  *(uint *)&this->field_0x40 = uVar5;
  *(uint *)&this->field_0x40 = (uVar5 ^ *(uint *)&param_1->field_0x40) & 2 ^ uVar5;
  this->Spread = param_1->Spread;
  this->Pan = param_1->Pan;
  this->LFO1Frequency = param_1->LFO1Frequency;
  this->LFO1Gain = param_1->LFO1Gain;
  this->LFO1Type = param_1->LFO1Type;
  this->LFO1Mode = param_1->LFO1Mode;
  this->LFO1PatchType = param_1->LFO1PatchType;
  this->LFO2Frequency = param_1->LFO2Frequency;
  this->LFO2Gain = param_1->LFO2Gain;
  this->LFO2Type = param_1->LFO2Type;
  this->LFO2Mode = param_1->LFO2Mode;
  this->LFO2PatchType = param_1->LFO2PatchType;
  this->GainDb = param_1->GainDb;
  this->AttackTime = param_1->AttackTime;
  this->DecayTime = param_1->DecayTime;
  this->SustainGain = param_1->SustainGain;
  this->ReleaseTime = param_1->ReleaseTime;
  this->ModEnvPatchType = param_1->ModEnvPatchType;
  this->ModEnvBiasPatchType = param_1->ModEnvBiasPatchType;
  uVar5 = (this->bInvertModulationEnvelope ^ param_1->bInvertModulationEnvelope) & 1 ^
          *(uint *)&this->field_0x7c;
  pTVar2 = &this->Patches;
  *(uint *)&this->field_0x7c = uVar5;
  *(uint *)&this->field_0x7c = (uVar5 ^ *(uint *)&param_1->field_0x7c) & 2 ^ uVar5;
  this->ModulationEnvelopeDepth = param_1->ModulationEnvelopeDepth;
  this->ModulationEnvelopeAttackTime = param_1->ModulationEnvelopeAttackTime;
  this->ModulationEnvelopeDecayTime = param_1->ModulationEnvelopeDecayTime;
  this->ModulationEnvelopeSustainGain = param_1->ModulationEnvelopeSustainGain;
  this->ModulationEnvelopeReleaseTime = param_1->ModulationEnvelopeReleaseTime;
  uVar5 = (ZPULL(*(undefined4 *)&this->field_0x94,0,1) ^ param_1->bLegato) & 1 ^
          *(undefined4 *)&this->field_0x94;
  *(uint *)&this->field_0x94 = uVar5;
  *(uint *)&this->field_0x94 = (uVar5 ^ *(uint *)&param_1->field_0x94) & 2 ^ uVar5;
  this->FilterFrequency = param_1->FilterFrequency;
  this->FilterQ = param_1->FilterQ;
  this->FilterType = param_1->FilterType;
  this->FilterAlgorithm = param_1->FilterAlgorithm;
  *(uint *)&this->field_0xa4 =
       (ZPULL(*(undefined4 *)&this->field_0xa4,0,1) ^ param_1->bStereoDelayEnabled) & 1 ^
       *(undefined4 *)&this->field_0xa4;
  this->StereoDelayMode = param_1->StereoDelayMode;
  this->StereoDelayTime = param_1->StereoDelayTime;
  this->StereoDelayFeedback = param_1->StereoDelayFeedback;
  this->StereoDelayWetlevel = param_1->StereoDelayWetlevel;
  this->StereoDelayRatio = param_1->StereoDelayRatio;
  *(uint *)&this->field_0xbc =
       (ZPULL(*(undefined4 *)&this->field_0xbc,0,1) ^ param_1->bChorusEnabled) & 1 ^
       *(undefined4 *)&this->field_0xbc;
  this->ChorusDepth = param_1->ChorusDepth;
  this->ChorusFeedback = param_1->ChorusFeedback;
  this->ChorusFrequency = param_1->ChorusFrequency;
  if (pTVar2 != &param_1->Patches) {
    DestructItems<FEpicSynth1Patch,int>
              ((FEpicSynth1Patch *)(pTVar2->AllocatorInstance).Data,(this->Patches).ArrayNum);
    iVar3 = (param_1->Patches).ArrayNum;
    piVar1 = &(this->Patches).ArrayMax;
    pFVar4 = (FEpicSynth1Patch *)(param_1->Patches).AllocatorInstance.Data;
    (this->Patches).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FEpicSynth1Patch,FEpicSynth1Patch,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

