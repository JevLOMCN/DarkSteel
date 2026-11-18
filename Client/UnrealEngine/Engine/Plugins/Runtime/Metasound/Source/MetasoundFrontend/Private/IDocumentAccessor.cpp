// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// GetSharedAccess @ 14adc2e10

FConstDocumentAccess * __cdecl
Metasound::Frontend::IDocumentAccessor::GetSharedAccess
          (FConstDocumentAccess *__return_storage_ptr__,IDocumentAccessor *param_1)

{
  (**(code **)*param_1)(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSharedAccess @ 14adc2e40

FDocumentAccess * __cdecl
Metasound::Frontend::IDocumentAccessor::GetSharedAccess
          (FDocumentAccess *__return_storage_ptr__,IDocumentAccessor *param_1)

{
  (**(code **)((longlong)*param_1 + 8))(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

