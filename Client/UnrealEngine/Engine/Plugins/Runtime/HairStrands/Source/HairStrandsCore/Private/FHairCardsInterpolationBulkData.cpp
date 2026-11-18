// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// Serialize @ 14e0ac250

void __thiscall
FHairCardsInterpolationBulkData::Serialize(FHairCardsInterpolationBulkData *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FHairCardsInterpolationVertex,TSizedDefaultAllocator<32>_>
            (param_1,&this->Interpolation);
  return;
}

