// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 23

// FEnvelope @ 1444a3fc0

FEnvelope * __thiscall Audio::FEnvelope::FEnvelope(FEnvelope *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->SampleRate = 44100.0;
  this->_padding_ = (longlong)&___7FEnvelope_Audio__6B_;
  this->VoiceId = 0;
  this->CurrentEnvelopeValue = 0.0;
  this->CurrentEnvelopeBiasValue = 0.0;
  (this->AttackData).Coefficient = 0.0;
  (this->AttackData).Offset = 0.0;
  (this->AttackData).TCO = 0.0;
  (this->AttackData).TimeSamples = 0.0;
  (this->DecayData).Coefficient = 0.0;
  (this->DecayData).Offset = 0.0;
  (this->DecayData).TCO = 0.0;
  (this->DecayData).TimeSamples = 0.0;
  (this->ReleaseData).Coefficient = 0.0;
  (this->ReleaseData).Offset = 0.0;
  (this->ReleaseData).TCO = 0.0;
  (this->ReleaseData).TimeSamples = 0.0;
  this->CurrentState = Off;
  this->ModMatrix = (FModulationMatrix *)0x0;
  (this->EnvSource).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnvSource).Name.Data.ArrayNum = 0;
  (this->EnvSource).Name.Data.ArrayMax = 0;
  (this->BiasedEnvSource).Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BiasedEnvSource).Name.Data.ArrayNum = 0;
  (this->BiasedEnvSource).Name.Data.ArrayMax = 0;
  this->AttackTimeMSec = 100.0;
  this->DecayTimeMsec = 100.0;
  puVar2 = &this->field_0xa8;
  this->bIsSimulatingAnalog = '\x01';
  this->bBiasInvert = '\0';
  this->bInvert = '\0';
  this->bChanged = '\x01';
  this->bIsRetriggerMode = '\0';
  this->bIsLegatoMode = '\0';
  this->SustainGain = 0.7;
  this->ReleaseTimeMsec = 2000.0;
  this->ShutdownTimeMsec = 10.0;
  this->ShutdownDelta = 0.0;
  this->Depth = 1.0;
  this->BiasDepth = 1.0;
  (this->EnvSource).Id = 0xffffffff;
  (this->BiasedEnvSource).Id = 0xffffffff;
  return this;
}

// ~FEnvelope @ 1444a63f0

void __thiscall Audio::FEnvelope::~FEnvelope(FEnvelope *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FEnvelope_Audio__6B_;
  pFVar1 = (this->BiasedEnvSource).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvSource).Name.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Generate @ 1444bef00

float __thiscall Audio::FEnvelope::Generate(FEnvelope *this,float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (**(code **)(this->_padding_ + 0x48))();
  fVar2 = __real_3f800000;
  switch(this->CurrentState) {
  case Off:
    if (this->bIsRetriggerMode != '\0') {
      this->CurrentEnvelopeValue = 0.0;
    }
    goto switchD_1444bef46_default;
  case Attack:
    fVar3 = (this->AttackData).Coefficient * this->CurrentEnvelopeValue + (this->AttackData).Offset;
    bVar1 = __real_3f800000 <= fVar3;
    this->CurrentEnvelopeValue = fVar3;
    if ((bVar1) || (this->AttackTimeMSec <= 0.0)) {
      this->CurrentEnvelopeValue = 1.0;
      this->CurrentState = Decay;
    }
    goto switchD_1444bef46_default;
  case Decay:
    fVar3 = (this->DecayData).Coefficient * this->CurrentEnvelopeValue + (this->DecayData).Offset;
    this->CurrentEnvelopeValue = fVar3;
    if ((this->SustainGain < fVar3) && (0.0 < this->DecayTimeMsec)) goto switchD_1444bef46_default;
    if (this->bCurrentCycleIsADOnly == '\0') {
      this->CurrentEnvelopeValue = this->SustainGain;
      this->CurrentState = Sustain;
      goto switchD_1444bef46_default;
    }
    if (__real_322bcc77 < fVar3) goto switchD_1444bef46_default;
    break;
  case Sustain:
    this->CurrentEnvelopeValue = this->SustainGain;
    if ((this->bCurrentCycleIsADOnly == '\0') || (__real_322bcc77 < this->SustainGain))
    goto switchD_1444bef46_default;
    break;
  case Release:
    fVar3 = (this->ReleaseData).Coefficient * this->CurrentEnvelopeValue +
            (this->ReleaseData).Offset;
    this->CurrentEnvelopeValue = fVar3;
    if (((0.0 < fVar3) && (0.0 < this->ReleaseTimeMsec)) && (__real_322bcc77 < this->SustainGain))
    goto switchD_1444bef46_default;
    this->CurrentEnvelopeValue = 0.0;
    break;
  case Shutdown:
    if (this->bIsRetriggerMode != '\0') {
      fVar3 = this->ShutdownDelta + this->CurrentEnvelopeValue;
      this->CurrentEnvelopeValue = fVar3;
      if (0.0 < fVar3) goto switchD_1444bef46_default;
      this->CurrentEnvelopeValue = 0.0;
    }
    break;
  default:
    goto switchD_1444bef46_default;
  }
  this->CurrentState = Off;
switchD_1444bef46_default:
  fVar3 = this->CurrentEnvelopeValue;
  fVar4 = fVar3;
  if (this->bBiasInvert != '\0') {
    fVar4 = fVar2 - fVar3;
  }
  fVar4 = (fVar4 - this->SustainGain) * this->BiasDepth;
  if (this->bInvert != '\0') {
    fVar3 = fVar2 - fVar3;
  }
  fVar3 = fVar3 * this->Depth;
  if (param_1 != (float *)0x0) {
    *param_1 = fVar4;
  }
  if (this->ModMatrix != (FModulationMatrix *)0x0) {
    FModulationMatrix::SetSourceValue(this->ModMatrix,this->VoiceId,&this->EnvSource,fVar3);
    FModulationMatrix::SetSourceValue(this->ModMatrix,this->VoiceId,&this->BiasedEnvSource,fVar4);
  }
  return fVar3;
}

