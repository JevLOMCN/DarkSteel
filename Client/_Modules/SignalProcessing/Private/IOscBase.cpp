// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 21

// IOscBase @ 1444f3100

IOscBase * __thiscall Audio::IOscBase::IOscBase(IOscBase *this,IOscBase *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7IOscBase_Audio__6B_;
  this->VoiceId = param_1->VoiceId;
  this->SampleRate = param_1->SampleRate;
  this->Nyquist = param_1->Nyquist;
  this->Freq = param_1->Freq;
  this->BaseFreq = param_1->BaseFreq;
  fVar1 = (param_1->FreqData).ExternalMod;
  fVar2 = (param_1->FreqData).Mod;
  fVar3 = (param_1->FreqData).Detune;
  (this->FreqData).Scale = (param_1->FreqData).Scale;
  (this->FreqData).ExternalMod = fVar1;
  (this->FreqData).Mod = fVar2;
  (this->FreqData).Detune = fVar3;
  fVar1 = (param_1->FreqData).Octave;
  fVar2 = (param_1->FreqData).Semitones;
  fVar3 = (param_1->FreqData).Cents;
  (this->FreqData).PitchBend = (param_1->FreqData).PitchBend;
  (this->FreqData).Octave = fVar1;
  (this->FreqData).Semitones = fVar2;
  (this->FreqData).Cents = fVar3;
  this->Gain = param_1->Gain;
  this->ExternalGainMod = param_1->ExternalGainMod;
  this->Phase = param_1->Phase;
  this->PhaseInc = param_1->PhaseInc;
  this->PulseWidthBase = param_1->PulseWidthBase;
  this->PulseWidthMod = param_1->PulseWidthMod;
  this->PulseWidth = param_1->PulseWidth;
  this->ModMatrix = param_1->ModMatrix;
  (this->ModFrequencyDest).Id = (param_1->ModFrequencyDest).Id;
  (this->ModFrequencyDest).Stage = (param_1->ModFrequencyDest).Stage;
  (this->ModFrequencyDest).Depth = (param_1->ModFrequencyDest).Depth;
  ::FString::FString(&(this->ModFrequencyDest).Name,&(param_1->ModFrequencyDest).Name);
  (this->ModPulseWidthDest).Id = (param_1->ModPulseWidthDest).Id;
  (this->ModPulseWidthDest).Stage = (param_1->ModPulseWidthDest).Stage;
  (this->ModPulseWidthDest).Depth = (param_1->ModPulseWidthDest).Depth;
  ::FString::FString(&(this->ModPulseWidthDest).Name,&(param_1->ModPulseWidthDest).Name);
  (this->ModGainDest).Id = (param_1->ModGainDest).Id;
  (this->ModGainDest).Stage = (param_1->ModGainDest).Stage;
  (this->ModGainDest).Depth = (param_1->ModGainDest).Depth;
  ::FString::FString(&(this->ModGainDest).Name,&(param_1->ModGainDest).Name);
  (this->ModScaleDest).Id = (param_1->ModScaleDest).Id;
  (this->ModScaleDest).Stage = (param_1->ModScaleDest).Stage;
  (this->ModScaleDest).Depth = (param_1->ModScaleDest).Depth;
  ::FString::FString(&(this->ModScaleDest).Name,&(param_1->ModScaleDest).Name);
  (this->ModAddDest).Id = (param_1->ModAddDest).Id;
  (this->ModAddDest).Stage = (param_1->ModAddDest).Stage;
  (this->ModAddDest).Depth = (param_1->ModAddDest).Depth;
  ::FString::FString(&(this->ModAddDest).Name,&(param_1->ModAddDest).Name);
  this->FollowerOsc = param_1->FollowerOsc;
  this->bIsPlaying = param_1->bIsPlaying;
  this->bChanged = param_1->bChanged;
  this->bIsSync = param_1->bIsSync;
  return this;
}

// IOscBase @ 1444f32c0

IOscBase * __thiscall Audio::IOscBase::IOscBase(IOscBase *this)

