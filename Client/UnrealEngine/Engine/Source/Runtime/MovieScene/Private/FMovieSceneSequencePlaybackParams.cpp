// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1461e8850

UScriptStruct * __cdecl FMovieSceneSequencePlaybackParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams,
                         (UObject *)pUVar1,L"MovieSceneSequencePlaybackParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequencePlaybackParams.OuterSingleton;
}

// GetPlaybackPosition @ 14621ab80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameTime __thiscall
FMovieSceneSequencePlaybackParams::GetPlaybackPosition
          (FMovieSceneSequencePlaybackParams *this,UMovieSceneSequence *param_1)

{
  EMovieScenePositionType EVar1;
  FFrameRate FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FFrameNumber FVar6;
  UMovieScene *this_00;
  FFrameTime FVar7;
  undefined4 extraout_var;
  FFrameRate FVar8;
  longlong *in_R8;
  uint uVar9;
  float extraout_XMM0_Da;
  FFrameRate local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  FFrameRate local_res20;
  undefined1 local_30 [8];
  
  param_1->_padding_ = 0;
  FVar8 = (FFrameRate)param_1;
  this_00 = (UMovieScene *)(**(code **)(*in_R8 + 0x2f8))();
  if (this_00 != (UMovieScene *)0x0) {
    EVar1 = this->PositionType;
    local_res20 = this_00->DisplayRate;
    FVar2 = this_00->TickResolution;
    if (EVar1 == Frame) {
      param_1->_padding_ = (longlong)this->Frame;
    }
    else {
      if (EVar1 == Time) {
        FVar7 = ::operator*(extraout_XMM0_Da,FVar8);
      }
      else {
        if (EVar1 != MarkedFrame) {
          if (EVar1 != Timecode) {
            return (FFrameTime)param_1;
          }
          FVar6 = FTimecode::ToFrameNumber(&this->Timecode,&local_res10);
          *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
          *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
          return (FFrameTime)param_1;
        }
        uVar5 = UMovieScene::FindMarkedFrameByLabel(this_00,&this->MarkedFrame);
        if (uVar5 == 0xffffffff) {
          return (FFrameTime)param_1;
        }
        uVar9 = 0;
        if ((int)uVar5 < (this_00->MarkedFrames).ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          FVar7 = (FFrameTime)(*pcVar3)();
          return FVar7;
        }
        uStackX_1c = 0;
        local_res18 = *(uint *)((this_00->MarkedFrames).AllocatorInstance.Data +
                               (longlong)(int)uVar5 * 0x20);
        FVar8.Denominator = 0;
        FVar8.Numerator = local_res18;
        FVar7 = ConvertFrameTime((FFrameTime)local_30,FVar8,FVar2);
      }
      param_1->_padding_ = *(longlong *)FVar7;
    }
  }
  return (FFrameTime)param_1;
}

// GetPlaybackPosition @ 14621acf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
FMovieSceneSequencePlaybackParams::GetPlaybackPosition
          (FMovieSceneSequencePlaybackParams *this,UMovieSceneSequencePlayer *param_1)

{
  EMovieScenePositionType EVar1;
  undefined4 uVar2;
  FFrameRate FVar3;
  code *pcVar4;
  FFrameRate FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FFrameNumber FVar9;
  UMovieScene *this_00;
  FFrameTime FVar10;
  undefined4 extraout_var;
  int iVar11;
  longlong in_R8;
  double dVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  double dVar14;
  float fVar15;
  FFrameRate local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  param_1->_padding_ = *(longlong *)(in_R8 + 0x354);
  EVar1 = this->PositionType;
  if (EVar1 == Frame) {
    param_1->_padding_ = (longlong)this->Frame;
    return (FFrameTime)param_1;
  }
  if (EVar1 == Time) {
    dVar14 = ((double)this->Time * (double)(int)*(undefined8 *)(in_R8 + 0x340)) /
             (double)(int)((ulonglong)*(undefined8 *)(in_R8 + 0x340) >> 0x20);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar14;
    auVar13 = roundpd(in_XMM2,auVar13,1);
    dVar12 = auVar13._0_8_;
    dVar14 = dVar14 - dVar12;
    if (__real_41dfffffffc00000 <= dVar12) {
      dVar12 = __real_41dfffffffc00000;
    }
    if (dVar12 <= __real_c1e0000000000000) {
      dVar12 = __real_c1e0000000000000;
    }
    iVar11 = (int)dVar14;
    fVar15 = (float)dVar14 - (float)iVar11;
    if ((0.0 < fVar15) && (::FFrameTime::MaxSubframe <= fVar15)) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar15) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    param_1->_padding_ = CONCAT44(fVar15,iVar11 + (int)dVar12);
  }
  else if (EVar1 == MarkedFrame) {
    if (*(longlong **)(in_R8 + 0x2d0) != (longlong *)0x0) {
      this_00 = (UMovieScene *)(**(code **)(**(longlong **)(in_R8 + 0x2d0) + 0x2f8))();
      if (this_00 == (UMovieScene *)0x0) {
        return (FFrameTime)param_1;
      }
      uVar7 = UMovieScene::FindMarkedFrameByLabel(this_00,&this->MarkedFrame);
      if (uVar7 != 0xffffffff) {
        FVar3 = this_00->TickResolution;
        uVar8 = 0;
        if ((int)uVar7 < (this_00->MarkedFrames).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            FVar10 = (FFrameTime)(*pcVar4)();
            return FVar10;
          }
        }
        uStackX_14 = 0;
        local_res10 = *(uint *)((this_00->MarkedFrames).AllocatorInstance.Data +
                               (longlong)(int)uVar7 * 0x20);
        FVar5.Denominator = 0;
        FVar5.Numerator = local_res10;
        FVar10 = ConvertFrameTime((FFrameTime)local_res20,FVar5,FVar3);
        param_1->_padding_ = *(longlong *)FVar10;
        return (FFrameTime)param_1;
      }
      return (FFrameTime)param_1;
    }
  }
  else if (EVar1 == Timecode) {
    local_res18 = *(undefined8 *)(in_R8 + 0x340);
    FVar9 = FTimecode::ToFrameNumber(&this->Timecode,&local_res8);
    uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Value);
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
    *(undefined4 *)&param_1->_padding_ = uVar2;
    return (FFrameTime)param_1;
  }
  return (FFrameTime)param_1;
}

