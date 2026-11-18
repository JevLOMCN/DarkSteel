// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// DoSerialize @ 142b57fd0

bool __thiscall
UE::AssetRegistry::FDeserializeTagData::DoSerialize
          (FDeserializeTagData *this,FArchive *param_1,EReadPackageDataMainErrorCode *param_2)

{
  ::operator<<(param_1,&this->Key);
  ::operator<<(param_1,&this->Value);
  if ((param_1->field_0x29 & 2) != 0) {
    *param_2 = InvalidTag;
    return false;
  }
  return true;
}

