// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 15

// FMovieGraphDeferredPanoramicPass @ 14ddc59d0

FMovieGraphDeferredPanoramicPass * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::FMovieGraphDeferredPanoramicPass
          (FMovieGraphDeferredPanoramicPass *this)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieGraphDeferredPanoramicPass_Rendering_MovieGraph_UE__6B_;
  (this->PaneViewStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PaneViewStates).ArrayNum = 0;
  (this->PaneViewStates).ArrayMax = 0;
  (this->AutoExposureViewStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutoExposureViewStates).ArrayNum = 0;
  (this->AutoExposureViewStates).ArrayMax = 0;
  (this->SystemMemoryMirror).Ptr = (FSceneViewStateSystemMemoryMirror *)0x0;
  this->bHasPrintedRenderingInfo = false;
  this->bHasPrintedWarnings = false;
  (this->RenderDataIdentifier).RootBranchName.ComparisonIndex = 0;
  (this->RenderDataIdentifier).RootBranchName.Number = 0;
  (this->RenderDataIdentifier).LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).LayerName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).RendererName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = 0;
  (this->RenderDataIdentifier).CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayNum = 0;
  (this->RenderDataIdentifier).CameraName.Data.ArrayMax = 0;
  (this->LayerData).BranchName.ComparisonIndex = 0;
  (this->LayerData).BranchName.Number = 0;
  (this->LayerData).LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerData).LayerName.Data.ArrayNum = 0;
  (this->LayerData).LayerName.Data.ArrayMax = 0;
  (this->LayerData).CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerData).CameraName.Data.ArrayNum = 0;
  (this->LayerData).CameraName.Data.ArrayMax = 0;
  (this->LayerData).LayerIndex = 0;
  (this->LayerData).NumCameras = 1;
  (this->LayerData).RenderPassNode.WeakPtr.ObjectIndex = 0;
  (this->LayerData).RenderPassNode.WeakPtr.ObjectSerialNumber = 0;
  (this->PanoramicOutputBlender).Object = (IMovieGraphOutputMerger *)0x0;
  (this->PanoramicOutputBlender).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FMovieGraphDeferredPanoramicPass @ 14ddcb000

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::~FMovieGraphDeferredPanoramicPass
          (FMovieGraphDeferredPanoramicPass *this)

{
  FScriptContainerElement *pFVar1;
  FSceneViewStateSystemMemoryMirror *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PanoramicOutputBlender).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LayerData).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerData).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  pFVar2 = (this->SystemMemoryMirror).Ptr;
  if (pFVar2 != (FSceneViewStateSystemMemoryMirror *)0x0) {
    (*(code *)pFVar2[-1].TemporaryTextures.AllocatorInstance.Data)();
  }
  DestructItems<FSceneViewStateReference,int>
            ((FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data,
             (this->AutoExposureViewStates).ArrayNum);
  pFVar1 = (this->AutoExposureViewStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSceneViewStateReference,int>
            ((FSceneViewStateReference *)(this->PaneViewStates).AllocatorInstance.Data,
             (this->PaneViewStates).ArrayNum);
  pFVar1 = (this->PaneViewStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14ddce860

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITransitionInfo_u_8 *pFVar1;
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  pFVar1 = (FRHITransitionInfo_u_8 *)(**(code **)(**(longlong **)this + 0x10))();
  local_48.ArrayNum = 1;
  local_38.field1_0x8 = *pFVar1;
  local_38._padding_._4_2_ = 0xffff;
  local_48.DataPtr = &local_38;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38.Type = Texture;
  local_38.AccessBefore = RTV;
  local_38.AccessAfter = SRVGraphicsPixel;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// AddReferencedObjects @ 14ddd3e90

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::AddReferencedObjects
          (FMovieGraphDeferredPanoramicPass *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->PaneViewStates).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->PaneViewStates).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->PaneViewStates).AllocatorInstance.Data + lVar6 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < (this->PaneViewStates).ArrayNum);
  }
  uVar5 = 0;
  if (0 < (this->AutoExposureViewStates).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AutoExposureViewStates).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar1 = *(longlong **)((this->AutoExposureViewStates).AllocatorInstance.Data + lVar6 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < (this->AutoExposureViewStates).ArrayNum);
  }
  return;
}

// GatherOutputPasses @ 14dddc2b0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GatherOutputPasses
          (FMovieGraphDeferredPanoramicPass *this,UMovieGraphEvaluatedConfig *param_1,
          TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_2)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar1 = &this->RenderDataIdentifier;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)param_2->ArrayMax * 0x48)) {
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
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  pFVar2 = (FName *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
  *pFVar2 = pFVar1->RootBranchName;
  ::FString::FString((FString *)(pFVar2 + 1),&(this->RenderDataIdentifier).LayerName);
  ::FString::FString((FString *)(pFVar2 + 3),&(this->RenderDataIdentifier).RendererName);
  ::FString::FString((FString *)(pFVar2 + 5),&(this->RenderDataIdentifier).SubResourceName);
  ::FString::FString((FString *)(pFVar2 + 7),&(this->RenderDataIdentifier).CameraName);
  return;
}

// GetAccumulateSampleFunction @ 14dddeed0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
* __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetAccumulateSampleFunction
          (FMovieGraphDeferredPanoramicPass *this,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>)>
          *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6AX__QEAV__TUniquePtr_UFImagePixelData__U__TDefaultDelete_UFImagePixelData______V__TSharedRef_UFMovieGraphSampleState_MovieGraph_UE___00__V__TSharedRef_UIMoviePipelineAccumulationArgs_MoviePipeline___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&__return_storage_ptr__->field_0x18 = AccumulateSample_TaskThread;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>),void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&,TSharedRef<UE::MovieGraph::FMovieGraphSampleState,1>,TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1>_>
         ::Call;
  }
  return __return_storage_ptr__;
}

// GetBranchName @ 14dddf2e0

FName __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetBranchName
          (FMovieGraphDeferredPanoramicPass *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->LayerData).BranchName;
  return in_RDX;
}

