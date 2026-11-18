// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// ~FLightmapResourceCluster @ 147ea90e0

void __thiscall FLightmapResourceCluster::~FLightmapResourceCluster(FLightmapResourceCluster *this)

{
  FRHIUniformBuffer *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FLightmapResourceCluster__6B_;
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocatedVT == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                       ,0xd7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->UniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ConditionalCreateAllocatedVT @ 147eb46e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLightmapResourceCluster::ConditionalCreateAllocatedVT(FLightmapResourceCluster *this)

{
  byte bVar1;
  ULightMapVirtualTexture2D *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTextureResource *pFVar5;
  IRendererModule *pIVar6;
  IAllocatedVirtualTexture *pIVar7;
  FGenericStaticFeatureLevel FVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  FVirtualTextureProducerHandle local_88 [4];
  FAllocatedVTDescription local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xdcc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((4 < *(byte *)((longlong)&this->_padding_ + 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasValidFeatureLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xdcd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  FVar8.FeatureLevel = (uint)bVar1;
  if (bVar1 == 5) {
    FVar8.FeatureLevel = GMaxRHIFeatureLevel;
  }
  bVar3 = AllowHighQualityLightmaps(FVar8);
  this_00 = (this->Input).LightMapVirtualTextures[(ulonglong)bVar3 ^ 1];
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    return;
  }
  if (this_00 == (ULightMapVirtualTexture2D *)0x0) {
    return;
  }
  pFVar5 = UTexture::GetResource((UTexture *)this_00);
  if (pFVar5 == (FTextureResource *)0x0) {
    return;
  }
  if (((this_00->_padding_ & 0x4000000000000) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VirtualTexture->VirtualTextureStreaming",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xddb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = UTexture::GetResource((UTexture *)this_00);
  local_88[0] = *(FVirtualTextureProducerHandle *)&pFVar5[1]._padding_;
  pIVar6 = GetRendererModule();
  (**(code **)((longlong)*pIVar6 + 0x170))(pIVar6,local_88,OnVirtualTextureDestroyed,this);
  local_78.ForceSpaceID = 0xff;
  local_78.AdaptiveLevelBias = '\0';
  uVar9 = 0;
  local_78.ProducerLayerIndex[0] = '\0';
  local_78.ProducerLayerIndex[1] = '\0';
  local_78.ProducerLayerIndex[2] = '\0';
  local_78.ProducerLayerIndex[3] = '\0';
  local_78.ProducerLayerIndex[4] = '\0';
  local_78.ProducerLayerIndex[5] = '\0';
  local_78.ProducerLayerIndex[6] = '\0';
  local_78.ProducerLayerIndex[7] = '\0';
  local_78.field11_0x44.PackedFlags = '\0';
  local_78.Name.ComparisonIndex.Value = 0;
  local_78.Name.Number = 0;
  local_78.MaxSpaceSize = 0;
  local_78.IndirectionTextureSize = 0;
  local_78.ProducerHandle[5] = (FVirtualTextureProducerHandle)0x0;
  local_78.ProducerHandle[6] = (FVirtualTextureProducerHandle)0x0;
  local_78.ProducerHandle[7].PackedValue = 0;
  local_78.Dimensions = '\x02';
  local_78.TileSize = (**(code **)(pFVar5->_padding_ + 0xd0))(pFVar5);
  local_78.TileBorderSize = (**(code **)(pFVar5->_padding_ + 0xd8))(pFVar5);
  local_78.NumTextureLayers = 0;
  uVar4 = ULightMapVirtualTexture2D::GetLayerForType(this_00,LightmapLayer0);
  if (uVar4 == 0xffffffff) {
    local_78.ProducerHandle[0].PackedValue = 0;
  }
  else {
    local_78.ProducerHandle[0] = local_88[0];
    local_78.NumTextureLayers = 1;
    local_78.ProducerLayerIndex[0] = (uchar)uVar4;
  }
  uVar4 = ULightMapVirtualTexture2D::GetLayerForType(this_00,LightmapLayer1);
  if (uVar4 == 0xffffffff) {
    local_78.ProducerHandle[1].PackedValue = 0;
  }
  else {
    local_78.ProducerHandle[1] = local_88[0];
    local_78.NumTextureLayers = 2;
    local_78.ProducerLayerIndex[1] = (uchar)uVar4;
  }
  uVar4 = ULightMapVirtualTexture2D::GetLayerForType(this_00,ShadowMask);
  if (uVar4 == 0xffffffff) {
    local_78.ProducerHandle[2].PackedValue = 0;
  }
  else {
    local_78.ProducerHandle[2] = local_88[0];
    local_78.NumTextureLayers = 3;
    local_78.ProducerLayerIndex[2] = (uchar)uVar4;
  }
  uVar4 = ULightMapVirtualTexture2D::GetLayerForType(this_00,SkyOcclusion);
  if (uVar4 == 0xffffffff) {
    local_78.ProducerHandle[3].PackedValue = 0;
  }
  else {
    local_78.ProducerHandle[3] = local_88[0];
    local_78.NumTextureLayers = 4;
    local_78.ProducerLayerIndex[3] = (uchar)uVar4;
  }
  uVar4 = ULightMapVirtualTexture2D::GetLayerForType(this_00,AOMaterialMask);
  if (uVar4 == 0xffffffff) {
    local_78.ProducerHandle[4].PackedValue = 0;
    if (local_78.NumTextureLayers == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VTDesc.NumTextureLayers > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xdf6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_147eb4942;
    }
  }
  else {
    local_78.ProducerHandle[4] = local_88[0];
    local_78.NumTextureLayers = 5;
    local_78.ProducerLayerIndex[4] = (uchar)uVar4;
LAB_147eb4942:
    if (local_78.NumTextureLayers == 0) goto LAB_147eb4964;
  }
  do {
    if (local_78.ProducerHandle[uVar9].PackedValue == 0) {
      local_78.ProducerHandle[uVar9] = local_88[0];
      local_78.ProducerLayerIndex[uVar9] = '\0';
    }
    uVar4 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar4;
  } while (uVar4 < local_78.NumTextureLayers);
LAB_147eb4964:
  pIVar6 = GetRendererModule();
  pIVar7 = IRendererModule::AllocateVirtualTexture(pIVar6,&local_78);
  this->AllocatedVT = pIVar7;
  return;
}

// GetAllocatedVT @ 147ebea80

IAllocatedVirtualTexture * __thiscall
FLightmapResourceCluster::GetAllocatedVT(FLightmapResourceCluster *this)

{
  code *pcVar1;
  bool bVar2;
  IAllocatedVirtualTexture *pIVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                       ,0xdc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IAllocatedVirtualTexture *)(*pcVar1)();
      return pIVar3;
    }
  }
  return this->AllocatedVT;
}

// GetUseVirtualTexturing @ 147ec7410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall FLightmapResourceCluster::GetUseVirtualTexturing(FLightmapResourceCluster *this)

{
  byte bVar1;
  bool bVar2;
  Type TVar3;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar3 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar3 = GMaxRHIFeatureLevel;
  }
  if (TVar3 == Num) {
    bVar2 = UseVirtualTextureLightmap((FStaticShaderPlatform)0x9b,(ITargetPlatformSettings *)0x0);
    return bVar2;
  }
  bVar2 = UseVirtualTextureLightmap
                    ((FStaticShaderPlatform)GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar3],
                     (ITargetPlatformSettings *)0x0);
  return bVar2;
}

