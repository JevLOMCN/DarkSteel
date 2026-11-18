// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// FScope @ 14456b600

FScope * __thiscall LaneTraceDetail::FLoctight::FScope::FScope(FScope *this,FScope *param_1)

{
  this->Outer = (FWindowsRecursiveMutex *)0x0;
  this->Outer = param_1->Outer;
  param_1->Outer = (FWindowsRecursiveMutex *)0x0;
  return this;
}

// ~FScope @ 14456c080

void __thiscall LaneTraceDetail::FLoctight::FScope::~FScope(FScope *this)

{
  if ((LPCRITICAL_SECTION)this->Outer != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456c088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this->Outer);
    return;
  }
  return;
}

