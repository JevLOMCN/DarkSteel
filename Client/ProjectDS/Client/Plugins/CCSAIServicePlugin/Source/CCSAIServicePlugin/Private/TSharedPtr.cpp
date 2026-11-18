// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 1

// operator-> @ 14ac85fd0

FCCSAITCPClient * __thiscall
TSharedPtr<FCCSAITCPClient,1>::operator->(TSharedPtr<FCCSAITCPClient,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCCSAITCPClient *pFVar3;
  
  if (this->Object != (FCCSAITCPClient *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCCSAITCPClient *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

