// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FAttackRelease @ 1444a20a0

FAttackRelease * __thiscall
Audio::FAttackRelease::FAttackRelease
          (FAttackRelease *this,float param_1,float param_2,float param_3,bool param_4)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FAttackRelease *pFVar4;
  float fVar5;
  float fVar6;
  
  this->AttackTimeSamples = 1.0;
  this->ReleaseTimeSamples = 1.0;
  this->bIsAnalog = param_4;
  this->SampleRate = param_1;
  if (param_1 <= 0.0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901090>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x22,"SampleRate > 0.f");
    param_1 = __real_473b8000;
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAttackRelease *)(*pcVar1)();
      return pFVar4;
    }
    this->SampleRate = 48000.0;
  }
  fVar2 = __real_c58fe95d;
  fVar6 = __real_c47a992f;
  this->AttackTimeMsec = param_2;
  if (param_2 <= 0.0) {
    fVar5 = 0.0;
  }
  else if (this->bIsAnalog == false) {
    fVar5 = expf(fVar2 / (param_1 * param_2));
  }
  else {
    fVar5 = expf(fVar6 / (param_1 * param_2));
  }
  this->AttackTimeSamples = fVar5;
  this->ReleaseTimeMsec = param_3;
  if (param_3 <= 0.0) {
    this->ReleaseTimeSamples = 0.0;
  }
  else {
    if (this->bIsAnalog == false) {
      fVar6 = fVar2;
    }
    fVar6 = expf(fVar6 / (param_1 * param_3));
    this->ReleaseTimeSamples = fVar6;
  }
  return this;
}

// SetAnalog @ 1444e2430

void __thiscall Audio::FAttackRelease::SetAnalog(FAttackRelease *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_c47a992f;
  fVar2 = this->AttackTimeMsec;
  this->bIsAnalog = param_1;
  fVar1 = __real_c58fe95d;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  else if (param_1) {
    fVar2 = expf(fVar3 / (fVar2 * this->SampleRate));
  }
  else {
    fVar2 = expf(__real_c58fe95d / (fVar2 * this->SampleRate));
  }
  this->AttackTimeSamples = fVar2;
  if (this->ReleaseTimeMsec <= 0.0) {
    this->ReleaseTimeSamples = 0.0;
  }
  else {
    if (!param_1) {
      fVar3 = fVar1;
    }
    fVar2 = expf(fVar3 / (this->ReleaseTimeMsec * this->SampleRate));
    this->ReleaseTimeSamples = fVar2;
  }
  return;
}

// SetAttackTime @ 1444e26c0

void __thiscall Audio::FAttackRelease::SetAttackTime(FAttackRelease *this,float param_1)

{
  float fVar1;
  
  this->AttackTimeMsec = param_1;
  if (param_1 <= 0.0) {
    this->AttackTimeSamples = 0.0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (this->bIsAnalog != false) {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * this->SampleRate));
  this->AttackTimeSamples = fVar1;
  return;
}

// SetReleaseTime @ 1444e5380

void __thiscall Audio::FAttackRelease::SetReleaseTime(FAttackRelease *this,float param_1)

{
  float fVar1;
  
  this->ReleaseTimeMsec = param_1;
  if (param_1 <= 0.0) {
    this->ReleaseTimeSamples = 0.0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (this->bIsAnalog != false) {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * this->SampleRate));
  this->ReleaseTimeSamples = fVar1;
  return;
}

// SetSampleRate @ 1444e5870

void __thiscall Audio::FAttackRelease::SetSampleRate(FAttackRelease *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_c58fe95d;
  fVar5 = __real_c47a992f;
  if (0.0 < param_1) {
    fVar4 = this->AttackTimeMsec;
    this->SampleRate = param_1;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    else if (this->bIsAnalog == false) {
      fVar4 = expf(fVar2 / (fVar4 * param_1));
    }
    else {
      fVar4 = expf(fVar5 / (fVar4 * param_1));
    }
    this->AttackTimeSamples = fVar4;
    if (this->ReleaseTimeMsec <= 0.0) {
      this->ReleaseTimeSamples = 0.0;
    }
    else {
      if (this->bIsAnalog == false) {
        fVar5 = fVar2;
      }
      fVar5 = expf(fVar5 / (this->ReleaseTimeMsec * param_1));
      this->ReleaseTimeSamples = fVar5;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901101>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x2d,"InSampleRate > 0.f");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

