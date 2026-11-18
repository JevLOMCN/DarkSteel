// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FChorus @ 1444a3170

FChorus * __thiscall Audio::FChorus::FChorus(FChorus *this)

{
  this->Delays[0].EaseDelayMsec.Threshold = 0.0001;
  this->Delays[0].EaseDelayMsec.TargetValue = 0.0;
  this->Delays[0].AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Delays[0]._padding_ = (longlong)&___7FDelay_Audio__6B_;
  this->Delays[0].AudioBuffer.ArrayNum = 0;
  this->Delays[0].AudioBuffer.ArrayMax = 0;
  this->Delays[0].AudioBufferSize = 0;
  this->Delays[0].ReadIndex = 0;
  this->Delays[0].WriteIndex = 0;
  this->Delays[0].SampleRate = 0.0;
  this->Delays[0].DelayInSamples = 0.0;
  this->Delays[0].MaxBufferLengthSamples = 0;
  this->Delays[0].EaseDelayMsec.CurrentValue = 0.0;
  this->Delays[0].EaseDelayMsec.EaseFactor = 0.0001;
  this->Delays[0].EaseDelayMsec.OneMinusEase = 0.9999;
  this->Delays[0].EaseDelayMsec.EaseTimesTarget = 0.0;
  this->Delays[0].OutputAttenuation = 1.0;
  this->Delays[0].OutputAttenuationDB = 0.0;
  this->Delays[0].InputAttenuation = 1.0;
  this->Delays[0].InputFadeGainStep = 0.0;
  FDelay::Reset(this->Delays);
  this->Delays[1]._padding_ = (longlong)&___7FDelay_Audio__6B_;
  this->Delays[1].AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Delays[1].AudioBuffer.ArrayNum = 0;
  this->Delays[1].AudioBuffer.ArrayMax = 0;
  this->Delays[1].AudioBufferSize = 0;
  this->Delays[1].ReadIndex = 0;
  this->Delays[1].WriteIndex = 0;
  this->Delays[1].SampleRate = 0.0;
  this->Delays[1].DelayInSamples = 0.0;
  this->Delays[1].MaxBufferLengthSamples = 0;
  this->Delays[1].EaseDelayMsec.CurrentValue = 0.0;
  this->Delays[1].EaseDelayMsec.Threshold = 0.0001;
  this->Delays[1].EaseDelayMsec.TargetValue = 0.0;
  this->Delays[1].EaseDelayMsec.EaseFactor = 0.0001;
  this->Delays[1].EaseDelayMsec.OneMinusEase = 0.9999;
  this->Delays[1].EaseDelayMsec.EaseTimesTarget = 0.0;
  this->Delays[1].OutputAttenuation = 1.0;
  this->Delays[1].OutputAttenuationDB = 0.0;
  this->Delays[1].InputAttenuation = 1.0;
  this->Delays[1].InputFadeGainStep = 0.0;
  FDelay::Reset(this->Delays + 1);
  this->Delays[2]._padding_ = (longlong)&___7FDelay_Audio__6B_;
  this->Delays[2].AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Delays[2].AudioBuffer.ArrayNum = 0;
  this->Delays[2].AudioBuffer.ArrayMax = 0;
  this->Delays[2].AudioBufferSize = 0;
  this->Delays[2].ReadIndex = 0;
  this->Delays[2].WriteIndex = 0;
  this->Delays[2].SampleRate = 0.0;
  this->Delays[2].DelayInSamples = 0.0;
  this->Delays[2].MaxBufferLengthSamples = 0;
  this->Delays[2].EaseDelayMsec.CurrentValue = 0.0;
  this->Delays[2].EaseDelayMsec.Threshold = 0.0001;
  this->Delays[2].EaseDelayMsec.TargetValue = 0.0;
  this->Delays[2].EaseDelayMsec.EaseFactor = 0.0001;
  this->Delays[2].EaseDelayMsec.OneMinusEase = 0.9999;
  this->Delays[2].EaseDelayMsec.EaseTimesTarget = 0.0;
  this->Delays[2].OutputAttenuation = 1.0;
  this->Delays[2].OutputAttenuationDB = 0.0;
  this->Delays[2].InputAttenuation = 1.0;
  this->Delays[2].InputFadeGainStep = 0.0;
  FDelay::Reset(this->Delays + 2);
  FLFO::FLFO(this->LFOs);
  FLFO::FLFO(this->LFOs + 1);
  FLFO::FLFO(this->LFOs + 2);
  this->Depth[0].StartValue = 0.0;
  this->Depth[0].CurrentValue = 0.0;
  this->Depth[0].DeltaValue = 0.0;
  this->Depth[0].DefaultDurationTicks = 0;
  this->Depth[0].CurrentTick = 0;
  this->Depth[0].SampleRate = 44100.0;
  this->Depth[0].DurationTicks = 0;
  this->Depth[0].bIsInit = true;
  this->Depth[1].StartValue = 0.0;
  this->Depth[1].CurrentValue = 0.0;
  this->Depth[1].DeltaValue = 0.0;
  this->Depth[1].SampleRate = 44100.0;
  this->Depth[1].DurationTicks = 0;
  this->Depth[1].DefaultDurationTicks = 0;
  this->Depth[1].CurrentTick = 0;
  this->Depth[1].bIsInit = true;
  this->Depth[2].StartValue = 0.0;
  this->Depth[2].CurrentValue = 0.0;
  this->Depth[2].DeltaValue = 0.0;
  this->Depth[2].SampleRate = 44100.0;
  this->Depth[2].DurationTicks = 0;
  this->Depth[2].DefaultDurationTicks = 0;
  this->Depth[2].CurrentTick = 0;
  this->Depth[2].bIsInit = true;
  this->MinDelayMsec = 5.0;
  this->MaxDelayMsec = 50.0;
  this->DelayRangeMsec = 45.0;
  this->Spread = 0.0;
  this->MaxFrequencySpread = 10.0;
  this->WetLevel = 0.5;
  this->DryLevel = 0.5;
  this->NumChannels = 0;
  this->Feedback[0] = 0.0;
  this->Feedback[1] = 0.0;
  this->Feedback[2] = 0.0;
  return this;
}

