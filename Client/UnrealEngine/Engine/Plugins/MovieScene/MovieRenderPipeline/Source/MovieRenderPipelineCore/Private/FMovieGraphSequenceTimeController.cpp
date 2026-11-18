// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// OnRequestCurrentTime @ 14dcd9ce0

/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
UE::MovieGraph::FMovieGraphSequenceTimeController::OnRequestCurrentTime
          (FMovieGraphSequenceTimeController *this,FQualifiedFrameTime *param_1,float param_2)

{
  FFrameRate::TransformTime
            ((FFrameTime)param_1,(FFrameRate)(this->TimeCache).Time,(this->TimeCache).Rate);
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  return (FFrameTime)param_1;
}

