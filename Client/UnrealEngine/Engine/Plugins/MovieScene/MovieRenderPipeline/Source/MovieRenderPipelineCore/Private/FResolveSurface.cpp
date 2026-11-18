// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// FResolveSurface @ 14dd6ab20

FResolveSurface * __thiscall
FMoviePipelineSurfaceQueue::FResolveSurface::FResolveSurface
          (FResolveSurface *this,EPixelFormat param_1,TIntPoint<int> param_2,bool param_3)

{
  FMoviePipelineSurfaceReader *pFVar1;
  FMoviePipelineSurfaceReader *pFVar2;
  uint uStackX_1c;
  
  pFVar1 = ::operator_new(0x30);
  pFVar2 = (FMoviePipelineSurfaceReader *)0x0;
  if (pFVar1 != (FMoviePipelineSurfaceReader *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    (pFVar1->ReadbackTexture).Ptr = (FRHIGPUTextureReadback *)0x0;
    pFVar1->PixelFormat = param_1;
    pFVar1->bQueuedForCapture = false;
    pFVar1->bInvertAlpha = param_3;
    pFVar1->AvailableEvent = (FEvent *)0x0;
    pFVar2 = pFVar1;
  }
  TSharedRef<FMoviePipelineSurfaceReader,1>::
  TSharedRef<FMoviePipelineSurfaceReader,1><FMoviePipelineSurfaceReader>(&this->Surface,pFVar2);
  uStackX_1c = param_2.field0_0x0._4_4_;
  *(undefined8 *)&this->FunctionCallback = 0;
  *(undefined8 *)&(this->FunctionCallback).field_0x28 = 0;
  (this->FunctionPayload).Object = (FImagePixelDataPayload *)0x0;
  (this->FunctionPayload).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMoviePipelineSurfaceReader::ResizeImpl
            ((this->Surface).Object,param_2.field0_0x0._0_4_,uStackX_1c);
  return this;
}

