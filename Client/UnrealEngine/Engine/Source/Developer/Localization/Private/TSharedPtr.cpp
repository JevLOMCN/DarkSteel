// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 6

// operator-> @ 146b45760

FStructuredArchiveEntry * __thiscall
TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>::operator->
          (TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FStructuredArchiveEntry *pFVar3;
  
  if (this->Object != (FStructuredArchiveEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStructuredArchiveEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146b457b0

FStructuredEntry * __thiscall
TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>::operator->
          (TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStructuredEntry *pFVar3;
  
  if (this->Object != (FStructuredEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStructuredEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146b45800

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FLocTextHelper * __thiscall
TSharedPtr<FLocTextHelper,1>::operator->(TSharedPtr<FLocTextHelper,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocTextHelper *pFVar3;
  
  if (this->Object != (FLocTextHelper *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocTextHelper *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146b45850

FPortableObjectEntry * __thiscall
TSharedPtr<FPortableObjectEntry,1>::operator->(TSharedPtr<FPortableObjectEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPortableObjectEntry *pFVar3;
  
  if (this->Object != (FPortableObjectEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPortableObjectEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 146b8df20

TSharedRef<FLocMetadataObject,1> * __thiscall
TSharedPtr<FLocMetadataObject,1>::ToSharedRef
          (TSharedPtr<FLocMetadataObject,1> *this,
          TSharedRef<FLocMetadataObject,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FLocMetadataObject,1> *pTVar4;
  
  if (this->Object == (FLocMetadataObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLocMetadataObject,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FLocMetadataObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLocMetadataObject,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 146b8dfc0

TSharedRef<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::ToSharedRef
          (TSharedPtr<FLocMetadataValue,1> *this,
          TSharedRef<FLocMetadataValue,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FLocMetadataValue,1> *pTVar4;
  
  if (this->Object == (FLocMetadataValue *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FLocMetadataValue *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLocMetadataValue,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

