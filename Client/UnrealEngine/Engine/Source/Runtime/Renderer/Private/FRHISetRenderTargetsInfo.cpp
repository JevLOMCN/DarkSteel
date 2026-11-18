// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHISetRenderTargetsInfo @ 1448ed880

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHISetRenderTargetsInfo * __thiscall
FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(FRHISetRenderTargetsInfo *this)

{
  this->ColorRenderTarget[0].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[0].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[0].MipIndex = 0;
  this->ColorRenderTarget[0].LoadAction = ENoAction;
  this->ColorRenderTarget[0].StoreAction = ENoAction;
  this->ColorRenderTarget[1].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[1].MipIndex = 0;
  this->ColorRenderTarget[1].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[1].LoadAction = ENoAction;
  this->ColorRenderTarget[1].StoreAction = ENoAction;
  this->ColorRenderTarget[2].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[2].MipIndex = 0;
  this->ColorRenderTarget[2].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[2].LoadAction = ENoAction;
  this->ColorRenderTarget[2].StoreAction = ENoAction;
  this->ColorRenderTarget[3].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[3].MipIndex = 0;
  this->ColorRenderTarget[3].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[3].LoadAction = ENoAction;
  this->ColorRenderTarget[3].StoreAction = ENoAction;
  this->ColorRenderTarget[4].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[4].MipIndex = 0;
  this->ColorRenderTarget[4].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[4].LoadAction = ENoAction;
  this->ColorRenderTarget[4].StoreAction = ENoAction;
  this->ColorRenderTarget[5].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[5].MipIndex = 0;
  this->ColorRenderTarget[5].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[5].LoadAction = ENoAction;
  this->ColorRenderTarget[5].StoreAction = ENoAction;
  this->ColorRenderTarget[6].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[6].MipIndex = 0;
  this->ColorRenderTarget[6].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[6].LoadAction = ENoAction;
  this->ColorRenderTarget[6].StoreAction = ENoAction;
  this->ColorRenderTarget[7].Texture = (FRHITexture *)0x0;
  this->ColorRenderTarget[7].MipIndex = 0;
  this->ColorRenderTarget[7].ArraySliceIndex = 0xffffffff;
  this->ColorRenderTarget[7].LoadAction = ENoAction;
  this->ColorRenderTarget[7].StoreAction = ENoAction;
  this->NumColorRenderTargets = 0;
  this->bClearColor = false;
  this->ColorResolveRenderTarget[0].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[0].MipIndex = 0;
  this->ColorResolveRenderTarget[0].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[0].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[0].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[1].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[1].MipIndex = 0;
  this->ColorResolveRenderTarget[1].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[1].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[1].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[2].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[2].MipIndex = 0;
  this->ColorResolveRenderTarget[2].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[2].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[2].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[3].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[3].MipIndex = 0;
  this->ColorResolveRenderTarget[3].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[3].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[3].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[4].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[4].MipIndex = 0;
  this->ColorResolveRenderTarget[4].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[4].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[4].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[5].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[5].MipIndex = 0;
  this->ColorResolveRenderTarget[5].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[5].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[5].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[6].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[6].MipIndex = 0;
  this->ColorResolveRenderTarget[6].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[6].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[6].StoreAction = ENoAction;
  this->ColorResolveRenderTarget[7].Texture = (FRHITexture *)0x0;
  this->ColorResolveRenderTarget[7].MipIndex = 0;
  this->ColorResolveRenderTarget[7].ArraySliceIndex = 0xffffffff;
  this->ColorResolveRenderTarget[7].LoadAction = ENoAction;
  this->ColorResolveRenderTarget[7].StoreAction = ENoAction;
  this->bHasResolveAttachments = false;
  (this->DepthStencilRenderTarget).Texture = (FRHITexture *)0x0;
  (this->DepthStencilRenderTarget).DepthLoadAction = ENoAction;
  (this->DepthStencilRenderTarget).DepthStoreAction = ENoAction;
  (this->DepthStencilRenderTarget).StencilLoadAction = ENoAction;
  (this->DepthStencilRenderTarget).StencilStoreAction = ENoAction;
  (this->DepthStencilRenderTarget).DepthStencilAccess = DepthNop;
  (this->DepthStencilResolveRenderTarget).Texture = (FRHITexture *)0x0;
  (this->DepthStencilResolveRenderTarget).DepthLoadAction = ENoAction;
  (this->DepthStencilResolveRenderTarget).DepthStoreAction = ENoAction;
  (this->DepthStencilResolveRenderTarget).StencilLoadAction = ENoAction;
  (this->DepthStencilResolveRenderTarget).StencilStoreAction = ENoAction;
  (this->DepthStencilResolveRenderTarget).DepthStencilAccess = DepthNop;
  this->bClearDepth = false;
  this->ShadingRateTexture = (FRHITexture *)0x0;
  this->MultiViewCount = '\0';
  return this;
}

