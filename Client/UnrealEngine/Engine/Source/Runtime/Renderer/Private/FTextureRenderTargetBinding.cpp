// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FTextureRenderTargetBinding @ 14472eaa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTextureRenderTargetBinding * __thiscall
FTextureRenderTargetBinding::FTextureRenderTargetBinding(FTextureRenderTargetBinding *this)

{
  this->Texture = (FRDGTexture *)0x0;
  this->ArraySlice = -1;
  this->bNeverClear = false;
  return this;
}

