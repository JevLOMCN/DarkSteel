// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRenderTargetBindingSlots @ 14472e4b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderTargetBindingSlots * __thiscall
FRenderTargetBindingSlots::FRenderTargetBindingSlots(FRenderTargetBindingSlots *this)

{
  (this->Output).Elements[0].LoadAction = ENoAction;
  (this->Output).Elements[0].MipIndex = '\0';
  (this->Output).Elements[0].ArraySlice = -1;
  (this->Output).Elements[0].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[0].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[1].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[1].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[1].LoadAction = ENoAction;
  (this->Output).Elements[1].MipIndex = '\0';
  (this->Output).Elements[1].ArraySlice = -1;
  (this->Output).Elements[2].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[2].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[2].LoadAction = ENoAction;
  (this->Output).Elements[2].MipIndex = '\0';
  (this->Output).Elements[2].ArraySlice = -1;
  (this->Output).Elements[3].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[3].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[3].LoadAction = ENoAction;
  (this->Output).Elements[3].MipIndex = '\0';
  (this->Output).Elements[3].ArraySlice = -1;
  (this->Output).Elements[4].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[4].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[4].LoadAction = ENoAction;
  (this->Output).Elements[4].MipIndex = '\0';
  (this->Output).Elements[4].ArraySlice = -1;
  (this->Output).Elements[5].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[5].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[5].LoadAction = ENoAction;
  (this->Output).Elements[5].MipIndex = '\0';
  (this->Output).Elements[5].ArraySlice = -1;
  (this->Output).Elements[6].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[6].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[6].LoadAction = ENoAction;
  (this->Output).Elements[6].MipIndex = '\0';
  (this->Output).Elements[6].ArraySlice = -1;
  (this->Output).Elements[7].Texture = (FRDGTexture *)0x0;
  (this->Output).Elements[7].ResolveTexture = (FRDGTexture *)0x0;
  (this->Output).Elements[7].LoadAction = ENoAction;
  (this->Output).Elements[7].MipIndex = '\0';
  (this->Output).Elements[7].ArraySlice = -1;
  (this->DepthStencil).Texture = (FRDGTexture *)0x0;
  (this->DepthStencil).ResolveTexture = (FRDGTexture *)0x0;
  (this->DepthStencil).DepthLoadAction = ENoAction;
  (this->DepthStencil).StencilLoadAction = ENoAction;
  (this->DepthStencil).DepthStencilAccess.Value = DepthNop;
  (this->ResolveRect).X1 = -1;
  (this->ResolveRect).Y1 = -1;
  (this->ResolveRect).X2 = -1;
  (this->ResolveRect).Y2 = -1;
  this->NumOcclusionQueries = 0;
  this->SubpassHint = None;
  this->MultiViewCount = '\0';
  this->ShadingRateTexture = (FRDGTexture *)0x0;
  return this;
}

// operator[] @ 14485e890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderTargetBinding * __thiscall
FRenderTargetBindingSlots::operator[](FRenderTargetBindingSlots *this,uint param_1)

{
  return (this->Output).Elements + param_1;
}

