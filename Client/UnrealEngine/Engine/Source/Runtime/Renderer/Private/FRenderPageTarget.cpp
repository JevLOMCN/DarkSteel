// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRenderPageTarget @ 1458cbe40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRenderPageTarget * __thiscall
RuntimeVirtualTexture::FRenderPageTarget::FRenderPageTarget(FRenderPageTarget *this)

{
  this->TextureAccessBefore = SRVMask;
  this->PooledRenderTarget = (IPooledRenderTarget *)0x0;
  this->Texture = (FRHITexture *)0x0;
  this->TextureAccessAfter = SRVMask;
  return this;
}