// GetState @ 1444c1360

EEnvelopeState __thiscall Audio::FEnvelope::GetState(FEnvelope *this)

{
  return this->CurrentState;
}

// Init @ 1444c2f50

void __thiscall
Audio::FEnvelope::Init
          (FEnvelope *this,float param_1,int param_2,FModulationMatrix *param_3,bool param_4)

{
  FString *pFVar1;
  FString *this_00;
  FScriptContainerElement *pFVar2;
  FPatchSource *pFVar3;
  FString *this_01;
  FPatchSource local_28;
  
  this->bIsSimulatingAnalog = '\0';
  this->SampleRate = param_1;
  this->field_0xa8 = this->field_0xa8 | param_4 | 8U;
  this->VoiceId = param_2;
  this->ModMatrix = param_3;
  if (param_3 != (FModulationMatrix *)0x0) {
    pFVar3 = FModulationMatrix::CreatePatchSource(param_3,&local_28,param_2);
    this_00 = &(this->EnvSource).Name;
    pFVar1 = &pFVar3->Name;
    (this->EnvSource).Id = pFVar3->Id;
    if (this_00 != pFVar1) {
      pFVar2 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->EnvSource).Name.Data.ArrayNum = (pFVar3->Name).Data.ArrayNum;
      (this->EnvSource).Name.Data.ArrayMax = (pFVar3->Name).Data.ArrayMax;
      (pFVar3->Name).Data.ArrayNum = 0;
      (pFVar3->Name).Data.ArrayMax = 0;
    }
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    pFVar3 = FModulationMatrix::CreatePatchSource(this->ModMatrix,&local_28,this->VoiceId);
    pFVar1 = &pFVar3->Name;
    (this->BiasedEnvSource).Id = pFVar3->Id;
    this_01 = &(this->BiasedEnvSource).Name;
    if (this_01 != pFVar1) {
      pFVar2 = (this_01->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (this_01->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->BiasedEnvSource).Name.Data.ArrayNum = (pFVar3->Name).Data.ArrayNum;
      (this->BiasedEnvSource).Name.Data.ArrayMax = (pFVar3->Name).Data.ArrayMax;
      (pFVar3->Name).Data.ArrayNum = 0;
      (pFVar3->Name).Data.ArrayMax = 0;
    }
    if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(this_00,L"EnvSource");
    ::FString::operator=(this_01,L"BiasedEnvSource");
  }
  return;
}

// IsDone @ 1444c40e0

bool __thiscall Audio::FEnvelope::IsDone(FEnvelope *this)

{
  return this->CurrentState == Off;
}

// Kill @ 1444c4c50

void __thiscall Audio::FEnvelope::Kill(FEnvelope *this)

{
  this->CurrentState = Off;
  return;
}

// Reset @ 1444e18a0

void __thiscall Audio::FEnvelope::Reset(FEnvelope *this)

{
  this->bChanged = '\x01';
  this->CurrentState = Off;
  if (this->bIsRetriggerMode != '\0') {
    this->CurrentEnvelopeValue = 0.0;
  }
  return;
}

// SetAttackTime @ 1444e28d0

