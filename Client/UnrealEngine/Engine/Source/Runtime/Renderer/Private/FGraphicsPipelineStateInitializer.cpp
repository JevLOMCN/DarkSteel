// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGraphicsPipelineStateInitializer @ 1453f9b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGraphicsPipelineStateInitializer * __thiscall
FGraphicsPipelineStateInitializer::FGraphicsPipelineStateInitializer
          (FGraphicsPipelineStateInitializer *this)

{
  (this->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  (this->BoundShaderState).VertexShaderRHI = (FRHIVertexShader *)0x0;
  (this->BoundShaderState).PixelShaderRHI = (FRHIPixelShader *)0x0;
  (this->BoundShaderState).MeshShaderRHI = (FRHIMeshShader *)0x0;
  (this->BoundShaderState).AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  (this->BoundShaderState).GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  (this->BoundShaderState).WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  this->BlendState = (FRHIBlendState *)0x0;
  this->RasterizerState = (FRHIRasterizerState *)0x0;
  this->DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  this->RenderTargetsEnabled = 0;
  (this->RenderTargetFormats).Elements[0] = '\0';
  (this->RenderTargetFormats).Elements[1] = '\0';
  (this->RenderTargetFormats).Elements[2] = '\0';
  (this->RenderTargetFormats).Elements[3] = '\0';
  (this->RenderTargetFormats).Elements[4] = '\0';
  (this->RenderTargetFormats).Elements[5] = '\0';
  (this->RenderTargetFormats).Elements[6] = '\0';
  (this->RenderTargetFormats).Elements[7] = '\0';
  (this->RenderTargetFlags).Elements[0] = None;
  (this->RenderTargetFlags).Elements[1] = None;
  (this->RenderTargetFlags).Elements[2] = None;
  (this->RenderTargetFlags).Elements[3] = None;
  (this->RenderTargetFlags).Elements[4] = None;
  (this->RenderTargetFlags).Elements[5] = None;
  (this->RenderTargetFlags).Elements[6] = None;
  (this->RenderTargetFlags).Elements[7] = None;
  this->DepthStencilTargetFormat = PF_Unknown;
  this->DepthStencilTargetFlag = None;
  this->DepthTargetLoadAction = ENoAction;
  this->DepthTargetStoreAction = ENoAction;
  this->StencilTargetLoadAction = ENoAction;
  this->StencilTargetStoreAction = ENoAction;
  this->DepthStencilAccess = DepthNop;
  this->NumSamples = 0;
  this->SubpassHint = None;
  this->SubpassIndex = '\0';
  this->ConservativeRasterization = Disabled;
  this->bDepthBounds = false;
  this->MultiViewCount = '\0';
  this->bHasFragmentDensityAttachment = false;
  this->StatePrecachePSOHash = 0;
  this->bAllowVariableRateShading = true;
  this->ShadingRate = VRSSR_1x1;
  this->field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  return this;
}

