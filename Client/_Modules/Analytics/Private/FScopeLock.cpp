// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// ~FScopeLock @ 143133be0

void __thiscall FScopeLock::~FScopeLock(FScopeLock *this)

{
  if (*this != (FScopeLock)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*this);
    *this = (FScopeLock)0x0;
  }
  return;
}

