// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// Serialize @ 14dc56380

void __thiscall
UE::Chaos::ClothAsset::Private::FMemoryCounterArchive::Serialize
          (FMemoryCounterArchive *this,void *param_1,long64 param_2)

{
  this->Size = this->Size + param_2;
  return;
}

// TotalSize @ 14dc5d6c0

long64 __thiscall
UE::Chaos::ClothAsset::Private::FMemoryCounterArchive::TotalSize(FMemoryCounterArchive *this)

{
  return this->Size;
}

