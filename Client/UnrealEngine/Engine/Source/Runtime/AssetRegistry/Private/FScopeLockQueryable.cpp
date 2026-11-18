// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ~FScopeLockQueryable @ 142adadd0

void __thiscall FScopeLockQueryable::~FScopeLockQueryable(FScopeLockQueryable *this)

{
  DWORD DVar1;
  FCriticalSectionQueryable *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  
  lpCriticalSection = this->SynchObject;
  if (lpCriticalSection != (FCriticalSectionQueryable *)0x0) {
    DVar1 = *(DWORD *)&(lpCriticalSection->OwnerThreadId).field_0x0;
    DVar4 = GetCurrentThreadId();
    if (DVar1 != DVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLockedOnCurrentThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                         ,0x2b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&(lpCriticalSection->OwnerThreadId).field_0x0 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->SynchObject = (FCriticalSectionQueryable *)0x0;
  }
  return;
}