{
  this->SampleRate = 44100.0;
  this->_padding_ = (longlong)&___7IOscBase_Audio__6B_;
  this->VoiceId = 0;
  (this->FreqData).Mod = 0.0;
  (this->FreqData).Detune = 0.0;
  (this->FreqData).PitchBend = 0.0;
  (this->FreqData).Octave = 0.0;
  (this->FreqData).Semitones = 0.0;
  (this->FreqData).Cents = 0.0;
  this->PhaseInc = 0.0;
  this->PulseWidth = 0.0;
  this->ModMatrix = (FModulationMatrix *)0x0;
  (this->ModFrequencyDest).Depth = 0.0;
  (this->ModFrequencyDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModFrequencyDest).Name.Data.ArrayNum = 0;
  (this->ModFrequencyDest).Name.Data.ArrayMax = 0;
  (this->ModPulseWidthDest).Depth = 0.0;
  (this->ModPulseWidthDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModPulseWidthDest).Name.Data.ArrayNum = 0;
  (this->ModPulseWidthDest).Name.Data.ArrayMax = 0;
  (this->ModGainDest).Depth = 0.0;
  (this->ModGainDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModGainDest).Name.Data.ArrayNum = 0;
  (this->ModGainDest).Name.Data.ArrayMax = 0;
  (this->ModScaleDest).Depth = 0.0;
  (this->ModScaleDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModScaleDest).Name.Data.ArrayNum = 0;
  (this->ModScaleDest).Name.Data.ArrayMax = 0;
  (this->ModAddDest).Depth = 0.0;
  (this->ModAddDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModAddDest).Name.Data.ArrayNum = 0;
  (this->ModAddDest).Name.Data.ArrayMax = 0;
  this->FollowerOsc = (IOscBase *)0x0;
  this->bIsPlaying = false;
  this->bChanged = false;
  this->Nyquist = 22050.0;
  this->Freq = 440.0;
  this->BaseFreq = 1.0;
  (this->FreqData).Scale = 1.0;
  (this->FreqData).ExternalMod = 0.0;
  this->Gain = 1.0;
  this->ExternalGainMod = 1.0;
  this->Phase = 0.0;
  this->PulseWidthBase = 0.5;
  this->PulseWidthMod = 0.0;
  (this->ModFrequencyDest).Id = 0xffffffff;
  (this->ModFrequencyDest).Stage = -1;
  (this->ModPulseWidthDest).Id = 0xffffffff;
  (this->ModPulseWidthDest).Stage = -1;
  (this->ModGainDest).Id = 0xffffffff;
  (this->ModGainDest).Stage = -1;
  (this->ModScaleDest).Id = 0xffffffff;
  (this->ModScaleDest).Stage = -1;
  (this->ModAddDest).Id = 0xffffffff;
  (this->ModAddDest).Stage = -1;
  return this;
}

// ~IOscBase @ 1444f49f0

