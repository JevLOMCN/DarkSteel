// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FUpdateParamsAndContext @ 14611a700

FUpdateParamsAndContext * __thiscall
FMovieSceneEntitySystemRunner::FUpdateParamsAndContext::FUpdateParamsAndContext
          (FUpdateParamsAndContext *this,FUpdateParamsAndContext *param_1)

{
  *(undefined8 *)&this->OnFlushed = 0;
  *(undefined8 *)&(this->OnFlushed).field_0x8 = 0;
  *(undefined4 *)&(this->OnFlushed).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnFlushed,&param_1->OnFlushed);
  FMovieSceneContext::FMovieSceneContext(&this->Context,&param_1->Context);
  this->Params = param_1->Params;
  return this;
}

