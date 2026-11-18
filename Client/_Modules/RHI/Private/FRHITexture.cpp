// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FRHITexture @ 145c87f90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITexture * __thiscall FRHITexture::FRHITexture(FRHITexture *this,FRHITextureCreateDesc *param_1)

{
  ERHIAccess EVar1;
  FName FVar2;
  wchar_t *pwVar3;
  FName *pFVar4;
  FName local_res8;
  
  FVar2 = param_1->OwnerName;
  pwVar3 = param_1->DebugName;
  EVar1 = param_1->InitialState;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Texture);
  this->_padding_ = (longlong)&___7FRHIViewableResource__6B_;
  this->_padding_ = 0;
  *(ERHIAccess *)&this->_padding_ = EVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if (pwVar3 != (wchar_t *)0x0) {
    pFVar4 = ::FName::FName(&local_res8,pwVar3);
    this->_padding_ = (longlong)*pFVar4;
  }
  this->_padding_ = (longlong)FVar2;
  RHIValidation::FTextureResource::FTextureResource((FTextureResource *)&this->_padding_,param_1);
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  FRHITextureDesc::FRHITextureDesc(&this->TextureDesc,(FRHITextureDesc *)param_1);
  (this->LastRenderTime).LastRenderTime = -3.4028234663852886e+38;
  return this;
}

// FRHITexture @ 145c88050

FRHITexture * __thiscall FRHITexture::FRHITexture(FRHITexture *this,ERHIResourceType param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHITexture *pFVar3;
  byte bVar4;
  
  FRHIResource::FRHIResource((FRHIResource *)this,param_1);
  this->_padding_ = (longlong)&___7FRHIViewableResource__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  (this->TextureDesc).Flags = None;
  *(undefined8 *)&(this->TextureDesc).ClearValue = 1;
  *(undefined8 *)((longlong)&(this->TextureDesc).ClearValue.Value + 4) = 0;
  (this->TextureDesc).ClearValue.Value.Color[3] = 0.0;
  bVar4 = (byte)GNumExplicitGPUsForRendering;
  (this->TextureDesc).ExtData = 0;
  (this->TextureDesc).GPUMask.GPUMask = (1 << (bVar4 & 0x1f)) - 1;
  (this->TextureDesc).Extent.field0_0x0._s_0.X = 1;
  (this->TextureDesc).Extent.field0_0x0._s_0.Y = 1;
  (this->TextureDesc).Depth = 1;
  (this->TextureDesc).ArraySize = 1;
  (this->TextureDesc).NumMips = '\x01';
  (this->TextureDesc).NumSamples = '\x01';
  (this->TextureDesc).Dimension = Texture2D;
  (this->TextureDesc).Format = PF_Unknown;
  (this->TextureDesc).UAVFormat = PF_Unknown;
  (this->TextureDesc).FastVRAMPercentage = 0xff;
  (this->TextureDesc).AliasableFormats.AllocatorInstance.SecondaryData =
       (ForElementType<EPixelFormat>)0x0;
  (this->TextureDesc).AliasableFormats.ArrayNum = 0;
  (this->TextureDesc).AliasableFormats.ArrayMax = 1;
  (this->LastRenderTime).LastRenderTime = -3.4028234663852886e+38;
  if (param_1 != RRT_TextureReference) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResourceType == RRT_TextureReference",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHITexture *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// SetName @ 145cbf980

void __thiscall FRHITexture::SetName(FRHITexture *this,FName param_1)

{
  this->_padding_ = (longlong)param_1;
  return;
}

