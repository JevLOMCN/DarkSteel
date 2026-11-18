// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// IsBound @ 14316c5a0

bool __thiscall
TDelegateBase<FThreadSafeDelegateMode>::IsBound(TDelegateBase<FThreadSafeDelegateMode> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (this == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((*(int *)&this->field_0x30 != 0) && (*(longlong **)&this->field_0x28 != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)&this->field_0x28 + 0x38))();
    if (cVar4 != '\0') {
      bVar2 = true;
      goto LAB_14316c602;
    }
  }
  bVar2 = false;
LAB_14316c602:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return bVar2;
}

