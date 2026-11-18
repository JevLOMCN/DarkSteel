// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// ~IMovieSceneCustomClockSource @ 146c4ef90

void __thiscall
IMovieSceneCustomClockSource::~IMovieSceneCustomClockSource(IMovieSceneCustomClockSource *this)

{
  *this = (IMovieSceneCustomClockSource)&___7IMovieSceneCustomClockSource__6B_;
  return;
}

// OnRequestCurrentTime @ 146c57e60

FFrameTime __thiscall
IMovieSceneCustomClockSource::OnRequestCurrentTime
          (IMovieSceneCustomClockSource *this,FQualifiedFrameTime *param_1,float param_2)

{
  (param_1->Time).FrameNumber = 0;
  (param_1->Time).SubFrame = 0.0;
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 146c57f00

void __thiscall
IMovieSceneCustomClockSource::OnStartPlaying
          (IMovieSceneCustomClockSource *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnStopPlaying @ 146c57f30

void __thiscall
IMovieSceneCustomClockSource::OnStopPlaying
          (IMovieSceneCustomClockSource *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnTick @ 146c57ff0

void __thiscall
IMovieSceneCustomClockSource::OnTick(IMovieSceneCustomClockSource *this,float param_1,float param_2)

{
  return;
}

// _getUObject @ 146c5e400

UObject * __thiscall IMovieSceneCustomClockSource::_getUObject(IMovieSceneCustomClockSource *this)

{
  return (UObject *)0x0;
}

