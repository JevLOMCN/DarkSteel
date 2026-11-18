// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FWindowsRecursiveMutex @ 14161e560

FWindowsRecursiveMutex * __thiscall
UE::FWindowsRecursiveMutex::FWindowsRecursiveMutex(FWindowsRecursiveMutex *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  return this;
}

// ~FWindowsRecursiveMutex @ 1416210c0

void __stdcall
UE::FWindowsRecursiveMutex::~FWindowsRecursiveMutex(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001416210c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

