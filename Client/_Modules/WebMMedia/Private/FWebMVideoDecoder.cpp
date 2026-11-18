// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 11

// FWebMVideoDecoder @ 14f119ee0

FWebMVideoDecoder * __thiscall
FWebMVideoDecoder::FWebMVideoDecoder(FWebMVideoDecoder *this,IWebMSamplesSink *param_1)

{
  TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
  *this_00;
  TNode *pTVar1;
  TRawPtrProxy<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
  local_res8;
  
  this_00 = ::operator_new(0x10);
  if (this_00 ==
      (TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
       *)0x0) {
    this_00 = (TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
               *)0x0;
  }
  else {
    local_res8.Object = ::operator_new(0x60);
    if (local_res8.Object == (TStorage *)0x0) {
      local_res8.Object = (TStorage *)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_res8.Object,4000);
      ((local_res8.Object)->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_res8.Object)->Pool).ArrayNum = 0;
      ((local_res8.Object)->Pool).ArrayMax = 0;
      pTVar1 = ::operator_new(0x10);
      if (pTVar1 == (TNode *)0x0) {
        ((local_res8.Object)->WaitReadyForReuse).Tail = (TNode *)0x0;
        ((local_res8.Object)->WaitReadyForReuse).Head = (TNode *)0x0;
        (local_res8.Object)->ObjectAllocatorInstance =
             (TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample> *)0x0;
      }
      else {
        pTVar1->NextNode = (TNode *)0x0;
        pTVar1->Item = (FWebMMediaTextureSample *)0x0;
        pTVar1->NextNode = (TNode *)0x0;
        ((local_res8.Object)->WaitReadyForReuse).Tail = pTVar1;
        ((local_res8.Object)->WaitReadyForReuse).Head = pTVar1;
        (local_res8.Object)->ObjectAllocatorInstance =
             (TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample> *)0x0;
      }
    }
    TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
    ::
    TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
              (this_00,&local_res8);
  }
  (this->VideoSamplePool).Ptr = (FWebMMediaTextureSamplePool *)this_00;
  (this->DecodedY).Reference = (FRHITexture *)0x0;
  (this->DecodedU).Reference = (FRHITexture *)0x0;
  (this->DecodedV).Reference = (FRHITexture *)0x0;
  (this->VideoDecodingTask).Reference = (FBaseGraphTask *)0x0;
  this->Samples = param_1;
  this->bTexturesCreated = false;
  this->bIsInitialized = false;
  return this;
}

// ~FWebMVideoDecoder @ 14f11a470

void __thiscall FWebMVideoDecoder::~FWebMVideoDecoder(FWebMVideoDecoder *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FRHITexture *pFVar4;
  FWebMMediaTextureSamplePool *pFVar5;
  
  Close(this);
  pFVar3 = (this->VideoDecodingTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pFVar4 = (this->DecodedV).Reference;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->DecodedU).Reference;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar4 = (this->DecodedY).Reference;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->VideoSamplePool).Ptr;
  if (pFVar5 != (FWebMMediaTextureSamplePool *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&pFVar5->field_0x8);
    ::operator_delete(pFVar5,0x10);
    return;
  }
  return;
}

// operator() @ 14f11a590

