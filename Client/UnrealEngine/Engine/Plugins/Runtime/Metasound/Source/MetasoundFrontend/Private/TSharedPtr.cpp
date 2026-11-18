// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// operator-> @ 14addf970

FDocumentModifyDelegates * __thiscall
TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::operator->
          (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDocumentModifyDelegates *pFVar3;
  
  if (this->Object != (FDocumentModifyDelegates *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDocumentModifyDelegates *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14ae0af70

TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> * __thiscall
TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1>::ToSharedRef
          (TSharedPtr<Metasound::Frontend::FDocumentModifyDelegates,1> *this,
          TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *pTVar4;
  
  if (this->Object == (FDocumentModifyDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FDocumentModifyDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

