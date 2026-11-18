// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// ~FMovieSceneTimeController_ExternalClock @ 1461ff6d0

void __thiscall
FMovieSceneTimeController_ExternalClock::~FMovieSceneTimeController_ExternalClock
          (FMovieSceneTimeController_ExternalClock *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneTimeController__6B_;
  return;
}

// OnRequestCurrentTime @ 146225ed0

/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
FMovieSceneTimeController_ExternalClock::OnRequestCurrentTime
          (FMovieSceneTimeController_ExternalClock *this,FQualifiedFrameTime *param_1,float param_2)

{
  TOptional<double> *pTVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  FFrameTime FVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FFrameTime *in_R8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 in_register_00001284 [12];
  undefined1 auVar14 [16];
  float in_XMM3_Da;
  float fVar15;
  float fVar16;
  int local_res8;
  float fStackX_c;
  double local_68;
  FFrameRate local_60;
  FFrameRate FStack_58;
  
  auVar14._4_12_ = in_register_00001284;
  auVar14._0_4_ = param_2;
  if ((char)this->_padding_ == '\0') {
    param_1->Time = *in_R8;
  }
  else {
    local_60 = (FFrameRate)this->_padding_;
    FStack_58 = (FFrameRate)this->_padding_;
    if ((this->ClockStartTime).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FFrameTime)(*pcVar3)();
        return FVar5;
      }
    }
    dVar13 = (this->ClockStartTime).TypedValue;
    dVar9 = (double)(**(code **)(this->_padding_ + 0x38))(this);
    pTVar1 = &this->ClockLastUpdateTime;
    if ((this->ClockLastUpdateTime).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar5 = (FFrameTime)(*pcVar3)();
        return FVar5;
      }
    }
    this->AccumulatedDilation =
         (dVar9 - pTVar1->TypedValue) * ((double)in_XMM3_Da - __real_3ff0000000000000) +
         this->AccumulatedDilation;
    if ((TOptional<double> *)&local_68 != pTVar1) {
      pTVar1->TypedValue = dVar9;
      (this->ClockLastUpdateTime).bIsSet = true;
    }
    dVar2 = this->AccumulatedDilation;
    ConvertFrameTime((FFrameTime)&local_res8,local_60,FStack_58);
    dVar9 = ((double)in_R8[1].FrameNumber.Value * ((dVar9 - dVar13) + dVar2)) /
            (double)(int)in_R8[1].SubFrame;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar9;
    auVar14 = roundpd(auVar14,auVar11,1);
    dVar13 = auVar14._0_8_;
    dVar9 = dVar9 - dVar13;
    if (__real_41dfffffffc00000 <= dVar13) {
      dVar13 = __real_41dfffffffc00000;
    }
    if (dVar13 <= __real_c1e0000000000000) {
      dVar13 = __real_c1e0000000000000;
    }
    iVar7 = (int)dVar9;
    fVar15 = (float)dVar9 - (float)iVar7;
    if ((0.0 < fVar15) && (::FFrameTime::MaxSubframe <= fVar15)) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar15) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar15 = fVar15 + fStackX_c;
    iVar7 = ((int)ROUND((fVar15 + fVar15) - __real_3f000000) >> 1) + iVar7;
    iVar8 = (int)fVar15;
    fVar10 = fVar15;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar15)) {
      auVar12._4_4_ = fVar15;
      auVar12._0_4_ = fVar15;
      auVar12._8_8_ = 0;
      uVar6 = movmskps(iVar7,auVar12);
      fVar10 = (float)(int)(iVar8 - (uVar6 & 1));
    }
    fVar16 = fVar15 - fVar10;
    if (::FFrameTime::MaxSubframe <= fVar15 - fVar10) {
      fVar16 = ::FFrameTime::MaxSubframe;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (6 < (byte)LogMovieScene._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    }
    FVar5.SubFrame = fVar16;
    FVar5.FrameNumber.Value = (int)dVar13 + iVar7 + local_res8;
    param_1->Time = FVar5;
  }
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 146226d30

void __thiscall
FMovieSceneTimeController_ExternalClock::OnStartPlaying
          (FMovieSceneTimeController_ExternalClock *this,FQualifiedFrameTime *param_1)

{
  TOptional<double> *pTVar1;
  double dVar2;
  undefined8 local_18 [2];
  
  dVar2 = (double)(**(code **)(this->_padding_ + 0x38))();
  pTVar1 = &this->ClockLastUpdateTime;
  if ((TOptional<double> *)local_18 != pTVar1) {
    pTVar1->TypedValue = dVar2;
    (this->ClockLastUpdateTime).bIsSet = true;
  }
  if (pTVar1 != &this->ClockStartTime) {
    if ((this->ClockLastUpdateTime).bIsSet != false) {
      (this->ClockStartTime).TypedValue = pTVar1->TypedValue;
      (this->ClockStartTime).bIsSet = true;
      return;
    }
    if ((this->ClockStartTime).bIsSet != false) {
      (this->ClockStartTime).bIsSet = false;
    }
  }
  return;
}

// OnStopPlaying @ 146226e10

void __thiscall
FMovieSceneTimeController_ExternalClock::OnStopPlaying
          (FMovieSceneTimeController_ExternalClock *this,FQualifiedFrameTime *param_1)

{
  if ((this->ClockLastUpdateTime).bIsSet != false) {
    (this->ClockLastUpdateTime).bIsSet = false;
  }
  if ((this->ClockStartTime).bIsSet != false) {
    (this->ClockStartTime).bIsSet = false;
  }
  this->AccumulatedDilation = 0.0;
  return;
}

