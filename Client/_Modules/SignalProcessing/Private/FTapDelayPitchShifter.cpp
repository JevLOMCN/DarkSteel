// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FTapDelayPitchShifter @ 1444f2a60

FTapDelayPitchShifter * __thiscall
Audio::FTapDelayPitchShifter::FTapDelayPitchShifter(FTapDelayPitchShifter *this)

{
  (this->CurrentDelayLength).Threshold = 0.0001;
  (this->CurrentDelayLength).TargetValue = 0.0;
  this->_padding_ = (longlong)&___7FTapDelayPitchShifter_Audio__6B_;
  this->SampleRate = 0.0;
  (this->CurrentDelayLength).CurrentValue = 0.0;
  this->CurrentTargetDelayLength = 0.0;
  this->CurrentPitchShift = 0.0;
  this->PhasorPhaseIncrement = 0.0;
  (this->CurrentDelayLength).EaseFactor = 0.001;
  (this->CurrentDelayLength).OneMinusEase = 0.999;
  (this->CurrentDelayLength).EaseTimesTarget = 0.0;
  this->CurrentPitchShiftRatio = 1.0;
  this->PhasorPhase = 0.0;
  return this;
}

// ~FTapDelayPitchShifter @ 1444f4710

void __thiscall Audio::FTapDelayPitchShifter::~FTapDelayPitchShifter(FTapDelayPitchShifter *this)

{
  this->_padding_ = (longlong)&___7FTapDelayPitchShifter_Audio__6B_;
  return;
}

// Init @ 144507de0

void __thiscall
Audio::FTapDelayPitchShifter::Init
          (FTapDelayPitchShifter *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (__real_42900000 <= param_2) {
    param_2 = __real_42900000;
  }
  this->SampleRate = param_1;
  if (__real_42c80000 <= param_3) {
    param_3 = __real_42c80000;
  }
  (this->CurrentDelayLength).EaseFactor = 0.001;
  if (param_2 <= __real_c2900000) {
    param_2 = __real_c2900000;
  }
  (this->CurrentDelayLength).OneMinusEase = 0.999;
  if (param_3 <= __real_41200000) {
    param_3 = __real_41200000;
  }
  (this->CurrentDelayLength).CurrentValue = param_3;
  fVar1 = param_3 * __real_3a83126f;
  (this->CurrentDelayLength).TargetValue = param_3;
  this->CurrentTargetDelayLength = param_3;
  (this->CurrentDelayLength).EaseTimesTarget = fVar1;
  this->CurrentPitchShift = param_2;
  fVar1 = __real_3f800000;
  if (param_2 != 0.0) {
    fVar1 = powf(__real_40000000,param_2 * __real_3daaaaab);
  }
  if (param_3 <= __real_3f800000) {
    param_3 = __real_3f800000;
  }
  fVar2 = __real_3f800000 - fVar1;
  this->CurrentPitchShiftRatio = fVar1;
  this->PhasorPhaseIncrement = fVar2 / (param_3 * __real_3a83126f * this->SampleRate);
  return;
}

// ProcessAudio @ 14450ec00

