// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// WriteCompactBinary @ 142bb8280

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall FAssetDependency::WriteCompactBinary(FAssetDependency *this,FCbWriter *param_1)

{
  FCbWriter::BeginArray(param_1);
  FAssetIdentifier::WriteCompactBinary(&this->AssetId,param_1);
  FCbWriter::AddInteger(param_1,(uint)this->Category);
  FCbWriter::AddInteger(param_1,(uint)this->Properties);
  FCbWriter::EndArray(param_1);
  return;
}

