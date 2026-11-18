// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 1

// GetCertificateManager @ 14b3fca20

ISslCertificateManager * __thiscall FSslModule::GetCertificateManager(FSslModule *this)

{
  code *pcVar1;
  bool bVar2;
  ISslCertificateManager *pIVar3;
  
  if (this->CertificateManagerPtr != (ISslCertificateManager *)0x0) {
    return this->CertificateManagerPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CertificateManagerPtr != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISslCertificateManager *)(*pcVar1)();
    return pIVar3;
  }
  return this->CertificateManagerPtr;
}

