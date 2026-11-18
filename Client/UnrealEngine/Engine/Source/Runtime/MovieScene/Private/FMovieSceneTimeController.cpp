// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// ~FMovieSceneTimeController @ 1461856c0

void __thiscall
FMovieSceneTimeController::~FMovieSceneTimeController(FMovieSceneTimeController *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  return;
}

// OnIsReadyToPlay @ 1461bf6b0

bool __thiscall FMovieSceneTimeController::OnIsReadyToPlay(FMovieSceneTimeController *this)

{
  return true;
}

// OnPrepareToPlay @ 1461c0280

void __thiscall
FMovieSceneTimeController::OnPrepareToPlay
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnStartPlaying @ 1461c0f80

void __thiscall
FMovieSceneTimeController::OnStartPlaying
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnStopPlaying @ 1461c0ff0

void __thiscall
FMovieSceneTimeController::OnStopPlaying
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnTick @ 1461c1480

void __thiscall
FMovieSceneTimeController::OnTick(FMovieSceneTimeController *this,float param_1,float param_2)

{
  return;
}

// IsReadyToPlay @ 146222750

bool __thiscall FMovieSceneTimeController::IsReadyToPlay(FMovieSceneTimeController *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146222753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x18))();
  return (bool)uVar1;
}

// PlayerStatusChanged @ 146227f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController::PlayerStatusChanged
          (FMovieSceneTimeController *this,Type param_1,FQualifiedFrameTime *param_2)

{
  if ((this->PlaybackStartTime).bIsSet == false) {
    if (param_1 == Playing) {
      StartPlaying(this,param_2);
    }
  }
  else if (param_1 != Playing) {
    if (6 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    (**(code **)(this->_padding_ + 0x28))(this,param_2);
    if ((this->PlaybackStartTime).bIsSet != false) {
      (this->PlaybackStartTime).bIsSet = false;
      return;
    }
  }
  return;
}

// PrepareToPlay @ 146229bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController::PrepareToPlay
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
                    /* WARNING: Could not recover jumptable at 0x000146229c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  return;
}

// RequestCurrentTime @ 146230500

FFrameTime __thiscall
FMovieSceneTimeController::RequestCurrentTime
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1,float param_2,
          FFrameRate param_3)

{
  FFrameRate in_stack_00000028;
  
  this->DisplayRate = in_stack_00000028;
  (**(code **)(this->_padding_ + 0x30))();
  return (FFrameTime)param_1;
}

// Reset @ 146230660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController::Reset(FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  if ((this->PlaybackStartTime).bIsSet != false) {
    if (6 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    (**(code **)(this->_padding_ + 0x28))(this,param_1);
    if ((this->PlaybackStartTime).bIsSet != false) {
      (this->PlaybackStartTime).bIsSet = false;
    }
    StartPlaying(this,param_1);
  }
  return;
}

// StartPlaying @ 146237690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController::StartPlaying
          (FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  FFrameRate FVar1;
  
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  if ((TOptional<FQualifiedFrameTime> *)param_1 != &this->PlaybackStartTime) {
    FVar1 = param_1->Rate;
    (this->PlaybackStartTime).TypedValue.Time = param_1->Time;
    (this->PlaybackStartTime).TypedValue.Rate = FVar1;
    (this->PlaybackStartTime).bIsSet = true;
  }
                    /* WARNING: Could not recover jumptable at 0x00014623770e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,param_1);
  return;
}

// StopPlaying @ 1462384f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController::StopPlaying(FMovieSceneTimeController *this,FQualifiedFrameTime *param_1)

{
  if (6 < (byte)LogMovieScene._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1);
  if ((this->PlaybackStartTime).bIsSet != false) {
    (this->PlaybackStartTime).bIsSet = false;
  }
  return;
}

// Tick @ 1462389f0

void __thiscall
FMovieSceneTimeController::Tick(FMovieSceneTimeController *this,float param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001462389f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

