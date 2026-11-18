// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FSlateTextureRenderTarget2DResource @ 1486949b0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FSlateTextureRenderTarget2DResource * __thiscall
FSlateTextureRenderTarget2DResource::FSlateTextureRenderTarget2DResource
          (FSlateTextureRenderTarget2DResource *this,FLinearColor *param_1,int param_2,int param_3,
          uchar param_4,ESamplerFilter param_5,TextureAddress param_6,TextureAddress param_7,
          float param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FTexture::FTexture((FTexture *)this);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  this->_padding_ = 0;
  FRenderTarget::FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredUpdateResource__;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->Format = param_4;
  this->Filter = param_5;
  this->AddressX = param_6;
  *(undefined8 *)&(this->ClearColor).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8) = uVar2;
  this->AddressY = param_7;
  this->TargetSizeX = param_2;
  this->TargetSizeY = param_3;
  this->TargetGamma = param_8;
  return this;
}

// ClampSize @ 1486a86d0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateTextureRenderTarget2DResource::ClampSize
          (FSlateTextureRenderTarget2DResource *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = this->TargetSizeX;
  iVar2 = this->TargetSizeY;
  if (iVar1 < param_1) {
    param_1 = iVar1;
  }
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if ((param_1 == iVar1) && (param_2 == iVar2)) {
    return;
  }
  this->TargetSizeX = param_1;
  this->TargetSizeY = param_2;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// GetDisplayGamma @ 1486bd9a0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

float __thiscall
FSlateTextureRenderTarget2DResource::GetDisplayGamma(FSlateTextureRenderTarget2DResource *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)&this->_padding_;
  if (((*(float *)&this->_padding_ <= __real_3a83126e) &&
      (cVar1 = (char)this->_padding_, fVar2 = __real_3f800000, cVar1 != '\t')) && (cVar1 != '\n')) {
    return __real_400ccccd;
  }
  return fVar2;
}

// GetSizeX @ 1486c77b0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall
FSlateTextureRenderTarget2DResource::GetSizeX(FSlateTextureRenderTarget2DResource *this)

{
  return this->TargetSizeX;
}

// GetSizeXY @ 1486c77e0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TIntPoint<int> __thiscall
FSlateTextureRenderTarget2DResource::GetSizeXY(FSlateTextureRenderTarget2DResource *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(int *)in_RDX = (int)this->_padding_;
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)((longlong)&this->_padding_ + 4);
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 1486c7820

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall
FSlateTextureRenderTarget2DResource::GetSizeY(FSlateTextureRenderTarget2DResource *this)

{
  return this->TargetSizeY;
}

// InitRHI @ 1486ce5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateTextureRenderTarget2DResource::InitRHI
          (FSlateTextureRenderTarget2DResource *this,FRHICommandListBase *param_1)

