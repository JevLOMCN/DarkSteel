// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FGenerateMipsParams @ 1447f4760

/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

FGenerateMipsParams * __thiscall FGenerateMipsParams::FGenerateMipsParams(FGenerateMipsParams *this)

{
  this->Filter = SF_Bilinear;
  this->AddressU = AM_Clamp;
  this->AddressV = AM_Clamp;
  this->AddressW = AM_Clamp;
  return this;
}

