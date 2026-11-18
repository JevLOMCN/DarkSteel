// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// SerializeHeader @ 142b1d780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAssetRegistryHeader::SerializeHeader(FAssetRegistryHeader *this,FArchive *param_1)

{
  FAssetRegistryVersion::SerializeVersion(param_1,&this->Version);
  if (0xf < (int)this->Version) {
    ::operator<<(param_1,&this->bFilterEditorOnlyData);
    return;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->bFilterEditorOnlyData = false;
  }
  return;
}

