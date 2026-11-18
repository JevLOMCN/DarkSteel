// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 12

// FTexture @ 145defa90

FTexture * __thiscall FTexture::FTexture(FTexture *this,FTexture *param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  uVar1 = *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  (this->TextureRHI).Reference = (FRHITexture *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = uVar1;
  this->_padding_ = (longlong)&___7FTexture__6B_;
  (this->TextureRHI).Reference = (param_1->TextureRHI).Reference;
  (param_1->TextureRHI).Reference = (FRHITexture *)0x0;
  (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->SamplerStateRHI).Reference = (param_1->SamplerStateRHI).Reference;
  (param_1->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->DeferredPassSamplerStateRHI).Reference = (param_1->DeferredPassSamplerStateRHI).Reference;
  (param_1->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  this->LastRenderTime = param_1->LastRenderTime;
  fVar2 = (param_1->MipBiasFade).MipCountDelta;
  fVar3 = (param_1->MipBiasFade).StartTime;
  fVar4 = (param_1->MipBiasFade).MipCountFadingRate;
  (this->MipBiasFade).TotalMipCount = (param_1->MipBiasFade).TotalMipCount;
  (this->MipBiasFade).MipCountDelta = fVar2;
  (this->MipBiasFade).StartTime = fVar3;
  (this->MipBiasFade).MipCountFadingRate = fVar4;
  (this->MipBiasFade).BiasOffset = (param_1->MipBiasFade).BiasOffset;
  this->bGreyScaleFormat = param_1->bGreyScaleFormat;
  this->bIgnoreGammaConversions = param_1->bIgnoreGammaConversions;
  this->bSRGB = param_1->bSRGB;
  return this;
}

// FTexture @ 145defb40

FTexture * __thiscall FTexture::FTexture(FTexture *this,FTexture *param_1)

{
  FRHITexture *this_00;
  FRHIResource *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this->_padding_ = (longlong)&___7FRenderResource__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = (longlong)&___7FTexture__6B_;
  (this->TextureRHI).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->TextureRHI).Reference;
  (this->TextureRHI).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  pFVar1 = (FRHIResource *)(param_1->SamplerStateRHI).Reference;
  (this->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  pFVar1 = (FRHIResource *)(param_1->DeferredPassSamplerStateRHI).Reference;
  (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  this->LastRenderTime = param_1->LastRenderTime;
  fVar2 = (param_1->MipBiasFade).MipCountDelta;
  fVar3 = (param_1->MipBiasFade).StartTime;
  fVar4 = (param_1->MipBiasFade).MipCountFadingRate;
  (this->MipBiasFade).TotalMipCount = (param_1->MipBiasFade).TotalMipCount;
  (this->MipBiasFade).MipCountDelta = fVar2;
  (this->MipBiasFade).StartTime = fVar3;
  (this->MipBiasFade).MipCountFadingRate = fVar4;
  (this->MipBiasFade).BiasOffset = (param_1->MipBiasFade).BiasOffset;
  this->bGreyScaleFormat = param_1->bGreyScaleFormat;
  this->bIgnoreGammaConversions = param_1->bIgnoreGammaConversions;
  this->bSRGB = param_1->bSRGB;
  return this;
}

// FTexture @ 145defc20

FTexture * __thiscall FTexture::FTexture(FTexture *this)

{
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTexture__6B_;
  this->LastRenderTime = -3.4028234663852886e+38;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x105;
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  (this->TextureRHI).Reference = (FRHITexture *)0x0;
  (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)0x0;
  (this->MipBiasFade).TotalMipCount = 0.0;
  (this->MipBiasFade).MipCountDelta = 0.0;
  (this->MipBiasFade).StartTime = 0.0;
  (this->MipBiasFade).MipCountFadingRate = 0.0;
  (this->MipBiasFade).BiasOffset = 0.0;
  this->bGreyScaleFormat = false;
  this->bIgnoreGammaConversions = false;
  this->bSRGB = false;
  return this;
}

// ~FTexture @ 145df2090

void __thiscall FTexture::~FTexture(FTexture *this)

{
  FRHIResource *pFVar1;
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7FTexture__6B_;
  pFVar1 = (FRHIResource *)(this->DeferredPassSamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->SamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar1);
  }
  this_00 = (this->TextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator= @ 145df24e0

FTexture * __thiscall FTexture::operator=(FTexture *this,FTexture *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  TRefCountPtr<FRHISamplerState> *pTVar2;
  TRefCountPtr<FRHISamplerState> *pTVar3;
  FRHITexture *this_00;
  FRHIResource *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TRefCountPtr<FRHITexture> *pTVar8;
  
  pTVar1 = &this->TextureRHI;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  pTVar8 = &param_1->TextureRHI;
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  if (pTVar1 != pTVar8) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar8->Reference;
    pTVar8->Reference = (FRHITexture *)0x0;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pTVar2 = &param_1->SamplerStateRHI;
  pTVar3 = &this->SamplerStateRHI;
  if (pTVar3 != pTVar2) {
    pFVar4 = (FRHIResource *)pTVar3->Reference;
    pTVar3->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHISamplerState *)0x0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  pTVar2 = &param_1->DeferredPassSamplerStateRHI;
  pTVar3 = &this->DeferredPassSamplerStateRHI;
  if (pTVar3 != pTVar2) {
    pFVar4 = (FRHIResource *)pTVar3->Reference;
    pTVar3->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHISamplerState *)0x0;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar4);
    }
  }
  this->LastRenderTime = param_1->LastRenderTime;
  fVar5 = (param_1->MipBiasFade).MipCountDelta;
  fVar6 = (param_1->MipBiasFade).StartTime;
  fVar7 = (param_1->MipBiasFade).MipCountFadingRate;
  (this->MipBiasFade).TotalMipCount = (param_1->MipBiasFade).TotalMipCount;
  (this->MipBiasFade).MipCountDelta = fVar5;
  (this->MipBiasFade).StartTime = fVar6;
  (this->MipBiasFade).MipCountFadingRate = fVar7;
  (this->MipBiasFade).BiasOffset = (param_1->MipBiasFade).BiasOffset;
  this->bGreyScaleFormat = param_1->bGreyScaleFormat;
  this->bIgnoreGammaConversions = param_1->bIgnoreGammaConversions;
  this->bSRGB = param_1->bSRGB;
  return this;
}

// operator= @ 145df25d0

FTexture * __thiscall FTexture::operator=(FTexture *this,FTexture *param_1)

{
  FRHITexture *this_00;
  FRHITexture *this_01;
  FRHIResource *pFVar1;
  FRHIResource *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  this_00 = (param_1->TextureRHI).Reference;
  this_01 = (this->TextureRHI).Reference;
  if (this_01 != this_00) {
    (this->TextureRHI).Reference = this_00;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  pFVar1 = (FRHIResource *)(param_1->SamplerStateRHI).Reference;
  pFVar2 = (FRHIResource *)(this->SamplerStateRHI).Reference;
  if (pFVar2 != pFVar1) {
    (this->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar1);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  pFVar1 = (FRHIResource *)(param_1->DeferredPassSamplerStateRHI).Reference;
  pFVar2 = (FRHIResource *)(this->DeferredPassSamplerStateRHI).Reference;
  if (pFVar2 != pFVar1) {
    (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
    if (pFVar1 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar1);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  this->LastRenderTime = param_1->LastRenderTime;
  fVar3 = (param_1->MipBiasFade).MipCountDelta;
  fVar4 = (param_1->MipBiasFade).StartTime;
  fVar5 = (param_1->MipBiasFade).MipCountFadingRate;
  (this->MipBiasFade).TotalMipCount = (param_1->MipBiasFade).TotalMipCount;
  (this->MipBiasFade).MipCountDelta = fVar3;
  (this->MipBiasFade).StartTime = fVar4;
  (this->MipBiasFade).MipCountFadingRate = fVar5;
  (this->MipBiasFade).BiasOffset = (param_1->MipBiasFade).BiasOffset;
  this->bGreyScaleFormat = param_1->bGreyScaleFormat;
  this->bIgnoreGammaConversions = param_1->bIgnoreGammaConversions;
  this->bSRGB = param_1->bSRGB;
  return this;
}

// GetFriendlyName @ 145e0f370

FString * __thiscall FTexture::GetFriendlyName(FTexture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FTexture");
  return __return_storage_ptr__;
}

// GetOrCreateSamplerState @ 145e0fd20

FRHISamplerState * __cdecl FTexture::GetOrCreateSamplerState(FSamplerStateInitializerRHI *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FRHISamplerState *pFVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FLLMScope local_res10 [2];
  TPairInitializer<FSamplerStateInitializerRHI_const_&,FRHISamplerState_*_&&> local_res18;
  FMemScope local_28;
  FRHIResource *local_20;
  FSamplerStateInitializerRHI *local_18;
  FRHIResource **local_10;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderResource.cpp"
                       ,0x1c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRHISamplerState *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSamplerStateInitializerRHI>
                    ((TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
                      *)&GTextureSamplerStateCache.field_0x20,uVar3,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x30 + GTextureSamplerStateCache._32_8_;
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      return (FRHISamplerState *)*puVar7;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1147,L"RHIMisc/CreateSamplerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1147,false,None,Default,true);
  FMemScope::FMemScope
            (&local_28,
             &`class_TRefCountPtr<FRHISamplerState>___cdecl_RHICreateSamplerState(FSamplerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1147,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x48))(GDynamicRHI,&local_res18.Value,param_1);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res10);
  FRHIResource::AddRef((FRHIResource *)local_res18.Value);
  local_20 = (FRHIResource *)local_res18.Value;
  local_10 = &local_20;
  local_18 = param_1;
  TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FSamplerStateInitializerRHI_const_&,FRHISamplerState_*_&&>_>
            ((TSet<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FRHISamplerState_*,0>,FDefaultSetAllocator>
              *)&GTextureSamplerStateCache.field_0x20,&local_res18,(bool *)&local_18);
  if ((FRHIResource *)local_res18.Value != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res18.Value);
  }
  return (FRHISamplerState *)(FRHIResource *)local_res18.Value;
}

// GetSizeX @ 145e11650

uint __thiscall FTexture::GetSizeX(FTexture *this)

{
  return 0;
}

// GetSizeY @ 145e11660

uint __thiscall FTexture::GetSizeY(FTexture *this)

{
  return 0;
}

// GetSizeZ @ 145e11670

uint __thiscall FTexture::GetSizeZ(FTexture *this)

{
  return 0;
}

// ReleaseRHI @ 145e21550

void __thiscall FTexture::ReleaseRHI(FTexture *this)

{
  FRHITexture *this_00;
  FRHIResource *pFVar1;
  
  this_00 = (this->TextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (FRHIResource *)(this->SamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->DeferredPassSamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->DeferredPassSamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar1);
    return;
  }
  return;
}