// GetOrCreateAccumulator @ 14dde2540

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetOrCreateAccumulator
          (FMovieGraphDeferredPanoramicPass *this,
          TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *__return_storage_ptr__,
          TObjectPtr<UMovieGraphDefaultRenderer> param_1,FMovieGraphSampleState *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMoviePipelineOverlappedAccumulator *pIVar5;
  code *pcVar6;
  FMovieGraphRenderDataAccumulationArgs *pFVar7;
  bool bVar8;
  undefined8 *puVar9;
  TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *pTVar10;
  FString local_e8;
  TSharedRef<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1> local_d8;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> local_c8;
  TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1> local_b0;
  FMovieGraphRenderDataIdentifier local_98;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FInstance *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  UMovieGraphDefaultRenderer::GetOrCreateAccumulatorPool<FImageOverlappedAccumulator>
            (*(UMovieGraphDefaultRenderer **)param_1.field0_0x0,&local_b0);
  puVar9 = (undefined8 *)(**(code **)(param_2->_padding_ + 8))(param_2,local_38);
  local_48 = *puVar9;
  local_40 = (TReferenceControllerBase<1> *)puVar9[1];
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  local_98.RootBranchName = (this->RenderDataIdentifier).RootBranchName;
  ::FString::FString(&local_98.LayerName,&(this->RenderDataIdentifier).LayerName);
  ::FString::FString(&local_98.RendererName,&(this->RenderDataIdentifier).RendererName);
  ::FString::FString(&local_98.SubResourceName,&(this->RenderDataIdentifier).SubResourceName);
  ::FString::FString(&local_98.CameraName,&(this->RenderDataIdentifier).CameraName);
  ::FString::PrintfImpl(&local_e8,L"%s_x%d_y%d");
  if (local_98.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.SubResourceName.Data.AllocatorInstance.Data);
  }
  local_98.SubResourceName.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.SubResourceName.Data.ArrayNum = local_e8.Data.ArrayNum;
  local_98.SubResourceName.Data.ArrayMax = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  if ((local_b0.Object == (FSurfaceAccumulatorPool *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *)(*pcVar6)();
    return pTVar10;
  }
  DefaultRenderer::FSurfaceAccumulatorPool::
  GetAccumulatorInstance_GameThread<FImageOverlappedAccumulator>
            (local_b0.Object,&local_c8,(param_2->TraversalContext).Time.OutputFrameNumber,&local_98)
  ;
  MakeShared<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>(&local_d8);
  pFVar7 = local_d8.Object;
  ((local_d8.Object)->OutputMerger).Object = (this->PanoramicOutputBlender).Object;
  pTVar3 = (this->PanoramicOutputBlender).SharedReferenceCount.ReferenceController;
  if (pTVar3 != ((local_d8.Object)->OutputMerger).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = ((local_d8.Object)->OutputMerger).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (pFVar7->OutputMerger).WeakReferenceCount.ReferenceController = pTVar3;
  }
  if ((local_c8.Object == (FInstance *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedRef<MoviePipeline::IMoviePipelineAccumulationArgs,1> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar7 = local_d8.Object;
  pIVar5 = ((local_c8.Object)->Accumulator).Object;
  pTVar3 = ((local_c8.Object)->Accumulator).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  ((local_d8.Object)->ImageAccumulator).Object = pIVar5;
  if (pTVar3 != ((local_d8.Object)->ImageAccumulator).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = ((local_d8.Object)->ImageAccumulator).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (pFVar7->ImageAccumulator).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = ((local_d8.Object)->AccumulatorInstance).Object;
  pTStack_20 = ((local_d8.Object)->AccumulatorInstance).SharedReferenceCount.ReferenceController;
  ((local_d8.Object)->AccumulatorInstance).Object = local_c8.Object;
  ((local_d8.Object)->AccumulatorInstance).SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  __return_storage_ptr__->Object = (IMoviePipelineAccumulationArgs *)local_d8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_d8.SharedReferenceCount.ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_98.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_98.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_98.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_98.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.LayerName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetParentNode @ 14dde31a0

UMovieGraphImagePassBaseNode * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetParentNode
          (FMovieGraphDeferredPanoramicPass *this,UMovieGraphEvaluatedConfig *param_1)

{
  int iVar1;
  FName FVar2;
  UMovieGraphImagePassBaseNode *pUVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar5 = (FName *)(**(code **)(this->_padding_ + 0x30))(this,local_res18);
  FVar2 = *pFVar5;
  pUVar6 = UMovieGraphDeferredPanoramicNode::StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(param_1,&local_18,pUVar6,FVar2,true,false);
  if (local_18.ArrayNum < 1) {
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  else {
    pUVar3 = *(UMovieGraphImagePassBaseNode **)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
    if (pUVar3 != (UMovieGraphImagePassBaseNode *)0x0) {
      pUVar6 = UMovieGraphDeferredPanoramicNode::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return pUVar3;
      }
    }
  }
  bVar4 = `UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetParentNode'::__l3::
          <lambda_1>::operator()(local_res8);
  if (bVar4) {
    return (UMovieGraphImagePassBaseNode *)0x0;
  }
  return (UMovieGraphImagePassBaseNode *)0x0;
}

// GetSceneViewState @ 14dde5a40

FSceneViewStateInterface * __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetSceneViewState
          (FMovieGraphDeferredPanoramicPass *this,UMovieGraphDeferredPanoramicNode *param_1,
          int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSceneViewStateInterface *pFVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == (UMovieGraphDeferredPanoramicNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentNodeThisFrame",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                       ,0x19c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSceneViewStateInterface *)(*pcVar2)();
      return pFVar4;
    }
  }
  iVar1 = (this->PaneViewStates).ArrayNum;
  if (param_1->bAllocateHistoryPerPane == false) {
    param_3 = 0;
  }
  if (param_1->bAllocateHistoryPerPane == false) {
    param_2 = 0;
  }
  uVar6 = param_3 * param_1->NumHorizontalSteps + param_2;
  if (iVar1 < 1) {
    pFVar4 = (FSceneViewStateInterface *)0x0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FSceneViewStateInterface *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = *(FSceneViewStateInterface **)
              ((this->PaneViewStates).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x38 + 8);
  }
  return pFVar4;
}

// Render @ 14ddf49f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render
          (FMovieGraphDeferredPanoramicPass *this,FMovieGraphTraversalContext *param_1,
          FMovieGraphTimeStepData *param_2)

{
  TSharedPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *pTVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined3 uVar5;
  EMovieRenderShotState EVar6;
  byte bVar7;
  IMovieGraphOutputMerger *pIVar8;
  UMoviePipelineExecutorShot *pUVar9;
  FMovieGraphTraversalContext *pFVar10;
  UMovieGraphEvaluatedConfig *pUVar11;
  code *pcVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  TVector<double>_u_0 *pTVar27;
  bool bVar28;
  char cVar29;
  bool bVar30;
  int iVar31;
  FWeakObjectPtr *pFVar32;
  UMovieGraphDefaultRenderer *pUVar33;
  UMovieGraphPipeline *pUVar34;
  TReferenceControllerBase<1> *pTVar35;
  UMovieGraphImagePassBaseNode *this_00;
  UMovieGraphCameraSettingNode *pUVar36;
  UMovieGraphDefaultRenderer *this_01;
  TQuat<double> *pTVar37;
  double *pdVar38;
  TRotator<double> *pTVar39;
  UTextureRenderTarget2D *this_02;
  FTextureRenderTargetResource *pFVar40;
  TVector2<float> TVar41;
  longlong *plVar42;
  longlong lVar43;
  UWorld *pUVar44;
  TVector<double>_u_0 *pTVar45;
  IRendererModule *pIVar46;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar47;
  FString *pFVar48;
  double *pdVar49;
  undefined ***pppuVar50;
  int iVar51;
  ulonglong uVar52;
  wchar_t *pwVar53;
  EAntiAliasingMethod EVar54;
  wchar_t *pwVar55;
  int iVar56;
  TReferenceControllerBase<1> *pTVar57;
  float in_XMM1_Da;
  ulonglong uVar58;
  float fVar59;
  float fVar60;
  undefined1 auStackY_18a8 [32];
  bool local_1848;
  char local_1847;
  int local_1840;
  int local_183c;
  int local_1838;
  int iStack_1834;
  float local_1830;
  undefined8 local_1828;
  UMovieGraphDefaultRenderer *local_1820;
  undefined1 local_1818 [48];
  float local_17e8;
  int local_17d8;
  int local_17d4;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_17d0;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_17c8;
  TObjectPtr<UMovieGraphConfig>_u_0 local_17c0;
  undefined1 local_17b8 [24];
  TObjectPtr<UMovieGraphConfig>_u_0 local_17a0 [2];
  FString local_1790;
  FString local_1780;
  int local_1770;
  int local_176c;
  int local_1768;
  float local_1764;
  float local_1760;
  undefined1 local_175c;
  float local_1758;
  float local_1754;
  FFrameRate local_1750;
  int local_1748;
  float local_1744;
  float local_1740;
  int local_173c;
  undefined1 local_1738;
  undefined1 local_1737;
  undefined1 local_1736;
  undefined1 local_1735;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_1730;
  FTimecode local_1728;
  undefined1 local_1710 [28];
  int local_16f4;
  FString local_16e8;
  undefined8 local_16d8;
  undefined4 uStack_16cc;
  FMovieGraphPanoramicBlender *local_16c8;
  FSharedReferencer<1> FStack_16c0;
  TSharedPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> local_16b8;
  TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1> local_16a8;
  IMovieGraphOutputMerger *local_1698;
  TReferenceControllerBase<1> *local_1690;
  longlong local_1688;
  TReferenceControllerBase<1> *pTStack_1680;
  FRenderTargetInitParams local_1678;
  longlong local_1668;
  TReferenceControllerBase<1> *pTStack_1660;
  longlong local_1658;
  TReferenceControllerBase<1> *pTStack_1650;
  TVector<double>_u_0 local_1648;
  double dStack_1630;
  double dStack_1628;
  double dStack_1620;
  double local_1618;
  double dStack_1610;
  double local_1608;
  double dStack_1600;
  double dStack_15f8;
  double dStack_15f0;
  float local_15e8;
  undefined8 uStack_15e4;
  float fStack_15dc;
  undefined4 local_15d8;
  undefined8 uStack_15d4;
  TVector<double>_u_0 local_15c8;
  TVector<double>_u_0 local_15b0;
  TRotator<double> local_1598;
  TRotator<double> local_1580;
  TRotator<double> local_1568;
  undefined1 local_1550;
  int local_154c;
  int local_1548;
  int local_1544;
  int local_1540;
  undefined1 local_153c;
  undefined4 local_1538;
  undefined1 local_1528 [8];
  undefined1 local_1520 [8];
  longlong local_1518;
  TReferenceControllerBase<1> *local_1510;
  longlong local_1508;
  TReferenceControllerBase<1> *local_1500;
  double local_14f8;
  double dStack_14f0;
  double local_14e8;
  undefined1 local_14e0 [8];
  TQuat<double> local_14d8;
  FString local_14b8;
  FString local_14a8;
  FString local_1498;
  double local_1488;
  double dStack_1480;
  double local_1478;
  double dStack_1470;
  double local_1468;
  double dStack_1460;
  double local_1458;
  double dStack_1450;
  TRotator<double> local_1448;
  TRotator<double> local_1430;
  TQuat<double> local_1418;
  TQuat<double> local_13f8 [3];
  double local_1398;
  double dStack_1390;
  double local_1388;
  double dStack_1380;
  TReferenceControllerBase<1> *local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 local_1360;
  float local_1358;
  undefined1 local_1354;
  undefined8 local_1350;
  FFrameRate local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined4 local_1330;
  TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 local_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  ulonglong local_1310;
  int local_1308;
  undefined4 uStack_1304;
  undefined4 uStack_1300;
  undefined4 uStack_12fc;
  undefined4 local_12f8;
  undefined4 uStack_12f4;
  uint local_12f0;
  int local_12ec;
  ESceneCaptureSource local_12e8;
  undefined1 local_12e4;
  int local_12e0;
  EAntiAliasingMethod local_12dc;
  FEngineShowFlags local_12d8;
  uint local_1298;
  undefined1 local_1294;
  code *local_1288 [2];
  undefined **local_1278;
  TReferenceControllerBase<1> *pTStack_1270;
  undefined8 local_1268;
  undefined ***local_1260;
  undefined1 local_1258 [16];
  undefined **local_1248;
  TReferenceControllerBase<1> *pTStack_1240;
  undefined8 local_1238;
  undefined ***local_1230;
  byte local_1228;
  FEngineShowFlags local_1218;
  FMovieGraphSampleState local_11d8;
  double local_fd0 [33];
  undefined1 local_ec4;
  double local_eb8;
  double dStack_eb0;
  double local_ea8;
  double dStack_ea0;
  undefined4 local_e98;
  undefined4 uStack_e94;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  double local_e88;
  undefined8 uStack_e80;
  undefined4 local_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  double local_e68;
  undefined8 uStack_e60;
  undefined1 local_e58 [160];
  double local_db8;
  undefined8 local_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  double local_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  double local_d48;
  undefined8 local_d40;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c58;
  void *local_c18;
  undefined4 local_c10;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
  local_c08 [2];
  TVector<double>_u_0 local_b48;
  TRotator<double> local_b30 [3];
  uint local_ae0;
  undefined1 local_adc;
  void *local_370;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  undefined8 uStack_2f0;
  char local_2e8;
  void *local_270;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  float local_230;
  int local_22c;
  undefined4 local_228;
  double local_220;
  double local_218;
  undefined1 local_210;
  FCanvas local_208;
  ulonglong local_e8;
  undefined4 uVar4;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_18a8;
  local_1828 = param_1;
  pFVar32 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_1528);
  pUVar33 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar32);
  local_1820 = pUVar33;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar33 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
  }
  else {
    if (pUVar33 == (UMovieGraphDefaultRenderer *)0x0) {
      return;
    }
    GC::MarkAsReachable((UObject *)pUVar33);
  }
  UMovieGraphBlueprintLibrary::GetDesiredOutputResolution
            ((UMovieGraphEvaluatedConfig *)local_1818,in_XMM1_Da);
  fVar23 = __real_3f000000;
  local_1838 = -((int)ROUND(__real_bf000000 - (float)(int)local_1818._0_4_ * __real_3f000000) >> 1);
  pTVar1 = &this->PanoramicOutputBlender;
  iStack_1834 = local_1838;
  if (pTVar1->Object == (IMovieGraphOutputMerger *)0x0) {
    pUVar34 = UMovieGraphRendererBase::GetOwningGraph((UMovieGraphRendererBase *)pUVar33);
    pIVar8 = (pUVar34->OutputMerger).Object;
    pTVar57 = (pUVar34->OutputMerger).SharedReferenceCount.ReferenceController;
    if (pTVar57 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar57->SharedReferenceCount = (atomic<int>)((int)pTVar57->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1698 = pIVar8;
    local_1690 = pTVar57;
    pTVar35 = ::operator_new(0x78);
    local_1818._24_8_ = pTVar35;
    if (pTVar35 == (TReferenceControllerBase<1> *)0x0) {
      pTVar35 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar35->SharedReferenceCount = (atomic<int>)0x1;
      pTVar35->WeakReferenceCount = (atomic<int>)0x1;
      pTVar35->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMovieGraphPanoramicBlender_Rendering_MovieGraph_UE___00_SharedPointerInternals__6B_
      ;
      lVar43 = CONCAT44(local_1818._4_4_,local_1818._0_4_);
      local_1690 = (TReferenceControllerBase<1> *)0x0;
      local_1698 = (IMovieGraphOutputMerger *)0x0;
      pTVar35[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[2]._padding_ = 0;
      pTVar35[1]._padding_ = (longlong)&___7FMovieGraphPanoramicBlender_Rendering_MovieGraph_UE__6B_
      ;
      pTVar35[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[3]._padding_ = 0;
      local_16b8.Object = pIVar8;
      local_16b8.SharedReferenceCount.ReferenceController = pTVar57;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&pTVar35[3].SharedReferenceCount,4000);
      *(undefined8 *)&pTVar35[6].SharedReferenceCount.field_0x0 = 0;
      pTVar35[7]._padding_ = 0;
      TWeakPtr<UE::MovieGraph::IMovieGraphOutputMerger,1>::
      operator=<UE::MovieGraph::IMovieGraphOutputMerger>
                ((TWeakPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *)
                 &pTVar35[6].SharedReferenceCount,&local_16b8);
      pTVar35[6]._padding_ = lVar43;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
      pTVar57 = (TReferenceControllerBase<1> *)0x0;
    }
    TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>::
    TSharedRef<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>
              (&local_16a8,(FMovieGraphPanoramicBlender *)(pTVar35 + 1),pTVar35);
    local_16c8 = local_16a8.Object;
    FStack_16c0.ReferenceController = local_16a8.SharedReferenceCount.ReferenceController;
    if (local_16a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_16a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<UE::MovieGraph::IMovieGraphOutputMerger,1> *)&local_16c8) {
      pTVar1->Object = (IMovieGraphOutputMerger *)local_16a8.Object;
      local_16c8 = (FMovieGraphPanoramicBlender *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PanoramicOutputBlender).SharedReferenceCount,&FStack_16c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_16c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar57);
    pUVar33 = local_1820;
    param_1 = local_1828;
  }
  this_00 = (UMovieGraphImagePassBaseNode *)
            (**(code **)(this->_padding_ + 0xb8))
                      (this,(param_2->EvaluatedConfig).field0_0x0.DebugPtr);
  if (this_00 == (UMovieGraphImagePassBaseNode *)0x0) {
    pFVar48 = GetTypeName<UMovieGraphDeferredPanoramicNode>(&local_14b8);
    if ((pFVar48->Data).ArrayNum == 0) {
      pwVar55 = L"";
    }
    else {
      pwVar55 = (wchar_t *)(pFVar48->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar55);
  }
  bVar28 = UObjectBaseUtility::IsA<UMovieGraphDeferredPanoramicNode>((UObjectBaseUtility *)this_00);
  if (!bVar28) {
    pFVar48 = GetTypeName<UMovieGraphDeferredPanoramicNode>(&local_14a8);
    pwVar55 = L"";
    if ((pFVar48->Data).ArrayNum == 0) {
      pwVar53 = L"";
    }
    else {
      pwVar53 = (wchar_t *)(pFVar48->Data).AllocatorInstance.Data;
    }
    pFVar48 = GetFullNameForCastLogError<UMovieGraphImagePassBaseNode>(&local_1498,this_00);
    if ((pFVar48->Data).ArrayNum != 0) {
      pwVar55 = (wchar_t *)(pFVar48->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar55,pwVar53);
  }
  local_1847 = '\0';
  pUVar36 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                      ((param_2->EvaluatedConfig).field0_0x0.DebugPtr,(this->LayerData).BranchName,
                       false,false);
  if (pUVar36 != (UMovieGraphCameraSettingNode *)0x0) {
    local_1847 = pUVar36->bRenderAllCameras;
  }
  pUVar9 = (param_1->Shot).field0_0x0.DebugPtr;
  if ((*(char *)((longlong)&this_00[1]._padding_ + 6) == '\0') ||
     ((pUVar9->ShotInfo).State != Rendering)) {
    EVar6 = (pUVar9->ShotInfo).State;
    local_1848 = false;
    if ((EVar6 != Rendering) && (local_1848 = false, EVar6 != CoolingDown)) {
      iVar31 = (**(code **)(this_00->_padding_ + 0x3f8))(this_00);
      local_1848 = false;
      goto LAB_14ddf4d19;
    }
  }
  else {
    local_1848 = true;
  }
  iVar31 = (int)this_00[1]._padding_;
LAB_14ddf4d19:
  if (iVar31 < 1) {
    iVar31 = 1;
  }
  local_1818._20_4_ =
       SCS_FinalToneCurveHDR - (*(char *)((longlong)&this_00[1]._padding_ + 7) != '\0');
  local_1818._16_4_ =
       MovieRenderPipeline::GetEffectiveAntiAliasingMethod
                 ((bool)((byte)this_00[1]._padding_ >> 6 & 1),
                  (uint)*(byte *)((longlong)&this_00[1]._padding_ + 4));
  if (this->bHasPrintedRenderingInfo == false) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    this->bHasPrintedRenderingInfo = true;
  }
  (**(code **)(this->_padding_ + 0x70))(this,&local_1678,param_2,&local_1838);
  fVar24 = __real_3c0efa36;
  fVar22 = __real_3a83126f;
  uVar21 = _UNK_15061cbc8;
  uVar20 = ___xmm_3ff00000000000000000000000000000;
  fVar19 = __real_3f800000;
  iVar56 = (int)this_00[1]._padding_;
  iVar51 = *(int *)((longlong)&this_00[1]._padding_ + 4);
  local_183c = 0;
  uVar52 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar58 = _UNK_15060db28;
  local_1818._8_4_ = iVar51;
  local_1818._12_4_ = iVar56;
  if (0 < iVar56) {
    do {
      local_1840 = 0;
      if (0 < iVar51) {
        do {
          local_1830 = 0.0;
          if (0 < iVar31) {
            local_17e8 = (float)(iVar31 + -1);
            do {
              fVar25 = local_17e8;
              fVar13 = local_1830;
              pFVar32 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_1520);
              this_01 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(pFVar32);
              UMovieGraphDefaultRenderer::GetCameraInfo
                        (this_01,(FCameraInfo *)&local_b48._s_0,(this->LayerData).CameraIndex);
              local_153c = 0;
              local_1648._0_8_ = local_b48._s_0.X;
              local_1648._8_8_ = local_b48._s_0.Y;
              local_1648._s_0.Z = local_b48._s_0.Z;
              local_1618 = local_b30[0].Pitch;
              dStack_1610 = local_b30[0].Yaw;
              local_1608 = local_b30[0].Roll;
              pTVar37 = UE::Math::TRotator<double>::Quaternion(local_b30,&local_1418);
              local_1488 = pTVar37->X;
              dStack_1480 = pTVar37->Y;
              local_1478 = pTVar37->Z;
              dStack_1470 = pTVar37->W;
              local_eb8 = pTVar37->X;
              dStack_eb0 = pTVar37->Y;
              local_ea8 = pTVar37->Z;
              dStack_ea0 = pTVar37->W;
              local_e98 = local_b48._0_4_;
              uStack_e94 = local_b48._4_4_;
              uStack_e90 = local_b48._8_4_;
              uStack_e8c = (int)((ulonglong)local_b48._8_8_ >> 0x20);
              local_e88 = local_b48._s_0.Z;
              uStack_e80 = 0;
              local_e78 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
              uStack_e74 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
              uStack_e70 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
              uStack_e6c = (int)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                0x20);
              local_e68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              uStack_e60 = 0;
              pdVar38 = &local_348;
              if (local_2e8 == '\0') {
                pdVar38 = &local_eb8;
              }
              local_14d8.X = *pdVar38;
              local_14d8.Y = pdVar38[1];
              local_14d8.Z = pdVar38[2];
              local_14d8.W = pdVar38[3];
              dStack_1630 = pdVar38[4];
              dStack_1628 = pdVar38[5];
              dStack_1620 = pdVar38[6];
              local_1398 = pdVar38[8];
              dStack_1390 = pdVar38[9];
              local_1388 = pdVar38[10];
              dStack_1380 = pdVar38[0xb];
              local_14f8 = dStack_1630;
              dStack_14f0 = dStack_1628;
              local_14e8 = dStack_1620;
              pTVar39 = UE::Math::TRotator<double>::TRotator<double>(&local_1448,&local_14d8);
              dStack_1600 = pTVar39->Pitch;
              dStack_15f8 = pTVar39->Yaw;
              dStack_15f0 = pTVar39->Roll;
              local_1538 = 0xffffffff;
              local_1540 = local_183c;
              local_1544 = local_1840;
              local_154c = local_1818._8_4_;
              local_1548 = local_1818._12_4_;
              uStack_15e4 = 0;
              local_1550 = *(undefined1 *)((longlong)&this_00[1]._padding_ + 4);
              uStack_15d4 = CONCAT44(iStack_1834,local_1838);
              local_153c = *(undefined1 *)((longlong)&this_00[1]._padding_ + 5);
              MoviePipeline::Panoramic::GetCameraOrientationForStereo
                        ((TVector<double> *)&local_15c8._s_0,&local_1598,&local_1580,
                         (FPanoramicPane *)&local_1648._s_0,-1,false);
              MoviePipeline::Panoramic::GetCameraOrientationForStereo
                        ((TVector<double> *)&local_15b0._s_0,&local_1568,&local_1430,
                         (FPanoramicPane *)&local_1648._s_0,-1,true);
              fStack_15dc = 90.0;
              local_15d8 = 0x42b40000;
              this_02 = UMovieGraphDefaultRenderer::GetOrCreateViewRenderTarget
                                  (pUVar33,&local_1678,&this->RenderDataIdentifier);
              pFVar40 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                                  ((UTextureRenderTarget *)this_02);
              local_1818._24_8_ = &pFVar40->_padding_;
              if (pFVar40 == (FTextureRenderTargetResource *)0x0) {
                local_1818._24_8_ = (TReferenceControllerBase<1> *)0x0;
              }
              if (((TReferenceControllerBase<1> *)local_1818._24_8_ ==
                   (TReferenceControllerBase<1> *)0x0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RenderTargetResource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                                      ,0x21c,L""), bVar28)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar56 = param_2->TemporalSampleCount;
              iVar51 = (param_2->TemporalSampleIndex + iVar56) * param_2->RenderedFrameNumber *
                       iVar31 + (int)fVar13;
              if ((local_1818._16_4_ == AAM_TemporalAA) || (local_1818._16_4_ == AAM_TSR)) {
                bVar28 = true;
              }
              else {
                bVar28 = false;
              }
              EVar54 = local_1818._16_4_;
              if ((*(char *)((longlong)&this_00[1]._padding_ + 5) == '\0') && (bVar28)) {
                if (this->bHasPrintedWarnings == false) {
                  if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                    Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                  }
                  this->bHasPrintedWarnings = true;
                  iVar56 = param_2->TemporalSampleCount;
                }
                EVar54 = AAM_None;
              }
              if ((iVar31 < 2) && (iVar56 < 2)) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              fVar59 = 0.0;
              fVar60 = 0.0;
              if ((EVar54 == AAM_None) && (bVar28)) {
                TVar41 = MoviePipeline::GetSubPixelJitter((int)local_14e0,iVar51);
                pFVar10 = *(FMovieGraphTraversalContext **)TVar41.field0_0x0;
                local_1828._4_4_ = (float)((ulonglong)pFVar10 >> 0x20);
                local_1828._0_4_ = SUB84(pFVar10,0);
                fVar59 = (float)local_1828;
                fVar60 = local_1828._4_4_;
                local_1828 = pFVar10;
              }
              local_260 = 0;
              local_250 = CONCAT44(iStack_1834,local_1838);
              local_258 = 0;
              local_240 = 1;
              local_23c = 1;
              local_248 = 0;
              local_238 = param_2->TemporalSampleIndex;
              local_234 = param_2->TemporalSampleCount;
              local_230 = local_1830;
              local_228 = 0;
              local_220 = (double)((fVar59 * __real_40000000) / (float)local_1838);
              local_218 = (double)((fVar60 * __real_c0000000) / (float)iStack_1834);
              local_22c = iVar31;
              local_210 = local_1847 == '\0';
              FMinimalViewInfo::ClearOverscan((FMinimalViewInfo *)&local_b48._s_0);
              local_b48._s_0.X = local_15c8._s_0.X;
              local_b48._s_0.Y = local_15c8._s_0.Y;
              local_b48._s_0.Z = local_15c8._s_0.Z;
              local_b30[0].Pitch = local_1598.Pitch;
              local_b30[0].Yaw = local_1598.Yaw;
              local_b30[0].Roll = local_1598.Roll;
              pTVar37 = UE::Math::TRotator<double>::Quaternion(&local_1568,local_13f8);
              local_1468 = pTVar37->X;
              dStack_1460 = pTVar37->Y;
              local_1458 = pTVar37->Z;
              dStack_1450 = pTVar37->W;
              local_328 = local_15b0._0_4_;
              uStack_324 = local_15b0._4_4_;
              uStack_320 = local_15b0._8_4_;
              uStack_31c = local_15b0._12_4_;
              local_318 = local_15b0._s_0.Z;
              uStack_310 = 0;
              uStack_300 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
              uStack_2fc = (undefined4)
                           ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20
                           );
              local_308 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
              uStack_304 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
              local_2f8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              uStack_2f0 = 0;
              local_2e8 = '\x01';
              local_ae0 = local_ae0 & 0xfffffffe;
              local_1378 = (TReferenceControllerBase<1> *)0x0;
              uStack_1370 = 0;
              local_1368 = 0;
              local_1360 = 0;
              local_1358 = 0.0;
              local_1354 = 0;
              local_1350 = 0;
              local_1348.Numerator = 0;
              local_1348.Denominator = 0;
              uStack_1340 = 0;
              local_1338 = 0;
              local_1330 = 0;
              local_1328 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
              local_1320 = 0;
              uStack_1318 = 0;
              local_1310 = local_1310 & 0xffffff0000000000;
              local_1308 = 0;
              uStack_1304 = 0;
              uStack_1300 = 0;
              uStack_12fc = 0;
              local_12f8 = 0;
              uStack_12f4 = 0;
              local_12f0 = local_12f0 & 0xffffff00;
              local_12ec = 0;
              local_12e8 = 10;
              local_12e4 = 0;
              local_12e0 = 0xffffffff;
              local_12dc = 0;
              local_1828 = (FMovieGraphTraversalContext *)&local_12d8;
              local_12d8.CustomShowFlags.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_12d8.CustomShowFlags.NumBits = 0;
              local_12d8.CustomShowFlags.MaxBits = 0x80;
              local_12d8._0_8_ = uVar52;
              local_12d8._8_8_ = uVar58;
              local_12d8._16_8_ = uVar52;
              local_12d8._24_8_ = uVar58;
              local_348 = local_1468;
              dStack_340 = dStack_1460;
              local_338 = local_1458;
              dStack_330 = dStack_1450;
              FEngineShowFlags::InitCustomShowFlags(&local_12d8,ESFIM_Game);
              local_12d8.Pivot = 0;
              local_12d8.LightInfluences = 0;
              local_12d8.HitProxies = 0;
              local_12d8.Bounds = 0;
              local_12d8.ModeWidgets = 0;
              local_12d8.EditingLevelInstance = 0;
              local_12d8.Selection = 0;
              local_12d8.Splines = 0;
              local_12d8.Cover = 0;
              local_12d8.MeshEdges = 0;
              local_12d8.Snap = 0;
              local_12d8.Grid = 0;
              local_12d8.LargeVertices = 0;
              local_12d8.Editor = 0;
              local_12d8.Brushes = 0;
              local_12d8.BSPSplit = 0;
              local_12d8.AudioRadius = 0;
              local_12d8.CameraFrustums = 0;
              local_12d8.MassProperties = 0;
              local_12d8.Constraints = 0;
              local_12d8.StreamingBounds = 0;
              local_12d8.LightMapDensity = 0;
              local_12d8.StationaryLightOverlap = 0;
              local_12d8.ShaderComplexity = 0;
              local_12d8.LightComplexity = 0;
              local_12d8.VisualizeInstanceUpdates = 0;
              local_12d8.HISMCClusterTree = 0;
              local_12d8.HISMCOcclusionBounds = 0;
              local_12d8.Navigation = 0;
              local_12d8.DebugAI = 0;
              local_12d8.VisualizeSSS = 0;
              local_12d8.SelectionOutline = 0;
              local_12d8.VisualizeOutOfBoundsPixels = 0;
              local_12d8.VisualizeTSR = 0;
              local_12d8.VisualizeTemporalUpscaler = 0;
              local_12d8.VisualizeReprojection = 0;
              local_12d8.VisualizeMotionVectors = 0;
              local_12d8.VisualizeMotionBlur = 0;
              local_12d8.ScreenPercentage = 1;
              local_12d8.PhysicalMaterialMasks = 0;
              local_12d8.VertexColors = 0;
              local_12d8.VisualizeDOF = 0;
              local_12d8.TestImage = 0;
              local_12d8.OpaqueCompositeEditorPrimitives = 0;
              local_12d8.CompositeEditorPrimitives = 0;
              local_12d8.CompositeDebugPrimitives = 1;
              local_12d8.MotionBlur = 1;
              local_12d8.GBufferHints = 0;
              local_12d8.VectorFields = 0;
              local_12d8.VisualizeVirtualShadowMap = 0;
              local_12d8.VisualizeGroom = 0;
              local_12d8.VisualizeSubstrate = 0;
              local_12d8.VisualizeLumen = 0;
              local_12d8.VisualizeNanite = 0;
              local_12d8.VisualizeBuffer = 0;
              local_12d8.MaterialAmbientOcclusion = 1;
              local_12d8.MaterialNormal = 1;
              local_12d8.ReflectionOverride = 0;
              local_12d8.LightingOnlyOverride = 0;
              local_12d8.OverrideDiffuseAndSpecular = 0;
              local_12d8.VisualizeLocalExposure = 0;
              local_12d8.VisualizeLocalFogVolumes = 0;
              local_12d8.VisualizeSkyLightIlluminance = 0;
              local_12d8.VisualizeHDR = 0;
              local_12d8.DisableOcclusionQueries = 0;
              local_12d8.VisualizeInstanceOcclusionQueries = 0;
              local_12d8.OcclusionMeshes = 0;
              local_12d8.VREditing = 0;
              local_12d8.ServerDrawDebug = 0;
              local_12d8.Bones = 0;
              local_12d8.VisualizeVirtualTexture = 0;
              local_12d8.RequiredTextureResolution = 0;
              local_12d8.OutputMaterialTextureScales = 0;
              local_12d8.MaterialTextureScaleAccuracy = 0;
              local_12d8.MeshUVDensityAccuracy = 0;
              local_12d8.PrimitiveDistanceAccuracy = 0;
              local_12d8.ShaderComplexityWithQuadOverdraw = 0;
              local_12d8.QuadOverdraw = 0;
              local_12d8.HLODColoration = 0;
              local_12d8.LODColoration = 0;
              local_12d8.VisualizeShadingModels = 0;
              local_12d8.VisualizeSSR = 0;
              local_12d8.VisualizeLightingOnProbes = 0;
              local_12d8.VisualizeGlobalDistanceField = 0;
              local_12d8.PhysicsField = 0;
              local_12d8.VisualizeMeshDistanceFields = 0;
              local_12d8.VisualizeDistanceFieldAO = 0;
              local_12d8.VolumeLightingSamples = 0;
              local_12d8.VisualizeVolumetricLightmap = 0;
              local_12d8.PrecomputedVisibilityCells = 0;
              local_12d8.VisualizeLightCulling = 0;
              local_12d8.DistanceCulledPrimitives = 0;
              local_12d8.StereoRendering = 0;
              local_12d8.HMDDistortion = 0;
              local_12d8.HighResScreenshotMask = 0;
              local_12d8.CameraSafeFrames = 0;
              local_12d8.CameraAspectRatioBars = 0;
              local_12d8.CollisionPawn = 0;
              local_12d8.CollisionVisibility = 0;
              local_12d8.Collision = 0;
              local_12d8.ActorColoration = 0;
              local_12d8.Game = 1;
              local_12d8.Volumes = 0;
              local_12d8.LightRadius = 0;
              local_12d8.Wireframe = 0;
              local_12d8.ShadowFrustums = 0;
              local_12d8.RandomColor = 0;
              local_12d8.FrontBackFace = 0;
              local_12d8.Zebra = 0;
              local_12d8.Clay = 0;
              local_12d8.StereoMotionVectors = 0;
              local_12d8.AlphaInvert = 0;
              local_12d8.SceneCaptureCopySceneDepth = 1;
              local_12d8.VisualizeShadowCasters = 0;
              local_12d8.VisualizeLWCComplexity = 0;
              local_12d8.VisualizeGPUSkinCache = 0;
              local_12d8.LumenShortRangeAmbientOcclusion = 1;
              local_12d8.LumenSecondaryBounces = 1;
              local_12d8.LumenFarFieldTraces = 1;
              local_12d8.LumenGlobalTraces = 1;
              local_12d8.LumenDetailTraces = 1;
              local_12d8.LumenScreenTraces = 1;
              local_12d8.DebugDrawDistantVirtualSMLights = 0;
              local_12d8.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
              local_12d8.VisualizeVolumetricCloudConservativeDensity = 0;
              local_12d8.VirtualTexturePrimitives = 0;
              local_12d8.VisualizePostProcessStack = 0;
              local_12d8.VisualizeCalibrationCustom = 0;
              local_12d8.VisualizeCalibrationGrayscale = 0;
              local_12d8.VisualizeCalibrationColor = 0;
              local_12d8.VisualizeLightFunctionAtlas = 0;
              local_12d8.VisualizeSkyAtmosphere = 0;
              local_12d8.RayTracingDebug = 0;
              local_12d8.PathTracing = 0;
              local_1298 = 3;
              local_1378 = (TReferenceControllerBase<1> *)local_1818._24_8_;
              uStack_1370 = (**(code **)(local_1820->_padding_ + 0x180))();
              local_1368._0_4_ = param_2->OutputFrameNumber;
              local_1368._4_4_ = param_2->ShotOutputFrameNumber;
              local_1360._0_4_ = param_2->RenderedFrameNumber;
              local_1360._4_4_ = param_2->FrameDeltaTime;
              local_1358 = param_2->WorldTimeDilation;
              local_1354 = param_2->bHasRelativeTimeBeenUsed;
              local_1350._0_4_ = param_2->WorldSeconds;
              local_1350._4_4_ = param_2->MotionBlurFraction;
              local_1348 = param_2->FrameRate;
              uStack_1340._0_4_ = param_2->TemporalSampleIndex;
              uStack_1340._4_4_ = param_2->TemporalSampleCount;
              local_1338._0_4_ = param_2->SpatialSampleIndex;
              local_1338._4_4_ = param_2->SpatialSampleCount;
              local_1330._0_1_ = param_2->bIsFirstTemporalSampleForFrame;
              local_1330._1_1_ = param_2->bIsLastTemporalSampleForFrame;
              local_1330._2_1_ = param_2->bDiscardOutput;
              local_1330._3_1_ = param_2->bRequiresAccumulator;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr,
                 pUVar11 != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)pUVar11);
              }
              local_1328 = (param_2->EvaluatedConfig).field0_0x0;
              local_1320._0_4_ = (param_2->RootTimeCode).Hours;
              local_1320._4_4_ = (param_2->RootTimeCode).Minutes;
              uStack_1318._0_4_ = (param_2->RootTimeCode).Seconds;
              uStack_1318._4_4_ = (param_2->RootTimeCode).Frames;
              local_1310._0_4_ = (param_2->RootTimeCode).Subframe;
              local_1310._4_1_ = (param_2->RootTimeCode).bDropFrameFormat;
              local_1310._5_3_ = *(undefined3 *)&(param_2->RootTimeCode).field_0x15;
              local_1308 = (param_2->RootFrameNumber).Value;
              uVar14 = (param_2->ShotTimeCode).Hours;
              uVar15 = (param_2->ShotTimeCode).Minutes;
              uVar16 = (param_2->ShotTimeCode).Seconds;
              uVar17 = (param_2->ShotTimeCode).Frames;
              uVar2 = (param_2->ShotTimeCode).Subframe;
              uVar3 = (param_2->ShotTimeCode).bDropFrameFormat;
              uVar5 = *(undefined3 *)&(param_2->ShotTimeCode).field_0x15;
              uVar4 = CONCAT31(uVar5,uVar3);
              local_12ec = (param_2->ShotFrameNumber).Value;
              local_12e8 = local_1818._20_4_;
              uStack_1304 = uVar14;
              uStack_1300 = uVar15;
              uStack_12fc = uVar16;
              local_12f8 = uVar17;
              uStack_12f4 = uVar2;
              local_12f0 = uVar4;
              local_12e4 = fVar13 != fVar25;
              local_12e0 = iVar51;
              local_12dc = EVar54;
              UMovieGraphShowFlags::GetShowFlags
                        ((this_00->ShowFlags).field0_0x0.DebugPtr,&local_1218);
              local_1218.Vignette = 0;
              local_1218.SceneColorFringe = 0;
              local_1218.PhysicalMaterialMasks = 0;
              local_1218.DepthOfField = 0;
              FEngineShowFlags::operator=(&local_12d8,&local_1218);
              if (local_1218.CustomShowFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_1218.CustomShowFlags.AllocatorInstance.SecondaryData);
              }
              local_1298 = (uint)*(byte *)((longlong)&this_00[1]._padding_ + 1);
              local_1294 = local_adc;
              plVar42 = (longlong *)
                        (**(code **)(this->_padding_ + 0xd0))(this,this_00,local_1840,local_183c);
              if (((plVar42 != (longlong *)0x0) &&
                  (*(char *)((longlong)&this_00[1]._padding_ + 5) != '\0')) &&
                 (*(char *)((longlong)&this_00[1]._padding_ + 6) != '\0')) {
                (**(code **)(*plVar42 + 0x120))(plVar42,(this->SystemMemoryMirror).Ptr);
              }
              (**(code **)(this->_padding_ + 0x80))(this,local_1818 + 0x20,&local_1378);
              uVar26 = local_1818._40_8_;
              lVar43 = this->_padding_;
              local_1518 = local_1818._32_8_;
              local_1510 = (TReferenceControllerBase<1> *)local_1818._40_8_;
              if ((TReferenceControllerBase<1> *)local_1818._40_8_ !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *(atomic<int> *)(local_1818._40_8_ + 8) =
                     (atomic<int>)((int)*(atomic<int> *)(local_1818._40_8_ + 8) + 1);
                UNLOCK();
              }
              (**(code **)(lVar43 + 0x60))(this,local_e58,&local_b48);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)uVar26);
              (**(code **)(this->_padding_ + 0x40))(this,&local_b48,local_e58);
              fVar25 = GNearClippingPlane;
              local_15e8 = GNearClippingPlane;
              fVar13 = fStack_15dc;
              if (fStack_15dc <= fVar22) {
                fVar13 = fVar22;
              }
              local_db8 = tan((double)(fVar13 * fVar24));
              local_db8 = __real_3ff0000000000000 / local_db8;
              local_db0 = 0;
              local_da8 = 0;
              uStack_da0 = 0;
              local_d98 = 0;
              local_d88 = 0;
              uStack_d80 = 0;
              local_d78 = 0;
              uStack_d70 = 0;
              local_d68 = uVar20;
              uStack_d60 = uVar21;
              local_d58 = 0;
              uStack_d50 = 0;
              local_d48 = (double)fVar25;
              local_d40 = 0;
              pcVar12 = *(code **)(this->_padding_ + 0x68);
              local_1668 = local_1818._32_8_;
              pTStack_1660 = (TReferenceControllerBase<1> *)local_1818._40_8_;
              if ((TReferenceControllerBase<1> *)local_1818._40_8_ !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *(atomic<int> *)(local_1818._40_8_ + 8) =
                     (atomic<int>)((int)*(atomic<int> *)(local_1818._40_8_ + 8) + 1);
                UNLOCK();
              }
              local_d90 = local_db8;
              (*pcVar12)(this,local_e58,&local_1668,&local_b48);
              pcVar12 = *(code **)(this->_padding_ + 0x90);
              local_1658 = local_1818._32_8_;
              pTStack_1650 = (TReferenceControllerBase<1> *)local_1818._40_8_;
              if ((TReferenceControllerBase<1> *)local_1818._40_8_ !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *(atomic<int> *)(local_1818._40_8_ + 8) =
                     (atomic<int>)((int)*(atomic<int> *)(local_1818._40_8_ + 8) + 1);
                UNLOCK();
              }
              (*pcVar12)(this,&local_1658,&local_1378);
              pcVar12 = *(code **)(this->_padding_ + 0x88);
              local_1688 = local_1818._32_8_;
              pTStack_1680 = (TReferenceControllerBase<1> *)local_1818._40_8_;
              if ((TReferenceControllerBase<1> *)local_1818._40_8_ !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *(atomic<int> *)(local_1818._40_8_ + 8) =
                     (atomic<int>)((int)*(atomic<int> *)(local_1818._40_8_ + 8) + 1);
                UNLOCK();
              }
              (*pcVar12)(this,&local_1688,&local_1378,&local_b48);
              pUVar33 = local_1820;
              lVar43 = (**(code **)(local_1820->_padding_ + 0x180))(local_1820);
              bVar7 = *(byte *)(lVar43 + 0x188);
              pUVar44 = (UWorld *)(**(code **)(pUVar33->_padding_ + 0x180))(pUVar33);
              FCanvas::FCanvas(&local_208,(FRenderTarget *)local_1818._24_8_,
                               (FHitProxyConsumer *)0x0,pUVar44,(uint)bVar7,CDM_DeferDrawing,fVar19)
              ;
              FMovieGraphSampleState::FMovieGraphSampleState(&local_11d8);
              local_11d8._padding_ =
                   (longlong)&___7FMovieGraphPanoSampleState_Rendering_MovieGraph_UE__6B_;
              local_ec4 = 0;
              local_17d8 = param_1->ShotIndex;
              local_17d4 = param_1->ShotCount;
              local_17d0 = (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
                           (param_1->Job).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17d0.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17d0.DebugPtr);
              }
              local_17c8 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)
                           (param_1->Shot).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17c8.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17c8.DebugPtr);
              }
              local_17c0 = (TObjectPtr<UMovieGraphConfig>_u_0)
                           (param_1->RootGraph).field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17c0.DebugPtr != (UMovieGraphConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17c0.DebugPtr);
              }
              local_1828 = (FMovieGraphTraversalContext *)local_17b8;
              local_17b8._0_8_ = (param_1->RenderDataIdentifier).RootBranchName;
              ::FString::FString((FString *)(local_17b8 + 8),
                                 &(param_1->RenderDataIdentifier).LayerName);
              ::FString::FString((FString *)&local_17a0[0].ObjectPtr,
                                 &(param_1->RenderDataIdentifier).RendererName);
              ::FString::FString(&local_1790,&(param_1->RenderDataIdentifier).SubResourceName);
              ::FString::FString(&local_1780,&(param_1->RenderDataIdentifier).CameraName);
              local_1770 = (param_1->Time).OutputFrameNumber;
              local_176c = (param_1->Time).ShotOutputFrameNumber;
              local_1768 = (param_1->Time).RenderedFrameNumber;
              local_1764 = (param_1->Time).FrameDeltaTime;
              local_1760 = (param_1->Time).WorldTimeDilation;
              local_175c = (param_1->Time).bHasRelativeTimeBeenUsed;
              local_1758 = (param_1->Time).WorldSeconds;
              local_1754 = (param_1->Time).MotionBlurFraction;
              local_1750 = (param_1->Time).FrameRate;
              local_1748 = (param_1->Time).TemporalSampleIndex;
              local_1744 = (float)(param_1->Time).TemporalSampleCount;
              local_1740 = (float)(param_1->Time).SpatialSampleIndex;
              local_173c = (param_1->Time).SpatialSampleCount;
              local_1738 = (param_1->Time).bIsFirstTemporalSampleForFrame;
              local_1737 = (param_1->Time).bIsLastTemporalSampleForFrame;
              local_1736 = (param_1->Time).bDiscardOutput;
              local_1735 = (param_1->Time).bRequiresAccumulator;
              local_1730 = (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)
                           (param_1->Time).EvaluatedConfig.field0_0x0.DebugPtr;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 ((FFrameRate)local_1730.DebugPtr != (FFrameRate)0x0)) {
                GC::MarkAsReachable((UObject *)local_1730.DebugPtr);
              }
              local_1728.Hours = (param_1->Time).RootTimeCode.Hours;
              local_1728.Minutes = (param_1->Time).RootTimeCode.Minutes;
              local_1728.Seconds = (param_1->Time).RootTimeCode.Seconds;
              local_1728.Frames = (param_1->Time).RootTimeCode.Frames;
              local_1728._16_8_ = *(undefined8 *)&(param_1->Time).RootTimeCode.Subframe;
              local_1710._0_4_ = (param_1->Time).RootFrameNumber.Value;
              local_1710._4_8_ = *(undefined8 *)&(param_1->Time).ShotTimeCode;
              local_1710._12_4_ = (param_1->Time).ShotTimeCode.Seconds;
              local_1710._16_4_ = (param_1->Time).ShotTimeCode.Frames;
              local_1710._20_8_ = *(undefined8 *)&(param_1->Time).ShotTimeCode.Subframe;
              local_16f4 = (param_1->Time).ShotFrameNumber.Value;
              local_1770 = param_2->OutputFrameNumber;
              local_176c = param_2->ShotOutputFrameNumber;
              local_1768 = param_2->RenderedFrameNumber;
              local_1764 = param_2->FrameDeltaTime;
              local_1760 = param_2->WorldTimeDilation;
              local_175c = param_2->bHasRelativeTimeBeenUsed;
              local_1758 = param_2->WorldSeconds;
              local_1754 = param_2->MotionBlurFraction;
              local_1750 = param_2->FrameRate;
              local_1748 = param_2->TemporalSampleIndex;
              local_1744 = (float)param_2->TemporalSampleCount;
              local_1740 = (float)param_2->SpatialSampleIndex;
              local_173c = param_2->SpatialSampleCount;
              local_1738 = param_2->bIsFirstTemporalSampleForFrame;
              local_1737 = param_2->bIsLastTemporalSampleForFrame;
              local_1736 = param_2->bDiscardOutput;
              local_1735 = param_2->bRequiresAccumulator;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 = (param_2->EvaluatedConfig).field0_0x0.DebugPtr,
                 pUVar11 != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)pUVar11);
              }
              fVar13 = local_1830;
              local_1730 = (param_2->EvaluatedConfig).field0_0x0;
              local_1728.Hours = (param_2->RootTimeCode).Hours;
              local_1728.Minutes = (param_2->RootTimeCode).Minutes;
              local_1728.Seconds = (param_2->RootTimeCode).Seconds;
              local_1728.Frames = (param_2->RootTimeCode).Frames;
              local_1728.Subframe = (param_2->RootTimeCode).Subframe;
              local_1728.bDropFrameFormat = (param_2->RootTimeCode).bDropFrameFormat;
              local_1728._21_3_ = *(undefined3 *)&(param_2->RootTimeCode).field_0x15;
              local_1710._0_4_ = (param_2->RootFrameNumber).Value;
              local_1710._4_4_ = (param_2->ShotTimeCode).Hours;
              local_1710._8_4_ = (param_2->ShotTimeCode).Minutes;
              local_1710._12_4_ = (param_2->ShotTimeCode).Seconds;
              local_1710._16_4_ = (param_2->ShotTimeCode).Frames;
              local_1710._20_8_ = *(undefined8 *)&(param_2->ShotTimeCode).Subframe;
              local_16f4 = (param_2->ShotFrameNumber).Value;
              local_1740 = local_1830;
              local_17b8._0_8_ = (this->RenderDataIdentifier).RootBranchName;
              local_173c = iVar31;
              ::FString::operator=
                        ((FString *)(local_17b8 + 8),&(this->RenderDataIdentifier).LayerName);
              ::FString::operator=
                        ((FString *)&local_17a0[0].ObjectPtr,
                         &(this->RenderDataIdentifier).RendererName);
              ::FString::operator=(&local_1790,&(this->RenderDataIdentifier).SubResourceName);
              ::FString::operator=(&local_1780,&(this->RenderDataIdentifier).CameraName);
              local_11d8.TraversalContext.ShotIndex = local_17d8;
              local_11d8.TraversalContext.ShotCount = local_17d4;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17d0.DebugPtr != (UMoviePipelineExecutorJob *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17d0.DebugPtr);
              }
              local_11d8.TraversalContext.Job.field0_0x0 = local_17d0;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17c8.DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17c8.DebugPtr);
              }
              local_11d8.TraversalContext.Shot.field0_0x0 = local_17c8;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_17c0.DebugPtr != (UMovieGraphConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_17c0.DebugPtr);
              }
              local_11d8.TraversalContext.RootGraph.field0_0x0 = local_17c0;
              FMovieGraphRenderDataIdentifier::operator=
                        (&local_11d8.TraversalContext.RenderDataIdentifier,
                         (FMovieGraphRenderDataIdentifier *)local_17b8);
              local_11d8.TraversalContext.Time.OutputFrameNumber = local_1770;
              local_11d8.TraversalContext.Time.ShotOutputFrameNumber = local_176c;
              local_11d8.TraversalContext.Time.RenderedFrameNumber = local_1768;
              local_11d8.TraversalContext.Time.FrameDeltaTime = local_1764;
              local_11d8.TraversalContext.Time.WorldTimeDilation = local_1760;
              local_11d8.TraversalContext.Time.bHasRelativeTimeBeenUsed = (bool)local_175c;
              local_11d8.TraversalContext.Time.WorldSeconds = local_1758;
              local_11d8.TraversalContext.Time.MotionBlurFraction = local_1754;
              local_11d8.TraversalContext.Time.FrameRate = local_1750;
              local_11d8.TraversalContext.Time.TemporalSampleIndex = local_1748;
              local_11d8.TraversalContext.Time.TemporalSampleCount = (int)local_1744;
              local_11d8.TraversalContext.Time.SpatialSampleIndex = (int)local_1740;
              local_11d8.TraversalContext.Time.SpatialSampleCount = local_173c;
              local_11d8.TraversalContext.Time.bIsFirstTemporalSampleForFrame = (bool)local_1738;
              local_11d8.TraversalContext.Time.bIsLastTemporalSampleForFrame = (bool)local_1737;
              local_11d8.TraversalContext.Time.bDiscardOutput = (bool)local_1736;
              local_11d8.TraversalContext.Time.bRequiresAccumulator = (bool)local_1735;
              if ((GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1730.DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
                GC::MarkAsReachable((UObject *)local_1730.DebugPtr);
              }
              local_11d8.TraversalContext.Time.EvaluatedConfig.field0_0x0.DebugPtr = local_1730;
              local_11d8.TraversalContext.Time.RootTimeCode.Hours = local_1728.Hours;
              local_11d8.TraversalContext.Time.RootTimeCode.Minutes = local_1728.Minutes;
              local_11d8.TraversalContext.Time.RootTimeCode.Seconds = local_1728.Seconds;
              local_11d8.TraversalContext.Time.RootTimeCode.Frames = local_1728.Frames;
              local_11d8.TraversalContext.Time.RootTimeCode.Subframe = local_1728.Subframe;
              local_11d8.TraversalContext.Time.RootTimeCode.bDropFrameFormat =
                   local_1728.bDropFrameFormat;
              local_11d8.TraversalContext.Time.RootTimeCode._21_3_ = local_1728._21_3_;
              local_11d8.TraversalContext.Time.RootFrameNumber.Value = local_1710._0_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.Hours = local_1710._4_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.Minutes = local_1710._8_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.Seconds = local_1710._12_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.Frames = local_1710._16_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.Subframe = (float)local_1710._20_4_;
              local_11d8.TraversalContext.Time.ShotTimeCode.bDropFrameFormat =
                   (bool)local_1710[0x18];
              local_11d8.TraversalContext.Time.ShotTimeCode._21_3_ = local_1710._25_3_;
              local_11d8.TraversalContext.Time.ShotFrameNumber.Value = local_16f4;
              local_11d8.UnpaddedTileSize.field0_0x0._s_0.Y = iStack_1834;
              local_11d8.UnpaddedTileSize.field0_0x0._s_0.X = local_1838;
              local_11d8.BackbufferResolution.field0_0x0 = local_11d8.UnpaddedTileSize.field0_0x0;
              local_11d8.AccumulatorResolution.field0_0x0 = local_11d8.UnpaddedTileSize.field0_0x0;
              local_11d8.bWriteSampleToDisk = local_1848;
              if ((param_2->bRequiresAccumulator != false) ||
                 (local_11d8.bRequiresAccumulator = false, 1 < iVar31)) {
                local_11d8.bRequiresAccumulator = true;
              }
              if ((param_2->bIsLastTemporalSampleForFrame == false) ||
                 (local_11d8.bFetchFromAccumulator = true, fVar13 != (float)(iVar31 + -1))) {
                local_11d8.bFetchFromAccumulator = false;
              }
              local_11d8.OverlappedPad.field0_0x0 = (TIntPoint<int>_u_0)0x0;
              local_11d8.OverlappedOffset.field0_0x0 = (TIntPoint<int>_u_0)0x0;
              local_11d8.OverlappedSubpixelShift.field0_0x0._s_0.X = (double)(fVar23 - fVar59);
              local_11d8.OverlappedSubpixelShift.field0_0x0._s_0.Y = (double)(fVar23 - fVar60);
              local_11d8.OverscanFraction = 0.0;
              local_16d8._0_1_ = false;
              local_16d8._1_3_ = 0;
              local_16d8._4_4_ = 0;
              uStack_16cc = local_1818._4_4_;
              local_11d8.CropRectangle.field0_0x0._s_0.Min.field0_0x0 =
                   (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
              local_11d8.bAllowOCIO = (bool)(char)this_00[1]._padding_;
              local_11d8.bForceLosslessCompression = false;
              local_11d8.bAllowsCompositing = true;
              local_11d8.bIsBeautyPass = true;
              local_11d8.SceneCaptureSource = local_1818._20_4_;
              local_11d8.CompositingSortOrder = 10;
              local_11d8.RenderLayerIndex = (this->LayerData).LayerIndex;
              lVar43 = 2;
              pTVar27 = &local_1648;
              pdVar38 = local_fd0;
              do {
                pdVar49 = pdVar38;
                pTVar45 = pTVar27;
                dVar18 = pTVar45->XYZ[1];
                *pdVar49 = (pTVar45->_s_0).X;
                pdVar49[1] = dVar18;
                dVar18 = pTVar45->XYZ[3];
                pdVar49[2] = pTVar45->XYZ[2];
                pdVar49[3] = dVar18;
                dVar18 = pTVar45->XYZ[5];
                pdVar49[4] = pTVar45->XYZ[4];
                pdVar49[5] = dVar18;
                dVar18 = pTVar45->XYZ[7];
                pdVar49[6] = pTVar45->XYZ[6];
                pdVar49[7] = dVar18;
                dVar18 = pTVar45->XYZ[9];
                pdVar49[8] = pTVar45->XYZ[8];
                pdVar49[9] = dVar18;
                dVar18 = pTVar45->XYZ[0xb];
                pdVar49[10] = pTVar45->XYZ[10];
                pdVar49[0xb] = dVar18;
                dVar18 = pTVar45->XYZ[0xd];
                pdVar49[0xc] = pTVar45->XYZ[0xc];
                pdVar49[0xd] = dVar18;
                dVar18 = pTVar45->XYZ[0xf];
                pdVar49[0xe] = pTVar45->XYZ[0xe];
                pdVar49[0xf] = dVar18;
                lVar43 = lVar43 + -1;
                pTVar27 = (TVector<double>_u_0 *)(pTVar45->XYZ + 0x10);
                pdVar38 = pdVar49 + 0x10;
              } while (lVar43 != 0);
              dVar18 = pTVar45->XYZ[0x11];
              pdVar49[0x10] = (((TVector<double>_u_0 *)(pTVar45->XYZ + 0x10))->_s_0).X;
              pdVar49[0x11] = dVar18;
              pdVar49[0x12] = pTVar45->XYZ[0x12];
              ::FString::PrintfImpl
                        (&local_16e8,L"/%s_SS_%d_TS_%d_TileX_0_TileY_0_PaneX_%d_PaneY_%d.%d");
              if (local_11d8.Debug_OverrideFilename.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_11d8.Debug_OverrideFilename.Data.AllocatorInstance.Data);
              }
              local_11d8.Debug_OverrideFilename.Data.AllocatorInstance.Data =
                   local_16e8.Data.AllocatorInstance.Data;
              local_16e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_11d8.Debug_OverrideFilename.Data.ArrayNum = local_16e8.Data.ArrayNum;
              local_11d8.Debug_OverrideFilename.Data.ArrayMax = local_16e8.Data.ArrayMax;
              local_16e8.Data.ArrayNum = 0;
              local_16e8.Data.ArrayMax = 0;
              if (local_1780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1780.Data.AllocatorInstance.Data);
              }
              if (local_1790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1790.Data.AllocatorInstance.Data);
              }
              if (local_17a0[0].DebugPtr != (UMovieGraphConfig *)0x0) {
                FMemory::Free(local_17a0[0].DebugPtr);
              }
              if ((UMoviePipelineExecutorJob *)local_17b8._8_8_ != (UMoviePipelineExecutorJob *)0x0)
              {
                FMemory::Free((void *)local_17b8._8_8_);
              }
              (**(code **)(this->_padding_ + 0xb0))(this,&local_11d8);
              if (((param_2->bDiscardOutput == false) &&
                  (cVar29 = (**(code **)(this->_padding_ + 0xa8))(this,local_1818 + 0x20,&local_b48)
                  , cVar29 == '\0')) || (local_11d8.bWriteSampleToDisk != false)) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              pIVar46 = GetRendererModule();
              uVar26 = local_1818._40_8_;
              pcVar12 = *(code **)((longlong)*pIVar46 + 0x40);
              local_1508 = local_1818._32_8_;
              local_1500 = (TReferenceControllerBase<1> *)local_1818._40_8_;
              if ((TReferenceControllerBase<1> *)local_1818._40_8_ !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                *(atomic<int> *)(local_1818._40_8_ + 8) =
                     (atomic<int>)((int)*(atomic<int> *)(local_1818._40_8_ + 8) + 1);
                UNLOCK();
              }
              (*pcVar12)(pIVar46,&local_208);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)uVar26);
              local_1260 = (undefined ***)0x0;
              local_1278 = &Core::Private::Function::
                            TFunction_OwnedObject<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::`38'::<lambda_1>,1,0>
                            ::_vftable_;
              pTStack_1270 = (TReferenceControllerBase<1> *)local_1818._24_8_;
              local_1288[0] =
                   Core::Private::Function::
                   TFunctionRefCaller<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
              this_03 = FRenderCommandList::GetInstanceTLS();
              if (this_03 == (FRenderCommandList *)0x0) {
                FRenderThreadCommandPipe::
                Enqueue<TRenderCommandTag<_UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render_::__l38::TSTR_TransitionTextureSRVState707>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1288);
              }
              else {
                this_04 = FRenderCommandList::GetRenderThread(this_03);
                local_1258._0_8_ = local_1288[0];
                local_1230 = local_1260;
                local_1260 = (undefined ***)0x0;
                local_1248 = local_1278;
                pTStack_1240 = pTStack_1270;
                local_1238 = local_1268;
                local_1288[0] = (code *)0x0;
                local_1228 = 2;
                pFVar47 = (FRenderCommandTag *)
                          TRenderCommandTag<`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Render'::__l38::TSTR_TransitionTextureSRVState707>
                          ::Get();
                RenderCommandPipe::FCommandList::Enqueue
                          (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                    *)local_1258,pFVar47);
                uVar52 = (ulonglong)local_1228;
                if ((2 < uVar52) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar30)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar52] ==
                    Core::Private::
                    TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                    Destruct) {
                  if ((code *)local_1258._0_8_ != (code *)0x0) {
                    pppuVar50 = (undefined ***)(local_1258 + 0x10);
                    if (local_1230 != (undefined ***)0x0) {
                      pppuVar50 = local_1230;
                    }
                    (*(code *)(*pppuVar50)[2])();
                  }
                }
                else {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar52])(local_1258);
                }
              }
              if (local_1288[0] != (code *)0x0) {
                pppuVar50 = &local_1278;
                if (local_1260 != (undefined ***)0x0) {
                  pppuVar50 = local_1260;
                }
                (*(code *)(*pppuVar50)[2])();
              }
              if (((plVar42 != (longlong *)0x0) &&
                  (*(char *)((longlong)&this_00[1]._padding_ + 5) != '\0')) &&
                 (*(char *)((longlong)&this_00[1]._padding_ + 6) != '\0')) {
                (**(code **)(*plVar42 + 0x118))(plVar42,(this->SystemMemoryMirror).Ptr);
              }
              if (bVar28) {
                FMovieGraphSampleState::~FMovieGraphSampleState(&local_11d8);
                FCanvas::~FCanvas(&local_208);
                TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                ::
                ~TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                          (local_c08);
                local_c10 = 0;
                if (local_c18 != (void *)0x0) {
                  FMemory::Free(local_c18);
                }
                TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_c58);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_1818._40_8_);
                if (local_12d8.CustomShowFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_12d8.CustomShowFlags.AllocatorInstance.SecondaryData);
                }
                if (local_270 != (void *)0x0) {
                  FMemory::Free(local_270);
                }
              }
              else {
                (**(code **)(this->_padding_ + 0x98))(this,&local_11d8,&local_1678,&local_208);
                FMovieGraphSampleState::~FMovieGraphSampleState(&local_11d8);
                FCanvas::~FCanvas(&local_208);
                TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                ::
                ~TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                          (local_c08);
                local_c10 = 0;
                if (local_c18 != (void *)0x0) {
                  FMemory::Free(local_c18);
                }
                TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_c58);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_1818._40_8_);
                if (local_12d8.CustomShowFlags.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_12d8.CustomShowFlags.AllocatorInstance.SecondaryData);
                }
                if (local_270 != (void *)0x0) {
                  FMemory::Free(local_270);
                }
              }
              if (local_370 != (void *)0x0) {
                FMemory::Free(local_370);
              }
              local_1830 = (float)((int)local_1830 + 1);
              pUVar33 = local_1820;
              iVar51 = local_1818._8_4_;
              uVar52 = ___xmm_ffffffffffffffffffffffffffffffff;
              uVar58 = _UNK_15060db28;
            } while ((int)local_1830 < iVar31);
          }
          local_1840 = local_1840 + 1;
          pUVar33 = local_1820;
          iVar56 = local_1818._12_4_;
        } while (local_1840 < iVar51);
      }
      local_183c = local_183c + 1;
      pUVar33 = local_1820;
    } while (local_183c < iVar56);
  }
  return;
}

// Setup @ 14ddfc590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Setup
          (FMovieGraphDeferredPanoramicPass *this,
          TWeakObjectPtr<UMovieGraphDefaultRenderer,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UMovieGraphImagePassBaseNode,FWeakObjectPtr> param_2,
          FMovieGraphRenderPassLayerData *param_3)

{
  FString *pFVar1;
  TPimplPtr<FSceneViewStateSystemMemoryMirror,0> *pTVar2;
  FScriptContainerElement *pFVar3;
  FSceneViewStateSystemMemoryMirror *pFVar4;
  FSceneViewStateReference *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  TPimplPtr<FSceneViewStateSystemMemoryMirror,0> TVar11;
  UMovieGraphDefaultRenderer *this_01;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  UObject *pUVar15;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStack_9e8 [32];
  longlong local_9c8;
  longlong local_9c0;
  ForAnyElementType local_9b8;
  undefined8 local_9b0;
  ForAnyElementType local_9a8;
  undefined8 local_9a0;
  longlong local_998;
  FCameraInfo local_988;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  pUVar15 = (UObject *)0x0;
  this->_padding_ = (longlong)param_1.WeakPtr;
  (this->RenderDataIdentifier).RootBranchName = param_3->BranchName;
  local_res10[0] = param_1.WeakPtr;
  ::FString::operator=(&(this->RenderDataIdentifier).LayerName,&param_3->LayerName);
  pUVar9 = FWeakObjectPtr::Get(&(param_3->RenderPassNode).WeakPtr);
  (**(code **)(*(longlong *)pUVar9 + 0x388))(pUVar9,&local_9b8);
  pFVar1 = &(this->RenderDataIdentifier).RendererName;
  if (pFVar1 != (FString *)&local_9b8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_9b8.Data;
    local_9b8.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).RendererName.Data.ArrayNum = (int)local_9b0;
    (this->RenderDataIdentifier).RendererName.Data.ArrayMax = local_9b0._4_4_;
    local_9b0 = 0;
  }
  if (local_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data);
  }
  pUVar9 = FWeakObjectPtr::Get(&(param_3->RenderPassNode).WeakPtr);
  (**(code **)(*(longlong *)pUVar9 + 0x390))(pUVar9,&local_9a8);
  pFVar1 = &(this->RenderDataIdentifier).SubResourceName;
  if (pFVar1 != (FString *)&local_9a8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_9a8.Data;
    local_9a8.Data = (FScriptContainerElement *)0x0;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayNum = (int)local_9a0;
    (this->RenderDataIdentifier).SubResourceName.Data.ArrayMax = local_9a0._4_4_;
    local_9a0 = 0;
  }
  if (local_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data);
  }
  ::FString::operator=(&(this->RenderDataIdentifier).CameraName,&param_3->CameraName);
  (this->LayerData).BranchName = param_3->BranchName;
  ::FString::operator=(&(this->LayerData).LayerName,&param_3->LayerName);
  (this->LayerData).CameraIndex = param_3->CameraIndex;
  ::FString::operator=(&(this->LayerData).CameraName,&param_3->CameraName);
  (this->LayerData).LayerIndex = param_3->LayerIndex;
  (this->LayerData).NumCameras = param_3->NumCameras;
  (this->LayerData).RenderPassNode.WeakPtr = (param_3->RenderPassNode).WeakPtr;
  pUVar9 = FWeakObjectPtr::Get(&(param_3->RenderPassNode).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = UMovieGraphDeferredPanoramicNode::StaticClass();
    iVar13 = (int)pUVar10->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar10->_padding_)) goto LAB_14ddfc755;
  }
  pUVar9 = pUVar15;
LAB_14ddfc755:
  iVar13 = *(int *)&pUVar9[6].field_0x10;
  if (*(int *)&pUVar9[6].field_0x10 < 0) {
    iVar13 = 0;
  }
  iVar7 = *(int *)&pUVar9[6].field_0xc;
  if (*(int *)&pUVar9[6].field_0xc < 0) {
    iVar7 = 0;
  }
  if (pUVar9[6].field_0x15 != '\0') {
    if (pUVar9[6].field_0x16 != '\0') {
      TVar11 = FSceneViewStateInterface::SystemMemoryMirrorAllocate();
      pTVar2 = &this->SystemMemoryMirror;
      if (TVar11.Ptr != (FSceneViewStateSystemMemoryMirror *)pTVar2) {
        pFVar4 = pTVar2->Ptr;
        pTVar2->Ptr = *(FSceneViewStateSystemMemoryMirror **)&(TVar11.Ptr)->TextureMirrors;
        *(undefined8 *)&(TVar11.Ptr)->TextureMirrors = 0;
        if (pFVar4 != (FSceneViewStateSystemMemoryMirror *)0x0) {
          (*(code *)pFVar4[-1].TemporaryTextures.AllocatorInstance.Data)();
        }
      }
      if (local_998 != 0) {
        (**(code **)(local_998 + -0x10))();
      }
    }
    TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::SetNum
              (&this->PaneViewStates,iVar13 * iVar7,Default);
    this_01 = (UMovieGraphDefaultRenderer *)FWeakObjectPtr::Get(local_res10);
    UMovieGraphDefaultRenderer::GetCameraInfo(this_01,&local_988,param_3->CameraIndex);
    if ((local_988.ViewInfo.PostProcessSettings.bOverride_AutoExposureMethod != 0) &&
       (local_988.ViewInfo.PostProcessSettings.AutoExposureMethod.Value != '\x02')) {
      TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_>::SetNum
                (&this->AutoExposureViewStates,6,Default);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 2) {
        local_9c8 = 1;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FSceneViewStateReference::ShareOrigin
                ((FSceneViewStateReference *)(pFVar3 + 0x38),
                 (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 3) {
        local_9c8 = 2;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FSceneViewStateReference::ShareOrigin
                ((FSceneViewStateReference *)(pFVar3 + 0x70),
                 (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 4) {
        local_9c8 = 3;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FSceneViewStateReference::ShareOrigin
                ((FSceneViewStateReference *)(pFVar3 + 0xa8),
                 (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 5) {
        local_9c8 = 4;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FSceneViewStateReference::ShareOrigin
                ((FSceneViewStateReference *)(pFVar3 + 0xe0),
                 (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 6) {
        local_9c8 = 5;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FSceneViewStateReference::ShareOrigin
                ((FSceneViewStateReference *)(pFVar3 + 0x118),
                 (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data);
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 1) {
        local_9c8 = 0;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      this_00 = (FSceneViewStateReference *)(this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate(this_00,(uint)*(byte *)(lVar12 + 0x188));
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 2) {
        local_9c8 = 1;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate
                ((FSceneViewStateReference *)(pFVar3 + 0x38),(uint)*(byte *)(lVar12 + 0x188));
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 3) {
        local_9c8 = 2;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate
                ((FSceneViewStateReference *)(pFVar3 + 0x70),(uint)*(byte *)(lVar12 + 0x188));
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 4) {
        local_9c8 = 3;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate
                ((FSceneViewStateReference *)(pFVar3 + 0xa8),(uint)*(byte *)(lVar12 + 0x188));
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 5) {
        local_9c8 = 4;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate
                ((FSceneViewStateReference *)(pFVar3 + 0xe0),(uint)*(byte *)(lVar12 + 0x188));
      iVar13 = (this->AutoExposureViewStates).ArrayNum;
      if (iVar13 < 6) {
        local_9c8 = 5;
        local_9c0 = (longlong)iVar13;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->AutoExposureViewStates).AllocatorInstance.Data;
      pUVar9 = FWeakObjectPtr::Get(local_res10);
      lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
      FSceneViewStateReference::Allocate
                ((FSceneViewStateReference *)(pFVar3 + 0x118),(uint)*(byte *)(lVar12 + 0x188));
    }
    if (0 < (this->PaneViewStates).ArrayNum) {
      do {
        iVar13 = (this->PaneViewStates).ArrayNum;
        uVar14 = (uint)pUVar15;
        uVar8 = 0;
        if ((int)uVar14 < iVar13) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_9c8 = (longlong)(int)uVar14;
          local_9c0 = (longlong)iVar13;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = (this->PaneViewStates).AllocatorInstance.Data;
        pUVar9 = FWeakObjectPtr::Get(local_res10);
        lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x180))(pUVar9);
        FSceneViewStateReference::Allocate
                  ((FSceneViewStateReference *)(pFVar3 + (longlong)(int)uVar14 * 0x38),
                   (uint)*(byte *)(lVar12 + 0x188));
        pUVar15 = (UObject *)(ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < (this->PaneViewStates).ArrayNum);
    }
    if (local_988.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_988.ViewInfo.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.ViewInfo.PostProcessSettings.WeightedBlendables.Array.
                    AllocatorInstance.Data);
    }
  }
  return;
}

// ShouldDiscardOutput @ 14ddfef20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::ShouldDiscardOutput
          (FMovieGraphDeferredPanoramicPass *this,TSharedRef<FSceneViewFamilyContext,1> *param_1,
          FCameraInfo *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FWeakObjectPtr *this_00;
  UObject *this_01;
  UMovieGraphPipeline *pUVar6;
  undefined1 local_res8 [8];
  
  this_00 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x38))(this,local_res8);
  this_01 = FWeakObjectPtr::Get(this_00);
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UObject *)0x0) {
      return false;
    }
  }
  else {
    if (this_01 == (UObject *)0x0) {
      return false;
    }
    GC::MarkAsReachable(this_01);
  }
  pUVar6 = UMovieGraphRendererBase::GetOwningGraph((UMovieGraphRendererBase *)this_01);
  if (pUVar6 == (UMovieGraphPipeline *)0x0) {
    return false;
  }
  uVar1 = pUVar6->CurrentShotIndex;
  uVar5 = 0;
  if ((int)uVar1 < (pUVar6->ActiveShotList).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return *(char *)(*(longlong *)
                    ((pUVar6->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
                  0xcc) != '\x03';
}

// Teardown @ 14ddff2f0

void __thiscall
UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::Teardown
          (FMovieGraphDeferredPanoramicPass *this)

{
  int *piVar1;
  longlong *plVar2;
  FSceneViewStateReference *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  TArray<FSceneViewStateReference,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar10 = 0;
  uVar12 = uVar10;
  if (0 < (this->PaneViewStates).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->PaneViewStates).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar2 = *(longlong **)((this->PaneViewStates).AllocatorInstance.Data + uVar12 + 8);
      if (plVar2 != (longlong *)0x0) {
        uStack_30 = 0;
        local_38 = 0;
        local_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
      }
      uVar7 = 0;
      if ((int)uVar9 < (this->PaneViewStates).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FSceneViewStateReference::Destroy
                ((FSceneViewStateReference *)
                 ((this->PaneViewStates).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x38));
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x38;
    } while ((int)(uVar9 + 1) < (this->PaneViewStates).ArrayNum);
  }
  piVar1 = &(this->PaneViewStates).ArrayMax;
  pFVar3 = (FSceneViewStateReference *)(this->PaneViewStates).AllocatorInstance.Data;
  iVar8 = (this->PaneViewStates).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FSceneViewStateReference,int>(pFVar3,iVar8);
    (this->PaneViewStates).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PaneViewStates).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FSceneViewStateReference,int>(pFVar3,iVar8);
    (this->PaneViewStates).ArrayNum = 0;
  }
  iVar8 = (this->AutoExposureViewStates).ArrayNum;
  if (0 < iVar8) {
    if ((iVar8 != 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AutoExposureViewStates.Num() == CubeFace_MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineRenderPasses\\Private\\Graph\\Renderers\\MovieGraphDeferredPanoramicPass.cpp"
                           ,0x14e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->AutoExposureViewStates).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((this->AutoExposureViewStates).AllocatorInstance.Data + 8);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    pTVar11 = &this->AutoExposureViewStates;
    if (((this->AutoExposureViewStates).ArrayNum < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((this->AutoExposureViewStates).AllocatorInstance.Data + 0x40);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    if (((this->AutoExposureViewStates).ArrayNum < 3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((pTVar11->AllocatorInstance).Data + 0x78);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    if (((this->AutoExposureViewStates).ArrayNum < 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((pTVar11->AllocatorInstance).Data + 0xb0);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    if (((this->AutoExposureViewStates).ArrayNum < 5) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((pTVar11->AllocatorInstance).Data + 0xe8);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    if (((this->AutoExposureViewStates).ArrayNum < 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar2 = *(longlong **)((pTVar11->AllocatorInstance).Data + 0x120);
    if (plVar2 != (longlong *)0x0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
    }
    if (((this->AutoExposureViewStates).ArrayNum < 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (pTVar11->AllocatorInstance).Data;
    DestructItems<FSceneViewStateReference,int>((FSceneViewStateReference *)(pFVar4 + 0x38),5);
    iVar8 = (this->AutoExposureViewStates).ArrayNum + -6;
    if (iVar8 != 0) {
      memmove(pFVar4 + 0x38,pFVar4 + 0x150,(longlong)iVar8 * 0x38);
    }
    piVar1 = &(this->AutoExposureViewStates).ArrayMax;
    iVar8 = (this->AutoExposureViewStates).ArrayNum + -5;
    (this->AutoExposureViewStates).ArrayNum = iVar8;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,&pTVar11->AllocatorInstance,iVar8,piVar1);
    pFVar3 = (FSceneViewStateReference *)(pTVar11->AllocatorInstance).Data;
    iVar8 = (this->AutoExposureViewStates).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FSceneViewStateReference,int>(pFVar3,iVar8);
      (this->AutoExposureViewStates).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&pTVar11->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FSceneViewStateReference,int>(pFVar3,iVar8);
      (this->AutoExposureViewStates).ArrayNum = 0;
    }
  }
  return;
}

// operator() @ 15058f820

bool __thiscall
`UE::MovieGraph::Rendering::FMovieGraphDeferredPanoramicPass::GetParentNode'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7625713592234410369>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7625713592234410369>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

