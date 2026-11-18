// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FQuartzClockTickRate @ 14733f830

FQuartzClockTickRate * __thiscall
Audio::FQuartzClockTickRate::FQuartzClockTickRate(FQuartzClockTickRate *this)

{
  this->BeatsPerMinute = 0.0;
  this->MillisecondsPerTick = 1.0;
  this->SecondsPerTick = 1.0;
  this->ThirtySecondNotesPerMinute = 1.0;
  this->SampleRate = 44100.0;
  this->FramesPerTick = 5512.5;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return this;
}

// GetFramesPerDuration @ 14734f320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Audio::FQuartzClockTickRate::GetFramesPerDuration
          (FQuartzClockTickRate *this,EQuartzCommandQuantization param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = this->FramesPerTick;
  dVar4 = dVar3 * __real_4010000000000000;
  switch(param_1) {
  case Bar:
  case WholeNote:
    return dVar3 * __real_4040000000000000;
  case Beat:
  case QuarterNote:
    return dVar3 * __real_4020000000000000;
  case ThirtySecondNote:
  case Tick:
    goto switchD_14734f366_caseD_2;
  case SixteenthNote:
    return dVar3 + dVar3;
  case EighthNote:
    return dVar4;
  case HalfNote:
    return dVar3 * __real_4030000000000000;
  case DottedSixteenthNote:
    return dVar3 * __real_4008000000000000;
  case DottedEighthNote:
    return dVar3 * __real_4018000000000000;
  case DottedQuarterNote:
    return dVar3 * __real_4028000000000000;
  case DottedHalfNote:
    return dVar3 * __real_4038000000000000;
  case DottedWholeNote:
    return dVar3 * __real_4048000000000000;
  case SixteenthNoteTriplet:
    return dVar4 * __real_3fd5555555555555;
  case EighthNoteTriplet:
    return dVar4 * __real_3fe5555555555555;
  case QuarterNoteTriplet:
    return dVar4 * ___real_3ff5555555555555;
  case HalfNoteTriplet:
    return dVar4 * ___real_4005555555555555;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x165,
                       L"Unexpected EAudioMixerCommandQuantization: Need to update switch statement for new quantization enumeration?"
                      );
    dVar3 = __real_bff0000000000000;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
switchD_14734f366_caseD_2:
    return dVar3;
  case None:
    return 0.0;
  }
}

// GetFramesPerDuration @ 14734f4a0

double __thiscall
Audio::FQuartzClockTickRate::GetFramesPerDuration
          (FQuartzClockTickRate *this,EQuartzTimeSignatureQuantization param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_1 == HalfNote) {
    dVar3 = GetFramesPerDuration(this,HalfNote);
    return dVar3;
  }
  if (param_1 == QuarterNote) {
    dVar3 = GetFramesPerDuration(this,QuarterNote);
    return dVar3;
  }
  if (param_1 == EighthNote) {
    dVar3 = GetFramesPerDuration(this,EighthNote);
    return dVar3;
  }
  if (param_1 != SixteenthNote) {
    if (param_1 == ThirtySecondNote) {
      dVar3 = GetFramesPerDuration(this,ThirtySecondNote);
      return dVar3;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x180,
                       L"Unexpected EQuartzTimeSignatureQuantization: Need to update switch statement for new quantization enumeration?"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
    return __real_bff0000000000000;
  }
  dVar3 = GetFramesPerDuration(this,SixteenthNote);
  return dVar3;
}

// IsSameTickRate @ 1473518d0

