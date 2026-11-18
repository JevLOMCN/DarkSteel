// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 10

// ~<lambda_1> @ 14ddc8c40

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::
OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~FMovieGraphPanoramicBlender @ 14ddcb1d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::~FMovieGraphPanoramicBlender
          (FMovieGraphPanoramicBlender *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  pTVar5 = (this->OutputMerger).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GlobalQueueDataMutex);
  DestructItems<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>,int>
            ((TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>
              *)(this->PendingData).AllocatorInstance.Data,(this->PendingData).ArrayNum);
  pFVar6 = (this->PendingData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IMovieGraphOutputMerger_MovieGraph_UE__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 14ddcde30

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::
OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>::operator()
          (void *this,FLinearColor *param_1,TIntPoint<int> param_2)

{
  FString *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  atomic<int> aVar9;
  undefined8 *puVar10;
  TImagePixelData<FLinearColor> *this_00;
  TImagePixelData<FLinearColor> *pTVar11;
  ForAnyElementType FVar12;
  ulong64 uVar13;
  TIntPoint<int>_u_0 local_res18;
  TImagePixelData<FLinearColor> *local_res20;
  FString local_b8;
  FString local_a8;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> local_88;
  TSharedPtr<IImagePixelDataPayload,1> local_70;
  longlong *local_60;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_40;
  
  plVar2 = *(longlong **)this;
  local_58 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18 = param_2.field0_0x0;
  local_60 = plVar2;
  if ((char)plVar2[0x24] != '\0') {
    if ((int)plVar2[99] < 0) {
      ::FString::PrintfImpl(&local_a8,L"/%s_PaneX_%d_PaneY_%d-Blended.%d");
      pFVar1 = (FString *)(plVar2 + 0x25);
      FVar12.Data = local_a8.Data.AllocatorInstance.Data;
      if (pFVar1 != &local_a8) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(plVar2 + 0x26) = local_a8.Data.ArrayNum;
        *(int *)((longlong)plVar2 + 0x134) = local_a8.Data.ArrayMax;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        FVar12.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
    else {
      ::FString::PrintfImpl(&local_b8,L"/%s_PaneX_%d_PaneY_%dEye_%d-Blended.%d");
      pFVar1 = (FString *)(plVar2 + 0x25);
      FVar12.Data = local_b8.Data.AllocatorInstance.Data;
      if (pFVar1 != &local_b8) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(plVar2 + 0x26) = local_b8.Data.ArrayNum;
        *(int *)((longlong)plVar2 + 0x134) = local_b8.Data.ArrayMax;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        FVar12.Data = local_b8.Data.AllocatorInstance.Data;
      }
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    iVar8 = local_res18._s_0.Y * param_2.field0_0x0._0_4_;
    uVar13 = (ulong64)iVar8;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar13);
    }
    if (((param_1 == (FLinearColor *)0x0) && (iVar8 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x2d3,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.ArrayNum = uVar13;
    if (uVar13 == 0) {
      local_88.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (0x10,4,uVar13,0,&local_88.AllocatorInstance,uVar13,&local_88.ArrayMax);
      memcpy(local_88.AllocatorInstance.Data,param_1,uVar13 << 4);
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2);
    this_00 = ::operator_new(0x40);
    pTVar11 = (TImagePixelData<FLinearColor> *)0x0;
    if (this_00 != (TImagePixelData<FLinearColor> *)0x0) {
      local_70.Object = (IImagePixelDataPayload *)*puVar10;
      local_70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar10[1];
      if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                          (this_00,(TIntPoint<int> *)&local_res18._s_0,&local_88,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (((*(longlong *)((longlong)this + 0x10) == 0) || (*(longlong *)((longlong)this + 0x18) == 0))
       || (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) < 1)) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7625713592234410130>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                         ,0x92,"WeakOutputMerger.IsValid()");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_98 = (longlong *)0x0;
      local_90 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = local_90->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            local_90 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14ddce0f5;
          }
          LOCK();
          aVar9 = local_90->SharedReferenceCount;
          bVar7 = aVar5 == aVar9;
          if (bVar7) {
            local_90->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar7);
        local_98 = *(longlong **)((longlong)this + 0x10);
      }
LAB_14ddce0f5:
      pTVar6 = local_90;
      plVar2 = local_98;
      if ((local_98 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res20 = pTVar11;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_res20);
      if (local_res20 != (TImagePixelData<FLinearColor> *)0x0) {
        (**(code **)local_res20->_padding_)(local_res20,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pTVar11 = (TImagePixelData<FLinearColor> *)0x0;
    }
    if (pTVar11 != (TImagePixelData<FLinearColor> *)0x0) {
      (**(code **)pTVar11->_padding_)(pTVar11,1);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  return;
}

// AbandonOutstandingWork @ 14ddd1920

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::AbandonOutstandingWork
          (FMovieGraphPanoramicBlender *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                     ,199,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// AllocateNewOutputFrame_GameThread @ 14ddd4ab0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::AllocateNewOutputFrame_GameThread
          (FMovieGraphPanoramicBlender *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieGraphOutputMergerFrame *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                     ,0x33,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieGraphOutputMergerFrame *)(*pcVar1)();
    return pFVar3;
  }
  return &MovieGraphDummyOutputFrame;
}

// GetFinishedFrames @ 14dde0620

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TQueue<UE::MovieGraph::FMovieGraphOutputMergerFrame,1> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::GetFinishedFrames
          (FMovieGraphPanoramicBlender *this)

{
  code *pcVar1;
  bool bVar2;
  TQueue<UE::MovieGraph::FMovieGraphOutputMergerFrame,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TQueue<UE::MovieGraph::FMovieGraphOutputMergerFrame,1> *)(*pcVar1)();
    return pTVar3;
  }
  return &MovieGraphDummyOutputQueue;
}

// GetNumOutstandingFrames @ 14dde2360

int __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::GetNumOutstandingFrames
          (FMovieGraphPanoramicBlender *this)

{
  return 0;
}

// GetOutputFrame_GameThread @ 14dde2ea0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieGraphOutputMergerFrame * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::GetOutputFrame_GameThread
          (FMovieGraphPanoramicBlender *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieGraphOutputMergerFrame *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieGraphOutputMergerFrame *)(*pcVar1)();
    return pFVar3;
  }
  return &MovieGraphDummyOutputFrame;
}