{
  int iVar1;
  int iVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FRHIResource *pFVar7;
  longlong *plVar8;
  uchar uVar9;
  undefined1 auStack_218 [32];
  FRHIResource *local_1f8;
  FSamplerStateInitializerRHI local_1f0;
  int local_1d0;
  int iStack_1cc;
  FName local_1c8;
  FRHITextureDesc local_1b8;
  wchar_t *local_168;
  undefined8 local_160;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  undefined1 local_138 [48];
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  FRHICommandListBase *local_d8;
  FRHITexture *local_d0;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId343,"FSlateTextureRenderTarget2DResource_InitDynamicRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
               ,0x157);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId343);
  }
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x159,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = this->TargetSizeX;
  uVar9 = '\0';
  if ((0 < iVar1) && (iVar2 = this->TargetSizeY, 0 < iVar2)) {
    local_1b8.ClearValue.Value.DSValue = (DSVAlue)*(undefined8 *)&(this->ClearColor).field0_0x0;
    local_1b8.ClearValue.Value._8_8_ = *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8)
    ;
    local_1b8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_1b8.ExtData = 0;
    local_168 = L"FSlateTextureRenderTarget2DResource";
    local_1b8.Extent.field0_0x0._s_0.Y = iVar2;
    local_1b8.Extent.field0_0x0._s_0.X = iVar1;
    local_1b8.Format = this->Format;
    local_1b8.Depth = 1;
    local_1b8.ArraySize = 1;
    local_1b8.NumMips = '\x01';
    local_1b8.NumSamples = '\x01';
    local_1b8.Dimension = Texture2D;
    local_1b8.UAVFormat = PF_Unknown;
    local_1b8.FastVRAMPercentage = 0xff;
    local_1b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_1b8.AliasableFormats.ArrayNum = 0;
    local_1b8.AliasableFormats.ArrayMax = 1;
    local_160 = 0x70;
    local_158 = (FResourceBulkDataInterface *)0x0;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    local_1b8.ClearValue.ColorBinding = EColorBound;
    local_1b8.Flags = ShaderResource|RenderTargetable;
    local_1d0 = iVar1;
    iStack_1cc = iVar2;
    FLazyName::Resolve(&::ClassName);
    local_150 = local_1c8;
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a8,&local_1b8);
    local_a8.DebugName = local_168;
    local_a8.InitialState = (ERHIAccess)local_160;
    local_a8.InitAction = local_160._4_4_;
    local_a8.BulkData = local_158;
    local_a8.ClassName = local_150;
    local_a8.OwnerName = local_148;
    if (local_1b8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    FRHICommandListBase::CreateTextureInitializer
              (param_1,(FRHITextureInitializer *)local_138,&local_a8);
    FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_138);
    if ((local_d8 != (FRHICommandListBase *)0x0) && (local_d0 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_138);
    }
    if (local_108 != 0) {
      plVar8 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar8 = local_e0;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_138._0_8_ != 0) {
      plVar8 = (longlong *)(local_138 + 0x10);
      if ((longlong *)local_138._40_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_138._40_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    plVar8 = &this->_padding_;
    if ((FRHIResource **)plVar8 != &local_1f8) {
      pFVar3 = (FRHIResource *)*plVar8;
      *plVar8 = (longlong)local_1f8;
      local_1f8 = (FRHIResource *)0x0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    pFVar3 = (FRHIResource *)*plVar8;
    pFVar7 = (FRHIResource *)this->_padding_;
    if (pFVar7 != pFVar3) {
      this->_padding_ = (longlong)pFVar3;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar3);
      }
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if (local_1f8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_1f8);
    }
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
  }
  if (this->AddressY != TA_Wrap) {
    uVar9 = (this->AddressY != TA_Clamp) + '\x01';
  }
  local_1f0.AddressU.Value = '\0';
  if (this->AddressX != TA_Wrap) {
    local_1f0.AddressU.Value = (this->AddressX != TA_Clamp) + '\x01';
  }
  local_1f0.Filter.Value = (uchar)this->Filter;
  local_1f0.AddressW.Value = '\0';
  local_1f0.MipBias = 0.0;
  local_1f0.MinMipLevel = 0.0;
  local_1f0.MaxMipLevel = 3.4028235e+38;
  local_1f0.MaxAnisotropy = 0;
  local_1f0.BorderColor = 0;
  local_1f0.SamplerComparisonFunction.Value = '\0';
  local_1f0.AddressV.Value = uVar9;
  pFVar7 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_1f0);
  pFVar3 = (FRHIResource *)this->_padding_;
  if (pFVar3 != pFVar7) {
    this->_padding_ = (longlong)pFVar7;
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar7);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleaseRHI @ 1486e66d0

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FSlateTextureRenderTarget2DResource::ReleaseRHI(FSlateTextureRenderTarget2DResource *this)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x179,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTexture::ReleaseRHI((FTexture *)this);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  FDeferredUpdateResource::RemoveFromDeferredUpdateList((FDeferredUpdateResource *)&this->_padding_)
  ;
  return;
}

// SetSize @ 1486ef990

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateTextureRenderTarget2DResource::SetSize
          (FSlateTextureRenderTarget2DResource *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == this->TargetSizeX) && (param_2 == this->TargetSizeY)) {
    return;
  }
  this->TargetSizeX = param_1;
  this->TargetSizeY = param_2;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// UpdateDeferredResource @ 1486f5420

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSlateTextureRenderTarget2DResource::UpdateDeferredResource
          (FSlateTextureRenderTarget2DResource *this,FRHICommandListImmediate *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FRHITransitionInfo local_68;
  FRHITransitionInfo local_38;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x186,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2) {
    local_68.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this[-1].TargetGamma;
    local_88.ArrayNum = 1;
    local_88.DataPtr = &local_68;
    local_68._padding_._0_4_ = 0xffffffff;
    local_68._padding_._4_2_ = 0xffff;
    local_68.Type = Texture;
    local_68.AccessBefore = None;
    local_68.AccessAfter = RTV;
    local_68.Flags = None;
    local_68.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    ClearRenderTarget((FRHICommandList *)param_1,*(FRHITexture **)&this[-1].TargetGamma,0,0);
    local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)&this[-1].TargetGamma;
    local_88.DataPtr = &local_38;
    local_88.ArrayNum = 1;
    local_78.ArrayNum = 1;
    local_78._12_4_ = local_88._12_4_;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_._4_2_ = 0xffff;
    local_38.Type = Texture;
    local_38.AccessBefore = RTV;
    local_38.AccessAfter = SRVGraphics;
    local_38.Flags = None;
    local_38.CommitInfo.bIsSet = false;
    local_78.DataPtr = local_88.DataPtr;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
  }
  return;
}

