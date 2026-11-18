// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// OnRequestCurrentTime @ 146226530

FFrameTime __thiscall
FMovieSceneTimeController_Tick::OnRequestCurrentTime
          (FMovieSceneTimeController_Tick *this,FQualifiedFrameTime *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FFrameTime *in_R8;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar11;
  undefined1 in_register_00001284 [12];
  undefined1 auVar10 [16];
  double dVar12;
  float fVar13;
  undefined1 local_res8 [4];
  float fStackX_c;
  
  auVar10._4_12_ = in_register_00001284;
  auVar10._0_4_ = param_2;
  if ((char)this->_padding_ == '\0') {
    param_1->Time = *in_R8;
    return (FFrameTime)param_1;
  }
  ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)this->_padding_,(FFrameRate)this->_padding_);
  fVar1 = ::FFrameTime::MaxSubframe;
  dVar12 = ((double)in_R8[1].FrameNumber.Value * this->CurrentOffsetSeconds) /
           (double)(int)in_R8[1].SubFrame;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar12;
  auVar10 = roundpd(auVar10,auVar6,1);
  dVar12 = dVar12 - auVar10._0_8_;
  uVar8 = auVar10._0_4_;
  uVar11 = auVar10._4_4_;
  if (__real_41dfffffffc00000 <= auVar10._0_8_) {
    uVar8 = SUB84(__real_41dfffffffc00000,0);
    uVar11 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  if ((double)CONCAT44(uVar11,uVar8) <= __real_c1e0000000000000) {
    uVar8 = SUB84(__real_c1e0000000000000,0);
    uVar11 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  iVar4 = (int)dVar12;
  fVar13 = (float)dVar12 - (float)iVar4;
  fVar5 = fVar13;
  if ((0.0 < fVar13) && (fVar5 = ::FFrameTime::MaxSubframe, fVar13 <= ::FFrameTime::MaxSubframe)) {
    fVar5 = fVar13;
  }
  fVar13 = ::FFrameTime::MaxSubframe;
  if (fVar5 <= ::FFrameTime::MaxSubframe) {
    fVar13 = fVar5;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 + fStackX_c;
  iVar3 = (int)fVar13;
  (param_1->Time).FrameNumber.Value =
       (int)(double)CONCAT44(uVar11,uVar8) +
       ((int)ROUND((fVar13 + fVar13) - __real_3f000000) >> 1) + (int)_local_res8 + iVar4;
  fVar5 = fVar13;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar13)) {
    auVar7._4_4_ = fVar13;
    auVar7._0_4_ = fVar13;
    auVar7._8_8_ = 0;
    uVar2 = movmskps((int)_local_res8,auVar7);
    fVar5 = (float)(int)(iVar3 - (uVar2 & 1));
  }
  fVar9 = fVar13 - fVar5;
  if (fVar1 <= fVar13 - fVar5) {
    fVar9 = fVar1;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (param_1->Time).SubFrame = fVar9;
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 146226df0

void __thiscall
FMovieSceneTimeController_Tick::OnStartPlaying
          (FMovieSceneTimeController_Tick *this,FQualifiedFrameTime *param_1)

{
  this->CurrentOffsetSeconds = 0.0;
  return;
}

// OnTick @ 146226ea0

void __thiscall
FMovieSceneTimeController_Tick::OnTick
          (FMovieSceneTimeController_Tick *this,float param_1,float param_2)

{
  this->CurrentOffsetSeconds = (double)(param_1 * param_2) + this->CurrentOffsetSeconds;
  return;
}

