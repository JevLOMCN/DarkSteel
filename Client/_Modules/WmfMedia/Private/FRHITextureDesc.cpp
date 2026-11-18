// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// ~FRHITextureDesc @ 14ea974a0

void __thiscall FRHITextureDesc::~FRHITextureDesc(FRHITextureDesc *this)

{
  ForElementType<EPixelFormat> FVar1;
  
  FVar1 = (this->AliasableFormats).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

