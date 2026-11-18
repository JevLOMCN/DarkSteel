// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FImageSampleAccumulationArgs @ 14ddc5960

FImageSampleAccumulationArgs * __thiscall
MoviePipeline::FImageSampleAccumulationArgs::FImageSampleAccumulationArgs
          (FImageSampleAccumulationArgs *this,FImageSampleAccumulationArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->ImageAccumulator).Object = (param_1->ImageAccumulator).Object;
  pTVar1 = (param_1->ImageAccumulator).WeakReferenceCount.ReferenceController;
  (this->ImageAccumulator).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->OutputMerger).Object = (param_1->OutputMerger).Object;
  pTVar1 = (param_1->OutputMerger).WeakReferenceCount.ReferenceController;
  (this->OutputMerger).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->bAccumulateAlpha = param_1->bAccumulateAlpha;
  (this->LetterboxData).FrameActiveArea.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->LetterboxData).FrameActiveArea.field0_0x0._s_0.Min.field0_0x0;
  (this->LetterboxData).FrameActiveArea.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->LetterboxData).FrameActiveArea.field0_0x0._s_0.Max.field0_0x0;
  (this->LetterboxData).bDrawLetterboxBorder = (param_1->LetterboxData).bDrawLetterboxBorder;
  (this->LetterboxData).LeftSamplePixelsClearedBeforeAccumulation =
       (param_1->LetterboxData).LeftSamplePixelsClearedBeforeAccumulation;
  (this->LetterboxData).RightSamplePixelsClearedBeforeAccumulation =
       (param_1->LetterboxData).RightSamplePixelsClearedBeforeAccumulation;
  (this->LetterboxData).TopSamplePixelsClearedBeforeAccumulation =
       (param_1->LetterboxData).TopSamplePixelsClearedBeforeAccumulation;
  (this->LetterboxData).BottomSamplePixelsClearedBeforeAccumulation =
       (param_1->LetterboxData).BottomSamplePixelsClearedBeforeAccumulation;
  return this;
}

// ~FImageSampleAccumulationArgs @ 14ddcaef0

void __thiscall
MoviePipeline::FImageSampleAccumulationArgs::~FImageSampleAccumulationArgs
          (FImageSampleAccumulationArgs *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OutputMerger).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pTVar3 = (this->ImageAccumulator).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

