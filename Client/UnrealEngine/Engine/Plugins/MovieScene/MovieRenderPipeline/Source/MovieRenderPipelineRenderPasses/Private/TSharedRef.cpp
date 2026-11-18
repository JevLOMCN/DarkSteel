// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 19

// TSharedRef<FImageOverlappedAccumulator,1> @ 14ddc4e20

TSharedRef<FImageOverlappedAccumulator,1> * __thiscall
TSharedRef<FImageOverlappedAccumulator,1>::TSharedRef<FImageOverlappedAccumulator,1>
          (TSharedRef<FImageOverlappedAccumulator,1> *this,FImageOverlappedAccumulator *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FImageOverlappedAccumulator,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FImageOverlappedAccumulator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FImageOverlappedAccumulator,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> @ 14ddc4ef0

TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> * __thiscall
TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>::
TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>
          (TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> *this,
          FMovieGraphPanoramicBlender *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FMovieGraphPanoramicBlender *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// ~TSharedRef<TAccumulatorPool<FImageOverlappedAccumulator>,1> @ 14ddc9f00

void __thiscall
TSharedRef<TAccumulatorPool<FImageOverlappedAccumulator>,1>::
~TSharedRef<TAccumulatorPool<FImageOverlappedAccumulator>,1>
          (TSharedRef<TAccumulatorPool<FImageOverlappedAccumulator>,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FAccumulatorPool::FAccumulatorInstance,1> @ 14ddc9f20

void __thiscall
TSharedRef<FAccumulatorPool::FAccumulatorInstance,1>::
~TSharedRef<FAccumulatorPool::FAccumulatorInstance,1>
          (TSharedRef<FAccumulatorPool::FAccumulatorInstance,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FImageOverlappedAccumulator,1> @ 14ddc9f40

void __thiscall
TSharedRef<FImageOverlappedAccumulator,1>::~TSharedRef<FImageOverlappedAccumulator,1>
          (TSharedRef<FImageOverlappedAccumulator,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FImagePixelDataPayload,1> @ 14ddc9f60

void __thiscall
TSharedRef<FImagePixelDataPayload,1>::~TSharedRef<FImagePixelDataPayload,1>
          (TSharedRef<FImagePixelDataPayload,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FImagePixelPipe,1> @ 14ddc9f80

void __thiscall
TSharedRef<FImagePixelPipe,1>::~TSharedRef<FImagePixelPipe,1>(TSharedRef<FImagePixelPipe,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> @ 14ddc9fa0

void __thiscall
TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>::
~TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
          (TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1> @ 14ddc9fc0

void __thiscall
TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1>::
~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1>
          (TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1> @ 14ddc9fe0

void __thiscall
TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>::
~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>
          (TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> @ 14ddca000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>::
~TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>
          (TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FMoviePipelineSurfaceQueue,1> @ 14ddca020

void __thiscall
TSharedRef<FMoviePipelineSurfaceQueue,1>::~TSharedRef<FMoviePipelineSurfaceQueue,1>
          (TSharedRef<FMoviePipelineSurfaceQueue,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> @ 14ddca040

void __thiscall
TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>::
~TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>
          (TSharedRef<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> @ 14ddca060

void __thiscall
TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>::
~TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>
          (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<TFutureState<bool>,1> @ 14ddca080

void __thiscall
TSharedRef<TFutureState<bool>,1>::~TSharedRef<TFutureState<bool>,1>
          (TSharedRef<TFutureState<bool>,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> @ 14ddca0a0

void __thiscall
TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>::
~TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>
          (TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FOpenColorIODisplayExtension,1> @ 14ddca0c0

void __thiscall
TSharedRef<FOpenColorIODisplayExtension,1>::~TSharedRef<FOpenColorIODisplayExtension,1>
          (TSharedRef<FOpenColorIODisplayExtension,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<FSceneViewFamilyContext,1> @ 14ddca0e0

void __thiscall
TSharedRef<FSceneViewFamilyContext,1>::~TSharedRef<FSceneViewFamilyContext,1>
          (TSharedRef<FSceneViewFamilyContext,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedRef<ISceneViewExtension,1> @ 14ddca100

void __thiscall
TSharedRef<ISceneViewExtension,1>::~TSharedRef<ISceneViewExtension,1>
          (TSharedRef<ISceneViewExtension,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

