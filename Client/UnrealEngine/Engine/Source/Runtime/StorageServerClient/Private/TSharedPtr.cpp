// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 2

// operator*<FInternetAddr> @ 148cad7d0

FInternetAddr * __thiscall
TSharedPtr<FInternetAddr,1>::operator*<FInternetAddr>(TSharedPtr<FInternetAddr,1> *this)

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
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 148cb79e0

IPlatformHostSocket * __thiscall
TSharedPtr<IPlatformHostSocket,1>::operator->(TSharedPtr<IPlatformHostSocket,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IPlatformHostSocket *pIVar3;
  
  if (this->Object != (IPlatformHostSocket *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPlatformHostSocket *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

