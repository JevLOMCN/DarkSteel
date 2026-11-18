// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~FMovieSceneTrackSegmentBlender @ 1461ff710

void __thiscall
FMovieSceneTrackSegmentBlender::~FMovieSceneTrackSegmentBlender
          (FMovieSceneTrackSegmentBlender *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneTrackSegmentBlender__6B_;
  return;
}

// Blend @ 146208990

void __thiscall
FMovieSceneTrackSegmentBlender::Blend
          (FMovieSceneTrackSegmentBlender *this,FSegmentBlendData *param_1)

{
  return;
}

// InsertEmptySpace @ 146221560

TOptional<FMovieSceneSegment> * __thiscall
FMovieSceneTrackSegmentBlender::InsertEmptySpace
          (FMovieSceneTrackSegmentBlender *this,
          TOptional<FMovieSceneSegment> *__return_storage_ptr__,TRange<FFrameNumber> *param_1,
          FMovieSceneSegment *param_2,FMovieSceneSegment *param_3)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

