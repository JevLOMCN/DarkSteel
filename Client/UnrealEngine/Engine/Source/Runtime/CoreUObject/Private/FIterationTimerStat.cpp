// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ToString @ 1421e9790

FString * __thiscall
UE::GC::Private::FIterationTimerStat::ToString
          (FIterationTimerStat *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
  return __return_storage_ptr__;
}

