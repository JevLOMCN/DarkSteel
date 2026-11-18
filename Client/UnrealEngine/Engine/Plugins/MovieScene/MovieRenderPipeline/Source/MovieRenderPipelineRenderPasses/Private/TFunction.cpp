// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// ~TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)> @ 14ddc9400

void __thiscall
TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>::
~TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
           *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ~TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)> @ 14ddc9430

void __thiscall
TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
::
~TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
          (TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
           *this)

{
  longlong *plVar1;
  
  if (*(longlong *)this != 0) {
    plVar1 = (longlong *)&this->field_0x10;
    if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

