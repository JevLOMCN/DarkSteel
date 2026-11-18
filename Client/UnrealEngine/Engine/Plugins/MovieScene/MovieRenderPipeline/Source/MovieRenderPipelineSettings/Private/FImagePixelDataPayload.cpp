// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 8

// ~FImagePixelDataPayload @ 14ddb1ad0

void __thiscall FImagePixelDataPayload::~FImagePixelDataPayload(FImagePixelDataPayload *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->Debug_OverrideFilename).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PassIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PassIdentifier).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FMoviePipelineRenderPassMetrics::~FMoviePipelineRenderPassMetrics(&this->SampleState);
  plVar4 = (longlong *)this->_padding_;
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
  this->_padding_ = (longlong)&___7IImagePixelDataPayload__6B_;
  return;
}

// Copy @ 14ddb32e0

TSharedRef<FImagePixelDataPayload,1> * __thiscall
FImagePixelDataPayload::Copy
          (FImagePixelDataPayload *this,TSharedRef<FImagePixelDataPayload,1> *__return_storage_ptr__
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = ::operator_new(0x300);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFImagePixelDataPayload___00_SharedPointerInternals__6B_
    ;
    pTVar1[1]._padding_ = (longlong)&___7FImagePixelDataPayload__6B_;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics
              ((FMoviePipelineRenderPassMetrics *)&pTVar1[2].SharedReferenceCount,&this->SampleState
              );
    ::FString::FString((FString *)(pTVar1 + 0x2c),&(this->PassIdentifier).Name);
    ::FString::FString((FString *)(pTVar1 + 0x2d),&(this->PassIdentifier).CameraName);
    *(bool *)&pTVar1[0x2e]._padding_ = this->bRequireTransparentOutput;
    *(int *)((longlong)&pTVar1[0x2e]._padding_ + 4) = this->SortingOrder;
    *(bool *)&pTVar1[0x2e].SharedReferenceCount = this->bCompositeToFinalImage;
    ::FString::FString((FString *)(pTVar1 + 0x2f),&this->Debug_OverrideFilename);
  }
  TSharedRef<FImagePixelDataPayload,1>::TSharedRef<FImagePixelDataPayload,1>
            (__return_storage_ptr__,(FImagePixelDataPayload *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// GetAccumulatorSize @ 14ddb3fd0

TIntPoint<int> __thiscall FImagePixelDataPayload::GetAccumulatorSize(FImagePixelDataPayload *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX =
       (this->SampleState).TileSize.field0_0x0._s_0.X *
       (this->SampleState).TileCounts.field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) =
       (this->SampleState).TileSize.field0_0x0._s_0.Y *
       (this->SampleState).TileCounts.field0_0x0._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// GetOverlapPaddedSize @ 14ddb40a0

TIntPoint<int> __thiscall FImagePixelDataPayload::GetOverlapPaddedSize(FImagePixelDataPayload *this)

{
  int iVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  iVar1 = (this->SampleState).TileSize.field0_0x0._s_0.Y;
  *(int *)in_RDX =
       (this->SampleState).TileSize.field0_0x0._s_0.X +
       (this->SampleState).OverlappedPad.field0_0x0._s_0.X * 2;
  *(int *)((longlong)in_RDX + 4) = iVar1 + (this->SampleState).OverlappedPad.field0_0x0._s_0.Y * 2;
  return (TIntPoint<int>)in_RDX;
}

// GetOverlapPaddedSizeIsValid @ 14ddb40d0

bool __thiscall
FImagePixelDataPayload::GetOverlapPaddedSizeIsValid
          (FImagePixelDataPayload *this,TIntPoint<int> param_1)

{
  if (((this->SampleState).TileSize.field0_0x0._s_0.X +
       (this->SampleState).OverlappedPad.field0_0x0._s_0.X * 2 == param_1.field0_0x0._0_4_) &&
     ((this->SampleState).TileSize.field0_0x0._s_0.Y +
      (this->SampleState).OverlappedPad.field0_0x0._s_0.Y * 2 == param_1.field0_0x0._4_4_)) {
    return true;
  }
  return false;
}

// GetOverlappedOffset @ 14ddb4110

TIntPoint<int> __thiscall FImagePixelDataPayload::GetOverlappedOffset(FImagePixelDataPayload *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->SampleState).OverlappedOffset.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetOverlappedSubpixelShift @ 14ddb4130

TVector2<double> * __thiscall
FImagePixelDataPayload::GetOverlappedSubpixelShift
          (FImagePixelDataPayload *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->SampleState).OverlappedSubpixelShift.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWeightFunctionParams @ 14ddb4460

void __thiscall
FImagePixelDataPayload::GetWeightFunctionParams
          (FImagePixelDataPayload *this,FTileWeight1D *param_1,FTileWeight1D *param_2)

{
  int iVar1;
  
  iVar1 = (this->SampleState).OverlappedPad.field0_0x0._s_0.X;
  MoviePipeline::FTileWeight1D::InitHelper
            (param_1,iVar1,(this->SampleState).TileSize.field0_0x0._s_0.X,iVar1);
  iVar1 = (this->SampleState).OverlappedPad.field0_0x0._s_0.Y;
  MoviePipeline::FTileWeight1D::InitHelper
            (param_2,iVar1,(this->SampleState).TileSize.field0_0x0._s_0.Y,iVar1);
  return;
}

