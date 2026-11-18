// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GetCurrentTime @ 1462175d0

double __thiscall
FMovieSceneTimeController_RelativeTimecodeClock::GetCurrentTime
          (FMovieSceneTimeController_RelativeTimecodeClock *this)

{
  LARGE_INTEGER local_res10 [3];
  
  if (FApp::CurrentFrameTime.bIsSet) {
    local_res10[0].s.HighPart = FApp::CurrentFrameTime.TypedValue.Time.SubFrame;
    return ((double)((longlong)FApp::CurrentFrameTime.TypedValue.Rate.Denominator *
                    (longlong)FApp::CurrentFrameTime.TypedValue.Time.FrameNumber.Value) +
           (double)FApp::CurrentFrameTime.TypedValue.Rate.Denominator *
           (double)(float)local_res10[0]._4_4_) /
           (double)FApp::CurrentFrameTime.TypedValue.Rate.Numerator + this->AccumulatedFrameTime;
  }
  QueryPerformanceCounter(local_res10);
  return (double)local_res10[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
}

// OnRequestCurrentTime @ 146226390

FFrameTime __thiscall
FMovieSceneTimeController_RelativeTimecodeClock::OnRequestCurrentTime
          (FMovieSceneTimeController_RelativeTimecodeClock *this,FQualifiedFrameTime *param_1,
          float param_2)

{
  TOptional<double> *pTVar1;
  double dVar2;
  FFrameTime FVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FFrameTime FVar8;
  float fStackX_c;
  float fStackX_14;
  LARGE_INTEGER local_68;
  double local_60;
  double local_58;
  FQualifiedFrameTime local_50 [3];
  
  bVar6 = FApp::CurrentFrameTime.bIsSet;
  if (FApp::CurrentFrameTime.bIsSet) {
    local_50[0] = FApp::CurrentFrameTime.TypedValue;
  }
  this->AccumulatedFrameTime = 0.0;
  iVar7 = (**(code **)(*(longlong *)CVarSequencerRelativeTimecodeSmoothing._padding_ + 200))();
  if ((iVar7 == 0) || (!bVar6)) goto LAB_146226500;
  if ((this->LastCurrentFrameTime).bIsSet == false) {
    FVar8 = local_50[0].Time;
LAB_1462264ac:
    QueryPerformanceCounter(&local_68);
    if ((TOptional<double> *)&local_58 != &this->TimeSinceCurrentFrameTime) {
      (this->TimeSinceCurrentFrameTime).TypedValue =
           (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      (this->TimeSinceCurrentFrameTime).bIsSet = true;
    }
  }
  else {
    if (((this->LastCurrentFrameTime).bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar8 = (FFrameTime)(*pcVar4)();
      return FVar8;
    }
    FVar8 = local_50[0].Time;
    FVar3 = (this->LastCurrentFrameTime).TypedValue;
    if (FVar3.FrameNumber.Value.Value != local_50[0].Time.FrameNumber.Value) goto LAB_1462264ac;
    fStackX_c = FVar3.SubFrame;
    fStackX_14 = local_50[0].Time.SubFrame;
    if (fStackX_c != fStackX_14) goto LAB_1462264ac;
    pTVar1 = &this->TimeSinceCurrentFrameTime;
    if ((this->TimeSinceCurrentFrameTime).bIsSet == false) {
      dVar2 = FWindowsPlatformTime::Seconds();
      if ((TOptional<double> *)&local_60 != pTVar1) {
        pTVar1->TypedValue = dVar2;
        (this->TimeSinceCurrentFrameTime).bIsSet = true;
      }
    }
    else {
      dVar2 = pTVar1->TypedValue;
      dVar5 = FWindowsPlatformTime::Seconds();
      this->AccumulatedFrameTime = dVar5 - dVar2;
    }
  }
  if (local_50 != (FQualifiedFrameTime *)&this->LastCurrentFrameTime) {
    (this->LastCurrentFrameTime).TypedValue = FVar8;
    (this->LastCurrentFrameTime).bIsSet = true;
  }
LAB_146226500:
  FMovieSceneTimeController_ExternalClock::OnRequestCurrentTime
            ((FMovieSceneTimeController_ExternalClock *)this,param_1,param_2);
  return (FFrameTime)param_1;
}

// OnStopPlaying @ 146226e40

void __thiscall
FMovieSceneTimeController_RelativeTimecodeClock::OnStopPlaying
          (FMovieSceneTimeController_RelativeTimecodeClock *this,FQualifiedFrameTime *param_1)

{
  if ((char)this->_padding_ != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
  }
  if ((char)this->_padding_ != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
  }
  this->_padding_ = 0;
  this->AccumulatedFrameTime = 0.0;
  if ((this->LastCurrentFrameTime).bIsSet != false) {
    (this->LastCurrentFrameTime).bIsSet = false;
  }
  if ((this->TimeSinceCurrentFrameTime).bIsSet != false) {
    (this->TimeSinceCurrentFrameTime).bIsSet = false;
  }
  return;
}

