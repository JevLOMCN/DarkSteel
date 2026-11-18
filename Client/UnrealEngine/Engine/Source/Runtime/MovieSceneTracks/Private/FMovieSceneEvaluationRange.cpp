// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetOffsetTime @ 146834bd0

FFrameTime __thiscall
FMovieSceneEvaluationRange::GetOffsetTime(FMovieSceneEvaluationRange *this,FFrameTime param_1)

{
  EPlayDirection *pEVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFrameTime FVar5;
  int iVar6;
  undefined8 in_R8;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  FFrameTime local_res8;
  undefined8 local_res10;
  float fStackX_24;
  
  uVar4 = (this->TimeOverride).Value;
  FVar5.SubFrame = 0.0;
  FVar5.FrameNumber.Value = uVar4;
  pEVar1 = &this->Direction;
  if (uVar4 == 0x80000000) {
    if (*pEVar1 == Forwards) {
      this = (FMovieSceneEvaluationRange *)&(this->EvaluationRange).UpperBound;
    }
    if ((this->EvaluationRange).LowerBound.Type.Value == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FFrameTime)(*pcVar2)();
        return FVar5;
      }
    }
    local_res8 = (this->EvaluationRange).LowerBound.Value;
    FVar5 = local_res8;
  }
  else {
    local_res8.FrameNumber.Value = 0;
    local_res8.SubFrame = 0.0;
  }
  local_res10._4_4_ = (float)((ulonglong)in_R8 >> 0x20);
  fStackX_24 = local_res8.SubFrame;
  if (*pEVar1 == Forwards) {
    local_res10._4_4_ = local_res10._4_4_ + fStackX_24;
    local_res8.FrameNumber.Value =
         ((int)ROUND((local_res10._4_4_ + local_res10._4_4_) - __real_3f000000) >> 1) + (int)in_R8 +
         FVar5.FrameNumber.Value.Value;
    iVar6 = (int)local_res10._4_4_;
    fVar7 = local_res10._4_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != local_res10._4_4_)) {
      auVar8._4_4_ = local_res10._4_4_;
      auVar8._0_4_ = local_res10._4_4_;
      auVar8._8_8_ = 0;
      uVar4 = movmskps(local_res8.FrameNumber.Value,auVar8);
      fVar7 = (float)(int)(iVar6 - (uVar4 & 1));
    }
    local_res8.SubFrame = local_res10._4_4_ - fVar7;
    if (::FFrameTime::MaxSubframe <= local_res10._4_4_ - fVar7) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
  }
  else {
    auVar8 = roundps(in_XMM2,ZEXT416((uint)(fStackX_24 - local_res10._4_4_)),1);
    fVar7 = (fStackX_24 - local_res10._4_4_) - auVar8._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar7) {
      fVar7 = ::FFrameTime::MaxSubframe;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    local_res10 = CONCAT44(fVar7,(int)auVar8._0_4_ + (FVar5.FrameNumber.Value.Value - (int)in_R8));
    local_res8 = (FFrameTime)local_res10;
  }
  *(FFrameTime *)param_1 = local_res8;
  return param_1;
}

