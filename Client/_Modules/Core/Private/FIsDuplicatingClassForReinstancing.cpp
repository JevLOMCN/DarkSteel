// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator= @ 141858d50

FIsDuplicatingClassForReinstancing * __thiscall
FIsDuplicatingClassForReinstancing::operator=(FIsDuplicatingClassForReinstancing *this,bool param_1)

{
  *(bool *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xab0)
       = param_1;
  return this;
}

// operator_bool @ 141859ea0

bool __thiscall
FIsDuplicatingClassForReinstancing::operator_bool(FIsDuplicatingClassForReinstancing *this)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xab0);
}

