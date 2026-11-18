// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ConvertParentCmdToPropertyName @ 1484cb700

FString * __cdecl
`FRepLayout::CompareProperties'::__l35::FPropertyNameHelper::ConvertParentCmdToPropertyName
          (FString *__return_storage_ptr__,FRepParentCmd *param_1)

{
  ::FName::ToString(&param_1->CachedPropertyName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

