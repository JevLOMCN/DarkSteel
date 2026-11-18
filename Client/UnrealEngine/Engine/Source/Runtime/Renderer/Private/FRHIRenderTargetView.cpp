// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHIRenderTargetView @ 1448ed860

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIRenderTargetView * __thiscall
FRHIRenderTargetView::FRHIRenderTargetView(FRHIRenderTargetView *this)

{
  this->ArraySliceIndex = 0xffffffff;
  this->Texture = (FRHITexture *)0x0;
  this->MipIndex = 0;
  this->LoadAction = ENoAction;
  this->StoreAction = ENoAction;
  return this;
}