// OnCompleteRenderPassDataAvailable_AnyThread @ 14dde8d70

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread
          (FMovieGraphPanoramicBlender *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  IMovieGraphOutputMerger *pIVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  atomic<int> aVar12;
  longlong *plVar13;
  FPoolEntry *pFVar14;
  undefined8 *puVar15;
  TImagePixelData<FLinearColor> *pTVar16;
  FMoviePipelinePanoramicBlenderBase *this_00;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  atomic<int> *paVar19;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  FPoolEntry *local_138;
  LPCRITICAL_SECTION local_130;
  FWindowsRecursiveMutex *local_128;
  TImagePixelData<FLinearColor> *local_120;
  TImagePixelData<FLinearColor> *local_118;
  FPoolEntry *local_110;
  IMovieGraphOutputMerger *local_108;
  TReferenceControllerBase<1> *local_100;
  longlong *local_f8;
  TReferenceControllerBase<1> *local_f0;
  TSharedPtr<IImagePixelDataPayload,1> local_e8;
  undefined8 local_d8;
  TReferenceControllerBase<1> *local_d0;
  IMovieGraphOutputMerger *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  code *local_78 [5];
  undefined8 *local_50;
  
  plVar13 = (longlong *)(**(code **)((longlong)*(param_1->Ptr->Payload).Object + 8))();
  plVar4 = (longlong *)*plVar13;
  local_f0 = (TReferenceControllerBase<1> *)plVar13[1];
  if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = plVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  lpCriticalSection = &this->GlobalQueueDataMutex;
  local_130 = (LPCRITICAL_SECTION)lpCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  local_128 = lpCriticalSection;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->PendingData;
  pFVar17 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->PendingData).ArrayNum;
  local_res20 = pFVar17 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->PendingData).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    this_00 = (FMoviePipelinePanoramicBlenderBase *)0x0;
    if (pFVar17 == local_res20) goto LAB_14dde8e5f;
    this_00 = *(FMoviePipelinePanoramicBlenderBase **)pFVar17;
    if ((*(int *)((longlong)&this_00[1].TaskConcurrencyLimiter.Ptr + 4) == (int)plVar4[0x10]) &&
       (*(char *)&this_00[1].TaskConcurrencyLimiter.Ptr != '\0')) break;
    pFVar17 = pFVar17 + 8;
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)lpCriticalSection;
  if (this_00 == (FMoviePipelinePanoramicBlenderBase *)0x0) {
LAB_14dde8e5f:
    pFVar18 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->PendingData).ArrayNum;
    pFVar17 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->PendingData).ArrayNum != iVar3) {
        local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffffffffff00);
        `TCheckedPointerIterator<TUniquePtr<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry,TDefaultDelete<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
      }
      lpCriticalSection_00 = local_130;
      if (pFVar18 == pFVar17) break;
      if (*(char *)&(*(FMoviePipelinePanoramicBlenderBase **)pFVar18)[1].TaskConcurrencyLimiter.Ptr
          == '\0') {
        this_00 = *(FMoviePipelinePanoramicBlenderBase **)pFVar18;
      }
      pFVar18 = pFVar18 + 8;
    }
    if (this_00 == (FMoviePipelinePanoramicBlenderBase *)0x0) {
      pFVar14 = ::operator_new(0xa0);
      local_138 = (FPoolEntry *)0x0;
      local_110 = pFVar14;
      if (pFVar14 != (FPoolEntry *)0x0) {
        memset(pFVar14,0,0xa0);
        local_138 = FPoolEntry::FPoolEntry(pFVar14);
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 <
           pFVar17 + (longlong)(this->PendingData).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = (this->PendingData).ArrayNum;
      if (uVar10 == (this->PendingData).ArrayMax) {
        uVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(this->PendingData).ArrayMax);
      }
      (this->PendingData).ArrayNum = uVar10 + 1;
      *(FPoolEntry **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8) = local_138;
      local_138 = (FPoolEntry *)0x0;
      uVar11 = 0;
      if ((int)uVar10 < (this->PendingData).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = local_138;
      this_00 = *(FMoviePipelinePanoramicBlenderBase **)
                 ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
      if (local_138 != (FPoolEntry *)0x0) {
        MoviePipeline::FMoviePipelinePanoramicBlenderBase::~FMoviePipelinePanoramicBlenderBase
                  (&local_138->Blender);
        ::operator_delete(pFVar14,0xa0);
      }
      if ((this_00 == (FMoviePipelinePanoramicBlenderBase *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TargetBlender",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                             ,0x6b,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(int *)((longlong)&this_00[1].TaskConcurrencyLimiter.Ptr + 4) = (int)plVar4[0x10];
    *(undefined1 *)&this_00[1].TaskConcurrencyLimiter.Ptr = 1;
    LOCK();
    *(undefined4 *)&this_00[1].TempBufferPool.AllocatorInstance.Data = 0;
    UNLOCK();
    MoviePipeline::FMoviePipelinePanoramicBlenderBase::Initialize
              (this_00,(TIntPoint<int>)(this->OutputResolution).field0_0x0._s_0);
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_128 = (FWindowsRecursiveMutex *)0x0;
  }
  puVar15 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,local_a0);
  local_130 = (LPCRITICAL_SECTION)*puVar15;
  pTVar5 = (TReferenceControllerBase<1> *)puVar15[1];
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar19 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar19 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + 1);
    UNLOCK();
  }
  local_110 = (FPoolEntry *)(this->OutputMerger).Object;
  pTVar6 = (this->OutputMerger).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = local_130;
  local_d0 = pTVar5;
  local_c8 = (IMovieGraphOutputMerger *)local_110;
  local_c0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  local_78[0] = (code *)0x0;
  local_50 = (undefined8 *)0x0;
  local_50 = FMemory::Malloc(0x28,8);
  *local_50 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__OnCompleteRenderPassDataAvailable_AnyThread_FMovieGraphPanoramicBlender_Rendering_MovieGraph_UE__UEAAX__QEAV__TUniquePtr_UFImagePixelData__U__TDefaultDelete_UFImagePixelData_______Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_50[1] = local_130;
  local_50[2] = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar19 = (atomic<int>)((int)*paVar19 + 1);
    UNLOCK();
  }
  local_50[3] = local_110;
  local_50[4] = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (local_50 + 1 != (undefined8 *)0x0) {
    local_78[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnCompleteRenderPassDataAvailable_AnyThread'::__l2::<lambda_1>,void,FLinearColor_*,UE::Math::TIntPoint<int>_>
                  ::Call;
  }
  MoviePipeline::FMoviePipelinePanoramicBlenderBase::BlendSample_AnyThread
            (this_00,param_1,(FPanoramicPane *)(plVar4 + 0x41),
             (TUniqueFunction<void___cdecl(FLinearColor_*,UE::Math::TIntPoint<int>)> *)local_78);
  local_130 = lpCriticalSection_00;
  EnterCriticalSection(lpCriticalSection_00);
  LOCK();
  *(int *)&this_00[1].TempBufferPool.AllocatorInstance.Data =
       *(int *)&this_00[1].TempBufferPool.AllocatorInstance.Data + 1;
  UNLOCK();
  if (*(int *)&this_00[1].TempBufferPool.AllocatorInstance.Data ==
      (int)plVar4[0x61] * *(int *)((longlong)plVar4 + 0x304)) {
    Tasks::TaskConcurrencyLimiter_Private::FPimpl::Wait
              ((((this_00->TaskConcurrencyLimiter).Ptr)->Pimpl).Object,(FTimespan)0x7fffffffffffffff
              );
    if ((((this->OutputMerger).Object == (IMovieGraphOutputMerger *)0x0) ||
        (pTVar5 = (this->OutputMerger).WeakReferenceCount.ReferenceController,
        pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7625713592234410161>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                         ,0xb1,"OutputMerger.IsValid()");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      puVar15 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,local_90);
      pTVar16 = ::operator_new(0x40);
      if (pTVar16 == (TImagePixelData<FLinearColor> *)0x0) {
        pTVar16 = (TImagePixelData<FLinearColor> *)0x0;
      }
      else {
        local_e8.Object = (IImagePixelDataPayload *)*puVar15;
        local_e8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar15[1];
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar16 = TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                            (pTVar16,&this->OutputResolution,&local_e8);
      }
      local_120 = pTVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
      MoviePipeline::FMoviePipelinePanoramicBlenderBase::FetchFinalPixelDataLinearColor
                (this_00,&pTVar16->Pixels);
      local_108 = (IMovieGraphOutputMerger *)0x0;
      local_100 = (this->OutputMerger).WeakReferenceCount.ReferenceController;
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = local_100->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_100 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14dde929a;
          }
          LOCK();
          aVar12 = local_100->SharedReferenceCount;
          bVar9 = aVar2 == aVar12;
          if (bVar9) {
            local_100->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar12 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar12;
        } while (!bVar9);
        local_108 = (this->OutputMerger).Object;
      }
LAB_14dde929a:
      pTVar5 = local_100;
      pIVar8 = local_108;
      if ((local_108 == (IMovieGraphOutputMerger *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_120 = (TImagePixelData<FLinearColor> *)0x0;
      local_118 = pTVar16;
      (**(code **)(*(longlong *)pIVar8 + 0x18))(pIVar8,&local_118);
      if (local_118 != (TImagePixelData<FLinearColor> *)0x0) {
        (**(code **)local_118->_padding_)(local_118,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    *(undefined1 *)&this_00[1].TaskConcurrencyLimiter.Ptr = 0;
  }
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar19 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar19;
    *paVar19 = (atomic<int>)((int)*paVar19 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  return;
}

// OnSingleSampleDataAvailable_AnyThread @ 14ddf13b0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::OnSingleSampleDataAvailable_AnyThread
          (FMovieGraphPanoramicBlender *this,
          TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMovieGraphOutputMerger *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  IMovieGraphOutputMerger *pIVar7;
  IMovieGraphOutputMerger *pIVar8;
  
  pIVar8 = (IMovieGraphOutputMerger *)0x0;
  if (((((this->OutputMerger).Object == (IMovieGraphOutputMerger *)0x0) ||
       (pTVar1 = (this->OutputMerger).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7625713592234410177>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                         ,0xc1,"OutputMerger.IsValid()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (IMovieGraphOutputMerger *)(this->OutputMerger).WeakReferenceCount.ReferenceController;
  pIVar7 = pIVar2;
  if (pIVar2 != (IMovieGraphOutputMerger *)0x0) {
    aVar4 = *(atomic<int> *)&pIVar2->field_0x8;
    do {
      pIVar7 = pIVar8;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14ddf1446;
      LOCK();
      aVar6 = *(atomic<int> *)&pIVar2->field_0x8;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        *(atomic<int> *)&pIVar2->field_0x8 = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    pIVar8 = (this->OutputMerger).Object;
    pIVar7 = pIVar2;
  }
LAB_14ddf1446:
  if ((pIVar8 == (IMovieGraphOutputMerger *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(*(longlong *)&pIVar8->field_0x0 + 0x20))(pIVar8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar7);
  return;
}

