// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 9

// FMoviePipelineSurfaceReader @ 14dd6aaf0

FMoviePipelineSurfaceReader * __thiscall
FMoviePipelineSurfaceReader::FMoviePipelineSurfaceReader
          (FMoviePipelineSurfaceReader *this,EPixelFormat param_1,bool param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ReadbackTexture).Ptr = (FRHIGPUTextureReadback *)0x0;
  this->bQueuedForCapture = false;
  this->AvailableEvent = (FEvent *)0x0;
  this->PixelFormat = param_1;
  this->bInvertAlpha = param_2;
  return this;
}

// ~FMoviePipelineSurfaceReader @ 14dd6bda0

void __thiscall
FMoviePipelineSurfaceReader::~FMoviePipelineSurfaceReader(FMoviePipelineSurfaceReader *this)

{
  int *piVar1;
  int iVar2;
  FEvent *pFVar3;
  FRHIGPUTextureReadback *pFVar4;
  FRHITexture *this_00;
  longlong *plVar5;
  longlong lVar6;
  FRHIGPUTextureReadback *pFVar7;
  
  pFVar3 = this->AvailableEvent;
  if (pFVar3 != (FEvent *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::operator=
            (&this->ReadbackTexture,(void *)0x0);
  pFVar4 = (this->ReadbackTexture).Ptr;
  if (pFVar4 != (FRHIGPUTextureReadback *)0x0) {
    lVar6 = 8;
    pFVar7 = pFVar4 + 1;
    do {
      this_00 = pFVar7[-1].DestinationStagingTextures[7].Reference;
      pFVar7 = (FRHIGPUTextureReadback *)(pFVar7[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    } while (lVar6 != 0);
    pFVar4->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar4->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4->_padding_);
    }
    ::operator_delete(pFVar4,0x58);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dd6be77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  return;
}

// operator() @ 14dd6e770

void __thiscall
`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FRHIGPUTextureReadback *pFVar2;
  FName *pFVar3;
  longlong *plVar4;
  FRHIGPUTextureReadback *pFVar5;
  longlong lVar6;
  FName local_res8;
  longlong local_18 [2];
  
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 == (FRHIGPUTextureReadback *)0x0) {
    pFVar2 = (FRHIGPUTextureReadback *)0x0;
  }
  else {
    pFVar3 = ::FName::FName(&local_res8,L"FMoviePipelineSurfaceReader");
    pFVar2 = FRHIGPUTextureReadback::FRHIGPUTextureReadback(pFVar2,*pFVar3);
  }
  plVar4 = (longlong *)(*(longlong *)this + 0x18);
  if (plVar4 == local_18) {
    if (pFVar2 == (FRHIGPUTextureReadback *)0x0) {
      return;
    }
    pFVar5 = pFVar2 + 1;
    lVar6 = 8;
    do {
      pFVar1 = pFVar5[-1].DestinationStagingTextures[7].Reference;
      pFVar5 = (FRHIGPUTextureReadback *)(pFVar5[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    } while (lVar6 != 0);
    pFVar2->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    pFVar5 = pFVar2;
    if ((FRHIResource *)pFVar2->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2->_padding_);
    }
  }
  else {
    pFVar5 = (FRHIGPUTextureReadback *)*plVar4;
    *plVar4 = (longlong)pFVar2;
    if (pFVar5 == (FRHIGPUTextureReadback *)0x0) {
      return;
    }
    pFVar2 = pFVar5 + 1;
    lVar6 = 8;
    do {
      pFVar1 = pFVar2[-1].DestinationStagingTextures[7].Reference;
      pFVar2 = (FRHIGPUTextureReadback *)(pFVar2[-1].DestinationStagingTextures + 7);
      lVar6 = lVar6 + -1;
      if (pFVar1 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    } while (lVar6 != 0);
    pFVar5->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar5->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar5->_padding_);
    }
  }
  ::operator_delete(pFVar5,0x58);
  return;
}

// BlockUntilAvailable @ 14dd78010

void __thiscall FMoviePipelineSurfaceReader::BlockUntilAvailable(FMoviePipelineSurfaceReader *this)

{
  FEvent *pFVar1;
  
  pFVar1 = this->AvailableEvent;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  return;
}

// CopyReadbackTexture_RenderThread @ 14dd7cad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMoviePipelineSurfaceReader::CopyReadbackTexture_RenderThread
          (FMoviePipelineSurfaceReader *this,
          TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *param_1,TSharedPtr<FImagePixelDataPayload,1> *param_2)

{
  TIntPoint<int> *pTVar1;
  FRHIGPUMask FVar2;
  uint uVar3;
  undefined8 *puVar4;
  FEvent *pFVar5;
  int iVar6;
  code *pcVar7;
  TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
  *pTVar8;
  TIntPoint<int>_u_0 TVar9;
  bool bVar10;
  void *_Src;
  TImagePixelData<FFloat16Color> *this_00;
  TImagePixelData<FColor> *this_01;
  TIntPoint<int>_u_0 TVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong *plVar14;
  FRHIGPUMask FVar15;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *this_02;
  FScriptContainerElement *_Dst;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int local_res8 [2];
  TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
  *local_res10;
  TSharedPtr<FImagePixelDataPayload,1> *local_res18;
  uint local_res20 [2];
  TIntPoint<int>_u_0 local_90;
  TIntPoint<int>_u_0 local_88;
  TIntPoint<int>_u_0 local_80;
  FRHICommandListImmediate *local_78;
  TSharedPtr<IImagePixelDataPayload,1> local_70;
  TSharedPtr<IImagePixelDataPayload,1> local_60 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&RendererModuleName,"Renderer");
    _Init_thread_footer(&::_TSS0);
  }
  FModuleManager::GetModuleChecked<IRendererModule>(RendererModuleName);
  local_78 = GetImmediateCommandList_ForRenderCommand();
  FVar2.GPUMask = *(uint *)&local_78->field_0x29c;
  FVar15.GPUMask = FVar2.GPUMask;
  if ((FVar2.GPUMask & FVar2.GPUMask - 1) != 0) {
    iVar6 = 0;
    if (FVar2.GPUMask != 0) {
      for (; (FVar2.GPUMask >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    bVar13 = 0;
    if (FVar2.GPUMask != 0) {
      bVar13 = (byte)iVar6;
    }
    FVar15.GPUMask = 1 << (bVar13 & 0x1f);
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_78,FVar15);
  _Dst = (FScriptContainerElement *)0x0;
  iVar16 = 0;
  local_res8[0] = 0;
  local_res20[0] = 0;
  _Src = FRHIGPUTextureReadback::Lock((this->ReadbackTexture).Ptr,local_res8,(int *)local_res20);
  pTVar1 = &this->Size;
  iVar6 = (pTVar1->field0_0x0)._s_0.X;
  uVar3 = (this->Size).field0_0x0._s_0.Y;
  uVar18 = (ulonglong)uVar3;
  local_90 = (TIntPoint<int>_u_0)0x0;
  if (this->PixelFormat == PF_B8G8R8A8) {
    local_80._s_0 = *(TIntPoint<int>_u_0_s_0 *)&pTVar1->field0_0x0;
    this_01 = ::operator_new(0x40);
    local_88 = (TIntPoint<int>_u_0)0x0;
    if (this_01 != (TImagePixelData<FColor> *)0x0) {
      local_60[0].Object = (IImagePixelDataPayload *)local_res18->Object;
      local_60[0].SharedReferenceCount.ReferenceController =
           (local_res18->SharedReferenceCount).ReferenceController;
      if (local_60[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
         ) {
        LOCK();
        (local_60[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
        ;
        UNLOCK();
      }
      local_88 = (TIntPoint<int>_u_0)
                 TImagePixelData<FColor>::TImagePixelData<FColor>
                           (this_01,(TIntPoint<int> *)&local_80._s_0,local_60);
    }
    this_02 = (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)((longlong)local_88 + 0x28);
    TArray<FColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              ((TArray<FColor,TSizedDefaultAllocator<64>_> *)this_02,(longlong)(int)(iVar6 * uVar3),
               Default);
    iVar16 = 4;
    TVar11 = local_88;
  }
  else {
    if (this->PixelFormat != PF_FloatRGBA) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                          ,0xd5,L"");
      TVar11 = local_90;
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_14dd7ccb3;
    }
    local_88._s_0 = *(TIntPoint<int>_u_0_s_0 *)&pTVar1->field0_0x0;
    this_00 = ::operator_new(0x40);
    local_80 = (TIntPoint<int>_u_0)0x0;
    if (this_00 != (TImagePixelData<FFloat16Color> *)0x0) {
      local_70.Object = (IImagePixelDataPayload *)local_res18->Object;
      local_70.SharedReferenceCount.ReferenceController =
           (local_res18->SharedReferenceCount).ReferenceController;
      if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = (TIntPoint<int>_u_0)
                 TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                           (this_00,(TIntPoint<int> *)&local_88._s_0,&local_70);
    }
    this_02 = (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *)((longlong)local_80 + 0x28);
    TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (this_02,(longlong)(int)(iVar6 * uVar3),Default);
    iVar16 = 8;
    TVar11 = local_80;
  }
  TVar9 = local_90;
  _Dst = (this_02->AllocatorInstance).Data;
  if (local_90 != (TIntPoint<int>_u_0)0x0) {
    puVar4 = *(undefined8 **)local_90;
    local_90 = TVar11;
    (*(code *)*puVar4)(TVar9,1);
    TVar11 = local_90;
  }
LAB_14dd7ccb3:
  local_90 = TVar11;
  if ((iVar6 == local_res8[0]) && (uVar3 == local_res20[0])) {
    memcpy(_Dst,_Src,(longlong)(int)(iVar6 * iVar16 * uVar3));
  }
  else {
    if ((local_res8[0] < iVar6) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExpectedSizeX <= ActualSizeX",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                            ,0xe2,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((int)local_res20[0] < (int)uVar3) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExpectedSizeY <= ActualSizeY",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                            ,0xe3,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (0 < (int)uVar3) {
      iVar17 = iVar16 * local_res8[0];
      do {
        memcpy(_Dst,_Src,(longlong)(iVar6 * iVar16));
        _Src = (void *)((longlong)_Src + (longlong)iVar17);
        _Dst = _Dst + iVar6 * iVar16;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  FRHIGPUTextureReadback::Unlock((this->ReadbackTexture).Ptr);
  pTVar8 = local_res10;
  UE::Core::Private::Function::CheckCallable(*(void **)local_res10);
  pcVar7 = *(code **)pTVar8;
  plVar14 = (longlong *)&pTVar8->field_0x10;
  if (*(longlong **)&pTVar8->field_0x28 != (longlong *)0x0) {
    plVar14 = *(longlong **)&pTVar8->field_0x28;
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  (*pcVar7)(uVar12,&local_90);
  if (this->AvailableEvent != (FEvent *)0x0) {
    (**(code **)(this->AvailableEvent->_padding_ + 0x10))();
  }
  pFVar5 = this->AvailableEvent;
  if (pFVar5 != (FEvent *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  this->bQueuedForCapture = false;
  if (local_90 != (TIntPoint<int>_u_0)0x0) {
    (*(code *)**(undefined8 **)local_90)(local_90,1);
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_78,FVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res18->SharedReferenceCount).ReferenceController);
  return;
}

// Initialize @ 14dd8f590

void __thiscall FMoviePipelineSurfaceReader::Initialize(FMoviePipelineSurfaceReader *this)

{
  code *pcVar1;
  bool bVar2;
  FEvent *pFVar3;
  
  if (this->AvailableEvent != (FEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AvailableEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->AvailableEvent = pFVar3;
  return;
}

// Reset @ 14dd9b800

void __thiscall FMoviePipelineSurfaceReader::Reset(FMoviePipelineSurfaceReader *this)

{
  FEvent *pFVar1;
  
  if (this->AvailableEvent != (FEvent *)0x0) {
    (**(code **)(this->AvailableEvent->_padding_ + 0x10))();
  }
  pFVar1 = this->AvailableEvent;
  if (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(this->AvailableEvent);
    this->AvailableEvent = (FEvent *)0x0;
  }
  this->bQueuedForCapture = false;
  return;
}

// ResizeImpl @ 14dd9b8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMoviePipelineSurfaceReader::ResizeImpl(FMoviePipelineSurfaceReader *this,uint param_1,uint param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMoviePipelineSurfaceReader *pFVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  TSharedRef<FMoviePipelineSurfaceReader,1> *pTVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint uStack_b4;
  TSharedRef<FMoviePipelineSurfaceReader,1> local_b0;
  code *local_98 [2];
  undefined **local_88;
  FMoviePipelineSurfaceReader *pFStack_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FMoviePipelineSurfaceReader *pFStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  TUniquePtr<FRHIGPUTextureReadback,TDefaultDelete<FRHIGPUTextureReadback>_>::operator=
            (&this->ReadbackTexture,(void *)0x0);
  TVar4._s_0.Y = param_2;
  TVar4._s_0.X = param_1;
  (this->Size).field0_0x0 = TVar4;
  local_b8 = param_1;
  uStack_b4 = param_2;
  pTVar6 = TSharedFromThis<FMoviePipelineSurfaceReader,1>::AsShared
                     ((TSharedFromThis<FMoviePipelineSurfaceReader,1> *)this,&local_b0);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar6->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMoviePipelineSurfaceReader::ResizeImpl'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_80 = pFVar2;
  local_78 = pTVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FMoviePipelineSurfaceReader::ResizeImpl_::__l2::TSTR_CreateCaptureFrameTexture47>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FMoviePipelineSurfaceReader::ResizeImpl'::__l2::TSTR_CreateCaptureFrameTexture47>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar7);
    uVar9 = (ulonglong)local_38;
    if (2 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar8 = local_40;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar8 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar8 = local_70;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// ResolveSampleToReadbackTexture_RenderThread @ 14dd9bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMoviePipelineSurfaceReader::ResolveSampleToReadbackTexture_RenderThread
          (FMoviePipelineSurfaceReader *this,TRefCountPtr<FRHITexture> *param_1)

{
  undefined1 *puVar1;
  EPixelFormat EVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  FShaderMapResource *this_00;
  FRHIGPUTextureReadback *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  FRHICommandListBase *this_01;
  FRHITextureDesc *pFVar8;
  IRHICommandContext *pIVar9;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar10;
  FName FVar11;
  atomic<FRHIShader_*> aVar12;
  FRHIGraphicsShader *pFVar13;
  FRHIBatchedShaderParameters *pFVar14;
  FRHICommandBase *pFVar15;
  int iVar16;
  TRefCountPtr<FRHISamplerState> TVar17;
  float fVar18;
  undefined1 auStackY_508 [32];
  TRefCountPtr<IPooledRenderTarget> local_498;
  TIntPoint<int>_u_0_s_0 local_490;
  FShader *local_488;
  FShaderMapBase *pFStack_480;
  FRHITransitionInfo *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  TRefCountPtr<FRHITexture> *local_468;
  IRendererModule *local_460;
  FMoviePipelineSurfaceReader *local_458;
  undefined8 local_450;
  int local_448;
  undefined8 local_440;
  int local_438;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_430;
  FRHITransitionInfo local_420;
  FRHITransitionInfo local_3f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3b8;
  TShaderRefBase<FScreenPSInvertAlpha,FShaderMapPointerTable> local_3a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_398;
  TShaderRefBase<FScreenPS,FShaderMapPointerTable> local_388;
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  TArrayView<FRHITransitionInfo_const_,int> local_318;
  FGraphicsPipelineStateInitializer local_308;
  FRHIRenderPassInfo local_228;
  FPooledRenderTargetDesc local_128;
  undefined1 local_c8 [80];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_468 = param_1;
  local_458 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&RendererModuleName,"Renderer");
    _Init_thread_footer(&::_TSS0);
  }
  local_460 = FModuleManager::GetModuleChecked<IRendererModule>(RendererModuleName);
  this->bQueuedForCapture = true;
  this_01 = (FRHICommandListBase *)GetImmediateCommandList_ForRenderCommand();
  TVar3 = (this->Size).field0_0x0._s_0;
  EVar2 = this->PixelFormat;
  iVar16 = TVar3.X;
  local_490 = TVar3;
  if ((iVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x6b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((TVar3.Y == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExtent.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x6c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128.ClearValue.Value.Color[3] = FClearValueBinding::None.Value.Color[3];
  local_128.UAVFormat = PF_Unknown;
  local_128.DebugName = L"UnknownTexture2D";
  local_128.NumSamples = '\x01';
  local_128.FastVRAMPercentage = 0xff;
  local_128.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_128.AliasableFormats.ArrayNum = 0;
  local_128.AliasableFormats.ArrayMax = 1;
  local_128.Depth = 0;
  local_128.ArraySize = 1;
  local_128.field13_0x58.PackedBits = '\0';
  local_128.NumMips = '\x01';
  local_128.Flags = RenderTargetable;
  local_128.ClearValue._0_8_ = FClearValueBinding::None._0_8_;
  local_128.ClearValue.Value._4_8_ = FClearValueBinding::None.Value._4_8_;
  local_128.Format = EVar2;
  local_128.Extent.field0_0x0 = (TIntPoint<int>_u_0)TVar3;
  if (((iVar16 == 0) || (TVar3.Y == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewDesc.Is2DTexture()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RendererInterface.h"
                         ,0x7a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_498.Reference = (IPooledRenderTarget *)0x0;
  pFVar8 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_c8,&local_128);
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,this_01,pFVar8,&local_498,L"ResampleTexture");
  if ((void *)local_c8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._64_8_);
  }
  if ((local_498.Reference == (IPooledRenderTarget *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResampleTexturePooledRenderTarget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                         ,0x62,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_470 = 1;
  local_420.field1_0x8 =
       (FRHITransitionInfo_u_8)((local_498.Reference)->RenderTargetItem).TargetableTexture.Reference
  ;
  local_420._padding_._4_2_ = 0xffff;
  local_478 = &local_420;
  local_358._12_4_ = uStack_46c;
  local_358.ArrayNum = 1;
  local_420._padding_._0_4_ = 0xffffffff;
  local_420.Type = Texture;
  local_420.AccessBefore = None;
  local_420.AccessAfter = RTV;
  local_420.Flags = None;
  local_420.CommitInfo.bIsSet = false;
  local_358.DataPtr = local_478;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_01,&local_358,None);
  local_228.ColorRenderTargets.Elements[0].RenderTarget =
       ((local_498.Reference)->RenderTargetItem).TargetableTexture.Reference;
  local_228.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_228.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_228.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_228.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_228.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_228.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_228.ResolveRect.X1 = -1;
  local_228.ResolveRect.Y1 = -1;
  local_228.ResolveRect.X2 = -1;
  local_228.ResolveRect.Y2 = -1;
  local_228.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_228.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_228.NopAccess = None;
  local_228.NumOcclusionQueries = 0;
  local_228.bOcclusionQueries = false;
  local_228.MultiViewCount = '\0';
  local_228.SubpassHint = None;
  if ((local_228.ColorRenderTargets.Elements[0].RenderTarget == (FRHITexture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorRT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x14b0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_228.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_228.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_228.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_228.ColorRenderTargets.Elements[0].Action = Load_Store;
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)this_01,&local_228,L"MoviePipelineSurfaceResolveRenderTarget");
  fVar18 = (float)local_490.Y;
  if ((GRHICommandList.bLatchedBypass == false) || ((this_01->PersistentState).bImmediate == '\0'))
  {
    pFVar15 = FMemStackBase::Alloc((FMemStackBase *)this_01,0x28,8);
    this_01->NumCommands = this_01->NumCommands + 1;
    *this_01->CommandLink = pFVar15;
    this_01->CommandLink = &pFVar15->Next;
    pFVar15->Next = (FRHICommandBase *)0x0;
    pFVar15->_padding_ = (longlong)&___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)&pFVar15[1].Next + 4) = (float)iVar16;
    *(float *)&pFVar15[2]._padding_ = fVar18;
    pFVar15[1]._padding_ = 0;
    *(undefined4 *)&pFVar15[1].Next = 0;
    *(undefined4 *)((longlong)&pFVar15[2]._padding_ + 4) = 0x3f800000;
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext(this_01);
    pcVar5 = *(code **)(pIVar9->_padding_ + 0x1a0);
    (*pcVar5)(pIVar9,pcVar5,0,0);
  }
  local_308.RenderTargetsEnabled = 0;
  local_308.RenderTargetFormats.Elements[0] = '\0';
  local_308.RenderTargetFormats.Elements[1] = '\0';
  local_308.RenderTargetFormats.Elements[2] = '\0';
  local_308.RenderTargetFormats.Elements[3] = '\0';
  local_308.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_308.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_308.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_308.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_308.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_308.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_308.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_308.BlendState = (FRHIBlendState *)0x0;
  local_308.RasterizerState = (FRHIRasterizerState *)0x0;
  local_308.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_308.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_308.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_308.RenderTargetFlags.Elements[0] = None;
  local_308.RenderTargetFlags.Elements[1] = None;
  local_308.RenderTargetFlags.Elements[2] = None;
  local_308.RenderTargetFlags.Elements[3] = None;
  local_308.RenderTargetFlags.Elements[4] = None;
  local_308.RenderTargetFlags.Elements[5] = None;
  local_308.RenderTargetFlags.Elements[6] = None;
  local_308.RenderTargetFlags.Elements[7] = None;
  local_308.RenderTargetFormats.Elements[4] = '\0';
  local_308.RenderTargetFormats.Elements[5] = '\0';
  local_308.RenderTargetFormats.Elements[6] = '\0';
  local_308.RenderTargetFormats.Elements[7] = '\0';
  local_308.DepthStencilTargetFormat = PF_Unknown;
  local_308.DepthStencilTargetFlag = None;
  local_308.DepthTargetLoadAction = ENoAction;
  local_308.DepthTargetStoreAction = ENoAction;
  local_308.StencilTargetLoadAction = ENoAction;
  local_308.StencilTargetStoreAction = ENoAction;
  local_308.DepthStencilAccess.Value = DepthNop;
  local_308.NumSamples = 0;
  local_308.SubpassHint = None;
  local_308.SubpassIndex = '\0';
  local_308.ConservativeRasterization = Disabled;
  local_308.bDepthBounds = false;
  local_308.MultiViewCount = '\0';
  local_308.bHasFragmentDensityAttachment = false;
  local_308.bAllowVariableRateShading = true;
  local_308.ShadingRate = VRSSR_1x1;
  local_308.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_308.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)this_01,&local_308);
  local_308.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_308.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_308.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar10 = (FShaderType *)FScreenVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_02,&local_430,pFVar10,0);
  if (local_430.ShaderContent == (FShader *)0x0) {
    FVar11 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_378);
    ::FName::ToString((FName *)FVar11,&local_348);
    FScreenVS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FScreenVS::GetStaticType();
  local_308.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  aVar12 = (atomic<FRHIShader_*>)0x0;
  local_490 = (TIntPoint<int>_u_0_s_0)local_430.ShaderMap;
  if (local_430.ShaderContent != (FShader *)0x0) {
    this_00 = ((local_430.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    aVar12 = (this_00->RHIShaders).Ptr[(local_430.ShaderContent)->ResourceIndex];
    if ((aVar12 == (atomic<FRHIShader_*>)0x0) &&
       (aVar12 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,(local_430.ShaderContent)->ResourceIndex,true),
       aVar12 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_430.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FShader::GetType(local_430.ShaderContent,(local_430.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar12 = (atomic<FRHIShader_*>)0x0;
    }
  }
  local_308.PrimitiveType = PT_TriangleList;
  local_308.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar12;
  if (this->bInvertAlpha == false) {
    pFVar10 = (FShaderType *)FScreenPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_02,&local_398,pFVar10,0);
    if ((FScreenPSInvertAlpha *)local_398.ShaderContent == (FScreenPSInvertAlpha *)0x0) {
      FVar11 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_368);
      ::FName::ToString((FName *)FVar11,&local_328);
      FScreenPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FScreenPS::GetStaticType();
    local_388.ShaderContent = (FScreenPS *)local_398.ShaderContent;
    local_388.ShaderMap = local_398.ShaderMap;
    local_308.BoundShaderState.PixelShaderRHI =
         TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_388,true);
    SetGraphicsPipelineState((FRHICommandList *)this_01,&local_308,0,CheckApply,true);
    TVar17 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    pFVar13 = (FRHIGraphicsShader *)
              TShaderRefBase<FScreenPS,FShaderMapPointerTable>::GetPixelShader(&local_388,true);
  }
  else {
    pFVar10 = (FShaderType *)FScreenPSInvertAlpha::GetStaticType();
    FGlobalShaderMap::GetShader(this_02,&local_3b8,pFVar10,0);
    if ((FScreenPSInvertAlpha *)local_3b8.ShaderContent == (FScreenPSInvertAlpha *)0x0) {
      FVar11 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_370);
      ::FName::ToString((FName *)FVar11,&local_338);
      FScreenPSInvertAlpha::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FScreenPSInvertAlpha::GetStaticType();
    local_3a8.ShaderContent = (FScreenPSInvertAlpha *)local_3b8.ShaderContent;
    local_3a8.ShaderMap = local_3b8.ShaderMap;
    local_308.BoundShaderState.PixelShaderRHI =
         TShaderRefBase<FScreenPSInvertAlpha,FShaderMapPointerTable>::GetPixelShader
                   (&local_3a8,true);
    SetGraphicsPipelineState((FRHICommandList *)this_01,&local_308,0,CheckApply,true);
    TVar17 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    pFVar13 = (FRHIGraphicsShader *)
              TShaderRefBase<FScreenPSInvertAlpha,FShaderMapPointerTable>::GetPixelShader
                        (&local_3a8,true);
    local_398.ShaderContent = local_3b8.ShaderContent;
  }
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters(this_01);
  SetTextureParameter(pFVar14,&((FScreenPSInvertAlpha *)local_398.ShaderContent)->InTexture,
                      local_468->Reference);
  SetSamplerParameter(pFVar14,&((FScreenPSInvertAlpha *)local_398.ShaderContent)->InTextureSampler,
                      TVar17.Reference);
  FRHICommandList::SetBatchedShaderParameters((FRHICommandList *)this_01,pFVar13,pFVar14);
  pFStack_480 = (FShaderMapBase *)local_490;
  local_488 = local_430.ShaderContent;
  (**(code **)((longlong)*local_460 + 0xe8))(local_460,this_01,0,0);
  if (((this_01->PersistentState).bInsideRenderPass == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this_01->PersistentState).bInsideComputePass != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInsideComputePass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x10c6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar7 = (this_01->PersistentState).field_0xdb;
  if ((this_01->PersistentState).bInsideOcclusionQueryBatch != '\0') {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,this_01);
    (this_01->PersistentState).bInsideOcclusionQueryBatch = '\0';
    bVar7 = (this_01->PersistentState).field_0xdb;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar7 & 0x20) == 0)) {
    pFVar15 = FMemStackBase::Alloc((FMemStackBase *)this_01,0x10,8);
    this_01->NumCommands = this_01->NumCommands + 1;
    *this_01->CommandLink = pFVar15;
    this_01->CommandLink = &pFVar15->Next;
    pFVar15->Next = (FRHICommandBase *)0x0;
    pFVar15->_padding_ = (longlong)&___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar9 = FRHICommandListBase::GetContext(this_01);
    (**(code **)(pIVar9->_padding_ + 0x250))(pIVar9);
  }
  (this_01->PersistentState).bInsideRenderPass = '\0';
  (this_01->PersistentState).SubpassHint = None;
  (this_01->PersistentState).SubpassIndex = '\0';
  pFStack_480 = (FShaderMapBase *)CONCAT44(pFStack_480._4_4_,1);
  local_3f0.field1_0x8 =
       (FRHITransitionInfo_u_8)((local_498.Reference)->RenderTargetItem).TargetableTexture.Reference
  ;
  local_3f0._padding_._4_2_ = 0xffff;
  local_488 = (FShader *)&local_3f0;
  local_318._8_8_ = pFStack_480;
  local_3f0._padding_._0_4_ = 0xffffffff;
  local_3f0.Type = Texture;
  local_3f0.AccessBefore = RTV;
  local_3f0.AccessAfter = CopySrc;
  local_3f0.Flags = None;
  local_3f0.CommitInfo.bIsSet = false;
  local_318.DataPtr = (FRHITransitionInfo *)local_488;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_01,&local_318,None);
  pFVar4 = (local_458->ReadbackTexture).Ptr;
  local_438 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_448 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_440 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_450 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (**(code **)(pFVar4->_padding_ + 8))
            (pFVar4,this_01,((local_498.Reference)->RenderTargetItem).TargetableTexture.Reference,
             &local_440);
  if (local_228.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_228.ShadingRateTexture.Reference);
  }
  if (local_498.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_498.Reference)->_padding_ + 0x38))();
  }
  if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  return;
}