// ~FChorus @ 1444a6090

void __thiscall Audio::FChorus::~FChorus(FChorus *this)

{
  FLFO *pFVar1;
  longlong lVar2;
  
  FLFO::~FLFO(this->LFOs + 2);
  FLFO::~FLFO(this->LFOs + 1);
  FLFO::~FLFO(this->LFOs);
  lVar2 = 3;
  pFVar1 = this->LFOs;
  do {
    lVar2 = lVar2 + -1;
    *(undefined ***)((longlong)(pFVar1 + -1) + 0x118) = &___7FDelay_Audio__6B_;
    if (*(void **)((longlong)(pFVar1 + -1) + 0x120) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pFVar1 + -1) + 0x120));
    }
    pFVar1 = (FLFO *)((longlong)(pFVar1 + -1) + 0x118);
  } while (lVar2 != 0);
  return;
}

// Init @ 1444c1f60

void __thiscall
Audio::FChorus::Init(FChorus *this,float param_1,int param_2,float param_3,int param_4)

{
  FLFO *pFVar1;
  int iVar2;
  float fVar3;
  
  this->NumChannels = param_2;
  this->Delays[0].SampleRate = param_1;
  iVar2 = (int)(param_1 * param_3 + __real_3f800000);
  this->Delays[0].MaxBufferLengthSamples = iVar2;
  fVar3 = param_3;
  if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
     (fVar3 = FDelayInitialAllocationSecondsCVar, param_3 <= FDelayInitialAllocationSecondsCVar)) {
    fVar3 = param_3;
  }
  this->Delays[0].AudioBufferSize = (int)(fVar3 * param_1) + 1;
  FDelay::Reset(this->Delays);
  this->Depth[0].SampleRate = param_1;
  pFVar1 = this->LFOs;
  this->Depth[0].bIsInit = false;
  this->Depth[0].DurationTicks = 0;
  this->Depth[0].CurrentTick = 0;
  this->Depth[0].CurrentValue = 0.5;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,0,0,1);
  FLFO::SetType(pFVar1,Triangle);
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1);
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  this->Delays[1].SampleRate = param_1;
  this->Delays[1].MaxBufferLengthSamples = iVar2;
  fVar3 = param_3;
  if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
     (fVar3 = FDelayInitialAllocationSecondsCVar, param_3 <= FDelayInitialAllocationSecondsCVar)) {
    fVar3 = param_3;
  }
  this->Delays[1].AudioBufferSize = (int)(fVar3 * param_1) + 1;
  FDelay::Reset(this->Delays + 1);
  this->Depth[1].SampleRate = param_1;
  pFVar1 = this->LFOs + 1;
  this->Depth[1].bIsInit = false;
  this->Depth[1].DurationTicks = 0;
  this->Depth[1].CurrentTick = 0;
  this->Depth[1].CurrentValue = 0.5;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,0,0,1);
  FLFO::SetType(pFVar1,Triangle);
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1);
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  this->Delays[2].SampleRate = param_1;
  this->Delays[2].MaxBufferLengthSamples = iVar2;
  fVar3 = param_3;
  if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
     (fVar3 = FDelayInitialAllocationSecondsCVar, param_3 <= FDelayInitialAllocationSecondsCVar)) {
    fVar3 = param_3;
  }
  this->Delays[2].AudioBufferSize = (int)(fVar3 * param_1) + 1;
  FDelay::Reset(this->Delays + 2);
  this->Depth[2].SampleRate = param_1;
  pFVar1 = this->LFOs + 2;
  this->Depth[2].bIsInit = false;
  this->Depth[2].DurationTicks = 0;
  this->Depth[2].CurrentTick = 0;
  this->Depth[2].CurrentValue = 0.5;
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,0,0,1);
  FLFO::SetType(pFVar1,Triangle);
  (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x0001444c219e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
  return;
}

