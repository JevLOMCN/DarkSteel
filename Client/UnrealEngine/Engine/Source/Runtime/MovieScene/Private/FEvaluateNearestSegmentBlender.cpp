// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// InsertEmptySpace @ 146221520

TOptional<FMovieSceneSegment> * __thiscall
FEvaluateNearestSegmentBlender::InsertEmptySpace
          (FEvaluateNearestSegmentBlender *this,
          TOptional<FMovieSceneSegment> *__return_storage_ptr__,TRange<FFrameNumber> *param_1,
          FMovieSceneSegment *param_2,FMovieSceneSegment *param_3)

{
  MovieSceneSegmentCompiler::EvaluateNearestSegment(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

