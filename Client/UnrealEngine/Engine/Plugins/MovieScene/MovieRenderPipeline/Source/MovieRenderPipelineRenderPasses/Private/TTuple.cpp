// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 6

// ~TTuple<FImagePixelData_*,FString> @ 14ddca660

void __thiscall
TTuple<FImagePixelData_*,FString>::~TTuple<FImagePixelData_*,FString>
          (TTuple<FImagePixelData_*,FString> *this)

{
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

// ~TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_> @ 14ddca680

void __thiscall
TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
::
~TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
          (TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
           *this)

{
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

// ~TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile> @ 14ddca6a0

void __thiscall
TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>
::
~TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>
          (TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>
           *this)

{
  DestructItems<FSceneViewStateReference,int>
            (*(FSceneViewStateReference **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

// ~TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_> @ 14ddca6e0

void __thiscall
TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>::
~TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>
          (TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// ~TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename> @ 14ddca700

void __thiscall
TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>::
~TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>
          (TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>
           *this)

{
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename::
  ~FEXROutputConfigForFilename((FEXROutputConfigForFilename *)&this->field_0x10);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TTuple<enum_UE::Color::EColorSpace,FString> @ 14ddca730

void __thiscall
TTuple<enum_UE::Color::EColorSpace,FString>::~TTuple<enum_UE::Color::EColorSpace,FString>
          (void *this)

{
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  return;
}

