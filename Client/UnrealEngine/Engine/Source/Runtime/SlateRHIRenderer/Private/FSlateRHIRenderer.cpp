// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 68

// <lambda_invoker_cdecl> @ 145fd6d70

void __cdecl
`FSlateRHIRenderer::BeginFrame'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 145fd6d80

void __cdecl
`FSlateRHIRenderer::EndFrame'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x78b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c9d4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x38))(GDynamicRHI,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 145fd6d90

void __cdecl
`FSlateRHIRenderer::ResizeViewportIfNeeded'::__l9::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskHandle FVar3;
  
  FVar3.Pimpl.Reference = FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference;
  if (FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait
              ((FTaskBase *)FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference);
    FVar3 = FRDGBuilder::FAsyncDeleter::LastTask;
  }
  FRDGBuilder::FAsyncDeleter::LastTask.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  if (FVar3.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &((FTaskBase *)FVar3.Pimpl.Reference)->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145dd83f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FTaskBase *)FVar3.Pimpl.Reference)->_padding_)(FVar3.Pimpl.Reference,1);
      return;
    }
  }
  return;
}

// FSlateRHIRenderer @ 145fe6db0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRHIRenderer * __thiscall
FSlateRHIRenderer::FSlateRHIRenderer
          (FSlateRHIRenderer *this,TSharedRef<FSlateFontServices,1> *param_1,
          TSharedRef<FSlateRHIResourceManager,1> *param_2)

{
  ulong64 *_Dst;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FSlateRHIRenderer *pFVar6;
  IModularFeatures *pIVar7;
  IHeadMountedDisplayModule *pIVar8;
  longlong lVar9;
  
  FSlateRenderer::FSlateRenderer((FSlateRenderer *)this,param_1);
  this->_padding_ = (longlong)&___7FSlateRHIRenderer__6B_;
  *(undefined8 *)&this->WindowToViewportInfo = 0;
  *(undefined8 *)&(this->WindowToViewportInfo).field_0x8 = 0;
  *(undefined8 *)&(this->WindowToViewportInfo).field_0x20 = 0;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x28 = 0;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x2c = 0x80;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x34 = 0;
  *(undefined8 *)&(this->WindowToViewportInfo).field_0x40 = 0;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x48 = 0;
  this->EnqueuedWindowDrawBuffer = (FSlateDrawBuffer *)0x0;
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers);
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers + 1);
  FSlateDrawBuffer::FSlateDrawBuffer(this->DrawBuffers + 2);
  this->FreeBufferIndex = '\0';
  (this->ElementBatcher).Ptr = (FSlateElementBatcher *)0x0;
  (this->ResourceManager).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ResourceManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->RenderingPolicy).Object = (FSlateRHIRenderingPolicy *)0x0;
  (this->RenderingPolicy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->DynamicBrushesToRemove[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DynamicBrushesToRemove[0].ArrayNum = 0;
  this->DynamicBrushesToRemove[0].ArrayMax = 0;
  this->DynamicBrushesToRemove[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DynamicBrushesToRemove[1].ArrayNum = 0;
  this->DynamicBrushesToRemove[1].ArrayMax = 0;
  this->DynamicBrushesToRemove[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DynamicBrushesToRemove[2].ArrayNum = 0;
  this->DynamicBrushesToRemove[2].ArrayMax = 0;
  (this->PendingDeletes).CachedFastPathRenderingData.AllocatorInstance.Data =
       (FSlateCachedFastPathRenderingData **)0x0;
  (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum = 0;
  (this->PendingDeletes).CachedFastPathRenderingData.ArrayMax = 0;
  (this->PendingDeletes).CachedElementData.AllocatorInstance.Data = (FSlateCachedElementData **)0x0;
  (this->PendingDeletes).CachedElementData.ArrayNum = 0;
  (this->PendingDeletes).CachedElementData.ArrayMax = 0;
  (this->DeferredUpdateContexts).AllocatorInstance.Data = (FRenderThreadUpdateContext *)0x0;
  (this->DeferredUpdateContexts).ArrayNum = 0;
  (this->DeferredUpdateContexts).ArrayMax = 0;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                       ,0x5a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSlateRHIRenderer *)(*pcVar2)();
      return pFVar6;
    }
  }
  pIVar7 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                      ::__l2::HMDFeatureName,L"HMD");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar5 = (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7);
  if (0 < iVar5) {
    pIVar8 = IHeadMountedDisplayModule::Get();
    cVar4 = (**(code **)((longlong)*pIVar8 + 0x90))(pIVar8);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_145fe6f73;
    }
  }
  bVar3 = false;
LAB_145fe6f73:
  this->bIsStandaloneStereoOnlyDevice = bVar3;
  this->bUpdateHDRDisplayInformation = false;
  this->bShrinkPostBufferRequested = None;
  FRenderCommandFence::FRenderCommandFence(this->SlatePostRTFences);
  FRenderCommandFence::FRenderCommandFence(this->SlatePostRTFences + 1);
  FRenderCommandFence::FRenderCommandFence(this->SlatePostRTFences + 2);
  FRenderCommandFence::FRenderCommandFence(this->SlatePostRTFences + 3);
  FRenderCommandFence::FRenderCommandFence(this->SlatePostRTFences + 4);
  (this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[0] = 0;
  _Dst = this->LastFramesPostBufferUsed;
  (this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[1] = 0;
  (this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[2] = 0;
  (this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[3] = 0;
  (this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[4] = 0;
  lVar9 = 5;
  if (this->SlatePostRTFences < _Dst) {
    lVar9 = 0;
  }
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ScreenshotState).ViewportToCapture = (FSlateViewportInfo *)0x0;
  (this->ScreenshotState).ColorData = (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ScreenshotState).ColorDataHDR = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ActiveScenes).AllocatorInstance.SecondaryData = (ForElementType<FSceneInterface_*>)0x0;
  (this->ActiveScenes).ArrayNum = 0;
  (this->ActiveScenes).ArrayMax = 4;
  this->CurrentSceneIndex = -1;
  this->ResourceVersion = 0;
  if (_Dst <= this->SlatePostRTFences) {
    memset(_Dst,0,lVar9 << 3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// operator() @ 145fec3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSlateRHIRenderer::FlushPendingDeletes'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uchar *puVar1;
  int *piVar2;
  ForElementType<FSlateCachedClipState> *pFVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSlateCachedClipState> FVar7;
  ForAnyElementType *pFVar8;
  ForElementType<FSlateCachedClipState> FVar9;
  ForElementType<FSlateCachedClipState> *pFVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  
  pFVar10 = *(ForElementType<FSlateCachedClipState> **)this;
  iVar5 = *(int *)((longlong)this + 8);
  pFVar3 = pFVar10 + iVar5;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar5) {
      `TCheckedPointerIterator<FSlateCachedFastPathRenderingData_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar3) break;
    FVar7 = *pFVar10;
    if (FVar7 != (ForElementType<FSlateCachedClipState>)0x0) {
      puVar1 = (uchar *)((longlong)FVar7 + 0x1c);
      FVar9 = *(ForElementType<FSlateCachedClipState> *)((longlong)FVar7 + 0x10);
      if (*(int *)puVar1 < 0) {
        if (FVar9 == (ForElementType<FSlateCachedClipState>)0x0) {
          FVar9 = FVar7;
        }
        DestructItems<FSlateCachedClipState,int>
                  ((FSlateCachedClipState *)FVar9,*(int *)((longlong)FVar7 + 0x18));
        *(undefined4 *)((longlong)FVar7 + 0x18) = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedClipState>_>
                    (0x10,8,0,(ForElementType<FSlateCachedClipState> *)FVar7,0,(int *)puVar1);
        }
      }
      else {
        if (FVar9 == (ForElementType<FSlateCachedClipState>)0x0) {
          FVar9 = FVar7;
        }
        DestructItems<FSlateCachedClipState,int>
                  ((FSlateCachedClipState *)FVar9,*(int *)((longlong)FVar7 + 0x18));
        *(undefined4 *)((longlong)FVar7 + 0x18) = 0;
      }
      FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
      ~ForAnyElementType((ForAnyElementType *)((longlong)FVar7 + 0x38));
      FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
      ~ForAnyElementType((ForAnyElementType *)((longlong)FVar7 + 0x20));
      FVar9 = FVar7;
      if (*(ForElementType<FSlateCachedClipState> *)((longlong)FVar7 + 0x10) !=
          (ForElementType<FSlateCachedClipState>)0x0) {
        FVar9 = *(ForElementType<FSlateCachedClipState> *)((longlong)FVar7 + 0x10);
      }
      DestructItems<FSlateCachedClipState,int>
                ((FSlateCachedClipState *)FVar9,*(int *)((longlong)FVar7 + 0x18));
      if (*(void **)((longlong)FVar7 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)FVar7 + 0x10));
      }
      ::operator_delete((void *)FVar7,0x50);
    }
    pFVar10 = pFVar10 + 1;
  }
  puVar11 = *(undefined8 **)((longlong)this + 0x10);
  iVar5 = *(int *)((longlong)this + 0x18);
  puVar4 = puVar11 + iVar5;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) != iVar5) {
      `TCheckedPointerIterator<FSlateCachedElementData_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar11 == puVar4) break;
    pFVar8 = (ForAnyElementType *)*puVar11;
    if (pFVar8 != (ForAnyElementType *)0x0) {
      DestructItems<FSlateCachedClipState,int>
                ((FSlateCachedClipState *)pFVar8[0x3d].Data,*(int *)&pFVar8[0x3e].Data);
      if (pFVar8[0x3d].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8[0x3d].Data);
      }
      if (pFVar8[0x3b].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8[0x3b].Data);
      }
      DestructItems<TSharedPtr<FSlateCachedElementList,1>,int>
                ((TSharedPtr<FSlateCachedElementList,1> *)pFVar8[7].Data,*(int *)&pFVar8[8].Data);
      if (pFVar8[7].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8[7].Data);
      }
      piVar2 = (int *)((longlong)&pFVar8[1].Data + 4);
      *(undefined4 *)&pFVar8[1].Data = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,0,pFVar8,0,piVar2);
      }
      *(undefined4 *)&pFVar8[6].Data = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar8[6].Data + 4) = 0;
      iVar6 = *(int *)((longlong)&pFVar8[5].Data + 4);
      *(undefined4 *)&pFVar8[5].Data = 0;
      if ((iVar6 < 0) || (0x80 < iVar6)) {
        *(undefined4 *)((longlong)&pFVar8[5].Data + 4) = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar8 + 2),0);
      }
      if (pFVar8[4].Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8[4].Data);
      }
      if (pFVar8->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8->Data);
      }
      ::operator_delete(pFVar8,0x1f8);
    }
    puVar11 = puVar11 + 1;
  }
  return;
}

// operator() @ 145fec600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`FSlateRHIRenderer::AddWidgetRendererUpdate'::__l7::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  EShaderPlatform EVar1;
  FRDGEventName *pFVar2;
  undefined1 auStackY_858 [32];
  FRDGEventName local_820;
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  EVar1 = GMaxRHIShaderPlatform;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  pFVar2 = FRDGEventName::FRDGEventName(&local_808,1,L"SlateWidgetRender");
  local_820.EventFormat = pFVar2->EventFormat;
  ::FString::FString(&local_820.FormattedEventName,&pFVar2->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_820,ParallelExecute|ParallelSetup,EVar1);
  if (local_808.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.FormattedEventName.Data.AllocatorInstance.Data);
  }
  (**(code **)(**(longlong **)((longlong)this + 0x30) + 0x40))
            (*(longlong **)((longlong)this + 0x30),&local_7e8,this);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// operator() @ 145fecb40

void __thiscall
`FSlateRHIRenderer::PresentWindow_RenderThread'::__l54::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  uint uVar5;
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_28;
  code *local_20;
  undefined1 *local_18;
  
  puVar3 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
  local_18 = local_res18;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar3);
  if (RHITCycles.bIsSet == false) {
    QueryPerformanceCounter(&local_res20);
    RHITCycles.TypedValue = local_res20.s.LowPart;
    RHITCycles.bIsSet = true;
  }
  QueryPerformanceCounter(&local_28);
  if (RHITCycles.bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = (local_28.s.LowPart - *(int *)(pFVar4 + 2)) - RHITCycles.TypedValue;
  RHITCycles.TypedValue = local_28.s.LowPart;
  RHITCycles.bIsSet = true;
  GRHIThreadTime = 0;
  if (0 < (int)uVar5) {
    GRHIThreadTime = uVar5;
  }
  LOCK();
  UNLOCK();
  pFVar4[2] = (FTlsAutoCleanup)0x0;
  *(undefined4 *)(pFVar4 + 3) = 1;
  return;
}

// operator() @ 145fecc20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSlateRHIRenderer::DrawWindows_Private'::__l76::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int iVar2;
  FSlateRHIRenderer *this_00;
  FRenderThreadUpdateContext *pFVar3;
  FSlateDrawWindowPassInputs *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FRenderThreadUpdateContext_const_,int> local_28;
  TArrayView<FSlateDrawWindowPassInputs_const_,int> local_18;
  
  this_00 = *(FSlateRHIRenderer **)this;
  pFVar3 = *(FRenderThreadUpdateContext **)(*(longlong *)((longlong)this + 8) + 0x10);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x18);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (FSlateDrawWindowPassInputs *)**(undefined8 **)((longlong)this + 8);
  iVar2 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar2;
  local_28.DataPtr = pFVar3;
  local_18.DataPtr = pFVar4;
  FSlateRHIRenderer::DrawWindows_RenderThread(this_00,param_1,&local_18,&local_28);
  return;
}

// operator() @ 145fecd10

void __thiscall
`FSlateRHIRenderer::DrawWindow_RenderThread'::__l79::<lambda_4>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar1;
  FRDGResource *pFVar2;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TIntRect<int>_u_0 local_c8;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  TIntRect<int>_u_0 local_a8;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  TIntPoint<int>_u_0 local_88;
  TIntPoint<int>_u_0 TStack_80;
  undefined8 local_78;
  undefined4 local_70;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 TStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined2 local_36;
  undefined2 local_23;
  undefined1 local_21;
  undefined2 local_1a;
  
  pTVar1 = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20);
  if (pTVar1 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(longlong *)((longlong)this + 0x28) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x389,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28);
    local_c8._11_1_ = local_21;
    local_c8._9_2_ = local_23;
    uStack_b6 = local_1a;
    local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x10);
    local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x18);
    pFVar2 = *(FRDGResource **)((longlong)this + 8);
    local_c8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x6;
    local_c8._12_4_ = 0;
    local_c8._8_1_ = 1;
    local_c8._12_4_ = 0x467a0000;
    local_b8 = 0;
    uStack_b4 = 0;
    FRDGResource::ValidateRHIAccess(pFVar2);
    local_58 = CONCAT44(uStack_b4,CONCAT22(uStack_b6,local_b8));
    local_68 = (TIntPoint<int>_u_0)local_c8._s_0.Min.field0_0x0;
    TStack_60 = (TIntPoint<int>_u_0)local_c8._s_0.Max.field0_0x0;
    local_50 = 0;
    FRHICommandListImmediate::ReadSurfaceData
              (param_1,(FRHITexture *)pFVar2->ResourceRHI,(TIntRect<int> *)&local_a8._s_0,pTVar3,
               (FReadSurfaceDataFlags *)&local_68._s_0);
  }
  else {
    pFVar2 = *(FRDGResource **)((longlong)this + 8);
    local_a8._11_1_ = local_3d;
    local_a8._9_2_ = local_3f;
    uStack_96 = local_36;
    local_c8._s_0.Min.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x10);
    local_c8._s_0.Max.field0_0x0 = (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x18);
    local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x300000006;
    local_a8._12_4_ = 0;
    local_a8._8_1_ = 1;
    local_a8._12_4_ = 0x467a0000;
    local_98 = 0;
    uStack_94 = 0;
    FRDGResource::ValidateRHIAccess(pFVar2);
    local_78 = CONCAT44(uStack_94,CONCAT22(uStack_96,local_98));
    local_88 = (TIntPoint<int>_u_0)local_a8._s_0.Min.field0_0x0;
    TStack_80 = (TIntPoint<int>_u_0)local_a8._s_0.Max.field0_0x0;
    local_70 = 0;
    FRHICommandListImmediate::ReadSurfaceData
              (param_1,(FRHITexture *)pFVar2->ResourceRHI,(TIntRect<int> *)&local_c8._s_0,pTVar1,
               (FReadSurfaceDataFlags *)&local_88._s_0);
  }
  return;
}

// AcquireDrawBuffer @ 145fef2c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDrawBuffer * __thiscall FSlateRHIRenderer::AcquireDrawBuffer(FSlateRHIRenderer *this)

{
  float fVar1;
  bool bVar2;
  TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  FSlateDrawBuffer *this_00;
  uint uVar4;
  
  uVar4 = (this->FreeBufferIndex + 1) % 3;
  this->FreeBufferIndex = (uchar)uVar4;
  this_00 = this->DrawBuffers + uVar4;
  bVar2 = FSlateDrawBuffer::Lock(this_00);
  fVar1 = __real_3a83126f;
  while (!bVar2) {
    bVar2 = IsInSlateThread();
    if (bVar2) {
      FWindowsPlatformProcess::Sleep(fVar1);
    }
    else {
      bVar2 = IsInGameThread();
      if ((bVar2) || (bVar2 = IsInSlateThread(), bVar2)) {
        FlushRenderingCommands();
      }
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar4 = this->FreeBufferIndex + 1;
      this->FreeBufferIndex = (char)uVar4 + (char)((ulonglong)uVar4 / 3) * -3;
    }
    this_00 = this->DrawBuffers + this->FreeBufferIndex;
    bVar2 = FSlateDrawBuffer::Lock(this_00);
  }
  pTVar3 = this->DynamicBrushesToRemove + this->FreeBufferIndex;
  DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
            ((TSharedPtr<FSlateDynamicImageBrush,1> *)(pTVar3->AllocatorInstance).Data,
             pTVar3->ArrayNum);
  pTVar3->ArrayNum = 0;
  if (pTVar3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
  }
  FSlateDrawBuffer::ClearBuffer(this_00);
  FSlateDrawBuffer::UpdateResourceVersion(this_00,this->ResourceVersion);
  return this_00;
}

// AddWidgetRendererUpdate @ 145ff5d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::AddWidgetRendererUpdate
          (FSlateRHIRenderer *this,FRenderThreadUpdateContext *param_1,bool param_2)

{
  int *piVar1;
  TArray<FRenderThreadUpdateContext,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar2;
  FRenderThreadUpdateContext *pFVar3;
  code *pcVar4;
  double dVar5;
  FRenderTarget *pFVar6;
  undefined8 uVar7;
  FRenderThreadUpdateContext *pFVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  code **ppcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  FRenderThreadUpdateContext *local_138;
  FRenderThreadUpdateContext *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  FSlateDrawBuffer *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  FRenderTarget *pFStack_e0;
  ISlate3DRenderer *local_d8;
  code *pcStack_d0;
  FSlateDrawBuffer *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  FRenderTarget *pFStack_a0;
  ISlate3DRenderer *local_98;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_2) {
    pTVar2 = &this->DeferredUpdateContexts;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) &&
       (lVar14 = (longlong)(this->DeferredUpdateContexts).ArrayMax, param_1 < pFVar3 + lVar14)) {
      local_120 = (longlong)(this->DeferredUpdateContexts).ArrayNum;
      local_118 = 0x40;
      local_138 = param_1;
      local_130 = pFVar3;
      local_128 = lVar14;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar11 = (this->DeferredUpdateContexts).ArrayNum;
    piVar1 = &(this->DeferredUpdateContexts).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_>
                         (0x840,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DeferredUpdateContexts).ArrayNum = iVar11 + 1;
    dVar5 = param_1->WorldTimeSeconds;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    pFVar3[iVar11].WindowDrawBuffer = param_1->WindowDrawBuffer;
    pFVar3[iVar11].WorldTimeSeconds = dVar5;
    uVar9 = *(undefined4 *)&param_1->field_0x14;
    dVar5 = param_1->RealTimeSeconds;
    pFVar8 = pFVar3 + iVar11;
    pFVar8->DeltaTimeSeconds = param_1->DeltaTimeSeconds;
    *(undefined4 *)&pFVar8->field_0x14 = uVar9;
    *(double *)(&pFVar8->DeltaTimeSeconds + 2) = dVar5;
    uVar9 = *(undefined4 *)&param_1->field_0x24;
    pFVar6 = param_1->RenderTarget;
    pFVar8 = pFVar3 + iVar11;
    pFVar8->DeltaRealTimeSeconds = param_1->DeltaRealTimeSeconds;
    *(undefined4 *)&pFVar8->field_0x24 = uVar9;
    *(FRenderTarget **)(&pFVar8->DeltaRealTimeSeconds + 2) = pFVar6;
    uVar7 = *(undefined8 *)&param_1->bClearTarget;
    pFVar3[iVar11].Renderer = param_1->Renderer;
    (&pFVar3[iVar11].Renderer)[1] = (ISlate3DRenderer *)uVar7;
  }
  else {
    local_108 = param_1->WindowDrawBuffer;
    pcStack_100 = (code *)param_1->WorldTimeSeconds;
    local_88[0] = (code *)0x0;
    local_f8 = *(code **)&param_1->DeltaTimeSeconds;
    pcStack_f0 = (code *)param_1->RealTimeSeconds;
    local_e8 = *(code **)&param_1->DeltaRealTimeSeconds;
    pFStack_e0 = param_1->RenderTarget;
    local_d8 = param_1->Renderer;
    pcStack_d0 = *(code **)&param_1->bClearTarget;
    local_c8 = local_108;
    pcStack_c0 = pcStack_100;
    local_b8 = local_f8;
    pcStack_b0 = pcStack_f0;
    local_a8 = local_e8;
    pFStack_a0 = pFStack_e0;
    local_98 = local_d8;
    pcStack_90 = pcStack_d0;
    local_60 = FMemory::Malloc(0x48,8);
    local_60[1] = (code *)local_108;
    local_60[2] = pcStack_100;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSlateRHIRenderer::AddWidgetRendererUpdate'::`7'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[3] = local_f8;
    local_60[4] = pcStack_f0;
    local_60[5] = local_e8;
    local_60[6] = (code *)pFStack_e0;
    local_60[7] = (code *)local_d8;
    local_60[8] = pcStack_d0;
    if (local_60 != (code **)&DAT_fffffffffffffff8) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateRHIRenderer::AddWidgetRendererUpdate'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::AddWidgetRendererUpdate_::__l7::TSTR_DrawWidgetRendererImmediate1726>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58[0] = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_48[0] = local_78[0];
      local_48[1] = local_78[1];
      local_48[2] = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`FSlateRHIRenderer::AddWidgetRendererUpdate'::__l7::TSTR_DrawWidgetRendererImmediate1726>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar12);
      uVar15 = (ulonglong)local_28;
      if (2 < uVar15) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_58[0] != (code *)0x0) {
          ppcVar13 = local_58 + 2;
          if (local_30 != (code **)0x0) {
            ppcVar13 = local_30;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])
                  ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar13 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar13 = local_60;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
  }
  return;
}

// AreShadersInitialized @ 145ff5fc0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRHIRenderer::AreShadersInitialized(FSlateRHIRenderer *this)

{
  return true;
}

// BeginFrame @ 145ff6140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::BeginFrame(FSlateRHIRenderer *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = `FSlateRHIRenderer::BeginFrame'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateRHIRenderer::BeginFrame_::__l2::TSTR_SlateRHIBeginFrame1453>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlateRHIRenderer::BeginFrame'::__l2::TSTR_SlateRHIBeginFrame1453>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// CanRenderResource @ 145ff6ba0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRHIRenderer::CanRenderResource(FSlateRHIRenderer *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  void *pvVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UTexture_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar2 = Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
  pvVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  if (pvVar3 == (void *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return false;
    }
  }
  return true;
}

// ClearScenes @ 145ff71f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::ClearScenes(FSlateRHIRenderer *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_b8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSlateRHIRenderingPolicy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSlateRHIRenderingPolicy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar3 = IsInSlateThread();
  if (!bVar3) {
    this->CurrentSceneIndex = -1;
    piVar1 = &(this->ActiveScenes).ArrayMax;
    (this->ActiveScenes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
                (8,8,0,&(this->ActiveScenes).AllocatorInstance,0,piVar1);
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateRHIRenderer::ClearScenes'::`5'::<lambda_1>,1,0>::
                _vftable_;
    pFStack_70 = (this->RenderingPolicy).Object;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateRHIRenderer::ClearScenes'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::ClearScenes_::__l5::TSTR_ClearScenesOnPolicy1607>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateRHIRenderer::ClearScenes'::__l5::TSTR_ClearScenesOnPolicy1607>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// CreateSharedHandleTexture @ 145ffb7e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateUpdatableTexture * __thiscall
FSlateRHIRenderer::CreateSharedHandleTexture(FSlateRHIRenderer *this,void *param_1)

{
  return (FSlateUpdatableTexture *)0x0;
}

// CreateUpdatableTexture @ 145ffd8d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateUpdatableTexture * __thiscall
FSlateRHIRenderer::CreateUpdatableTexture(FSlateRHIRenderer *this,uint param_1,uint param_2)

{
  FSlateTexture2DRHIRef *pFVar1;
  FRenderResource *pFVar2;
  EPixelFormat EVar3;
  TSharedPtr<FSlateTextureData,1> local_18;
  
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 == (FSlateTexture2DRHIRef *)0x0) {
    pFVar1 = (FSlateTexture2DRHIRef *)0x0;
  }
  else {
    EVar3 = PF_B8G8R8A8;
    if (this->bIsStandaloneStereoOnlyDevice != false) {
      EVar3 = PF_R8G8B8A8;
    }
    local_18.Object = (FSlateTextureData *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                       (pFVar1,param_1,param_2,EVar3,&local_18,None,true);
  }
  pFVar2 = (FRenderResource *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateTexture2DRHIRef *)0x0) {
    pFVar2 = (FRenderResource *)0x0;
  }
  BeginInitResource(pFVar2,(FRenderCommandPipe *)0x0);
  pFVar2 = (FRenderResource *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateTexture2DRHIRef *)0x0) {
    pFVar2 = (FRenderResource *)0x0;
  }
  return (FSlateUpdatableTexture *)pFVar2;
}

