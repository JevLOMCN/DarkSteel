// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FArchiveEntry @ 1416d4010

FArchiveEntry * __thiscall
FArchiveEntry::FArchiveEntry
          (FArchiveEntry *this,FLocKey *param_1,FLocKey *param_2,FLocItem *param_3,FLocItem *param_4
          ,TSharedPtr<FLocMetadataObject,1> *param_5,bool param_6)

{
  code *pcVar1;
  TSharedPtr<FLocMetadataObject,1> *pTVar2;
  bool bVar3;
  FLocMetadataObject *this_00;
  FArchiveEntry *pFVar4;
  TSharedPtr<FLocMetadataObject,1> *pTVar5;
  
  ::FString::FString((FString *)this,&param_1->Str);
  (this->Namespace).Hash = param_1->Hash;
  ::FString::FString(&(this->Key).Str,&param_2->Str);
  (this->Key).Hash = param_2->Hash;
  FLocItem::FLocItem(&this->Source,param_3);
  FLocItem::FLocItem(&this->Translation,param_4);
  pTVar2 = param_5;
  pTVar5 = (TSharedPtr<FLocMetadataObject,1> *)0x0;
  this->bIsOptional = param_6;
  (this->KeyMetadataObj).Object = (FLocMetadataObject *)0x0;
  (this->KeyMetadataObj).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_5->Object != (FLocMetadataObject *)0x0) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FLocMetadataObject *)0x0) {
      if (pTVar2->Object == (FLocMetadataObject *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FArchiveEntry *)(*pcVar1)();
          return pFVar4;
        }
      }
      pTVar5 = (TSharedPtr<FLocMetadataObject,1> *)
               FLocMetadataObject::FLocMetadataObject(this_00,pTVar2->Object);
    }
    param_5 = pTVar5;
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
              (&this->KeyMetadataObj,(TRawPtrProxy<FLocMetadataObject> *)&param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  return this;
}

