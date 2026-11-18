// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ClampSize @ 1486a8760

void __thiscall
FTextureRenderTargetResource::ClampSize(FTextureRenderTargetResource *this,int param_1,int param_2)

{
  return;
}

// GetGPUMask @ 1486bea40

FRHIGPUMask __thiscall
FTextureRenderTargetResource::GetGPUMask
          (FTextureRenderTargetResource *this,FRHICommandListImmediate *param_1)

{
  *(uint *)param_1 = *(uint *)((longlong)&this->_padding_ + 4) & (uint)this->_padding_;
  return (FRHIGPUMask)(uint)param_1;
}

// GetTextureRenderTarget2DArrayResource @ 1486c8ce0

FTextureRenderTarget2DArrayResource * __thiscall
FTextureRenderTargetResource::GetTextureRenderTarget2DArrayResource
          (FTextureRenderTargetResource *this)

{
  return (FTextureRenderTarget2DArrayResource *)0x0;
}

// GetTextureRenderTarget2DResource @ 1486c8cf0

FTextureRenderTarget2DResource * __thiscall
FTextureRenderTargetResource::GetTextureRenderTarget2DResource(FTextureRenderTargetResource *this)

{
  return (FTextureRenderTarget2DResource *)0x0;
}

// GetTextureRenderTargetCubeResource @ 1486c8d00

FTextureRenderTargetCubeResource * __thiscall
FTextureRenderTargetResource::GetTextureRenderTargetCubeResource(FTextureRenderTargetResource *this)

{
  return (FTextureRenderTargetCubeResource *)0x0;
}

// GetTextureRenderTargetVolumeResource @ 1486c8d10

FTextureRenderTargetVolumeResource * __thiscall
FTextureRenderTargetResource::GetTextureRenderTargetVolumeResource
          (FTextureRenderTargetResource *this)

{
  return (FTextureRenderTargetVolumeResource *)0x0;
}

// FTextureRenderTargetResource @ 1488af030

FTextureRenderTargetResource * __thiscall
FTextureRenderTargetResource::FTextureRenderTargetResource(FTextureRenderTargetResource *this)

{
  FTexture::FTexture((FTexture *)this);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  this->_padding_ = 0;
  FRenderTarget::FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredUpdateResource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->GPUMask).GPUMask = 1;
  (this->ActiveGPUMask).GPUMask = 1;
  return this;
}

// GetDisplayGamma @ 1488c2a60

float __thiscall FTextureRenderTargetResource::GetDisplayGamma(FTextureRenderTargetResource *this)

{
  return __real_400ccccd;
}

// GetShaderResourceTexture @ 1488c4af0

TRefCountPtr<FRHITexture> * __thiscall
FTextureRenderTargetResource::GetShaderResourceTexture(FTextureRenderTargetResource *this)

{
  return (TRefCountPtr<FRHITexture> *)&this[-1]._padding_;
}

// IsSupportedFormat @ 1488cd4b0

bool __cdecl FTextureRenderTargetResource::IsSupportedFormat(EPixelFormat param_1)

{
  switch(param_1) {
  case PF_A32B32G32R32F:
  case PF_B8G8R8A8:
  case PF_G8:
  case PF_G16:
  case PF_FloatRGB:
  case PF_FloatRGBA:
  case PF_DepthStencil:
  case PF_R32_FLOAT:
  case PF_G16R16F:
  case PF_G32R32F:
  case PF_A2B10G10R10:
  case PF_A16B16G16R16:
  case PF_R16F:
  case PF_FloatR11G11B10:
  case PF_R8G8B8A8:
  case PF_R8G8:
    return true;
  default:
    return false;
  }
}

// SetGPUMask @ 1488ddb30

void __thiscall
FTextureRenderTargetResource::SetGPUMask(FTextureRenderTargetResource *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\TextureResource.h"
                       ,0x1a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GPUMask).GPUMask = param_1.GPUMask;
  (this->ActiveGPUMask).GPUMask = param_1.GPUMask;
  return;
}

