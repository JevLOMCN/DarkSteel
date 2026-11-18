// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// operator-> @ 142a58940

/* WARNING: Enum "EVersion": Some values do not have unique names */

FPakSignatureFile * __thiscall
TSharedPtr<FPakSignatureFile_const_,1>::operator->(TSharedPtr<FPakSignatureFile_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPakSignatureFile *pFVar3;
  
  if (this->Object != (FPakSignatureFile *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPakSignatureFile *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142a58990

FFilePackageStoreBackend * __thiscall
TSharedPtr<FFilePackageStoreBackend,1>::operator->(TSharedPtr<FFilePackageStoreBackend,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFilePackageStoreBackend *pFVar3;
  
  if (this->Object != (FFilePackageStoreBackend *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFilePackageStoreBackend *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 142a589e0

IFileIoDispatcherBackend * __thiscall
TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1>::operator->
          (TSharedPtr<UE::IoStore::IFileIoDispatcherBackend,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IFileIoDispatcherBackend *pIVar3;
  
  if (this->Object != (IFileIoDispatcherBackend *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IFileIoDispatcherBackend *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

