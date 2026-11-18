// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// Scope @ 1445807b0

FScope __thiscall LaneTraceDetail::FLoctight::Scope(FLoctight *this)

{
  FWindowsRecursiveMutex *in_RDX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  (in_RDX->CriticalSection).Opaque1[0] = this;
  return (FScope)in_RDX;
}

