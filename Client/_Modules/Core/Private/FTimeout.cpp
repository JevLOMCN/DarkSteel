// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// IsExpired @ 141a84870

bool __thiscall UE::FTimeout::IsExpired(FTimeout *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (this->TimeoutCycles == 0xffffffffffffffff) {
    return false;
  }
  if (this->TimeoutCycles == 0) {
    return true;
  }
  QueryPerformanceCounter(local_res8);
  return this->TimeoutCycles + this->StartCycles < (ulonglong)local_res8[0];
}

