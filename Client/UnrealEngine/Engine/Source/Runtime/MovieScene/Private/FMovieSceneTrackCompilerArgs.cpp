// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FMovieSceneTrackCompilerArgs @ 146094210

FMovieSceneTrackCompilerArgs * __thiscall
FMovieSceneTrackCompilerArgs::FMovieSceneTrackCompilerArgs
          (FMovieSceneTrackCompilerArgs *this,UMovieSceneTrack *param_1,
          IMovieSceneTemplateGenerator *param_2)

{
  UMovieSceneTrack *this_00;
  code *pcVar1;
  bool bVar2;
  FMovieSceneTrackCompilerArgs *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  this->Generator = param_2;
  (this->ObjectBindingId).A = 0;
  (this->ObjectBindingId).B = 0;
  (this->ObjectBindingId).C = 0;
  (this->ObjectBindingId).D = 0;
  this->Track = param_1;
  if (param_1 == (UMovieSceneTrack *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Track",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\IMovieSceneTrackTemplateProducer.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneTrackCompilerArgs *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = this->Track;
  pUVar4 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
  if (pUVar5 != (UObject *)0x0) {
    this->DefaultCompletionMode = pUVar5[2].field_0x18;
    return this;
  }
  this->DefaultCompletionMode = RestoreState;
  return this;
}

