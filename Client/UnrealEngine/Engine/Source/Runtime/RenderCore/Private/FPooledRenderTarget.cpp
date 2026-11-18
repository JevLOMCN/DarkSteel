// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// AddRef @ 145d9f900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPooledRenderTarget::AddRef(FPooledRenderTarget *this)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = &this->NumRefs;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// IsTracked @ 145dc14d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPooledRenderTarget::IsTracked(FPooledRenderTarget *this)

{
  return this->RenderTargetPool != (FRenderTargetPool *)0x0;
}

// Release @ 145dc6690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPooledRenderTarget::Release(FPooledRenderTarget *this)

{
  int *piVar1;
  int iVar2;
  FRHITexture *this_00;
  ForElementType<EPixelFormat> FVar3;
  
  LOCK();
  piVar1 = &this->NumRefs;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (FPooledRenderTarget *)0x0)) {
    FRHITextureViewCache::~FRHITextureViewCache(&(this->PooledTexture).ViewCache);
    this_00 = (this->PooledTexture).Texture.Reference;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    FVar3 = (this->Desc).AliasableFormats.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    this->_padding_ = (longlong)&___7IPooledRenderTarget__6B_;
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    ::operator_delete(this,0x110);
  }
  return iVar2 - 1U;
}

// FPooledRenderTarget @ 145ded7f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPooledRenderTarget * __thiscall
FPooledRenderTarget::FPooledRenderTarget
          (FPooledRenderTarget *this,FRHITexture *param_1,FPooledRenderTargetDesc *param_2,
          FRenderTargetPool *param_3)

{
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRHITexture *this_00;
  FRHIResource *this_01;
  FRHIResource *this_02;
  undefined8 uVar4;
  byte bVar5;
  ForElementType<EPixelFormat> _Dst;
  ForElementType<EPixelFormat> _Src;
  
  this->RenderTargetPool = param_3;
  this->_padding_ = (longlong)&___7FPooledRenderTarget__6B_;
  pTVar1 = &(this->Desc).AliasableFormats;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Desc).DebugName = param_2->DebugName;
  uVar4 = *(undefined8 *)((longlong)&(param_2->ClearValue).Value + 4);
  *(undefined8 *)&(this->Desc).ClearValue = *(undefined8 *)&param_2->ClearValue;
  *(undefined8 *)((longlong)&(this->Desc).ClearValue.Value + 4) = uVar4;
  (this->Desc).ClearValue.Value.Color[3] = (param_2->ClearValue).Value.Color[3];
  (this->Desc).Flags = param_2->Flags;
  (this->Desc).Format = param_2->Format;
  (this->Desc).UAVFormat = param_2->UAVFormat;
  (this->Desc).Extent.field0_0x0 = (param_2->Extent).field0_0x0;
  (this->Desc).Depth = param_2->Depth;
  (this->Desc).ArraySize = param_2->ArraySize;
  (this->Desc).NumMips = param_2->NumMips;
  (this->Desc).NumSamples = param_2->NumSamples;
  (this->Desc).FastVRAMPercentage = param_2->FastVRAMPercentage;
  (this->Desc).AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  _Src = (param_2->AliasableFormats).AllocatorInstance.SecondaryData;
  iVar3 = (param_2->AliasableFormats).ArrayNum;
  (this->Desc).AliasableFormats.ArrayNum = iVar3;
  if (_Src == (ForElementType<EPixelFormat>)0x0) {
    _Src = (ForElementType<EPixelFormat>)&param_2->AliasableFormats;
  }
  piVar2 = &(this->Desc).AliasableFormats.ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    _Dst = (this->Desc).AliasableFormats.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<EPixelFormat>)0x0) {
      _Dst = (ForElementType<EPixelFormat>)pTVar1;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3);
  }
  bVar5 = (this->Desc).field13_0x58.PackedBits;
  bVar5 = (bVar5 ^ (param_2->field13_0x58).PackedBits) & 1 ^ bVar5;
  (this->Desc).field13_0x58.PackedBits = bVar5;
  bVar5 = (bVar5 ^ (param_2->field13_0x58).PackedBits) & 2 ^ bVar5;
  (this->Desc).field13_0x58.PackedBits = bVar5;
  (this->Desc).field13_0x58.PackedBits =
       (bVar5 ^ (param_2->field13_0x58).PackedBits) & 3 ^ (param_2->field13_0x58).PackedBits;
  (this->Desc).field13_0x58 = param_2->field13_0x58;
  (this->PooledTexture)._padding_ = (longlong)&___7FRDGPooledTexture__6B_;
  this->NumRefs = 0;
  this->UnusedForNFrames = 0;
  *(undefined4 *)&(this->PooledTexture)._padding_ = 0;
  (this->PooledTexture).Texture.Reference = param_1;
  if (param_1 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_1);
  }
  (this->PooledTexture).ViewCache.UAVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)0x0
  ;
  (this->PooledTexture).ViewCache.UAVs.ArrayNum = 0;
  (this->PooledTexture).ViewCache.UAVs.ArrayMax = 1;
  (this->PooledTexture).ViewCache.SRVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0;
  (this->PooledTexture).ViewCache.SRVs.ArrayNum = 0;
  (this->PooledTexture).ViewCache.SRVs.ArrayMax = 1;
  *(undefined4 *)&(this->PooledTexture).Fences.TypedValue.field_0x11 = 0x1000000;
  (this->PooledTexture).Fences.TypedValue.Graphics = 0xffffffff;
  (this->PooledTexture).Fences.TypedValue.AsyncCompute = 0xffffffff;
  (this->PooledTexture).Fences.TypedValue.GraphicsForkJoin.Min = 0xffffffff;
  (this->PooledTexture).Fences.TypedValue.GraphicsForkJoin.Max = 0;
  (this->PooledTexture).Fences.TypedValue.Pipelines = None;
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != param_1) {
    this->_padding_ = (longlong)param_1;
    if (param_1 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this_01 = (FRHIResource *)this->_padding_;
  this_02 = (FRHIResource *)this->_padding_;
  if (this_02 != this_01) {
    this->_padding_ = (longlong)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_02);
    }
  }
  return this;
}

