// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSceneTexturesConfig @ 1454d4960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneTexturesConfig * __thiscall
FSceneTexturesConfig::FSceneTexturesConfig(FSceneTexturesConfig *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  this->Extracts = All;
  this->ShaderPlatform = SP_PCD3D_SM5;
  this->ShadingPath = Num;
  this->FeatureLevel = SM5;
  (this->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->SmallDepthDownsampleFactor = 2;
  this->NumSamples = 1;
  this->EditorPrimitiveNumSamples = 1;
  this->ColorFormat = PF_Unknown;
  this->ColorCreateFlags = None;
  this->DepthCreateFlags = None;
  this->ExtraSceneColorCreateFlags = None;
  this->ExtraSceneDepthCreateFlags = None;
  uVar3 = FClearValueBinding::Black.Value._4_8_;
  *(undefined8 *)&this->ColorClearValue = FClearValueBinding::Black._0_8_;
  *(undefined8 *)((longlong)&(this->ColorClearValue).Value + 4) = uVar3;
  (this->ColorClearValue).Value.Color[3] = FClearValueBinding::Black.Value.Color[3];
  uVar3 = FClearValueBinding::DepthFar.Value._4_8_;
  *(undefined8 *)&this->DepthClearValue = FClearValueBinding::DepthFar._0_8_;
  *(undefined8 *)((longlong)&(this->DepthClearValue).Value + 4) = uVar3;
  (this->DepthClearValue).Value.Color[3] = FClearValueBinding::DepthFar.Value.Color[3];
  this->GBufferParams[0].ShaderPlatform = SP_NumPlatforms;
  this->GBufferParams[0].LegacyFormatIndex = 0;
  this->GBufferParams[0].bHasVelocity = false;
  this->GBufferParams[0].bHasTangent = false;
  this->GBufferParams[0].bHasPrecShadowFactor = false;
  this->GBufferParams[0].bUsesVelocityDepth = false;
  this->GBufferParams[0].bHasSingleLayerWaterSeparatedMainLight = false;
  this->GBufferParams[1].ShaderPlatform = SP_NumPlatforms;
  this->GBufferParams[1].LegacyFormatIndex = 0;
  this->GBufferParams[1].bHasVelocity = false;
  this->GBufferParams[1].bHasTangent = false;
  this->GBufferParams[1].bHasPrecShadowFactor = false;
  this->GBufferParams[1].bUsesVelocityDepth = false;
  this->GBufferParams[1].bHasSingleLayerWaterSeparatedMainLight = false;
  this->GBufferBindings[0].GBufferA.Index = -1;
  this->GBufferBindings[0].GBufferA.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferA.Flags = None;
  this->GBufferBindings[0].GBufferB.Index = -1;
  this->GBufferBindings[0].GBufferB.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferB.Flags = None;
  this->GBufferBindings[0].GBufferC.Index = -1;
  this->GBufferBindings[0].GBufferC.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferC.Flags = None;
  this->GBufferBindings[0].GBufferD.Index = -1;
  this->GBufferBindings[0].GBufferD.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferD.Flags = None;
  this->GBufferBindings[0].GBufferE.Index = -1;
  this->GBufferBindings[0].GBufferE.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferE.Flags = None;
  this->GBufferBindings[0].GBufferVelocity.Index = -1;
  this->GBufferBindings[0].GBufferVelocity.Format = PF_Unknown;
  this->GBufferBindings[0].GBufferVelocity.Flags = None;
  this->GBufferBindings[1].GBufferA.Index = -1;
  this->GBufferBindings[1].GBufferA.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferA.Flags = None;
  this->GBufferBindings[1].GBufferB.Index = -1;
  this->GBufferBindings[1].GBufferB.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferB.Flags = None;
  this->GBufferBindings[1].GBufferC.Index = -1;
  this->GBufferBindings[1].GBufferC.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferC.Flags = None;
  this->GBufferBindings[1].GBufferD.Index = -1;
  this->GBufferBindings[1].GBufferD.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferD.Flags = None;
  this->GBufferBindings[1].GBufferE.Index = -1;
  this->GBufferBindings[1].GBufferE.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferE.Flags = None;
  this->GBufferBindings[1].GBufferVelocity.Index = -1;
  this->GBufferBindings[1].GBufferVelocity.Format = PF_Unknown;
  this->GBufferBindings[1].GBufferVelocity.Flags = None;
  this->bRequiresAlphaChannel = false;
  this->MobileMultiViewRenderTargetNumLayers = 2;
  puVar2 = &this->field_0x150;
  this->bRequireMultiView = 0;
  this->bSupportsXRTargetManagerDepthAlloc = 0;
  this->bMemorylessMSAA = 0;
  this->bSamplesCustomStencil = 0;
  this->bCustomResolveSubpass = 0;
  this->bPreciseDepthAux = 0;
  this->bRequiresDepthAux = 0;
  this->bKeepDepthContent = 1;
  this->bIsUsingGBuffers = 0;
  return this;
}

