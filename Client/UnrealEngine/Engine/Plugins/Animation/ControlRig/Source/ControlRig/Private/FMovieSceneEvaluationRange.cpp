// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// GetTime @ 14a419cc0

FFrameTime __thiscall FMovieSceneEvaluationRange::GetTime(FMovieSceneEvaluationRange *this)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FFrameTime FVar5;
  FFrameTime in_RDX;
  
  iVar2 = (this->TimeOverride).Value;
  if (iVar2 != -0x80000000) {
    *(int *)in_RDX = iVar2;
    *(int *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  if (this->Direction == Forwards) {
    this = (FMovieSceneEvaluationRange *)&(this->EvaluationRange).UpperBound;
    uVar1 = (((TRangeBound<FFrameTime> *)this)->Type).Value;
  }
  else {
    uVar1 = (this->EvaluationRange).LowerBound.Type.Value;
  }
  if (uVar1 == '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FFrameTime)(*pcVar3)();
      return FVar5;
    }
  }
  *(FFrameTime *)in_RDX = (this->EvaluationRange).LowerBound.Value;
  return in_RDX;
}

