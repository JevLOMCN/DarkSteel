// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 1

// operator-> @ 14310be80

FInternetAddr * __thiscall
TSharedPtr<FInternetAddr,1>::operator->(TSharedPtr<FInternetAddr,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInternetAddr *pFVar3;
  
  if (this->Object != (FInternetAddr *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

