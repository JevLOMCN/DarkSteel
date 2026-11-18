// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 3

// operator-> @ 1431514b0

FRetryDomains * __thiscall
TSharedPtr<FHttpRetrySystem::FRetryDomains,1>::operator->
          (TSharedPtr<FHttpRetrySystem::FRetryDomains,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRetryDomains *pFVar3;
  
  if (this->Object != (FRetryDomains *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRetryDomains *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 143151500

FHttpResponseCommon * __thiscall
TSharedPtr<FHttpResponseCommon,1>::operator->(TSharedPtr<FHttpResponseCommon,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FHttpResponseCommon *pFVar3;
  
  if (this->Object != (FHttpResponseCommon *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FHttpResponseCommon *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 143151550

FRequestPayload * __thiscall
TSharedPtr<FRequestPayload,1>::operator->(TSharedPtr<FRequestPayload,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FRequestPayload *pFVar3;
  
  if (this->Object != (FRequestPayload *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRequestPayload *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

