// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// ToString @ 14e4644f0

FString * __thiscall FRandomStream::ToString(FRandomStream *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"FRandomStream(InitialSeed=%i, Seed=%u)");
  return __return_storage_ptr__;
}

