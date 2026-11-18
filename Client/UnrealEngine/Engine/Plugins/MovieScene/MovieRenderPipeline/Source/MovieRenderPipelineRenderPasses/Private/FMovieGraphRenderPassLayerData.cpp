// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FMovieGraphRenderPassLayerData @ 14ddcb310

void __thiscall
FMovieGraphRenderPassLayerData::~FMovieGraphRenderPassLayerData
          (FMovieGraphRenderPassLayerData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

