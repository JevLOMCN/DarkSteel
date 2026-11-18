// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FRHIGraphicsPipelineStateFallBack @ 145be65d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FRHIGraphicsPipelineStateFallBack * __thiscall
FRHIGraphicsPipelineStateFallBack::FRHIGraphicsPipelineStateFallBack
          (FRHIGraphicsPipelineStateFallBack *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexShader *pFVar1;
  FRHIMeshShader *pFVar2;
  FRHIGeometryShader *pFVar3;
  FRHIBlendState *pFVar4;
  FRHIDepthStencilState *pFVar5;
  FRHISamplerState *pFVar6;
  undefined8 uVar7;
  ETextureCreateFlags EVar8;
  ulong64 uVar9;
  uint uVar10;
  undefined7 uVar11;
  ERenderTargetStoreAction EVar12;
  ERenderTargetLoadAction EVar13;
  ERenderTargetStoreAction EVar14;
  FExclusiveDepthStencil FVar15;
  ushort uVar16;
  ESubpassHint EVar17;
  uchar uVar18;
  EConservativeRasterization EVar19;
  bool bVar20;
  uchar uVar21;
  bool bVar22;
  EVRSShadingRate EVar23;
  FGraphicsPipelineStateInitializer_u_210 FVar24;
  undefined4 uVar25;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GraphicsPipelineState);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRHIGraphicsPipelineStateFallBack__6B_;
  pFVar1 = (param_1->BoundShaderState).VertexShaderRHI;
  (this->Initializer).BoundShaderState.VertexDeclarationRHI =
       (param_1->BoundShaderState).VertexDeclarationRHI;
  (this->Initializer).BoundShaderState.VertexShaderRHI = pFVar1;
  pFVar2 = (param_1->BoundShaderState).MeshShaderRHI;
  (this->Initializer).BoundShaderState.PixelShaderRHI = (param_1->BoundShaderState).PixelShaderRHI;
  (this->Initializer).BoundShaderState.MeshShaderRHI = pFVar2;
  pFVar3 = (param_1->BoundShaderState).GeometryShaderRHI;
  (this->Initializer).BoundShaderState.AmplificationShaderRHI =
       (param_1->BoundShaderState).AmplificationShaderRHI;
  (this->Initializer).BoundShaderState.GeometryShaderRHI = pFVar3;
  pFVar4 = param_1->BlendState;
  (this->Initializer).BoundShaderState.WorkGraphMeshShaderRHI =
       (param_1->BoundShaderState).WorkGraphMeshShaderRHI;
  (this->Initializer).BlendState = pFVar4;
  pFVar5 = param_1->DepthStencilState;
  (this->Initializer).RasterizerState = param_1->RasterizerState;
  (this->Initializer).DepthStencilState = pFVar5;
  pFVar6 = (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  (this->Initializer).ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  (this->Initializer).ImmutableSamplerState.ImmutableSamplers.Elements[1] = pFVar6;
  uVar10 = param_1->RenderTargetsEnabled;
  uVar7 = *(undefined8 *)(param_1->RenderTargetFormats).Elements;
  (this->Initializer).PrimitiveType = param_1->PrimitiveType;
  (this->Initializer).RenderTargetsEnabled = uVar10;
  *(undefined8 *)(this->Initializer).RenderTargetFormats.Elements = uVar7;
  EVar8 = (param_1->RenderTargetFlags).Elements[1];
  (this->Initializer).RenderTargetFlags.Elements[0] = (param_1->RenderTargetFlags).Elements[0];
  (this->Initializer).RenderTargetFlags.Elements[1] = EVar8;
  EVar8 = (param_1->RenderTargetFlags).Elements[3];
  (this->Initializer).RenderTargetFlags.Elements[2] = (param_1->RenderTargetFlags).Elements[2];
  (this->Initializer).RenderTargetFlags.Elements[3] = EVar8;
  EVar8 = (param_1->RenderTargetFlags).Elements[5];
  (this->Initializer).RenderTargetFlags.Elements[4] = (param_1->RenderTargetFlags).Elements[4];
  (this->Initializer).RenderTargetFlags.Elements[5] = EVar8;
  EVar8 = (param_1->RenderTargetFlags).Elements[7];
  (this->Initializer).RenderTargetFlags.Elements[6] = (param_1->RenderTargetFlags).Elements[6];
  (this->Initializer).RenderTargetFlags.Elements[7] = EVar8;
  uVar11 = *(undefined7 *)&param_1->field_0xb1;
  EVar8 = param_1->DepthStencilTargetFlag;
  (this->Initializer).DepthStencilTargetFormat = param_1->DepthStencilTargetFormat;
  *(undefined7 *)&(this->Initializer).field_0xb1 = uVar11;
  (this->Initializer).DepthStencilTargetFlag = EVar8;
  EVar12 = param_1->DepthTargetStoreAction;
  EVar13 = param_1->StencilTargetLoadAction;
  EVar14 = param_1->StencilTargetStoreAction;
  FVar15.Value = (param_1->DepthStencilAccess).Value;
  uVar16 = param_1->NumSamples;
  EVar17 = param_1->SubpassHint;
  uVar18 = param_1->SubpassIndex;
  EVar19 = param_1->ConservativeRasterization;
  bVar20 = param_1->bDepthBounds;
  uVar21 = param_1->MultiViewCount;
  bVar22 = param_1->bHasFragmentDensityAttachment;
  (this->Initializer).DepthTargetLoadAction = param_1->DepthTargetLoadAction;
  (this->Initializer).DepthTargetStoreAction = EVar12;
  (this->Initializer).StencilTargetLoadAction = EVar13;
  (this->Initializer).StencilTargetStoreAction = EVar14;
  (this->Initializer).DepthStencilAccess = (FExclusiveDepthStencil)FVar15.Value;
  (this->Initializer).NumSamples = uVar16;
  (this->Initializer).SubpassHint = EVar17;
  (this->Initializer).SubpassIndex = uVar18;
  (this->Initializer).ConservativeRasterization = EVar19;
  (this->Initializer).bDepthBounds = bVar20;
  (this->Initializer).MultiViewCount = uVar21;
  (this->Initializer).bHasFragmentDensityAttachment = bVar22;
  EVar23 = param_1->ShadingRate;
  FVar24 = param_1->field25_0xd2;
  uVar25 = *(undefined4 *)&param_1->field_0xd4;
  uVar9 = param_1->StatePrecachePSOHash;
  (this->Initializer).bAllowVariableRateShading = param_1->bAllowVariableRateShading;
  (this->Initializer).ShadingRate = EVar23;
  (this->Initializer).field25_0xd2 = FVar24;
  *(undefined4 *)&(this->Initializer).field_0xd4 = uVar25;
  (this->Initializer).StatePrecachePSOHash = uVar9;
  return this;
}

