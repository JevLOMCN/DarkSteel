// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ~FSkyTextureCubeResource @ 1479a8e20

void __thiscall FSkyTextureCubeResource::~FSkyTextureCubeResource(FSkyTextureCubeResource *this)

{
  FRHITexture *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FTexture__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->NumRefs != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SkyLightComponent.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FTexture::~FTexture((FTexture *)this);
  return;
}

// GetSizeX @ 1479d0b10

uint __thiscall FSkyTextureCubeResource::GetSizeX(FSkyTextureCubeResource *this)

{
  return this->Size;
}

// GetSizeY @ 1479d0b20

uint __thiscall FSkyTextureCubeResource::GetSizeY(FSkyTextureCubeResource *this)

{
  return this->Size;
}

// InitRHI @ 1479d7e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSkyTextureCubeResource::InitRHI(FSkyTextureCubeResource *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  byte bVar2;
  uint uVar3;
  FRHITexture *pFVar4;
  FRHITexture *this_00;
  FRHIResource *this_01;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  TRefCountPtr<FRHITexture> TVar8;
  FRHIResource *this_02;
  undefined1 auStack_208 [32];
  uint local_1e8;
  FSamplerStateInitializerRHI local_1d8;
  int local_1b8;
  int iStack_1b4;
  undefined1 local_1b0 [16];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined1 local_176;
  EPixelFormat local_175;
  undefined2 local_174;
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  wchar_t *local_158;
  undefined8 local_150;
  FName local_148;
  FName local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  FName local_c8;
  FName local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  FName local_48;
  FName local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar2 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar7 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar7 = GMaxRHIFeatureLevel;
  }
  if ((2 < (int)TVar7) || (GRHIGlobals.SupportsRenderTargetFormat_PF_FloatRGBA.Value != false)) {
    uVar3 = this->Size;
    if ((uVar3 & uVar3 - 1) != 0) {
      local_1e8 = uVar3;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Size)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                         ,0x8a,L"Size of SkyTextureCube must be a power of two; size is %d");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_1b8 = this->Size;
    local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_1b0._8_8_ = 0;
    local_158 = L"SkyTextureCube";
    local_184._4_4_ = local_1b8;
    local_184._0_4_ = local_1b8;
    local_175 = this->Format;
    local_1a0 = 1;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_17c = 0x10001;
    local_178 = 0x101;
    local_176 = 3;
    local_174 = 0xff00;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_15c = 1;
    local_150 = (FResourceBulkDataInterface *)0x0;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    local_140.ComparisonIndex.Value = 0;
    local_140.Number = 0;
    local_138 = 0;
    iStack_1b4 = local_1b8;
    FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1b0 + 8));
    local_d8 = local_158;
    local_d0 = (undefined4)local_150;
    local_cc = local_150._4_4_;
    local_c8 = local_148;
    local_c0 = local_140;
    local_b8 = local_138;
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
    local_128.NumMips = (uchar)this->NumMips;
    FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
    local_58 = local_d8;
    local_50 = local_d0;
    local_4c = local_cc;
    local_48 = local_c8;
    local_40 = local_c0;
    local_38 = local_b8;
    if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar8 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_1b0);
    pTVar1 = &this->TextureCubeRHI;
    if ((FRHITexture *)pTVar1 != TVar8.Reference) {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_1b0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1b0._0_8_);
    }
    pFVar4 = pTVar1->Reference;
    this_00 = (FRHITexture *)this->_padding_;
    if (this_00 != pFVar4) {
      this->_padding_ = (longlong)pFVar4;
      if (pFVar4 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)pFVar4);
      }
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    local_1d8.Filter.Value = '\x02';
    local_1d8.AddressU.Value = '\x01';
    local_1d8.AddressV.Value = '\x01';
    local_1d8.AddressW.Value = '\x01';
    local_1d8.MipBias = 0.0;
    local_1d8.MinMipLevel = 0.0;
    local_1d8.MaxMipLevel = 3.4028235e+38;
    local_1d8.MaxAnisotropy = 0;
    local_1d8.BorderColor = 0;
    local_1d8.SamplerComparisonFunction.Value = '\0';
    this_02 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_1d8);
    this_01 = (FRHIResource *)this->_padding_;
    if (this_01 != this_02) {
      this->_padding_ = (longlong)this_02;
      if (this_02 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_02);
      }
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
    if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Release @ 1479e3250

void __thiscall FSkyTextureCubeResource::Release(FSkyTextureCubeResource *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FDeferredCleanupInterface *pFVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyLightComponent.cpp"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  piVar1 = &this->NumRefs;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    BeginReleaseResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
    pFVar4 = (FDeferredCleanupInterface *)&this->_padding_;
    if (this == (FSkyTextureCubeResource *)0x0) {
      pFVar4 = (FDeferredCleanupInterface *)0x0;
    }
    BeginCleanup(pFVar4);
    return;
  }
  return;
}

// ReleaseRHI @ 1479e33b0

void __thiscall FSkyTextureCubeResource::ReleaseRHI(FSkyTextureCubeResource *this)

{
  FRHITexture *this_00;
  
  this_00 = (this->TextureCubeRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->TextureCubeRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FTexture::ReleaseRHI((FTexture *)this);
  return;
}

