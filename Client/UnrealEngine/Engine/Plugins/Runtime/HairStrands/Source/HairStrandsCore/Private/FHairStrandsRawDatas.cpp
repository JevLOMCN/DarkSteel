// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Reset @ 14e0aacb0

void __thiscall FHairStrandsRawDatas::Reset(FHairStrandsRawDatas *this)

{
  FHairStrandsCurves::Reset((FHairStrandsCurves *)&this->field_0x78);
  FHairStrandsPoints::Reset((FHairStrandsPoints *)this);
  return;
}

