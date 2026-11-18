// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 11

// Construct<FMoviePipelinePostProcessPass> @ 14ddb9960

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelinePostProcessPass>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMoviePipelinePostProcessPass> @ 14ddb99c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelinePostProcessPass>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FMoviePipelinePostProcessPass> @ 14ddb9a20

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelinePostProcessPass>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FMoviePipelinePostProcessPass> @ 14ddb9a70

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelinePostProcessPass>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)((longlong)pvVar1 + 8));
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)((longlong)pvVar1 + 0x18);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(puVar2 + 0x20),(FSoftObjectPath *)((longlong)pvVar1 + 0x20));
      puVar2[0x40] = *(undefined1 *)((longlong)pvVar1 + 0x40);
      puVar2[0x41] = *(undefined1 *)((longlong)pvVar1 + 0x41);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x48);
      puVar2 = puVar2 + 0x48;
    } while (param_3 != 0);
  }
  return true;
}

// AccumulateSample_TaskThread @ 14ddd2bd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieGraph::Rendering::AccumulateSample_TaskThread
          (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1,
          TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1> *param_2,
          TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *param_3)

{
  atomic<int> aVar1;
  int iVar2;
  FImageOverlappedAccumulator *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  IImagePixelDataPayload IVar9;
  IImagePixelDataPayload IVar10;
  TImagePixelData<FLinearColor> *pTVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  atomic<int> aVar15;
  uint uVar16;
  longlong *plVar17;
  FLinearColor *pFVar18;
  TImagePixelData<FLinearColor> *pTVar19;
  TImagePixelData<FFloat16Color> *pTVar20;
  TImagePixelData<FColor> *pTVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  IImagePixelDataPayload *pIVar25;
  int iVar26;
  atomic<int> *paVar27;
  FFloat16Color *pFVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  TImagePixelData<FLinearColor> *local_280;
  IImagePixelDataPayload *local_278;
  TReferenceControllerBase<1> *pTStack_270;
  FImageOverlappedAccumulator *local_268;
  TReferenceControllerBase<1> *local_260;
  longlong *local_258;
  TReferenceControllerBase<1> *local_250;
  IImagePixelDataPayload local_248;
  TIntPoint<int>_u_0 local_240;
  FLLMScope local_238 [2];
  ForAnyElementType local_230;
  long64 alStack_228 [2];
  IMoviePipelineAccumulationArgs *local_218;
  TReferenceControllerBase<1> *local_210;
  IImagePixelDataPayload *local_208;
  TReferenceControllerBase<1> *local_200;
  FFloat16Color *local_1f8;
  longlong local_1f0;
  TIntPoint<int>_u_0 local_1e8;
  TImagePixelData<FLinearColor> *local_1e0;
  TImagePixelData<FLinearColor> *local_1d8;
  TIntPoint<int>_u_0 local_1d0;
  TImagePixelData<FLinearColor> *local_1c8;
  TImagePixelData<FLinearColor> *local_1c0;
  TIntPoint<int>_u_0 local_1b8;
  TImagePixelData<FLinearColor> *local_1b0;
  void *local_1a8;
  TImagePixelData<FLinearColor> *local_1a0;
  undefined8 *local_198;
  size_t local_190;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> local_188;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  FMemScope local_160;
  TIntPoint<int>_u_0 local_158;
  FImageOverlappedAccumulator *local_150;
  TReferenceControllerBase<1> *local_148;
  LARGE_INTEGER local_140;
  TArrayView<FLinearColor,__int64> local_138;
  TArrayView<FLinearColor_const_,__int64> local_128;
  TSharedPtr<IImagePixelDataPayload,1> local_118;
  FTileWeight1D local_108;
  TSharedPtr<IImagePixelDataPayload,1> local_f8;
  TSharedPtr<IImagePixelDataPayload,1> local_e8;
  TSharedPtr<IImagePixelDataPayload,1> local_d8;
  FTileWeight1D local_c8;
  longlong local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  TVector2<double>_u_0 local_a8;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  FLinearColor local_88 [4];
  
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId640,"MoviePipeline_AccumulateSample",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
               ,0x280);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId640);
  }
  local_280 = (TImagePixelData<FLinearColor> *)param_1->Ptr;
  param_1->Ptr = (FImagePixelData *)0x0;
  plVar17 = (longlong *)(**(code **)(param_2->Object->_padding_ + 8))(param_2->Object,local_98);
  local_208 = (IImagePixelDataPayload *)*plVar17;
  local_200 = (TReferenceControllerBase<1> *)plVar17[1];
  if (local_200 == (TReferenceControllerBase<1> *)0x0) {
    paVar27 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar27 = &local_200->SharedReferenceCount;
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
  }
  local_278 = local_208;
  pTStack_270 = local_200;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  if (local_200 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    LOCK();
    local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_248 = (IImagePixelDataPayload)&local_208;
  local_b8 = local_280->_padding_;
  pTStack_b0 = (TReferenceControllerBase<1> *)local_280->_padding_;
  local_280->_padding_ = (longlong)local_208;
  local_280->_padding_ = (longlong)local_200;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_200);
  local_218 = param_3->Object;
  local_210 = (param_3->SharedReferenceCount).ReferenceController;
  if (local_210 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_210->SharedReferenceCount = (atomic<int>)((int)local_210->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258 = (longlong *)0x0;
  local_250 = *(TReferenceControllerBase<1> **)(local_218 + 0x28);
  if (local_250 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = local_250->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        local_250 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ddd2d66;
      }
      LOCK();
      aVar15 = local_250->SharedReferenceCount;
      bVar31 = aVar1 == aVar15;
      if (bVar31) {
        local_250->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar15 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar15;
    } while (!bVar31);
  }
  if (local_250 != (TReferenceControllerBase<1> *)0x0) {
    local_258 = *(longlong **)(local_218 + 0x20);
  }
LAB_14ddd2d66:
  if (local_258 == (longlong *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270)
    ;
    if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
      (**(code **)local_280->_padding_)(local_280,1);
    }
    if (bVar30) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return;
  }
  bVar31 = FImagePixelData::IsDataWellFormed((FImagePixelData *)local_280);
  if ((!bVar31) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsWellFormed",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                          ,0x292,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar25 = local_278;
  if ((local_278 == (IImagePixelDataPayload *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(char *)(pIVar25 + 0x24) != '\0') {
    (**(code **)(local_280->_padding_ + 0x10))(local_280,&local_198);
    if ((local_258 == (longlong *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*local_258 + 0x20))(local_258,&local_198);
    if (local_198 != (undefined8 *)0x0) {
      (**(code **)*local_198)(local_198,1);
    }
  }
  if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(char *)(pIVar25 + 0x29) == '\0') {
    if ((local_258 == (longlong *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*local_258 + 0x18))(local_258,&local_280);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270)
    ;
    if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
      (**(code **)local_280->_padding_)(local_280,1);
    }
    if (bVar30) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return;
  }
  pFVar3 = *(FImageOverlappedAccumulator **)local_218;
  local_148 = *(TReferenceControllerBase<1> **)(local_218 + 8);
  if (local_148 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_148->WeakReferenceCount = (atomic<int>)((int)local_148->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_268 = (FImageOverlappedAccumulator *)0x0;
  local_260 = local_148;
  local_150 = pFVar3;
  if (local_148 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = local_148->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        local_260 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar15 = local_148->SharedReferenceCount;
      bVar31 = aVar1 == aVar15;
      if (bVar31) {
        local_148->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar15 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar15;
    } while (!bVar31);
    LOCK();
    paVar27 = &local_148->WeakReferenceCount;
    aVar1 = *paVar27;
    *paVar27 = (atomic<int>)((int)*paVar27 + -1);
    UNLOCK();
    if ((aVar1 == (atomic<int>)0x1) && (local_148 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(local_148->_padding_ + 8))(local_148,1);
    }
    local_148 = (TReferenceControllerBase<1> *)0x0;
  }
  if (local_260 != (TReferenceControllerBase<1> *)0x0) {
    local_150 = (FImageOverlappedAccumulator *)0x0;
    local_268 = pFVar3;
  }
  if (local_148 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar27 = &local_148->WeakReferenceCount;
    aVar1 = *paVar27;
    *paVar27 = (atomic<int>)((int)*paVar27 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(local_148->_padding_ + 8))(local_148,1);
    }
  }
  if ((local_268 == (FImageOverlappedAccumulator *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_268->NumChannels == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name679,L"MoviePipeline/ImageAccumulatorInitMemory");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_238,LLMScope_Name679,false,None,Default,true);
    FMemScope::FMemScope(&local_160,&LLMScope_Name679,true);
    pFVar3 = local_268;
    if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FImageOverlappedAccumulator::InitMemory
              (pFVar3,(TIntPoint<int>)((TIntPoint<int>_u_0 *)(pIVar25 + 0x23))->_s_0,4);
    if ((local_268 == (FImageOverlappedAccumulator *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = local_268;
    FImageOverlappedAccumulator::ZeroPlanes(local_268);
    if ((pFVar3 == (FImageOverlappedAccumulator *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_268->AccumulationGamma = 1.0;
    FMemScope::~FMemScope(&local_160);
    FLLMScope::~FLLMScope(local_238);
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId688,"MoviePipeline_AccumulatePixelData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
               ,0x2b0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId688);
  }
  pTVar19 = (TImagePixelData<FLinearColor> *)local_280->_padding_;
  local_248 = (IImagePixelDataPayload)pTVar19;
  if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar26 = (int)pTVar19;
  iVar22 = (int)((ulonglong)pTVar19 >> 0x20);
  if ((iVar26 != *(int *)(pIVar25 + 0x21)) || (iVar22 != *(int *)&pIVar25[0x21].field_0x4)) {
    QueryPerformanceCounter(&local_170);
    local_230.Data = (FScriptContainerElement *)0x0;
    alStack_228[0] = 0;
    alStack_228[1] = 0;
    lVar29 = (longlong)(iVar26 * iVar22);
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,4,lVar29,&local_230,alStack_228,alStack_228 + 1);
    pTVar19 = local_280;
    iVar22 = (int)local_280->_padding_;
    if (iVar22 == 2) {
      local_1a8 = (void *)0x0;
      local_190 = 0;
      (**(code **)(local_280->_padding_ + 8))(local_280,&local_1a8,&local_190);
      if ((local_1a8 == (void *)0x0) ||
         (local_190 !=
          (ulonglong)(*(byte *)((longlong)&pTVar19->_padding_ + 5) >> 3) *
          (ulonglong)*(byte *)((longlong)&pTVar19->_padding_ + 6) *
          (longlong)*(int *)((longlong)&pTVar19->_padding_ + 4) * (longlong)(int)pTVar19->_padding_)
         ) {
        if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
          ;
        }
        if (local_230.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data);
        }
        if (bVar31) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_260);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_250);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_210);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_270);
        if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
          (**(code **)local_280->_padding_)(local_280,1);
        }
        if (bVar30) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return;
      }
      memcpy(local_230.Data,local_1a8,local_190);
    }
    else if (iVar22 == 1) {
      local_1f8 = (FFloat16Color *)0x0;
      local_1f0 = 0;
      (**(code **)(local_280->_padding_ + 8))(local_280,&local_1f8,&local_1f0);
      if ((local_1f8 == (FFloat16Color *)0x0) ||
         (local_1f0 !=
          (ulonglong)(*(byte *)((longlong)&pTVar19->_padding_ + 5) >> 3) *
          (ulonglong)*(byte *)((longlong)&pTVar19->_padding_ + 6) *
          (longlong)*(int *)((longlong)&pTVar19->_padding_ + 4) * (longlong)(int)pTVar19->_padding_)
         ) {
        if (1 < (byte)LogMovieRenderPipelineIO._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipelineIO)
          ;
        }
        if (local_230.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data);
        }
        if (bVar31) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_260);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_250);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_210);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_270);
        if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
          (**(code **)local_280->_padding_)(local_280,1);
        }
        if (bVar30) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return;
      }
      lVar23 = 0;
      if (0 < lVar29) {
        lVar24 = 0;
        pFVar28 = local_1f8;
        do {
          pFVar18 = FLinearColor::FLinearColor(local_88,pFVar28);
          uVar7 = *(undefined8 *)&pFVar18->field0_0x0;
          uVar8 = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
          uVar16 = 0;
          if (lVar23 < alStack_228[0]) {
            uVar16 = (uint)((ulonglong)lVar23 >> 0x3f) ^ 1;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(local_230.Data + lVar24) = uVar7;
          *(undefined8 *)(local_230.Data + lVar24 + 8) = uVar8;
          lVar23 = lVar23 + 1;
          pFVar28 = pFVar28 + 1;
          lVar24 = lVar24 + 0x10;
          pIVar25 = local_278;
        } while (lVar23 < lVar29);
      }
    }
    else {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                          ,0x2e8,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    QueryPerformanceCounter(&local_140);
    if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar4 = (TIntPoint<int>_u_0)
            *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)(pIVar25 + 0x21))->_s_0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_240 = TVar4;
    TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&local_188,(longlong)(TVar4._s_0.Y * TVar4._s_0.X),Default);
    local_138.DataPtr = (FLinearColor *)local_188.AllocatorInstance.Data;
    local_138.ArrayNum = (long64)(int)local_188.ArrayNum;
    if (((int)local_188.ArrayNum < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar12.Data = local_230.Data;
    lVar29 = (longlong)(int)alStack_228[0];
    if (((int)alStack_228[0] < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_128.DataPtr = (FLinearColor *)FVar12.Data;
    local_128.ArrayNum = lVar29;
    FImageUtils::ImageResize
              (iVar26,local_248._4_4_,&local_128,TVar4._s_0.X,local_240._4_4_,&local_138);
    QueryPerformanceCounter(&local_168);
    if (6 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    local_158 = TVar4;
    local_248 = (IImagePixelDataPayload)::operator_new(0x40);
    if (local_248 == (IImagePixelDataPayload)0x0) {
      pTVar19 = (TImagePixelData<FLinearColor> *)0x0;
    }
    else {
      local_118.Object = local_278;
      local_118.SharedReferenceCount.ReferenceController = pTStack_270;
      if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_270->SharedReferenceCount =
             (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar19 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                          ((TImagePixelData<FLinearColor> *)local_248,
                           (TIntPoint<int> *)&local_158._s_0,&local_188,&local_118);
    }
    pTVar11 = local_280;
    if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
      plVar17 = &local_280->_padding_;
      local_280 = pTVar19;
      (**(code **)*plVar17)(pTVar11,1);
      pTVar19 = local_280;
    }
    local_280 = pTVar19;
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    if (local_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data);
    }
  }
  if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_240 = *(TIntPoint<int>_u_0 *)(pIVar25 + 0x22);
  local_248 = pIVar25[0x2a];
  TVar5 = ((TIntPoint<int>_u_0 *)(pIVar25 + 0x2b))->_s_0;
  IVar9 = pIVar25[0x2c];
  IVar10 = pIVar25[0x2d];
  local_108.X0 = 0;
  local_108.X1 = 0;
  local_108.X2 = 0;
  local_108.X3 = 0;
  local_c8.X0 = 0;
  local_c8.X1 = 0;
  local_c8.X2 = 0;
  local_c8.X3 = 0;
  ::MoviePipeline::FTileWeight1D::InitHelper
            (&local_108,local_248._0_4_,local_240._s_0.X,local_248._0_4_);
  ::MoviePipeline::FTileWeight1D::InitHelper
            (&local_c8,local_248._4_4_,local_240._4_4_,local_248._4_4_);
  if ((local_268 == (FImageOverlappedAccumulator *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8._s_0.X = (double)IVar9;
  local_a8._s_0.Y = (double)IVar10;
  FImageOverlappedAccumulator::AccumulatePixelData
            (local_268,(FImagePixelData *)local_280,(TIntPoint<int>)TVar5,
             (TVector2<double> *)&local_a8._s_0,&local_108,&local_c8);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((pIVar25 == (IImagePixelDataPayload *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pIVar25[0x29].field_0x1 == '\0') goto LAB_14ddd3c98;
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&DAT_15537c3ac,"MoviePipeline_FetchAccumulatedPixelData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
               ,0x314);
    FCpuProfilerTrace::OutputBeginEvent(DAT_15537c3ac);
  }
  if ((local_268 == (FImageOverlappedAccumulator *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar22 = (local_268->PlaneSize).field0_0x0._s_0.X;
  iVar26 = (local_268->PlaneSize).field0_0x0._s_0.Y;
  iVar2 = (int)local_280->_padding_;
  if (iVar2 == 2) {
    local_1e8._s_0.X = iVar22;
    local_1e8._s_0.Y = iVar26;
    local_248 = (IImagePixelDataPayload)::operator_new(0x40);
    if (local_248 == (IImagePixelDataPayload)0x0) {
      pTVar19 = (TImagePixelData<FLinearColor> *)0x0;
    }
    else {
      local_f8.Object = local_278;
      local_f8.SharedReferenceCount.ReferenceController = pTStack_270;
      if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_270->SharedReferenceCount =
             (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar19 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                          ((TImagePixelData<FLinearColor> *)local_248,
                           (TIntPoint<int> *)&local_1e8._s_0,&local_f8);
    }
    local_1e0 = pTVar19;
    FImageOverlappedAccumulator::FetchFinalPixelDataLinearColor(local_268,&pTVar19->Pixels);
    if ((local_258 == (longlong *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_1e0 = (TImagePixelData<FLinearColor> *)0x0;
    local_1d8 = pTVar19;
    (**(code **)(*local_258 + 0x18))(local_258,&local_1d8);
    pTVar19 = local_1d8;
LAB_14ddd3bc1:
    if (pTVar19 != (TImagePixelData<FLinearColor> *)0x0) {
      (**(code **)pTVar19->_padding_)(pTVar19,1);
    }
  }
  else {
    if (iVar2 == 1) {
      local_1d0._s_0.X = iVar22;
      local_1d0._s_0.Y = iVar26;
      local_248 = (IImagePixelDataPayload)::operator_new(0x40);
      if (local_248 == (IImagePixelDataPayload)0x0) {
        pTVar20 = (TImagePixelData<FFloat16Color> *)0x0;
      }
      else {
        local_e8.Object = local_278;
        local_e8.SharedReferenceCount.ReferenceController = pTStack_270;
        if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_270->SharedReferenceCount =
               (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar20 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                            ((TImagePixelData<FFloat16Color> *)local_248,
                             (TIntPoint<int> *)&local_1d0._s_0,&local_e8);
      }
      local_1c8 = (TImagePixelData<FLinearColor> *)pTVar20;
      FImageOverlappedAccumulator::FetchFinalPixelDataHalfFloat
                (local_268,
                 (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)
                 &((TImagePixelData<FLinearColor> *)pTVar20)->Pixels);
      if ((local_258 == (longlong *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1c8 = (TImagePixelData<FLinearColor> *)0x0;
      local_1c0 = (TImagePixelData<FLinearColor> *)pTVar20;
      (**(code **)(*local_258 + 0x18))(local_258,&local_1c0);
      pTVar19 = local_1c0;
      goto LAB_14ddd3bc1;
    }
    if (iVar2 == 0) {
      local_1b8._s_0.X = iVar22;
      local_1b8._s_0.Y = iVar26;
      local_248 = (IImagePixelDataPayload)::operator_new(0x40);
      if (local_248 == (IImagePixelDataPayload)0x0) {
        pTVar21 = (TImagePixelData<FColor> *)0x0;
      }
      else {
        local_d8.Object = local_278;
        local_d8.SharedReferenceCount.ReferenceController = pTStack_270;
        if (pTStack_270 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_270->SharedReferenceCount =
               (atomic<int>)((int)pTStack_270->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar21 = TImagePixelData<FColor>::TImagePixelData<FColor>
                            ((TImagePixelData<FColor> *)local_248,(TIntPoint<int> *)&local_1b8._s_0,
                             &local_d8);
      }
      local_1b0 = (TImagePixelData<FLinearColor> *)pTVar21;
      FImageOverlappedAccumulator::FetchFinalPixelDataByte
                (local_268,
                 (TArray<FColor,TSizedDefaultAllocator<64>_> *)
                 &((TImagePixelData<FLinearColor> *)pTVar21)->Pixels);
      if ((local_258 == (longlong *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1b0 = (TImagePixelData<FLinearColor> *)0x0;
      local_1a0 = (TImagePixelData<FLinearColor> *)pTVar21;
      (**(code **)(*local_258 + 0x18))(local_258,&local_1a0);
      pTVar19 = local_1a0;
      goto LAB_14ddd3bc1;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
                        ,0x337,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId827,"MoviePipeline_FreeAccumulatedPixelData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
               ,0x33b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId827);
  }
  if ((local_268 == (FImageOverlappedAccumulator *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FImageOverlappedAccumulator::Reset(local_268);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14ddd3c98:
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId834,"ReleaseSampleData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphImagePassBase.cpp"
               ,0x342);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId834);
  }
  pTVar19 = local_280;
  if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
    local_280 = (TImagePixelData<FLinearColor> *)0x0;
    (**(code **)pTVar19->_padding_)(pTVar19,1);
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_250);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_270);
  if (local_280 != (TImagePixelData<FLinearColor> *)0x0) {
    (**(code **)local_280->_padding_)(local_280,1);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// GetSampleData @ 14dde4720

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieGraph::Rendering::Private::GetSampleData
          (TSharedRef<FSceneViewFamilyContext,1> *param_1,FCameraInfo *param_2,int *param_3,
          int *param_4)

{
  int iVar1;
  
  if (((*(uint *)&param_1->Object->field_0x4c & 0x200) == 0) &&
     ((param_2->TilingParams).TileCount.field0_0x0._s_0.Y *
      (param_2->TilingParams).TileCount.field0_0x0._s_0.X < 2)) {
    *param_3 = (param_2->SamplingParams).TemporalSampleCount *
               (param_2->SamplingParams).SpatialSampleCount;
    iVar1 = (param_2->SamplingParams).TemporalSampleIndex *
            (param_2->SamplingParams).SpatialSampleCount +
            (param_2->SamplingParams).SpatialSampleIndex;
  }
  else {
    *param_3 = (param_2->SamplingParams).SpatialSampleCount;
    iVar1 = (param_2->SamplingParams).SpatialSampleIndex;
  }
  *param_4 = iVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateColorSpaceMetadata @ 14de01750

/* WARNING: Removing unreachable block (ram,0x00014de01ba8) */
/* WARNING: Removing unreachable block (ram,0x00014de01bc0) */

void __cdecl
UE::MoviePipeline::UpdateColorSpaceMetadata
          (FOpenColorIOColorConversionSettings *param_1,FEXRImageWriteTask *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *_Src_00;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_res18;
  FString local_168;
  FString local_158;
  undefined8 local_148;
  undefined8 local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString *local_108;
  FStringFormatArg *local_100;
  FString local_f8;
  FString *local_e8;
  FStringFormatArg *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FScriptContainerElement *_Src;
  
  _Src = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_148 = 0;
  local_140 = 0;
  bVar3 = FOpenColorIOColorConversionSettings::IsValid(param_1);
  _Src_00 = _Src;
  if (bVar3) {
    bVar3 = FOpenColorIOColorConversionSettings::IsDisplayView(param_1);
    if (bVar3) {
      if (param_1->DisplayViewDirection == Forward) {
        pFVar5 = FOpenColorIOColorSpace::ToString(&param_1->SourceColorSpace,&local_b8);
        iVar6 = iVar4;
        if (&local_168 != pFVar5) {
          _Src_00 = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = (pFVar5->Data).ArrayNum;
          local_168.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_168.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
          local_168.Data.AllocatorInstance.Data = _Src_00;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        pFVar5 = FOpenColorIODisplayView::ToString(&param_1->DestinationDisplayView,&local_a8);
        local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        iVar7 = iVar4;
        if (&local_158 != pFVar5) {
          _Src = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar7 = (pFVar5->Data).ArrayNum;
          local_158.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_158.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
          local_158.Data.AllocatorInstance.Data = _Src;
        }
      }
      else {
        if (param_1->DisplayViewDirection != Inverse) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                             ,0x27f,L"");
          _Src = (FScriptContainerElement *)0x0;
          _Src_00 = (FScriptContainerElement *)0x0;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_14de019b8;
        }
        pFVar5 = FOpenColorIODisplayView::ToString(&param_1->DestinationDisplayView,&local_118);
        iVar6 = iVar4;
        if (&local_168 != pFVar5) {
          _Src_00 = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = (pFVar5->Data).ArrayNum;
          local_168.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_168.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
          local_168.Data.AllocatorInstance.Data = _Src_00;
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        pFVar5 = FOpenColorIOColorSpace::ToString(&param_1->SourceColorSpace,&local_c8);
        local_88.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        iVar7 = iVar4;
        if (&local_158 != pFVar5) {
          _Src = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar7 = (pFVar5->Data).ArrayNum;
          local_158.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_158.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
          local_158.Data.AllocatorInstance.Data = _Src;
        }
      }
    }
    else {
      pFVar5 = FOpenColorIOColorSpace::ToString(&param_1->SourceColorSpace,&local_98);
      iVar6 = iVar4;
      if (&local_168 != pFVar5) {
        _Src_00 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (pFVar5->Data).ArrayNum;
        local_168.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_168.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        local_168.Data.AllocatorInstance.Data = _Src_00;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      pFVar5 = FOpenColorIOColorSpace::ToString(&param_1->DestinationColorSpace,&local_88);
      iVar7 = iVar4;
      if (&local_158 != pFVar5) {
        _Src = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar7 = (pFVar5->Data).ArrayNum;
        local_158.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_158.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        local_158.Data.AllocatorInstance.Data = _Src;
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
LAB_14de019b8:
  if (1 < iVar6) {
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_138;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = iVar6;
    if (iVar6 == 0) {
      local_138.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,(ForAnyElementType *)&local_138,iVar6,&local_138.Data.ArrayMax);
      memcpy(local_138.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar6 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_78,&local_138);
    ::FString::FString(&local_f8,"unreal/colorSpace/source");
    local_108 = &local_f8;
    local_100 = &local_78;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,&local_res18,(bool *)&local_108);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
    }
  }
  if (1 < iVar7) {
    local_res18.Key = &local_128;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&local_128,iVar7,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_58,&local_128);
    ::FString::FString(&local_d8,"unreal/colorSpace/destination");
    local_e8 = &local_d8;
    local_e0 = &local_58;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)&local_res18.Value,
               (bool *)&local_e8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
  }
  if (&param_2->ColorSpaceChromaticities !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&local_148) {
    piVar1 = &(param_2->ColorSpaceChromaticities).ArrayMax;
    (param_2->ColorSpaceChromaticities).ArrayNum = 0;
    if (*piVar1 == 0) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,*piVar1,&(param_2->ColorSpaceChromaticities).AllocatorInstance,0,piVar1);
    }
  }
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  if (_Src_00 != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}

// UpdateColorSpaceMetadata @ 14de01c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MoviePipeline::UpdateColorSpaceMetadata(ESceneCaptureSource param_1,FEXRImageWriteTask *param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  void *_Src;
  ForAnyElementType FVar4;
  bool bVar5;
  EDisplayColorGamut EVar6;
  FColorSpace *pFVar7;
  wchar_t *pwVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_358 [32];
  EColorSpace local_318;
  FString FStack_310;
  void *local_300;
  undefined8 local_2f8;
  FString local_2f0;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  undefined1 local_2d0 [16];
  int local_2c0;
  int local_2bc;
  FString local_2b8;
  FString *local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_288;
  double local_278;
  double dStack_270;
  double local_268;
  FStringFormatArg_u_8 FStack_260;
  ForAnyElementType local_258;
  double local_248;
  FStringFormatArg_u_8 FStack_240;
  ForAnyElementType local_238;
  FString *local_228;
  FStringFormatArg *local_220;
  FString local_218;
  FString *local_208;
  FStringFormatArg *local_200;
  TVector2<double>_u_0 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  FStringFormatArg_u_8 FStack_150;
  double local_148;
  FStringFormatArg_u_8 FStack_140;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_300 = (void *)0x0;
  local_2f8 = 0;
  local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.Data.ArrayNum = 0;
  local_2f0.Data.ArrayMax = 0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  local_2d4 = 0;
  iVar10 = 0;
  iVar9 = 0;
  switch(param_1) {
  case SCS_SceneColorHDR:
  case SCS_SceneColorHDRNoAlpha:
  case SCS_BaseColor:
  case SCS_FinalColorHDR:
    pFVar7 = UE::Color::FColorSpace::GetWorking();
    local_248 = (pFVar7->Chromaticities).Elements[0].field0_0x0._s_0.X;
    FStack_240 = (FStringFormatArg_u_8)(pFVar7->Chromaticities).Elements[0].field0_0x0._s_0.Y;
    local_268 = (pFVar7->Chromaticities).Elements[1].field0_0x0._s_0.X;
    FStack_260 = (FStringFormatArg_u_8)(pFVar7->Chromaticities).Elements[1].field0_0x0._s_0.Y;
    local_278 = (pFVar7->Chromaticities).Elements[2].field0_0x0._s_0.X;
    dStack_270 = (pFVar7->Chromaticities).Elements[2].field0_0x0._s_0.Y;
    local_298._0_8_ = (pFVar7->Chromaticities).Elements[3].field0_0x0._s_0.X;
    local_298._8_8_ = (pFVar7->Chromaticities).Elements[3].field0_0x0._s_0.Y;
    local_2d8 = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,local_2d4,&local_2e0,4,&local_2d4);
    *(double *)local_2e0.Data = local_248;
    *(FStringFormatArg_u_8 *)(local_2e0.Data + 8) = FStack_240;
    *(double *)(local_2e0.Data + 0x10) = local_268;
    *(FStringFormatArg_u_8 *)(local_2e0.Data + 0x18) = FStack_260;
    *(double *)(local_2e0.Data + 0x20) = local_278;
    *(double *)(local_2e0.Data + 0x28) = dStack_270;
    *(undefined8 *)(local_2e0.Data + 0x30) = local_298._0_8_;
    *(undefined8 *)(local_2e0.Data + 0x38) = local_298._8_8_;
    break;
  case SCS_FinalColorLDR:
  case SCS_FinalToneCurveHDR:
    EVar6 = HDRGetDefaultDisplayColorGamut();
    if (EVar6 == sRGB_D65) {
      local_318 = sRGB;
      pwVar8 = L"sRGB";
LAB_14de01d3c:
      ::FString::FString(&FStack_310,pwVar8);
    }
    else {
      if (EVar6 == DCIP3_D65) {
        local_318 = P3DCI;
        pwVar8 = L"P3DCI";
        goto LAB_14de01d3c;
      }
      if (EVar6 == Rec2020_D65) {
        local_318 = Rec2020;
        pwVar8 = L"Rec2020";
        goto LAB_14de01d3c;
      }
      if (EVar6 == ACES_D60) {
        local_318 = ACESAP0;
        pwVar8 = L"ACESAP0";
        goto LAB_14de01d3c;
      }
      if (EVar6 == ACEScg_D60) {
        local_318 = ACESAP1;
        pwVar8 = L"ACESAP1";
        goto LAB_14de01d3c;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\MoviePipelineEXROutput.cpp"
                         ,599,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_318 = None;
      FStack_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_310.Data.ArrayNum = 0;
      FStack_310.Data.ArrayMax = 0;
    }
    UE::Color::FColorSpace::FColorSpace((FColorSpace *)&local_178._s_0,local_318);
    iVar10 = FStack_310.Data.ArrayNum + -1;
    if (FStack_310.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange(&local_2f0,(wchar_t *)FStack_310.Data.AllocatorInstance.Data,iVar10);
    local_2a8 = (FString *)local_178._s_0.X;
    dStack_2a0 = local_178._s_0.Y;
    local_278 = local_168;
    dStack_270 = dStack_160;
    local_268 = local_158;
    FStack_260 = FStack_150;
    local_248 = local_148;
    FStack_240 = FStack_140;
    local_2d8 = 4;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,local_2d4,&local_2e0,4,&local_2d4);
    *(FString **)local_2e0.Data = local_2a8;
    *(double *)(local_2e0.Data + 8) = dStack_2a0;
    *(double *)(local_2e0.Data + 0x10) = local_278;
    *(double *)(local_2e0.Data + 0x18) = dStack_270;
    *(double *)(local_2e0.Data + 0x20) = local_268;
    *(FStringFormatArg_u_8 *)(local_2e0.Data + 0x28) = FStack_260;
    *(double *)(local_2e0.Data + 0x30) = local_248;
    *(FStringFormatArg_u_8 *)(local_2e0.Data + 0x38) = FStack_240;
    if (FStack_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_310.Data.AllocatorInstance.Data);
    }
    break;
  default:
    goto switchD_14de01c90_caseD_3;
  }
  iVar10 = (int)local_2f8;
  iVar9 = local_2f0.Data.ArrayNum;
switchD_14de01c90_caseD_3:
  _Src = local_300;
  if (1 < iVar10) {
    local_2a8 = (FString *)(local_2d0 + 8);
    local_2d0._8_8_ = (FStringFormatArg *)0x0;
    local_2c0 = iVar10;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)(local_2d0 + 8),iVar10,&local_2bc);
    memcpy((void *)local_2d0._8_8_,_Src,(longlong)iVar10 * 2);
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)&local_248,(FString *)(local_2d0 + 8));
    ::FString::FString(&local_218,"unreal/colorSpace/source");
    local_228 = &local_218;
    local_220 = (FStringFormatArg *)&local_248;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)local_2d0,(bool *)&local_228);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data);
    }
    iVar9 = local_2f0.Data.ArrayNum;
  }
  FVar4.Data = local_2f0.Data.AllocatorInstance.Data;
  if (1 < iVar9) {
    local_2a8 = &local_2b8;
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = iVar9;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)&local_2b8,iVar9,&local_2b8.Data.ArrayMax);
    memcpy(local_2b8.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
    FStringFormatArg::FStringFormatArg((FStringFormatArg *)&local_268,&local_2b8);
    ::FString::FString((FString *)local_298,"unreal/colorSpace/destination");
    local_208 = (FString *)local_298;
    local_200 = (FStringFormatArg *)&local_268;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,&local_288,(bool *)&local_208);
    if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_298._0_8_);
    }
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
  }
  iVar10 = local_2d8;
  FVar4.Data = local_2e0.Data;
  pTVar2 = &param_2->ColorSpaceChromaticities;
  if (pTVar2 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)&local_2e0) {
    piVar1 = &(param_2->ColorSpaceChromaticities).ArrayMax;
    (param_2->ColorSpaceChromaticities).ArrayNum = local_2d8;
    if ((local_2d8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_2d8,*piVar1,&pTVar2->AllocatorInstance,local_2d8,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,FVar4.Data,(longlong)iVar10 << 4);
      }
    }
  }
  if (local_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (local_300 != (void *)0x0) {
    FMemory::Free(local_300);
  }
  return;
}

// UpdateColorSpaceMetadataImpl @ 14de02120

void __cdecl
UE::MoviePipeline::UpdateColorSpaceMetadataImpl
          (FEXRColorSpaceMetadata *param_1,FEXRImageWriteTask *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  FString local_38;
  FStringFormatArg local_28;
  
  if (1 < (param_1->SourceName).Data.ArrayNum) {
    pFVar3 = ::FString::FString(&local_38,&param_1->SourceName);
    FStringFormatArg::FStringFormatArg(&local_28,pFVar3);
    ::FString::FString((FString *)local_48,"unreal/colorSpace/source");
    local_58._0_8_ = local_48;
    local_58._8_8_ = &local_28;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)&stack0x00000008,(bool *)local_58
              );
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (param_1->DestinationName).Data.ArrayNum) {
    pFVar3 = ::FString::FString(&local_38,&param_1->DestinationName);
    FStringFormatArg::FStringFormatArg(&local_28,pFVar3);
    ::FString::FString((FString *)local_58,"unreal/colorSpace/destination");
    local_48._0_8_ = local_58;
    local_48._8_8_ = &local_28;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)&param_2->FileMetadata,
               (TPairInitializer<FString_&&,FStringFormatArg_&&> *)&stack0x00000008,(bool *)local_48
              );
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
  }
  pTVar4 = &param_2->ColorSpaceChromaticities;
  if (pTVar4 != &param_1->Chromaticities) {
    piVar1 = &(param_2->ColorSpaceChromaticities).ArrayMax;
    iVar2 = (param_1->Chromaticities).ArrayNum;
    _Src = (param_1->Chromaticities).AllocatorInstance.Data;
    (param_2->ColorSpaceChromaticities).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,*piVar1,&pTVar4->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar2 << 4);
      }
    }
  }
  return;
}