void __thiscall
`FWebMVideoDecoder::ConvertYUVToRGBAndSubmit'::__l10::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,int param_3,int param_4
          )

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FLLMScope local_res18 [5];
  FLLMScope local_b8;
  FLLMScope local_b4;
  FMemScope local_b0;
  FMemScope local_a8;
  FMemScope local_a0;
  FRHITexture *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  FRHITexture *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  void *local_58 [2];
  uint local_48;
  
  lVar6 = (longlong)param_3;
  FLLMScope::FLLMScope(&local_b8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,Textures,true);
  iVar5 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_7c = 0x100;
  local_98 = param_2;
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_58);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res18);
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(&local_b8);
  if (local_58[0] != (void *)0x0) {
    if ((local_48 < *(uint *)(*(longlong *)this + 0x50 + lVar6 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stride >= (uint32)Image->stride[ImageIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMVideoDecoder.cpp"
                           ,0xe7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(uint *)(*(longlong *)this + 0x50 + lVar6 * 4);
    if (local_48 == uVar1) {
      memcpy(local_58[0],*(void **)(*(longlong *)this + 0x30 + lVar6 * 8),
             (longlong)(int)(uVar1 * param_4));
    }
    else if (0 < param_4) {
      do {
        iVar2 = *(int *)(*(longlong *)this + 0x50 + lVar6 * 4);
        memcpy((void *)((ulonglong)(iVar5 * local_48) + (longlong)local_58[0]),
               (void *)((longlong)(iVar2 * iVar5) +
                       *(longlong *)(*(longlong *)this + 0x30 + lVar6 * 8)),(longlong)iVar2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_4);
    }
    local_70 = 0;
    local_60 = 3;
    local_68 = 0;
    local_5c = 0x100;
    local_78 = param_2;
    FLLMScope::FLLMScope(&local_b4,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_a0,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_78);
    FMemScope::~FMemScope(&local_a0);
    FLLMScope::~FLLMScope(&local_b4);
  }
  return;
}

// operator() @ 14f11a7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  longlong lVar2;
  longlong lVar3;
  FRHIResource *pFVar4;
  TRefCountPtr<FRHITexture> TVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1a8 [80];
  wchar_t *local_158;
  FRHITextureCreateDesc local_118;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar2 = *(longlong *)((longlong)this + 8);
  lVar3 = *(longlong *)this;
  FRHITextureCreateDesc::Create2D
            (&local_98,L"FWebMVideoDecoder_DecodedY",*(int *)(lVar2 + 0x50),*(int *)(lVar2 + 0x1c),
             PF_G8);
  FRHITextureCreateDesc::Create2D
            (&local_118,L"FWebMVideoDecoder_DecodedU",*(int *)(lVar2 + 0x54),
             *(uint *)(lVar2 + 0x1c) >> 1,PF_G8);
  FRHITextureCreateDesc::Create2D
            ((FRHITextureCreateDesc *)(local_1a8 + 0x10),L"FWebMVideoDecoder_DecodedV",
             *(int *)(lVar2 + 0x58),*(uint *)(lVar2 + 0x1c) >> 1,PF_G8);
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x40);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)local_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a8._0_8_);
  }
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x48);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)local_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a8._0_8_);
  }
  TVar5 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_1a8);
  pFVar1 = (FRHITexture *)(lVar3 + 0x50);
  if (pFVar1 != TVar5.Reference) {
    pFVar4 = (FRHIResource *)pFVar1->_padding_;
    pFVar1->_padding_ = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  if ((FRHIResource *)local_1a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1a8._0_8_);
  }
  if (local_158 != (wchar_t *)0x0) {
    FMemory::Free(local_158);
  }
  if ((void *)local_118._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  if ((void *)local_98._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_98._padding_);
  }
  return;
}

// Close @ 14f11c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMVideoDecoder::Close(FWebMVideoDecoder *this)

{
  FBaseGraphTask *pFVar1;
  bool bVar2;
  FTaskGraphInterface *this_00;
  
  pFVar1 = (this->VideoDecodingTask).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 == '\0')) {
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_00,&this->VideoDecodingTask,AnyNormalThreadNormalTask);
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    FlushRenderingCommands();
  }
  if (this->bIsInitialized != false) {
    vpx_codec_destroy(this);
    this->bTexturesCreated = false;
    this->bIsInitialized = false;
    return;
  }
  this->bTexturesCreated = false;
  return;
}

// ConvertYUVToRGBAndSubmit @ 14f11c130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FWebMVideoDecoder::ConvertYUVToRGBAndSubmit
          (FWebMVideoDecoder *this,FRHICommandListImmediate *param_1,FConvertParams *param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  uint uVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWebMMediaTextureSample *pFVar5;
  vpx_image *pvVar6;
  FRHITexture *pFVar7;
  FShaderMapResource *this_00;
  IWebMSamplesSink *pIVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  byte bVar13;
  TRefCountPtr<FRHITexture> TVar14;
  FRHITransitionInfo_u_8 FVar15;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar16;
  FName FVar17;
  atomic<FRHIShader_*> aVar18;
  FRHIPixelShader *pFVar19;
  IRHICommandContext *pIVar20;
  undefined8 *puVar21;
  FRHITexture *pFVar22;
  undefined1 auStackY_4f8 [32];
  bool local_4a8 [8];
  vpx_image *local_4a0;
  FRHITransitionInfo *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  TIntPoint<int>_u_0 local_488;
  undefined1 local_480 [56];
  longlong local_448;
  TShaderRefBase<FYUVConvertPS,FShaderMapPointerTable> local_438;
  FWebMMediaTextureSample *local_428;
  TReferenceControllerBase<1> *local_420;
  FNameEntryId local_418;
  undefined2 local_414;
  FRHITransitionInfo_u_8 local_410;
  EType local_408;
  ERHIAccess local_404;
  ERHIAccess local_400;
  EResourceTransitionFlags local_3fc;
  bool local_3f0;
  FRHITransitionInfo local_3e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3b8;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  TArrayView<FRHITransitionInfo_const_,int> local_398;
  FString local_388;
  FString local_378;
  TArrayView<FRHITransitionInfo_const_,int> local_368;
  FGraphicsPipelineStateInitializer local_358;
  FRHITextureDesc local_278;
  wchar_t *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  FRHITransitionInfo_u_8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined2 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  FRHIResource *local_110;
  undefined1 local_108;
  undefined8 local_104;
  undefined2 local_fc;
  undefined1 local_fa;
  FRHITextureDesc local_f8;
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  pTVar4 = (param_2->VideoSample).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_2->VideoSample).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_480._8_8_ = this;
  if ((pFVar5 == (FWebMMediaTextureSample *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("VideoSample.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMVideoDecoder.cpp"
                          ,0xd4,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar6 = param_2->Image;
  if ((pFVar5 == (FWebMMediaTextureSample *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar12 = IsInRenderingThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaTextureSample.cpp"
                          ,0x15,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_278.ClearValue.Value._4_8_ = 0;
  local_278.ClearValue.Value.Color[3] = 0.0;
  local_278.ClearValue._0_8_ = 1;
  local_278.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_278.ExtData = 0;
  local_228 = L"FWebMMediaTextureSample_DummyTexture2D";
  local_278.Extent.field0_0x0 = (pFVar5->TotalSize).field0_0x0;
  local_278.Depth = 1;
  local_278.ArraySize = 1;
  local_278.NumMips = '\x01';
  local_278.NumSamples = '\x01';
  local_278.Dimension = Texture2D;
  local_278.Format = PF_B8G8R8A8;
  local_278.UAVFormat = PF_Unknown;
  local_278.FastVRAMPercentage = 0xff;
  local_278.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_278.AliasableFormats.ArrayNum = 0;
  local_278.AliasableFormats.ArrayMax = 1;
  local_220 = 0x70;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_278.Flags = SRGB|ShaderResource|RenderTargetable;
  FRHITextureDesc::FRHITextureDesc(&local_f8,&local_278);
  local_a8 = local_228;
  local_a0 = (undefined4)local_220;
  local_9c = local_220._4_4_;
  local_98 = local_218;
  local_90 = local_210;
  local_88 = local_208;
  if (local_278.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_278.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  TVar14 = FRHICommandListBase::CreateTexture
                     ((FRHICommandListBase *)param_1,(FRHITextureCreateDesc *)local_480);
  pTVar1 = &pFVar5->Texture;
  if ((FRHITexture *)pTVar1 != TVar14.Reference) {
    pFVar7 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar14.Reference)->_padding_;
    (TVar14.Reference)->_padding_ = 0;
    if (pFVar7 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar7);
    }
  }
  if ((FRHIResource *)local_480._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_480._0_8_);
  }
  if (local_f8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_f8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_4a0 = pvVar6;
  `FWebMVideoDecoder::ConvertYUVToRGBAndSubmit'::__l10::<lambda_1>::operator()
            (&local_4a0,param_1,(this->DecodedY).Reference,0,pvVar6->d_h);
  `FWebMVideoDecoder::ConvertYUVToRGBAndSubmit'::__l10::<lambda_1>::operator()
            (&local_4a0,param_1,(this->DecodedU).Reference,1,pvVar6->d_h >> 1);
  `FWebMVideoDecoder::ConvertYUVToRGBAndSubmit'::__l10::<lambda_1>::operator()
            (&local_4a0,param_1,(this->DecodedV).Reference,2,pvVar6->d_h >> 1);
  FVar15.Resource = (FRHIResource *)(**(code **)(pFVar5->_padding_ + 0x48))(pFVar5);
  uStack_490 = 1;
  local_418.Value = 0xffffffff;
  local_414 = 0xffff;
  local_498 = (FRHITransitionInfo *)&local_418;
  local_398._12_4_ = uStack_48c;
  local_398.ArrayNum = 1;
  local_408 = Texture;
  local_404 = SRVGraphics;
  local_400 = RTV;
  local_3fc = None;
  local_3f0 = false;
  local_480._40_8_ = FVar15.Resource;
  local_410.Resource = FVar15.Resource;
  local_398.DataPtr = local_498;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_398,None);
  local_1e0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1d8 = 0;
  local_1d0 = 0xffffffff;
  local_1cc = 0;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0xffffffff;
  local_19c = 0;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0xffffffff;
  local_16c = 0;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0xffffffff;
  local_13c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0xffffffffffffffff;
  local_118 = 0xffffffffffffffff;
  local_110 = (FRHIResource *)0x0;
  local_108 = 0;
  local_104 = 0;
  local_fc = 0;
  local_fa = 0;
  if (((FName)FVar15.Resource == (FName)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ColorRT",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x14b0,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_1f0 = 0;
  local_1e8 = 0xffffffff;
  local_1e4 = 0x500;
  local_1f8.Resource = FVar15.Resource;
  FRHICommandList::BeginRenderPass
            ((FRHICommandList *)param_1,(FRHIRenderPassInfo *)&local_1f8,L"ConvertYUVtoRGBA");
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar16 = (FShaderType *)FYUVConvertPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_3b8,pFVar16,0);
  if (local_3b8.ShaderContent == (FShader *)0x0) {
    FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3a8);
    ::FName::ToString((FName *)FVar17,&local_388);
    FYUVConvertPS::GetStaticType();
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FYUVConvertPS::GetStaticType();
  local_438.ShaderContent = (FYUVConvertPS *)local_3b8.ShaderContent;
  local_438.ShaderMap = local_3b8.ShaderMap;
  pFVar16 = (FShaderType *)FMediaShadersVS::GetStaticType();
  FGlobalShaderMap::GetShader
            (this_01,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_480 + 0x30),pFVar16,0)
  ;
  if ((FShader *)local_480._48_8_ == (FShader *)0x0) {
    FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3a0);
    ::FName::ToString((FName *)FVar17,&local_378);
    FMediaShadersVS::GetStaticType();
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FMediaShadersVS::GetStaticType();
  aVar18 = (atomic<FRHIShader_*>)0x0;
  local_358.RenderTargetsEnabled = 0;
  local_358.RenderTargetFormats.Elements[0] = '\0';
  local_358.RenderTargetFormats.Elements[1] = '\0';
  local_358.RenderTargetFormats.Elements[2] = '\0';
  local_358.RenderTargetFormats.Elements[3] = '\0';
  local_358.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_358.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_358.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_358.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_358.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_358.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_358.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_358.BlendState = (FRHIBlendState *)0x0;
  local_358.RasterizerState = (FRHIRasterizerState *)0x0;
  local_358.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_358.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_358.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_358.RenderTargetFlags.Elements[0] = None;
  local_358.RenderTargetFlags.Elements[1] = None;
  local_358.RenderTargetFlags.Elements[2] = None;
  local_358.RenderTargetFlags.Elements[3] = None;
  local_358.RenderTargetFlags.Elements[4] = None;
  local_358.RenderTargetFlags.Elements[5] = None;
  local_358.RenderTargetFlags.Elements[6] = None;
  local_358.RenderTargetFlags.Elements[7] = None;
  local_358.RenderTargetFormats.Elements[4] = '\0';
  local_358.RenderTargetFormats.Elements[5] = '\0';
  local_358.RenderTargetFormats.Elements[6] = '\0';
  local_358.RenderTargetFormats.Elements[7] = '\0';
  local_358.DepthStencilTargetFormat = PF_Unknown;
  local_358.DepthStencilTargetFlag = None;
  local_358.DepthTargetLoadAction = ENoAction;
  local_358.DepthTargetStoreAction = ENoAction;
  local_358.StencilTargetLoadAction = ENoAction;
  local_358.StencilTargetStoreAction = ENoAction;
  local_358.DepthStencilAccess.Value = DepthNop;
  local_358.NumSamples = 0;
  local_358.SubpassHint = None;
  local_358.SubpassIndex = '\0';
  local_358.ConservativeRasterization = Disabled;
  local_358.bDepthBounds = false;
  local_358.MultiViewCount = '\0';
  local_358.bHasFragmentDensityAttachment = false;
  local_358.bAllowVariableRateShading = true;
  local_358.ShadingRate = VRSSR_1x1;
  local_358.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_358.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_358);
  local_358.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_358.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_358.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_358.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GMoviePlayerResources._32_8_;
  if ((FShader *)local_480._48_8_ != (FShader *)0x0) {
    this_00 = *(FShaderMapResource **)(local_448 + 8);
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                            ,0x426,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    aVar18 = (this_00->RHIShaders).Ptr[*(int *)(local_480._48_8_ + 0xd4)];
    if ((aVar18 == (atomic<FRHIShader_*>)0x0) &&
       (aVar18 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (this_00,*(int *)(local_480._48_8_ + 0xd4),true),
       aVar18 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((*(longlong *)(local_448 + 0x18) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("PointerTable",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x9b4,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FShader::GetType((FShader *)local_480._48_8_,*(FShaderMapPointerTable **)(local_448 + 0x18))
        ;
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar18 = (atomic<FRHIShader_*>)0x0;
    }
  }
  pFVar22 = (FRHITexture *)0x0;
  local_358.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar18;
  local_358.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FYUVConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_438,true);
  local_358.PrimitiveType = PT_TriangleStrip;
  SetGraphicsPipelineState((FRHICommandList *)param_1,&local_358,0,CheckApply,true);
  uVar11 = local_480._8_8_;
  local_488._s_0.X = pvVar6->d_w;
  local_488._s_0.Y = pvVar6->d_h;
  pFVar7 = ((TRefCountPtr<FRHITexture> *)(local_480._8_8_ + 0x50))->Reference;
  local_4a8[0] = true;
  local_480._16_8_ = pFVar22;
  if ((pFVar7->TextureDesc).Dimension == Texture2D) {
    local_480._16_8_ = pFVar7;
  }
  pFVar7 = ((TRefCountPtr<FRHITexture> *)(local_480._8_8_ + 0x48))->Reference;
  local_480._24_8_ = pFVar22;
  if ((pFVar7->TextureDesc).Dimension == Texture2D) {
    local_480._24_8_ = pFVar7;
  }
  pFVar7 = ((TRefCountPtr<FRHITexture> *)(local_480._8_8_ + 0x40))->Reference;
  local_480._32_8_ = pFVar22;
  if ((pFVar7->TextureDesc).Dimension == Texture2D) {
    local_480._32_8_ = pFVar7;
  }
  pFVar19 = TShaderRefBase<FYUVConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_438,true);
  SetShaderParametersLegacy<FRHICommandListImmediate,FYUVConvertPS,FRHIPixelShader,FRHITexture_*,FRHITexture_*,FRHITexture_*,UE::Math::TIntPoint<int>,UE::Math::TMatrix<double>_const_&,UE::Math::TVector<double>_const_&,bool>
            (param_1,&local_438,pFVar19,(FRHITexture **)(local_480 + 0x20),
             (FRHITexture **)(local_480 + 0x18),(FRHITexture **)(local_480 + 0x10),
             (TIntPoint<int> *)&local_488._s_0,&MediaShaders::YuvToRgbRec709Scaled,
             &MediaShaders::YUVOffset8bits,local_4a8);
  uVar2 = pvVar6->d_h;
  uVar3 = pvVar6->d_w;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar21;
    *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &___7FRHICommandSetViewport__6B_;
    *(float *)((longlong)puVar21 + 0x1c) = (float)uVar3;
    *(float *)(puVar21 + 4) = (float)uVar2;
    puVar21[2] = 0;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
  }
  else {
    pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar20->_padding_ + 0x1a0))(pIVar20,0,0,0);
  }
  uVar10 = GMoviePlayerResources._40_8_;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar21;
    *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &___7FRHICommandSetStreamSource__6B_;
    *(undefined4 *)(puVar21 + 2) = 0;
    puVar21[3] = uVar10;
    *(undefined4 *)(puVar21 + 4) = 0;
  }
  else {
    pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar20->_padding_ + 0x198))(pIVar20,0,uVar10,0);
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar21;
    *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &___7FRHICommandDrawPrimitive__6B_;
    *(undefined4 *)(puVar21 + 2) = 0;
    *(undefined4 *)((longlong)puVar21 + 0x14) = 2;
    *(undefined4 *)(puVar21 + 3) = 1;
  }
  else {
    pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar20->_padding_ + 0x1e0))(pIVar20,0,2,1);
  }
  if (((param_1->field_0x29b & 2) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInsideRenderPass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x10c5,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((param_1->field_0x29b & 4) != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsInsideComputePass()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x10c6,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar13 = param_1->field_0x29b;
  if ((bVar13 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1);
    bVar13 = param_1->field_0x29b & 0xf7;
    param_1->field_0x29b = bVar13;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar13 & 0x20) == 0)) {
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar21;
    *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
    puVar21[1] = 0;
    *puVar21 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar20->_padding_ + 0x250))(pIVar20);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  uStack_490 = 1;
  local_3e8._padding_._4_2_ = 0xffff;
  local_3e8.field1_0x8 = (FRHITransitionInfo_u_8)local_480._40_8_;
  local_498 = &local_3e8;
  local_368._12_4_ = uStack_48c;
  local_368.ArrayNum = 1;
  *(undefined2 *)&param_1->field_0x298 = 0;
  local_3e8._padding_._0_4_ = 0xffffffff;
  local_3e8.Type = Texture;
  local_3e8.AccessBefore = RTV;
  local_3e8.AccessAfter = SRVGraphics;
  local_3e8.Flags = None;
  local_3e8.CommitInfo.bIsSet = false;
  local_368.DataPtr = local_498;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_368,None);
  pIVar8 = *(IWebMSamplesSink **)(uVar11 + 0x60);
  pcVar9 = *(code **)*pIVar8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_428 = pFVar5;
  local_420 = pTVar4;
  if ((pFVar5 == (FWebMMediaTextureSample *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (*pcVar9)(pIVar8,&local_428);
  if (local_110 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_110);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// CreateTextures @ 14f11cf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWebMVideoDecoder::CreateTextures
          (FWebMVideoDecoder *this,FRHICommandListBase *param_1,vpx_image *param_2)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *pFVar2;
  TRefCountPtr<FRHITexture> TVar3;
  undefined1 auStack_1e8 [32];
  undefined1 local_1b8 [80];
  wchar_t *local_168;
  FRHITextureCreateDesc local_128;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  FRHITextureCreateDesc::Create2D
            (&local_a8,L"FWebMVideoDecoder_DecodedY",param_2->stride[0],param_2->d_h,PF_G8);
  FRHITextureCreateDesc::Create2D
            (&local_128,L"FWebMVideoDecoder_DecodedU",param_2->stride[1],param_2->d_h >> 1,PF_G8);
  FRHITextureCreateDesc::Create2D
            ((FRHITextureCreateDesc *)(local_1b8 + 0x10),L"FWebMVideoDecoder_DecodedV",
             param_2->stride[2],param_2->d_h >> 1,PF_G8);
  TVar3 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1b8);
  pTVar1 = &this->DecodedY;
  if ((FRHITexture *)pTVar1 != TVar3.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHIResource *)local_1b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1b8._0_8_);
  }
  TVar3 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1b8);
  pTVar1 = &this->DecodedU;
  if ((FRHITexture *)pTVar1 != TVar3.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHIResource *)local_1b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1b8._0_8_);
  }
  TVar3 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1b8);
  pTVar1 = &this->DecodedV;
  if ((FRHITexture *)pTVar1 != TVar3.Reference) {
    pFVar2 = pTVar1->Reference;
    pTVar1->Reference = (FRHITexture *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FRHIResource *)local_1b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1b8._0_8_);
  }
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free(local_168);
  }
  if ((void *)local_128._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  return;
}

