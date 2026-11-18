// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// SortByStartTime @ 1460f9df0

bool __cdecl
FMovieSceneAdditiveCameraTrackBlender::SortByStartTime
          (FMovieSceneSectionData *param_1,FMovieSceneSectionData *param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  bool bVar2;
  TRangeBound<FFrameNumber> TVar3;
  FFrameNumber FVar4;
  FFrameNumber FVar5;
  
  TVar1 = (param_2->Section->SectionRange).Value.LowerBound;
  TVar3 = (param_1->Section->SectionRange).Value.LowerBound;
  FVar4 = TVar1.Value.Value;
  FVar5 = TVar3.Value.Value;
  if ((TVar3.Type.Value.Value != '\x02') &&
     ((TVar1.Type.Value.Value == '\x02' ||
      ((FVar4.Value <= FVar5.Value &&
       ((FVar4.Value < FVar5.Value || (TVar3.Type.Value.Value != '\x01')))))))) {
    TVar3 = TVar1;
    FVar5.Value = FVar4.Value;
  }
  TVar1 = (param_1->Section->SectionRange).Value.LowerBound;
  if ((TVar3.Type.Value.Value == TVar1.Type.Value.Value) &&
     ((TVar3.Type.Value.Value == '\x02' || (FVar5.Value == TVar1.Value.Value.Value)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