// UpdateMetadataLayerNamesToMatchExrLayerNames @ 14de022b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieGraph::UpdateMetadataLayerNamesToMatchExrLayerNames
          (FMovieGraphRenderDataIdentifier *param_1,FString *param_2,
          TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStack_1c8 [32];
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  undefined8 local_168;
  undefined1 local_160 [4];
  int local_15c;
  FString local_158;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_148;
  int iStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString *local_e0;
  FScriptContainerElement *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  iVar15 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  MoviePipeline::GetMetadataPrefixPath(&local_158,param_1);
  uStack_13c = 1;
  puVar1 = &param_3->field_0x10;
  local_128 = 0;
  iVar7 = *(int *)&param_3->field_0x28;
  iStack_12c = local_128;
  if (iVar7 != 0) {
    puVar17 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar15 = 0;
    local_128 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar15;
      iVar15 = iVar15 + 1;
      local_128 = local_128 + 0x20;
      iStack_12c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14de023af;
      uVar13 = puVar17[lVar8 + 1];
    }
    uStack_13c = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uStack_13c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_15c = (int)lVar8;
    iStack_12c = local_128 + -1 + local_15c;
    if (iVar7 < iStack_12c) {
      iStack_12c = iVar7;
    }
  }
LAB_14de023af:
  uStack_130 = 0xffffffff;
  iStack_120 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  TStack_108._padding_ = CONCAT44(uStack_13c,iVar15);
  TStack_108.CurrentBitIndex = iStack_12c;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._28_4_ = iStack_12c;
  TStack_108.BaseBitIndex = local_128;
  uStack_e8 = CONCAT44(uStack_11c,iStack_120);
  uVar13 = *(uint *)&param_3->field_0x28;
  iVar10 = (int)uVar13 >> 5;
  uVar12 = uVar13 & 0xffffffe0;
  local_148 = param_3;
  iStack_140 = iVar15;
  local_138 = puVar1;
  iStack_124 = iStack_12c;
  local_114._4_8_ = param_3;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&param_3->field_0x28;
  if (uVar13 != uVar3) {
    puVar16 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar10;
      iVar10 = iVar10 + 1;
      uVar12 = uVar12 + 0x20;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14de024b0;
      uVar13 = *(uint *)(puVar16 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_118 = (int)lVar8;
    uVar13 = local_118 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14de024b0:
  while( true ) {
    uVar5 = local_114._4_8_;
    if (*(int *)(local_114._4_8_ + 8) - *(int *)(local_114._4_8_ + 0x34) != (int)uStack_e8) {
      local_178[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (((TStack_108.CurrentBitIndex == uVar13) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       ((TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
         *)uVar5 == param_3)) break;
    pFVar14 = (FScriptContainerElement *)
              ((longlong)TStack_108.CurrentBitIndex * 0x38 + *(longlong *)uVar5);
    iVar7 = local_158.Data.ArrayNum;
    iVar15 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar15 = 0;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (iVar7 != 0) {
      FVar11.Data = local_158.Data.AllocatorInstance.Data;
    }
    bVar6 = ::FString::StartsWith((FString *)pFVar14,(wchar_t *)FVar11.Data,iVar15,IgnoreCase);
    if (bVar6) {
      ::FString::PrintfImpl(&local_b0,L"unreal/layerData/%s");
      iVar7 = local_158.Data.ArrayNum + -1;
      if (local_158.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::RightChop((FString *)pFVar14,&local_c0,iVar7);
      ::FString::ConcatFF(&local_d0,&local_b0,&local_c0);
      local_e0 = &local_d0;
      local_d8 = pFVar14 + 0x10;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_>
                (&local_98,(TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)local_114,
                 (bool *)&local_e0);
      if (local_170.Data <= pFVar14) {
        if (pFVar14 < local_170.Data + (longlong)local_168._4_4_ * 0x10) {
          local_190 = (longlong)(int)local_168;
          local_188 = 0x10;
          local_1a0 = local_170.Data;
          local_1a8 = pFVar14;
          local_198 = (longlong)local_168._4_4_;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar7 = (int)local_168;
      if ((int)local_168 == local_168._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_170,(int *)((longlong)&local_168 + 4));
      }
      local_168 = CONCAT44(local_168._4_4_,iVar7 + 1);
      ::FString::FString((FString *)(local_170.Data + (longlong)iVar7 * 0x10),(FString *)pFVar14);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  iVar7 = (int)local_168;
  pFVar14 = local_170.Data + (longlong)(int)local_168 * 0x10;
  FVar11.Data = local_170.Data;
  while( true ) {
    if ((int)local_168 != iVar7) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_160);
    }
    if (FVar11.Data == pFVar14) break;
    if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
      if (*(int *)(FVar11.Data + 8) == 0) {
        pwVar9 = L"";
        iVar15 = 0;
      }
      else {
        pwVar9 = *(wchar_t **)FVar11.Data;
        iVar15 = *(int *)(FVar11.Data + 8) + -1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar9);
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *)param_3,uVar13,(FString *)FVar11.Data);
    }
    FVar11.Data = FVar11.Data + 0x10;
  }
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  ::Append<FDefaultSetAllocator>
            (param_3,(TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                      *)&local_98);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_170.Data,(int)local_168);
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// UpdateSpatialSampleMetadata @ 14de02780

void __cdecl
UE::MovieGraph::Rendering::MetadataHelper::UpdateSpatialSampleMetadata
          (FSceneViewProjectionData *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,FMovieGraphRenderDataIdentifier *param_3)

{
  FString *pFVar1;
  FString local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  FString local_28;
  
  MoviePipeline::GetMetadataPrefixPath(&local_58,param_3);
  pFVar1 = UE::Math::TMatrix<double>::ToString(&param_1->ViewRotationMatrix,&local_28);
  ::FString::PrintfImpl((FString *)local_38,L"%s/matrix/worldToCamera");
  local_48._0_8_ = local_38;
  local_48._8_8_ = pFVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_48
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = UE::Math::TMatrix<double>::ToString(&param_1->ProjectionMatrix,&local_28);
  ::FString::PrintfImpl((FString *)local_48,L"%s/matrix/worldToUEClip");
  local_38._0_8_ = local_48;
  local_38._8_8_ = pFVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

