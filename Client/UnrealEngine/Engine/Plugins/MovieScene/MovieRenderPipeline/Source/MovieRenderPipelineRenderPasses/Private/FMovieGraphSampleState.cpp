// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 3

// FMovieGraphSampleState @ 14ddc5ce0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphSampleState * __thiscall
UE::MovieGraph::FMovieGraphSampleState::FMovieGraphSampleState
          (FMovieGraphSampleState *this,FMovieGraphSampleState *param_1)

{
  int *piVar1;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FSoftClassPath *pFVar4;
  double dVar5;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieGraphSampleState_MovieGraph_UE__6B_;
  FMovieGraphTraversalContext::FMovieGraphTraversalContext
            (&this->TraversalContext,&param_1->TraversalContext);
  (this->OverscannedResolution).field0_0x0 = (param_1->OverscannedResolution).field0_0x0;
  (this->BackbufferResolution).field0_0x0 = (param_1->BackbufferResolution).field0_0x0;
  (this->UnpaddedTileSize).field0_0x0 = (param_1->UnpaddedTileSize).field0_0x0;
  (this->AccumulatorResolution).field0_0x0 = (param_1->AccumulatorResolution).field0_0x0;
  this->bWriteSampleToDisk = param_1->bWriteSampleToDisk;
  ::FString::FString(&this->Debug_OverrideFilename,&param_1->Debug_OverrideFilename);
  ::FString::FString(&this->FilenameFormatOverride,&param_1->FilenameFormatOverride);
  this->bRequiresAccumulator = param_1->bRequiresAccumulator;
  this->bFetchFromAccumulator = param_1->bFetchFromAccumulator;
  this->bCompositeOnOtherRenders = param_1->bCompositeOnOtherRenders;
  this->bAllowsCompositing = param_1->bAllowsCompositing;
  this->bIsBeautyPass = param_1->bIsBeautyPass;
  (this->OverlappedPad).field0_0x0 = (param_1->OverlappedPad).field0_0x0;
  (this->OverlappedOffset).field0_0x0 = (param_1->OverlappedOffset).field0_0x0;
  dVar5 = (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.X =
       (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.Y = dVar5;
  this->OverscanFraction = param_1->OverscanFraction;
  (this->CropRectangle).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
  (this->CropRectangle).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
  this->CompositingSortOrder = param_1->CompositingSortOrder;
  this->RenderLayerIndex = param_1->RenderLayerIndex;
  this->bAllowOCIO = param_1->bAllowOCIO;
  this->bForceLosslessCompression = param_1->bForceLosslessCompression;
  this->SceneCaptureSource = param_1->SceneCaptureSource;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&this->AdditionalFileMetadata,&param_1->AdditionalFileMetadata);
  ::FString::FString(&this->LayerNameOverride,&param_1->LayerNameOverride);
  pTVar2 = &this->OutputTypeRestrictions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->OutputTypeRestrictions).ArrayNum;
  pFVar4 = (FSoftClassPath *)(param_1->OutputTypeRestrictions).AllocatorInstance.Data;
  (this->OutputTypeRestrictions).ArrayNum = iVar3;
  piVar1 = &(this->OutputTypeRestrictions).ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FSoftClassPath,FSoftClassPath,int>((pTVar2->AllocatorInstance).Data,pFVar4,iVar3)
    ;
  }
  return this;
}

// FMovieGraphSampleState @ 14ddc5f00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphSampleState * __thiscall
UE::MovieGraph::FMovieGraphSampleState::FMovieGraphSampleState(FMovieGraphSampleState *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieGraphSampleState_MovieGraph_UE__6B_;
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(&this->TraversalContext);
  this->bWriteSampleToDisk = false;
  (this->Debug_OverrideFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug_OverrideFilename).Data.ArrayNum = 0;
  (this->Debug_OverrideFilename).Data.ArrayMax = 0;
  (this->FilenameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilenameFormatOverride).Data.ArrayNum = 0;
  (this->FilenameFormatOverride).Data.ArrayMax = 0;
  this->bRequiresAccumulator = false;
  this->bFetchFromAccumulator = false;
  this->bCompositeOnOtherRenders = false;
  this->bAllowsCompositing = true;
  this->bIsBeautyPass = false;
  *(undefined8 *)&this->OverscanFraction = 0;
  *(undefined8 *)((longlong)&(this->CropRectangle).field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->CropRectangle).field0_0x0._s_0.Max.field0_0x0 + 4) = 0;
  this->RenderLayerIndex = 0;
  this->bAllowOCIO = true;
  this->bForceLosslessCompression = false;
  *(undefined8 *)&this->AdditionalFileMetadata = 0;
  *(undefined8 *)&(this->AdditionalFileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalFileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalFileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalFileMetadata).field_0x48 = 0;
  (this->LayerNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerNameOverride).Data.ArrayNum = 0;
  (this->LayerNameOverride).Data.ArrayMax = 0;
  (this->OutputTypeRestrictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTypeRestrictions).ArrayNum = 0;
  (this->OutputTypeRestrictions).ArrayMax = 0;
  return this;
}

