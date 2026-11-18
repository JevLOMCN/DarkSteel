// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ProcessUntilPercentS @ 1418f0ee0

bool __thiscall FLazyPrintf::ProcessUntilPercentS(FLazyPrintf *this)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = wcsstr(this->CurrentInputPos,L"%s");
  if (pwVar3 == (wchar_t *)0x0) {
    return false;
  }
  pwVar2 = this->CurrentInputPos;
  while (pwVar2 < pwVar3) {
    wVar1 = *pwVar2;
    this->CurrentInputPos = pwVar2 + 1;
    ::FString::AppendChar(&this->CurrentState,wVar1);
    pwVar2 = this->CurrentInputPos;
  }
  this->CurrentInputPos = pwVar2 + 2;
  return true;
}