// CreateViewport @ 145ffdaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::CreateViewport(FSlateRHIRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  byte bVar1;
  SWindow *pSVar2;
  longlong lVar3;
  FRHIResource *this_00;
  code *pcVar4;
  double dVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  bool bVar20;
  int iVar21;
  FDeprecateSlateVector2D *pFVar22;
  TSharedPtr<FGenericWindow,1> *pTVar23;
  FName FVar24;
  FName *pFVar25;
  FDeprecateSlateVector2D FVar26;
  FDeprecateSlateVector2D FVar27;
  TRefCountPtr<FRHIViewport> TVar28;
  EPixelFormat EVar29;
  uint uVar30;
  FRenderResource *pFVar31;
  undefined1 *puVar32;
  uint uVar33;
  float fVar34;
  undefined1 auStackY_198 [32];
  FName local_168;
  FRenderResource *local_160;
  float local_158;
  float fStack_154;
  TPairInitializer<SWindow_const_*_&&,FSlateViewportInfo_*_const_&> local_150;
  FRHIResource *local_140;
  SWindow *local_138;
  TVector2<double>_u_0 local_130;
  SWindow **local_120;
  FRenderResource **local_118;
  TSharedPtr<FGenericWindow,1> local_f8;
  TVector2<double>_u_0 local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pSVar2 = param_1->Object;
  uVar30 = ((uint)((ulonglong)pSVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pSVar2 >> 4)) *
           -0x7a143595;
  uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
  if (*(int *)&(this->WindowToViewportInfo).field_0x8 !=
      *(int *)&(this->WindowToViewportInfo).field_0x34) {
    puVar32 = *(undefined1 **)&(this->WindowToViewportInfo).field_0x40;
    if (puVar32 == (undefined1 *)0x0) {
      puVar32 = &(this->WindowToViewportInfo).field_0x38;
    }
    iVar21 = *(int *)(puVar32 +
                     (ulonglong)
                     (*(int *)&(this->WindowToViewportInfo).field_0x48 - 1U &
                     (uVar30 >> 0x10 ^ uVar30)) * 4);
    if (iVar21 != -1) {
      lVar3 = *(longlong *)&(this->WindowToViewportInfo).field_0x0;
      do {
        if (*(SWindow **)(lVar3 + (longlong)iVar21 * 0x18) == pSVar2) goto LAB_145ffdf7c;
        iVar21 = *(int *)(lVar3 + 0x10 + (longlong)iVar21 * 0x18);
      } while (iVar21 != -1);
    }
  }
  FlushRenderingCommands();
  pFVar22 = &param_1->Object->ViewportSize;
  if (*(float *)pFVar22 == 0.0) {
    pFVar22 = &param_1->Object->Size;
  }
  local_168.ComparisonIndex.Value = SUB84(*pFVar22,0);
  local_168.Number = SUB84(*pFVar22,4);
  uVar33 = -((int)ROUND(__real_bf000000 - (float)local_168.ComparisonIndex.Value * __real_40000000)
            >> 1);
  uVar30 = -((int)ROUND(__real_bf000000 - (float)local_168.Number * __real_40000000) >> 1);
  local_168.ComparisonIndex.Value = 8;
  if (8 < (int)uVar33) {
    local_168.ComparisonIndex.Value = uVar33;
  }
  local_168.Number = 8;
  if (8 < (int)uVar30) {
    local_168.Number = uVar30;
  }
  if ((0x4000 < (int)local_168.ComparisonIndex.Value) || (0x4000 < (int)local_168.Number)) {
    local_150.Value = (FSlateViewportInfo **)&local_168;
    bVar20 = `FSlateRHIRenderer::CreateViewport'::__l6::<lambda_1>::operator()(&local_150.Value);
    if (!bVar20) {
      local_150.Key._0_4_ = 0x4000;
      if ((int)local_168.ComparisonIndex.Value.Value < 0x4000) {
        local_150.Key._0_4_ = local_168.ComparisonIndex.Value.Value;
      }
      local_150.Key._4_4_ = 0x4000;
      if ((int)local_168.Number < 0x4000) {
        local_150.Key._4_4_ = local_168.Number;
      }
      local_168.Number = local_150.Key._4_4_;
      local_168.ComparisonIndex.Value = local_150.Key._0_4_;
    }
  }
  local_160 = ::operator_new(0xd0);
  if (local_160 == (FRenderResource *)0x0) {
    local_160 = (FRenderResource *)0x0;
  }
  else {
    memset(local_160,0,0xd0);
    FRenderResource::FRenderResource(local_160);
    local_160->_padding_ = (longlong)&___7FSlateViewportInfo__6B_;
    local_160[1]._padding_ = 0;
    local_160[1].OwnerName.ComparisonIndex = 0;
    local_160[1].OwnerName.Number = 0;
    local_160[5].ResourceName = (FName)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(TIntPoint<int>_u_0 *)&local_160[5].ListIndex =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined1 *)&local_160[6]._padding_ = 0;
    *(undefined8 *)((longlong)&local_160[6]._padding_ + 4) = 0;
    *(undefined2 *)&local_160[6].OwnerName.Number = 0;
  }
  pTVar23 = SWindow::GetNativeWindow(param_1->Object,&local_f8);
  if ((pTVar23->Object == (FGenericWindow *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar24 = (FName)(**(code **)(pTVar23->Object->_padding_ + 0xc0))();
  local_160[1].OwnerName = FVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  pFVar25 = (FName *)CreateSlateProjectionMatrix
                               (&local_d8,local_168.ComparisonIndex.Value,local_168.Number);
  FVar24 = pFVar25[1];
  FVar6 = pFVar25[2];
  FVar7 = pFVar25[3];
  FVar8 = pFVar25[4];
  FVar9 = pFVar25[5];
  FVar10 = pFVar25[6];
  FVar11 = pFVar25[7];
  FVar12 = pFVar25[8];
  FVar13 = pFVar25[9];
  FVar14 = pFVar25[10];
  FVar15 = pFVar25[0xb];
  FVar16 = pFVar25[0xc];
  FVar17 = pFVar25[0xd];
  FVar18 = pFVar25[0xe];
  FVar19 = pFVar25[0xf];
  local_160[1].ResourceName = *pFVar25;
  *(FName *)&local_160[1].ListIndex = FVar24;
  local_160[2]._padding_ = (longlong)FVar6;
  local_160[2].OwnerName = FVar7;
  local_160[2].ResourceName = FVar8;
  *(FName *)&local_160[2].ListIndex = FVar9;
  local_160[3]._padding_ = (longlong)FVar10;
  local_160[3].OwnerName = FVar11;
  local_160[3].ResourceName = FVar12;
  *(FName *)&local_160[3].ListIndex = FVar13;
  local_160[4]._padding_ = (longlong)FVar14;
  local_160[4].OwnerName = FVar15;
  local_160[4].ResourceName = FVar16;
  *(FName *)&local_160[4].ListIndex = FVar17;
  local_160[5]._padding_ = (longlong)FVar18;
  local_160[5].OwnerName = FVar19;
  local_160[5].ResourceName = local_168;
  *(FName *)&local_160[5].ListIndex = local_168;
  FVar24 = local_160[1].OwnerName;
  FVar26 = SWindow::GetSizeInScreen(param_1->Object);
  FVar27 = SWindow::GetPositionInScreen(param_1->Object);
  fVar34 = *(float *)((longlong)FVar27 + 4) + *(float *)((longlong)FVar26 + 4);
  _local_158 = CONCAT44(fVar34,*(float *)FVar26 + *(float *)FVar27);
  local_130._s_0.X = (double)(*(float *)FVar26 + *(float *)FVar27);
  local_130._s_0.Y = (double)fVar34;
  FVar26 = SWindow::GetPositionInScreen(param_1->Object);
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)FVar26 >> 0x20);
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._s_0.X = (double)(float)*(undefined8 *)FVar26;
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  HDRGetMetaData((EDisplayOutputFormat *)&local_160[6].OwnerName,
                 (EDisplayColorGamut *)((longlong)&local_160[6]._padding_ + 4),
                 (bool *)&local_160[6].OwnerName.Number,(TVector2<double> *)&local_e8._s_0,
                 (TVector2<double> *)&local_130._s_0,(void *)FVar24);
  bVar20 = FSlateRenderer::IsViewportFullscreen((FSlateRenderer *)this,param_1->Object);
  EVar29 = GRHIGlobals.HDRDisplayOutputFormat;
  if ((char)local_160[6].OwnerName.Number == '\0') {
    EVar29 = -(this->bIsStandaloneStereoOnlyDevice != false) & PF_R8G8B8A8;
  }
  *(EPixelFormat *)&local_160[6]._padding_ = EVar29;
  TVar28 = RHICreateViewport(&local_140,local_160[1].OwnerName.ComparisonIndex.Value,
                             local_168.ComparisonIndex.Value,local_168.Number._0_1_,bVar20);
  pFVar31 = local_160 + 1;
  if (pFVar31 != (FRenderResource *)TVar28.Reference) {
    this_00 = (FRHIResource *)pFVar31->_padding_;
    pFVar31->_padding_ = *(longlong *)TVar28.Reference;
    *(undefined8 *)TVar28.Reference = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_140 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_140);
  }
  *(bool *)((longlong)&local_160[6].OwnerName.Number + 1) = bVar20;
  BeginInitResource(local_160,(FRenderCommandPipe *)0x0);
  local_138 = param_1->Object;
  local_120 = &local_138;
  local_118 = &local_160;
  TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<SWindow_const_*_&&,FSlateViewportInfo_*_const_&>_>
            ((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
              *)&this->WindowToViewportInfo,&local_150,(bool *)&local_120);
  bVar1 = param_1->Object->field_0x3ea;
  param_1->Object->field_0x3ea = ((char)local_160[6].OwnerName.Number * '\x02' ^ bVar1) & 2 ^ bVar1;
LAB_145ffdf7c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Destroy @ 145ffe990

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::Destroy(FSlateRHIRenderer *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<SWindow_const_*,FSlateViewportInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>_>
  *this_00;
  ulonglong uVar3;
  FSlateElementBatcher *this_01;
  undefined8 *puVar4;
  code *pcVar5;
  TMap<SWindow_const_*,FSlateViewportInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_12c;
  undefined8 local_120;
  FSharedReferencer<1> FStack_118;
  undefined8 local_110;
  FSharedReferencer<1> FStack_108;
  undefined8 local_100;
  FSharedReferencer<1> FStack_f8;
  TMap<SWindow_const_*,FSlateViewportInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<SWindow_const_*,FSlateViewportInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSlateRHIResourceManager::ReleaseResources((this->ResourceManager).Object);
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSlateFontServices::ReleaseResources((FSlateFontServices *)this->_padding_);
  iVar12 = 0;
  puVar2 = &(this->WindowToViewportInfo).field_0x10;
  iVar17 = *(int *)&(this->WindowToViewportInfo).field_0x28;
  this_00 = &this->WindowToViewportInfo;
  uVar8 = 1;
  iVar14 = 0;
  iVar9 = iVar14;
  if (iVar17 != 0) {
    puVar15 = *(uint **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ffeab0;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = iVar14 + -1 + local_res20;
    if (iVar17 < iVar9) {
      iVar9 = iVar17;
    }
  }
LAB_145ffeab0:
  uVar11 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar8,iVar12);
  TStack_e8.CurrentBitIndex = iVar9;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = iVar14;
  uStack_c8 = CONCAT44(uStack_12c,
                       *(int *)&(this->WindowToViewportInfo).field_0x8 -
                       *(int *)&(this->WindowToViewportInfo).field_0x34);
  local_f0 = this_00;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar17 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145ffebd0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145ffebd0:
  while( true ) {
    pTVar6 = local_f0;
    if (*(int *)(&local_f0->field_0x0 + 8) - *(int *)(&local_f0->field_0x0 + 0x34) != (int)uStack_c8
       ) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,FSlateViewportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_e8.CurrentBitIndex == uVar11) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == this_00))
    break;
    BeginReleaseResource
              (*(FRenderResource **)
                (*(longlong *)&pTVar6->field_0x0 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18),
               (FRenderCommandPipe *)0x0);
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  FlushPendingDeletes(this);
  FlushRenderingCommands();
  this_01 = (this->ElementBatcher).Ptr;
  iVar17 = 0;
  iVar14 = 0;
  if (this_01 != (FSlateElementBatcher *)0x0) {
    (this->ElementBatcher).Ptr = (FSlateElementBatcher *)0x0;
    FSlateElementBatcher::~FSlateElementBatcher(this_01);
    ::operator_delete(this_01,0x58);
  }
  local_120 = 0;
  FStack_118.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RenderingPolicy != (TSharedPtr<FSlateRHIRenderingPolicy,1> *)&local_120) {
    (this->RenderingPolicy).Object = (FSlateRHIRenderingPolicy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RenderingPolicy).SharedReferenceCount,&FStack_118);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_118.ReferenceController);
  local_110 = 0;
  FStack_108.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ResourceManager != (TSharedPtr<FSlateRHIResourceManager,1> *)&local_110) {
    (this->ResourceManager).Object = (FSlateRHIResourceManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ResourceManager).SharedReferenceCount,&FStack_108);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_108.ReferenceController);
  local_100 = 0;
  FStack_f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_100) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_f8.ReferenceController);
  (this->DeferredUpdateContexts).ArrayNum = 0;
  if ((this->DeferredUpdateContexts).ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRenderThreadUpdateContext>_>
              (0x40,8,0,&(this->DeferredUpdateContexts).AllocatorInstance,0,
               &(this->DeferredUpdateContexts).ArrayMax);
  }
  iVar12 = *(int *)&(this->WindowToViewportInfo).field_0x28;
  uVar8 = 1;
  iVar9 = iVar17;
  if (iVar12 != 0) {
    puVar15 = *(uint **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      iVar17 = iVar17 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ffedae;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar10;
    if (iVar12 < iVar9) {
      iVar9 = iVar12;
    }
  }
LAB_145ffedae:
  uVar11 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar8,iVar14);
  TStack_b8.CurrentBitIndex = iVar9;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar17;
  uStack_98 = CONCAT44(uStack_12c,
                       *(int *)&(this->WindowToViewportInfo).field_0x8 -
                       *(int *)&(this->WindowToViewportInfo).field_0x34);
  local_c0 = this_00;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ffeec0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145ffeec0:
  while( true ) {
    pTVar6 = local_c0;
    if (*(int *)(&local_c0->field_0x0 + 8) - *(int *)(&local_c0->field_0x0 + 0x34) != (int)uStack_98
       ) {
      `TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,FSlateViewportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b8.CurrentBitIndex == uVar11) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == this_00))
    break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&pTVar6->field_0x0 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  bVar7 = 1 < *(int *)&(this->WindowToViewportInfo).field_0x48;
  if (!bVar7) {
    TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->WindowToViewportInfo).field_0xc;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x34 = 0;
  iVar17 = *(int *)&(this->WindowToViewportInfo).field_0x2c;
  *(undefined4 *)&(this->WindowToViewportInfo).field_0x28 = 0;
  if ((iVar17 < 0) || (0x80 < iVar17)) {
    *(undefined4 *)&(this->WindowToViewportInfo).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WindowToViewportInfo).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->WindowToViewportInfo).field_0x48 = 1;
    TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->CurrentSceneIndex = -1;
  piVar1 = &(this->ActiveScenes).ArrayMax;
  (this->ActiveScenes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
              (8,8,0,&(this->ActiveScenes).AllocatorInstance,0,piVar1);
  }
  return;
}

