// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// ~FMovieGraphWidgetPass @ 14dcb24a0

void __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::~FMovieGraphWidgetPass
          (FMovieGraphWidgetPass *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerData).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerData).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_1> @ 14dd08a90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

<lambda_1> * __thiscall
`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FMovieGraphTimeStepData::FMovieGraphTimeStepData(this,&param_1->InTimeData);
  FMovieGraphTraversalContext::FMovieGraphTraversalContext
            ((FMovieGraphTraversalContext *)((longlong)this + 0x80),
             &param_1->InFrameTraversalContext);
  uVar2 = *(undefined8 *)&(param_1->RenderTargetInitParams).TargetGamma;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x168) =
       (param_1->RenderTargetInitParams).Size.field0_0x0;
  *(undefined8 *)((longlong)this + 0x170) = uVar2;
  *(FName *)((longlong)this + 0x178) = (param_1->RenderDataIdentifier).RootBranchName;
  *(undefined8 *)((longlong)this + 0x180) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x180) =
       (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x188) = (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum;
  *(int *)((longlong)this + 0x18c) = (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 400) = 0;
  *(FScriptContainerElement **)((longlong)this + 400) =
       (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x198) = (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum;
  *(int *)((longlong)this + 0x19c) = (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x1a0) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x1a0) =
       (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x1a8) = (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum;
  *(int *)((longlong)this + 0x1ac) = (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x1b0) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x1b0) =
       (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data;
  (param_1->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x1b8) = (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum;
  *(int *)((longlong)this + 0x1bc) = (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (param_1->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  *(bool *)((longlong)this + 0x1c0) = param_1->bComposite;
  *(int *)((longlong)this + 0x1c4) = param_1->CompositingSortOrder;
  *(FRenderTarget **)((longlong)this + 0x1c8) = param_1->BackbufferRenderTarget;
  *(IMovieGraphOutputMerger **)((longlong)this + 0x1d0) = (param_1->OutputMerger).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x1d8) =
       (param_1->OutputMerger).SharedReferenceCount.ReferenceController;
  (param_1->OutputMerger).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->OutputMerger).Object = (IMovieGraphOutputMerger *)0x0;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x1e0) = (param_1->OverscannedResolution).field0_0x0;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x1e8) =
       (param_1->CropRect).field0_0x0._s_0.Min.field0_0x0;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x1f0) =
       (param_1->CropRect).field0_0x0._s_0.Max.field0_0x0;
  *(TIntPoint<int>_u_0 *)((longlong)this + 0x1f8) = (param_1->OutputResolution).field0_0x0;
  iVar1 = param_1->RenderLayerIndex;
  *(undefined8 *)((longlong)this + 0x208) = 0;
  *(int *)((longlong)this + 0x200) = iVar1;
  *(FScriptContainerElement **)((longlong)this + 0x208) =
       (param_1->OutputTypeRestrictions).AllocatorInstance.Data;
  (param_1->OutputTypeRestrictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x210) = (param_1->OutputTypeRestrictions).ArrayNum;
  *(int *)((longlong)this + 0x214) = (param_1->OutputTypeRestrictions).ArrayMax;
  (param_1->OutputTypeRestrictions).ArrayNum = 0;
  (param_1->OutputTypeRestrictions).ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x218) =
       (param_1->FileNameFormatOverride).Data.AllocatorInstance.Data;
  (param_1->FileNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x220) = (param_1->FileNameFormatOverride).Data.ArrayNum;
  *(int *)((longlong)this + 0x224) = (param_1->FileNameFormatOverride).Data.ArrayMax;
  (param_1->FileNameFormatOverride).Data.ArrayNum = 0;
  (param_1->FileNameFormatOverride).Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x228) =
       (param_1->LayerNameFormatOverride).Data.AllocatorInstance.Data;
  (param_1->LayerNameFormatOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x230) = (param_1->LayerNameFormatOverride).Data.ArrayNum;
  *(int *)((longlong)this + 0x234) = (param_1->LayerNameFormatOverride).Data.ArrayMax;
  (param_1->LayerNameFormatOverride).Data.ArrayNum = 0;
  (param_1->LayerNameFormatOverride).Data.ArrayMax = 0;
  return this;
}

// ~<lambda_1> @ 14dd0cc50

void __thiscall
`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>::~<lambda_1>
          (void *this)

{
  if (*(void **)((longlong)this + 0x228) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x228));
  }
  if (*(void **)((longlong)this + 0x218) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x218));
  }
  DestructItems<FSoftClassPath,int>
            (*(FSoftClassPath **)((longlong)this + 0x208),*(int *)((longlong)this + 0x210));
  if (*(void **)((longlong)this + 0x208) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x208));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x1d8));
  if (*(void **)((longlong)this + 0x1b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1b0));
  }
  if (*(void **)((longlong)this + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1a0));
  }
  if (*(void **)((longlong)this + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 400));
  }
  if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x180));
  }
  if (*(void **)((longlong)this + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd8));
  }
  if (*(void **)((longlong)this + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 200));
  }
  if (*(void **)((longlong)this + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb8));
  }
  if (*(void **)((longlong)this + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa8));
    return;
  }
  return;
}

