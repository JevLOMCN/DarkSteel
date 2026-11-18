// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAllocation @ 147abacf0

FAllocation * __thiscall
FLandscapeTextureAtlas::FAllocation::FAllocation(FAllocation *this,UTexture2D *param_1,uint param_2)

{
  this->SourceTexture = param_1;
  this->Handle = 0xffffffff;
  this->VisibilityChannel = param_2;
  this->RefCount = 1;
  return this;
}

// FAllocation @ 147abad10

FAllocation * __thiscall FLandscapeTextureAtlas::FAllocation::FAllocation(FAllocation *this)

{
  this->Handle = 0xffffffff;
  this->SourceTexture = (UTexture2D *)0x0;
  this->VisibilityChannel = 0;
  this->RefCount = 0;
  return this;
}

