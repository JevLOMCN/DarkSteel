// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 15

// Call @ 145ff68a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateUpdatableInstanceBuffer::~FSlateUpdatableInstanceBuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7FRenderProxy_FSlateUpdatableInstanceBuffer__6B_;
    bVar2 = IsInRenderingThread();
    if (bVar2) {
      (**(code **)(puVar1[1] + 0x20))();
    }
    else {
      BeginReleaseResource((FRenderResource *)(puVar1 + 1),(FRenderCommandPipe *)0x0);
    }
    puVar1[1] = &___7__TSlateElementVertexBuffer_U__TVector4_N_Math_UE____6B_;
    FVertexBuffer::~FVertexBuffer((FVertexBuffer *)(puVar1 + 1));
    *puVar1 = &___7ISlateUpdatableInstanceBufferRenderProxy__6B_;
    ::operator_delete(puVar1,0x40);
  }
  return;
}

// Call @ 145ff6920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIResourceManager::CreateTextures'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FSlateRHIResourceManager::CreateTextures'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 145ff6930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIResourceManager::MakeDynamicTextureResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateTextureData *pFVar1;
  FSlateTexture2DRHIRef *this;
  TSharedPtr<FSlateTextureData,1> local_18;
  
  pFVar1 = *(FSlateTextureData **)((longlong)param_1 + 8);
  if (pFVar1 != (FSlateTextureData *)0x0) {
    this = *(FSlateTexture2DRHIRef **)(*(longlong *)param_1 + 8);
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = pFVar1;
    FSlateTexture2DRHIRef::SetTextureData(this,&local_18,PF_B8G8R8A8,SRGB);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ff6996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)param_1 + 8) + 0x28) + 0x18))
            (*(longlong *)(*(longlong *)param_1 + 8) + 0x28,param_2);
  return;
}

// Call @ 145ff69a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::ClearScenes'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x20);
  *(undefined4 *)(lVar1 + 0x248) = 0;
  if (*(int *)(lVar1 + 0x24c) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar1 + 0x240),0,(int *)(lVar1 + 0x24c));
  }
  return;
}

// Call @ 145ff69f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::FlushPendingDeletes'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

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
  undefined1 auStackX_8 [8];
  
  pFVar10 = *(ForElementType<FSlateCachedClipState> **)param_1;
  iVar5 = *(int *)((longlong)param_1 + 8);
  pFVar3 = pFVar10 + iVar5;
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) != iVar5) {
      `TCheckedPointerIterator<FSlateCachedFastPathRenderingData_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
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
  puVar11 = *(undefined8 **)((longlong)param_1 + 0x10);
  iVar5 = *(int *)((longlong)param_1 + 0x18);
  puVar4 = puVar11 + iVar5;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar5) {
      `TCheckedPointerIterator<FSlateCachedElementData_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStackX_8);
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
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>(0x90,0x10,0,pFVar8,0,piVar2)
        ;
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

// Call @ 145ff6a00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateTextureAtlasRHI::ConditionalUpdateTexture'::__l6::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateTextureAtlasRHI::UpdateTexture_RenderThread
            (*(FSlateTextureAtlasRHI **)param_1,*(FSlateTextureData **)((longlong)param_1 + 8));
  return;
}

// Call @ 145ff6a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateFontTextureRHI::FSlateFontTextureRHI'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPendingSourceData *pFVar1;
  void *pvVar2;
  
  pFVar1 = ((*(FSlateFontTextureRHI **)param_1)->PendingSourceData).Ptr;
  FSlateFontTextureRHI::UpdateTextureFromSource
            (*(FSlateFontTextureRHI **)param_1,pFVar1->SourceWidth,pFVar1->SourceHeight,
             &pFVar1->SourceData);
  pvVar2 = *(void **)(*(longlong *)param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 8) = 0;
    if (*(void **)((longlong)pvVar2 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar2 + 8));
    }
    ::operator_delete(pvVar2,0x18);
    return;
  }
  return;
}

// Call @ 145ff6a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::AddWidgetRendererUpdate'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  EShaderPlatform EVar1;
  FRDGEventName *pFVar2;
  undefined1 auStackY_858 [32];
  FRDGEventName FStack_820;
  FRDGEventName FStack_808;
  FRDGBuilder FStack_7e8;
  ulonglong uStack_18;
  
  EVar1 = GMaxRHIShaderPlatform;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  pFVar2 = FRDGEventName::FRDGEventName(&FStack_808,1,L"SlateWidgetRender");
  FStack_820.EventFormat = pFVar2->EventFormat;
  ::FString::FString(&FStack_820.FormattedEventName,&pFVar2->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&FStack_7e8,param_2,&FStack_820,ParallelExecute|ParallelSetup,EVar1);
  if (FStack_808.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_808.FormattedEventName.Data.AllocatorInstance.Data);
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 0x30) + 0x40))
            (*(longlong **)((longlong)param_1 + 0x30),&FStack_7e8,param_1);
  FRDGBuilder::Execute(&FStack_7e8);
  FRDGBuilder::~FRDGBuilder(&FStack_7e8);
  return;
}

