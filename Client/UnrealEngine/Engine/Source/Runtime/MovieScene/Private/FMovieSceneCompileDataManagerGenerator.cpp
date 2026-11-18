// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// AddOwnedTrack @ 1460a7e70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneCompileDataManagerGenerator::AddOwnedTrack
          (FMovieSceneCompileDataManagerGenerator *this,FMovieSceneEvaluationTrack *param_1,
          UMovieSceneTrack *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneEvaluationTemplate *this_00;
  
  if (this->Entry == (FMovieSceneCompiledDataEntry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = this->Template;
  if (this_00 == (FMovieSceneEvaluationTemplate *)0x0) {
    this_00 = TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
                          *)&this->CompiledDataManager->TrackTemplates,(this->Entry->DataID).Value,
                         &(this->Entry->DataID).Value);
    this->Template = this_00;
  }
  FMovieSceneEvaluationTemplate::AddTrack
            (this_00,(FGuid *)&stack0x00000008,
             (FMovieSceneEvaluationTrack *)((longlong)&param_2->_padding_ + 4));
  return;
}