// operator= @ 14ddcc3c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphSampleState * __thiscall
UE::MovieGraph::FMovieGraphSampleState::operator=
          (FMovieGraphSampleState *this,FMovieGraphSampleState *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  FMovieGraphTraversalContext::operator=(&this->TraversalContext,&param_1->TraversalContext);
  pFVar1 = &param_1->Debug_OverrideFilename;
  (this->OverscannedResolution).field0_0x0 = (param_1->OverscannedResolution).field0_0x0;
  pFVar2 = &this->Debug_OverrideFilename;
  (this->BackbufferResolution).field0_0x0 = (param_1->BackbufferResolution).field0_0x0;
  (this->UnpaddedTileSize).field0_0x0 = (param_1->UnpaddedTileSize).field0_0x0;
  (this->AccumulatorResolution).field0_0x0 = (param_1->AccumulatorResolution).field0_0x0;
  this->bWriteSampleToDisk = param_1->bWriteSampleToDisk;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Debug_OverrideFilename).Data.ArrayNum = (param_1->Debug_OverrideFilename).Data.ArrayNum;
    (this->Debug_OverrideFilename).Data.ArrayMax = (param_1->Debug_OverrideFilename).Data.ArrayMax;
    (param_1->Debug_OverrideFilename).Data.ArrayNum = 0;
    (param_1->Debug_OverrideFilename).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FilenameFormatOverride;
  pFVar2 = &this->FilenameFormatOverride;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FilenameFormatOverride).Data.ArrayNum = (param_1->FilenameFormatOverride).Data.ArrayNum;
    (this->FilenameFormatOverride).Data.ArrayMax = (param_1->FilenameFormatOverride).Data.ArrayMax;
    (param_1->FilenameFormatOverride).Data.ArrayNum = 0;
    (param_1->FilenameFormatOverride).Data.ArrayMax = 0;
  }
  this->bRequiresAccumulator = param_1->bRequiresAccumulator;
  this->bFetchFromAccumulator = param_1->bFetchFromAccumulator;
  this->bCompositeOnOtherRenders = param_1->bCompositeOnOtherRenders;
  this->bAllowsCompositing = param_1->bAllowsCompositing;
  this->bIsBeautyPass = param_1->bIsBeautyPass;
  (this->OverlappedPad).field0_0x0 = (param_1->OverlappedPad).field0_0x0;
  (this->OverlappedOffset).field0_0x0 = (param_1->OverlappedOffset).field0_0x0;
  dVar6 = (param_1->OverlappedSubpixelShift).field0_0x0._s_0.Y;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.X =
       (param_1->OverlappedSubpixelShift).field0_0x0._s_0.X;
  (this->OverlappedSubpixelShift).field0_0x0._s_0.Y = dVar6;
  this->OverscanFraction = param_1->OverscanFraction;
  (this->CropRectangle).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Min.field0_0x0;
  (this->CropRectangle).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->CropRectangle).field0_0x0._s_0.Max.field0_0x0;
  this->CompositingSortOrder = param_1->CompositingSortOrder;
  this->RenderLayerIndex = param_1->RenderLayerIndex;
  this->bAllowOCIO = param_1->bAllowOCIO;
  this->bForceLosslessCompression = param_1->bForceLosslessCompression;
  this->SceneCaptureSource = param_1->SceneCaptureSource;
  if (&this->AdditionalFileMetadata != &param_1->AdditionalFileMetadata) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->AdditionalFileMetadata,
               (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->AdditionalFileMetadata);
  }
  pFVar1 = &param_1->LayerNameOverride;
  pFVar2 = &this->LayerNameOverride;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LayerNameOverride).Data.ArrayNum = (param_1->LayerNameOverride).Data.ArrayNum;
    (this->LayerNameOverride).Data.ArrayMax = (param_1->LayerNameOverride).Data.ArrayMax;
    (param_1->LayerNameOverride).Data.ArrayNum = 0;
    (param_1->LayerNameOverride).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->OutputTypeRestrictions;
  pTVar4 = &this->OutputTypeRestrictions;
  if (pTVar4 != pTVar3) {
    DestructItems<FSoftClassPath,int>
              ((FSoftClassPath *)(pTVar4->AllocatorInstance).Data,
               (this->OutputTypeRestrictions).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputTypeRestrictions).ArrayNum = (param_1->OutputTypeRestrictions).ArrayNum;
    (this->OutputTypeRestrictions).ArrayMax = (param_1->OutputTypeRestrictions).ArrayMax;
    (param_1->OutputTypeRestrictions).ArrayNum = 0;
    (param_1->OutputTypeRestrictions).ArrayMax = 0;
  }
  return this;
}