// InitRHI @ 147ecb910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLightmapResourceCluster::InitRHI(FLightmapResourceCluster *this,FRHICommandListBase *param_1)

{
  if ((-1 < CpuChannel->Enabled) && (-1 < LoadTimeChannel->Enabled)) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3604,"FLightmapResourceCluster_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
               ,0xe14);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3604);
    TryInitializeUniformBuffer(this);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  TryInitializeUniformBuffer(this);
  return;
}

// ReleaseAllocatedVT @ 147ed74b0

void __thiscall FLightmapResourceCluster::ReleaseAllocatedVT(FLightmapResourceCluster *this)

{
  IRendererModule *pIVar1;
  
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x178))(pIVar1,this);
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,this->AllocatedVT);
    this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  }
  return;
}

// ReleaseRHI @ 147ed7510

void __thiscall FLightmapResourceCluster::ReleaseRHI(FLightmapResourceCluster *this)

{
  FRHIUniformBuffer *this_00;
  IRendererModule *pIVar1;
  
  if (this->AllocatedVT != (IAllocatedVirtualTexture *)0x0) {
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x178))(pIVar1,this);
    pIVar1 = GetRendererModule();
    (**(code **)((longlong)*pIVar1 + 0x148))(pIVar1,this->AllocatedVT);
    this->AllocatedVT = (IAllocatedVirtualTexture *)0x0;
  }
  this_00 = (this->UniformBuffer).Reference;
  if (this_00 != (FRHIUniformBuffer *)0x0) {
    (this->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// SetFeatureLevelAndInitialize @ 147edc5b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLightmapResourceCluster::SetFeatureLevelAndInitialize
          (FLightmapResourceCluster *this,FGenericStaticFeatureLevel param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                       ,0xda5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = this->_padding_;
  *(char *)((longlong)&this->_padding_ + 4) = (char)param_1.FeatureLevel;
  if (((int)lVar2 != -1) && (GRHIGlobals.IsRHIInitialized != false)) {
    TryInitializeUniformBuffer(this);
  }
  return;
}

// TryInitializeUniformBuffer @ 147ee2a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FLightmapResourceCluster::TryInitializeUniformBuffer(FLightmapResourceCluster *this)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  FShaderParametersMetadata *pFVar6;
  FStaticShaderPlatform FVar7;
  FLightmapClusterResourceInput *pFVar8;
  TRefCountPtr<FRHIUniformBuffer> *pTVar9;
  IAllocatedVirtualTexture *pIVar10;
  TRefCountPtr<FRHIUniformBuffer> local_d8 [2];
  undefined1 local_c8 [40];
  ForAnyElementType FStack_a0;
  FRHIShaderResourceView *local_98;
  ForAnyElementType FStack_90;
  FRHIShaderResourceView *local_88;
  ForAnyElementType FStack_80;
  FRHISamplerState *local_78;
  ForAnyElementType FStack_70;
  FRHISamplerState *local_68;
  ForAnyElementType FStack_60;
  FRHITexture *local_58;
  ForAnyElementType FStack_50;
  FLightmapClusterResourceInput local_48;
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c8._0_8_ = (FRHITexture *)0x0;
  local_c8._8_8_ = (FRHITexture *)0x0;
  local_c8._16_8_ = (FRHITexture *)0x0;
  local_c8._24_8_ = (FRHITexture *)0x0;
  local_c8._32_8_ = (FRHIShaderResourceView *)0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = (FRHIShaderResourceView *)0x0;
  FStack_90.Data = (FScriptContainerElement *)0x0;
  local_88 = (FRHIShaderResourceView *)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = (FRHISamplerState *)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_68 = (FRHISamplerState *)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_58 = (FRHITexture *)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  if (*(byte *)((longlong)&this->_padding_ + 4) < 5) {
    ConditionalCreateAllocatedVT(this);
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar5 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar5 = GMaxRHIFeatureLevel;
    }
    if (TVar5 == Num) {
      FVar7.Platform = SP_NumPlatforms;
    }
    else {
      FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar5];
    }
    bVar4 = UseVirtualTextureLightmap(FVar7,(ITargetPlatformSettings *)0x0);
    if (bVar4) {
      bVar4 = IsInParallelRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                             ,0xdc6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar10 = this->AllocatedVT;
    }
    else {
      pIVar10 = (IAllocatedVirtualTexture *)0x0;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    pFVar8 = &this->Input;
    TVar5 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar5 = GMaxRHIFeatureLevel;
    }
  }
  else {
    pFVar8 = &local_48;
    local_48.LightMapTextures[0] = (UTexture2D *)0x0;
    local_48.LightMapTextures[1] = (UTexture2D *)0x0;
    local_48.ShadowMapTexture = (UTexture2D *)0x0;
    pIVar10 = (IAllocatedVirtualTexture *)0x0;
    local_48.SkyOcclusionTexture = (UTexture2D *)0x0;
    local_48.AOMaterialMaskTexture = (UTexture2D *)0x0;
    local_48.LightMapVirtualTextures[0] = (ULightMapVirtualTexture2D *)0x0;
    local_48.LightMapVirtualTextures[1] = (ULightMapVirtualTexture2D *)0x0;
    TVar5 = GMaxRHIFeatureLevel;
  }
  GetLightmapClusterResourceParameters
            (TVar5,pFVar8,pIVar10,(FLightmapResourceClusterShaderParameters *)local_c8);
  pFVar2 = (this->UniformBuffer).Reference;
  pTVar9 = &this->UniformBuffer;
  if (pFVar2 == (FRHIUniformBuffer *)0x0) {
    pFVar6 = FLightmapResourceClusterShaderParameters::GetStructMetadata();
    if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RHICreateUniformBuffer
              (local_d8,(FRHIUniformBufferLayout *)local_c8,
               (EUniformBufferUsage)(pFVar6->Layout).Reference,2);
    if (pTVar9 != local_d8) {
      pFVar2 = pTVar9->Reference;
      pTVar9->Reference = local_d8[0].Reference;
      local_d8[0].Reference = (FRHIUniformBuffer *)0x0;
      if (pFVar2 == (FRHIUniformBuffer *)0x0) {
        return;
      }
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    if (local_d8[0].Reference != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_d8[0].Reference);
      return;
    }
  }
  else {
    FRHICommandListBase::UpdateUniformBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar2,local_c8);
  }
  return;
}