// DestroyCachedFastPathElementData @ 145fff000

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::DestroyCachedFastPathElementData
          (FSlateRHIRenderer *this,FSlateCachedElementData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FSlateCachedElementData_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar5
  ;
  
  if (param_1 == (FSlateCachedElementData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedElementData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x65c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = &((this->ResourceManager).Object)->ResourceCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar5 = &(this->PendingDeletes).CachedElementData;
    iVar4 = (this->PendingDeletes).CachedElementData.ArrayNum;
    piVar1 = &(this->PendingDeletes).CachedElementData.ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedElementData_*>_>
                        (0x808,&pTVar5->AllocatorInstance,piVar1);
      (this->PendingDeletes).CachedElementData.ArrayNum = iVar4 + 1;
    }
    else {
      (this->PendingDeletes).CachedElementData.ArrayNum = iVar4 + 1;
    }
    (pTVar5->AllocatorInstance).Data[iVar4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x000145fff0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DestroyCachedFastPathRenderingData @ 145fff0f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::DestroyCachedFastPathRenderingData
          (FSlateRHIRenderer *this,FSlateCachedFastPathRenderingData *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (param_1 == (FSlateCachedFastPathRenderingData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedFastPathRenderingData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x655,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = &((this->ResourceManager).Object)->ResourceCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum;
    piVar1 = &(this->PendingDeletes).CachedFastPathRenderingData.ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateCachedFastPathRenderingData_*>_>
                        (0x808,(ForElementType<FSlateCachedFastPathRenderingData_*> *)
                               &this->PendingDeletes,piVar1);
      (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum = iVar4 + 1;
    }
    else {
      (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum = iVar4 + 1;
    }
    (this->PendingDeletes).CachedFastPathRenderingData.AllocatorInstance.Data[iVar4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x000145fff1c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DrawWindow_RenderThread @ 146001140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146002461) */
/* WARNING: Removing unreachable block (ram,0x000146002f5d) */
/* WARNING: Removing unreachable block (ram,0x000146002f69) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FSlateDrawWindowPassOutputs * __thiscall
FSlateRHIRenderer::DrawWindow_RenderThread
          (FSlateRHIRenderer *this,FSlateDrawWindowPassOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FSlateDrawWindowPassInputs *param_2)

{
  int *piVar1;
  int iVar2;
  FSlateViewportInfo *pFVar3;
  FRHIComputeCommandList *this_00;
  SWindow *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  IStereoRendering *pIVar7;
  longlong lVar8;
  TIntPoint<int>_u_0 TVar9;
  code *pcVar10;
  FRDGBuffer *pFVar11;
  FRDGBuffer *pFVar12;
  FRDGBuffer *pFVar13;
  FRDGBuffer *pFVar14;
  FSlateRenderBatch *pFVar15;
  byte bVar16;
  atomic<int> aVar17;
  float fVar18;
  Type TVar19;
  TConsoleVariableData<float> *pTVar20;
  TConsoleVariableData<float> *pTVar21;
  TConsoleVariableData<int> *pTVar22;
  UEngine *pUVar23;
  ForElementType<EPixelFormat> FVar24;
  FSlateRHIRenderer *pFVar25;
  FSlateRHIRenderer *pFVar26;
  FSlateWindowElementList *this_01;
  byte bVar27;
  bool bVar28;
  char cVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  atomic<int> aVar33;
  int iVar34;
  uint uVar35;
  undefined4 uVar36;
  IRendererModule *pIVar37;
  FRDGScope *pFVar38;
  FSlateDrawWindowPassOutputs *pFVar39;
  TRefCountPtr<IPooledRenderTarget> TVar40;
  FSlateElementsBuffers *pFVar41;
  TArrayView<FSlateRenderBatch_const_,int> *pTVar42;
  FSlateRHIRenderingPolicy *pFVar43;
  FRDGTexture *pFVar44;
  undefined8 *puVar45;
  FRDGTextureUAV *pFVar46;
  FShaderType *pFVar47;
  FName FVar48;
  FRDGEventName *pFVar49;
  FShaderParametersMetadata *pFVar50;
  FGlobalShaderMap *pFVar51;
  IConsoleManager *pIVar52;
  longlong *plVar53;
  TConsoleVariableData<int> *pTVar54;
  uint uVar55;
  ISlateViewport *pIVar56;
  FRHITexture *pFVar57;
  FRHITexture *pFVar58;
  int iVar59;
  uint uVar60;
  TIntPoint<int>_u_0 TVar61;
  ulonglong uVar62;
  FSlateBatchData *this_02;
  FParameters *pFVar63;
  longlong lVar64;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_03;
  FRHIGPUMask FVar65;
  bool bVar66;
  undefined1 auStackY_7f8 [32];
  ForElementType<EPixelFormat> local_7a0;
  int local_798;
  ForElementType<EPixelFormat> local_790;
  int local_788;
  FRDGTexture *local_780;
  undefined1 local_768 [8];
  FSlateRHIRenderer *local_760;
  FRDGTexture *local_758;
  uint local_750;
  FLLMScope local_74c;
  undefined8 *local_748;
  undefined8 *local_740;
  undefined8 *local_738 [2];
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  FRHITexture *local_718;
  TIntPoint<int>_u_0 local_710;
  SWindow *local_708;
  TIntPoint<int>_u_0 local_700;
  ForElementType<EPixelFormat> local_6f8;
  FRHISamplerState *pFStack_6f0;
  FRDGTexture *local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined1 uStack_6c0;
  undefined7 uStack_6bf;
  FRDGTextureUAVDesc local_6b8;
  int local_6a0;
  int iStack_69c;
  FSlateWindowElementList *local_698;
  FRDGTexture *local_690;
  int local_688;
  int iStack_684;
  int local_680;
  int iStack_67c;
  TIntVector3<int>_u_0 local_678 [2];
  FRenderTargetBinding local_658;
  TIntVector3<int>_u_0 local_640;
  TIntPoint<int>_u_0 local_634;
  int local_62c;
  TIntPoint<int>_u_0 local_628;
  int local_620;
  undefined8 local_61c;
  undefined8 local_614;
  undefined4 local_60c;
  undefined4 local_608;
  FRHIBlendState *local_600;
  FRHIDepthStencilState *local_5f8;
  undefined8 local_5f0;
  FRHITexture *local_5e8;
  undefined1 local_5e0 [16];
  FScriptContainerElement *local_5d0;
  FRDGScope *local_5c8;
  FRHIComputeCommandList *local_5c0;
  FSlateDrawWindowPassOutputs *local_5b8;
  FRHITexture *local_5b0;
  FMemScope local_5a8;
  FRDGEventName local_5a0;
  undefined1 local_588 [8];
  FRHISamplerState *local_580;
  TRDGEventScopeGuard<FRDGScope_RHI> local_578;
  char local_568;
  TRDGEventScopeGuard<FRDGScope_RHI> local_560;
  char local_550;
  TRDGEventScopeGuard<FRDGScope_RHI> local_548;
  char local_538;
  FSlateRenderBatch *local_528;
  int iStack_520;
  undefined4 uStack_51c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_518;
  ForElementType<EPixelFormat> local_508;
  FRHISamplerState *local_500;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[19],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[19],wchar_t_const_*_&&>_>_>
  local_4e8;
  FSlateDrawElementsPassInputs local_4c8;
  <lambda_4> local_408;
  Type local_3d8 [3];
  undefined1 local_3cc;
  undefined2 local_3cb;
  undefined1 local_3c9;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  ForElementType<EPixelFormat> local_398;
  FRHISamplerState *pFStack_390;
  FRDGTexture *local_388;
  longlong lStack_380;
  FRHIBlendState *local_378;
  FRHIDepthStencilState *pFStack_370;
  undefined1 local_368 [16];
  FRDGTexture *local_358;
  longlong local_350;
  FParameters *local_348;
  undefined1 local_340;
  initializer_list<FRDGResource_*> local_338;
  undefined2 local_31b;
  undefined1 local_319;
  TIntPoint<int>_u_0 local_318;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_308;
  TArrayView<FSlateRenderBatch_const_,int> local_2f8;
  TArrayView<FSlateRenderBatch_const_,int> local_2e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_> local_2d8;
  TArrayView<FRDGTexture_*_const,int> local_2c8;
  FString local_2b8;
  undefined8 local_2a0;
  FRDGTextureAccess local_290;
  undefined1 local_278 [16];
  TShaderRefBase<FCompositeCS,FShaderMapPointerTable> local_268;
  FString local_258;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  uint uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  FRDGEventName local_1e8;
  FRDGEventName local_1d0;
  FRDGEventName local_1b8;
  FSlateElementsBuffers local_1a0;
  FSlateElementsBuffers local_190;
  TArrayView<FSlateRenderBatch_const_,int> local_180;
  undefined1 local_168 [24];
  float local_150;
  int local_14c;
  undefined4 local_148;
  TIntPoint<int>_u_0 local_144;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined2 local_134;
  void *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [24];
  float local_100;
  int local_fc;
  undefined4 local_f8;
  TIntPoint<int>_u_0 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [24];
  float local_b0;
  int local_ac;
  undefined4 local_a8;
  TIntPoint<int>_u_0 local_a4;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined2 local_94;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  local_750 = 0;
  local_760 = this;
  local_5b8 = __return_storage_ptr__;
  FLLMScope::FLLMScope(&local_74c,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(&local_5a8,SceneRender,true);
  local_698 = param_2->WindowElementList;
  pFVar3 = param_2->ViewportInfo;
  FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions
            ((FRHICommandListBase *)param_1->_padding_,(FTaskHandle *)0x0);
  pIVar37 = GetRendererModule();
  (**(code **)((longlong)*pIVar37 + 0x90))(pIVar37,param_1->_padding_);
  this_00 = (FRHIComputeCommandList *)param_1->_padding_;
  local_5c0 = this_00;
  bVar27 = (**(code **)(GDynamicRHI->_padding_ + 0x290))
                     (GDynamicRHI,(pFVar3->ViewportRHI).Reference);
  FVar65.GPUMask = *(uint *)&this_00->field_0x29c;
  local_750 = FVar65.GPUMask;
  FRHIComputeCommandList::SetGPUMask(this_00,(FRHIGPUMask)(1 << (bVar27 & 0x1f)));
  local_538 = '\0';
  if ((((param_2->WindowTitle).Data.ArrayNum < 2) &&
      (cVar29 = *(char *)((longlong)&param_1->_padding_ + 6), cVar29 != '\0')) &&
     ((cVar29 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_238 = 0x54bee1d0;
      uStack_234 = 1;
      ::Desc._padding_._0_4_ = 0x54bee1d0;
      ::Desc._padding_._4_4_ = uStack_23c;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_SlateUI_Title__;
      ::Desc._padding_ = (longlong)u_SlateUI_Title__;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x2a5;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSlateRHIRenderer::DrawWindow_RenderThread'::__l8::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_308._Myfirst._Val = &::Desc;
    local_548.State = (FRDGScopeState *)param_1;
    pFVar38 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar38;
    local_548.Scope = pFVar38;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
              (&(pFVar38->Impl).Impl,(FRDGScopeState *)param_1,&local_308);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_538 = '\x01';
  }
  local_550 = '\0';
  if (((1 < (param_2->WindowTitle).Data.ArrayNum) &&
      (cVar29 = *(char *)((longlong)&param_1->_padding_ + 6), cVar29 != '\0')) &&
     ((cVar29 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    local_5d0 = (param_2->WindowTitle).Data.AllocatorInstance.Data;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x2a6;
      local_218 = 0x54bee1d0;
      uStack_214 = 1;
      ::Desc._padding_._0_4_ = 0x54bee1d0;
      ::Desc._padding_._4_4_ = uStack_21c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_SlateUI_Title__;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSlateRHIRenderer::DrawWindow_RenderThread'::__l13::Desc::
             operator()<wchar_t_const_*>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[19],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_4e8._Myfirst._Val = &::Desc;
    local_4e8._padding_ = 0x1511ca108;
    local_560.State = (FRDGScopeState *)param_1;
    local_4e8._padding_ = (longlong)&local_5d0;
    local_4e8._padding_ = (longlong)local_768;
    pFVar38 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar38;
    local_560.Scope = pFVar38;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[19],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[19],wchar_t_const_*_&&>_>_>_>
              (&(pFVar38->Impl).Impl,(FRDGScopeState *)param_1,&local_4e8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_550 = '\x01';
  }
  pFVar38 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar38;
  uVar62 = (ulonglong)(pFVar38->Impl).Impl.TypeIndex;
  local_5c8 = pFVar38;
  if ((3 < uVar62) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
    return pFVar39;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar62])(&pFVar38->Impl);
  (pFVar38->Impl).Impl._padding_ = (longlong)"Slate";
  FCsvProfiler::BeginExclusiveStat("Slate",(char *)0x0);
  (pFVar38->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_);
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId684,"Slate::DrawWindow_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
               ,0x2ac);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId684);
  }
  pSVar4 = param_2->Window;
  pIVar56 = (ISlateViewport *)0x0;
  pTVar5 = (pSVar4->Viewport).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar17 = pTVar5->SharedReferenceCount;
    do {
      if (aVar17 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_146001529;
      }
      LOCK();
      aVar33 = pTVar5->SharedReferenceCount;
      bVar66 = aVar17 == aVar33;
      if (bVar66) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar17 + 1);
        aVar33 = aVar17;
      }
      UNLOCK();
      aVar17 = aVar33;
    } while (!bVar66);
    pIVar56 = (pSVar4->Viewport).Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((pIVar56 == (ISlateViewport *)0x0) ||
     (cVar29 = (**(code **)((longlong)*pIVar56 + 0x38))(pIVar56), cVar29 == '\0')) {
LAB_146001529:
    local_718 = (FRHITexture *)0x0;
  }
  else {
    lVar64 = (**(code **)((longlong)*pIVar56 + 0x18))(pIVar56);
    pFVar58 = *(FRHITexture **)(lVar64 + 0x10);
    local_718 = pFVar58;
    if (pFVar58 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar58);
      FRHIResource::Release((FRHIResource *)pFVar58);
      local_718 = pFVar58;
    }
  }
  pFVar58 = local_718;
  (**(code **)(GDynamicRHI->_padding_ + 0x298))
            (GDynamicRHI,&local_5e8,(pFVar3->ViewportRHI).Reference);
  local_708 = (SWindow *)local_5e8;
  if (local_5e8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_5e8);
  }
  if ((((pFVar58 == (FRHITexture *)0x0) || (GEngine == (UEngine *)0x0)) ||
      ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0)) ||
     ((pIVar56 == (ISlateViewport *)0x0 ||
      (cVar29 = (**(code **)((longlong)*pIVar56 + 0x30))(pIVar56), cVar29 == '\0')))) {
    bVar66 = false;
  }
  else {
    bVar66 = true;
  }
  pFVar57 = local_5e8;
  if (bVar66) {
    pFVar57 = pFVar58;
  }
  local_5b0 = pFVar57;
  local_790 = (ForElementType<EPixelFormat>)FRDGBuilder::FindExternalTexture(param_1,pFVar57);
  if (local_790 == (ForElementType<EPixelFormat>)0x0) {
    TVar40 = CreateRenderTarget((FRHITexture *)local_5e0,(wchar_t *)pFVar57);
    local_790 = (ForElementType<EPixelFormat>)
                FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar40.Reference,None);
    if ((longlong *)local_5e0._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_5e0._0_8_ + 0x38))();
    }
  }
  TVar61 = (TIntPoint<int>_u_0)
           *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)((longlong)local_790 + 0xa4))->_s_0;
  local_710 = TVar61;
  local_700 = TVar61;
  if (pFVar3->bDisplayFormatIsHDR == false) {
LAB_1460016a8:
    bVar32 = false;
  }
  else {
    bVar30 = CompositeUIWithSceneHDR();
    bVar32 = true;
    if (!bVar30) goto LAB_1460016a8;
  }
  pTVar54 = CVarShowSlateBatching.Ref;
  if ((param_2->bClear == false) && (GSlateWireframe == false)) {
    bVar27 = 0;
  }
  else {
    bVar27 = 1;
  }
  bVar30 = IsInParallelRenderingThread();
  if ((!bVar30) &&
     (bVar30 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar30)) {
    pcVar10 = (code *)swi(3);
    pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
    return pFVar39;
  }
  pTVar22 = CVarShowSlateOverdraw.Ref;
  if (pTVar54->ShadowedValue[1] == 0) {
    bVar30 = IsInParallelRenderingThread();
    if ((!bVar30) &&
       (bVar30 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar30)) {
      pcVar10 = (code *)swi(3);
      pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
      return pFVar39;
    }
    if (pTVar22->ShadowedValue[1] == 0) {
      bVar16 = 0;
      goto LAB_146001761;
    }
  }
  bVar16 = 1;
LAB_146001761:
  bVar16 = bVar16 | bVar27;
  iVar59 = TVar61._s_0.X;
  iVar34 = TVar61._s_0.Y;
  local_7a0 = local_790;
  if (bVar32) {
    bVar30 = RHISupportsRenderTargetWriteMask((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    local_148 = 0;
    local_13c = 0x10001;
    local_138 = 0x101;
    local_168._0_8_ = 0x20010009;
    if (!bVar30) {
      local_168._0_8_ = 9;
    }
    local_136 = 0;
    local_150 = FClearValueBinding::Transparent.Value.Color[3];
    local_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_168._8_8_ = FClearValueBinding::Transparent._0_8_;
    local_168._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
    local_135 = 2;
    if (local_760->bIsStandaloneStereoOnlyDevice != false) {
      local_135 = 0x25;
    }
    local_134 = 0xff00;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 1;
    local_688 = iVar59;
    iStack_684 = iVar34;
    local_144 = TVar61;
    local_7a0 = (ForElementType<EPixelFormat>)
                FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_168,L"CompositeUIWithSceneHDRTexture",
                           None);
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    bVar16 = 1;
  }
  this_01 = local_698;
  FVar24 = local_7a0;
  FSlateWindowElementList::FinishMergeRenderBatches(local_698);
  pFVar44 = (FRDGTexture *)&this_01->BatchData;
  local_758 = pFVar44;
  FSlateWindowElementList::FinishMergeRenderBatches(this_01);
  this_02 = &this_01->BatchDataHDR;
  bVar30 = FSlateBatchData::IsVirtualTextureFeedbackRequired((FSlateBatchData *)pFVar44);
  if ((bVar30) || (bVar30 = FSlateBatchData::IsVirtualTextureFeedbackRequired(this_02), bVar30)) {
    bVar30 = true;
    VirtualTexture::BeginFeedback(param_1,0,GMaxRHIFeatureLevel);
  }
  else {
    bVar30 = false;
  }
  pFVar41 = BuildSlateElementsBuffers(&local_1a0,param_1,(FSlateBatchData *)pFVar44);
  pFVar11 = pFVar41->VertexBuffer;
  pFVar12 = pFVar41->IndexBuffer;
  pFVar41 = BuildSlateElementsBuffers(&local_190,param_1,this_02);
  local_780 = (FRDGTexture *)0x0;
  pFVar13 = pFVar41->VertexBuffer;
  pFVar14 = pFVar41->IndexBuffer;
  bVar31 = FSlateBatchData::IsStencilClippingRequired((FSlateBatchData *)pFVar44);
  if ((bVar31) || (bVar31 = FSlateBatchData::IsStencilClippingRequired(this_02), bVar31)) {
    local_cc = 1;
    local_100 = FClearValueBinding::DepthZero.Value.Color[3];
    local_118._0_8_ = 0x200004;
    local_fc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_f8 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_118._8_8_ = FClearValueBinding::DepthZero._0_8_;
    local_118._16_8_ = FClearValueBinding::DepthZero.Value._4_8_;
    local_ec = 0x10001;
    local_e8 = 0xb000101;
    local_e4 = 0xff00;
    local_680 = iVar59;
    iStack_67c = iVar34;
    local_f4 = TVar61;
    local_780 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_118,L"SlateDepthStencil",None);
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  local_4c8.ElementsOffset.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_4c8.SceneViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(param_2->SceneViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_4c8.ElementsMatrix.M[0][2] = (float)(pFVar3->ProjectionMatrix).M[0][2];
  local_4c8.ElementsMatrix.M[0][3] = (float)(pFVar3->ProjectionMatrix).M[0][3];
  local_4c8.SceneViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(param_2->SceneViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_4c8.CursorPosition.field0_0x0 = (param_2->CursorPosition).field0_0x0;
  local_4c8.HDRDisplayColorGamut = pFVar3->HDRDisplayColorGamut;
  local_4c8.ElementsMatrix.M[0][0] = (float)(pFVar3->ProjectionMatrix).M[0][0];
  local_4c8.ElementsMatrix.M[0][1] = (float)(pFVar3->ProjectionMatrix).M[0][1];
  local_4c8.UsedSlatePostBuffers = param_2->UsedSlatePostBuffers;
  local_4c8.bWireframe = GSlateWireframe;
  local_4c8.bElementsTextureIsHDRDisplay = pFVar3->bDisplayFormatIsHDR;
  local_4c8.ElementsMatrix.M[1][0] = (float)(pFVar3->ProjectionMatrix).M[1][0];
  local_4c8.ElementsMatrix.M[1][1] = (float)(pFVar3->ProjectionMatrix).M[1][1];
  local_4c8.SceneViewportTexture = (FRDGTexture *)local_790;
  local_4c8.bAllowGammaCorrection = true;
  local_4c8.bAllowColorDeficiencyCorrection = true;
  local_4c8.ElementsMatrix.M[1][2] = (float)(pFVar3->ProjectionMatrix).M[1][2];
  local_4c8.ElementsMatrix.M[1][3] = (float)(pFVar3->ProjectionMatrix).M[1][3];
  local_4c8.ElementsMatrix.M[2][2] = (float)(pFVar3->ProjectionMatrix).M[2][2];
  local_4c8.ElementsMatrix.M[2][3] = (float)(pFVar3->ProjectionMatrix).M[2][3];
  local_4c8.ElementsMatrix.M[2][0] = (float)(pFVar3->ProjectionMatrix).M[2][0];
  local_4c8.ElementsMatrix.M[2][1] = (float)(pFVar3->ProjectionMatrix).M[2][1];
  local_4c8.ElementsMatrix.M[3][2] = (float)(pFVar3->ProjectionMatrix).M[3][2];
  local_4c8.ElementsMatrix.M[3][3] = (float)(pFVar3->ProjectionMatrix).M[3][3];
  local_4c8.Time.DeltaRealTimeSeconds = (param_2->Time).DeltaRealTimeSeconds;
  local_4c8.Time.DeltaWorldTimeSeconds = (param_2->Time).DeltaWorldTimeSeconds;
  local_4c8.ElementsMatrix.M[3][0] = (float)(pFVar3->ProjectionMatrix).M[3][0];
  local_4c8.ElementsMatrix.M[3][1] = (float)(pFVar3->ProjectionMatrix).M[3][1];
  local_4c8.Time.RealTimeSeconds = (param_2->Time).RealTimeSeconds;
  local_4c8.Time.WorldTimeSeconds = (param_2->Time).WorldTimeSeconds;
  local_4c8.ViewportScaleUI = param_2->ViewportScaleUI;
  if (bVar32) {
    local_4c8.bAllowGammaCorrection = true;
    local_4c8.bAllowColorDeficiencyCorrection = false;
    if ((this_01->BatchDataHDR).RenderBatches.ArrayNum != 0) {
      local_4c8.ElementsTexture = (FRDGTexture *)local_790;
      local_4c8.ElementsLoadAction = EClear;
      local_4c8.ElementsBuffers.VertexBuffer = pFVar13;
      local_4c8.ElementsBuffers.IndexBuffer = pFVar14;
      bVar31 = FSlateBatchData::IsStencilClippingRequired(this_02);
      iVar2 = (this_01->BatchDataHDR).FirstRenderBatchIndex;
      local_4c8.StencilTexture = (FRDGTexture *)0x0;
      if (bVar31) {
        local_4c8.StencilTexture = local_780;
      }
      pTVar42 = TArrayView<FSlateRenderBatch_const_,int>::
                TArrayView<FSlateRenderBatch_const_,int><TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_const_&,TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_>_>
                          (&local_180,&this_02->RenderBatches);
      pFVar15 = pTVar42->DataPtr;
      uVar6._0_4_ = pTVar42->ArrayNum;
      uVar6._4_4_ = *(undefined4 *)&pTVar42->field_0xc;
      pFVar43 = TSharedPtr<FSlateRHIRenderingPolicy,1>::operator*<FSlateRHIRenderingPolicy>
                          (&local_760->RenderingPolicy);
      local_2f8.DataPtr = pFVar15;
      local_2f8._8_8_ = uVar6;
      AddSlateDrawElementsPass(param_1,pFVar43,&local_4c8,&local_2f8,iVar2);
      pFVar44 = local_758;
    }
    local_4c8.bElementsTextureIsHDRDisplay = false;
  }
  local_4c8.ElementsTexture = (FRDGTexture *)local_7a0;
  local_4c8.ElementsLoadAction = bVar16 + ELoad;
  local_4c8.ElementsBuffers.VertexBuffer = pFVar11;
  local_4c8.ElementsBuffers.IndexBuffer = pFVar12;
  bVar31 = FSlateBatchData::IsStencilClippingRequired((FSlateBatchData *)pFVar44);
  lVar64 = pFVar44->_padding_;
  local_528 = (FSlateRenderBatch *)
              (((TArray<FSlateRenderBatch,TSizedDefaultAllocator<32>_> *)&pFVar44->_padding_)->
              AllocatorInstance).Data;
  iStack_520 = (int)pFVar44->_padding_;
  local_4c8.StencilTexture = (FRDGTexture *)0x0;
  if (bVar31) {
    local_4c8.StencilTexture = local_780;
  }
  if ((iStack_520 < 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar31)) {
    pcVar10 = (code *)swi(3);
    pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
    return pFVar39;
  }
  pFVar25 = local_760;
  if (((local_760->RenderingPolicy).Object == (FSlateRHIRenderingPolicy *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar31)) {
    pcVar10 = (code *)swi(3);
    pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
    return pFVar39;
  }
  local_2e8._12_4_ = uStack_51c;
  local_2e8.ArrayNum = iStack_520;
  local_2e8.DataPtr = local_528;
  AddSlateDrawElementsPass
            (param_1,(pFVar25->RenderingPolicy).Object,&local_4c8,&local_2e8,(int)lVar64);
  if (bVar32) {
    cVar29 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_568 = '\0';
    if ((cVar29 != '\0') && ((cVar29 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x315;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_ = (longlong)u_CompositeUI;
        local_1f8 = 0;
        uStack_1f4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_1fc);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_CompositeUI;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FSlateRHIRenderer::DrawWindow_RenderThread'::__l36::<lambda_3>::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_2d8._Myfirst._Val = &::Desc;
      local_578.State = (FRDGScopeState *)param_1;
      pFVar38 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar38;
      local_578.Scope = pFVar38;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12>_const_*,std::tuple<>_>_>
                (&(pFVar38->Impl).Impl,(FRDGScopeState *)param_1,&local_2d8);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_568 = '\x01';
    }
    local_690 = (FRDGTexture *)0x0;
    pFVar44 = (FRDGTexture *)
              GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    local_758 = pFVar44;
    bVar32 = RHISupportsRenderTargetWriteMask((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (bVar32) {
      local_728 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&local_5a0;
      local_5a0.EventFormat = (wchar_t *)local_7a0;
      uStack_720 = 1;
      local_2c8._12_4_ = uStack_71c;
      local_2c8.ArrayNum = 1;
      local_2c8.DataPtr = (FRDGTexture **)local_728;
      FRenderTargetWriteMask::Decode
                (param_1,(FGlobalShaderMap *)pFVar44,&local_2c8,&local_690,None,
                 L"ElementsWriteMaskTexture");
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar52 = IConsoleManager::Get();
      plVar53 = (longlong *)
                (**(code **)((longlong)*pIVar52 + 0xc0))(pIVar52,L"r.HDR.Display.OutputDevice",1);
      pTVar54 = (TConsoleVariableData<int> *)0x0;
      if (plVar53 != (longlong *)0x0) {
        pTVar54 = (TConsoleVariableData<int> *)(**(code **)(*plVar53 + 0x68))(plVar53);
      }
      CVarOutputDevice = pTVar54;
      _Init_thread_footer(&::_TSS0);
    }
    pTVar20 = CVarUILevel.Ref;
    if ((pFVar3->HDRDisplayOutputFormat == HDR_ACES_1000nit_ScRGB) ||
       (pFVar3->HDRDisplayOutputFormat == HDR_ACES_2000nit_ScRGB)) {
      local_7a0._0_4_ = 1;
      local_798 = 1;
    }
    else {
      local_7a0._0_4_ = 0;
      local_798 = 0;
    }
    if ((GSlateColorDeficiencyType == NormalVision) || (GSlateColorDeficiencySeverity < 1)) {
      local_788 = 0;
      local_780._0_4_ = 0;
    }
    else {
      local_788 = 2;
      local_780._0_4_ = 2;
    }
    local_6e8 = local_690;
    local_6f8 = FVar24;
    pFStack_6f0 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                  ::StaticResource.StateRHI.Reference;
    bVar32 = IsInParallelRenderingThread();
    if ((!bVar32) &&
       (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
      pcVar10 = (code *)swi(3);
      pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
      return pFVar39;
    }
    pTVar21 = CVarHDRUILuminance.Ref;
    uStack_6e0 = CONCAT44(uStack_6e0._4_4_,pTVar20->ShadowedValue[1]);
    bVar32 = IsInParallelRenderingThread();
    if ((!bVar32) &&
       (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
      pcVar10 = (code *)swi(3);
      pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
      return pFVar39;
    }
    pTVar54 = CVarHDRUICompositeEOTF.Ref;
    uStack_6e0 = CONCAT44(pTVar21->ShadowedValue[1],(undefined4)uStack_6e0);
    bVar32 = IsInParallelRenderingThread();
    if ((!bVar32) &&
       (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
      pcVar10 = (code *)swi(3);
      pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
      return pFVar39;
    }
    fVar18 = __real_3f800000;
    local_6c8 = 0x3f800000;
    local_6d8 = (FRHIBlendState *)
                CONCAT44((float)GSlateColorDeficiencyType,pTVar54->ShadowedValue[1]);
    if (GSlateShowColorDeficiencyCorrectionWithDeficiency == false) {
      local_6c8 = 0;
    }
    uStack_6d0 = (FRHIDepthStencilState *)CONCAT44(0x3f800000,(float)GSlateColorDeficiencySeverity);
    if (GSlateColorDeficiencyCorrection == false) {
      uStack_6d0 = (FRHIDepthStencilState *)(ulonglong)(uint)(float)GSlateColorDeficiencySeverity;
    }
    bVar32 = FCompositeCS::IsShaderSupported(GMaxRHIShaderPlatform);
    if (bVar32) {
      puVar45 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x70,0x10);
      if (puVar45 == (undefined8 *)0x0) {
        puVar45 = (undefined8 *)0x0;
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
          return pFVar39;
        }
      }
      else {
        *(undefined4 *)((longlong)puVar45 + 0x6c) = 0x3f800000;
        *puVar45 = &___7__TObject_VFParameters_FCompositeCS___FRDGAllocator__6B_;
        puVar45[2] = 0;
        puVar45[3] = 0;
        puVar45[4] = 0;
        puVar45[10] = 0;
        puVar45[0xc] = 0;
        *(undefined4 *)(puVar45 + 0xd) = 0;
      }
      local_748 = puVar45;
      if ((((undefined8 **)param_1->_padding_ <= &local_748) &&
          (&local_748 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar32)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      iVar34 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar34 == *piVar1) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar34 + 1;
      local_6b8._padding_._1_1_ = 0;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar34 * 8) = local_748;
      (((FParameters *)(puVar45 + 2))->Common).UITexture = (FRDGTexture *)local_6f8;
      puVar45[3] = pFStack_6f0;
      puVar45[4] = local_6e8;
      puVar45[5] = uStack_6e0;
      local_6b8.Texture = (FRDGTexture *)local_790;
      puVar45[6] = local_6d8;
      puVar45[7] = uStack_6d0;
      puVar45[8] = CONCAT44(uStack_6c4,local_6c8);
      puVar45[9] = CONCAT71(uStack_6bf,uStack_6c0);
      local_6b8._padding_._0_1_ = *(undefined1 *)((longlong)local_790 + 0xb4);
      local_6b8._padding_._2_4_ = 0;
      local_6b8._padding_._6_1_ = 0;
      local_6b8._padding_._0_1_ = 0;
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_6b8);
      pFVar44 = local_6b8.Texture;
      pFVar46 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
      pFVar46 = FRDGTextureUAV::FRDGTextureUAV
                          (pFVar46,*(wchar_t **)((longlong)pFVar44 + 8),&local_6b8,None);
      TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                (&param_1->Views,(FRDGView *)pFVar46);
      FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar46);
      puVar45[10] = pFVar46;
      *(float *)(puVar45 + 0xc) = (float)iVar59;
      *(float *)((longlong)puVar45 + 100) = (float)(int)local_710._4_4_;
      *(float *)(puVar45 + 0xd) = fVar18 / (float)iVar59;
      *(float *)((longlong)puVar45 + 0x6c) = fVar18 / (float)(int)local_710._4_4_;
      pFVar47 = (FShaderType *)FCompositeCS::GetStaticType();
      FGlobalShaderMap::GetShader
                ((FGlobalShaderMap *)local_758,&local_518,pFVar47,local_798 + local_788);
      if (local_518.ShaderContent == (FShader *)0x0) {
        FVar48 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_278);
        ::FName::ToString((FName *)FVar48,&local_2b8);
        FCompositeCS::GetStaticType();
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
          return pFVar39;
        }
      }
      FCompositeCS::GetStaticType();
      local_268.ShaderContent = (FCompositeCS *)local_518.ShaderContent;
      local_268.ShaderMap = local_518.ShaderMap;
      pFVar49 = FRDGEventName::FRDGEventName(&local_1e8,1,L"CompositeUI");
      pFVar50 = FCompositeCS::FParameters::FTypeInfo::GetStructMetadata();
      local_678[0]._0_4_ = (int)(iVar59 + 0xf + (iVar59 + 0xf >> 0x1f & 0xfU)) >> 4;
      local_678[0]._4_4_ =
           (int)(local_710._4_4_ + 0xf + (local_710._4_4_ + 0xf >> 0x1f & 0xfU)) >> 4;
      local_678[0]._s_0.Z = 1;
      FComputeShaderUtils::AddPass<FCompositeCS>
                (param_1,pFVar49,Compute,&local_268,pFVar50,(FParameters *)(puVar45 + 2),
                 (TIntVector3<int> *)&local_678[0]._s_0);
    }
    else {
      local_7c = 1;
      local_b0 = FClearValueBinding::Transparent.Value.Color[3];
      local_ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_95 = *(undefined1 *)((longlong)local_790 + 0xb3);
      local_c8._0_8_ = 0x200009;
      local_c8._8_8_ = FClearValueBinding::Transparent._0_8_;
      local_c8._16_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_a8 = 0;
      local_9c = 0x10001;
      local_98 = 0x101;
      local_96 = 0;
      local_94 = 0xff00;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_6a0 = iVar59;
      iStack_69c = iVar34;
      local_a4 = TVar61;
      pFVar44 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_c8,L"SlateViewportCopyTexture",None);
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      local_62c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_620 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_61c = 0;
      local_614 = 1;
      local_60c = 0;
      local_608 = 1;
      local_634._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
      local_634._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
      local_628._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
      local_628._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
      local_640._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
      local_640._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
      AddCopyTexturePass(param_1,(FRDGTexture *)local_790,pFVar44,
                         (FRHICopyTextureInfo *)&local_640._s_0);
      local_5f0 = *(undefined8 *)((longlong)local_790 + 0xa4);
      local_2a0 = 0;
      if ((((int)local_5f0 == 0) && ((int)((ulonglong)local_5f0 >> 0x20) == 0)) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("InTexture.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                              ,0xab,L""), bVar32)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      uVar6 = *(undefined8 *)((longlong)local_790 + 0xa4);
      puVar45 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x160,0x10);
      if (puVar45 == (undefined8 *)0x0) {
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
          return pFVar39;
        }
      }
      else {
        *puVar45 = &___7__TObject_VFParameters_FCompositePS___FRDGAllocator__6B_;
        puVar45[2] = 0;
        puVar45[3] = 0;
        puVar45[4] = 0;
        puVar45[10] = 0;
        puVar45[0xb] = 0;
        FRenderTargetBindingSlots::FRenderTargetBindingSlots
                  ((FRenderTargetBindingSlots *)(puVar45 + 0xc));
      }
      local_740 = puVar45;
      if ((((undefined8 **)param_1->_padding_ <= &local_740) &&
          (&local_740 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar32)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      iVar34 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar34 == *piVar1) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      pFVar63 = (FParameters *)(puVar45 + 2);
      *(int *)&param_1->_padding_ = iVar34 + 1;
      local_658.LoadAction = ENoAction;
      local_658.MipIndex = '\0';
      local_658.ArraySlice = -1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar34 * 8) = local_740;
      (pFVar63->Common).UITexture = (FRDGTexture *)local_6f8;
      puVar45[3] = pFStack_6f0;
      local_658.Texture = (FRDGTexture *)local_790;
      puVar45[4] = local_6e8;
      puVar45[5] = uStack_6e0;
      local_658.ResolveTexture = (FRDGTexture *)0x0;
      puVar45[6] = local_6d8;
      puVar45[7] = uStack_6d0;
      puVar45[8] = CONCAT44(uStack_6c4,local_6c8);
      puVar45[9] = CONCAT71(uStack_6bf,uStack_6c0);
      bVar32 = FRenderTargetBinding::Validate(&local_658);
      if ((!bVar32) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x216,L""), bVar32)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      *(FRDGTexture **)(puVar45 + 0xc) = local_658.Texture;
      puVar45[0xd] = local_658.ResolveTexture;
      puVar45[0xe] = CONCAT44(local_658._20_4_,local_658._16_4_);
      puVar45[10] = pFVar44;
      puVar45[0xb] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI.Reference;
      pFVar47 = (FShaderType *)FCompositePS::GetStaticType();
      FGlobalShaderMap::GetShader
                ((FGlobalShaderMap *)local_758,
                 (TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_5a0.FormattedEventName,
                 pFVar47,local_7a0._0_4_ + (int)local_780);
      if ((FSlateBatchData *)local_5a0.FormattedEventName.Data.AllocatorInstance.Data ==
          (FSlateBatchData *)0x0) {
        FVar48 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_588);
        ::FName::ToString((FName *)FVar48,&local_258);
        FCompositePS::GetStaticType();
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (bVar32) {
          pcVar10 = (code *)swi(3);
          pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
          return pFVar39;
        }
      }
      FCompositePS::GetStaticType();
      TVar19 = GMaxRHIFeatureLevel;
      local_758 = (FRDGTexture *)local_5a0.FormattedEventName.Data.AllocatorInstance.Data;
      bVar32 = IsHMDHiddenAreaMaskActive();
      local_728 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  FRDGEventName::FRDGEventName(&local_1d0,1,L"CompositeUI");
      pFVar51 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar19]);
      TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
                ((TShaderMapRef<FScreenPassVS> *)&local_508,pFVar51);
      local_600 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                  ::StaticResource.StateRHI.Reference;
      local_5f8 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                  ::StaticResource.StateRHI.Reference;
      local_580 = local_500;
      if ((local_508 == (ForElementType<EPixelFormat>)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("VertexShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x206,L""), bVar31)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      if (((FSlateBatchData *)local_5a0.FormattedEventName.Data.AllocatorInstance.Data ==
           (FSlateBatchData *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x207,L""), bVar31)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      if ((pFVar63 == (FParameters *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("PixelShaderParameters",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.h"
                              ,0x208,L""), bVar31)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      pFVar50 = FCompositePS::FParameters::FTypeInfo::GetStructMetadata();
      local_4f8.ShaderContent = (FShader *)local_758;
      local_4f8.ShaderMap = (FShaderMapBase *)local_5a0.FormattedEventName.Data._8_8_;
      ValidateShaderParameters(&local_4f8,pFVar50,pFVar63);
      pFVar44 = local_758;
      local_338._First = (FRDGResource **)0x0;
      local_338._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl
                ((FShaderParameterBindings *)local_758,pFVar50,pFVar63,&local_338);
      local_6f8 = local_508;
      pFStack_6f0 = local_580;
      local_6d8 = local_600;
      uStack_6d0 = local_5f8;
      local_6c8 = GFilterVertexDeclaration._32_4_;
      uStack_6c4 = GFilterVertexDeclaration._36_4_;
      local_3d8[0] = TVar19;
      local_3d8[2] = 1;
      local_3cb = local_31b;
      uStack_6e0._0_4_ = local_5a0.FormattedEventName.Data.ArrayNum;
      uStack_6e0._4_4_ = local_5a0.FormattedEventName.Data.ArrayMax;
      local_3c9 = local_319;
      local_398 = local_508;
      pFStack_390 = local_580;
      local_6e8 = pFVar44;
      local_388 = pFVar44;
      lStack_380._0_4_ = local_5a0.FormattedEventName.Data.ArrayNum;
      lStack_380._4_4_ = local_5a0.FormattedEventName.Data.ArrayMax;
      uStack_6c0 = 0;
      local_368[8] = 0;
      local_368._0_8_ = GFilterVertexDeclaration._32_8_;
      local_368._9_7_ = uStack_6bf;
      local_3c0 = local_2a0;
      local_3a8 = local_2a0;
      local_3d8[1] = 0xffffffff;
      local_3b8 = local_5f0;
      local_3a0 = local_5f0;
      local_378 = local_600;
      pFStack_370 = local_5f8;
      local_358 = pFVar44;
      local_350._0_4_ = local_5a0.FormattedEventName.Data.ArrayNum;
      local_350._4_4_ = local_5a0.FormattedEventName.Data.ArrayMax;
      local_340 = 0;
      local_3cc = bVar32;
      local_3c8 = uVar6;
      local_3b0 = uVar6;
      local_348 = pFVar63;
      pFVar50 = FCompositePS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGBuilder::
      AddPassInternal<FCompositePS::FParameters,_AddDrawScreenPass<FCompositePS>_::__l2::<lambda_1>_>
                (param_1,(FRDGEventName *)local_728,pFVar50,pFVar63,Raster,(<lambda_1> *)local_3d8);
      local_1e8.FormattedEventName.Data.AllocatorInstance.Data =
           local_1d0.FormattedEventName.Data.AllocatorInstance.Data;
    }
    if (local_1e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1e8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_568 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_578);
    }
  }
  pSVar4 = local_708;
  if (bVar66) {
    pFVar44 = FRDGBuilder::FindExternalTexture(param_1,(FRHITexture *)local_708);
    if (pFVar44 == (FRDGTexture *)0x0) {
      TVar40 = CreateRenderTarget((FRHITexture *)(local_5e0 + 8),(wchar_t *)pSVar4);
      pFVar44 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar40.Reference,None);
      if ((longlong *)local_5e0._8_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_5e0._8_8_ + 0x38))();
      }
    }
    FRDGUserValidation::ValidateSetAccessFinal
              (&param_1->UserValidation,(FRDGViewableResource *)pFVar44,Present);
    *(undefined4 *)&pFVar44->_padding_ = 2;
    pUVar23 = GEngine;
    if (((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0) &&
       (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar66)) {
      pcVar10 = (code *)swi(3);
      pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
      return pFVar39;
    }
    pIVar7 = (pUVar23->StereoRenderingDevice).Object;
    (**(code **)((longlong)*pIVar7 + 0x70))(pIVar7,param_1,pFVar44,local_790);
  }
  else {
    FRDGUserValidation::ValidateSetAccessFinal
              (&param_1->UserValidation,(FRDGViewableResource *)local_790,Present);
    *(undefined4 *)((longlong)local_790 + 0x58) = 2;
  }
  if (bVar30) {
    VirtualTexture::EndFeedback(param_1);
  }
  pFVar25 = local_760;
  this_03 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&local_760->_padding_;
  local_708 = param_2->Window;
  local_728 = this_03;
  if ((this_03 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar66)) {
    pcVar10 = (code *)swi(3);
    pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
    return pFVar39;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_03);
  pSVar4 = local_708;
  pFVar26 = local_760;
  piVar1 = (int *)((longlong)&pFVar25->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar66 = false;
  uVar55 = (int)pFVar25->_padding_ - 1;
  if (-1 < (int)uVar55) {
    lVar64 = (longlong)(int)uVar55 << 4;
    bVar66 = false;
    do {
      uVar35 = 0;
      if ((int)uVar55 < (int)pFVar26->_padding_) {
        uVar35 = ~uVar55 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      lVar8 = pFVar26->_padding_;
      if (((*(int *)(lVar64 + 8 + lVar8) == 0) ||
          (plVar53 = *(longlong **)(lVar64 + lVar8), plVar53 == (longlong *)0x0)) ||
         (cVar29 = (**(code **)(*plVar53 + 0x68))(plVar53,param_1,pSVar4,local_790), cVar29 == '\0')
         ) {
        bVar66 = true;
      }
      lVar64 = lVar64 + -0x10;
      uVar55 = uVar55 - 1;
      pFVar58 = local_718;
      TVar61 = local_700;
      this_03 = local_728;
      FVar65.GPUMask = local_750;
    } while (-1 < (int)uVar55);
  }
  this_03->InvocationListLockCount = this_03->InvocationListLockCount + -1;
  if (bVar66) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_03,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_03);
  if ((local_760->ScreenshotState).ViewportToCapture == pFVar3) {
    TVar9 = (TIntPoint<int>_u_0)
            *(TIntPoint<int>_u_0 *)&(local_760->ScreenshotState).ViewRect.field0_0x0;
    uVar55 = *(uint *)((longlong)&(local_760->ScreenshotState).ViewRect.field0_0x0 + 8);
    uVar35 = *(uint *)((longlong)&(local_760->ScreenshotState).ViewRect.field0_0x0 + 0xc);
    uVar60 = TVar61._s_0.X;
    if ((int)uVar55 < TVar61._s_0.X) {
      uVar60 = uVar55;
    }
    uVar36 = local_710._4_4_;
    if ((int)uVar35 < (int)local_710._4_4_) {
      uVar36 = uVar35;
    }
    uVar62 = (ulonglong)uVar60;
    if ((int)uVar60 < TVar9._s_0.X) {
      uVar62 = (ulonglong)TVar9 & 0xffffffff;
    }
    if ((int)uVar36 < TVar9._s_0.Y) {
      uVar36 = TVar9._s_0.Y;
    }
    local_700 = (TIntPoint<int>_u_0)((ulonglong)(uint)uVar36 << 0x20 | uVar62);
    local_318 = TVar9;
    if ((((uint)uVar62 != uVar55) || (uVar36 != uVar35)) && (2 < (byte)LogSlate._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if (((uint)uVar62 != TVar9._s_0.X) || (uVar36 != local_318._4_4_)) {
      local_408.OutputTexture = (FRDGTexture *)local_790;
      local_408.ColorDataHDR = (local_760->ScreenshotState).ColorDataHDR;
      local_408.ColorData = (local_760->ScreenshotState).ColorData;
      local_408.__this = local_760;
      local_408.ViewRectClamped.field0_0x0._0_8_ = TVar9;
      local_408.ViewRectClamped.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)local_700;
      pFVar49 = FRDGEventName::FRDGEventName(&local_1b8,1,L"ScreenshotReadback");
      puVar45 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (puVar45 == (undefined8 *)0x0) {
        bVar66 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar66) {
          pcVar10 = (code *)swi(3);
          pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
          return pFVar39;
        }
      }
      else {
        *puVar45 = &___7__TObject_VFReadbackTextureParameters___FRDGAllocator__6B_;
        puVar45[2] = 0;
        *(undefined4 *)(puVar45 + 3) = 0;
        *(undefined8 *)((longlong)puVar45 + 0x1c) = 0;
      }
      local_738[0] = puVar45;
      if ((((undefined8 **)param_1->_padding_ <= local_738) &&
          (local_738 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar66)) {
        pcVar10 = (code *)swi(3);
        pFVar39 = (FSlateDrawWindowPassOutputs *)(*pcVar10)();
        return pFVar39;
      }
      iVar34 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar34 == *piVar1) {
        iVar34 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar34 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar34 * 8) = local_738[0];
      FRDGTextureAccess::FRDGTextureAccess(&local_290,(FRDGTexture *)local_790,CopySrc);
      puVar45[2] = local_290.Texture;
      *(FRDGTextureSubresourceRange *)(puVar45 + 3) = local_290.SubresourceRange;
      puVar45[4] = local_290._16_8_;
      FRDGBuilder::
      AddPass<FReadbackTextureParameters,_FSlateRHIRenderer::DrawWindow_RenderThread_::__l79::<lambda_4>_>
                (param_1,pFVar49,(FReadbackTextureParameters *)(puVar45 + 2),Readback,&local_408);
      if (local_1b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1b8.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar38 = local_5c8;
  if (local_5c8 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_5c8,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(pFVar38,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar38,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  if (local_550 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_560);
  }
  if (local_538 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_548);
  }
  FRHIComputeCommandList::SetGPUMask(local_5c0,FVar65);
  pFVar39 = local_5b8;
  local_5b8->ViewportRHI = (FRHIViewport *)0x0;
  local_5b8->ViewportTextureRHI = (FRHITexture *)0x0;
  local_5b8->OutputTextureRHI = (FRHITexture *)0x0;
  local_5b8->ViewportRHI = (pFVar3->ViewportRHI).Reference;
  local_5b8->ViewportTextureRHI = pFVar58;
  local_5b8->OutputTextureRHI = local_5b0;
  FMemScope::~FMemScope(&local_5a8);
  FLLMScope::~FLLMScope(&local_74c);
  return pFVar39;
}

// DrawWindows @ 1460032d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146004582) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::DrawWindows(FSlateRHIRenderer *this,FSlateDrawBuffer *param_1)

{
  int *piVar1;
  ForElementType<FSlateDrawWindowPassInputs> *pFVar2;
  TArray<FRenderThreadUpdateContext,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar3;
  FSlateRHIResourceManager *pFVar4;
  FSlateWindowElementList *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *_Src;
  FSlateDrawWindowPassInputs *pFVar7;
  FSlateViewportInfo *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TVector2<float>_u_0 TVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  EPixelFormat EVar19;
  char cVar20;
  int iVar21;
  atomic<int> aVar22;
  uint uVar23;
  UClass *pUVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  SWindow *pSVar27;
  FDeprecateSlateVector2D *pFVar28;
  FDeprecateSlateVector2D FVar29;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar30;
  FGeometry *pFVar31;
  FDeprecateSlateVector2D FVar32;
  TIntPoint<int>_u_0 *pTVar33;
  FSlateElementBatcher *pFVar34;
  FSlatePostSettings *pFVar35;
  size_t sVar36;
  UTextureRenderTarget2D *pUVar37;
  FUObjectItem *this_00;
  FTextureResource *pFVar38;
  ForElementType<FSlateDrawWindowPassInputs> *pFVar39;
  FString *pFVar40;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar41;
  IConsoleManager *pIVar42;
  longlong *plVar43;
  undefined ***pppuVar44;
  uint uVar45;
  TIntPoint<int>_u_0 TVar46;
  TIntPoint<int>_u_0 TVar47;
  SWindow *pSVar48;
  FWindowToRender *pFVar49;
  uint uVar50;
  longlong lVar51;
  UObject *pUVar52;
  TIntPoint<int>_u_0 TVar53;
  FSlateWindowElementList **ppFVar54;
  TIntPoint<int>_u_0 TVar55;
  ESlatePostRT EVar56;
  ulong64 uVar57;
  ESlatePostRT EVar58;
  TIntPoint<int>_u_0 TVar59;
  FSlateRHIRenderer *pFVar60;
  bool bVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auStackY_438 [32];
  EPixelFormat EStack_3f8;
  ESlatePostRT EStack_3f7;
  uint uStack_3f4;
  ESlatePostRT EStack_3f0;
  undefined1 uStack_3ed;
  undefined1 uStack_3ec;
  undefined1 auStack_3eb [2];
  undefined1 uStack_3e9;
  FSlateRHIRenderer *pFStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ForElementType<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_2_::FWindowToRender>
  FStack_3d0;
  undefined8 uStack_3c8;
  TIntPoint<int>_u_0 TStack_3c0;
  uint uStack_3b8;
  SWindow *pSStack_3b0;
  TIntPoint<int>_u_0 TStack_3a8;
  FSlateWindowElementList *pFStack_3a0;
  FSlateElementBatcher *pFStack_398;
  SWindow *pSStack_390;
  TIntPoint<int>_u_0 TStack_388;
  UObject *pUStack_380;
  uint uStack_378;
  TIntPoint<int>_u_0 TStack_370;
  SWindow *pSStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  FSlateRHIRenderer *pFStack_350;
  FSlateWindowElementList *pFStack_348;
  SWindow *pSStack_340;
  FSlateViewportInfo *pFStack_338;
  TIntPoint<int>_u_0 TStack_330;
  TIntPoint<int>_u_0 TStack_328;
  TIntPoint<int>_u_0 TStack_320;
  float fStack_318;
  ESlatePostRT EStack_314;
  ForAnyElementType FStack_310;
  undefined8 uStack_308;
  double dStack_300;
  double dStack_2f8;
  undefined8 uStack_2f0;
  bool bStack_2e8;
  bool bStack_2e7;
  TIntPoint<int>_u_0 TStack_2e0;
  TIntPoint<int>_u_0 TStack_2d8;
  FText FStack_2d0;
  LARGE_INTEGER LStack_2c0;
  undefined1 auStack_2b8 [16];
  FScriptContainerElement *pFStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSharedRef<FSlateFontCache,1> TStack_298;
  FDeprecateSlateVector2D *pFStack_288;
  double dStack_280;
  double dStack_278;
  float fStack_270;
  float fStack_26c;
  FText FStack_268;
  UTextureRenderTarget2D *pUStack_258;
  int iStack_250;
  undefined4 uStack_24c;
  FDestructionSentinel FStack_248;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  longlong *plStack_208;
  TObjectPtr<UTextureRenderTarget2D>_u_0 TStack_1f8;
  undefined8 uStack_1f0;
  TStringView<wchar_t> TStack_1e8;
  FReadAccessScope FStack_1d0;
  FReadAccessScope aFStack_1b8 [3];
  int iStack_160;
  int iStack_15c;
  code *apcStack_148 [2];
  undefined **ppuStack_138;
  FSlateRHIRenderer *pFStack_130;
  ForElementType<FSlateDrawWindowPassInputs> *pFStack_128;
  undefined ***pppuStack_120;
  undefined1 auStack_118 [16];
  undefined **ppuStack_108;
  FSlateRHIRenderer *pFStack_100;
  ForElementType<FSlateDrawWindowPassInputs> *pFStack_f8;
  undefined ***pppuStack_f0;
  byte bStack_e8;
  ulonglong uStack_d8;
  
  uStack_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pFStack_3e8 = this;
  TStack_3c0 = (TIntPoint<int>_u_0)param_1;
  if (!__CsvProfilerStat1124) {
    FCsvProfilerTrace::OutputInlineStat("DrawWindows_Private",_GCsvCategory_Slate.Index);
    __CsvProfilerStat1124 = true;
  }
  uStack_378 = _GCsvCategory_Slate.Index;
  FCsvProfiler::BeginStat("DrawWindows_Private",_GCsvCategory_Slate.Index,"CSV_DrawWindows_Private")
  ;
  if (((this->bUpdateHDRDisplayInformation != false) && (bVar16 = IsHDRAllowed(), bVar16)) &&
     (bVar16 = IsInGameThread(), bVar16)) {
    FlushRenderingCommands();
    (**(code **)(GDynamicRHI->_padding_ + 0x330))();
    this->bUpdateHDRDisplayInformation = false;
  }
  bVar16 = DoesThreadOwnSlateRendering();
  if (bVar16) {
    if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (this->ResourceManager).Object;
    uVar45 = 0;
    if (0 < (pFVar4->PrecachedTextureAtlases).ArrayNum) {
      lVar51 = 0;
      do {
        uVar50 = 0;
        if ((int)uVar45 < (pFVar4->PrecachedTextureAtlases).ArrayNum) {
          uVar50 = ~uVar45 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (**(code **)(**(longlong **)
                       ((pFVar4->PrecachedTextureAtlases).AllocatorInstance.Data + lVar51) + 8))();
        uVar45 = uVar45 + 1;
        lVar51 = lVar51 + 8;
        param_1 = (FSlateDrawBuffer *)TStack_3c0;
      } while ((int)uVar45 < (pFVar4->PrecachedTextureAtlases).ArrayNum);
    }
    FSlateVectorGraphicsCache::UpdateCache((pFVar4->VectorGraphicsCache).Ptr);
  }
  pUVar24 = USlateRHIRendererSettings::StaticClass();
  if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    pUVar52 = (UObject *)0x0;
  }
  else {
    pUVar24 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar24);
    }
    pUVar52 = (pUVar24->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  fVar66 = (float)(double)FApp::DeltaTime;
  dVar65 = (double)FApp::CurrentTime - GStartTime;
  pUStack_380 = pUVar52;
  QueryPerformanceCounter(&LStack_2c0);
  dStack_280 = ((double)LStack_2c0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000) - GStartTime;
  dStack_278 = dVar65;
  fStack_270 = fVar66;
  fStack_26c = fVar66;
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentApplication.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                          ,0x141,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar16 = IsInGameThread();
  if ((((!bVar16) && (bVar16 = IsInSlateThread(), !bVar16)) &&
      (bVar16 = (*IsInAsyncLoadingThread)(), !bVar16)) &&
     ((bVar16 = IsInParallelLoadingThread(), !bVar16 &&
      (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                           ,0x142,L""), bVar16)))) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar25 = (undefined8 *)
            (**(code **)(*(longlong *)FSlateApplication::CurrentApplication.Object + 0x68))
                      (FSlateApplication::CurrentApplication.Object,auStack_218);
  uStack_360 = *puVar25;
  if (((GIsClient == false) || (PRIVATE_GIsRunningCommandlet != false)) ||
     (GRHIGlobals.UsingNullRHI != false)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (((pUVar52 != (UObject *)0x0) && (bVar17 = IsInGameThread(), bVar17)) &&
     ((bVar17 = UAssetManager::IsInitialized(), bVar17 && (bVar16)))) {
    iVar21 = TConsoleVariableData<int>::GetValueOnGameThread
                       (CVarCopyBackbufferToSlatePostRenderTargets.Ref);
    bVar17 = true;
    if (0 < iVar21) goto LAB_146003643;
  }
  bVar17 = false;
LAB_146003643:
  TVar55._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  TVar55._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  EVar58 = None;
  EStack_3f8 = PF_Unknown;
  EStack_3f7 = None;
  TStack_388 = TVar55;
  if ((this->_padding_ == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FSlateFontServices::GetFontCache((FSlateFontServices *)this->_padding_,&TStack_298);
  uVar57 = 0;
  FStack_3d0.Data = (FWindowToRender *)0x0;
  uStack_3f4 = 0;
  uStack_3c8 = 0;
  if (bVar16) {
    uVar45 = *(uint *)((longlong)param_1 + 0x18);
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
    if (0 < (int)uVar45) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_Private_::__l2::FWindowToRender>_>
                (0x50,8,uVar45,&FStack_3d0,0,(int *)((longlong)&uStack_3c8 + 4));
      uStack_3f4 = (uint)uStack_3c8;
    }
    fVar66 = __real_3f000000;
    uStack_3b8 = *(uint *)((longlong)param_1 + 0x18);
    uVar26 = (ulonglong)(int)uStack_3b8;
    pSVar48 = *(SWindow **)((longlong)param_1 + 0x10);
    fVar14 = uStack_360._4_4_;
    fVar13 = (float)uStack_360;
    pSStack_368 = (SWindow *)(&pSVar48->_padding_ + uVar26 * 2);
    while( true ) {
      pSVar27 = pSStack_368;
      pSStack_390 = pSVar48;
      if (*(int *)((longlong)param_1 + 0x18) != (int)uVar26) {
        uStack_3ed = 0;
        `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&uStack_3ed);
      }
      if (pSVar48 == pSVar27) break;
      pFVar5 = (FSlateWindowElementList *)pSVar48->_padding_;
      pFStack_3a0 = pFVar5;
      bVar18 = IsInGameThread();
      if (((!bVar18) && (bVar18 = IsInSlateThread(), !bVar18)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread() || IsInSlateThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                              ,0xf3,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pSVar27 = pFVar5->RenderTargetWindow;
      if ((pSVar27 == (SWindow *)0x0) &&
         (pSStack_3b0 = pSVar27, pSVar27 = FSlateWindowElementList::GetPaintWindow(pFVar5),
         pSVar27 == (SWindow *)0x0)) {
        uStack_3ec = 0;
        pSStack_3b0 = pSVar27;
        `FSlateRHIRenderer::DrawWindows_Private'::__l22::<lambda_1>::operator()(&uStack_3ec);
        uVar26 = (ulonglong)uStack_3b8;
        pSVar48 = (SWindow *)&pSVar48->_padding_;
        param_1 = (FSlateDrawBuffer *)TStack_3c0;
      }
      else {
        pFStack_288 = &pSVar27->ViewportSize;
        pFVar28 = pFStack_288;
        if (*(float *)pFStack_288 == 0.0) {
          pFVar28 = &pSVar27->Size;
        }
        uStack_3d8 = *pFVar28;
        pSStack_3b0 = pSVar27;
        if ((0.0 < (float)uStack_3d8) && (0.0 < uStack_3d8._4_4_)) {
          bVar18 = -1 < CpuChannel->Enabled;
          if (bVar18) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1190,"GatherWindowElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x4a6);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1190);
          }
          FVar29 = SWindow::GetPositionInScreen(pSVar27);
          TVar46._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
          TVar46._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
          pTVar6 = (pSVar27->Viewport).WeakReferenceCount.ReferenceController;
          uStack_3d8 = (FDeprecateSlateVector2D)0x0;
          fVar69 = fVar13 - *(float *)FVar29;
          fVar70 = fVar14 - *(float *)((longlong)FVar29 + 4);
          pFStack_398 = (FSlateElementBatcher *)&pSVar27->ViewportScaleUIOverride;
          fVar63 = *(float *)pFStack_398;
          TStack_2e0 = (TIntPoint<int>_u_0)0x0;
          TStack_2d8 = (TIntPoint<int>_u_0)0x0;
          TVar47 = TVar46;
          TStack_3a8 = TVar46;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            aVar11 = pTVar6->SharedReferenceCount;
            do {
              if (aVar11 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                TVar59 = TStack_2e0;
                TVar53 = TStack_2d8;
                goto LAB_146003923;
              }
              LOCK();
              aVar22 = pTVar6->SharedReferenceCount;
              bVar61 = aVar11 == aVar22;
              if (bVar61) {
                pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
                aVar22 = aVar11;
              }
              UNLOCK();
              aVar11 = aVar22;
            } while (!bVar61);
            uStack_3d8 = (FDeprecateSlateVector2D)(pSVar27->Viewport).Object;
            pSStack_3b0 = pSVar27;
          }
          FVar29 = uStack_3d8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          TVar59 = TStack_2e0;
          TVar53 = TStack_2d8;
          if (FVar29 != (FDeprecateSlateVector2D)0x0) {
            uStack_3e0 = (TVector2<float>_u_0)
                         (**(code **)(*(longlong *)FVar29 + 0x158))(FVar29,auStack_210);
            TStack_370 = (TIntPoint<int>_u_0)0x0;
            TStack_3a8 = *(TIntPoint<int>_u_0 *)((longlong)uStack_3e0 + 8);
            TVar47 = TStack_370;
            if (TStack_3a8 != (TIntPoint<int>_u_0)0x0) {
              aVar11 = ((TReferenceControllerBase<1> *)TStack_3a8)->SharedReferenceCount;
              do {
                if (aVar11 == (atomic<int>)0x0) {
                  TStack_3a8 = (TIntPoint<int>_u_0)0x0;
                  break;
                }
                LOCK();
                aVar22 = ((TReferenceControllerBase<1> *)TStack_3a8)->SharedReferenceCount;
                bVar61 = aVar11 == aVar22;
                if (bVar61) {
                  ((TReferenceControllerBase<1> *)TStack_3a8)->SharedReferenceCount =
                       (atomic<int>)((int)aVar11 + 1);
                  aVar22 = aVar11;
                }
                UNLOCK();
                aVar11 = aVar22;
              } while (!bVar61);
              TVar59 = TStack_3a8;
              plVar43 = *(longlong **)((longlong)uStack_3e0 + 8);
              LOCK();
              piVar1 = (int *)((longlong)plVar43 + 0xc);
              iVar21 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar21 == 1) && (plVar43 != (longlong *)0x0)) {
                (**(code **)(*plVar43 + 8))(plVar43,1);
              }
              *(undefined8 *)((longlong)uStack_3e0 + 8) = 0;
              TVar47 = TStack_370;
              if (TVar59 != (TIntPoint<int>_u_0)0x0) {
                TVar47 = *(TIntPoint<int>_u_0 *)uStack_3e0;
                *(undefined8 *)uStack_3e0 = 0;
              }
            }
            if (plStack_208 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plStack_208 + 0xc);
              iVar21 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar21 == 1) {
                (**(code **)(*plStack_208 + 8))(plStack_208,1);
              }
            }
            TVar59 = TVar46;
            if (TVar47 != (TIntPoint<int>_u_0)0x0) {
              pFVar31 = SWidget::GetTickSpaceGeometry((SWidget *)TVar47);
              uStack_3e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              TVar12._s_0 = uStack_3e0;
              uStack_3e0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              fVar62 = uStack_3e0._4_4_ * (pFVar31->AccumulatedRenderTransform).M.M[1][1];
              uStack_3e0._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              fVar67 = (float)uStack_3e0 * (pFVar31->AccumulatedRenderTransform).M.M[0][1];
              fVar64 = (pFVar31->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
              uStack_3e0 = TVar12._s_0;
              FVar32 = SWindow::GetPositionInScreen(pSVar27);
              fVar68 = (fVar67 + fVar62 + fVar64) - *(float *)((longlong)FVar32 + 4);
              pFVar31 = SWidget::GetTickSpaceGeometry((SWidget *)TVar47);
              uStack_3e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              TVar12._s_0 = uStack_3e0;
              uStack_3e0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              fVar62 = uStack_3e0._4_4_ * (pFVar31->AccumulatedRenderTransform).M.M[1][0];
              uStack_3e0._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              fVar67 = (float)uStack_3e0 * (pFVar31->AccumulatedRenderTransform).M.M[0][0];
              fVar64 = (pFVar31->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
              uStack_3e0 = TVar12._s_0;
              FVar32 = SWindow::GetPositionInScreen(pSVar27);
              fVar64 = (fVar67 + fVar62 + fVar64) - *(float *)FVar32;
              pFVar31 = SWidget::GetPaintSpaceGeometry((SWidget *)TVar47);
              fVar69 = fVar69 - (pFVar31->AbsolutePosition).field0_0x0._s_0.X;
              fVar70 = fVar70 - (pFVar31->AbsolutePosition).field0_0x0._s_0.Y;
              TVar59._s_0.Y = (int)ROUND(fVar68 + fVar68 + fVar66) >> 1;
              TVar59._s_0.X = (int)ROUND(fVar64 + fVar64 + fVar66) >> 1;
            }
            pTVar33 = (TIntPoint<int>_u_0 *)
                      (**(code **)(*(longlong *)FVar29 + 0x10))(FVar29,auStack_220);
            TVar46 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar33->_s_0;
            uStack_3e0 = (TVector2<float>_u_0)((ulonglong)TVar46 >> 0x20);
            TStack_370._4_4_ = TVar59._s_0.Y;
            TVar53._0_4_ = TVar46._0_4_ + TVar59._s_0.X;
            TVar53._s_0.Y = TVar46._s_0.Y + TStack_370._4_4_;
            TStack_370 = TVar59;
            if ((EStack_3f8 != PF_Unknown) &&
               (EVar19 = (**(code **)(*(longlong *)uStack_3d8 + 0x20))(), EStack_3f8 != EVar19)) {
              auStack_3eb[0] = 0;
              `FSlateRHIRenderer::DrawWindows_Private'::__l28::<lambda_2>::operator()(auStack_3eb);
            }
            EStack_3f8 = (**(code **)(*(longlong *)uStack_3d8 + 0x20))();
            uVar26 = (ulonglong)uStack_3e0 & 0xffffffff;
            if ((int)SUB84(uStack_3e0,0) < (int)TStack_388._4_4_) {
              uVar26 = (ulonglong)(uint)TStack_388._4_4_;
            }
            TVar47 = TVar46;
            if (TVar46._0_4_ < TVar55._s_0.X) {
              TVar47 = TVar55;
            }
            TVar55 = (TIntPoint<int>_u_0)(uVar26 << 0x20 | (ulonglong)TVar47 & 0xffffffff);
            if (fVar63 < 0.0) {
              uStack_3e0 = (TVector2<float>_u_0)
                           Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
              if ((((UClass *)uStack_3e0)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0
                 ) {
                UClass::InternalCreateDefaultObjectWrapper((UClass *)uStack_3e0);
              }
              fVar63 = UUserInterfaceSettings::GetDPIScaleBasedOnSize
                                 ((UUserInterfaceSettings *)
                                  (((UClass *)uStack_3e0)->ClassDefaultObject).field0_0x0.DebugPtr,
                                  (TIntPoint<int>)TVar46._s_0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)TStack_3a8);
            TVar47 = TVar59;
            TStack_3a8 = TVar46;
            TStack_388 = TVar55;
          }
LAB_146003923:
          pTVar30 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                            *)&pFStack_3e8->WindowToViewportInfo,pSStack_3b0);
          if ((pTVar30 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) &&
             (uStack_3d8 = *(FDeprecateSlateVector2D *)&pTVar30->field_0x8,
             uStack_3d8 != (FDeprecateSlateVector2D)0x0)) {
            if (*(float *)pFStack_288 == 0.0) {
              bVar61 = FSlateRenderer::IsViewportFullscreen
                                 ((FSlateRenderer *)pFStack_3e8,pSStack_3b0);
              ResizeViewportIfNeeded
                        (pFStack_3e8,(FSlateViewportInfo *)uStack_3d8,
                         (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)uStack_3d8 + 0xb8))->_s_0
                         ,bVar61,pSStack_3b0);
            }
            pSStack_3b0->field_0x3ea =
                 (*(char *)((longlong)uStack_3d8 + 0xcc) * '\x02' ^ pSStack_3b0->field_0x3ea) & 2U ^
                 pSStack_3b0->field_0x3ea;
            *(undefined4 *)&pFStack_398->BatchData = 0xbf800000;
            pFStack_398 = (pFStack_3e8->ElementBatcher).Ptr;
            if ((*(char *)((longlong)uStack_3d8 + 0xcc) == '\0') ||
               (bVar61 = CompositeUIWithSceneHDR(), !bVar61)) {
              bVar61 = false;
            }
            else {
              bVar61 = true;
            }
            pFStack_398->bCompositeHDRViewports = bVar61;
            FSlateElementBatcher::AddElements((pFStack_3e8->ElementBatcher).Ptr,pFStack_3a0);
            if ((TVar46._s_0.X == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
               (TStack_3a8._4_4_ == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
              EStack_3f0 = None;
              EStack_3f7 = None;
              pFVar34 = (pFStack_3e8->ElementBatcher).Ptr;
            }
            else {
              pFVar34 = (pFStack_3e8->ElementBatcher).Ptr;
              EStack_3f0 = pFVar34->UsedSlatePostBuffers;
              EStack_3f7 = pFVar34->ResourceUpdatingPostBuffers;
            }
            bVar61 = pFVar34->bRequiresVsync;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              pIVar42 = IConsoleManager::Get();
              ::CVar = (IConsoleVariable *)
                       (**(code **)((longlong)*pIVar42 + 0xc0))(pIVar42,L"r.VSync",1);
              _Init_thread_footer(&::_TSS1);
            }
            iVar21 = (**(code **)(*(longlong *)::CVar + 200))();
            FSlateElementBatcher::ResetBatches((pFStack_3e8->ElementBatcher).Ptr);
            ((pFStack_3e8->ElementBatcher).Ptr)->bCompositeHDRViewports = false;
            iStack_160 = (int)fVar69;
            iStack_15c = (int)fVar70;
            if (uStack_3f4 == uStack_3c8._4_4_) {
              uStack_3f4 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_Private_::__l2::FWindowToRender>_>
                                     (0x850,&FStack_3d0,(int *)((longlong)&uStack_3c8 + 4));
            }
            uStack_3c8 = CONCAT44(uStack_3c8._4_4_,uStack_3f4 + 1);
            EVar58 = EVar58 | EStack_3f0;
            FStack_3d0.Data[(int)uStack_3f4].Window = pSStack_3b0;
            FStack_3d0.Data[(int)uStack_3f4].WindowElementList = pFStack_3a0;
            FStack_3d0.Data[(int)uStack_3f4].ViewportInfo = (FSlateViewportInfo *)uStack_3d8;
            FStack_3d0.Data[(int)uStack_3f4].ViewportOffset.field0_0x0._s_0 =
                 (TIntPoint<int>_u_0_s_0)TVar47;
            FStack_3d0.Data[(int)uStack_3f4].ViewportExtent.field0_0x0._s_0 =
                 (TIntPoint<int>_u_0_s_0)TVar46;
            *(TIntPoint<int>_u_0 *)&FStack_3d0.Data[(int)uStack_3f4].ViewportRect.field0_0x0 =
                 (TIntPoint<int>_u_0_s_0)TVar59;
            FStack_3d0.Data[(int)uStack_3f4].ViewportRect.field0_0x0._s_0.Max.field0_0x0 = TVar53;
            FStack_3d0.Data[(int)uStack_3f4].PostProcessCustumDrawBits = EStack_3f7;
            TVar47._s_0.Y = iStack_15c;
            TVar47._s_0.X = iStack_160;
            FStack_3d0.Data[(int)uStack_3f4].CursorPosition.field0_0x0 = TVar47;
            FStack_3d0.Data[(int)uStack_3f4].bLockToVsync = (bool)(bVar61 | iVar21 != 0);
            FStack_3d0.Data[(int)uStack_3f4].ViewportScaleUI = fVar63;
            FStack_3d0.Data[(int)uStack_3f4].PostProcessUsedBits = EStack_3f0;
            uStack_3f4 = uStack_3f4 + 1;
          }
          pSVar48 = pSStack_390;
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
            pSVar48 = pSStack_390;
          }
        }
        pSVar48 = (SWindow *)&pSVar48->_padding_;
        uVar26 = (ulonglong)uStack_3b8;
        param_1 = (FSlateDrawBuffer *)TStack_3c0;
      }
    }
    uVar57 = (ulong64)uStack_3f4;
    pUVar52 = pUStack_380;
    this = pFStack_3e8;
    EStack_3f7 = EVar58;
  }
  FSlateFontCache::UpdateCache(TStack_298.Object);
  if (bVar17) {
    uVar45 = TVar55._s_0.X;
    if (((uVar45 != 0) && (TStack_388._4_4_ != 0)) && (EStack_3f7 != None)) {
      EVar58 = EStack_3f7;
      do {
        EVar56 = -EVar58 & EVar58;
        pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                  ::FindChecked(&pUVar52[1].field_0x10,EVar56);
        if (pFVar35->bEnabled != 0) {
          pUVar37 = (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr;
          if (pUVar37 == (UTextureRenderTarget2D *)0x0) {
            if (pFVar35->bLoadAttempted) goto LAB_14600410e;
            iVar21 = 0;
            pUStack_258 = pUVar37;
            iStack_250 = iVar21;
            if ((pFVar35->PathToSlatePostRT).Data.ArrayNum == 0) {
              pFStack_2a8 = (FScriptContainerElement *)0x15060d16c;
LAB_146003f0f:
              sVar36 = wcslen((wchar_t *)pFStack_2a8);
              iVar21 = (int)sVar36;
            }
            else {
              pFStack_2a8 = (pFVar35->PathToSlatePostRT).Data.AllocatorInstance.Data;
              if (pFStack_2a8 != (FScriptContainerElement *)0x0) goto LAB_146003f0f;
            }
            iStack_2a0 = iVar21;
            pUVar24 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
            uStack_1f0 = CONCAT44(uStack_24c,iStack_250);
            TStack_1e8._12_4_ = uStack_29c;
            TStack_1e8.Size = iStack_2a0;
            TStack_1f8.DebugPtr = pUStack_258;
            TStack_1e8.DataPtr = (wchar_t *)pFStack_2a8;
            pUVar37 = (UTextureRenderTarget2D *)
                      StaticLoadObject(pUVar24,(UObject *)0x0,&TStack_1e8,
                                       (TStringView<wchar_t> *)&TStack_1f8.ObjectPtr,0,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
            if (pUVar37 == (UTextureRenderTarget2D *)0x0) {
              pFVar35->bLoadAttempted = true;
              goto LAB_14600410e;
            }
            this_00 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar37->_padding_ + 4));
            FUObjectItem::SetRootFlags(this_00,RootSet);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar37);
            }
            (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr = pUVar37;
            pFVar35->bLoadAttempted = true;
          }
          pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                    ::FindChecked(&pUVar52[1].field_0x10,EVar56);
          uVar23 = TVar55._s_0.Y;
          uVar50 = uVar45;
          TVar46 = TVar55;
          if (pFVar35->Resolution != Full) {
            if (pFVar35->Resolution == Half) {
              uStack_358 = 2;
              uStack_354 = 2;
              uVar50 = (int)(uVar45 + 1) / 2;
              uVar23 = (int)(uVar23 + 1) / 2;
              if ((int)uVar23 < 1) {
                uVar23 = 1;
              }
              TVar46 = TStack_3c0;
              if ((int)uVar50 < 1) {
                uVar50 = 1;
              }
            }
            else {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRendererSettings.cpp"
                                  ,0x80,L"");
              if (bVar17) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
          TStack_3c0 = TVar46;
          if (((pUVar37->SizeX != uVar50) || (pUVar37->SizeY != uVar23)) ||
             (EVar19 = (**(code **)(pUVar37->_padding_ + 0x3d0))(pUVar37), EVar19 != EStack_3f8)) {
            if (CpuChannel->Enabled < 0) {
              UTextureRenderTarget2D::InitCustomFormat(pUVar37,uVar50,uVar23,EStack_3f8,true);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId1289,"AllocatePostProcessTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x509);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1289);
              UTextureRenderTarget2D::InitCustomFormat(pUVar37,uVar50,uVar23,EStack_3f8,true);
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          (pFStack_3e8->PostProcessRenderTargets).LastUsedFrameCounter.Elements[EVar56] =
               GFrameCounter;
          this = pFStack_3e8;
        }
LAB_14600410e:
        EVar58 = EVar58 & EVar58 - ESlatePostRT_0;
      } while (EVar58 != None);
      uVar57 = uStack_3c8 & 0xffffffff;
      uStack_3f4 = (uint)uStack_3c8;
    }
    pUVar52 = pUStack_380;
    EVar58 = ~EStack_3f7 & All;
    if (EVar58 != None) {
      do {
        pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                  ::FindChecked(&pUVar52[1].field_0x10,-EVar58 & EVar58);
        pUVar37 = (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr;
        if (((pUVar37 != (UTextureRenderTarget2D *)0x0) &&
            (pFVar38 = UTexture::GetResource((UTexture *)pUVar37),
            pFVar38 != (FTextureResource *)0x0)) &&
           ((pUVar37->SizeX != 1 &&
            ((pUVar37->SizeY != 1 &&
             ((this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[-EVar58 & EVar58] <
              GFrameCounter)))))) {
          if (CpuChannel->Enabled < 0) {
            UTextureRenderTarget2D::InitCustomFormat(pUVar37,1,1,PF_A2B10G10R10,true);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1308,"TrimPostProcessTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x51c);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1308);
            UTextureRenderTarget2D::InitCustomFormat(pUVar37,1,1,PF_A2B10G10R10,true);
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        EVar58 = EVar58 & EVar58 - ESlatePostRT_0;
      } while (EVar58 != None);
      uVar57 = (ulong64)uStack_3f4;
    }
  }
  pFVar39 = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x20,8);
  if (pFVar39 == (ForElementType<FSlateDrawWindowPassInputs> *)0x0) {
    pFVar39 = (ForElementType<FSlateDrawWindowPassInputs> *)0x0;
  }
  else {
    pFVar39->Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[1].Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[2].Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[3].Data = (FSlateDrawWindowPassInputs *)0x0;
  }
  iVar21 = (int)uVar57;
  pFStack_3a0 = (FSlateWindowElementList *)pFVar39;
  if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar57);
  }
  piVar1 = (int *)((longlong)&pFVar39[1].Data + 4);
  if (*(int *)((longlong)&pFVar39[1].Data + 4) < iVar21) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
              (0x70,8,iVar21,pFVar39,*(int *)&pFVar39[1].Data,piVar1);
  }
  pTVar3 = &this->DeferredUpdateContexts;
  pFVar2 = pFVar39 + 2;
  if ((TArray<FRenderThreadUpdateContext,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *
      )pFVar2 != pTVar3) {
    if (pFVar2->Data != (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar2->Data);
    }
    pFVar2->Data = (FSlateDrawWindowPassInputs *)(pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FRenderThreadUpdateContext *)0x0;
    *(int *)&pFVar39[3].Data = (this->DeferredUpdateContexts).ArrayNum;
    *(int *)((longlong)&pFVar39[3].Data + 4) = (this->DeferredUpdateContexts).ArrayMax;
    (this->DeferredUpdateContexts).ArrayNum = 0;
    (this->DeferredUpdateContexts).ArrayMax = 0;
  }
  dVar15 = dStack_278;
  dVar65 = dStack_280;
  uVar10 = CONCAT44(fStack_26c,fStack_270);
  bVar17 = false;
  pFVar49 = FStack_3d0.Data + iVar21;
  for (ppFVar54 = &(FStack_3d0.Data)->WindowElementList;
      (FWindowToRender *)(ppFVar54 + -1) != pFVar49; ppFVar54 = ppFVar54 + 10) {
    bVar17 = (bool)(bVar17 | (this->ScreenshotState).ViewportToCapture ==
                             (FSlateViewportInfo *)ppFVar54[1]);
    if (bVar16) {
      pFStack_348 = *ppFVar54;
      pSVar48 = ((FWindowToRender *)(ppFVar54 + -1))->Window;
      fStack_318 = *(float *)(ppFVar54 + 6);
      TStack_330 = *(TIntPoint<int>_u_0 *)(ppFVar54 + 7);
      TStack_328 = (((TIntRect<int> *)(ppFVar54 + 4))->field0_0x0)._s_0.Min.field0_0x0;
      TStack_320 = *(TIntPoint<int>_u_0 *)(ppFVar54 + 5);
      EStack_314 = *(ESlatePostRT *)((longlong)ppFVar54 + 0x34);
      pFStack_350 = this;
      pSStack_340 = pSVar48;
      pFStack_338 = (FSlateViewportInfo *)ppFVar54[1];
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pSVar48->Title).Getter,
                 &FStack_1d0);
      if (((*(int *)&(pSVar48->Title).Getter.field_0x10 == 0) ||
          (plVar43 = *(longlong **)&(pSVar48->Title).Getter.field_0x8, plVar43 == (longlong *)0x0))
         || (cVar20 = (**(code **)(*plVar43 + 0x38))(), cVar20 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_1d0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_1d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(pSVar48->Title).Getter,aFStack_1b8);
        if (*(int *)&(pSVar48->Title).Getter.field_0x10 == 0) {
          plVar43 = (longlong *)0x0;
        }
        else {
          plVar43 = *(longlong **)&(pSVar48->Title).Getter.field_0x8;
        }
        (**(code **)(*plVar43 + 0x60))(plVar43,&FStack_268);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (aFStack_1b8);
        FText::operator=(&(pSVar48->Title).Value,&FStack_268);
        if (FStack_268.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_268.TextData.Reference + 0x10))();
        }
      }
      FStack_2d0.TextData.Reference = (pSVar48->Title).Value.TextData.Reference;
      if (FStack_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_2d0.TextData.Reference + 8))
                  (FStack_2d0.TextData.Reference,auStack_2b8);
      }
      FStack_2d0.Flags = (pSVar48->Title).Value.Flags;
      pFVar40 = FText::ToString(&FStack_2d0);
      FStack_310.Data = (FScriptContainerElement *)0x0;
      iVar21 = (pFVar40->Data).ArrayNum;
      _Src = (pFVar40->Data).AllocatorInstance.Data;
      uStack_308 = CONCAT44(uStack_308._4_4_,iVar21);
      if (iVar21 == 0) {
        uStack_308 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar21,0,&FStack_310,iVar21,(int *)((longlong)&uStack_308 + 4));
        memcpy(FStack_310.Data,_Src,(longlong)iVar21 * 2);
      }
      bStack_2e8 = *(bool *)(ppFVar54 + 8);
      dStack_300 = dVar65;
      dStack_2f8 = dVar15;
      bStack_2e7 = false;
      iVar21 = *(int *)&pFVar39[1].Data;
      uStack_2f0 = uVar10;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
                           (0x870,pFVar39,piVar1);
      }
      *(int *)&pFVar39[1].Data = iVar21 + 1;
      pFVar7 = pFVar39->Data;
      pFVar7[iVar21].Renderer = pFStack_350;
      pFVar7[iVar21].WindowElementList = pFStack_348;
      pFVar7[iVar21].Window = pSStack_340;
      pFVar7[iVar21].ViewportInfo = pFStack_338;
      pFVar7[iVar21].CursorPosition.field0_0x0 = TStack_330;
      pFVar7[iVar21].SceneViewRect.field0_0x0._s_0.Min.field0_0x0 = TStack_328;
      pFVar7[iVar21].SceneViewRect.field0_0x0._s_0.Max.field0_0x0 = TStack_320;
      pFVar7[iVar21].ViewportScaleUI = fStack_318;
      pFVar7[iVar21].WindowTitle.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7[iVar21].UsedSlatePostBuffers = EStack_314;
      pFVar7[iVar21].WindowTitle.Data.AllocatorInstance.Data = FStack_310.Data;
      pFVar7[iVar21].WindowTitle.Data.ArrayNum = (int)uStack_308;
      pFVar7[iVar21].WindowTitle.Data.ArrayMax = uStack_308._4_4_;
      pFVar7[iVar21].Time.RealTimeSeconds = dStack_300;
      pFVar7[iVar21].Time.WorldTimeSeconds = dStack_2f8;
      pFVar7[iVar21].Time.DeltaRealTimeSeconds = (float)(undefined4)uStack_2f0;
      pFVar7[iVar21].Time.DeltaWorldTimeSeconds = (float)uStack_2f0._4_4_;
      pFVar7[iVar21].bLockToVsync = bStack_2e8;
      pFVar7[iVar21].bClear = bStack_2e7;
      uStack_308 = 0;
      FStack_310.Data = (FScriptContainerElement *)0x0;
      if (FStack_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_2d0.TextData.Reference + 0x10))();
      }
      uVar57 = (ulong64)uStack_3f4;
      this = pFStack_3e8;
    }
  }
  if ((*(int *)&pFVar39[1].Data != 0) || (*(int *)&pFVar39[3].Data != 0)) {
    ppuStack_138 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FSlateRHIRenderer::DrawWindows_Private'::`76'::<lambda_3>,1,0>
                    ::_vftable_;
    pFStack_3a0 = (FSlateWindowElementList *)0x0;
    apcStack_148[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FSlateRHIRenderer::DrawWindows_Private'::__l76::<lambda_3>,void,FRHICommandListImmediate_&>
         ::Call;
    pppuStack_120 = (undefined ***)0x0;
    pFStack_130 = this;
    pFStack_128 = pFVar39;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::DrawWindows_Private_::__l76::TSTR_SlateDrawWindowsCommand1350>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_148);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      auStack_118._0_8_ = apcStack_148[0];
      pppuStack_f0 = pppuStack_120;
      ppuStack_108 = ppuStack_138;
      pFStack_100 = pFStack_130;
      pFStack_f8 = pFStack_128;
      apcStack_148[0] = (code *)0x0;
      bStack_e8 = 2;
      pFVar41 = (FRenderCommandTag *)
                TRenderCommandTag<`FSlateRHIRenderer::DrawWindows_Private'::__l76::TSTR_SlateDrawWindowsCommand1350>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_118,pFVar41);
      uVar26 = (ulonglong)bStack_e8;
      if ((2 < uVar26) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_118._0_8_ != (code *)0x0) {
          pppuVar44 = (undefined ***)(auStack_118 + 0x10);
          if (pppuStack_f0 != (undefined ***)0x0) {
            pppuVar44 = pppuStack_f0;
          }
          (*(code *)(*pppuVar44)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26])(auStack_118);
      }
    }
    if (apcStack_148[0] != (code *)0x0) {
      pppuVar44 = &ppuStack_138;
      if (pppuStack_120 != (undefined ***)0x0) {
        pppuVar44 = pppuStack_120;
      }
      (*(code *)(*pppuVar44)[2])();
    }
    if (((this->DeferredUpdateContexts).ArrayNum != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUpdateContexts.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                            ,0x54b,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (bVar17) {
    FlushRenderingCommands();
    (this->ScreenshotState).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->ScreenshotState).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->ScreenshotState).ViewportToCapture = (FSlateViewportInfo *)0x0;
    (this->ScreenshotState).ColorData = (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0;
    (this->ScreenshotState).ColorDataHDR = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uStack_3b8 = (uint)uVar57;
  uVar26 = (ulonglong)(int)uStack_3b8;
  pFVar34 = (FSlateElementBatcher *)(FStack_3d0.Data + uVar26);
  TVar55 = (TIntPoint<int>_u_0)FStack_3d0.Data;
  pFStack_398 = pFVar34;
  while( true ) {
    TStack_3c0 = TVar55;
    if ((int)uVar57 != (int)uVar26) {
      uStack_3e9 = 0;
      `TCheckedPointerIterator<`FSlateRHIRenderer::DrawWindows_Private'::__l2::FWindowToRender,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&uStack_3e9);
    }
    if (TVar55 == (TIntPoint<int>_u_0)pFVar34) break;
    pSStack_368 = ((FWindowToRender *)TVar55)->Window;
    pFVar8 = ((FWindowToRender *)TVar55)->ViewportInfo;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&FStack_248);
    pSVar48 = pSStack_368;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    bVar16 = false;
    uVar45 = (int)this->_padding_ - 1;
    pFVar60 = this;
    if (-1 < (int)uVar45) {
      lVar51 = (longlong)(int)uVar45 << 4;
      bVar16 = false;
      do {
        uVar50 = 0;
        if ((int)uVar45 < (int)this->_padding_) {
          uVar50 = ~uVar45 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((*(int *)(lVar51 + 8 + this->_padding_) == 0) ||
            (plVar43 = *(longlong **)(lVar51 + this->_padding_), plVar43 == (longlong *)0x0)) ||
           (cVar20 = (**(code **)(*plVar43 + 0x68))(plVar43,pSVar48,&pFVar8->ViewportRHI),
           cVar20 == '\0')) {
          bVar16 = true;
        }
        lVar51 = lVar51 + -0x10;
        uVar45 = uVar45 - 1;
      } while (-1 < (int)uVar45);
      uStack_3f4 = (uint)uStack_3c8;
      pFVar34 = pFStack_398;
      TVar55 = TStack_3c0;
      pFVar60 = pFStack_3e8;
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
    if (bVar16) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
    }
    if (FStack_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_248.Accessor,&FStack_248);
    }
    uVar57 = (ulong64)uStack_3f4;
    TVar55._s_0 = TVar55._s_0 + 0x50;
    uVar26 = (ulonglong)uStack_3b8;
    this = pFVar60;
  }
  FlushPendingDeletes(this);
  FSlateFontCache::ConditionalFlushCache(TStack_298.Object);
  pFVar5 = pFStack_3a0;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FSlateVectorGraphicsCache::ConditionalFlushCache
            ((((this->ResourceManager).Object)->VectorGraphicsCache).Ptr);
  if (pFVar5 != (FSlateWindowElementList *)0x0) {
    if (((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 0x10))->Data !=
        (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                (((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 0x10))->Data);
    }
    DestructItems<FSlateDrawWindowPassInputs,int>
              (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow,
               *(int *)&((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 8))->Data
              );
    if (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow !=
        (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow);
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar5);
  }
  if (FStack_3d0.Data != (FWindowToRender *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FStack_3d0.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_298.SharedReferenceCount.ReferenceController);
  FCsvProfiler::EndStat("DrawWindows_Private",uStack_378);
  return;
}

// DrawWindows_Private @ 1460032e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146004582) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::DrawWindows_Private(FSlateRHIRenderer *this,FSlateDrawBuffer *param_1)

{
  int *piVar1;
  ForElementType<FSlateDrawWindowPassInputs> *pFVar2;
  TArray<FRenderThreadUpdateContext,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar3;
  FSlateRHIResourceManager *pFVar4;
  FSlateWindowElementList *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *_Src;
  FSlateDrawWindowPassInputs *pFVar7;
  FSlateViewportInfo *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  atomic<int> aVar11;
  TVector2<float>_u_0 TVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  EPixelFormat EVar19;
  char cVar20;
  int iVar21;
  atomic<int> aVar22;
  uint uVar23;
  UClass *pUVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  SWindow *pSVar27;
  FDeprecateSlateVector2D *pFVar28;
  FDeprecateSlateVector2D FVar29;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar30;
  FGeometry *pFVar31;
  FDeprecateSlateVector2D FVar32;
  TIntPoint<int>_u_0 *pTVar33;
  FSlateElementBatcher *pFVar34;
  FSlatePostSettings *pFVar35;
  size_t sVar36;
  UTextureRenderTarget2D *pUVar37;
  FUObjectItem *this_00;
  FTextureResource *pFVar38;
  ForElementType<FSlateDrawWindowPassInputs> *pFVar39;
  FString *pFVar40;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar41;
  IConsoleManager *pIVar42;
  longlong *plVar43;
  undefined ***pppuVar44;
  uint uVar45;
  TIntPoint<int>_u_0 TVar46;
  TIntPoint<int>_u_0 TVar47;
  SWindow *pSVar48;
  FWindowToRender *pFVar49;
  uint uVar50;
  longlong lVar51;
  UObject *pUVar52;
  TIntPoint<int>_u_0 TVar53;
  FSlateWindowElementList **ppFVar54;
  TIntPoint<int>_u_0 TVar55;
  ESlatePostRT EVar56;
  ulong64 uVar57;
  ESlatePostRT EVar58;
  TIntPoint<int>_u_0 TVar59;
  FSlateRHIRenderer *pFVar60;
  bool bVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auStackY_438 [32];
  EPixelFormat local_3f8;
  ESlatePostRT local_3f7;
  uint local_3f4;
  ESlatePostRT local_3f0;
  undefined1 local_3ed;
  undefined1 local_3ec;
  undefined1 local_3eb [2];
  undefined1 local_3e9;
  FSlateRHIRenderer *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  ForElementType<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_Private(FSlateDrawBuffer_&)_::_2_::FWindowToRender>
  local_3d0;
  undefined8 local_3c8;
  TIntPoint<int>_u_0 local_3c0;
  uint local_3b8;
  SWindow *local_3b0;
  TIntPoint<int>_u_0 local_3a8;
  FSlateWindowElementList *local_3a0;
  FSlateElementBatcher *local_398;
  SWindow *local_390;
  TIntPoint<int>_u_0 local_388;
  UObject *local_380;
  uint local_378;
  TIntPoint<int>_u_0 local_370;
  SWindow *local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  FSlateRHIRenderer *local_350;
  FSlateWindowElementList *local_348;
  SWindow *local_340;
  FSlateViewportInfo *local_338;
  TIntPoint<int>_u_0 local_330;
  TIntPoint<int>_u_0 local_328;
  TIntPoint<int>_u_0 local_320;
  float local_318;
  ESlatePostRT local_314;
  ForAnyElementType local_310;
  undefined8 local_308;
  double local_300;
  double dStack_2f8;
  undefined8 local_2f0;
  bool local_2e8;
  bool local_2e7;
  TIntPoint<int>_u_0 local_2e0;
  TIntPoint<int>_u_0 TStack_2d8;
  FText local_2d0;
  LARGE_INTEGER local_2c0;
  undefined1 local_2b8 [16];
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  TSharedRef<FSlateFontCache,1> local_298;
  FDeprecateSlateVector2D *local_288;
  double local_280;
  double dStack_278;
  float local_270;
  float fStack_26c;
  FText local_268;
  UTextureRenderTarget2D *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FDestructionSentinel local_248;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  longlong *local_208;
  TObjectPtr<UTextureRenderTarget2D>_u_0 local_1f8;
  undefined8 uStack_1f0;
  TStringView<wchar_t> local_1e8;
  FReadAccessScope local_1d0;
  FReadAccessScope local_1b8 [3];
  int local_160;
  int iStack_15c;
  code *local_148 [2];
  undefined **local_138;
  FSlateRHIRenderer *pFStack_130;
  ForElementType<FSlateDrawWindowPassInputs> *local_128;
  undefined ***local_120;
  undefined1 local_118 [16];
  undefined **local_108;
  FSlateRHIRenderer *pFStack_100;
  ForElementType<FSlateDrawWindowPassInputs> *local_f8;
  undefined ***local_f0;
  byte local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3e8 = this;
  local_3c0 = (TIntPoint<int>_u_0)param_1;
  if (!__CsvProfilerStat1124) {
    FCsvProfilerTrace::OutputInlineStat("DrawWindows_Private",_GCsvCategory_Slate.Index);
    __CsvProfilerStat1124 = true;
  }
  local_378 = _GCsvCategory_Slate.Index;
  FCsvProfiler::BeginStat("DrawWindows_Private",_GCsvCategory_Slate.Index,"CSV_DrawWindows_Private")
  ;
  if (((this->bUpdateHDRDisplayInformation != false) && (bVar16 = IsHDRAllowed(), bVar16)) &&
     (bVar16 = IsInGameThread(), bVar16)) {
    FlushRenderingCommands();
    (**(code **)(GDynamicRHI->_padding_ + 0x330))();
    this->bUpdateHDRDisplayInformation = false;
  }
  bVar16 = DoesThreadOwnSlateRendering();
  if (bVar16) {
    if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (this->ResourceManager).Object;
    uVar45 = 0;
    if (0 < (pFVar4->PrecachedTextureAtlases).ArrayNum) {
      lVar51 = 0;
      do {
        uVar50 = 0;
        if ((int)uVar45 < (pFVar4->PrecachedTextureAtlases).ArrayNum) {
          uVar50 = ~uVar45 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (**(code **)(**(longlong **)
                       ((pFVar4->PrecachedTextureAtlases).AllocatorInstance.Data + lVar51) + 8))();
        uVar45 = uVar45 + 1;
        lVar51 = lVar51 + 8;
        param_1 = (FSlateDrawBuffer *)local_3c0;
      } while ((int)uVar45 < (pFVar4->PrecachedTextureAtlases).ArrayNum);
    }
    FSlateVectorGraphicsCache::UpdateCache((pFVar4->VectorGraphicsCache).Ptr);
  }
  pUVar24 = USlateRHIRendererSettings::StaticClass();
  if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    pUVar52 = (UObject *)0x0;
  }
  else {
    pUVar24 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar24);
    }
    pUVar52 = (pUVar24->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  fVar66 = (float)(double)FApp::DeltaTime;
  dVar65 = (double)FApp::CurrentTime - GStartTime;
  local_380 = pUVar52;
  QueryPerformanceCounter(&local_2c0);
  local_280 = ((double)local_2c0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000) - GStartTime;
  dStack_278 = dVar65;
  local_270 = fVar66;
  fStack_26c = fVar66;
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentApplication.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                          ,0x141,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar16 = IsInGameThread();
  if ((((!bVar16) && (bVar16 = IsInSlateThread(), !bVar16)) &&
      (bVar16 = (*IsInAsyncLoadingThread)(), !bVar16)) &&
     ((bVar16 = IsInParallelLoadingThread(), !bVar16 &&
      (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                           ,0x142,L""), bVar16)))) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar25 = (undefined8 *)
            (**(code **)(*(longlong *)FSlateApplication::CurrentApplication.Object + 0x68))
                      (FSlateApplication::CurrentApplication.Object,local_218);
  local_360 = *puVar25;
  if (((GIsClient == false) || (PRIVATE_GIsRunningCommandlet != false)) ||
     (GRHIGlobals.UsingNullRHI != false)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (((pUVar52 != (UObject *)0x0) && (bVar17 = IsInGameThread(), bVar17)) &&
     ((bVar17 = UAssetManager::IsInitialized(), bVar17 && (bVar16)))) {
    iVar21 = TConsoleVariableData<int>::GetValueOnGameThread
                       (CVarCopyBackbufferToSlatePostRenderTargets.Ref);
    bVar17 = true;
    if (0 < iVar21) goto LAB_146003643;
  }
  bVar17 = false;
LAB_146003643:
  TVar55._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
  TVar55._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
  EVar58 = None;
  local_3f8 = PF_Unknown;
  local_3f7 = None;
  local_388 = TVar55;
  if ((this->_padding_ == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FSlateFontServices::GetFontCache((FSlateFontServices *)this->_padding_,&local_298);
  uVar57 = 0;
  local_3d0.Data = (FWindowToRender *)0x0;
  local_3f4 = 0;
  local_3c8 = 0;
  if (bVar16) {
    uVar45 = *(uint *)((longlong)param_1 + 0x18);
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
    if (0 < (int)uVar45) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_Private_::__l2::FWindowToRender>_>
                (0x50,8,uVar45,&local_3d0,0,(int *)((longlong)&local_3c8 + 4));
      local_3f4 = (uint)local_3c8;
    }
    fVar66 = __real_3f000000;
    local_3b8 = *(uint *)((longlong)param_1 + 0x18);
    uVar26 = (ulonglong)(int)local_3b8;
    pSVar48 = *(SWindow **)((longlong)param_1 + 0x10);
    fVar14 = local_360._4_4_;
    fVar13 = (float)local_360;
    local_368 = (SWindow *)(&pSVar48->_padding_ + uVar26 * 2);
    while( true ) {
      pSVar27 = local_368;
      local_390 = pSVar48;
      if (*(int *)((longlong)param_1 + 0x18) != (int)uVar26) {
        local_3ed = 0;
        `TCheckedPointerIterator<TSharedRef<FSlateWindowElementList,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_3ed);
      }
      if (pSVar48 == pSVar27) break;
      pFVar5 = (FSlateWindowElementList *)pSVar48->_padding_;
      local_3a0 = pFVar5;
      bVar18 = IsInGameThread();
      if (((!bVar18) && (bVar18 = IsInSlateThread(), !bVar18)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread() || IsInSlateThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElements.h"
                              ,0xf3,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pSVar27 = pFVar5->RenderTargetWindow;
      if ((pSVar27 == (SWindow *)0x0) &&
         (local_3b0 = pSVar27, pSVar27 = FSlateWindowElementList::GetPaintWindow(pFVar5),
         pSVar27 == (SWindow *)0x0)) {
        local_3ec = 0;
        local_3b0 = pSVar27;
        `FSlateRHIRenderer::DrawWindows_Private'::__l22::<lambda_1>::operator()(&local_3ec);
        uVar26 = (ulonglong)local_3b8;
        pSVar48 = (SWindow *)&pSVar48->_padding_;
        param_1 = (FSlateDrawBuffer *)local_3c0;
      }
      else {
        local_288 = &pSVar27->ViewportSize;
        pFVar28 = local_288;
        if (*(float *)local_288 == 0.0) {
          pFVar28 = &pSVar27->Size;
        }
        local_3d8 = *pFVar28;
        local_3b0 = pSVar27;
        if ((0.0 < (float)local_3d8) && (0.0 < local_3d8._4_4_)) {
          bVar18 = -1 < CpuChannel->Enabled;
          if (bVar18) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1190,"GatherWindowElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x4a6);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1190);
          }
          FVar29 = SWindow::GetPositionInScreen(pSVar27);
          TVar46._s_0.Y = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y;
          TVar46._s_0.X = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X;
          pTVar6 = (pSVar27->Viewport).WeakReferenceCount.ReferenceController;
          local_3d8 = (FDeprecateSlateVector2D)0x0;
          fVar69 = fVar13 - *(float *)FVar29;
          fVar70 = fVar14 - *(float *)((longlong)FVar29 + 4);
          local_398 = (FSlateElementBatcher *)&pSVar27->ViewportScaleUIOverride;
          fVar63 = *(float *)local_398;
          local_2e0 = (TIntPoint<int>_u_0)0x0;
          TStack_2d8 = (TIntPoint<int>_u_0)0x0;
          TVar47 = TVar46;
          local_3a8 = TVar46;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            aVar11 = pTVar6->SharedReferenceCount;
            do {
              if (aVar11 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                TVar59 = local_2e0;
                TVar53 = TStack_2d8;
                goto LAB_146003923;
              }
              LOCK();
              aVar22 = pTVar6->SharedReferenceCount;
              bVar61 = aVar11 == aVar22;
              if (bVar61) {
                pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
                aVar22 = aVar11;
              }
              UNLOCK();
              aVar11 = aVar22;
            } while (!bVar61);
            local_3d8 = (FDeprecateSlateVector2D)(pSVar27->Viewport).Object;
            local_3b0 = pSVar27;
          }
          FVar29 = local_3d8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          TVar59 = local_2e0;
          TVar53 = TStack_2d8;
          if (FVar29 != (FDeprecateSlateVector2D)0x0) {
            local_3e0 = (TVector2<float>_u_0)
                        (**(code **)(*(longlong *)FVar29 + 0x158))(FVar29,local_210);
            local_370 = (TIntPoint<int>_u_0)0x0;
            local_3a8 = *(TIntPoint<int>_u_0 *)((longlong)local_3e0 + 8);
            TVar47 = local_370;
            if (local_3a8 != (TIntPoint<int>_u_0)0x0) {
              aVar11 = ((TReferenceControllerBase<1> *)local_3a8)->SharedReferenceCount;
              do {
                if (aVar11 == (atomic<int>)0x0) {
                  local_3a8 = (TIntPoint<int>_u_0)0x0;
                  break;
                }
                LOCK();
                aVar22 = ((TReferenceControllerBase<1> *)local_3a8)->SharedReferenceCount;
                bVar61 = aVar11 == aVar22;
                if (bVar61) {
                  ((TReferenceControllerBase<1> *)local_3a8)->SharedReferenceCount =
                       (atomic<int>)((int)aVar11 + 1);
                  aVar22 = aVar11;
                }
                UNLOCK();
                aVar11 = aVar22;
              } while (!bVar61);
              TVar59 = local_3a8;
              plVar43 = *(longlong **)((longlong)local_3e0 + 8);
              LOCK();
              piVar1 = (int *)((longlong)plVar43 + 0xc);
              iVar21 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar21 == 1) && (plVar43 != (longlong *)0x0)) {
                (**(code **)(*plVar43 + 8))(plVar43,1);
              }
              *(undefined8 *)((longlong)local_3e0 + 8) = 0;
              TVar47 = local_370;
              if (TVar59 != (TIntPoint<int>_u_0)0x0) {
                TVar47 = *(TIntPoint<int>_u_0 *)local_3e0;
                *(undefined8 *)local_3e0 = 0;
              }
            }
            if (local_208 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_208 + 0xc);
              iVar21 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar21 == 1) {
                (**(code **)(*local_208 + 8))(local_208,1);
              }
            }
            TVar59 = TVar46;
            if (TVar47 != (TIntPoint<int>_u_0)0x0) {
              pFVar31 = SWidget::GetTickSpaceGeometry((SWidget *)TVar47);
              local_3e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              TVar12._s_0 = local_3e0;
              local_3e0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              fVar62 = local_3e0._4_4_ * (pFVar31->AccumulatedRenderTransform).M.M[1][1];
              local_3e0._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              fVar67 = (float)local_3e0 * (pFVar31->AccumulatedRenderTransform).M.M[0][1];
              fVar64 = (pFVar31->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
              local_3e0 = TVar12._s_0;
              FVar32 = SWindow::GetPositionInScreen(pSVar27);
              fVar68 = (fVar67 + fVar62 + fVar64) - *(float *)((longlong)FVar32 + 4);
              pFVar31 = SWidget::GetTickSpaceGeometry((SWidget *)TVar47);
              local_3e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              TVar12._s_0 = local_3e0;
              local_3e0._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
              fVar62 = local_3e0._4_4_ * (pFVar31->AccumulatedRenderTransform).M.M[1][0];
              local_3e0._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
              fVar67 = (float)local_3e0 * (pFVar31->AccumulatedRenderTransform).M.M[0][0];
              fVar64 = (pFVar31->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
              local_3e0 = TVar12._s_0;
              FVar32 = SWindow::GetPositionInScreen(pSVar27);
              fVar64 = (fVar67 + fVar62 + fVar64) - *(float *)FVar32;
              pFVar31 = SWidget::GetPaintSpaceGeometry((SWidget *)TVar47);
              fVar69 = fVar69 - (pFVar31->AbsolutePosition).field0_0x0._s_0.X;
              fVar70 = fVar70 - (pFVar31->AbsolutePosition).field0_0x0._s_0.Y;
              TVar59._s_0.Y = (int)ROUND(fVar68 + fVar68 + fVar66) >> 1;
              TVar59._s_0.X = (int)ROUND(fVar64 + fVar64 + fVar66) >> 1;
            }
            pTVar33 = (TIntPoint<int>_u_0 *)
                      (**(code **)(*(longlong *)FVar29 + 0x10))(FVar29,local_220);
            TVar46 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar33->_s_0;
            local_3e0 = (TVector2<float>_u_0)((ulonglong)TVar46 >> 0x20);
            local_370._4_4_ = TVar59._s_0.Y;
            TVar53._0_4_ = TVar46._0_4_ + TVar59._s_0.X;
            TVar53._s_0.Y = TVar46._s_0.Y + local_370._4_4_;
            local_370 = TVar59;
            if ((local_3f8 != PF_Unknown) &&
               (EVar19 = (**(code **)(*(longlong *)local_3d8 + 0x20))(), local_3f8 != EVar19)) {
              local_3eb[0] = 0;
              `FSlateRHIRenderer::DrawWindows_Private'::__l28::<lambda_2>::operator()(local_3eb);
            }
            local_3f8 = (**(code **)(*(longlong *)local_3d8 + 0x20))();
            uVar26 = (ulonglong)local_3e0 & 0xffffffff;
            if ((int)SUB84(local_3e0,0) < (int)local_388._4_4_) {
              uVar26 = (ulonglong)(uint)local_388._4_4_;
            }
            TVar47 = TVar46;
            if (TVar46._0_4_ < TVar55._s_0.X) {
              TVar47 = TVar55;
            }
            TVar55 = (TIntPoint<int>_u_0)(uVar26 << 0x20 | (ulonglong)TVar47 & 0xffffffff);
            if (fVar63 < 0.0) {
              local_3e0 = (TVector2<float>_u_0)
                          Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
              if ((((UClass *)local_3e0)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)
              {
                UClass::InternalCreateDefaultObjectWrapper((UClass *)local_3e0);
              }
              fVar63 = UUserInterfaceSettings::GetDPIScaleBasedOnSize
                                 ((UUserInterfaceSettings *)
                                  (((UClass *)local_3e0)->ClassDefaultObject).field0_0x0.DebugPtr,
                                  (TIntPoint<int>)TVar46._s_0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_3a8);
            TVar47 = TVar59;
            local_3a8 = TVar46;
            local_388 = TVar55;
          }
LAB_146003923:
          pTVar30 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                            *)&local_3e8->WindowToViewportInfo,local_3b0);
          if ((pTVar30 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) &&
             (local_3d8 = *(FDeprecateSlateVector2D *)&pTVar30->field_0x8,
             local_3d8 != (FDeprecateSlateVector2D)0x0)) {
            if (*(float *)local_288 == 0.0) {
              bVar61 = FSlateRenderer::IsViewportFullscreen((FSlateRenderer *)local_3e8,local_3b0);
              ResizeViewportIfNeeded
                        (local_3e8,(FSlateViewportInfo *)local_3d8,
                         (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)local_3d8 + 0xb8))->_s_0,
                         bVar61,local_3b0);
            }
            local_3b0->field_0x3ea =
                 (*(char *)((longlong)local_3d8 + 0xcc) * '\x02' ^ local_3b0->field_0x3ea) & 2U ^
                 local_3b0->field_0x3ea;
            *(undefined4 *)&local_398->BatchData = 0xbf800000;
            local_398 = (local_3e8->ElementBatcher).Ptr;
            if ((*(char *)((longlong)local_3d8 + 0xcc) == '\0') ||
               (bVar61 = CompositeUIWithSceneHDR(), !bVar61)) {
              bVar61 = false;
            }
            else {
              bVar61 = true;
            }
            local_398->bCompositeHDRViewports = bVar61;
            FSlateElementBatcher::AddElements((local_3e8->ElementBatcher).Ptr,local_3a0);
            if ((TVar46._s_0.X == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) &&
               (local_3a8._4_4_ == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
              local_3f0 = None;
              local_3f7 = None;
              pFVar34 = (local_3e8->ElementBatcher).Ptr;
            }
            else {
              pFVar34 = (local_3e8->ElementBatcher).Ptr;
              local_3f0 = pFVar34->UsedSlatePostBuffers;
              local_3f7 = pFVar34->ResourceUpdatingPostBuffers;
            }
            bVar61 = pFVar34->bRequiresVsync;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              pIVar42 = IConsoleManager::Get();
              ::CVar = (IConsoleVariable *)
                       (**(code **)((longlong)*pIVar42 + 0xc0))(pIVar42,L"r.VSync",1);
              _Init_thread_footer(&::_TSS1);
            }
            iVar21 = (**(code **)(*(longlong *)::CVar + 200))();
            FSlateElementBatcher::ResetBatches((local_3e8->ElementBatcher).Ptr);
            ((local_3e8->ElementBatcher).Ptr)->bCompositeHDRViewports = false;
            local_160 = (int)fVar69;
            iStack_15c = (int)fVar70;
            if (local_3f4 == local_3c8._4_4_) {
              local_3f4 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_Private_::__l2::FWindowToRender>_>
                                    (0x850,&local_3d0,(int *)((longlong)&local_3c8 + 4));
            }
            local_3c8 = CONCAT44(local_3c8._4_4_,local_3f4 + 1);
            EVar58 = EVar58 | local_3f0;
            local_3d0.Data[(int)local_3f4].Window = local_3b0;
            local_3d0.Data[(int)local_3f4].WindowElementList = local_3a0;
            local_3d0.Data[(int)local_3f4].ViewportInfo = (FSlateViewportInfo *)local_3d8;
            local_3d0.Data[(int)local_3f4].ViewportOffset.field0_0x0._s_0 =
                 (TIntPoint<int>_u_0_s_0)TVar47;
            local_3d0.Data[(int)local_3f4].ViewportExtent.field0_0x0._s_0 =
                 (TIntPoint<int>_u_0_s_0)TVar46;
            *(TIntPoint<int>_u_0 *)&local_3d0.Data[(int)local_3f4].ViewportRect.field0_0x0 =
                 (TIntPoint<int>_u_0_s_0)TVar59;
            local_3d0.Data[(int)local_3f4].ViewportRect.field0_0x0._s_0.Max.field0_0x0 = TVar53;
            local_3d0.Data[(int)local_3f4].PostProcessCustumDrawBits = local_3f7;
            TVar47._s_0.Y = iStack_15c;
            TVar47._s_0.X = local_160;
            local_3d0.Data[(int)local_3f4].CursorPosition.field0_0x0 = TVar47;
            local_3d0.Data[(int)local_3f4].bLockToVsync = (bool)(bVar61 | iVar21 != 0);
            local_3d0.Data[(int)local_3f4].ViewportScaleUI = fVar63;
            local_3d0.Data[(int)local_3f4].PostProcessUsedBits = local_3f0;
            local_3f4 = local_3f4 + 1;
          }
          pSVar48 = local_390;
          if (bVar18) {
            FCpuProfilerTrace::OutputEndEvent();
            pSVar48 = local_390;
          }
        }
        pSVar48 = (SWindow *)&pSVar48->_padding_;
        uVar26 = (ulonglong)local_3b8;
        param_1 = (FSlateDrawBuffer *)local_3c0;
      }
    }
    uVar57 = (ulong64)local_3f4;
    pUVar52 = local_380;
    this = local_3e8;
    local_3f7 = EVar58;
  }
  FSlateFontCache::UpdateCache(local_298.Object);
  if (bVar17) {
    uVar45 = TVar55._s_0.X;
    if (((uVar45 != 0) && (local_388._4_4_ != 0)) && (local_3f7 != None)) {
      EVar58 = local_3f7;
      do {
        EVar56 = -EVar58 & EVar58;
        pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                  ::FindChecked(&pUVar52[1].field_0x10,EVar56);
        if (pFVar35->bEnabled != 0) {
          pUVar37 = (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr;
          if (pUVar37 == (UTextureRenderTarget2D *)0x0) {
            if (pFVar35->bLoadAttempted) goto LAB_14600410e;
            iVar21 = 0;
            local_258 = pUVar37;
            iStack_250 = iVar21;
            if ((pFVar35->PathToSlatePostRT).Data.ArrayNum == 0) {
              local_2a8 = (FScriptContainerElement *)0x15060d16c;
LAB_146003f0f:
              sVar36 = wcslen((wchar_t *)local_2a8);
              iVar21 = (int)sVar36;
            }
            else {
              local_2a8 = (pFVar35->PathToSlatePostRT).Data.AllocatorInstance.Data;
              if (local_2a8 != (FScriptContainerElement *)0x0) goto LAB_146003f0f;
            }
            iStack_2a0 = iVar21;
            pUVar24 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
            uStack_1f0 = CONCAT44(uStack_24c,iStack_250);
            local_1e8._12_4_ = uStack_29c;
            local_1e8.Size = iStack_2a0;
            local_1f8.DebugPtr = local_258;
            local_1e8.DataPtr = (wchar_t *)local_2a8;
            pUVar37 = (UTextureRenderTarget2D *)
                      StaticLoadObject(pUVar24,(UObject *)0x0,&local_1e8,
                                       (TStringView<wchar_t> *)&local_1f8.ObjectPtr,0,
                                       (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
            if (pUVar37 == (UTextureRenderTarget2D *)0x0) {
              pFVar35->bLoadAttempted = true;
              goto LAB_14600410e;
            }
            this_00 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar37->_padding_ + 4));
            FUObjectItem::SetRootFlags(this_00,RootSet);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar37);
            }
            (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr = pUVar37;
            pFVar35->bLoadAttempted = true;
          }
          pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                    ::FindChecked(&pUVar52[1].field_0x10,EVar56);
          uVar23 = TVar55._s_0.Y;
          uVar50 = uVar45;
          TVar46 = TVar55;
          if (pFVar35->Resolution != Full) {
            if (pFVar35->Resolution == Half) {
              local_358 = 2;
              uStack_354 = 2;
              uVar50 = (int)(uVar45 + 1) / 2;
              uVar23 = (int)(uVar23 + 1) / 2;
              if ((int)uVar23 < 1) {
                uVar23 = 1;
              }
              TVar46 = local_3c0;
              if ((int)uVar50 < 1) {
                uVar50 = 1;
              }
            }
            else {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRendererSettings.cpp"
                                  ,0x80,L"");
              if (bVar17) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
          local_3c0 = TVar46;
          if (((pUVar37->SizeX != uVar50) || (pUVar37->SizeY != uVar23)) ||
             (EVar19 = (**(code **)(pUVar37->_padding_ + 0x3d0))(pUVar37), EVar19 != local_3f8)) {
            if (CpuChannel->Enabled < 0) {
              UTextureRenderTarget2D::InitCustomFormat(pUVar37,uVar50,uVar23,local_3f8,true);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId1289,"AllocatePostProcessTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x509);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1289);
              UTextureRenderTarget2D::InitCustomFormat(pUVar37,uVar50,uVar23,local_3f8,true);
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
          (local_3e8->PostProcessRenderTargets).LastUsedFrameCounter.Elements[EVar56] =
               GFrameCounter;
          this = local_3e8;
        }
LAB_14600410e:
        EVar58 = EVar58 & EVar58 - ESlatePostRT_0;
      } while (EVar58 != None);
      uVar57 = local_3c8 & 0xffffffff;
      local_3f4 = (uint)local_3c8;
    }
    pUVar52 = local_380;
    EVar58 = ~local_3f7 & All;
    if (EVar58 != None) {
      do {
        pFVar35 = TMapBase<enum_ESlatePostRT,FSlatePostSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESlatePostRT,FSlatePostSettings,0>_>
                  ::FindChecked(&pUVar52[1].field_0x10,-EVar58 & EVar58);
        pUVar37 = (pFVar35->CachedSlatePostRT).field0_0x0.DebugPtr;
        if (((pUVar37 != (UTextureRenderTarget2D *)0x0) &&
            (pFVar38 = UTexture::GetResource((UTexture *)pUVar37),
            pFVar38 != (FTextureResource *)0x0)) &&
           ((pUVar37->SizeX != 1 &&
            ((pUVar37->SizeY != 1 &&
             ((this->PostProcessRenderTargets).LastUsedFrameCounter.Elements[-EVar58 & EVar58] <
              GFrameCounter)))))) {
          if (CpuChannel->Enabled < 0) {
            UTextureRenderTarget2D::InitCustomFormat(pUVar37,1,1,PF_A2B10G10R10,true);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId1308,"TrimPostProcessTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x51c);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1308);
            UTextureRenderTarget2D::InitCustomFormat(pUVar37,1,1,PF_A2B10G10R10,true);
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        EVar58 = EVar58 & EVar58 - ESlatePostRT_0;
      } while (EVar58 != None);
      uVar57 = (ulong64)local_3f4;
    }
  }
  pFVar39 = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x20,8);
  if (pFVar39 == (ForElementType<FSlateDrawWindowPassInputs> *)0x0) {
    pFVar39 = (ForElementType<FSlateDrawWindowPassInputs> *)0x0;
  }
  else {
    pFVar39->Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[1].Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[2].Data = (FSlateDrawWindowPassInputs *)0x0;
    pFVar39[3].Data = (FSlateDrawWindowPassInputs *)0x0;
  }
  iVar21 = (int)uVar57;
  local_3a0 = (FSlateWindowElementList *)pFVar39;
  if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar57);
  }
  piVar1 = (int *)((longlong)&pFVar39[1].Data + 4);
  if (*(int *)((longlong)&pFVar39[1].Data + 4) < iVar21) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
              (0x70,8,iVar21,pFVar39,*(int *)&pFVar39[1].Data,piVar1);
  }
  pTVar3 = &this->DeferredUpdateContexts;
  pFVar2 = pFVar39 + 2;
  if ((TArray<FRenderThreadUpdateContext,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *
      )pFVar2 != pTVar3) {
    if (pFVar2->Data != (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar2->Data);
    }
    pFVar2->Data = (FSlateDrawWindowPassInputs *)(pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FRenderThreadUpdateContext *)0x0;
    *(int *)&pFVar39[3].Data = (this->DeferredUpdateContexts).ArrayNum;
    *(int *)((longlong)&pFVar39[3].Data + 4) = (this->DeferredUpdateContexts).ArrayMax;
    (this->DeferredUpdateContexts).ArrayNum = 0;
    (this->DeferredUpdateContexts).ArrayMax = 0;
  }
  dVar15 = dStack_278;
  dVar65 = local_280;
  uVar10 = CONCAT44(fStack_26c,local_270);
  bVar17 = false;
  pFVar49 = local_3d0.Data + iVar21;
  for (ppFVar54 = &(local_3d0.Data)->WindowElementList;
      (FWindowToRender *)(ppFVar54 + -1) != pFVar49; ppFVar54 = ppFVar54 + 10) {
    bVar17 = (bool)(bVar17 | (this->ScreenshotState).ViewportToCapture ==
                             (FSlateViewportInfo *)ppFVar54[1]);
    if (bVar16) {
      local_348 = *ppFVar54;
      pSVar48 = ((FWindowToRender *)(ppFVar54 + -1))->Window;
      local_318 = *(float *)(ppFVar54 + 6);
      local_330 = *(TIntPoint<int>_u_0 *)(ppFVar54 + 7);
      local_328 = (((TIntRect<int> *)(ppFVar54 + 4))->field0_0x0)._s_0.Min.field0_0x0;
      local_320 = *(TIntPoint<int>_u_0 *)(ppFVar54 + 5);
      local_314 = *(ESlatePostRT *)((longlong)ppFVar54 + 0x34);
      local_350 = this;
      local_340 = pSVar48;
      local_338 = (FSlateViewportInfo *)ppFVar54[1];
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pSVar48->Title).Getter,
                 &local_1d0);
      if (((*(int *)&(pSVar48->Title).Getter.field_0x10 == 0) ||
          (plVar43 = *(longlong **)&(pSVar48->Title).Getter.field_0x8, plVar43 == (longlong *)0x0))
         || (cVar20 = (**(code **)(*plVar43 + 0x38))(), cVar20 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1d0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(pSVar48->Title).Getter,local_1b8);
        if (*(int *)&(pSVar48->Title).Getter.field_0x10 == 0) {
          plVar43 = (longlong *)0x0;
        }
        else {
          plVar43 = *(longlong **)&(pSVar48->Title).Getter.field_0x8;
        }
        (**(code **)(*plVar43 + 0x60))(plVar43,&local_268);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_1b8);
        FText::operator=(&(pSVar48->Title).Value,&local_268);
        if (local_268.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
        }
      }
      local_2d0.TextData.Reference = (pSVar48->Title).Value.TextData.Reference;
      if (local_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d0.TextData.Reference + 8))
                  (local_2d0.TextData.Reference,local_2b8);
      }
      local_2d0.Flags = (pSVar48->Title).Value.Flags;
      pFVar40 = FText::ToString(&local_2d0);
      local_310.Data = (FScriptContainerElement *)0x0;
      iVar21 = (pFVar40->Data).ArrayNum;
      _Src = (pFVar40->Data).AllocatorInstance.Data;
      local_308 = CONCAT44(local_308._4_4_,iVar21);
      if (iVar21 == 0) {
        local_308 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar21,0,&local_310,iVar21,(int *)((longlong)&local_308 + 4));
        memcpy(local_310.Data,_Src,(longlong)iVar21 * 2);
      }
      local_2e8 = *(bool *)(ppFVar54 + 8);
      local_300 = dVar65;
      dStack_2f8 = dVar15;
      local_2e7 = false;
      iVar21 = *(int *)&pFVar39[1].Data;
      local_2f0 = uVar10;
      if (iVar21 == *piVar1) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSlateDrawWindowPassInputs>_>
                           (0x870,pFVar39,piVar1);
      }
      *(int *)&pFVar39[1].Data = iVar21 + 1;
      pFVar7 = pFVar39->Data;
      pFVar7[iVar21].Renderer = local_350;
      pFVar7[iVar21].WindowElementList = local_348;
      pFVar7[iVar21].Window = local_340;
      pFVar7[iVar21].ViewportInfo = local_338;
      pFVar7[iVar21].CursorPosition.field0_0x0 = local_330;
      pFVar7[iVar21].SceneViewRect.field0_0x0._s_0.Min.field0_0x0 = local_328;
      pFVar7[iVar21].SceneViewRect.field0_0x0._s_0.Max.field0_0x0 = local_320;
      pFVar7[iVar21].ViewportScaleUI = local_318;
      pFVar7[iVar21].WindowTitle.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar7[iVar21].UsedSlatePostBuffers = local_314;
      pFVar7[iVar21].WindowTitle.Data.AllocatorInstance.Data = local_310.Data;
      pFVar7[iVar21].WindowTitle.Data.ArrayNum = (int)local_308;
      pFVar7[iVar21].WindowTitle.Data.ArrayMax = local_308._4_4_;
      pFVar7[iVar21].Time.RealTimeSeconds = local_300;
      pFVar7[iVar21].Time.WorldTimeSeconds = dStack_2f8;
      pFVar7[iVar21].Time.DeltaRealTimeSeconds = (float)(undefined4)local_2f0;
      pFVar7[iVar21].Time.DeltaWorldTimeSeconds = (float)local_2f0._4_4_;
      pFVar7[iVar21].bLockToVsync = local_2e8;
      pFVar7[iVar21].bClear = local_2e7;
      local_308 = 0;
      local_310.Data = (FScriptContainerElement *)0x0;
      if (local_2d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
      }
      uVar57 = (ulong64)local_3f4;
      this = local_3e8;
    }
  }
  if ((*(int *)&pFVar39[1].Data != 0) || (*(int *)&pFVar39[3].Data != 0)) {
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FSlateRHIRenderer::DrawWindows_Private'::`76'::<lambda_3>,1,0>
                 ::_vftable_;
    local_3a0 = (FSlateWindowElementList *)0x0;
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSlateRHIRenderer::DrawWindows_Private'::__l76::<lambda_3>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_120 = (undefined ***)0x0;
    pFStack_130 = this;
    local_128 = pFVar39;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::DrawWindows_Private_::__l76::TSTR_SlateDrawWindowsCommand1350>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_118._0_8_ = local_148[0];
      local_f0 = local_120;
      local_108 = local_138;
      pFStack_100 = pFStack_130;
      local_f8 = local_128;
      local_148[0] = (code *)0x0;
      local_e8 = 2;
      pFVar41 = (FRenderCommandTag *)
                TRenderCommandTag<`FSlateRHIRenderer::DrawWindows_Private'::__l76::TSTR_SlateDrawWindowsCommand1350>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_118,pFVar41);
      uVar26 = (ulonglong)local_e8;
      if ((2 < uVar26) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          pppuVar44 = (undefined ***)(local_118 + 0x10);
          if (local_f0 != (undefined ***)0x0) {
            pppuVar44 = local_f0;
          }
          (*(code *)(*pppuVar44)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26])(local_118);
      }
    }
    if (local_148[0] != (code *)0x0) {
      pppuVar44 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar44 = local_120;
      }
      (*(code *)(*pppuVar44)[2])();
    }
    if (((this->DeferredUpdateContexts).ArrayNum != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("DeferredUpdateContexts.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                            ,0x54b,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (bVar17) {
    FlushRenderingCommands();
    (this->ScreenshotState).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->ScreenshotState).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (this->ScreenshotState).ViewportToCapture = (FSlateViewportInfo *)0x0;
    (this->ScreenshotState).ColorData = (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0;
    (this->ScreenshotState).ColorDataHDR = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  }
  local_3b8 = (uint)uVar57;
  uVar26 = (ulonglong)(int)local_3b8;
  pFVar34 = (FSlateElementBatcher *)(local_3d0.Data + uVar26);
  TVar55 = (TIntPoint<int>_u_0)local_3d0.Data;
  local_398 = pFVar34;
  while( true ) {
    local_3c0 = TVar55;
    if ((int)uVar57 != (int)uVar26) {
      local_3e9 = 0;
      `TCheckedPointerIterator<`FSlateRHIRenderer::DrawWindows_Private'::__l2::FWindowToRender,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_3e9);
    }
    if (TVar55 == (TIntPoint<int>_u_0)pFVar34) break;
    local_368 = ((FWindowToRender *)TVar55)->Window;
    pFVar8 = ((FWindowToRender *)TVar55)->ViewportInfo;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
               (FWriteAccessScope *)&local_248);
    pSVar48 = local_368;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    bVar16 = false;
    uVar45 = (int)this->_padding_ - 1;
    pFVar60 = this;
    if (-1 < (int)uVar45) {
      lVar51 = (longlong)(int)uVar45 << 4;
      bVar16 = false;
      do {
        uVar50 = 0;
        if ((int)uVar45 < (int)this->_padding_) {
          uVar50 = ~uVar45 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((*(int *)(lVar51 + 8 + this->_padding_) == 0) ||
            (plVar43 = *(longlong **)(lVar51 + this->_padding_), plVar43 == (longlong *)0x0)) ||
           (cVar20 = (**(code **)(*plVar43 + 0x68))(plVar43,pSVar48,&pFVar8->ViewportRHI),
           cVar20 == '\0')) {
          bVar16 = true;
        }
        lVar51 = lVar51 + -0x10;
        uVar45 = uVar45 - 1;
      } while (-1 < (int)uVar45);
      local_3f4 = (uint)local_3c8;
      pFVar34 = local_398;
      TVar55 = local_3c0;
      pFVar60 = local_3e8;
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
    if (bVar16) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
    }
    if (local_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
    }
    uVar57 = (ulong64)local_3f4;
    TVar55._s_0 = TVar55._s_0 + 0x50;
    uVar26 = (ulonglong)local_3b8;
    this = pFVar60;
  }
  FlushPendingDeletes(this);
  FSlateFontCache::ConditionalFlushCache(local_298.Object);
  pFVar5 = local_3a0;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FSlateVectorGraphicsCache::ConditionalFlushCache
            ((((this->ResourceManager).Object)->VectorGraphicsCache).Ptr);
  if (pFVar5 != (FSlateWindowElementList *)0x0) {
    if (((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 0x10))->Data !=
        (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                (((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 0x10))->Data);
    }
    DestructItems<FSlateDrawWindowPassInputs,int>
              (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow,
               *(int *)&((ForElementType<FSlateDrawWindowPassInputs> *)((longlong)pFVar5 + 8))->Data
              );
    if (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow !=
        (FSlateDrawWindowPassInputs *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                (*(FSlateDrawWindowPassInputs **)&pFVar5->WeakPaintWindow);
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar5);
  }
  if (local_3d0.Data != (FWindowToRender *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_3d0.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  FCsvProfiler::EndStat("DrawWindows_Private",local_378);
  return;
}

// DrawWindows_RenderThread @ 146004a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::DrawWindows_RenderThread
          (FSlateRHIRenderer *this,FRHICommandListImmediate *param_1,
          TArrayView<FSlateDrawWindowPassInputs_const_,int> *param_2,
          TArrayView<FRenderThreadUpdateContext_const_,int> *param_3)

{
  FSlateDrawWindowPassInputs *pFVar1;
  code *pcVar2;
  FRHITexture *pFVar3;
  ulonglong uVar4;
  EShaderPlatform EVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  FRDGEventName *pFVar9;
  longlong lVar10;
  FSlateDrawWindowPassOutputs *pFVar11;
  FRDGPass *pFVar12;
  uint uVar13;
  FRenderThreadUpdateContext *pFVar14;
  ForElementType<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_RenderThread(FRHICommandListImmediate_&,TArrayView<FSlateDrawWindowPassInputs_const_,int>,TArrayView<FRenderThreadUpdateContext_const_,int>)_::_2_::FWindowPresentCommand>
  FVar15;
  FRenderThreadUpdateContext *pFVar16;
  uint uVar17;
  FWindowPresentCommand *pFVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStackY_8d8 [32];
  ForElementType<_private:_void___cdecl_FSlateRHIRenderer::DrawWindows_RenderThread(FRHICommandListImmediate_&,TArrayView<FSlateDrawWindowPassInputs_const_,int>,TArrayView<FRenderThreadUpdateContext_const_,int>)_::_2_::FWindowPresentCommand>
  local_8a8;
  undefined8 local_8a0;
  uint local_898;
  TArrayView<FRenderThreadUpdateContext_const_,int> *local_890;
  FRHICommandListImmediate *local_888;
  undefined8 local_880;
  undefined4 uStack_878;
  uint uStack_874;
  FRDGEventName local_870;
  FRDGEventName local_858;
  FSlateDrawWindowPassOutputs local_840;
  FRDGBuilder local_828;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  uVar13 = 0;
  uVar17 = param_2->ArrayNum;
  local_898 = 0;
  local_8a8.Data = (FWindowPresentCommand *)0x0;
  local_8a0 = 0;
  local_890 = param_3;
  local_888 = param_1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  uVar8 = uVar13;
  uVar19 = uVar13;
  if (0 < (int)uVar17) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_RenderThread_::__l2::FWindowPresentCommand>_>
              (0x20,8,uVar17,&local_8a8,0,(int *)((longlong)&local_8a0 + 4));
    uVar8 = (uint)local_8a0;
  }
  do {
    EVar5 = GMaxRHIShaderPlatform;
    pFVar9 = FRDGEventName::FRDGEventName(&local_858,1,L"Slate");
    local_870.EventFormat = pFVar9->EventFormat;
    ::FString::FString(&local_870.FormattedEventName,&pFVar9->FormattedEventName);
    FRDGBuilder::FRDGBuilder(&local_828,param_1,&local_870,ParallelExecute|ParallelSetup,EVar5);
    local_898 = uVar13 & 0xfffffffd;
    if (local_858.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_858.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (((uVar13 & 1) != 0) &&
       (local_898 = uVar13 & 0xfffffffc, local_888 != (FRHICommandListImmediate *)0x0)) {
      FMemory::Free(local_888);
    }
    pFVar14 = local_890->DataPtr;
    pFVar16 = pFVar14 + local_890->ArrayNum;
    for (; pFVar14 != pFVar16; pFVar14 = pFVar14 + 1) {
      (**(code **)(*(longlong *)pFVar14->Renderer + 0x40))(pFVar14->Renderer,&local_828);
    }
    iVar20 = 0;
    do {
      uVar17 = uVar8;
      if (param_2->ArrayNum <= (int)uVar19) break;
      if (((int)uVar19 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = (longlong)(int)uVar19;
      pFVar1 = param_2->DataPtr;
      pFVar11 = DrawWindow_RenderThread(this,&local_840,&local_828,pFVar1 + lVar10);
      if (uVar8 == local_8a0._4_4_) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_RenderThread_::__l2::FWindowPresentCommand>_>
                          (0x820,&local_8a8,(int *)((longlong)&local_8a0 + 4));
      }
      iVar20 = iVar20 + 1;
      uVar19 = uVar19 + 1;
      uVar17 = uVar8 + 1;
      local_8a0 = CONCAT44(local_8a0._4_4_,uVar17);
      local_8a8.Data[(int)uVar8].Inputs = pFVar1 + lVar10;
      pFVar3 = pFVar11->ViewportTextureRHI;
      local_8a8.Data[(int)uVar8].Outputs.ViewportRHI = pFVar11->ViewportRHI;
      local_8a8.Data[(int)uVar8].Outputs.ViewportTextureRHI = pFVar3;
      local_8a8.Data[(int)uVar8].Outputs.OutputTextureRHI = pFVar11->OutputTextureRHI;
      uVar8 = uVar17;
    } while (iVar20 < 8);
    bVar7 = FRDGBuilder::IsImmediateMode();
    if (bVar7) {
      FRHICommandListImmediate::ImmediateFlush
                ((FRHICommandListImmediate *)local_828._padding_,DispatchToRHIThread,None);
    }
    else if (0 < local_828.Passes.Array.ArrayNum) {
      pFVar12 = TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::operator[]
                          (&local_828.Passes,
                           (TRDGHandle<FRDGPass,unsigned_int>)(local_828.Passes.Array.ArrayNum - 1))
      ;
      (pFVar12->field9_0x54).PackedBits = (pFVar12->field9_0x54).PackedBits | 0x100;
    }
    FRDGBuilder::Execute(&local_828);
    FRDGBuilder::~FRDGBuilder(&local_828);
    pFVar14 = local_890->DataPtr;
    pFVar16 = pFVar14 + local_890->ArrayNum;
    FVar15.Data = local_8a8.Data;
    param_1 = local_888;
    for (; local_8a8.Data = FVar15.Data, local_888 = param_1, pFVar14 != pFVar16;
        pFVar14 = pFVar14 + 1) {
      (**(code **)(*(longlong *)pFVar14->Renderer + 0x28))
                (pFVar14->Renderer,pFVar14->WindowDrawBuffer);
      FVar15.Data = local_8a8.Data;
      param_1 = local_888;
    }
    pFVar18 = FVar15.Data + (int)uVar17;
    for (; uVar6 = local_8a0, FVar15.Data != pFVar18; FVar15.Data = FVar15.Data + 1) {
      PresentWindow_RenderThread(this,param_1,(FVar15.Data)->Inputs,&(FVar15.Data)->Outputs);
    }
    uVar4 = local_8a0 >> 0x20;
    local_8a0 = local_8a0 & 0xffffffff00000000;
    uVar8 = 0;
    if (((longlong)uVar6 < 0) && ((int)uVar4 != 0)) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSlateRHIRenderer::DrawWindows_RenderThread_::__l2::FWindowPresentCommand>_>
                (0x20,8,0,&local_8a8,0,(int *)((longlong)&local_8a0 + 4));
      uVar8 = (uint)local_8a0;
    }
    local_880 = 0;
    uStack_878 = 0;
    local_890->DataPtr = (FRenderThreadUpdateContext *)0x0;
    *(ulonglong *)&local_890->ArrayNum = (ulonglong)uStack_874 << 0x20;
    uVar13 = local_898;
    if (param_2->ArrayNum <= (int)uVar19) {
      if (local_8a8.Data != (FWindowPresentCommand *)0x0) {
        TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_8a8.Data);
      }
      return;
    }
  } while( true );
}

// EndFrame @ 146005280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::EndFrame(FSlateRHIRenderer *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = `FSlateRHIRenderer::EndFrame'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateRHIRenderer::EndFrame_::__l2::TSTR_SlateRHIEndFrame1462>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlateRHIRenderer::EndFrame'::__l2::TSTR_SlateRHIEndFrame1462>::Get
                       ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// FlushCommands @ 146009290

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::FlushCommands(FSlateRHIRenderer *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (!bVar1) {
    bVar1 = IsInSlateThread();
    if (!bVar1) {
      return;
    }
  }
  FlushRenderingCommands();
  return;
}

// FlushPendingDeletes @ 1460092c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::FlushPendingDeletes(FSlateRHIRenderer *this)

{
  TArray<FSlateCachedElementData_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar1
  ;
  <unnamed_type_PendingDeletes> *p<Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  FLowLevelMemTracker *pFVar11;
  FPageAllocator *pFVar12;
  code **ppcVar13;
  FWindowsRecursiveMutex *lpCriticalSection;
  FSlateCachedFastPathRenderingData **ppFVar14;
  int *piVar15;
  FSlateCachedElementData **ppFVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  longlong local_d0 [2];
  longlong local_c0 [3];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lpCriticalSection = &((this->ResourceManager).Object)->ResourceCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->PendingDeletes).CachedFastPathRenderingData.ArrayNum != 0) ||
     ((this->PendingDeletes).CachedElementData.ArrayNum != 0)) {
    p<Var2 = &this->PendingDeletes;
    ppFVar14 = (p<Var2->CachedFastPathRenderingData).AllocatorInstance.Data;
    (p<Var2->CachedFastPathRenderingData).AllocatorInstance.Data =
         (FSlateCachedFastPathRenderingData **)0x0;
    iVar3 = (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum;
    local_a8[0] = (code *)0x0;
    iVar4 = (this->PendingDeletes).CachedFastPathRenderingData.ArrayMax;
    (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum = 0;
    (this->PendingDeletes).CachedFastPathRenderingData.ArrayMax = 0;
    ppFVar16 = (this->PendingDeletes).CachedElementData.AllocatorInstance.Data;
    (this->PendingDeletes).CachedElementData.AllocatorInstance.Data =
         (FSlateCachedElementData **)0x0;
    iVar5 = (this->PendingDeletes).CachedElementData.ArrayNum;
    iVar6 = (this->PendingDeletes).CachedElementData.ArrayMax;
    (this->PendingDeletes).CachedElementData.ArrayNum = 0;
    (this->PendingDeletes).CachedElementData.ArrayMax = 0;
    local_80 = FMemory::Malloc(0x28,8);
    local_80[1] = (code *)ppFVar14;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSlateRHIRenderer::FlushPendingDeletes'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    *(int *)(local_80 + 2) = iVar3;
    *(int *)((longlong)local_80 + 0x14) = iVar4;
    local_80[3] = (code *)ppFVar16;
    *(int *)(local_80 + 4) = iVar5;
    *(int *)((longlong)local_80 + 0x24) = iVar6;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateRHIRenderer::FlushPendingDeletes'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::FlushPendingDeletes_::__l5::TSTR_SlateDeferredDelete1638>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`FSlateRHIRenderer::FlushPendingDeletes'::__l5::TSTR_SlateDeferredDelete1638>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar10);
      uVar17 = (ulonglong)local_48;
      if ((2 < uVar17) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar13 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar13 = local_50;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar13 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar13 = local_80;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
    if (p<Var2 != (<unnamed_type_PendingDeletes> *)local_d0) {
      ppFVar14 = (p<Var2->CachedFastPathRenderingData).AllocatorInstance.Data;
      if (ppFVar14 != (FSlateCachedFastPathRenderingData **)0x0) {
        ppFVar14 = ppFVar14 + -1;
        MemoryTrace_Free((ulong64)ppFVar14,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar11 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar11 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(pFVar11,Default,ppFVar14,FMalloc,true);
        }
        piVar15 = (int *)((longlong)ppFVar14 - (ulonglong)*(uint *)ppFVar14);
        LOCK();
        iVar3 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          lVar7 = *(longlong *)(piVar15 + 0x10);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar15,0,0);
          if (lVar7 - (longlong)piVar15 == 0x10000) {
            pFVar12 = FPageAllocator::Get();
            FPageAllocator::Free(pFVar12,piVar15);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
          }
        }
      }
      (p<Var2->CachedFastPathRenderingData).AllocatorInstance.Data =
           (FSlateCachedFastPathRenderingData **)0x0;
      (this->PendingDeletes).CachedFastPathRenderingData.ArrayNum = 0;
      (this->PendingDeletes).CachedFastPathRenderingData.ArrayMax = 0;
    }
    pTVar1 = &(this->PendingDeletes).CachedElementData;
    if (pTVar1 != (TArray<FSlateCachedElementData_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   *)local_c0) {
      ppFVar16 = (pTVar1->AllocatorInstance).Data;
      if (ppFVar16 != (FSlateCachedElementData **)0x0) {
        ppFVar16 = ppFVar16 + -1;
        MemoryTrace_Free((ulong64)ppFVar16,0,0);
        if (FLowLevelMemTracker::EnabledState != Disabled) {
          pFVar11 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            pFVar11 = FLowLevelMemTracker::Construct();
          }
          FLowLevelMemTracker::OnLowLevelFree(pFVar11,Default,ppFVar16,FMalloc,true);
        }
        piVar15 = (int *)((longlong)ppFVar16 - (ulonglong)*(uint *)ppFVar16);
        LOCK();
        iVar3 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          lVar7 = *(longlong *)(piVar15 + 0x10);
          MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar15,0,0);
          if (lVar7 - (longlong)piVar15 == 0x10000) {
            pFVar12 = FPageAllocator::Get();
            FPageAllocator::Free(pFVar12,piVar15);
          }
          else {
            (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar15);
          }
        }
      }
      (pTVar1->AllocatorInstance).Data = (FSlateCachedElementData **)0x0;
      (this->PendingDeletes).CachedElementData.ArrayNum = 0;
      (this->PendingDeletes).CachedElementData.ArrayMax = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GenerateDynamicImageResource @ 1460096b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TIntPoint<int> __thiscall
FSlateRHIRenderer::GenerateDynamicImageResource(FSlateRHIRenderer *this,FName param_1)

{
  FSlateRHIResourceManager *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  TIntPoint<int> TVar7;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar8;
  FString *pFVar9;
  FSlateTextureData *this_00;
  FSlateDynamicTextureResource *pFVar10;
  FName in_R8;
  TIntPoint<int>_u_0 TVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  FName local_res18;
  TIntPoint<int>_u_0 local_res20;
  FSlateDynamicTextureResource *pFVar12;
  FSharedReferencer<1> FStack_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FSlateDynamicTextureResource,1> local_78;
  FString local_68;
  TSharedRef<FSlateTextureData,1> local_58;
  TSharedRef<FSlateTextureData,1> local_48;
  
  local_res18 = in_R8;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x560,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  TVar11 = (TIntPoint<int>_u_0)0x0;
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  pTVar8 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                   *)&((this->ResourceManager).Object)->DynamicResourceMap,local_res18);
  if (pTVar8 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
    pFVar10 = (FSlateDynamicTextureResource *)0x0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar10 = *(FSlateDynamicTextureResource **)&pTVar8->field_0x8;
    FStack_90.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar8->field_0x10;
    if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = pFVar10 == (FSlateDynamicTextureResource *)0x0;
    if (!bVar5) goto LAB_14600992d;
  }
  pFVar12 = pFVar10;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  pFVar1 = (this->ResourceManager).Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  pFVar9 = ::FName::ToString(&local_res18,&local_68);
  cVar6 = (*pcVar2)(pFVar1,&local_res18,pFVar9,local_res10,local_res8,&local_88,pFVar12);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (cVar6 != '\0') {
    if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar7.field0_0x0;
    }
    uVar4 = local_res10[0];
    uVar3 = local_res8[0];
    pFVar1 = (this->ResourceManager).Object;
    this_00 = ::operator_new(0x20);
    local_res20 = TVar11;
    if (this_00 != (FSlateTextureData *)0x0) {
      local_res20 = (TIntPoint<int>_u_0)
                    FSlateTextureData::FSlateTextureData
                              (this_00,uVar4,uVar3,GPixelFormats[2].BlockBytes,&local_88);
    }
    TSharedRef<FSlateTextureData,1>::TSharedRef<FSlateTextureData,1><FSlateTextureData>
              (&local_58,(TRawPtrProxy<FSlateTextureData> *)&local_res20._s_0);
    local_48.Object = local_58.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateRHIResourceManager::MakeDynamicTextureResource(pFVar1,&local_78,local_res18,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    pFVar10 = local_78.Object;
    local_78.Object = (FSlateDynamicTextureResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FStack_90,&local_78.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  bVar5 = pFVar10 == (FSlateDynamicTextureResource *)0x0;
LAB_14600992d:
  if (pFVar10 != (FSlateDynamicTextureResource *)0x0) {
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar7.field0_0x0;
    }
    TVar11 = (pFVar10->Proxy->ActualSize).field0_0x0;
  }
  *(TIntPoint<int>_u_0 *)param_1 = TVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return (TIntPoint<int>)param_1;
}

// GenerateDynamicImageResource @ 1460099c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateRHIRenderer::GenerateDynamicImageResource
          (FSlateRHIRenderer *this,FName param_1,uint param_2,uint param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar4;
  TSharedPtr<FSlateDynamicTextureResource,1> *pTVar5;
  FSlateDynamicTextureResource *pFVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FSlateDynamicTextureResource,1> local_38;
  TSharedPtr<FSlateDynamicTextureResource,1> local_28;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x576,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar4 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                   *)&((this->ResourceManager).Object)->DynamicResourceMap,param_1);
  if (pTVar4 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
    local_38.Object = (FSlateDynamicTextureResource *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FVar7.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    pFVar6 = *(FSlateDynamicTextureResource **)&pTVar4->field_0x8;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar6;
    local_38.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
    if (pFVar6 != (FSlateDynamicTextureResource *)0x0) goto LAB_146009b3d;
  }
  FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  pFVar6 = local_38.Object;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar5 = FSlateRHIResourceManager::MakeDynamicTextureResource
                     ((this->ResourceManager).Object,&local_28,param_1,param_2,param_3,param_4);
  if (&local_38 != pTVar5) {
    local_38.Object = pTVar5->Object;
    pTVar5->Object = (FSlateDynamicTextureResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_38.SharedReferenceCount,&pTVar5->SharedReferenceCount);
    pFVar6 = local_38.Object;
    FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_146009b3d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return pFVar6 != (FSlateDynamicTextureResource *)0x0;
}

// GenerateDynamicImageResource @ 146009b70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateRHIRenderer::GenerateDynamicImageResource
          (FSlateRHIRenderer *this,FName param_1,TSharedRef<FSlateTextureData,1> *param_2)

{
  FSlateRHIResourceManager *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar4;
  TSharedPtr<FSlateDynamicTextureResource,1> *pTVar5;
  FSlateDynamicTextureResource *pFVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FSlateDynamicTextureResource,1> local_38;
  TSharedRef<FSlateTextureData,1> local_28;
  TSharedPtr<FSlateDynamicTextureResource,1> local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x582,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar4 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                   *)&((this->ResourceManager).Object)->DynamicResourceMap,param_1);
  if (pTVar4 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
    local_38.Object = (FSlateDynamicTextureResource *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FVar7.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar4->field_0x10;
    pFVar6 = *(FSlateDynamicTextureResource **)&pTVar4->field_0x8;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar6;
    local_38.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
    if (pFVar6 != (FSlateDynamicTextureResource *)0x0) goto LAB_146009cf5;
  }
  FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  pFVar6 = local_38.Object;
  if (((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_28.Object = param_2->Object;
  this_00 = (this->ResourceManager).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = FSlateRHIResourceManager::MakeDynamicTextureResource(this_00,&local_18,param_1,&local_28)
  ;
  if (&local_38 != pTVar5) {
    local_38.Object = pTVar5->Object;
    pTVar5->Object = (FSlateDynamicTextureResource *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_38.SharedReferenceCount,&pTVar5->SharedReferenceCount);
    pFVar6 = local_38.Object;
    FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_146009cf5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return pFVar6 != (FSlateDynamicTextureResource *)0x0;
}

// GetCurrentSceneIndex @ 14600c700

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall FSlateRHIRenderer::GetCurrentSceneIndex(FSlateRHIRenderer *this)

{
  return this->CurrentSceneIndex;
}

// GetResourceCriticalSection @ 14600db90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FWindowsRecursiveMutex * __thiscall
FSlateRHIRenderer::GetResourceCriticalSection(FSlateRHIRenderer *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRecursiveMutex *pFVar3;
  
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWindowsRecursiveMutex *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->ResourceManager).Object)->ResourceCriticalSection;
}

// GetResourceHandle @ 14600dbe0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateResourceHandle * __thiscall
FSlateRHIRenderer::GetResourceHandle
          (FSlateRHIRenderer *this,FSlateResourceHandle *__return_storage_ptr__,FSlateBrush *param_1
          ,TVector2<float> param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FSlateResourceHandle *pFVar3;
  longlong *plVar4;
  
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateResourceHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  plVar4 = &((this->ResourceManager).Object)->_padding_;
  (**(code **)(*plVar4 + 0x18))(plVar4,__return_storage_ptr__,param_1,param_2.field0_0x0,param_3);
  return __return_storage_ptr__;
}

// GetSlateRecommendedColorFormat @ 14600ef00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EPixelFormat __thiscall FSlateRHIRenderer::GetSlateRecommendedColorFormat(FSlateRHIRenderer *this)

{
  EPixelFormat EVar1;
  
  EVar1 = PF_B8G8R8A8;
  if (this->bIsStandaloneStereoOnlyDevice != false) {
    EVar1 = PF_R8G8B8A8;
  }
  return EVar1;
}

// GetTextureAtlasProvider @ 146017570

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ISlateAtlasProvider * __thiscall FSlateRHIRenderer::GetTextureAtlasProvider(FSlateRHIRenderer *this)

{
  FSlateRHIResourceManager *pFVar1;
  ISlateAtlasProvider *pIVar2;
  
  pFVar1 = (this->ResourceManager).Object;
  if (pFVar1 != (FSlateRHIResourceManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146017584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (ISlateAtlasProvider *)(**(code **)(pFVar1->_padding_ + 0x28))(&pFVar1->_padding_);
    return pIVar2;
  }
  return (ISlateAtlasProvider *)0x0;
}

// GetViewportPixelFormat @ 146019920

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EPixelFormat __thiscall
FSlateRHIRenderer::GetViewportPixelFormat(FSlateRHIRenderer *this,SWindow *param_1,bool param_2)

{
  if (param_2) {
    return GRHIGlobals.HDRDisplayOutputFormat;
  }
  return -(this->bIsStandaloneStereoOnlyDevice != false) & PF_R8G8B8A8;
}

// GetViewportResource @ 146019950

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FSlateRHIRenderer::GetViewportResource(FSlateRHIRenderer *this,SWindow *param_1)

{
  FRHIViewport *pFVar1;
  longlong lVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar5;
  void *pvVar6;
  TRefCountPtr<FRHIViewport> TVar7;
  longlong *plVar8;
  FRHIResource *local_res8;
  
  pTVar5 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_1);
  plVar8 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    lVar2 = *plVar8;
    pFVar1 = (FRHIViewport *)(lVar2 + 0x20);
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      if ((0x4000 < *(int *)(lVar2 + 0xb0)) || (0x4000 < *(int *)(lVar2 + 0xb4))) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ViewportInfo->Extent.X <= 16384 && ViewportInfo->Extent.Y <= 16384",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                           ,0x5e3,L"Invalid window with Width=%u and Height=%u");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar6 = (void *)(*pcVar3)();
          return pvVar6;
        }
      }
      bVar4 = FSlateRenderer::IsViewportFullscreen((FSlateRenderer *)this,param_1);
      TVar7 = RHICreateViewport(&local_res8,(uint)*(undefined8 *)(lVar2 + 0x28),
                                *(uint *)(lVar2 + 0xb0),SUB41(*(undefined4 *)(lVar2 + 0xb4),0),bVar4
                               );
      if (pFVar1 != TVar7.Reference) {
        this_00 = *(FRHIResource **)pFVar1;
        *(undefined8 *)pFVar1 = *(undefined8 *)TVar7.Reference;
        *(undefined8 *)TVar7.Reference = 0;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
    }
    return (void *)(lVar2 + 0x20);
  }
  return (void *)0x0;
}

// Initialize @ 14601a2e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateRHIRenderer::Initialize(FSlateRHIRenderer *this)

{
  int *piVar1;
  TUniquePtr<FSlateElementBatcher,TDefaultDelete<FSlateElementBatcher>_> *pTVar2;
  FSlateRHIResourceManager *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FSlateRHIRenderingPolicy *pFVar7;
  TSharedRef<FSlateRHIResourceManager,1> *pTVar8;
  TSharedRef<FSlateFontServices,1> *pTVar9;
  FSlateElementBatcher *pFVar10;
  FSlateElementBatcher *this_01;
  TRawPtrProxy<FSlateRHIRenderingPolicy> local_res8;
  undefined8 local_68;
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_60;
  TSharedRef<FSlateRenderingPolicy,1> local_50;
  TSharedRef<FSlateRHIResourceManager,1> local_40;
  TSharedRef<FSlateFontServices,1> local_30;
  
  this_01 = (FSlateElementBatcher *)0x0;
  this_00 = (this->ResourceManager).Object;
  if (this_00 != (FSlateRHIResourceManager *)0x0) {
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    FSlateStyleRegistry::GetAllResources(&local_60);
    FSlateRHIResourceManager::CreateTextures(this_00,&local_60);
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
  }
  pFVar7 = ::operator_new(0x30);
  local_res8.Object = (FSlateRHIRenderingPolicy *)this_01;
  if (pFVar7 != (FSlateRHIRenderingPolicy *)0x0) {
    pTVar8 = TSharedPtr<FSlateRHIResourceManager,1>::ToSharedRef(&this->ResourceManager,&local_40);
    pTVar9 = TSharedPtr<FSlateFontServices,1>::ToSharedRef
                       ((TSharedPtr<FSlateFontServices,1> *)&this->_padding_,&local_30);
    local_res8.Object = FSlateRHIRenderingPolicy::FSlateRHIRenderingPolicy(pFVar7,pTVar9,pTVar8);
  }
  TSharedPtr<FSlateRHIRenderingPolicy,1>::operator=<FSlateRHIRenderingPolicy>
            (&this->RenderingPolicy,&local_res8);
  if (((this->RenderingPolicy).Object == (FSlateRHIRenderingPolicy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar3 = (this->RenderingPolicy).SharedReferenceCount.ReferenceController;
  pFVar7 = (this->RenderingPolicy).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar7 == (FSlateRHIRenderingPolicy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar10 = ::operator_new(0x58);
  if (pFVar10 != (FSlateElementBatcher *)0x0) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50.Object = (FSlateRenderingPolicy *)pFVar7;
    local_50.SharedReferenceCount.ReferenceController = pTVar3;
    this_01 = FSlateElementBatcher::FSlateElementBatcher(pFVar10,&local_50);
  }
  pTVar2 = &this->ElementBatcher;
  if (pTVar2 == (TUniquePtr<FSlateElementBatcher,TDefaultDelete<FSlateElementBatcher>_> *)&local_68)
  {
    if (this_01 == (FSlateElementBatcher *)0x0) goto LAB_14601a499;
    FSlateElementBatcher::~FSlateElementBatcher(this_01);
  }
  else {
    pFVar10 = pTVar2->Ptr;
    pTVar2->Ptr = this_01;
    if (pFVar10 == (FSlateElementBatcher *)0x0) goto LAB_14601a499;
    FSlateElementBatcher::~FSlateElementBatcher(pFVar10);
    this_01 = pFVar10;
  }
  ::operator_delete(this_01,0x58);
LAB_14601a499:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  piVar1 = &(this->ActiveScenes).ArrayMax;
  this->CurrentSceneIndex = -1;
  (this->ActiveScenes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
              (8,8,0,&(this->ActiveScenes).AllocatorInstance,0,piVar1);
  }
  return true;
}

// InvalidateAllViewports @ 14601b470

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::InvalidateAllViewports(FSlateRHIRenderer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->WindowToViewportInfo).field_0x10;
  iVar3 = *(int *)&(this->WindowToViewportInfo).field_0x28;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar11;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14601b51d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14601b51d:
  uVar10 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->WindowToViewportInfo).field_0x8 -
                       *(int *)&(this->WindowToViewportInfo).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->WindowToViewportInfo).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->WindowToViewportInfo).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14601b620;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14601b620:
  while( true ) {
    if (*(int *)&(this->WindowToViewportInfo).field_0x8 -
        *(int *)&(this->WindowToViewportInfo).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,FSlateViewportInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = *(longlong *)
             (*(longlong *)&this->WindowToViewportInfo + 8 +
             (longlong)TStack_60.CurrentBitIndex * 0x18);
    this_00 = *(FRHIResource **)(lVar8 + 0x20);
    if (this_00 != (FRHIResource *)0x0) {
      *(undefined8 *)(lVar8 + 0x20) = 0;
      FRHIResource::Release(this_00);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// LoadStyleResources @ 14601b9c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::LoadStyleResources(FSlateRHIRenderer *this,ISlateStyle *param_1)

{
  FSlateRHIResourceManager *this_00;
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = (this->ResourceManager).Object;
  if (this_00 != (FSlateRHIResourceManager *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_18);
    FSlateRHIResourceManager::CreateTextures(this_00,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// LoadUsedTextures @ 14601bf50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::LoadUsedTextures(FSlateRHIRenderer *this)

{
  FSlateRHIResourceManager *this_00;
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = (this->ResourceManager).Object;
  if (this_00 != (FSlateRHIResourceManager *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    FSlateStyleRegistry::GetAllResources(&local_18);
    FSlateRHIResourceManager::CreateTextures(this_00,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// OnVirtualDesktopSizeChanged @ 14601d7f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::OnVirtualDesktopSizeChanged(FSlateRHIRenderer *this,FDisplayMetrics *param_1)

{
  this->bUpdateHDRDisplayInformation = true;
  return;
}

// OnWindowDestroyed @ 14601d800

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::OnWindowDestroyed(FSlateRHIRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  FRenderResource *pFVar1;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar2;
  uint uVar3;
  undefined8 *puVar4;
  SWindow *local_res8;
  
  pTVar2 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_1->Object);
  puVar4 = (undefined8 *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    pFVar1 = (FRenderResource *)*puVar4;
    TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
               &this->_padding_,pFVar1 + 1);
    FlushRenderingCommands();
    BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
    FlushRenderingCommands();
    if (pFVar1 != (FRenderResource *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    local_res8 = param_1->Object;
    if (*(int *)&(this->WindowToViewportInfo).field_0x8 !=
        *(int *)&(this->WindowToViewportInfo).field_0x34) {
      uVar3 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4))
              * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<SWindow_const_*>
                ((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                  *)&this->WindowToViewportInfo,uVar3 >> 0x10 ^ uVar3,&local_res8);
    }
  }
  return;
}

// OnWindowFinishReshaped @ 14601d8e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::OnWindowFinishReshaped(FSlateRHIRenderer *this,TSharedPtr<SWindow,1> *param_1)

{
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar1;
  longlong lVar2;
  
  pTVar1 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_1->Object);
  if (pTVar1 == (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)&pTVar1->field_0x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014601d912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x328))(GDynamicRHI,*(undefined8 *)(lVar2 + 0x20));
  return;
}

// PrepareToTakeHDRScreenshot @ 14601ded0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::PrepareToTakeHDRScreenshot
          (FSlateRHIRenderer *this,TIntRect<int> *param_1,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_2,SWindow *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar3;
  FSlateViewportInfo *pFVar4;
  
  if (param_2 == (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutColorData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x41a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->field0_0x0)._s_0.Min.field0_0x0;
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->field0_0x0)._s_0.Max.field0_0x0;
  pTVar3 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_3);
  pFVar4 = (FSlateViewportInfo *)0x0;
  if (pTVar3 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) {
    pFVar4 = *(FSlateViewportInfo **)&pTVar3->field_0x8;
  }
  (this->ScreenshotState).ViewportToCapture = pFVar4;
  (this->ScreenshotState).ColorData = (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ScreenshotState).ColorDataHDR = param_2;
  return;
}

// PrepareToTakeScreenshot @ 14601df80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::PrepareToTakeScreenshot
          (FSlateRHIRenderer *this,TIntRect<int> *param_1,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_2,SWindow *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar3;
  FSlateViewportInfo *pFVar4;
  
  if (param_2 == (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutColorData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x410,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->field0_0x0)._s_0.Min.field0_0x0;
  (this->ScreenshotState).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->field0_0x0)._s_0.Max.field0_0x0;
  pTVar3 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_3);
  pFVar4 = (FSlateViewportInfo *)0x0;
  if (pTVar3 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) {
    pFVar4 = *(FSlateViewportInfo **)&pTVar3->field_0x8;
  }
  (this->ScreenshotState).ViewportToCapture = pFVar4;
  (this->ScreenshotState).ColorData = param_2;
  (this->ScreenshotState).ColorDataHDR = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0;
  return;
}

// PresentWindow_RenderThread @ 14601e030

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::PresentWindow_RenderThread
          (FSlateRHIRenderer *this,FRHICommandListImmediate *param_1,
          FSlateDrawWindowPassInputs *param_2,FSlateDrawWindowPassOutputs *param_3)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  ulong64 uVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  undefined8 *puVar13;
  FRHITransitionInfo_u_8 FVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_PresentTime> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_RenderThreadSleepTime> FVar21;
  FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUQuery> FVar22;
  FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUPresent> FVar23;
  FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime> FVar24;
  FThreadSafeStaticStat<FStat_STAT_RenderThreadCriticalPath> FVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  uchar auVar31 [8];
  uchar auVar32 [8];
  uchar auVar33 [8];
  uchar auVar34 [8];
  uint uVar30;
  uchar auVar35 [8];
  undefined1 local_res8 [8];
  undefined1 local_1d8 [8];
  FRHITexture *local_1d0;
  LARGE_INTEGER local_1c8 [2];
  FRHITransitionInfo *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  LARGE_INTEGER local_1a8;
  FName local_1a0;
  LARGE_INTEGER local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FStatMessage local_168;
  FStatMessage local_158;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FStatMessage local_118;
  FRHITransitionInfo local_108;
  FRHITransitionInfo local_d8;
  code *local_a8;
  undefined1 *local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  TArrayView<FRHITransitionInfo_const_,int> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58 [2];
  
  this_00 = &this->_padding_;
  local_1d0 = param_3->OutputTextureRHI;
  if (local_1d0 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_1d0);
  }
  if ((this_00 == (longlong *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar10 = false;
  uVar26 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar26) {
    lVar27 = (longlong)(int)uVar26 << 4;
    bVar10 = false;
    do {
      uVar29 = 0;
      if ((int)uVar26 < (int)this->_padding_) {
        uVar29 = ~uVar26 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(int *)(lVar27 + 8 + this->_padding_) == 0) ||
          (plVar4 = *(longlong **)(lVar27 + this->_padding_), plVar4 == (longlong *)0x0)) ||
         (cVar12 = (**(code **)(*plVar4 + 0x68))(), cVar12 == '\0')) {
        bVar10 = true;
      }
      lVar27 = lVar27 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar10) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (local_1d0 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1d0);
  }
  QueryPerformanceCounter(&local_1a8);
  uVar8 = GFrameCounterRenderThread;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar13[2] = uVar8;
    puVar13[3] = L"TRHILambdaCommand";
  }
  else {
    UEngine::SetPresentLatencyMarkerStart(GFrameCounterRenderThread);
  }
  if (GRHIGlobals.NeedsExtraTransitions != false) {
    local_108.field1_0x8 = (FRHITransitionInfo_u_8)param_3->OutputTextureRHI;
    local_1b8 = &local_108;
    uStack_1b0 = 1;
    local_68._12_4_ = uStack_1ac;
    local_68.ArrayNum = 1;
    local_108._padding_._0_4_ = 0xffffffff;
    local_108._padding_._4_2_ = 0xffff;
    local_108.Type = Texture;
    local_108.AccessBefore = None;
    local_108.AccessAfter = Present;
    local_108.Flags = None;
    local_108.CommitInfo.bIsSet = false;
    local_68.DataPtr = local_1b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_68,None);
    FVar14.Resource =
         (FRHIResource *)
         (**(code **)(*(longlong *)param_3->ViewportRHI + 0x40))
                   (param_3->ViewportRHI,param_3->OutputTextureRHI);
    if (FVar14.Resource != (FRHIResource *)0x0) {
      local_1b8 = &local_d8;
      uStack_1b0 = 1;
      local_58[0]._12_4_ = uStack_1ac;
      local_58[0].ArrayNum = 1;
      local_d8._padding_._0_4_ = 0xffffffff;
      local_d8._padding_._4_2_ = 0xffff;
      local_d8.Type = Texture;
      local_d8.AccessBefore = None;
      local_d8.AccessAfter = Present;
      local_d8.Flags = None;
      local_d8.CommitInfo.bIsSet = false;
      local_d8.field1_0x8.Resource = FVar14.Resource;
      local_58[0].DataPtr = local_1b8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,local_58,None);
    }
  }
  FRHICommandListImmediate::EndDrawingViewport
            (param_1,param_3->ViewportRHI,true,param_2->bLockToVsync);
  uVar8 = GFrameCounterRenderThread;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar13[2] = uVar8;
    puVar13[3] = L"TRHILambdaCommand";
  }
  else {
    UEngine::SetPresentLatencyMarkerEnd(GFrameCounterRenderThread);
  }
  QueryPerformanceCounter(local_1c8);
  GSwapBufferTime = local_1c8[0].s.LowPart - local_1a8._0_4_;
  if (FThreadStats::bPrimaryEnable != false) {
    auVar31[4] = '\0';
    auVar31[5] = '\0';
    auVar31[6] = '\0';
    auVar31[7] = '\0';
    auVar31._0_4_ = GSwapBufferTime;
    FVar16 = StatPtr_STAT_PresentTime;
    if (StatPtr_STAT_PresentTime == (FThreadSafeStaticStat<FStat_STAT_PresentTime>)0x0) {
      pFVar15 = ::FName::FName(&local_98,"STAT_PresentTime");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_PresentTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PresentTime,*pFVar15,
                          L"Present time","STATGROUP_SceneRendering","STATCAT_Advanced",
                          L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar16;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_168.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
      local_1a0 = FVar5;
      local_168.StatData.Pad = auVar31;
      local_168.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_168);
      FStatsTrace::Set(&local_1a0,(long64)auVar31);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    QueryPerformanceCounter(&local_198);
    LastTimestamp = local_198.s.LowPart;
    _Init_thread_footer(&::_TSS0);
  }
  uVar26 = local_1c8[0].s.LowPart - LastTimestamp;
  LastTimestamp = local_1c8[0].s.LowPart;
  puVar19 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
  local_a0 = local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar19);
  GRenderThreadIdle[0] = *(uint *)(pFVar20 + 2);
  GRenderThreadIdle[2] = GRenderThreadIdle[2] + GSwapBufferTime;
  if (FThreadStats::bPrimaryEnable != false) {
    auVar32[4] = '\0';
    auVar32[5] = '\0';
    auVar32[6] = '\0';
    auVar32[7] = '\0';
    auVar32[0] = (char)GRenderThreadIdle[0];
    auVar32[1] = (char)(GRenderThreadIdle[0] >> 8);
    auVar32[2] = (char)(GRenderThreadIdle[0] >> 0x10);
    auVar32[3] = (char)(GRenderThreadIdle[0] >> 0x18);
    FVar21 = StatPtr_STAT_RenderingIdleTime_RenderThreadSleepTime;
    if (StatPtr_STAT_RenderingIdleTime_RenderThreadSleepTime ==
        (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_RenderThreadSleepTime>)0x0) {
      pFVar15 = ::FName::FName(&local_90,"STAT_RenderingIdleTime_RenderThreadSleepTime");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_RenderThreadSleepTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RenderingIdleTime_RenderThreadSleepTime,*pFVar15,
                          L"Other Render Thread Sleep Time","STATGROUP_Threading","STATCAT_Advanced"
                          ,L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar21;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_158.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
      local_190 = FVar5;
      local_158.StatData.Pad = auVar32;
      local_158.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_158);
      FStatsTrace::Set(&local_190,(long64)auVar32);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      auVar33[4] = '\0';
      auVar33[5] = '\0';
      auVar33[6] = '\0';
      auVar33[7] = '\0';
      auVar33[0] = (undefined1)GRenderThreadIdle[1];
      auVar33[1] = GRenderThreadIdle[1]._1_1_;
      auVar33[2] = GRenderThreadIdle[1]._2_1_;
      auVar33[3] = GRenderThreadIdle[1]._3_1_;
      FVar22 = StatPtr_STAT_RenderingIdleTime_WaitingForGPUQuery;
      if (StatPtr_STAT_RenderingIdleTime_WaitingForGPUQuery ==
          (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUQuery>)0x0) {
        pFVar15 = ::FName::FName(&local_88,"STAT_RenderingIdleTime_WaitingForGPUQuery");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUQuery>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RenderingIdleTime_WaitingForGPUQuery,*pFVar15,
                            L"Wait for GPU Query","STATGROUP_Threading","STATCAT_Advanced",
                            L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar22;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar17 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        local_148.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
        local_188 = FVar5;
        local_148.StatData.Pad = auVar33;
        local_148.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar17,&local_148);
        FStatsTrace::Set(&local_188,(long64)auVar33);
        if (pFVar17->ScopeCount == 0) {
          FThreadStats::Flush(pFVar17,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar17,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        auVar34[4] = '\0';
        auVar34[5] = '\0';
        auVar34[6] = '\0';
        auVar34[7] = '\0';
        auVar34[0] = (undefined1)GRenderThreadIdle[2];
        auVar34[1] = GRenderThreadIdle[2]._1_1_;
        auVar34[2] = GRenderThreadIdle[2]._2_1_;
        auVar34[3] = GRenderThreadIdle[2]._3_1_;
        FVar23 = StatPtr_STAT_RenderingIdleTime_WaitingForGPUPresent;
        if (StatPtr_STAT_RenderingIdleTime_WaitingForGPUPresent ==
            (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUPresent>)0x0) {
          pFVar15 = ::FName::FName(&local_80,"STAT_RenderingIdleTime_WaitingForGPUPresent");
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime_WaitingForGPUPresent>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_RenderingIdleTime_WaitingForGPUPresent,*pFVar15,
                              L"Wait for GPU Present","STATGROUP_Threading","STATCAT_Advanced",
                              L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar23;
        if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar17 == (FThreadStats *)0x0) {
            pFVar18 = FThreadStatsPool::Get();
            pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
          }
          local_138.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
          local_180 = FVar5;
          local_138.StatData.Pad = auVar34;
          local_138.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar17,&local_138);
          FStatsTrace::Set(&local_180,(long64)auVar34);
          if (pFVar17->ScopeCount == 0) {
            FThreadStats::Flush(pFVar17,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar17,false,false);
          }
        }
      }
    }
  }
  iVar2 = *(int *)(pFVar20 + 2);
  iVar3 = *(int *)&pFVar20[2].field_0x4;
  uVar28 = (ulonglong)GRenderThreadIdle[1];
  if (__CsvProfilerStat975 == false) {
    FCsvProfilerTrace::OutputInlineStat("Total",_GCsvCategory_RenderThreadIdle.Index);
    __CsvProfilerStat975 = true;
  }
  dVar7 = __real_408f400000000000;
  FCsvProfiler::RecordCustomStat
            ("Total",_GCsvCategory_RenderThreadIdle.Index,
             (float)((double)*(uint *)(pFVar20 + 2) *
                    FGenericPlatformTime::SecondsPerCycle * __real_408f400000000000),Set);
  if (__CsvProfilerStat976 == false) {
    FCsvProfilerTrace::OutputInlineStat("CriticalPath",_GCsvCategory_RenderThreadIdle.Index);
    __CsvProfilerStat976 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("CriticalPath",_GCsvCategory_RenderThreadIdle.Index,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar7 *
                    (double)*(uint *)&pFVar20[2].field_0x4),Set);
  if (__CsvProfilerStat977 == false) {
    FCsvProfilerTrace::OutputInlineStat("SwapBuffer",_GCsvCategory_RenderThreadIdle.Index);
    __CsvProfilerStat977 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("SwapBuffer",_GCsvCategory_RenderThreadIdle.Index,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar7 * (double)GSwapBufferTime),Set);
  if (__CsvProfilerStat978 == false) {
    FCsvProfilerTrace::OutputInlineStat("NonCriticalPath",_GCsvCategory_RenderThreadIdle.Index);
    __CsvProfilerStat978 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NonCriticalPath",_GCsvCategory_RenderThreadIdle.Index,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar7 * (double)(uint)(iVar2 - iVar3)),
             Set);
  if (__CsvProfilerStat979 == false) {
    FCsvProfilerTrace::OutputInlineStat("GPUQuery",_GCsvCategory_RenderThreadIdle.Index);
    __CsvProfilerStat979 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("GPUQuery",_GCsvCategory_RenderThreadIdle.Index,
             (float)(FGenericPlatformTime::SecondsPerCycle * dVar7 * (double)uVar28),Set);
  uVar29 = GRenderThreadIdle[2] + GRenderThreadIdle[1] + GRenderThreadIdle[0];
  GRenderThreadIdle[0] = 0;
  GRenderThreadIdle[1] = 0;
  GRenderThreadIdle[2] = 0;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar24 = StatPtr_STAT_RenderingIdleTime;
    if (StatPtr_STAT_RenderingIdleTime == (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime>)0x0)
    {
      pFVar15 = ::FName::FName(&local_78,"STAT_RenderingIdleTime");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_RenderingIdleTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderingIdleTime,*pFVar15,
                          L"Total Render thread idle time","STATGROUP_Threading","STATCAT_Advanced",
                          L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar24;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_128.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
      local_128.StatData.Pad[4] = '\0';
      local_128.StatData.Pad[5] = '\0';
      local_128.StatData.Pad[6] = '\0';
      local_128.StatData.Pad[7] = '\0';
      local_128.StatData.Pad._0_4_ = uVar29;
      local_178 = FVar5;
      local_128.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_128);
      FStatsTrace::Set(&local_178,(ulonglong)uVar29);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  GRenderThreadTime = uVar26;
  if (uVar29 < uVar26) {
    GRenderThreadTime = uVar26 - uVar29;
  }
  uVar30 = uVar29 - *(int *)&pFVar20[2].field_0x4;
  GRenderThreadTimeCriticalPath = uVar26;
  if (uVar30 < uVar26) {
    GRenderThreadTimeCriticalPath = uVar26 - uVar30;
  }
  GRenderThreadWaitTime = uVar29;
  if (FThreadStats::bPrimaryEnable != false) {
    auVar35[4] = '\0';
    auVar35[5] = '\0';
    auVar35[6] = '\0';
    auVar35[7] = '\0';
    auVar35[0] = (char)GRenderThreadTimeCriticalPath;
    auVar35[1] = (char)(GRenderThreadTimeCriticalPath >> 8);
    auVar35[2] = (char)(GRenderThreadTimeCriticalPath >> 0x10);
    auVar35[3] = (char)(GRenderThreadTimeCriticalPath >> 0x18);
    FVar25 = StatPtr_STAT_RenderThreadCriticalPath;
    if (StatPtr_STAT_RenderThreadCriticalPath ==
        (FThreadSafeStaticStat<FStat_STAT_RenderThreadCriticalPath>)0x0) {
      pFVar15 = ::FName::FName(&local_70,"STAT_RenderThreadCriticalPath");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_RenderThreadCriticalPath>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderThreadCriticalPath,
                          *pFVar15,L"Total Render Thread time including dependent waits",
                          "STATGROUP_Threading","STATCAT_Advanced",L"Threading",true,true,ST_int64,
                          true,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar25;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_118.NameAndInfo.Number = FVar5.Number & 0xffff8fff | 0x8000;
      local_170 = FVar5;
      local_118.StatData.Pad = auVar35;
      local_118.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_118);
      FStatsTrace::Set(&local_170,(long64)auVar35);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  pTVar9 = CVarRenderThreadTimeIncludesDependentWaits.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar9->ShadowedValue[1] != 0) {
    GRenderThreadTime = GRenderThreadTimeCriticalPath;
  }
  *(undefined4 *)(pFVar20 + 3) = 1;
  pFVar20[2] = (FTlsAutoCleanup)0x0;
  if (GIsRunningRHIInSeparateThread_InternalUseOnly == false) {
    if (RHITCycles.bIsSet != false) {
      RHITCycles.bIsSet = false;
    }
  }
  else if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
          (param_1->field_0x64 == '\0')) {
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar13;
    *(undefined8 **)&param_1->field_0x30 = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &TRHILambdaCommand<FRHICommandListImmediate,`FSlateRHIRenderer::PresentWindow_RenderThread'::`54'::<lambda_3>_>
                ::_vftable_;
    puVar13[3] = L"TRHILambdaCommand";
  }
  else {
    `FSlateRHIRenderer::PresentWindow_RenderThread'::__l54::<lambda_3>::operator()
              (local_1d8,param_1);
  }
  return;
}

// RegisterCurrentScene @ 14601f190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateRHIRenderer::RegisterCurrentScene(FSlateRHIRenderer *this,FSceneInterface *param_1)

{
  int *piVar1;
  TArray<FSceneInterface_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  ForElementType<FSceneInterface_*> FVar9;
  code **ppcVar10;
  ulonglong uVar11;
  ForElementType<FSceneInterface_*> FVar12;
  undefined1 auStack_118 [32];
  FSceneInterface **local_f8;
  ForElementType<FSceneInterface_*> local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  FSceneInterface *local_c8;
  FSlateRHIRenderingPolicy *local_c0;
  FSceneInterface *pFStack_b8;
  int local_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c8 = param_1;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                         ,0x61c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((local_c8 == (FSceneInterface *)0x0) ||
     (lVar6 = (**(code **)(local_c8->_padding_ + 0x410))(), lVar6 == 0)) {
    this->CurrentSceneIndex = -1;
  }
  else {
    pTVar2 = &this->ActiveScenes;
    iVar5 = (this->ActiveScenes).ArrayNum;
    FVar9 = (this->ActiveScenes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FSceneInterface_*>)0x0) {
      FVar9 = (ForElementType<FSceneInterface_*>)pTVar2;
    }
    for (FVar12 = FVar9;
        FVar12 != (ForElementType<FSceneInterface_*>)((longlong)FVar9 + (longlong)iVar5 * 8);
        FVar12 = (ForElementType<FSceneInterface_*>)((longlong)FVar12 + 8)) {
      lVar6 = (**(code **)(**(longlong **)FVar12 + 0x410))();
      lVar7 = (**(code **)(local_c8->_padding_ + 0x410))();
      if (lVar6 == lVar7) {
        iVar5 = (int)((longlong)FVar12 - (longlong)FVar9 >> 3);
        this->CurrentSceneIndex = iVar5;
        if (iVar5 == -1) goto LAB_14601f28a;
        goto LAB_14601f4ed;
      }
    }
    this->CurrentSceneIndex = -1;
LAB_14601f28a:
    FVar9 = (this->ActiveScenes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FSceneInterface_*>)0x0) {
      FVar9 = (ForElementType<FSceneInterface_*>)pTVar2;
    }
    if (((ulonglong)FVar9 <= &local_c8) &&
       (lVar6 = (longlong)(this->ActiveScenes).ArrayMax,
       &local_c8 < (FSceneInterface **)((longlong)FVar9 + lVar6 * 8))) {
      local_e0 = (longlong)(this->ActiveScenes).ArrayNum;
      local_d8 = 8;
      local_f8 = &local_c8;
      local_f0 = FVar9;
      local_e8 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    local_b0 = (this->ActiveScenes).ArrayNum;
    piVar1 = &(this->ActiveScenes).ArrayMax;
    if (local_b0 == *piVar1) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ActiveScenes).ArrayNum = local_b0 + 1;
    FVar9 = (this->ActiveScenes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FSceneInterface_*>)0x0) {
      FVar9 = (ForElementType<FSceneInterface_*>)pTVar2;
    }
    *(FSceneInterface **)((longlong)FVar9 + (longlong)local_b0 * 8) = local_c8;
    this->CurrentSceneIndex = local_b0;
    if (-1 < local_b0) {
      local_c0 = (this->RenderingPolicy).Object;
      pFStack_b8 = local_c8;
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x20,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FSlateRHIRenderer::RegisterCurrentScene'::`18'::<lambda_2>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)local_c0;
      local_80[2] = (code *)pFStack_b8;
      local_80[3] = (code *)CONCAT44(uStack_ac,local_b0);
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSlateRHIRenderer::RegisterCurrentScene'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSlateRHIRenderer::RegisterCurrentScene_::__l18::TSTR_RegisterCurrentSceneOnPolicy1575>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSlateRHIRenderer::RegisterCurrentScene'::__l18::TSTR_RegisterCurrentSceneOnPolicy1575>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar8);
        uVar11 = (ulonglong)local_48;
        if ((2 < uVar11) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar10 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar10 = local_50;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar10 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar10 = local_80;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
  }
LAB_14601f4ed:
  return this->CurrentSceneIndex;
}

// ReleaseAccessedResources @ 146020710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::ReleaseAccessedResources(FSlateRHIRenderer *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  undefined **local_88;
  FSlateRHIRenderingPolicy *pFStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FSlateRHIRenderingPolicy *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar3 = IsInSlateThread();
  if (!bVar3) {
    this->CurrentSceneIndex = -1;
    piVar1 = &(this->ActiveScenes).ArrayMax;
    (this->ActiveScenes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneInterface_*>_>
                (8,8,0,&(this->ActiveScenes).AllocatorInstance,0,piVar1);
    }
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateRHIRenderer::ClearScenes'::`5'::<lambda_1>,1,0>::
                _vftable_;
    pFStack_80 = (this->RenderingPolicy).Object;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateRHIRenderer::ClearScenes'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateRHIRenderer::ClearScenes_::__l5::TSTR_ClearScenesOnPolicy1607>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pFStack_50 = pFStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateRHIRenderer::ClearScenes'::__l5::TSTR_ClearScenesOnPolicy1607>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar4);
      uVar6 = (ulonglong)local_38;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar5 = local_40;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar5 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar5 = local_70;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  if (param_1) {
    this->ResourceVersion = this->ResourceVersion + 1;
  }
  return;
}

// ReleaseDrawBuffer @ 146020a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::ReleaseDrawBuffer(FSlateRHIRenderer *this,FSlateDrawBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  code *local_88 [2];
  undefined **local_78;
  FSlateDrawBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSlateDrawBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar6 = 0;
  do {
    if (this->DrawBuffers + (int)uVar6 == param_1) goto LAB_146020acb;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  local_98[0] = 0;
  `FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(local_98);
LAB_146020acb:
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSlateRHIRenderer::ReleaseDrawBuffer'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateRHIRenderer::ReleaseDrawBuffer_::__l2::TSTR_SlateReleaseDrawBufferCommand334>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::TSTR_SlateReleaseDrawBufferCommand334>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ReleaseDynamicResource @ 146020c00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::ReleaseDynamicResource(FSlateRHIRenderer *this,FSlateBrush *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4209812134768409133>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIRenderer.cpp"
                       ,0x5d3,"IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateRHIResourceManager::ReleaseDynamicResource((this->ResourceManager).Object,param_1);
  return;
}

// ReleaseUpdatableTexture @ 1460220b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::ReleaseUpdatableTexture(FSlateRHIRenderer *this,FSlateUpdatableTexture *param_1)

{
  bool bVar1;
  longlong *plVar2;
  
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))();
    (**(code **)(*plVar2 + 0x20))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001460220e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001460220f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x18))(param_1);
  return;
}

// ReloadTextureResources @ 146022100

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::ReloadTextureResources(FSlateRHIRenderer *this)

{
  FSlateRHIResourceManager *this_00;
  code *pcVar1;
  bool bVar2;
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->ResourceManager).Object == (FSlateRHIResourceManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ResourceManager).Object;
  FSlateRHIResourceManager::ReleaseResources(this_00);
  FlushRenderingCommands();
  FSlateRHIResourceManager::DeleteResources(this_00);
  FSlateRHIResourceManager::CreateVectorGraphicsCache(this_00);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FSlateStyleRegistry::GetAllResources(&local_18);
  FSlateRHIResourceManager::CreateTextures(this_00,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RemoveDynamicBrushResource @ 1460224f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::RemoveDynamicBrushResource
          (FSlateRHIRenderer *this,TSharedPtr<FSlateDynamicImageBrush,1> *param_1)

{
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (param_1->Object != (FSlateDynamicImageBrush *)0x0) {
    pTVar7 = this->DynamicBrushesToRemove + this->FreeBufferIndex;
    pTVar1 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(pTVar7->AllocatorInstance).Data;
    if ((pTVar1 <= param_1) && (param_1 < pTVar1 + pTVar7->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 == pTVar7->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar5 + 1;
    pFVar6 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FSlateDynamicImageBrush **)pFVar6 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RequestResize @ 146022cb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::RequestResize
          (FSlateRHIRenderer *this,TSharedPtr<SWindow,1> *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar2;
  
  pTVar2 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,param_1->Object);
  if ((pTVar2 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) &&
     (lVar1 = *(longlong *)&pTVar2->field_0x8, lVar1 != 0)) {
    *(uint *)(lVar1 + 0xb8) = param_2;
    *(uint *)(lVar1 + 0xbc) = param_3;
  }
  return;
}

// ResizeViewportIfNeeded @ 146023e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::ResizeViewportIfNeeded
          (FSlateRHIRenderer *this,FSlateViewportInfo *param_1,TIntPoint<int> param_2,bool param_3,
          SWindow *param_4)

{
  void *pvVar1;
  FRHIViewport *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  EPixelFormat EVar7;
  int iVar8;
  FDeprecateSlateVector2D FVar9;
  FDeprecateSlateVector2D FVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  TMatrix<double> *pTVar12;
  TRefCountPtr<FRHIViewport> TVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  TIntPoint<int>_u_0_s_0 local_res18;
  undefined1 auStackY_1f8 [32];
  bool local_1c8;
  undefined1 local_1c7 [3];
  EDisplayColorGamut local_1c4;
  EDisplayOutputFormat local_1c0;
  TIntPoint<int>_u_0_s_0 local_1bc;
  FLLMScope local_1b4;
  float local_1b0;
  float fStack_1ac;
  FMemScope local_1a0;
  FRHIResource *local_198;
  SWindow *local_190;
  TVector2<double>_u_0 local_188 [2];
  TVector2<double>_u_0 local_160;
  code *local_148 [2];
  undefined **local_138;
  code *pcStack_130;
  undefined8 local_128;
  undefined ***local_120;
  undefined1 local_118 [16];
  undefined **local_108;
  code *pcStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  byte local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = param_4;
  bVar6 = IsInGameThread();
  if (((bVar6) && (bVar6 = IsInSlateThread(), !bVar6)) && (param_1 != (FSlateViewportInfo *)0x0)) {
    local_1c8 = IsHDREnabled();
    local_1c4 = HDRGetDefaultDisplayColorGamut();
    local_1c0 = HDRGetDefaultDisplayOutputFormat();
    pvVar1 = param_1->OSWindow;
    FVar9 = SWindow::GetSizeInScreen(param_4);
    FVar10 = SWindow::GetPositionInScreen(param_4);
    local_1b0 = *(float *)FVar9 + *(float *)FVar10;
    fStack_1ac = *(float *)((longlong)FVar10 + 4) + *(float *)((longlong)FVar9 + 4);
    local_1bc = (TIntPoint<int>_u_0_s_0)CONCAT44(fStack_1ac,local_1b0);
    local_188[0]._0_8_ = (undefined8)local_1b0;
    local_188[0]._8_8_ = (undefined8)fStack_1ac;
    FVar9 = SWindow::GetPositionInScreen(param_4);
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
    local_160._8_4_ = SUB84(dVar4,0);
    local_160._s_0.X = (double)(float)*(undefined8 *)FVar9;
    local_160._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    HDRGetMetaData(&local_1c0,&local_1c4,&local_1c8,(TVector2<double> *)&local_160._s_0,
                   (TVector2<double> *)&local_188[0]._s_0,pvVar1);
    local_res18.Y = param_2.field0_0x0._4_4_;
    local_res18.X = param_2.field0_0x0._0_4_;
    local_1b0 = (float)(uint)(local_1c0 != param_1->HDRDisplayOutputFormat ||
                             local_1c8 != param_1->bDisplayFormatIsHDR);
    if (local_1c4 != param_1->HDRDisplayColorGamut) {
      local_1b0 = 1.4013e-45;
    }
    if (((SUB41(local_1b0,0) != '\0') || ((param_1->Extent).field0_0x0._s_0.X != local_res18.X)) ||
       (((param_1->Extent).field0_0x0._s_0.Y != local_res18.Y ||
        ((param_1->bFullscreen != param_3 ||
         ((param_1->ViewportRHI).Reference == (FRHIViewport *)0x0)))))) {
      (*SuspendTextureStreamingRenderTasks)();
      local_138 = &
                  ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
      ;
      pcStack_130 = `FSlateRHIRenderer::ResizeViewportIfNeeded'::__l9::<lambda_1>::
                    <lambda_invoker_cdecl>;
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                     ::Call;
      local_120 = (undefined ***)0x0;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSlateRHIRenderer::ResizeViewportIfNeeded_::__l9::TSTR_FAsyncCleanup407>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_118._0_8_ = local_148[0];
        local_f0 = local_120;
        local_108 = local_138;
        pcStack_100 = pcStack_130;
        local_f8 = local_128;
        local_148[0] = (code *)0x0;
        local_e8 = 2;
        pFVar11 = (FRenderCommandTag *)
                  TRenderCommandTag<`FSlateRHIRenderer::ResizeViewportIfNeeded'::__l9::TSTR_FAsyncCleanup407>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_118,pFVar11);
        uVar15 = (ulonglong)local_e8;
        if ((2 < uVar15) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_118._0_8_ != (code *)0x0) {
            pppuVar14 = (undefined ***)(local_118 + 0x10);
            if (local_f0 != (undefined ***)0x0) {
              pppuVar14 = local_f0;
            }
            (*(code *)(*pppuVar14)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15])(local_118);
        }
      }
      if (local_148[0] != (code *)0x0) {
        pppuVar14 = &local_138;
        if (local_120 != (undefined ***)0x0) {
          pppuVar14 = local_120;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      FlushRenderingCommands();
      uVar16 = 8;
      if (8 < local_res18.X) {
        uVar16 = local_res18.X;
      }
      iVar8 = 8;
      if (8 < local_res18.Y) {
        iVar8 = local_res18.Y;
      }
      local_1bc.Y = iVar8;
      local_1bc.X = uVar16;
      local_res18 = local_1bc;
      if (0x4000 < (int)uVar16) {
        if (2 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        uVar16 = 0x4000;
        local_res18.Y = iVar8;
        local_res18.X = 0x4000;
      }
      uVar17 = local_res18.Y;
      if (0x4000 < local_res18.Y) {
        if (2 < (byte)LogSlate._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        uVar17 = 0x4000;
        local_res18.Y = 0x4000;
      }
      pTVar12 = CreateSlateProjectionMatrix(&local_d8,uVar16,uVar17);
      dVar4 = pTVar12->M[0][1];
      (param_1->ProjectionMatrix).M[0][0] = pTVar12->M[0][0];
      (param_1->ProjectionMatrix).M[0][1] = dVar4;
      dVar4 = pTVar12->M[0][3];
      (param_1->ProjectionMatrix).M[0][2] = pTVar12->M[0][2];
      (param_1->ProjectionMatrix).M[0][3] = dVar4;
      dVar4 = pTVar12->M[1][1];
      (param_1->ProjectionMatrix).M[1][0] = pTVar12->M[1][0];
      (param_1->ProjectionMatrix).M[1][1] = dVar4;
      dVar4 = pTVar12->M[1][3];
      (param_1->ProjectionMatrix).M[1][2] = pTVar12->M[1][2];
      (param_1->ProjectionMatrix).M[1][3] = dVar4;
      dVar4 = pTVar12->M[2][1];
      (param_1->ProjectionMatrix).M[2][0] = pTVar12->M[2][0];
      (param_1->ProjectionMatrix).M[2][1] = dVar4;
      dVar4 = pTVar12->M[2][3];
      (param_1->ProjectionMatrix).M[2][2] = pTVar12->M[2][2];
      (param_1->ProjectionMatrix).M[2][3] = dVar4;
      dVar4 = pTVar12->M[3][1];
      (param_1->ProjectionMatrix).M[3][0] = pTVar12->M[3][0];
      (param_1->ProjectionMatrix).M[3][1] = dVar4;
      dVar4 = pTVar12->M[3][2];
      dVar5 = pTVar12->M[3][3];
      param_1->HDRDisplayColorGamut = local_1c4;
      param_1->HDRDisplayOutputFormat = local_1c0;
      (param_1->Extent).field0_0x0._s_0 = local_res18;
      (param_1->ExtentToResizeTo).field0_0x0._s_0 = local_res18;
      param_1->bFullscreen = param_3;
      param_1->bDisplayFormatIsHDR = local_1c8;
      (param_1->ProjectionMatrix).M[3][2] = dVar4;
      (param_1->ProjectionMatrix).M[3][3] = dVar5;
      EVar7 = GRHIGlobals.HDRDisplayOutputFormat;
      if (local_1c8 == false) {
        EVar7 = -(this->bIsStandaloneStereoOnlyDevice != false) & PF_R8G8B8A8;
      }
      param_1->PixelFormat = EVar7;
      TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
                 &this->_padding_,&param_1->ViewportRHI);
      pFVar2 = (param_1->ViewportRHI).Reference;
      if (pFVar2 == (FRHIViewport *)0x0) {
        TVar13 = RHICreateViewport(&local_198,(uint)param_1->OSWindow,uVar16,SUB41(uVar17,0),param_3
                                  );
        TRefCountPtr<FRHIViewport>::operator=
                  (&param_1->ViewportRHI,(TRefCountPtr<FRHIViewport> *)TVar13.Reference);
        if (local_198 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_198);
        }
      }
      else {
        if ((*(uint *)&pFVar2->field_0x8 & 0x3fffffff) != 1) {
          `FSlateRHIRenderer::ResizeViewportIfNeeded'::__l54::<lambda_2>::operator()(local_1c7);
        }
        pFVar2 = (param_1->ViewportRHI).Reference;
        FLLMScope::FLLMScope(&local_1b4,RenderTargets,false,None,Default,true);
        FMemScope::FMemScope(&local_1a0,RenderTargets,true);
        (**(code **)(GDynamicRHI->_padding_ + 0x310))(GDynamicRHI,pFVar2,uVar16,uVar17);
        FMemScope::~FMemScope(&local_1a0);
        FLLMScope::~FLLMScope(&local_1b4);
      }
      TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
                 &this->_padding_,&param_1->ViewportRHI);
      (*ResumeTextureStreamingRenderTasks)();
      if (local_1b0._0_1_ != '\0') {
        SWidget::Invalidate((SWidget *)local_190,Paint);
      }
    }
  }
  return;
}

// RestoreSystemResolution @ 1460243f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::RestoreSystemResolution(FSlateRHIRenderer *this,TSharedRef<SWindow,1> *param_1)

{
  SWindow *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  pSVar1 = param_1->Object;
  if ((pSVar1->NativeWindow).Object == (FGenericWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (**(code **)(((pSVar1->NativeWindow).Object)->_padding_ + 0x68))();
  if (iVar4 == 0) {
    FSystemResolution::RequestResolutionChange
              (GSystemResolution.ResX,GSystemResolution.ResY,GSystemResolution.WindowMode);
    GSystemResolution.bForceRefresh = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetColorVisionDeficiencyType @ 1460247d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::SetColorVisionDeficiencyType
          (FSlateRHIRenderer *this,EColorVisionDeficiency param_1,int param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  
  GSlateColorDeficiencyType = param_1;
  GSlateColorDeficiencyCorrection = param_3;
  iVar1 = 10;
  if (param_2 < 10) {
    iVar1 = param_2;
  }
  GSlateColorDeficiencySeverity = 0;
  if (0 < iVar1) {
    GSlateColorDeficiencySeverity = iVar1;
  }
  GSlateShowColorDeficiencyCorrectionWithDeficiency = param_4;
  return;
}

// SetCurrentSceneIndex @ 146024810

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::SetCurrentSceneIndex(FSlateRHIRenderer *this,int param_1)

{
  this->CurrentSceneIndex = param_1;
  return;
}

// SetSystemResolution @ 146025ab0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRHIRenderer::SetSystemResolution(FSlateRHIRenderer *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  FSystemResolution::RequestResolutionChange(param_1,param_2,GSystemResolution.WindowMode);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146025b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x58))();
  return;
}

// Sync @ 14602c350

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRHIRenderer::Sync(FSlateRHIRenderer *this)

{
  FFrameEndSync::Sync(EndFrame);
  return;
}

// UpdateFullscreenState @ 14602e0c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
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
FSlateRHIRenderer::UpdateFullscreenState
          (FSlateRHIRenderer *this,TSharedRef<SWindow,1> *param_1,uint param_2,uint param_3)

{
  SWindow *pSVar1;
  FSlateViewportInfo *pFVar2;
  IStereoRendering *pIVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  Type TVar7;
  TTuple<SWindow_const_*,FSlateViewportInfo_*> *pTVar8;
  uint uVar9;
  TIntPoint<int>_u_0_s_0 TVar10;
  TSharedRef<SWindow,1> local_38;
  
  pSVar1 = param_1->Object;
  pTVar8 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,pSVar1);
  if ((pTVar8 == (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) ||
     (*(longlong *)&pTVar8->field_0x8 == 0)) {
    local_38.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pSVar1;
    CreateViewport(this,&local_38);
  }
  pSVar1 = param_1->Object;
  pTVar8 = TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<SWindow_const_*,FSlateViewportInfo_*>,TDefaultMapHashableKeyFuncs<SWindow_const_*,FSlateViewportInfo_*,0>,FDefaultSetAllocator>
                   *)&this->WindowToViewportInfo,pSVar1);
  if ((pTVar8 != (TTuple<SWindow_const_*,FSlateViewportInfo_*> *)0x0) &&
     (pFVar2 = *(FSlateViewportInfo **)&pTVar8->field_0x8, pFVar2 != (FSlateViewportInfo *)0x0)) {
    bVar5 = FSlateRenderer::IsViewportFullscreen((FSlateRenderer *)this,pSVar1);
    if ((GEngine == (UEngine *)0x0) ||
       ((((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0 ||
         (pIVar3 = (GEngine->StereoRenderingDevice).Object, pIVar3 == (IStereoRendering *)0x0)) ||
        (cVar6 = (**(code **)((longlong)*pIVar3 + 8))(), cVar6 == '\0')))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar9 = GSystemResolution.ResX;
    if (param_2 != 0) {
      uVar9 = param_2;
    }
    TVar10.Y = 0;
    TVar10.X = uVar9;
    uVar9 = GSystemResolution.ResY;
    if (param_3 != 0) {
      uVar9 = param_3;
    }
    TVar7 = SWindow::GetWindowMode(param_1->Object);
    if ((TVar7 == WindowedFullscreen) || (bVar4)) {
      TVar10 = (pFVar2->ExtentToResizeTo).field0_0x0._s_0;
      uVar9 = TVar10.Y;
    }
    ResizeViewportIfNeeded
              (this,pFVar2,
               (TIntPoint<int>)((ulonglong)uVar9 << 0x20 | (ulonglong)TVar10 & 0xffffffff),bVar5,
               param_1->Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 1504e0410

bool __thiscall `FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4209812134768410293>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4209812134768410293>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e0450

bool __thiscall `FSlateRHIRenderer::CreateViewport'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4209812134768410268>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4209812134768410268>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e0500

bool __thiscall `FSlateRHIRenderer::DrawWindows_Private'::__l22::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4209812134768409445>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4209812134768409445>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e0840

bool __thiscall `FSlateRHIRenderer::DrawWindows_Private'::__l28::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4209812134768409408>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4209812134768409408>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e0920

bool __thiscall
`FSlateRHIRenderer::ResizeViewportIfNeeded'::__l54::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4209812134768410182>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4209812134768410182>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

