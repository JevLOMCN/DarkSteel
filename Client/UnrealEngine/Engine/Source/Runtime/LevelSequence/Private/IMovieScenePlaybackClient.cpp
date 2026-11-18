// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 5

// ~IMovieScenePlaybackClient @ 146c4efd0

void __thiscall
IMovieScenePlaybackClient::~IMovieScenePlaybackClient(IMovieScenePlaybackClient *this)

{
  *this = (IMovieScenePlaybackClient)&___7IMovieScenePlaybackClient__6B_;
  return;
}

// GetAspectRatioAxisConstraint @ 146c53660

TOptional<EAspectRatioAxisConstraint> __thiscall
IMovieScenePlaybackClient::GetAspectRatioAxisConstraint(IMovieScenePlaybackClient *this)

{
  TOptional<EAspectRatioAxisConstraint> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetIsReplicatedPlayback @ 146c54730

bool __thiscall IMovieScenePlaybackClient::GetIsReplicatedPlayback(IMovieScenePlaybackClient *this)

{
  return false;
}

// WarpEvaluationRange @ 146c5da00

void __thiscall
IMovieScenePlaybackClient::WarpEvaluationRange
          (IMovieScenePlaybackClient *this,FMovieSceneEvaluationRange *param_1)

{
  return;
}

// _getUObject @ 146c5e410

UObject * __thiscall IMovieScenePlaybackClient::_getUObject(IMovieScenePlaybackClient *this)

{
  return (UObject *)0x0;
}

