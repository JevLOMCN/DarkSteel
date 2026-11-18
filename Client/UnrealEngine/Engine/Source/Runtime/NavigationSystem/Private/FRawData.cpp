// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FRawData @ 146e35ea0

FRawData * __thiscall FRecastTileData::FRawData::FRawData(FRawData *this,uchar *param_1)

{
  this->RawData = param_1;
  return this;
}

// ~FRawData @ 146e37380

void __thiscall FRecastTileData::FRawData::~FRawData(FRawData *this)

{
  dtFree(this->RawData,DT_ALLOC_PERM_TILE_DATA);
  return;
}

