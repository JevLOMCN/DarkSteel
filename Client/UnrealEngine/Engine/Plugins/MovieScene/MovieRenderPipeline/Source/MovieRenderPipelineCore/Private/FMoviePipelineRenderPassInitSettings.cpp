// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FMoviePipelineRenderPassInitSettings @ 14dd6a820

FMoviePipelineRenderPassInitSettings * __thiscall
MoviePipeline::FMoviePipelineRenderPassInitSettings::FMoviePipelineRenderPassInitSettings
          (FMoviePipelineRenderPassInitSettings *this)

{
  (this->BackbufferResolution).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->TileCount).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->FeatureLevel = GMaxRHIFeatureLevel;
  return this;
}

