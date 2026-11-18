// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// AsDouble @ 1432bf980

double __thiscall BuildPatchServices::FMockManifestField::AsDouble(FMockManifestField *this)

{
  return this->Double;
}

// AsInteger @ 1432bf990

long64 __thiscall BuildPatchServices::FMockManifestField::AsInteger(FMockManifestField *this)

{
  return this->Integer;
}

// AsString @ 1432bf9a0

FString * __thiscall
BuildPatchServices::FMockManifestField::AsString
          (FMockManifestField *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->String);
  return __return_storage_ptr__;
}