// ProcessAudio @ 1444d6d30

void __thiscall
Audio::FChorus::ProcessAudio(FChorus *this,float *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_a8 [28];
  
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      local_a8[0] = 0.0;
      (**(code **)(this->LFOs[0]._padding_ + 0x20))(this->LFOs,local_a8);
      iVar1 = this->Depth[0].DurationTicks;
      iVar2 = this->Depth[0].CurrentTick;
      local_a8[0] = (local_a8[0] + fVar3) * fVar4;
      if (iVar2 < iVar1) {
        this->Depth[0].CurrentTick = iVar2 + 1;
        fVar6 = ((float)iVar2 * this->Depth[0].DeltaValue) / (float)iVar1 +
                this->Depth[0].StartValue;
        this->Depth[0].CurrentValue = fVar6;
      }
      else {
        fVar6 = this->Depth[0].CurrentValue;
      }
      FDelay::SetDelayMsec
                (this->Delays,local_a8[0] * fVar6 * this->DelayRangeMsec + this->MinDelayMsec);
      fVar6 = (float)(**(code **)(this->LFOs[1]._padding_ + 0x20))(this->LFOs + 1,local_a8);
      iVar1 = this->Depth[1].DurationTicks;
      iVar2 = this->Depth[1].CurrentTick;
      local_a8[0] = (local_a8[0] + fVar3) * fVar4;
      if (iVar2 < iVar1) {
        fVar8 = ((float)iVar2 * this->Depth[1].DeltaValue) / (float)iVar1 +
                this->Depth[1].StartValue;
        this->Depth[1].CurrentValue = fVar8;
        this->Depth[1].CurrentTick = iVar2 + 1;
      }
      else {
        fVar8 = this->Depth[1].CurrentValue;
      }
      FDelay::SetDelayMsec
                (this->Delays + 1,
                 fVar8 * (fVar6 + fVar3) * fVar4 * this->DelayRangeMsec + this->MinDelayMsec);
      (**(code **)(this->LFOs[2]._padding_ + 0x20))(this->LFOs + 2,local_a8);
      iVar1 = this->Depth[2].DurationTicks;
      iVar2 = this->Depth[2].CurrentTick;
      fVar6 = local_a8[0] * fVar4;
      local_a8[0] = fVar6 + fVar4;
      if (iVar2 < iVar1) {
        fVar8 = ((float)iVar2 * this->Depth[2].DeltaValue) / (float)iVar1 +
                this->Depth[2].StartValue;
        this->Depth[2].CurrentValue = fVar8;
        this->Depth[2].CurrentTick = iVar2 + 1;
      }
      else {
        fVar8 = this->Depth[2].CurrentValue;
      }
      FDelay::SetDelayMsec
                (this->Delays + 2,
                 (fVar4 - fVar6) * fVar8 * this->DelayRangeMsec + this->MinDelayMsec);
      fVar6 = param_1[iVar5];
      fVar8 = fVar6;
      fVar9 = fVar6;
      if (this->NumChannels == 2) {
        fVar8 = (fVar6 + param_1[(longlong)iVar5 + 1]) * fVar4;
        fVar9 = param_1[(longlong)iVar5 + 1];
      }
      fVar7 = FDelay::Read(this->Delays);
      FDelay::WriteDelayAndInc(this->Delays,fVar7 * this->Feedback[0] + fVar6);
      fVar6 = FDelay::Read(this->Delays + 1);
      FDelay::WriteDelayAndInc(this->Delays + 1,fVar6 * this->Feedback[1] + fVar8);
      fVar8 = FDelay::Read(this->Delays + 2);
      FDelay::WriteDelayAndInc(this->Delays + 2,fVar8 * this->Feedback[2] + fVar9);
      iVar1 = this->NumChannels;
      fVar9 = (fVar6 * fVar4 + fVar7) * this->WetLevel + param_1[iVar5] * this->DryLevel;
      param_3[iVar5] = fVar9;
      fVar6 = this->WetLevel * (fVar8 + fVar6 * fVar4);
      if (iVar1 == 2) {
        param_3[(longlong)iVar5 + 1] = fVar6 + this->DryLevel * param_1[(longlong)iVar5 + 1];
      }
      else {
        param_3[iVar5] = (this->DryLevel * param_1[iVar5] + fVar6 + fVar9) * fVar4;
      }
      iVar5 = iVar5 + this->NumChannels;
    } while (iVar5 < param_2);
  }
  return;
}

