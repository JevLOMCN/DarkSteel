// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// operator-> @ 146b2e330

SThrobber * __thiscall TSharedPtr<SThrobber,1>::operator->(TSharedPtr<SThrobber,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SThrobber *pSVar3;
  
  if (this->Object != (SThrobber *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SThrobber *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