// Call @ 145ff6a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateFontAtlasRHI::ConditionalUpdateTexture'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  FSlateFontAtlas *this;
  ESlateFontAtlasContentType EVar2;
  uint uVar3;
  void *_Dst;
  FLLMScope aFStackX_8 [2];
  FMemScope FStackX_18;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  _Dst = RHILockTexture2D(*(FRHITexture **)(*(longlong *)(*(longlong *)param_1 + 0x58) + 0x10),0,
                          RLM_WriteOnly,(uint *)aFStackX_8,false,true,(ulong64 *)0x0);
  this = *(FSlateFontAtlas **)param_1;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  EVar2 = FSlateFontAtlas::GetContentType(this);
  uVar3 = GetSlateFontAtlasContentBytesPerPixel(EVar2);
  memcpy(_Dst,*(void **)(*(longlong *)param_1 + 0x10),
         (ulonglong)(uVar3 * iVar1 * (int)this->_padding_));
  uStack_30 = 0;
  uStack_20 = 3;
  uStack_28 = 0;
  uStack_1c = 0x100;
  uStack_38 = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x58) + 0x10);
  FLLMScope::FLLMScope(aFStackX_8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&FStackX_18,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0,&uStack_38);
  FMemScope::~FMemScope(&FStackX_18);
  FLLMScope::~FLLMScope(aFStackX_8);
  return;
}

// Call @ 145ff6aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlatePostBufferBlurProxy::OnUpdateValuesRenderThread'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_145ff6ac3;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(longlong *)param_1 != 0) {
      *(undefined4 *)(*(longlong *)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_145ff6ac3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 145ff6af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateUpdatableInstanceBuffer::Update'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateUpdatableInstanceBuffer::FRenderProxy::Update
            (*(FRenderProxy **)param_1,param_2,
             (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 8));
  return;
}

// Call @ 145ff6b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlate3DRenderer::ReleaseDrawBuffer'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateDrawBuffer *this;
  FTaskHandle *pFVar1;
  
  this = *(FSlateDrawBuffer **)param_1;
  pFVar1 = FRDGBuilder::GetAsyncExecuteTask();
  FSlateDrawBuffer::Unlock(this,pFVar1);
  return;
}

// Call @ 145ff6b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::ReleaseDrawBuffer'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateDrawBuffer *this;
  FTaskHandle *pFVar1;
  
  this = *(FSlateDrawBuffer **)param_1;
  pFVar1 = FRDGBuilder::GetAsyncExecuteTask();
  FSlateDrawBuffer::Unlock(this,pFVar1);
  return;
}

// Call @ 145ff6b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::RegisterCurrentScene'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSlateRHIResourceManager::AddSceneAt
            (*(FSlateRHIResourceManager **)(*(longlong *)param_1 + 0x20),
             *(FSceneInterface **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 145ff6b90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateRHIRenderer::DrawWindows_Private'::__l76::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  int iVar2;
  FSlateRHIRenderer *this;
  FRenderThreadUpdateContext *pFVar3;
  FSlateDrawWindowPassInputs *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<FRenderThreadUpdateContext_const_,int> TStack_28;
  TArrayView<FSlateDrawWindowPassInputs_const_,int> TStack_18;
  
  this = *(FSlateRHIRenderer **)param_1;
  pFVar3 = *(FRenderThreadUpdateContext **)(*(longlong *)((longlong)param_1 + 8) + 0x10);
  iVar1 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x18);
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
  pFVar4 = (FSlateDrawWindowPassInputs *)**(undefined8 **)((longlong)param_1 + 8);
  iVar2 = *(int *)(*(undefined8 **)((longlong)param_1 + 8) + 1);
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
  TStack_28._12_4_ = uStack_3c;
  TStack_28.ArrayNum = iVar1;
  TStack_18._12_4_ = uStack_2c;
  TStack_18.ArrayNum = iVar2;
  TStack_28.DataPtr = pFVar3;
  TStack_18.DataPtr = pFVar4;
  FSlateRHIRenderer::DrawWindows_RenderThread(this,param_2,&TStack_18,&TStack_28);
  return;
}

