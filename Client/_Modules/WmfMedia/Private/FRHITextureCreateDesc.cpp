// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FRHITextureCreateDesc @ 14ea97480

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FRHITextureCreateDesc::~FRHITextureCreateDesc(FRHITextureCreateDesc *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