// ProcessAudioFrame @ 1444de1a0

void __thiscall Audio::FChorus::ProcessAudioFrame(FChorus *this,float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_78 [24];
  
  local_78[0] = 0.0;
  (**(code **)(this->LFOs[0]._padding_ + 0x20))(this->LFOs,local_78);
  fVar3 = __real_3f000000;
  fVar7 = __real_3f800000;
  iVar1 = this->Depth[0].DurationTicks;
  iVar2 = this->Depth[0].CurrentTick;
  local_78[0] = (local_78[0] + __real_3f800000) * __real_3f000000;
  if (iVar2 < iVar1) {
    this->Depth[0].CurrentTick = iVar2 + 1;
    fVar4 = ((float)iVar2 * this->Depth[0].DeltaValue) / (float)iVar1 + this->Depth[0].StartValue;
    this->Depth[0].CurrentValue = fVar4;
  }
  else {
    fVar4 = this->Depth[0].CurrentValue;
  }
  FDelay::SetDelayMsec(this->Delays,local_78[0] * fVar4 * this->DelayRangeMsec + this->MinDelayMsec)
  ;
  fVar4 = (float)(**(code **)(this->LFOs[1]._padding_ + 0x20))(this->LFOs + 1,local_78);
  iVar1 = this->Depth[1].DurationTicks;
  iVar2 = this->Depth[1].CurrentTick;
  local_78[0] = (local_78[0] + fVar7) * fVar3;
  if (iVar2 < iVar1) {
    fVar6 = ((float)iVar2 * this->Depth[1].DeltaValue) / (float)iVar1 + this->Depth[1].StartValue;
    this->Depth[1].CurrentValue = fVar6;
    this->Depth[1].CurrentTick = iVar2 + 1;
  }
  else {
    fVar6 = this->Depth[1].CurrentValue;
  }
  FDelay::SetDelayMsec
            (this->Delays + 1,
             fVar6 * (fVar4 + fVar7) * fVar3 * this->DelayRangeMsec + this->MinDelayMsec);
  (**(code **)(this->LFOs[2]._padding_ + 0x20))(this->LFOs + 2,local_78);
  iVar1 = this->Depth[2].DurationTicks;
  iVar2 = this->Depth[2].CurrentTick;
  fVar7 = local_78[0] * fVar3;
  local_78[0] = fVar7 + fVar3;
  if (iVar2 < iVar1) {
    fVar4 = ((float)iVar2 * this->Depth[2].DeltaValue) / (float)iVar1 + this->Depth[2].StartValue;
    this->Depth[2].CurrentValue = fVar4;
    this->Depth[2].CurrentTick = iVar2 + 1;
  }
  else {
    fVar4 = this->Depth[2].CurrentValue;
  }
  FDelay::SetDelayMsec
            (this->Delays + 2,(fVar3 - fVar7) * fVar4 * this->DelayRangeMsec + this->MinDelayMsec);
  fVar7 = *param_1;
  fVar4 = fVar7;
  fVar6 = fVar7;
  if (this->NumChannels == 2) {
    fVar4 = (fVar7 + param_1[1]) * fVar3;
    fVar6 = param_1[1];
  }
  fVar5 = FDelay::Read(this->Delays);
  FDelay::WriteDelayAndInc(this->Delays,fVar5 * this->Feedback[0] + fVar7);
  fVar7 = FDelay::Read(this->Delays + 1);
  FDelay::WriteDelayAndInc(this->Delays + 1,fVar7 * this->Feedback[1] + fVar4);
  fVar4 = FDelay::Read(this->Delays + 2);
  FDelay::WriteDelayAndInc(this->Delays + 2,fVar4 * this->Feedback[2] + fVar6);
  iVar1 = this->NumChannels;
  fVar6 = (fVar7 * fVar3 + fVar5) * this->WetLevel + this->DryLevel * *param_1;
  *param_2 = fVar6;
  fVar7 = (fVar4 + fVar7 * fVar3) * this->WetLevel;
  if (iVar1 == 2) {
    param_2[1] = fVar7 + this->DryLevel * param_1[1];
  }
  else {
    *param_2 = (fVar7 + this->DryLevel * *param_1 + fVar6) * fVar3;
  }
  return;
}