// DecodeVideoFramesAsync @ 14f11d430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMVideoDecoder::DecodeVideoFramesAsync
          (FWebMVideoDecoder *this,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  ForAnyElementType *pFVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  FBaseGraphTask *pFVar6;
  TSharedPtr<FWebMFrame,1> *pTVar7;
  ForAnyElementType FVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  TRefCountPtr<FBaseGraphTask> *pTVar10;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  undefined8 *local_a0;
  code *local_98 [5];
  undefined8 *local_70;
  TRefCountPtr<FBaseGraphTask> local_68 [4];
  TRefCountPtr<FBaseGraphTask> *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      bUseRenderThread = FGenericPlatformMisc::UseRenderThread();
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (bUseRenderThread == false) {
    DoDecodeVideoFrames(this,param_1);
  }
  else {
    pFVar6 = (this->VideoDecodingTask).Reference;
    pTVar10 = &this->VideoDecodingTask;
    local_48 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    local_3c = 4;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
      UNLOCK();
      local_68[0].Reference = pFVar6;
    }
    local_40 = (uint)(pFVar6 != (FBaseGraphTask *)0x0);
    iVar5 = param_1->ArrayNum;
    pTVar7 = (TSharedPtr<FWebMFrame,1> *)(param_1->AllocatorInstance).Data;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = iVar5;
    if (iVar5 == 0) {
      local_a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,0,&local_b0,iVar5,&local_a4);
      ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
                (local_b0.Data,pTVar7,iVar5);
    }
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    iVar5 = local_a8;
    FVar8.Data = local_b0.Data;
    *local_70 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FWebMVideoDecoder::DecodeVideoFramesAsync'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    puVar1 = local_70 + 1;
    pFVar2 = (ForAnyElementType *)(local_70 + 2);
    *puVar1 = this;
    pFVar2->Data = (FScriptContainerElement *)0x0;
    *(int *)(local_70 + 3) = local_a8;
    if (local_a8 == 0) {
      *(int *)((longlong)local_70 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_a8,0,pFVar2,local_a8,(int *)((longlong)local_70 + 0x1c));
      ConstructItems<TSharedPtr<FWebMFrame,1>,TSharedPtr<FWebMFrame,1>,int>
                (pFVar2->Data,(TSharedPtr<FWebMFrame,1> *)FVar8.Data,iVar5);
    }
    if (puVar1 != (undefined8 *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWebMVideoDecoder::DecodeVideoFramesAsync'::__l5::<lambda_1>,void>
                    ::Call;
    }
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_a0,(TStatIdData *)local_98,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,(Type)local_68);
    if ((FBaseGraphTask *)pTVar10 != TVar9.Reference) {
      pFVar6 = pTVar10->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar10->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (pFVar6 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar3 = &pFVar6->field_0x30;
        iVar5 = *(int *)puVar3;
        *(int *)puVar3 = *(int *)puVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
        }
      }
    }
    if (local_a0 != (undefined8 *)0x0) {
      LOCK();
      piVar4 = (int *)(local_a0 + 6);
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (local_a0 != (undefined8 *)0x0)) {
        (**(code **)*local_a0)(local_a0,1);
      }
    }
    DestructItems<TSharedPtr<FWebMFrame,1>,int>((TSharedPtr<FWebMFrame,1> *)local_b0.Data,local_a8);
    if ((TSharedPtr<FWebMFrame,1> *)local_b0.Data != (TSharedPtr<FWebMFrame,1> *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    pTVar10 = local_68;
    if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      pTVar10 = local_48;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar10,local_40);
    if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}

