// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// IFilter @ 1444a53c0

IFilter * __thiscall Audio::IFilter::IFilter(IFilter *this,IFilter *param_1)

{
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  this->VoiceId = param_1->VoiceId;
  this->SampleRate = param_1->SampleRate;
  this->NumChannels = param_1->NumChannels;
  this->Frequency = param_1->Frequency;
  this->BaseFrequency = param_1->BaseFrequency;
  this->ModFrequency = param_1->ModFrequency;
  this->ExternalModFrequency = param_1->ExternalModFrequency;
  this->Q = param_1->Q;
  this->ModQ = param_1->ModQ;
  this->BaseQ = param_1->BaseQ;
  this->ExternalModQ = param_1->ExternalModQ;
  this->FilterType = param_1->FilterType;
  this->ModMatrix = param_1->ModMatrix;
  (this->ModCutoffFrequencyDest).Id = (param_1->ModCutoffFrequencyDest).Id;
  (this->ModCutoffFrequencyDest).Stage = (param_1->ModCutoffFrequencyDest).Stage;
  (this->ModCutoffFrequencyDest).Depth = (param_1->ModCutoffFrequencyDest).Depth;
  ::FString::FString(&(this->ModCutoffFrequencyDest).Name,&(param_1->ModCutoffFrequencyDest).Name);
  (this->ModQDest).Id = (param_1->ModQDest).Id;
  (this->ModQDest).Stage = (param_1->ModQDest).Stage;
  (this->ModQDest).Depth = (param_1->ModQDest).Depth;
  ::FString::FString(&(this->ModQDest).Name,&(param_1->ModQDest).Name);
  this->bChanged = param_1->bChanged;
  return this;
}

// IFilter @ 1444a5490

IFilter * __thiscall Audio::IFilter::IFilter(IFilter *this)

{
  this->SampleRate = 44100.0;
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  this->VoiceId = 0;
  this->ExternalModFrequency = 0.0;
  this->FilterType = LowPass;
  this->ModMatrix = (FModulationMatrix *)0x0;
  (this->ModCutoffFrequencyDest).Depth = 0.0;
  (this->ModCutoffFrequencyDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModCutoffFrequencyDest).Name.Data.ArrayNum = 0;
  (this->ModCutoffFrequencyDest).Name.Data.ArrayMax = 0;
  (this->ModQDest).Depth = 0.0;
  (this->ModQDest).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModQDest).Name.Data.ArrayNum = 0;
  (this->ModQDest).Name.Data.ArrayMax = 0;
  this->bChanged = false;
  this->NumChannels = 1;
  this->Frequency = 18000.0;
  this->BaseFrequency = 18000.0;
  this->ModFrequency = 0.0;
  this->Q = 1.5;
  this->ModQ = 0.0;
  this->BaseQ = 1.5;
  this->ExternalModQ = 0.0;
  (this->ModCutoffFrequencyDest).Id = 0xffffffff;
  (this->ModCutoffFrequencyDest).Stage = -1;
  (this->ModQDest).Id = 0xffffffff;
  (this->ModQDest).Stage = -1;
  return this;
}

// ~IFilter @ 1444a6950

void __thiscall Audio::IFilter::~IFilter(IFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  pFVar1 = (this->ModQDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModCutoffFrequencyDest).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 1444c3b50

void __thiscall
Audio::IFilter::Init(IFilter *this,float param_1,int param_2,int param_3,FModulationMatrix *param_4)

{
  FPatchDestination *pFVar1;
  FPatchDestination local_28;
  
  this->SampleRate = param_1;
  this->VoiceId = param_3;
  if (8 < param_2) {
    param_2 = 8;
  }
  this->NumChannels = param_2;
  this->ModMatrix = param_4;
  if (param_4 != (FModulationMatrix *)0x0) {
    pFVar1 = FModulationMatrix::CreatePatchDestination(param_4,&local_28,param_3,1,__real_42c80000);
    FPatchDestination::operator=(&this->ModCutoffFrequencyDest,pFVar1);
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    pFVar1 = FModulationMatrix::CreatePatchDestination
                       (this->ModMatrix,&local_28,this->VoiceId,1,__real_41200000);
    FPatchDestination::operator=(&this->ModQDest,pFVar1);
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&(this->ModCutoffFrequencyDest).Name,L"ModCutoffFrequencyDest");
    ::FString::operator=(&(this->ModQDest).Name,L"ModQDest");
  }
  return;
}

