// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// AcquireColorTexture @ 148b24910

int __thiscall IStereoRenderTargetManager::AcquireColorTexture(IStereoRenderTargetManager *this)

{
  return -1;
}

// AcquireDepthTexture @ 148b24920

int __thiscall IStereoRenderTargetManager::AcquireDepthTexture(IStereoRenderTargetManager *this)

{
  return -1;
}

// AllocateDepthTexture @ 148b25aa0

bool __thiscall
IStereoRenderTargetManager::AllocateDepthTexture
          (IStereoRenderTargetManager *this,uint param_1,uint param_2,uint param_3,uchar param_4,
          uint param_5,ETextureCreateFlags param_6,ETextureCreateFlags param_7,
          TRefCountPtr<FRHITexture> *param_8,TRefCountPtr<FRHITexture> *param_9,uint param_10)

{
  return false;
}

// AllocateRenderTargetTexture @ 148b25c60

bool __thiscall
IStereoRenderTargetManager::AllocateRenderTargetTexture
          (IStereoRenderTargetManager *this,uint param_1,uint param_2,uint param_3,uchar param_4,
          uint param_5,ETextureCreateFlags param_6,ETextureCreateFlags param_7,
          TRefCountPtr<FRHITexture> *param_8,TRefCountPtr<FRHITexture> *param_9,uint param_10)

{
  return false;
}

// AllocateRenderTargetTextures @ 148b26000

bool __thiscall
IStereoRenderTargetManager::AllocateRenderTargetTextures
          (IStereoRenderTargetManager *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ETextureCreateFlags param_6,
          TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *param_8,uint param_9)

{
  return false;
}

// AllocateShadingRateTexture @ 148b26010

bool __thiscall
IStereoRenderTargetManager::AllocateShadingRateTexture
          (IStereoRenderTargetManager *this,uint param_1,uint param_2,uint param_3,uchar param_4,
          uint param_5,ETextureCreateFlags param_6,ETextureCreateFlags param_7,
          TRefCountPtr<FRHITexture> *param_8,TIntPoint<int> *param_9)

{
  return false;
}

// GetActualColorSwapchainFormat @ 148b3f1e0

EPixelFormat __thiscall
IStereoRenderTargetManager::GetActualColorSwapchainFormat(IStereoRenderTargetManager *this)

{
  return PF_Unknown;
}

// GetMotionVectorDepthTexture @ 148b41d00

bool __thiscall
IStereoRenderTargetManager::GetMotionVectorDepthTexture
          (IStereoRenderTargetManager *this,uint param_1,TIntPoint<int> *param_2,uchar param_3,
          uint param_4,ETextureCreateFlags param_5,TRefCountPtr<FRHITexture> *param_6,uint param_7)

{
  return false;
}

// GetMotionVectorTexture @ 148b41d10

bool __thiscall
IStereoRenderTargetManager::GetMotionVectorTexture
          (IStereoRenderTargetManager *this,uint param_1,TIntPoint<int> *param_2,uchar param_3,
          uint param_4,ETextureCreateFlags param_5,TRefCountPtr<FRHITexture> *param_6,uint param_7)

{
  return false;
}

// GetNumberOfBufferedFrames @ 148b41e20

uint __thiscall
IStereoRenderTargetManager::GetNumberOfBufferedFrames(IStereoRenderTargetManager *this)

{
  return 1;
}

// GetRecommendedMotionVectorTextureSize @ 148b42100

bool __thiscall
IStereoRenderTargetManager::GetRecommendedMotionVectorTextureSize
          (IStereoRenderTargetManager *this,TIntPoint<int> *param_1)

{
  return false;
}

// HDRGetMetaDataForStereo @ 148b44860

bool __thiscall
IStereoRenderTargetManager::HDRGetMetaDataForStereo
          (IStereoRenderTargetManager *this,EDisplayOutputFormat *param_1,
          EDisplayColorGamut *param_2,bool *param_3)

{
  return false;
}

// NeedReAllocateDepthTexture @ 148b69450

bool __thiscall
IStereoRenderTargetManager::NeedReAllocateDepthTexture
          (IStereoRenderTargetManager *this,TRefCountPtr<IPooledRenderTarget> *param_1)

{
  return false;
}

// NeedReAllocateShadingRateTexture @ 148b69460

bool __thiscall
IStereoRenderTargetManager::NeedReAllocateShadingRateTexture
          (IStereoRenderTargetManager *this,TRefCountPtr<IPooledRenderTarget> *param_1)

{
  return false;
}

// ReconfigureForShaderPlatform @ 148b6e6f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
IStereoRenderTargetManager::ReconfigureForShaderPlatform
          (IStereoRenderTargetManager *this,EShaderPlatform param_1)

{
  return false;
}

