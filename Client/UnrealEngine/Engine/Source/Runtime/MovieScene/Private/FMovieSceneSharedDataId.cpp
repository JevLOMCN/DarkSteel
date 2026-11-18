// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Allocate @ 146191c00

FMovieSceneSharedDataId __cdecl FMovieSceneSharedDataId::Allocate(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint *in_RCX;
  
  uVar3 = ::Counter + 1;
  ::Counter = uVar3;
  *in_RCX = uVar3;
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Counter != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationState.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FMovieSceneSharedDataId)uVar3;
    }
  }
  return (FMovieSceneSharedDataId)(uint)in_RCX;
}