void __thiscall Audio::FEnvelope::SetAttackTime(FEnvelope *this,float param_1)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = this->AttackTimeMSec;
  this->AttackTimeMSec = param_1;
  bVar2 = 0xff;
  if ((float)((uint)(fVar1 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    bVar2 = 0;
  }
  this->field_0xa8 = (bVar2 | this->field_0xa8) & 8 ^ this->field_0xa8 & 0xf7;
  return;
}

// SetBiasDepth @ 1444e3070

void __thiscall Audio::FEnvelope::SetBiasDepth(FEnvelope *this,float param_1)

{
  this->BiasDepth = param_1;
  return;
}

// SetBiasInvert @ 1444e3080

void __thiscall Audio::FEnvelope::SetBiasInvert(FEnvelope *this,bool param_1)

{
  this->bBiasInvert = '\0';
  this->field_0xa8 = this->field_0xa8 | param_1 << 5;
  return;
}

// SetDecayTime @ 1444e3330

void __thiscall Audio::FEnvelope::SetDecayTime(FEnvelope *this,float param_1)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = this->DecayTimeMsec;
  this->DecayTimeMsec = param_1;
  bVar2 = 0xff;
  if ((float)((uint)(fVar1 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    bVar2 = 0;
  }
  this->field_0xa8 = (bVar2 | this->field_0xa8) & 8 ^ this->field_0xa8 & 0xf7;
  return;
}

// SetDepth @ 1444e35d0

void __thiscall Audio::FEnvelope::SetDepth(FEnvelope *this,float param_1)

{
  this->Depth = param_1;
  return;
}

// SetInvert @ 1444e3de0

void __thiscall Audio::FEnvelope::SetInvert(FEnvelope *this,bool param_1)

{
  this->bInvert = '\0';
  this->field_0xa8 = this->field_0xa8 | param_1 << 4;
  return;
}

// SetReleaseTime @ 1444e5590

void __thiscall Audio::FEnvelope::SetReleaseTime(FEnvelope *this,float param_1)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = this->ReleaseTimeMsec;
  this->ReleaseTimeMsec = param_1;
  bVar2 = 0xff;
  if ((float)((uint)(fVar1 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    bVar2 = 0;
  }
  this->field_0xa8 = (bVar2 | this->field_0xa8) & 8 ^ this->field_0xa8 & 0xf7;
  return;
}

// SetSimulateAnalog @ 1444e5a60

void __thiscall Audio::FEnvelope::SetSimulateAnalog(FEnvelope *this,bool param_1)

{
  this->bIsSimulatingAnalog = '\0';
  this->field_0xa8 = this->field_0xa8 | param_1 | 8U;
  return;
}

// SetSustainGain @ 1444e5b20

void __thiscall Audio::FEnvelope::SetSustainGain(FEnvelope *this,float param_1)

{
  float fVar1;
  byte bVar2;
  
  fVar1 = this->SustainGain;
  this->SustainGain = param_1;
  bVar2 = 0xff;
  if ((float)((uint)(fVar1 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    bVar2 = 0;
  }
  this->field_0xa8 = (bVar2 | this->field_0xa8) & 8 ^ this->field_0xa8 & 0xf7;
  return;
}

// Shutdown @ 1444e5da0

void __thiscall Audio::FEnvelope::Shutdown(FEnvelope *this)

{
  if (this->bIsLegatoMode == '\0') {
    if (this->CurrentEnvelopeValue == 0.0) {
      this->CurrentState = Off;
      return;
    }
    this->CurrentState = Shutdown;
    this->ShutdownDelta =
         (this->CurrentEnvelopeValue * __real_c47a0000) /
         (this->ShutdownTimeMsec * this->SampleRate);
  }
  return;
}

// Start @ 1444e5e20

void __thiscall Audio::FEnvelope::Start(FEnvelope *this)

{
  byte bVar1;
  
  this->bCurrentCycleIsADOnly = '\0';
  bVar1 = 0;
  if (this->SustainGain <= __real_322bcc77) {
    bVar1 = 0x40;
  }
  this->field_0xa8 = this->field_0xa8 | bVar1;
  if (((this->bIsLegatoMode == '\0') || (this->CurrentState == Off)) ||
     (this->CurrentState == Release)) {
    (**(code **)(this->_padding_ + 0x40))(this);
    this->CurrentState = Attack;
  }
  return;
}

// StartLegato @ 1444e5e80

void __thiscall Audio::FEnvelope::StartLegato(FEnvelope *this,float param_1)

{
  float fVar1;
  EEnvelopeState EVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  
  fVar3 = __real_322bcc77;
  fVar6 = this->Depth;
  if ((fVar6 <= __real_322bcc77) && (param_1 <= __real_322bcc77)) {
    return;
  }
  bVar4 = 0;
  fVar1 = this->SustainGain;
  bVar5 = this->field_0xa8 & 0xbf;
  if (fVar1 <= __real_322bcc77) {
    bVar4 = 0x40;
  }
  EVar2 = this->CurrentState;
  this->field_0xa8 = bVar4 | bVar5;
  if (EVar2 == Attack) {
    if (param_1 <= fVar6) {
      return;
    }
LAB_1444e5f4a:
    fVar6 = (fVar6 / param_1) * this->CurrentEnvelopeValue;
  }
  else if (EVar2 == Decay) {
    if (this->CurrentEnvelopeValue * fVar6 < param_1) {
      this->CurrentState = Attack;
    }
    fVar6 = (fVar6 / param_1) * this->CurrentEnvelopeValue;
  }
  else {
    if (EVar2 == Sustain) {
      if (param_1 <= fVar6 * fVar1) goto LAB_1444e5f5d;
      this->CurrentState = Attack;
      goto LAB_1444e5f4a;
    }
    if (EVar2 != Release) {
      this->Depth = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001444e5ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 8))();
      return;
    }
    this->CurrentState = Attack;
    if (param_1 < this->CurrentEnvelopeValue * fVar6) {
      this->CurrentState = Decay;
    }
    fVar6 = (fVar6 / param_1) * this->CurrentEnvelopeValue;
  }
  this->CurrentEnvelopeValue = fVar6;
  this->Depth = param_1;
LAB_1444e5f5d:
  bVar4 = 8;
  if (fVar1 <= fVar3) {
    bVar4 = 0x48;
  }
  this->field_0xa8 = bVar4 | bVar5;
  return;
}

// StartLegato @ 1444e5f80

void __thiscall Audio::FEnvelope::StartLegato(FEnvelope *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001444e5f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,this->Depth);
  return;
}

// Stop @ 1444e5fa0

void __thiscall Audio::FEnvelope::Stop(FEnvelope *this)

{
  if (this->CurrentEnvelopeValue == 0.0) {
    this->CurrentState = Off;
    return;
  }
  if (this->bCurrentCycleIsADOnly == '\0') {
    this->CurrentState = Release;
    return;
  }
  if (this->CurrentState == Attack) {
    this->CurrentState = Decay;
  }
  return;
}

// Update @ 1444e7990

void __thiscall Audio::FEnvelope::Update(FEnvelope *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = &this->field_0xa8;
  uVar2 = *puVar1;
  if (this->bChanged != '\0') {
    this->field_0xa8 = uVar2 & 0xf7;
    fVar6 = __real_3f7fff58;
    fVar10 = __real_37854563;
    if (this->bIsSimulatingAnalog != 0) {
      fVar6 = __real_3e647c3c;
      fVar10 = __real_3be81bf4;
    }
    (this->DecayData).TCO = fVar10;
    (this->AttackData).TCO = fVar6;
    fVar4 = __real_3f800000;
    fVar7 = this->SampleRate;
    fVar11 = fVar7 * __real_3a83126f;
    fVar8 = fVar6 + __real_3f800000;
    (this->ReleaseData).TCO = fVar10;
    fVar9 = fVar11 * this->AttackTimeMSec;
    fVar12 = fVar11 * this->ReleaseTimeMsec;
    (this->DecayData).TimeSamples = fVar11 * this->DecayTimeMsec;
    (this->AttackData).TimeSamples = fVar9;
    (this->ReleaseData).TimeSamples = fVar12;
    fVar6 = logf(fVar8 / fVar6);
    uVar5 = __xmm_80000000800000008000000080000000;
    fVar6 = expf((float)((uint)(fVar6 / fVar9) ^ __xmm_80000000800000008000000080000000));
    (this->AttackData).Coefficient = fVar6;
    (this->AttackData).Offset = (fVar4 - fVar6) * fVar8;
    fVar6 = logf((fVar10 + fVar4) / fVar10);
    fVar7 = expf(fVar6 / (fVar7 * __real_ba83126f * this->DecayTimeMsec));
    (this->DecayData).Coefficient = fVar7;
    if (this->bCurrentCycleIsADOnly == '\0') {
      fVar8 = this->SustainGain - fVar10;
    }
    else {
      fVar8 = 0.0;
    }
    (this->DecayData).Offset = (fVar4 - fVar7) * fVar8;
    fVar6 = expf((float)((uint)(fVar6 / fVar12) ^ uVar5));
    (this->ReleaseData).Coefficient = fVar6;
    (this->ReleaseData).Offset = (fVar6 - fVar4) * fVar10;
  }
  return;
}

