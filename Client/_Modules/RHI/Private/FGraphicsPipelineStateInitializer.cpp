// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// operator== @ 145c8bb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
FGraphicsPipelineStateInitializer::operator==
          (FGraphicsPipelineStateInitializer *this,FGraphicsPipelineStateInitializer *param_1)

{
  TStaticArray<ETextureCreateFlags,8,4294967295> *pTVar1;
  longlong lVar2;
  
  if ((((((((((this->BoundShaderState).VertexDeclarationRHI ==
              (param_1->BoundShaderState).VertexDeclarationRHI) &&
            ((this->BoundShaderState).VertexShaderRHI == (param_1->BoundShaderState).VertexShaderRHI
            )) && ((this->BoundShaderState).PixelShaderRHI ==
                   (param_1->BoundShaderState).PixelShaderRHI)) &&
          (((this->BoundShaderState).MeshShaderRHI == (param_1->BoundShaderState).MeshShaderRHI &&
           ((this->BoundShaderState).AmplificationShaderRHI ==
            (param_1->BoundShaderState).AmplificationShaderRHI)))) &&
         (((this->BoundShaderState).WorkGraphMeshShaderRHI ==
           (param_1->BoundShaderState).WorkGraphMeshShaderRHI &&
          (((this->BoundShaderState).GeometryShaderRHI ==
            (param_1->BoundShaderState).GeometryShaderRHI &&
           (this->BlendState == param_1->BlendState)))))) &&
        (this->RasterizerState == param_1->RasterizerState)) &&
       ((((this->DepthStencilState == param_1->DepthStencilState &&
          ((this->ImmutableSamplerState).ImmutableSamplers.Elements[0] ==
           (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0])) &&
         ((this->ImmutableSamplerState).ImmutableSamplers.Elements[1] ==
          (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1])) &&
        (((this->PrimitiveType == param_1->PrimitiveType &&
          (this->bDepthBounds == param_1->bDepthBounds)) &&
         ((this->MultiViewCount == param_1->MultiViewCount &&
          ((this->ShadingRate == param_1->ShadingRate &&
           (this->bAllowVariableRateShading == param_1->bAllowVariableRateShading)))))))))) &&
      ((this->bHasFragmentDensityAttachment == param_1->bHasFragmentDensityAttachment &&
       (((this->RenderTargetsEnabled == param_1->RenderTargetsEnabled &&
         ((this->RenderTargetFormats).Elements[0] == (param_1->RenderTargetFormats).Elements[0])) &&
        ((this->RenderTargetFormats).Elements[1] == (param_1->RenderTargetFormats).Elements[1]))))))
     && ((((this->RenderTargetFormats).Elements[2] == (param_1->RenderTargetFormats).Elements[2] &&
          ((this->RenderTargetFormats).Elements[3] == (param_1->RenderTargetFormats).Elements[3]))
         && ((((this->RenderTargetFormats).Elements[4] == (param_1->RenderTargetFormats).Elements[4]
              && (((this->RenderTargetFormats).Elements[5] ==
                   (param_1->RenderTargetFormats).Elements[5] &&
                  ((this->RenderTargetFormats).Elements[6] ==
                   (param_1->RenderTargetFormats).Elements[6])))) &&
             ((this->RenderTargetFormats).Elements[7] == (param_1->RenderTargetFormats).Elements[7])
             ))))) {
    lVar2 = 0;
    pTVar1 = &this->RenderTargetFlags;
    do {
      if (((*(uint *)((longlong)pTVar1 + ((longlong)param_1 - (longlong)this)) ^
           (int)pTVar1->Elements[0]) & (Shared|SRGB)) != None) {
        return false;
      }
      lVar2 = lVar2 + 1;
      pTVar1 = (TStaticArray<ETextureCreateFlags,8,4294967295> *)(pTVar1->Elements + 1);
    } while (lVar2 < 8);
    if (((((this->DepthStencilTargetFormat == param_1->DepthStencilTargetFormat) &&
          ((((int)param_1->DepthStencilTargetFlag ^ (int)this->DepthStencilTargetFlag) &
           (Shared|SRGB|DepthStencilTargetable)) == None)) &&
         (this->DepthTargetLoadAction == param_1->DepthTargetLoadAction)) &&
        ((this->DepthTargetStoreAction == param_1->DepthTargetStoreAction &&
         (this->StencilTargetLoadAction == param_1->StencilTargetLoadAction)))) &&
       (((this->StencilTargetStoreAction == param_1->StencilTargetStoreAction &&
         (((this->DepthStencilAccess).Value == (param_1->DepthStencilAccess).Value &&
          (this->NumSamples == param_1->NumSamples)))) &&
        ((this->SubpassHint == param_1->SubpassHint && (this->SubpassIndex == param_1->SubpassIndex)
         ))))) {
      return this->ConservativeRasterization == param_1->ConservativeRasterization;
    }
  }
  return false;
}

