// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// operator() @ 14ddcfcd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
::operator()(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
             *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1,
            TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *param_2,
            TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *param_3)

{
  _func___cdecl_void_void_ptr_TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_ptr_TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>_ptr_TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>_ptr
  *p_Var1;
  TFunctionStorage<0> *pTVar2;
  void *pvVar3;
  TFunctionStorage<0> *pTVar4;
  
  CheckCallable(this->Callable);
  p_Var1 = this->Callable;
  pTVar2 = *(TFunctionStorage<0> **)&(this->Storage).field_0x18;
  pTVar4 = &this->Storage;
  if (pTVar2 != (TFunctionStorage<0> *)0x0) {
    pTVar4 = pTVar2;
  }
  pvVar3 = (void *)(**(code **)(*(longlong *)pTVar4 + 8))();
  (*p_Var1)(pvVar3,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