void __thiscall
Audio::FTapDelayPitchShifter::ProcessAudio
          (FTapDelayPitchShifter *this,FDelay *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = __real_3a83126f;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_3f800000;
  if (0 < param_3) {
    lVar5 = (longlong)param_4 - (longlong)param_2;
    lVar4 = (longlong)param_3;
    do {
      fVar10 = __real_3f000000;
      fVar11 = (this->CurrentDelayLength).CurrentValue;
      if ((this->CurrentDelayLength).Threshold <=
          (float)((uint)((this->CurrentDelayLength).TargetValue - fVar11) & uVar2)) {
        fVar6 = fVar11;
        if (fVar11 <= fVar1) {
          fVar6 = fVar1;
        }
        this->PhasorPhaseIncrement =
             (fVar1 - this->CurrentPitchShiftRatio) / (fVar6 * fVar3 * this->SampleRate);
        if ((this->CurrentDelayLength).Threshold <=
            (float)((uint)((this->CurrentDelayLength).TargetValue - fVar11) & uVar2)) {
          (this->CurrentDelayLength).CurrentValue =
               fVar11 * (this->CurrentDelayLength).OneMinusEase +
               (this->CurrentDelayLength).EaseTimesTarget;
        }
      }
      fVar7 = FGenericPlatformMath::Fmod(this->PhasorPhase + fVar10,fVar1);
      fVar11 = this->PhasorPhase;
      fVar6 = (this->CurrentDelayLength).CurrentValue;
      fVar8 = cosf((fVar11 - fVar10) * __real_40490fdb);
      fVar9 = cosf((fVar7 - fVar10) * __real_40490fdb);
      fVar10 = fVar11 + this->PhasorPhaseIncrement;
      this->PhasorPhase = fVar10;
      if (0.0 <= fVar10) {
        if ((fVar1 < fVar10) &&
           (fVar10 = FGenericPlatformMath::Fmod(fVar10 - fVar1,fVar1), fVar10 == 0.0)) {
          fVar10 = fVar1;
        }
      }
      else {
        fVar10 = FGenericPlatformMath::Fmod
                           ((float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000),fVar1);
        if (fVar10 == 0.0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = fVar1 - fVar10;
        }
      }
      this->PhasorPhase = fVar10;
      fVar11 = FDelay::ReadDelayAt(param_1,fVar11 * fVar6);
      fVar10 = FDelay::ReadDelayAt(param_1,fVar6 * fVar7);
      *(float *)(lVar5 + (longlong)param_2) = fVar10 * fVar9 + fVar11 * fVar8;
      FDelay::WriteDelayAndInc(param_1,*param_2);
      param_2 = param_2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// ReadDopplerShiftedTapFromDelay @ 1445160b0

float __thiscall
Audio::FTapDelayPitchShifter::ReadDopplerShiftedTapFromDelay
          (FTapDelayPitchShifter *this,FDelay *param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  fVar7 = (this->CurrentDelayLength).CurrentValue;
  if ((this->CurrentDelayLength).Threshold <=
      (float)((uint)((this->CurrentDelayLength).TargetValue - fVar7) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = fVar7;
    if (fVar7 <= __real_3f800000) {
      fVar2 = __real_3f800000;
    }
    this->PhasorPhaseIncrement =
         (__real_3f800000 - this->CurrentPitchShiftRatio) /
         (fVar2 * __real_3a83126f * this->SampleRate);
    if ((this->CurrentDelayLength).Threshold <=
        (float)((uint)((this->CurrentDelayLength).TargetValue - fVar7) & uVar1)) {
      (this->CurrentDelayLength).CurrentValue =
           fVar7 * (this->CurrentDelayLength).OneMinusEase +
           (this->CurrentDelayLength).EaseTimesTarget;
    }
  }
  fVar3 = FGenericPlatformMath::Fmod(this->PhasorPhase + __real_3f000000,fVar8);
  fVar7 = this->PhasorPhase;
  fVar2 = (this->CurrentDelayLength).CurrentValue;
  fVar4 = cosf((fVar7 - __real_3f000000) * __real_40490fdb);
  fVar5 = cosf((fVar3 - __real_3f000000) * __real_40490fdb);
  fVar6 = fVar7 + this->PhasorPhaseIncrement;
  this->PhasorPhase = fVar6;
  if (0.0 <= fVar6) {
    if (fVar8 < fVar6) {
      fVar6 = FGenericPlatformMath::Fmod(fVar6 - fVar8,fVar8);
      if (fVar6 == 0.0) {
        fVar6 = fVar8;
      }
    }
  }
  else {
    fVar6 = FGenericPlatformMath::Fmod
                      ((float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000),fVar8);
    if (fVar6 == 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = fVar8 - fVar6;
    }
  }
  this->PhasorPhase = fVar6;
  fVar7 = FDelay::ReadDelayAt(param_1,fVar2 * fVar7 + param_2);
  fVar8 = FDelay::ReadDelayAt(param_1,fVar2 * fVar3 + param_2);
  return fVar8 * fVar5 + fVar7 * fVar4;
}

// SetDelayLength @ 144519c70

void __thiscall
Audio::FTapDelayPitchShifter::SetDelayLength(FTapDelayPitchShifter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1;
  if (__real_42c80000 <= param_1) {
    fVar2 = __real_42c80000;
  }
  if (fVar2 <= __real_41200000) {
    fVar2 = __real_41200000;
  }
  if (__real_322bcc77 <
      (float)((uint)(fVar2 - this->CurrentTargetDelayLength) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CurrentTargetDelayLength = param_1;
    (this->CurrentDelayLength).TargetValue = fVar2;
    (this->CurrentDelayLength).EaseTimesTarget = fVar2 * (this->CurrentDelayLength).EaseFactor;
    fVar2 = (this->CurrentDelayLength).CurrentValue;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    this->PhasorPhaseIncrement =
         (fVar1 - this->CurrentPitchShiftRatio) / (fVar2 * __real_3a83126f * this->SampleRate);
  }
  return;
}

// SetPitchShift @ 14451c5d0

void __thiscall
Audio::FTapDelayPitchShifter::SetPitchShift(FTapDelayPitchShifter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (__real_42900000 <= param_1) {
    param_1 = __real_42900000;
  }
  if (param_1 <= __real_c2900000) {
    param_1 = __real_c2900000;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CurrentPitchShift) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CurrentPitchShift = param_1;
    fVar1 = __real_3f800000;
    if (param_1 != 0.0) {
      fVar1 = powf(__real_40000000,param_1 * __real_3daaaaab);
    }
    fVar2 = __real_3f800000 - fVar1;
    this->CurrentPitchShiftRatio = fVar1;
    fVar1 = (this->CurrentDelayLength).CurrentValue;
    if (fVar1 <= __real_3f800000) {
      fVar1 = __real_3f800000;
    }
    this->PhasorPhaseIncrement = fVar2 / (fVar1 * __real_3a83126f * this->SampleRate);
  }
  return;
}

// SetPitchShiftRatio @ 14451c670

void __thiscall
Audio::FTapDelayPitchShifter::SetPitchShiftRatio(FTapDelayPitchShifter *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CurrentPitchShiftRatio) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CurrentPitchShiftRatio = param_1;
    fVar2 = (this->CurrentDelayLength).CurrentValue;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    this->PhasorPhaseIncrement = (fVar1 - param_1) / (fVar2 * __real_3a83126f * this->SampleRate);
  }
  return;
}

// UpdatePhasorPhaseIncrement @ 144520110

void __thiscall
Audio::FTapDelayPitchShifter::UpdatePhasorPhaseIncrement(FTapDelayPitchShifter *this)

{
  float fVar1;
  
  fVar1 = (this->CurrentDelayLength).CurrentValue;
  if (fVar1 <= __real_3f800000) {
    fVar1 = __real_3f800000;
  }
  this->PhasorPhaseIncrement =
       (__real_3f800000 - this->CurrentPitchShiftRatio) /
       (fVar1 * __real_3a83126f * this->SampleRate);
  return;
}