// operator() @ 14dd0f6b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  IImagePixelDataPayload *pIVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  TImagePixelData<FColor> *pTVar8;
  TImagePixelData<FColor> *this_00;
  TImagePixelData<FColor> *pTVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  IImagePixelDataPayload IVar12;
  bool bVar13;
  TImagePixelData<FColor> *local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_1c8;
  TIntPoint<int>_u_0 local_1b8;
  int local_1b0;
  int iStack_1ac;
  ECubeFace local_1a8;
  ERangeCompressionMode EStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  undefined2 local_198;
  undefined2 uStack_196;
  int iStack_194;
  undefined4 uStack_190;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_188;
  TIntRect<int>_u_0 local_170;
  TSharedPtr<IImagePixelDataPayload,1> local_160;
  FMovieGraphTraversalContext local_148;
  FReadSurfaceDataFlags local_58;
  
  lVar5 = (**(code **)(**(longlong **)((longlong)this + 0x1c8) + 0x28))
                    (*(longlong **)((longlong)this + 0x1c8),local_res18);
  pTVar9 = (TImagePixelData<FColor> *)0x0;
  local_1b8 = (TIntPoint<int>_u_0)0x0;
  iVar2 = *(int *)(lVar5 + 4);
  piVar6 = (int *)(**(code **)(**(longlong **)((longlong)this + 0x1c8) + 0x28))
                            (*(longlong **)((longlong)this + 0x1c8),local_res20);
  local_1b0 = *piVar6;
  uVar10 = local_1b0 * iVar2;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  iStack_1ac = iVar2;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&local_1c8.AllocatorInstance,&local_1c8.ArrayNum,&local_1c8.ArrayMax);
  }
  local_1a8 = CubeFace_MAX;
  EStack_1a4 = RCM_MinMax;
  fStack_19c = 16000.0;
  local_198 = 0;
  iStack_194 = 0;
  uStack_190 = 0;
  uStack_1a0 = uStack_1a0 & 0xffffff00;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId244,"MRQ::FMovieGraphWidgetPass::ReadSurfaceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphWidgetRendererBaseNode.cpp"
               ,0xf4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId244);
  }
  local_170._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_1b8;
  local_170._12_4_ = iStack_1ac;
  local_170._8_4_ = local_1b0;
  local_58._18_2_ = uStack_196;
  local_58.bOutputStencil = (bool)(undefined1)local_198;
  local_58.MipLevel = local_198._1_1_;
  local_58.ArrayIndex = iStack_194;
  local_58.CubeFace = local_1a8;
  local_58.CompressionMode = EStack_1a4;
  local_58._8_4_ = uStack_1a0;
  local_58.MaxDepthRange = fStack_19c;
  local_58.GPUIndex = 0;
  puVar7 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 0x1c8) + 0x10))();
  FRHICommandListImmediate::ReadSurfaceData
            (param_1,(FRHITexture *)*puVar7,(TIntRect<int> *)&local_170._s_0,&local_1c8,&local_58);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMovieGraphTraversalContext::FMovieGraphTraversalContext
            (&local_148,(FMovieGraphTraversalContext *)((longlong)this + 0x80));
  local_148.Time.OutputFrameNumber = *(int *)this;
  local_148.Time.FrameDeltaTime = *(float *)((longlong)this + 0xc);
  local_148.Time.WorldTimeDilation = *(float *)((longlong)this + 0x10);
  local_148.Time.ShotOutputFrameNumber = *(int *)((longlong)this + 4);
  local_148.Time.RenderedFrameNumber = *(int *)((longlong)this + 8);
  local_148.Time.bHasRelativeTimeBeenUsed = *(bool *)((longlong)this + 0x14);
  local_148.Time.FrameRate = *(FFrameRate *)((longlong)this + 0x20);
  local_148.Time.TemporalSampleIndex = *(int *)((longlong)this + 0x28);
  local_148.Time.TemporalSampleCount = *(int *)((longlong)this + 0x2c);
  local_148.Time.SpatialSampleIndex = *(int *)((longlong)this + 0x30);
  local_148.Time.SpatialSampleCount = *(int *)((longlong)this + 0x34);
  local_148.Time.bIsFirstTemporalSampleForFrame = *(bool *)((longlong)this + 0x38);
  local_148.Time.bIsLastTemporalSampleForFrame = *(bool *)((longlong)this + 0x39);
  local_148.Time.bDiscardOutput = *(bool *)((longlong)this + 0x3a);
  local_148.Time.bRequiresAccumulator = *(bool *)((longlong)this + 0x3b);
  local_148.Time.WorldSeconds = *(float *)((longlong)this + 0x18);
  local_148.Time.MotionBlurFraction = *(float *)((longlong)this + 0x1c);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)((longlong)this + 0x40) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)((longlong)this + 0x40));
  }
  local_148.Time.EvaluatedConfig.field0_0x0 =
       *(TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)((longlong)this + 0x40);
  local_148.Time.RootTimeCode._0_8_ = *(undefined8 *)((longlong)this + 0x48);
  local_148.Time.RootTimeCode._8_8_ = *(undefined8 *)((longlong)this + 0x50);
  local_148.Time.RootTimeCode._16_8_ = *(undefined8 *)((longlong)this + 0x58);
  local_148.Time.RootFrameNumber.Value = *(int *)((longlong)this + 0x60);
  local_148.Time.ShotFrameNumber.Value = *(int *)((longlong)this + 0x7c);
  local_148.Time.ShotTimeCode._0_8_ = *(undefined8 *)((longlong)this + 100);
  local_148.Time.ShotTimeCode._8_8_ = *(undefined8 *)((longlong)this + 0x6c);
  local_148.RenderDataIdentifier.RootBranchName = *(FName *)((longlong)this + 0x178);
  local_148.Time.ShotTimeCode._16_8_ = *(undefined8 *)((longlong)this + 0x74);
  ::FString::operator=
            (&local_148.RenderDataIdentifier.LayerName,(FString *)((longlong)this + 0x180));
  ::FString::operator=
            (&local_148.RenderDataIdentifier.RendererName,(FString *)((longlong)this + 400));
  ::FString::operator=
            (&local_148.RenderDataIdentifier.SubResourceName,(FString *)((longlong)this + 0x1a0));
  ::FString::operator=
            (&local_148.RenderDataIdentifier.CameraName,(FString *)((longlong)this + 0x1b0));
  pTVar8 = ::operator_new(0x218);
  if (pTVar8 == (TImagePixelData<FColor> *)0x0) {
    IVar12 = (IImagePixelDataPayload)0x10;
    pTVar8 = pTVar9;
  }
  else {
    *(undefined4 *)&pTVar8->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar8->_padding_ + 4) = 1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieGraphSampleState_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    pTVar8->_padding_ = (longlong)&___7FMovieGraphSampleState_MovieGraph_UE__6B_;
    pTVar8->_padding_ = 0;
    pTVar8->_padding_ = 0;
    FMovieGraphTraversalContext::FMovieGraphTraversalContext
              ((FMovieGraphTraversalContext *)&pTVar8->Pixels);
    *(undefined1 *)&pTVar8[4].Pixels.ArrayNum = 0;
    IVar12 = (IImagePixelDataPayload)&pTVar8->_padding_;
    pTVar8[4].Pixels.ArrayMax = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5]._padding_ = 0;
    *(undefined4 *)&pTVar8[5]._padding_ = 0x1000000;
    *(undefined1 *)((longlong)&pTVar8[5]._padding_ + 4) = 0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6]._padding_ = 0;
    pTVar8[6]._padding_ = 0;
    *(undefined4 *)&pTVar8[6]._padding_ = 0;
    *(undefined2 *)((longlong)&pTVar8[6]._padding_ + 4) = 1;
    pTVar8[6].Pixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar8[6].Pixels.ArrayNum = 0;
    pTVar8[7]._padding_ = 0;
    *(undefined4 *)&pTVar8[7]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar8[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&pTVar8[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar8[7]._padding_ + 4) = 0;
    pTVar8[7].Pixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pTVar8[7].Pixels.ArrayNum = 0;
    pTVar8[7].Pixels.ArrayMax = 0;
    pTVar8[8]._padding_ = 0;
    pTVar8[8]._padding_ = 0;
    pTVar8[8]._padding_ = 0;
    if (IVar12 == (IImagePixelDataPayload)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14dd0fb0c;
    }
  }
  if (((*(IImagePixelDataPayload *)((longlong)IVar12 + 8) == (IImagePixelDataPayload)0x0) ||
      (*(IImagePixelDataPayload *)((longlong)IVar12 + 0x10) == (IImagePixelDataPayload)0x0)) ||
     (*(int *)((longlong)*(IImagePixelDataPayload *)((longlong)IVar12 + 0x10) + 8) < 1)) {
    if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    *(IImagePixelDataPayload *)((longlong)IVar12 + 8) = IVar12;
    if (pTVar8 != *(TImagePixelData<FColor> **)((longlong)IVar12 + 0x10)) {
      if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
        LOCK();
        piVar6 = (int *)((longlong)&pTVar8->_padding_ + 4);
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)((longlong)IVar12 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar6 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TImagePixelData<FColor> **)((longlong)IVar12 + 0x10) = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar8);
  }
