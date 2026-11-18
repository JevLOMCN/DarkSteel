// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// OnRequestCurrentTime @ 146226190

FFrameTime __thiscall
FMovieSceneTimeController_PlayEveryFrame::OnRequestCurrentTime
          (FMovieSceneTimeController_PlayEveryFrame *this,FQualifiedFrameTime *param_1,float param_2
          )

{
  FFrameRate FVar1;
  uint uVar2;
  FFrameTime FVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 in_register_00001284 [12];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  undefined8 local_res8;
  FFrameTime local_res10;
  
  auVar9._4_12_ = in_register_00001284;
  auVar9._0_4_ = param_2;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_res8);
  dVar10 = (double)local_res8 * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  dVar8 = this->PreviousPlatformTime;
  fVar5 = (float)(**(code **)(*(longlong *)CVarSequencerSecondsPerFrame._padding_ + 0xd0))();
  if ((double)fVar5 < dVar10 - dVar8) {
    FVar1 = *(FFrameRate *)((longlong)&this->_padding_ + 4);
    dVar10 = (((double)FVar1.Denominator / (double)FVar1.Numerator) * (double)FVar1.Numerator) /
             (double)FVar1.Denominator;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar10;
    auVar9 = roundpd(auVar9,auVar6,1);
    dVar8 = auVar9._0_8_;
    dVar10 = dVar10 - dVar8;
    if (__real_41dfffffffc00000 <= dVar8) {
      dVar8 = __real_41dfffffffc00000;
    }
    if (dVar8 <= __real_c1e0000000000000) {
      dVar8 = __real_c1e0000000000000;
    }
    iVar4 = (int)dVar10;
    fVar11 = (float)dVar10 - (float)iVar4;
    fVar5 = fVar11;
    if ((0.0 < fVar11) && (fVar5 = ::FFrameTime::MaxSubframe, fVar11 <= ::FFrameTime::MaxSubframe))
    {
      fVar5 = fVar11;
    }
    local_res8._4_4_ = ::FFrameTime::MaxSubframe;
    if (fVar5 <= ::FFrameTime::MaxSubframe) {
      local_res8._4_4_ = fVar5;
    }
    if ((float)local_res8._4_4_ <= 0.0) {
      local_res8._4_4_ = 0.0;
    }
    local_res8._0_4_ = (int)dVar8 + iVar4;
    FVar3 = ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)local_res8,FVar1);
    local_res10 = this->CurrentTime;
    local_res8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
    fVar11 = (float)local_res8._4_4_ + local_res10.SubFrame;
    local_res8._0_4_ =
         ((int)ROUND((fVar11 + fVar11) - __real_3f000000) >> 1) + (int)*(undefined8 *)FVar3 +
         local_res10.FrameNumber.Value.Value;
    iVar4 = (int)fVar11;
    fVar5 = fVar11;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar11)) {
      auVar7._4_4_ = fVar11;
      auVar7._0_4_ = fVar11;
      auVar7._8_8_ = 0;
      uVar2 = movmskps((undefined4)local_res8,auVar7);
      fVar5 = (float)(int)(iVar4 - (uVar2 & 1));
    }
    local_res8._4_4_ = fVar11 - fVar5;
    if (::FFrameTime::MaxSubframe <= fVar11 - fVar5) {
      local_res8._4_4_ = ::FFrameTime::MaxSubframe;
    }
    if ((float)local_res8._4_4_ <= 0.0) {
      local_res8._4_4_ = 0.0;
    }
    this->CurrentTime = (FFrameTime)local_res8;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_res8);
    this->PreviousPlatformTime =
         (double)local_res8 * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  }
  param_1->Time = this->CurrentTime;
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 146226d90

void __thiscall
FMovieSceneTimeController_PlayEveryFrame::OnStartPlaying
          (FMovieSceneTimeController_PlayEveryFrame *this,FQualifiedFrameTime *param_1)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->PreviousPlatformTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  this->CurrentTime = param_1->Time;
  return;
}

