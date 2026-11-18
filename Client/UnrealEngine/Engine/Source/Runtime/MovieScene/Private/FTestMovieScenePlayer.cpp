// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// GetEvaluationTemplate @ 1462af0e0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
Impl::FTestMovieScenePlayer::GetEvaluationTemplate(FTestMovieScenePlayer *this)

{
  return &this->Template;
}

// GetPlaybackStatus @ 1462af5c0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall Impl::FTestMovieScenePlayer::GetPlaybackStatus(FTestMovieScenePlayer *this)

{
  return Playing;
}

// GetViewportSettings @ 1462b13b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Impl::FTestMovieScenePlayer::GetViewportSettings
          (FTestMovieScenePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// SetPlaybackStatus @ 1462bd240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Impl::FTestMovieScenePlayer::SetPlaybackStatus(FTestMovieScenePlayer *this,Type param_1)

{
  return;
}

// SetViewportSettings @ 1462bd380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Impl::FTestMovieScenePlayer::SetViewportSettings
          (FTestMovieScenePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