LAB_14dd0fb0c:
  FMovieGraphTraversalContext::operator=
            ((FMovieGraphTraversalContext *)((longlong)IVar12 + 0x18),&local_148);
  *(IImagePixelDataPayload *)((longlong)IVar12 + 0x100) =
       *(IImagePixelDataPayload *)((longlong)this + 0x1e0);
  pIVar1 = (IImagePixelDataPayload *)((longlong)IVar12 + 0x1f8);
  *(IImagePixelDataPayload *)((longlong)IVar12 + 0x108) =
       *(IImagePixelDataPayload *)((longlong)this + 0x168);
  *(undefined8 *)((longlong)IVar12 + 0x174) = *(undefined8 *)((longlong)this + 0x1e8);
  *(undefined8 *)((longlong)IVar12 + 0x17c) = *(undefined8 *)((longlong)this + 0x1f0);
  *(undefined2 *)((longlong)IVar12 + 0x148) = 0;
  *(undefined1 *)((longlong)IVar12 + 0x14a) = *(undefined1 *)((longlong)this + 0x1c0);
  *(undefined4 *)((longlong)IVar12 + 0x184) = *(undefined4 *)((longlong)this + 0x1c4);
  *(undefined4 *)((longlong)IVar12 + 0x188) = *(undefined4 *)((longlong)this + 0x200);
  if (pIVar1 != (IImagePixelDataPayload *)((longlong)this + 0x208)) {
    DestructItems<FSoftClassPath,int>
              ((FSoftClassPath *)*(FScriptContainerElement **)pIVar1,
               *(int *)((longlong)IVar12 + 0x200));
    iVar2 = *(int *)((longlong)this + 0x210);
    piVar6 = (int *)((longlong)IVar12 + 0x204);
    FVar11.Data = *(FScriptContainerElement **)((longlong)this + 0x208);
    *(int *)((longlong)IVar12 + 0x200) = iVar2;
    if ((iVar2 == 0) && (*piVar6 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,*piVar6,(ForAnyElementType *)pIVar1,iVar2,piVar6);
      ConstructItems<FSoftClassPath,FSoftClassPath,int>
                (*(FScriptContainerElement **)pIVar1,(FSoftClassPath *)FVar11.Data,iVar2);
    }
  }
  ::FString::operator=((FString *)((longlong)IVar12 + 0x138),(FString *)((longlong)this + 0x218));
  ::FString::operator=((FString *)((longlong)IVar12 + 0x1e8),(FString *)((longlong)this + 0x228));
  FVar11.Data = local_1c8.AllocatorInstance.Data;
  local_188.ArrayNum = (long64)local_1c8.ArrayNum;
  local_188.ArrayMax = (long64)local_1c8.ArrayMax;
  local_188.AllocatorInstance.Data = local_1c8.AllocatorInstance.Data;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  this_00 = ::operator_new(0x40);
  if (this_00 != (TImagePixelData<FColor> *)0x0) {
    if (pTVar8 != (TImagePixelData<FColor> *)0x0) {
      LOCK();
      *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
      UNLOCK();
    }
    local_160.Object = (IImagePixelDataPayload *)IVar12;
    local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar8;
    pTVar9 = TImagePixelData<FColor>::TImagePixelData<FColor>
                       (this_00,(TIntPoint<int> *)((longlong)this + 0x1f8),&local_188,&local_160);
    FVar11.Data = local_188.AllocatorInstance.Data;
  }
  local_res8 = pTVar9;
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if ((*(longlong *)((longlong)this + 0x1d0) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(**(longlong **)((longlong)this + 0x1d0) + 0x18))
            (*(longlong **)((longlong)this + 0x1d0),&local_res8);
  if (local_res8 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)local_res8->_padding_)(local_res8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  if (local_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

// GatherOutputPasses @ 14dd20480

void __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GatherOutputPasses
          (FMovieGraphWidgetPass *this,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = &this->RenderDataIdentifier;
  if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_1->ArrayMax * 0x48)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  pFVar2 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
  *pFVar2 = pFVar1->RootBranchName;
  ::FString::FString((FString *)(pFVar2 + 1),&(this->RenderDataIdentifier).LayerName);
  ::FString::FString((FString *)(pFVar2 + 3),&(this->RenderDataIdentifier).RendererName);
  ::FString::FString((FString *)(pFVar2 + 5),&(this->RenderDataIdentifier).SubResourceName);
  ::FString::FString((FString *)(pFVar2 + 7),&(this->RenderDataIdentifier).CameraName);
  return;
}

// GetParentNode @ 14dd2bef0

UMovieGraphWidgetRendererBaseNode * __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GetParentNode
          (FMovieGraphWidgetPass *this,UMovieGraphEvaluatedConfig *param_1)

{
  int iVar1;
  FName FVar2;
  UMovieGraphWidgetRendererBaseNode *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  undefined1 local_res8 [8];
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  FVar2 = (this->RenderDataIdentifier).RootBranchName;
  pUVar5 = UMovieGraphWidgetRendererBaseNode::StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_18,pUVar5,FVar2,true,false);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(UMovieGraphWidgetRendererBaseNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar3 != (UMovieGraphWidgetRendererBaseNode *)0x0) {
      pUVar5 = UMovieGraphWidgetRendererBaseNode::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar3;
      }
    }
  }
  bVar4 = `UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GetParentNode'::__l3::
          <lambda_1>::operator()(local_res8);
  if (bVar4) {
    return (UMovieGraphWidgetRendererBaseNode *)0x0;
  }
  return (UMovieGraphWidgetRendererBaseNode *)0x0;
}

// Render @ 14dd3c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render
          (FMovieGraphWidgetPass *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  undefined1 uVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  UMovieGraphWidgetRendererBaseNode *this_00;
  FCommandList *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  FMovieGraphRenderDataIdentifier *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UObject *this_01;
  UMovieGraphPipeline *pUVar11;
  longlong *plVar12;
  UMovieGraphDefaultRenderer *pUVar13;
  FTextureRenderTargetResource *pFVar14;
  UClass *pUVar15;
  FWidgetRenderer *pFVar16;
  FHittestGrid *pFVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  FRenderCommandList *this_02;
  FRenderCommandTag *pFVar20;
  code **ppcVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  float in_XMM1_Da;
  float fVar25;
  double dVar26;
  double dVar27;
  undefined1 auStackY_dc8 [32];
  TIntPoint<int>_u_0 local_d88;
  TSharedPtr<SVirtualWindow,1> local_d80;
  FSoftClassPath *local_d70;
  undefined8 local_d68;
  FMovieGraphTimeStepData *local_d60;
  TIntPoint<int>_u_0 local_d58;
  float fStack_d50;
  undefined1 uStack_d4c;
  undefined2 uStack_d4b;
  undefined1 uStack_d49;
  TIntRect<int>_u_0 local_d48;
  UTextureRenderTarget2D *local_d38;
  FMovieGraphTraversalContext *local_d30;
  SWidget *local_d28;
  TReferenceControllerBase<1> *pTStack_d20;
  longlong *local_d18;
  FMovieGraphRenderDataIdentifier *local_d10;
  FRenderTarget *local_d08;
  IMovieGraphOutputMerger *local_d00;
  TIntPoint<int>_u_0 local_cf8 [2];
  TSharedRef<SWidget,1> local_ce8;
  TSharedRef<SWindow,1> local_cd8;
  TSharedRef<SWindow,1> local_cc8;
  TVector2<double>_u_0 local_cb8;
  TVector2<double>_u_0 local_ca8;
  void *local_c98 [2];
  void *local_c88 [2];
  <lambda_1> local_c78;
  code *local_a38 [2];
  code *local_a28 [3];
  code **local_a10;
  undefined1 local_a08 [40];
  code **local_9e0;
  byte local_9d8;
  FCameraInfo local_9c8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_dc8;
  local_d60 = param_2;
  local_d30 = param_1;
  this_01 = FWeakObjectPtr::Get(&(this->Renderer).WeakPtr);
  pUVar11 = UMovieGraphRendererBase::GetOwningGraph((UMovieGraphRendererBase *)this_01);
  plVar12 = (longlong *)
            (**(code **)(this->_padding_ + 0x38))
                      (this,(param_2->EvaluatedConfig).field0_0x0.DebugPtr);
  uVar10 = pUVar11->CurrentShotIndex;
  uVar23 = 0;
  if ((int)uVar10 < (pUVar11->ActiveShotList).ArrayNum) {
    uVar23 = ~uVar10 >> 0x1f;
  }
  local_d18 = plVar12;
  if ((uVar23 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(char *)(*(longlong *)
                 ((pUVar11->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) +
               0xcc) == '\x03') {
    pUVar13 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(&(this->Renderer).WeakPtr);
    UMovieGraphDefaultRenderer::GetCameraInfo(pUVar13,&local_9c8,(this->LayerData).CameraIndex);
    if ((local_9c8.bAllowCameraAspectRatio == false) ||
       (fVar25 = local_9c8.ViewInfo.AspectRatio, local_9c8.ViewInfo.bConstrainAspectRatio == 0)) {
      fVar25 = 0.0;
    }
    pUVar13 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(&(this->Renderer).WeakPtr);
    fVar24 = UMovieGraphDefaultRenderer::GetCameraOverscan(pUVar13,(this->LayerData).CameraIndex);
    UMovieGraphBlueprintLibrary::GetOverscannedResolution
              ((UMovieGraphEvaluatedConfig *)&local_cf8[0]._s_0,in_XMM1_Da,fVar24);
    UMovieGraphBlueprintLibrary::GetOverscanCropRectangle
              ((TIntRect<int> *)&local_d48._s_0,(param_2->EvaluatedConfig).field0_0x0.DebugPtr,
               fVar24,fVar25);
    local_d88._s_0.Y = local_d48._12_4_ - local_d48._4_4_;
    local_d88._s_0.X = local_d48._8_4_ - local_d48._0_4_;
    if ((GRHIGlobals.MaxTextureDimensions.Value < local_d88._s_0.X) ||
       (GRHIGlobals.MaxTextureDimensions.Value < local_d88._s_0.Y)) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else if ((local_d88._s_0.X == 0) || (local_d88._s_0.Y == 0)) {
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else {
      local_d58._s_0.Y = local_d88._s_0.Y;
      local_d58._s_0.X = local_d88._s_0.X;
      uStack_d4c = 0;
      fStack_d50 = UTextureRenderTarget::GetDefaultDisplayGamma();
      uStack_d4b = 2;
      pUVar13 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(&(this->Renderer).WeakPtr);
      local_d10 = &this->RenderDataIdentifier;
      local_d38 = UMovieGraphDefaultRenderer::GetOrCreateViewRenderTarget
                            (pUVar13,(FRenderTargetInitParams *)&local_d58._s_0,local_d10);
      if ((param_1->Time).bIsFirstTemporalSampleForFrame != false) {
        pFVar14 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            ((UTextureRenderTarget *)local_d38);
        local_d08 = (FRenderTarget *)&pFVar14->_padding_;
        if (pFVar14 == (FTextureRenderTargetResource *)0x0) {
          local_d08 = (FRenderTarget *)0x0;
        }
        local_d00 = (pUVar11->OutputMerger).Object;
        pTVar3 = (pUVar11->OutputMerger).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar15 = (UClass *)plVar12[2];
        if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar15);
        }
        this_00 = (UMovieGraphWidgetRendererBaseNode *)
                  (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar15 = UMovieGraphWidgetRendererBaseNode::StaticClass();
        iVar2 = (int)pUVar15->_padding_;
        if (((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
             &pUVar15->_padding_)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        GetOrCreateVirtualWindow(this_00,&local_d80,(TIntPoint<int> *)&local_d88._s_0);
        (**(code **)(this->_padding_ + 0x18))(this,&local_d28,plVar12);
        if (local_d28 == (SWidget *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_d20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d80.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
        else {
          if ((local_d80.Object == (SVirtualWindow *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((local_d28 == (SWidget *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_ce8.Object = local_d28;
          local_ce8.SharedReferenceCount.ReferenceController = pTStack_d20;
          if (pTStack_d20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_d20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_d20->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_d28 == (SWidget *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          SWindow::SetContent((SWindow *)local_d80.Object,&local_ce8);
          pFVar16 = TSharedPtr<FWidgetRenderer,1>::operator->(&this_00->WidgetRenderer);
          dVar26 = (double)local_d88._s_0.X;
          fVar25 = local_d60->FrameDeltaTime;
          dVar27 = (double)local_d88._s_0.Y;
          if ((local_d80.Object == (SVirtualWindow *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar6.ReferenceController = local_d80.SharedReferenceCount.ReferenceController;
          if (local_d80.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_d80.Object == (SVirtualWindow *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_cd8.Object = (SWindow *)local_d80.Object;
          local_cd8.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar6.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_d80.Object == (SVirtualWindow *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = SWindow::GetHittestGrid((SWindow *)local_d80.Object);
          fVar24 = __real_3f800000;
          local_cb8._s_0.X = dVar26;
          local_cb8._s_0.Y = dVar27;
          FWidgetRenderer::DrawWindow
                    (pFVar16,local_d38,pFVar17,&local_cd8,__real_3f800000,
                     (TVector2<double> *)&local_cb8._s_0,fVar25,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar6.ReferenceController);
          if ((local_d30->Time).ShotOutputFrameNumber == 0) {
            pFVar16 = TSharedPtr<FWidgetRenderer,1>::operator->(&this_00->WidgetRenderer);
            dVar26 = (double)local_d88._s_0.X;
            fVar25 = local_d60->FrameDeltaTime;
            dVar27 = (double)local_d88._s_0.Y;
            if ((local_d80.Object == (SVirtualWindow *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar6.ReferenceController = local_d80.SharedReferenceCount.ReferenceController;
            if (local_d80.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_d80.Object == (SVirtualWindow *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_cc8.Object = (SWindow *)local_d80.Object;
            local_cc8.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
            if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar6.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((local_d80.Object == (SVirtualWindow *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar17 = SWindow::GetHittestGrid((SWindow *)local_d80.Object);
            local_ca8._s_0.X = dVar26;
            local_ca8._s_0.Y = dVar27;
            FWidgetRenderer::DrawWindow
                      (pFVar16,local_d38,pFVar17,&local_cc8,fVar24,
                       (TVector2<double> *)&local_ca8._s_0,fVar25,false);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar6.ReferenceController);
          }
          plVar12 = local_d18;
          uVar1 = *(undefined1 *)((longlong)local_d18 + 0xd9);
          iVar9 = (**(code **)(this->_padding_ + 0x30))(this);
          iVar2 = (this->LayerData).LayerIndex;
          (**(code **)(*plVar12 + 0x3c0))(plVar12,&local_d70);
          puVar18 = (undefined8 *)(**(code **)(*plVar12 + 0x3d0))(plVar12,local_c88);
          puVar19 = (undefined8 *)(**(code **)(*plVar12 + 0x3d8))(plVar12,local_c98);
          FMovieGraphTimeStepData::FMovieGraphTimeStepData(&local_c78.InTimeData,local_d60);
          FMovieGraphTraversalContext::FMovieGraphTraversalContext
                    (&local_c78.InFrameTraversalContext,local_d30);
          pFVar7 = local_d10;
          local_c78.RenderTargetInitParams.bForceLinearGamma = (bool)uStack_d4c;
          local_c78.RenderTargetInitParams.TargetGamma = fStack_d50;
          local_c78.RenderTargetInitParams.PixelFormat = (undefined1)uStack_d4b;
          local_c78.RenderTargetInitParams.bIncludeInPreviewWindow = (bool)uStack_d4b._1_1_;
          local_c78.RenderTargetInitParams._15_1_ = uStack_d49;
          local_c78.RenderDataIdentifier.RootBranchName = local_d10->RootBranchName;
          local_c78.RenderTargetInitParams.Size.field0_0x0 = local_d58;
          ::FString::FString(&local_c78.RenderDataIdentifier.LayerName,&local_d10->LayerName);
          ::FString::FString(&local_c78.RenderDataIdentifier.RendererName,&pFVar7->RendererName);
          ::FString::FString(&local_c78.RenderDataIdentifier.SubResourceName,
                             &pFVar7->SubResourceName);
          ::FString::FString(&local_c78.RenderDataIdentifier.CameraName,&pFVar7->CameraName);
          local_c78.BackbufferRenderTarget = local_d08;
          local_c78.OutputMerger.Object = local_d00;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_c78.OverscannedResolution.field0_0x0 = local_cf8[0];
          local_c78.OutputResolution.field0_0x0._s_0.Y = local_d88._s_0.Y;
          local_c78.OutputResolution.field0_0x0._s_0.X = local_d88._s_0.X;
          local_c78.OutputTypeRestrictions.AllocatorInstance.Data =
               (FScriptContainerElement *)local_d70;
          local_c78.OutputTypeRestrictions.ArrayNum = (int)local_d68;
          local_c78.OutputTypeRestrictions.ArrayMax = local_d68._4_4_;
          local_d68 = 0;
          local_d70 = (FSoftClassPath *)0x0;
          local_c78.FileNameFormatOverride.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)*puVar18;
          *puVar18 = 0;
          local_c78.FileNameFormatOverride.Data.ArrayNum = *(int *)(puVar18 + 1);
          local_c78.FileNameFormatOverride.Data.ArrayMax = *(int *)((longlong)puVar18 + 0xc);
          puVar18[1] = 0;
          local_c78.LayerNameFormatOverride.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)*puVar19;
          *puVar19 = 0;
          local_c78.LayerNameFormatOverride.Data.ArrayNum = *(int *)(puVar19 + 1);
          local_c78.LayerNameFormatOverride.Data.ArrayMax = *(int *)((longlong)puVar19 + 0xc);
          puVar19[1] = 0;
          local_a38[0] = (code *)0x0;
          local_c78.bComposite = (bool)uVar1;
          local_c78.CompositingSortOrder = iVar9;
          local_c78.OutputMerger.SharedReferenceCount.ReferenceController = pTVar3;
          local_c78.RenderLayerIndex = iVar2;
          local_a10 = FMemory::Malloc(0x240,8);
          ppcVar21 = local_a10 + 1;
          *local_a10 = (code *)&UE::Core::Private::Function::
                                TFunction_OwnedObject<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::`50'::<lambda_1>,1,1>
                                ::_vftable_;
          `UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>::
          <lambda_1>(ppcVar21,&local_c78);
          if (ppcVar21 != (code **)0x0) {
            local_a38[0] = UE::Core::Private::Function::
                           TFunctionRefCaller<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>,void,FRHICommandListImmediate_&>
                           ::Call;
          }
          this_02 = FRenderCommandList::GetInstanceTLS();
          if (this_02 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render_::__l50::TSTR_WidgetRenderTargetResolveCommand214>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a38);
          }
          else {
            if (this_02->bInitialized == 0) {
              FRenderCommandList::Init(this_02);
            }
            iVar2 = (this_02->CommandLists).ArrayNum;
            uVar23 = iVar2 - 1;
            uVar10 = 0;
            if ((int)uVar23 < iVar2) {
              uVar10 = ~uVar23 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar2 = (this_02->CommandLists).ArrayNum;
            local_a08._0_8_ = local_a38[0];
            local_a38[0] = (code *)0x0;
            local_a08._16_8_ = local_a28[0];
            local_a08._24_8_ = local_a28[1];
            local_a08._32_8_ = local_a28[2];
            local_9d8 = 2;
            pFVar4 = (this_02->CommandLists).AllocatorInstance.Data;
            local_9e0 = local_a10;
            local_a10 = (code **)0x0;
            pFVar20 = (FRenderCommandTag *)
                      TRenderCommandTag<`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::TSTR_WidgetRenderTargetResolveCommand214>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (pFVar4 + (iVar2 + -1),
                       (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_a08,pFVar20);
            uVar22 = (ulonglong)local_9d8;
            if ((2 < uVar22) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_a08._0_8_ != (code *)0x0) {
                ppcVar21 = (code **)(local_a08 + 0x10);
                if (local_9e0 != (code **)0x0) {
                  ppcVar21 = local_9e0;
                }
                (**(code **)(*ppcVar21 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22])(local_a08);
            }
          }
          if (local_a38[0] != (code *)0x0) {
            ppcVar21 = local_a38 + 2;
            if (local_a10 != (code **)0x0) {
              ppcVar21 = local_a10;
            }
            (**(code **)(*ppcVar21 + 0x10))();
          }
          `UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Render'::__l50::<lambda_1>::
          ~<lambda_1>(&local_c78);
          if (local_c98[0] != (void *)0x0) {
            FMemory::Free(local_c98[0]);
          }
          if (local_c88[0] != (void *)0x0) {
            FMemory::Free(local_c88[0]);
          }
          DestructItems<FSoftClassPath,int>(local_d70,(int)local_d68);
          if (local_d70 != (FSoftClassPath *)0x0) {
            FMemory::Free(local_d70);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_d20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d80.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
      }
    }
    if (local_9c8.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_9c8.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                    AllocatorInstance.Data);
    }
  }
  return;
}

// Setup @ 14dd41780

void __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Setup
          (FMovieGraphWidgetPass *this,
          TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1,
          FMovieGraphRenderPassLayerData *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  (this->LayerData).BranchName = param_2->BranchName;
  ::FString::operator=(&(this->LayerData).LayerName,&param_2->LayerName);
  (this->LayerData).CameraIndex = param_2->CameraIndex;
  ::FString::operator=(&(this->LayerData).CameraName,&param_2->CameraName);
  (this->LayerData).LayerIndex = param_2->LayerIndex;
  (this->LayerData).NumCameras = param_2->NumCameras;
  (this->LayerData).RenderPassNode.WeakPtr = (param_2->RenderPassNode).WeakPtr;
  (this->Renderer).WeakPtr = param_1.WeakPtr;
  (this->RenderDataIdentifier).RootBranchName = (this->LayerData).BranchName;
  iVar2 = (this->LayerData).LayerName.Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            (&(this->RenderDataIdentifier).LayerName,
             (wchar_t *)(this->LayerData).LayerName.Data.AllocatorInstance.Data,iVar5);
  pUVar4 = FWeakObjectPtr::Get(&(param_2->RenderPassNode).WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x388))(pUVar4,&local_18);
  pFVar1 = &(this->RenderDataIdentifier).RendererName;
  if (pFVar1 != (FString *)&local_18) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data;
    (this->RenderDataIdentifier).RendererName.Data.ArrayNum = (int)local_10;
    (this->RenderDataIdentifier).RendererName.Data.ArrayMax = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  ::FString::operator=(&(this->RenderDataIdentifier).CameraName,&param_2->CameraName);
  return;
}

// Teardown @ 14dd45a40

void __thiscall
UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::Teardown(FMovieGraphWidgetPass *this)

{
  return;
}

// operator() @ 15058dc70

bool __thiscall
`UMovieGraphWidgetRendererBaseNode::FMovieGraphWidgetPass::GetParentNode'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4368648383380848772>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4368648383380848772>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