// SetDepth @ 1444e3520

void __thiscall Audio::FChorus::SetDepth(FChorus *this,Type param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (this->Depth[(int)param_1].bIsInit != false) {
    this->Depth[(int)param_1].bIsInit = false;
    this->Depth[(int)param_1].DurationTicks = 0;
    this->Depth[(int)param_1].CurrentTick = 0;
    this->Depth[(int)param_1].CurrentValue = param_2;
    return;
  }
  iVar2 = (int)(this->Depth[(int)param_1].SampleRate * __real_41a00000);
  this->Depth[(int)param_1].DurationTicks = iVar2;
  this->Depth[(int)param_1].CurrentTick = 0;
  pfVar3 = &this->Depth[(int)param_1].CurrentValue;
  if (iVar2 == 0) {
    *pfVar3 = param_2;
    return;
  }
  fVar1 = *pfVar3;
  this->Depth[(int)param_1].StartValue = fVar1;
  this->Depth[(int)param_1].DeltaValue = param_2 - fVar1;
  return;
}

// SetDryLevel @ 1444e35e0

void __thiscall Audio::FChorus::SetDryLevel(FChorus *this,float param_1)

{
  this->DryLevel = param_1;
  return;
}

// SetFeedback @ 1444e3790

void __thiscall Audio::FChorus::SetFeedback(FChorus *this,Type param_1,float param_2)

{
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  this->Feedback[(int)param_1] = param_2;
  return;
}

// SetFrequency @ 1444e3aa0

void __thiscall Audio::FChorus::SetFrequency(FChorus *this,Type param_1,float param_2)

{
  IOscBase::SetFrequency((IOscBase *)(this->LFOs + (int)param_1),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001444e3ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->LFOs[(int)param_1]._padding_ + 0x28))(this->LFOs + (int)param_1);
  return;
}

// SetSpread @ 1444e5a80

void __thiscall Audio::FChorus::SetSpread(FChorus *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->Spread = param_1;
  IOscBase::SetFrequencyMod
            ((IOscBase *)this->LFOs,
             (float)((uint)(param_1 * this->MaxFrequencySpread) ^
                    __xmm_80000000800000008000000080000000));
  IOscBase::SetFrequencyMod((IOscBase *)(this->LFOs + 2),this->Spread * this->MaxFrequencySpread);
  (**(code **)(this->LFOs[0]._padding_ + 0x28))(this->LFOs);
                    /* WARNING: Could not recover jumptable at 0x0001444e5b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->LFOs[2]._padding_ + 0x28))(this->LFOs + 2);
  return;
}

// SetWetLevel @ 1444e5c00

void __thiscall Audio::FChorus::SetWetLevel(FChorus *this,float param_1)

{
  this->WetLevel = param_1;
  return;
}

