// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// GetInterval @ 144574250

ulong64 __thiscall UE::IoStore::HTTP::FStopwatch::GetInterval(FStopwatch *this,uint param_1)

{
  if (2 < param_1) {
    return 0;
  }
  return this->Samples[param_1 + 1] - this->Samples[param_1];
}

// Impl @ 144578460

void __thiscall UE::IoStore::HTTP::FStopwatch::Impl(FStopwatch *this,uint param_1)

{
  LARGE_INTEGER local_res8;
  
  if (this->Samples[param_1] == 0) {
    QueryPerformanceCounter(&local_res8);
    *(LARGE_INTEGER *)(this->Samples + param_1) = local_res8;
  }
  this->Counts[param_1 >> 1] = this->Counts[param_1 >> 1] + (~param_1 & 1);
  return;
}

