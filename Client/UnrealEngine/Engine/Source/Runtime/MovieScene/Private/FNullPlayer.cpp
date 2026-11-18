// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// GetEvaluationTemplate @ 1462af0d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
FNullPlayer::GetEvaluationTemplate(FNullPlayer *this)

{
  return &this->RootInstance;
}

// GetPlaybackStatus @ 1462af5b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FNullPlayer::GetPlaybackStatus(FNullPlayer *this)

{
  return Stopped;
}

// GetViewportSettings @ 1462b13a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullPlayer::GetViewportSettings
          (FNullPlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// SetPlaybackStatus @ 1462bd230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNullPlayer::SetPlaybackStatus(FNullPlayer *this,Type param_1)

{
  return;
}

// SetViewportSettings @ 1462bd370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNullPlayer::SetViewportSettings
          (FNullPlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