// ComputeMemorySize @ 145dfe2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPooledRenderTarget::ComputeMemorySize(FPooledRenderTarget *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x1d0))(GDynamicRHI,this->_padding_);
  if (this->_padding_ != this->_padding_) {
    iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x1d0))();
    uVar1 = iVar2 + uVar1;
  }
  return uVar1;
}

// GetDesc @ 145e0f110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPooledRenderTargetDesc * __thiscall FPooledRenderTarget::GetDesc(FPooledRenderTarget *this)

{
  return &this->Desc;
}

// GetRefCount @ 145e102c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FPooledRenderTarget::GetRefCount(FPooledRenderTarget *this)

{
  return this->NumRefs;
}

// IsFree @ 145e19130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPooledRenderTarget::IsFree(FPooledRenderTarget *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = this->NumRefs;
  if ((iVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RefCount >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0x2c8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    bVar3 = (bool)(*pcVar2)();
    return bVar3;
  }
  return iVar1 == 1;
}

// OnFrameStart @ 145e1db40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPooledRenderTarget::OnFrameStart(FPooledRenderTarget *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = this->NumRefs;
  if (iVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RefCount >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                       ,0x2c8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (iVar1 != 1) {
    if (this->UnusedForNFrames != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UnusedForNFrames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderTargetPool.cpp"
                         ,0x289,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return false;
  }
  uVar5 = this->UnusedForNFrames + 1;
  this->UnusedForNFrames = uVar5;
  return 10 < uVar5;
}

// SetDebugLabelName @ 145e24ec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledRenderTarget::SetDebugLabelName
          (FPooledRenderTarget *this,FRHICommandListBase *param_1,wchar_t *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = wcscmp((this->Desc).DebugName,param_2);
  if (iVar2 != 0) {
    lVar1 = this->_padding_;
    (this->Desc).DebugName = param_2;
    (**(code **)(GDynamicRHI->_padding_ + 0x218))(GDynamicRHI,param_1,lVar1,param_2);
  }
  return;
}

