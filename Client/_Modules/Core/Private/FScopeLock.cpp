// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FScopeLock @ 1419ceaa0

FScopeLock * __thiscall
FScopeLock::FScopeLock(FScopeLock *this,TNotNull<UE::FWindowsRecursiveMutex_*> param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopeLock *pFVar3;
  
  *this = (FScopeLock)param_1.Val;
  if (param_1.Val == (FWindowsRecursiveMutex *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScopeLock *)(*pcVar1)();
      return pFVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*this);
  return this;
}