bool __thiscall
Audio::FQuartzClockTickRate::IsSameTickRate
          (FQuartzClockTickRate *this,FQuartzClockTickRate *param_1,bool param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  FQuartzClockTickRate local_48;
  
  if (param_2) {
    local_48.FramesPerTick = param_1->FramesPerTick;
    local_48.MillisecondsPerTick = param_1->MillisecondsPerTick;
    local_48.SecondsPerTick = param_1->SecondsPerTick;
    local_48.ThirtySecondNotesPerMinute = param_1->ThirtySecondNotesPerMinute;
    local_48.BeatsPerMinute = param_1->BeatsPerMinute;
    local_48.SampleRate = param_1->SampleRate;
    dVar1 = this->SampleRate;
    if (dVar1 < 0.0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNewSampleRate >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                         ,0x11d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    local_48.FramesPerTick = (dVar1 / local_48.SampleRate) * local_48.FramesPerTick;
    if (local_48.FramesPerTick <= __real_3ff0000000000000) {
      local_48.FramesPerTick = __real_3ff0000000000000;
    }
    local_48.SampleRate = dVar1;
    RecalculateDurationsBasedOnFramesPerTick(&local_48);
    bVar3 = local_48.FramesPerTick == this->FramesPerTick;
  }
  else {
    bVar3 = param_1->FramesPerTick == this->FramesPerTick;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// IsValid @ 147351a20

bool __thiscall Audio::FQuartzClockTickRate::IsValid(FQuartzClockTickRate *this,int param_1)

{
  int *local_res8;
  int local_res10 [6];
  
  if (param_1 < 1) {
    local_res8 = local_res10;
    local_res10[0] = param_1;
    `Audio::FQuartzClockTickRate::IsValid'::__l2::<lambda_1>::operator()(&local_res8);
    param_1 = local_res10[0];
  }
  return (double)param_1 < this->FramesPerTick || (double)param_1 == this->FramesPerTick;
}

// RecalculateDurationsBasedOnFramesPerTick @ 147354130

void __thiscall
Audio::FQuartzClockTickRate::RecalculateDurationsBasedOnFramesPerTick(FQuartzClockTickRate *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if (this->FramesPerTick <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FramesPerTick > 0.0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x1b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->SampleRate <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleRate > 0.0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar3 = this->FramesPerTick / this->SampleRate;
  dVar4 = this->SampleRate * __real_404e000000000000;
  this->SecondsPerTick = dVar3;
  dVar4 = dVar4 / this->FramesPerTick;
  this->MillisecondsPerTick = dVar3 * __real_408f400000000000;
  this->ThirtySecondNotesPerMinute = dVar4;
  this->BeatsPerMinute = dVar4 * __real_3fc0000000000000;
  return;
}

// SetBeatsPerMinute @ 1473570b0

void __thiscall
Audio::FQuartzClockTickRate::SetBeatsPerMinute(FQuartzClockTickRate *this,double param_1)

{
  double dVar1;
  
  dVar1 = (this->SampleRate * __real_401e000000000000) / param_1;
  if (dVar1 <= __real_3ff0000000000000) {
    dVar1 = __real_3ff0000000000000;
  }
  this->FramesPerTick = dVar1;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// SetFramesPerTick @ 1473570f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FQuartzClockTickRate::SetFramesPerTick(FQuartzClockTickRate *this,int param_1)

{
  if (param_1 < 1) {
    if (2 < (byte)LogAudioQuartz._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioQuartz);
    }
    param_1 = 1;
  }
  this->FramesPerTick = (double)param_1;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// SetMillisecondsPerTick @ 147357af0

void __thiscall
Audio::FQuartzClockTickRate::SetMillisecondsPerTick(FQuartzClockTickRate *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 * this->SampleRate * __real_3f50624dd2f1a9fc;
  if (dVar1 <= __real_3ff0000000000000) {
    dVar1 = __real_3ff0000000000000;
  }
  this->FramesPerTick = dVar1;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// SetSampleRate @ 147357df0

void __thiscall
Audio::FQuartzClockTickRate::SetSampleRate(FQuartzClockTickRate *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_1 < 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNewSampleRate >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x11d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar3 = this->SampleRate;
  this->SampleRate = param_1;
  dVar3 = (param_1 / dVar3) * this->FramesPerTick;
  if (dVar3 <= __real_3ff0000000000000) {
    dVar3 = __real_3ff0000000000000;
  }
  this->FramesPerTick = dVar3;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// SetSecondsPerTick @ 147358070

void __thiscall
Audio::FQuartzClockTickRate::SetSecondsPerTick(FQuartzClockTickRate *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 * this->SampleRate;
  if (dVar1 <= __real_3ff0000000000000) {
    dVar1 = __real_3ff0000000000000;
  }
  this->FramesPerTick = dVar1;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// SetThirtySecondNotesPerMinute @ 1473586d0

void __thiscall
Audio::FQuartzClockTickRate::SetThirtySecondNotesPerMinute
          (FQuartzClockTickRate *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNewThirtySecondNotesPerMinute > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\QuartzQuantizationUtilities.cpp"
                       ,0x108,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar3 = (this->SampleRate * __real_404e000000000000) / param_1;
  if (dVar3 <= __real_3ff0000000000000) {
    dVar3 = __real_3ff0000000000000;
  }
  this->FramesPerTick = dVar3;
  RecalculateDurationsBasedOnFramesPerTick(this);
  return;
}

// operator() @ 150506340

bool __thiscall `Audio::FQuartzClockTickRate::IsValid'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1281049780729938315>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1281049780729938315>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