// DoDecodeVideoFrames @ 14f11dfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMVideoDecoder::DoDecodeVideoFrames
          (FWebMVideoDecoder *this,
          TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TIntPoint<int>_u_0_s_0 *pTVar2;
  undefined4 uVar3;
  FWebMMediaTextureSamplePool *pFVar4;
  longlong lVar5;
  long64 lVar6;
  long64 lVar7;
  TIntPoint<int>_u_0_s_0 TVar8;
  TIntPoint<int>_u_0_s_0 TVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  int iVar12;
  code *pcVar13;
  FRenderCommandList *pFVar14;
  FCommandList *pFVar15;
  FRenderCommandTag *pFVar16;
  FWebMMediaTextureSample *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  ulonglong uVar19;
  undefined ***pppuVar20;
  code **ppcVar21;
  longlong *plVar22;
  TReferenceControllerBase<1> *pTVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_148 [4];
  uint local_144;
  int local_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  FScriptContainerElement *local_128;
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> *local_120;
  code *local_118 [2];
  undefined **local_108;
  FWebMVideoDecoder *pFStack_100;
  code *local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FWebMVideoDecoder *pFStack_a0;
  code *local_98;
  undefined ***local_90;
  byte local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar24 = (param_1->AllocatorInstance).Data;
  local_144 = param_1->ArrayNum;
  uVar19 = (ulonglong)(int)local_144;
  local_128 = pFVar24 + uVar19 * 0x10;
  local_120 = param_1;
  while( true ) {
    pFVar10 = local_128;
    if (local_120->ArrayNum != (int)uVar19) {
      local_148[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWebMFrame,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_148);
    }
    if (pFVar24 == pFVar10) {
      return;
    }
    if ((*(longlong *)pFVar24 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar3 = *(undefined4 *)(*(longlong *)pFVar24 + 8);
    if ((*(longlong *)pFVar24 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) break;
    local_158 = 0;
    iVar12 = vpx_codec_decode(this,**(undefined8 **)pFVar24,uVar3,0);
    if (iVar12 != 0) {
      if (3 < (byte)LogWebMMedia._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
      }
      return;
    }
    local_130 = 0;
    pcVar13 = (code *)vpx_codec_get_frame(this,&local_130);
    while (pcVar13 != (code *)0x0) {
      if (this->bTexturesCreated == false) {
        this->bTexturesCreated = true;
        local_108 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`32'::<lambda_1>,1,0>
                     ::_vftable_;
        local_118[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
        local_f0 = (undefined ***)0x0;
        pFStack_100 = this;
        local_f8 = pcVar13;
        pFVar14 = FRenderCommandList::GetInstanceTLS();
        if (pFVar14 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l32::TSTR_WebMMediaPlayerCreateTextures145>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
        }
        else {
          pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
          local_b8._0_8_ = local_118[0];
          local_90 = local_f0;
          local_f0 = (undefined ***)0x0;
          local_a8 = local_108;
          pFStack_a0 = pFStack_100;
          local_98 = local_f8;
          local_118[0] = (code *)0x0;
          local_88 = 2;
          pFVar16 = (FRenderCommandTag *)
                    TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l32::TSTR_WebMMediaPlayerCreateTextures145>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_b8,pFVar16);
          uVar19 = (ulonglong)local_88;
          if ((2 < uVar19) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar11)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_b8._0_8_ != (code *)0x0) {
              pppuVar20 = (undefined ***)(local_b8 + 0x10);
              if (local_90 != (undefined ***)0x0) {
                pppuVar20 = local_90;
              }
              (*(code *)(*pppuVar20)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_b8);
          }
        }
        if (local_118[0] != (code *)0x0) {
          pppuVar20 = &local_108;
          if (local_f0 != (undefined ***)0x0) {
            pppuVar20 = local_f0;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
      pFVar4 = (this->VideoSamplePool).Ptr;
      pFVar17 = TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
                ::TStorage::Acquire(*(TStorage **)pFVar4,true);
      if ((pFVar17 == (FWebMMediaTextureSample *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaObjectPool.h"
                              ,0x139,L""), bVar11)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar5 = *(longlong *)pFVar4;
      plVar22 = *(longlong **)&pFVar4->field_0x8;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
        UNLOCK();
      }
      pTVar18 = ::operator_new(0x28);
      if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        *(longlong **)&pTVar18[1].SharedReferenceCount = plVar22;
        plVar22 = (longlong *)0x0;
        pTVar18[1]._padding_ = lVar5;
        pTVar18->SharedReferenceCount = (atomic<int>)0x1;
        pTVar18->WeakReferenceCount = (atomic<int>)0x1;
        pTVar18->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFWebMMediaTextureSample__VTDeleter___TMediaObjectPool_VFWebMMediaTextureSample__V__TMediaPoolDefaultObjectAllocator_VFWebMMediaTextureSample_______00_SharedPointerInternals__6B_
        ;
        pTVar18[2]._padding_ = (longlong)pFVar17;
      }
      if ((pFVar17 == (FWebMMediaTextureSample *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InRawPtrProxy.Object != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x115,L""), bVar11)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar22 + 8))(plVar22,1);
        }
      }
      if ((*(longlong *)pFVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      lVar6 = *(long64 *)(*(longlong *)pFVar24 + 0x18);
      if ((*(longlong *)pFVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uStack_13c = *(undefined4 *)(pcVar13 + 0x1c);
      pTVar2 = (TIntPoint<int>_u_0_s_0 *)(pcVar13 + 0x18);
      local_140 = pTVar2->X;
      TVar9 = *pTVar2;
      TVar8 = *pTVar2;
      lVar7 = *(long64 *)(*(longlong *)pFVar24 + 0x10);
      (pFVar17->Duration).Ticks = lVar6;
      (pFVar17->DisplaySize).field0_0x0._s_0 = TVar8;
      (pFVar17->Time).Ticks = lVar7;
      (pFVar17->TotalSize).field0_0x0._s_0 = TVar9;
      pTVar23 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        pTVar23 = pTVar18;
      }
      local_138 = local_140;
      uStack_134 = uStack_13c;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8[0] = (code *)0x0;
      local_c0 = (code **)0x0;
      local_c0 = FMemory::Malloc(0x28,8);
      local_c0[1] = (code *)this;
      *local_c0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FWebMVideoDecoder::DoDecodeVideoFrames'::`29'::<lambda_2>,1,1>
                           ::_vftable_;
      local_c0[2] = (code *)pFVar17;
      local_c0[3] = (code *)pTVar23;
      local_c0[4] = pcVar13;
      if (local_c0 != (code **)&DAT_fffffffffffffff8) {
        local_e8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::<lambda_2>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      pFVar14 = FRenderCommandList::GetInstanceTLS();
      if (pFVar14 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FWebMVideoDecoder::DoDecodeVideoFrames_::__l29::TSTR_WebMMediaPlayerConvertYUVToRGB159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
      }
      else {
        pFVar15 = FRenderCommandList::GetRenderThread(pFVar14);
        local_78[0] = local_e8[0];
        local_50 = local_c0;
        local_c0 = (code **)0x0;
        local_68[0] = local_d8[0];
        local_68[1] = local_d8[1];
        local_68[2] = local_d8[2];
        local_e8[0] = (code *)0x0;
        local_48 = 2;
        pFVar16 = (FRenderCommandTag *)
                  TRenderCommandTag<`FWebMVideoDecoder::DoDecodeVideoFrames'::__l29::TSTR_WebMMediaPlayerConvertYUVToRGB159>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar15,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar16);
        uVar19 = (ulonglong)local_48;
        if ((2 < uVar19) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_78[0] != (code *)0x0) {
            ppcVar21 = local_78 + 2;
            if (local_50 != (code **)0x0) {
              ppcVar21 = local_50;
            }
            (**(code **)(*ppcVar21 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar19])();
        }
      }
      if (local_e8[0] != (code *)0x0) {
        ppcVar21 = local_e8 + 2;
        if (local_c0 != (code **)0x0) {
          ppcVar21 = local_c0;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      pcVar13 = (code *)vpx_codec_get_frame(this,&local_130);
    }
    pFVar24 = pFVar24 + 0x10;
    uVar19 = (ulonglong)local_144;
  }
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

// Initialize @ 14f11fab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWebMVideoDecoder::Initialize(FWebMVideoDecoder *this,char *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  Close(this);
  local_28 = 1;
  local_20 = 0;
  iVar4 = strcmp(param_1,"V_VP8");
  if (iVar4 == 0) {
    uVar5 = vpx_codec_vp8_dx();
    local_38 = 0xc;
    iVar4 = vpx_codec_dec_init_ver(this,uVar5,&local_28,0);
    if (iVar4 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("vpx_codec_dec_init_ver(&Context, vpx_codec_vp8_dx(), &CodecConfig, 0, (3 + (4 + (5)))) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMVideoDecoder.cpp"
                         ,0x53,L"");
      if (!bVar2) {
        this->bIsInitialized = true;
        return true;
      }
code_r0x00014f11fba9:
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    iVar4 = strcmp(param_1,"V_VP9");
    if (iVar4 != 0) {
      if (3 < (byte)LogWebMMedia._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
      }
      return false;
    }
    uVar5 = vpx_codec_vp9_dx();
    local_38 = 0xc;
    iVar4 = vpx_codec_dec_init_ver(this,uVar5,&local_28,0);
    if ((iVar4 != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("vpx_codec_dec_init_ver(&Context, vpx_codec_vp9_dx(), &CodecConfig, 0, (3 + (4 + (5)))) == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMVideoDecoder.cpp"
                           ,0x57,L""), bVar2)) goto code_r0x00014f11fba9;
  }
  this->bIsInitialized = true;
  return true;
}

// IsBusy @ 14f11ffa0

bool __thiscall FWebMVideoDecoder::IsBusy(FWebMVideoDecoder *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->VideoDecodingTask).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 == '\0')) {
    return true;
  }
  return false;
}

