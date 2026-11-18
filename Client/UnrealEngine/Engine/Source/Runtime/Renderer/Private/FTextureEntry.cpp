// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FTextureEntry @ 1458cca60

FTextureEntry * __thiscall FVirtualTextureSpace::FTextureEntry::FTextureEntry(FTextureEntry *this)

{
  (this->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
  (this->TextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
  return this;
}

// ~FTextureEntry @ 1458d0df0

void __thiscall FVirtualTextureSpace::FTextureEntry::~FTextureEntry(FTextureEntry *this)

{
  FRHITextureReference *this_00;
  IPooledRenderTarget *pIVar1;
  
  this_00 = (this->TextureReferenceRHI).Reference;
  if (this_00 != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pIVar1 = (this->RenderTarget).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458d0e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