// ProcessAudioFrame @ 1444df300

void __thiscall Audio::IFilter::ProcessAudioFrame(IFilter *this,float *param_1,float *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001444df30a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x70))(this,param_1,this->NumChannels,param_2);
  return;
}

// Reset @ 1444e1b70

void __thiscall Audio::IFilter::Reset(IFilter *this)

{
  this->bChanged = true;
  this->ModQ = 0.0;
  this->ExternalModQ = 0.0;
  this->ModFrequency = 0.0;
  this->ExternalModFrequency = 0.0;
  return;
}

// SetBandStopControl @ 1444e2eb0

void __thiscall Audio::IFilter::SetBandStopControl(IFilter *this,float param_1)

{
  return;
}

// SetFilterType @ 1444e3a00

void __thiscall Audio::IFilter::SetFilterType(IFilter *this,Type param_1)

{
  this->FilterType = param_1;
  return;
}

// SetFrequency @ 1444e3b60

void __thiscall Audio::IFilter::SetFrequency(IFilter *this,float param_1)

{
  float fVar1;
  
  if (param_1 != this->BaseFrequency) {
    fVar1 = this->SampleRate * __real_3ee66666;
    this->bChanged = true;
    if (param_1 <= fVar1) {
      fVar1 = param_1;
    }
    if (fVar1 <= __real_41a00000) {
      fVar1 = __real_41a00000;
    }
    this->BaseFrequency = fVar1;
  }
  return;
}

// SetFrequencyMod @ 1444e3ba0

void __thiscall Audio::IFilter::SetFrequencyMod(IFilter *this,float param_1)

{
  if (param_1 != this->ExternalModFrequency) {
    this->ExternalModFrequency = param_1;
    this->bChanged = true;
  }
  return;
}

// SetPassBandGainCompensation @ 1444e4ee0

void __thiscall Audio::IFilter::SetPassBandGainCompensation(IFilter *this,float param_1)

{
  return;
}

// SetQ @ 1444e5040

void __thiscall Audio::IFilter::SetQ(IFilter *this,float param_1)

{
  if (param_1 != this->BaseQ) {
    this->BaseQ = param_1;
    this->bChanged = true;
  }
  return;
}

// SetQMod @ 1444e5060

void __thiscall Audio::IFilter::SetQMod(IFilter *this,float param_1)

{
  if (param_1 != this->ExternalModQ) {
    this->ExternalModQ = param_1;
    this->bChanged = true;
  }
  return;
}

// SetSaturation @ 1444e59c0

void __thiscall Audio::IFilter::SetSaturation(IFilter *this,float param_1)

{
  return;
}

// Update @ 1444e80c0

void __thiscall Audio::IFilter::Update(IFilter *this)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this->ModMatrix != (FModulationMatrix *)0x0) {
    bVar2 = this->bChanged;
    bVar1 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->ModCutoffFrequencyDest,
                       &this->ModFrequency);
    bVar1 = (bool)(bVar1 | bVar2);
    this->bChanged = bVar1;
    bVar2 = FModulationMatrix::GetDestinationValue
                      (this->ModMatrix,this->VoiceId,&this->ModQDest,&this->ModQ);
    this->bChanged = (bool)(bVar2 | bVar1);
  }
  if (this->bChanged != false) {
    fVar4 = this->ExternalModFrequency + this->ModFrequency;
    fVar5 = this->SampleRate * __real_3ee66666;
    this->bChanged = false;
    fVar3 = __real_3f800000;
    if (fVar4 != 0.0) {
      fVar3 = powf(__real_40000000,fVar4 * __real_3daaaaab);
    }
    fVar3 = fVar3 * this->BaseFrequency;
    if (fVar5 <= fVar3) {
      fVar3 = fVar5;
    }
    if (fVar3 <= __real_42a00000) {
      fVar3 = __real_42a00000;
    }
    this->Frequency = fVar3;
    this->Q = this->BaseQ + this->ModQ + this->ExternalModQ;
  }
  return;
}

