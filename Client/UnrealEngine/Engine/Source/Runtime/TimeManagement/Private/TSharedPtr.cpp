// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// operator-> @ 146040790

SFrameRateEntryBox * __thiscall
TSharedPtr<SFrameRateEntryBox,1>::operator->(TSharedPtr<SFrameRateEntryBox,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SFrameRateEntryBox *pSVar3;
  
  if (this->Object != (SFrameRateEntryBox *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SFrameRateEntryBox *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