void __thiscall Audio::IOscBase::~IOscBase(IOscBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IOscBase_Audio__6B_;
  pFVar1 = (this->ModAddDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModScaleDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModGainDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModPulseWidthDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModFrequencyDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 144508120

void __thiscall
Audio::IOscBase::Init
          (IOscBase *this,float param_1,int param_2,FModulationMatrix *param_3,int param_4)

{
  float fVar1;
  FPatchDestination *pFVar2;
  int *piVar3;
  float fVar4;
  FPatchDestination local_68 [2];
  
  this->VoiceId = param_2;
  if (param_1 != this->SampleRate) {
    this->SampleRate = param_1;
    fVar4 = param_1 * __real_3f000000;
    this->bChanged = true;
    this->Nyquist = fVar4;
  }
  this->ModMatrix = param_3;
  this->bChanged = true;
  fVar4 = __real_42480000;
  if (param_3 != (FModulationMatrix *)0x0) {
    pFVar2 = FModulationMatrix::CreatePatchDestination
                       (param_3,local_68,param_2,param_4,__real_42480000);
    FPatchDestination::operator=(&this->ModFrequencyDest,pFVar2);
    if (local_68[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Name.Data.AllocatorInstance.Data);
    }
    fVar1 = __real_3f800000;
    piVar3 = &this->VoiceId;
    pFVar2 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,local_68,this->VoiceId,param_4,__real_3f800000);
    FPatchDestination::operator=(&this->ModPulseWidthDest,pFVar2);
    if (local_68[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Name.Data.AllocatorInstance.Data);
    }
    pFVar2 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,local_68,*piVar3,param_4,fVar1);
    FPatchDestination::operator=(&this->ModGainDest,pFVar2);
    if (local_68[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Name.Data.AllocatorInstance.Data);
    }
    pFVar2 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,local_68,*piVar3,param_4,fVar4);
    FPatchDestination::operator=(&this->ModAddDest,pFVar2);
    if (local_68[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Name.Data.AllocatorInstance.Data);
    }
    pFVar2 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,local_68,*piVar3,param_4,fVar1);
    FPatchDestination::operator=(&this->ModScaleDest,pFVar2);
    if (local_68[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Name.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&(this->ModFrequencyDest).Name,L"ModFrequencyDest");
    ::FString::operator=(&(this->ModPulseWidthDest).Name,L"ModPulseWidthDest");
    ::FString::operator=(&(this->ModGainDest).Name,L"ModGainDest");
    ::FString::operator=(&(this->ModAddDest).Name,L"ModAddDest");
    ::FString::operator=(&(this->ModScaleDest).Name,L"ModScaleDest");
  }
  return;
}

// Reset @ 144517c20

void __thiscall Audio::IOscBase::Reset(IOscBase *this)

{
  this->ExternalGainMod = 1.0;
  this->Phase = 0.0;
  this->PulseWidthMod = 0.0;
  (this->FreqData).Detune = 0.0;
  (this->FreqData).PitchBend = 0.0;
  (this->FreqData).ExternalMod = 0.0;
  (this->FreqData).Mod = 0.0;
  this->bChanged = true;
  return;
}

// ResetPhase @ 144518310

void __thiscall Audio::IOscBase::ResetPhase(IOscBase *this)

{
  this->Phase = 0.0;
  return;
}

// SetCents @ 144518fd0

void __thiscall Audio::IOscBase::SetCents(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).Cents) {
    (this->FreqData).Cents = param_1;
    this->bChanged = true;
  }
  return;
}

// SetDetune @ 144519e50

void __thiscall Audio::IOscBase::SetDetune(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).Detune) {
    (this->FreqData).Detune = param_1;
    this->bChanged = true;
  }
  return;
}

// SetFollowerOsc @ 144519f50

void __thiscall Audio::IOscBase::SetFollowerOsc(IOscBase *this,IOscBase *param_1)

{
  this->FollowerOsc = param_1;
  return;
}

// SetFreqScale @ 14451a1b0

void __thiscall Audio::IOscBase::SetFreqScale(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).Scale) {
    (this->FreqData).Scale = param_1;
    this->bChanged = true;
  }
  return;
}

// SetFrequency @ 14451a340

void __thiscall Audio::IOscBase::SetFrequency(IOscBase *this,float param_1)

{
  if (param_1 != this->BaseFreq) {
    this->BaseFreq = param_1;
    this->bChanged = true;
  }
  return;
}

// SetFrequencyMod @ 14451a390

void __thiscall Audio::IOscBase::SetFrequencyMod(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).ExternalMod) {
    (this->FreqData).ExternalMod = param_1;
    this->bChanged = true;
  }
  return;
}

// SetNote @ 14451bcd0

void __thiscall Audio::IOscBase::SetNote(IOscBase *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,(param_1 - __real_428a0000) * __real_3daaaaab);
  if (fVar1 * __real_43dc0000 != this->BaseFreq) {
    this->BaseFreq = fVar1 * __real_43dc0000;
    this->bChanged = true;
  }
  return;
}

// SetOctave @ 14451c0f0

void __thiscall Audio::IOscBase::SetOctave(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).Octave) {
    (this->FreqData).Octave = param_1;
    this->bChanged = true;
  }
  return;
}

