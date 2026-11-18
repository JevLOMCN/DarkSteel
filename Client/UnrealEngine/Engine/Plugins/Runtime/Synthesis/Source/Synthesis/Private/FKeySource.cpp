// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// GetObjectId @ 14f0da420

uint __thiscall FKeySource::GetObjectId(FKeySource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->ObjectId;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

