// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 1

// TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*> @ 143132080

TNotNull<UE::FWindowsRecursiveMutex_*> * __thiscall
TNotNull<UE::FWindowsRecursiveMutex_*>::
TNotNull<UE::FWindowsRecursiveMutex_*><UE::FWindowsRecursiveMutex_*>
          (TNotNull<UE::FWindowsRecursiveMutex_*> *this,FWindowsRecursiveMutex **param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  
  pFVar1 = *param_1;
  this->Val = pFVar1;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