// SetPitchBend @ 14451c540

void __thiscall Audio::IOscBase::SetPitchBend(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).PitchBend) {
    (this->FreqData).PitchBend = param_1;
    this->bChanged = true;
  }
  return;
}

// SetPulseWidth @ 14451c6e0

void __thiscall Audio::IOscBase::SetPulseWidth(IOscBase *this,float param_1)

{
  if (param_1 != this->PulseWidthBase) {
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    this->bChanged = true;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->PulseWidthBase = param_1;
  }
  return;
}

// SetSampleRate @ 14451c770

void __thiscall Audio::IOscBase::SetSampleRate(IOscBase *this,float param_1)

{
  float fVar1;
  
  if (param_1 != this->SampleRate) {
    this->SampleRate = param_1;
    fVar1 = param_1 * __real_3f000000;
    this->bChanged = true;
    this->Nyquist = fVar1;
  }
  return;
}

// SetSemitones @ 14451c860

void __thiscall Audio::IOscBase::SetSemitones(IOscBase *this,float param_1)

{
  if (param_1 != (this->FreqData).Semitones) {
    (this->FreqData).Semitones = param_1;
    this->bChanged = true;
  }
  return;
}

// SetSlaveOsc @ 14451cdd0

void __thiscall Audio::IOscBase::SetSlaveOsc(IOscBase *this,IOscBase *param_1)

{
  this->FollowerOsc = param_1;
  return;
}

// Update @ 14451fe50

void __thiscall Audio::IOscBase::Update(IOscBase *this)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (this->ModMatrix != (FModulationMatrix *)0x0) {
    bVar2 = this->bChanged;
    bVar1 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->ModFrequencyDest,&(this->FreqData).Mod);
    bVar1 = (bool)(bVar1 | bVar2);
    this->bChanged = bVar1;
    bVar2 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->ModPulseWidthDest,&this->PulseWidthMod);
    this->bChanged = (bool)(bVar2 | bVar1);
  }
  if (this->bChanged != false) {
    fVar3 = (this->FreqData).Octave * __real_41400000;
    this->bChanged = false;
    fVar4 = (this->FreqData).Cents * __real_3c23d70a + (this->FreqData).Semitones +
            fVar3 + (this->FreqData).PitchBend +
            (this->FreqData).Detune + (this->FreqData).ExternalMod + (this->FreqData).Mod;
    fVar3 = this->PulseWidthBase + this->PulseWidthMod;
    if (__real_3f7ae148 <= fVar3) {
      fVar3 = __real_3f7ae148;
    }
    if (fVar3 <= __real_3ca3d70a) {
      fVar3 = __real_3ca3d70a;
    }
    this->PulseWidth = fVar3;
    fVar3 = __real_3f800000;
    if (fVar4 != 0.0) {
      fVar3 = powf(__real_40000000,fVar4 * __real_3daaaaab);
    }
    fVar4 = this->Nyquist;
    fVar3 = (this->FreqData).Scale * this->BaseFreq * fVar3;
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    if (fVar3 <= (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000)) {
      fVar3 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    }
    this->Freq = fVar3;
    this->PhaseInc = fVar3 / this->SampleRate;
  }
  return;
}

// WrapPhase @ 144520c30

bool __thiscall Audio::IOscBase::WrapPhase(IOscBase *this)

{
  IOscBase *pIVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f800000;
  if ((this->PhaseInc <= 0.0) || (this->Phase < __real_3f800000)) {
    if ((0.0 <= this->PhaseInc) || (0.0 < this->Phase)) {
      return false;
    }
    fVar3 = FGenericPlatformMath::Fmod(this->Phase,__real_3f800000);
    fVar3 = fVar3 + fVar2;
  }
  else {
    fVar3 = FGenericPlatformMath::Fmod(this->Phase,__real_3f800000);
  }
  this->Phase = fVar3;
  pIVar1 = this->FollowerOsc;
  if ((pIVar1 != (IOscBase *)0x0) && (pIVar1->bIsSync != false)) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  return true;
}

