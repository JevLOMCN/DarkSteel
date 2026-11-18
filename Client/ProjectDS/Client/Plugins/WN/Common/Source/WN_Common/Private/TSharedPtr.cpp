// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 1

// operator-> @ 149491240

FWN_CurlHttpStream * __thiscall
TSharedPtr<FWN_CurlHttpStream,1>::operator->(TSharedPtr<FWN_CurlHttpStream,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWN_CurlHttpStream *pFVar3;
  
  if (this->Object != (FWN_CurlHttpStream *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWN_CurlHttpStream *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

