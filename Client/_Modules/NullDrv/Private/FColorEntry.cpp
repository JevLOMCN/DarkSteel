// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// FColorEntry @ 1446c41f0

FColorEntry * __thiscall FRHIRenderPassInfo::FColorEntry::FColorEntry(FColorEntry *this)

{
  this->ArraySlice = -1;
  this->RenderTarget = (FRHITexture *)0x0;
  this->ResolveTarget = (FRHITexture *)0x0;
  this->MipIndex = '\0';
  this->Action = DontLoad_DontStore;
  return this;
}