// UpdateUniformBuffer @ 147ee5ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall FLightmapResourceCluster::UpdateUniformBuffer(FLightmapResourceCluster *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FStaticShaderPlatform FVar5;
  IAllocatedVirtualTexture *pIVar6;
  FLightmapResourceClusterShaderParameters local_88;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->UniformBuffer).Reference != (FRHIUniformBuffer *)0x0) {
    if (4 < *(byte *)((longlong)&this->_padding_ + 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasValidFeatureLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                         ,0xdb3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    local_88.LightMapTexture = (FRHITexture *)0x0;
    local_88.SkyOcclusionTexture = (FRHITexture *)0x0;
    local_88.AOMaterialMaskTexture = (FRHITexture *)0x0;
    local_88.StaticShadowTexture = (FRHITexture *)0x0;
    local_88.VTLightMapTexture = (FRHIShaderResourceView *)0x0;
    local_88.VTLightMapTexture_1 = (FRHIShaderResourceView *)0x0;
    TVar4 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar4 = GMaxRHIFeatureLevel;
    }
    local_88.VTSkyOcclusionTexture = (FRHIShaderResourceView *)0x0;
    local_88.VTAOMaterialMaskTexture = (FRHIShaderResourceView *)0x0;
    local_88.VTStaticShadowTexture = (FRHIShaderResourceView *)0x0;
    local_88.LightMapSampler = (FRHISamplerState *)0x0;
    local_88.LightMapSampler_1 = (FRHISamplerState *)0x0;
    local_88.SkyOcclusionSampler = (FRHISamplerState *)0x0;
    local_88.AOMaterialMaskSampler = (FRHISamplerState *)0x0;
    local_88.StaticShadowTextureSampler = (FRHISamplerState *)0x0;
    local_88.LightmapVirtualTexturePageTable0 = (FRHITexture *)0x0;
    local_88.LightmapVirtualTexturePageTable1 = (FRHITexture *)0x0;
    if (TVar4 == Num) {
      FVar5.Platform = SP_NumPlatforms;
    }
    else {
      FVar5.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar4];
    }
    bVar3 = UseVirtualTextureLightmap(FVar5,(ITargetPlatformSettings *)0x0);
    if (bVar3) {
      bVar3 = IsInParallelRenderingThread();
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightMap.cpp"
                           ,0xdc6,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar6 = this->AllocatedVT;
    }
    else {
      pIVar6 = (IAllocatedVirtualTexture *)0x0;
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar4 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar4 = GMaxRHIFeatureLevel;
    }
    GetLightmapClusterResourceParameters(TVar4,&this->Input,pIVar6,&local_88);
    FRHICommandListBase::UpdateUniformBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (this->UniformBuffer).Reference,&local_88);
  }
  return;
}

