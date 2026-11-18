// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// IRHICommandContext @ 145adbcf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

IRHICommandContext * __thiscall IRHICommandContext::IRHICommandContext(IRHICommandContext *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  (this->RenderPassInfo).ColorRenderTargets.Elements[0].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[0].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[0].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[0].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[1].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[1].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[2].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[2].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[3].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[3].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[4].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[4].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[5].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[5].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[6].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[6].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  (this->RenderPassInfo).ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).ColorRenderTargets.Elements[7].ArraySlice = -1;
  (this->RenderPassInfo).ColorRenderTargets.Elements[7].MipIndex = '\0';
  (this->RenderPassInfo).ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  (this->RenderPassInfo).DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  (this->RenderPassInfo).DepthStencilRenderTarget.Action = DontLoad_DontStore;
  (this->RenderPassInfo).DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  (this->RenderPassInfo).ResolveRect.X1 = -1;
  (this->RenderPassInfo).ResolveRect.Y1 = -1;
  (this->RenderPassInfo).ResolveRect.X2 = -1;
  (this->RenderPassInfo).ResolveRect.Y2 = -1;
  (this->RenderPassInfo).ShadingRateTexture.Reference = (FRHITexture *)0x0;
  (this->RenderPassInfo).ShadingRateTextureCombiner = VRSRB_Passthrough;
  (this->RenderPassInfo).NopAccess = None;
  (this->RenderPassInfo).NumOcclusionQueries = 0;
  (this->RenderPassInfo).bOcclusionQueries = false;
  (this->RenderPassInfo).MultiViewCount = '\0';
  (this->RenderPassInfo).SubpassHint = None;
  return this;
}

