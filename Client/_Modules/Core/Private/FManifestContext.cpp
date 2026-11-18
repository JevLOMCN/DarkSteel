// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// FManifestContext @ 1416d63e0

FManifestContext * __thiscall
FManifestContext::FManifestContext(FManifestContext *this,FManifestContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *pFVar3;
  FManifestContext *pFVar4;
  FLocMetadataObject *pFVar5;
  TRawPtrProxy<FLocMetadataObject> local_res8;
  TRawPtrProxy<FLocMetadataObject> local_res10;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  (this->Key).Hash = (param_1->Key).Hash;
  ::FString::FString(&this->SourceLocation,&param_1->SourceLocation);
  pFVar5 = (FLocMetadataObject *)0x0;
  this->PlatformName = param_1->PlatformName;
  this->bIsOptional = param_1->bIsOptional;
  (this->InfoMetadataObj).Object = (FLocMetadataObject *)0x0;
  (this->InfoMetadataObj).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->KeyMetadataObj).Object = (FLocMetadataObject *)0x0;
  (this->KeyMetadataObj).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_1->InfoMetadataObj).Object != (FLocMetadataObject *)0x0) {
    pFVar3 = ::operator_new(0x50);
    local_res8.Object = pFVar5;
    if (pFVar3 != (FLocMetadataObject *)0x0) {
      if (((param_1->InfoMetadataObj).Object == (FLocMetadataObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FManifestContext *)(*pcVar1)();
        return pFVar4;
      }
      local_res8.Object =
           FLocMetadataObject::FLocMetadataObject(pFVar3,(param_1->InfoMetadataObj).Object);
    }
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
              (&this->InfoMetadataObj,&local_res8);
  }
  if ((param_1->KeyMetadataObj).Object != (FLocMetadataObject *)0x0) {
    pFVar3 = ::operator_new(0x50);
    if (pFVar3 != (FLocMetadataObject *)0x0) {
      if (((param_1->KeyMetadataObj).Object == (FLocMetadataObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FManifestContext *)(*pcVar1)();
        return pFVar4;
      }
      pFVar5 = FLocMetadataObject::FLocMetadataObject(pFVar3,(param_1->KeyMetadataObj).Object);
    }
    local_res10.Object = pFVar5;
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
              (&this->KeyMetadataObj,&local_res10);
  }
  return this;
}

// operator= @ 1416d9e10

FManifestContext * __thiscall
FManifestContext::operator=(FManifestContext *this,FManifestContext *param_1)

{
  TSharedPtr<FLocMetadataObject,1> *this_00;
  TSharedPtr<FLocMetadataObject,1> *this_01;
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *pFVar3;
  FManifestContext *pFVar4;
  FLocMetadataObject *pFVar5;
  TRawPtrProxy<FLocMetadataObject> local_res8;
  TRawPtrProxy<FLocMetadataObject> local_res10;
  TSharedPtr<FLocMetadataObject,1> local_48;
  TSharedPtr<FLocMetadataObject,1> local_38;
  
  if (this == param_1) {
    return this;
  }
  ::FString::operator=((FString *)this,(FString *)param_1);
  (this->Key).Hash = (param_1->Key).Hash;
  ::FString::operator=(&this->SourceLocation,&param_1->SourceLocation);
  this_00 = &this->InfoMetadataObj;
  this->PlatformName = param_1->PlatformName;
  pFVar5 = (FLocMetadataObject *)0x0;
  this->bIsOptional = param_1->bIsOptional;
  local_48.Object = (FLocMetadataObject *)0x0;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_00 != &local_48) {
    this_00->Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InfoMetadataObj).SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  this_01 = &this->KeyMetadataObj;
  local_38.Object = (FLocMetadataObject *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_01 != &local_38) {
    this_01->Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeyMetadataObj).SharedReferenceCount,&local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((param_1->InfoMetadataObj).Object != (FLocMetadataObject *)0x0) {
    pFVar3 = ::operator_new(0x50);
    local_res8.Object = pFVar5;
    if (pFVar3 != (FLocMetadataObject *)0x0) {
      if (((param_1->InfoMetadataObj).Object == (FLocMetadataObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FManifestContext *)(*pcVar1)();
        return pFVar4;
      }
      local_res8.Object =
           FLocMetadataObject::FLocMetadataObject(pFVar3,(param_1->InfoMetadataObj).Object);
    }
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(this_00,&local_res8);
  }
  if ((param_1->KeyMetadataObj).Object != (FLocMetadataObject *)0x0) {
    pFVar3 = ::operator_new(0x50);
    if (pFVar3 != (FLocMetadataObject *)0x0) {
      if (((param_1->KeyMetadataObj).Object == (FLocMetadataObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FManifestContext *)(*pcVar1)();
        return pFVar4;
      }
      pFVar5 = FLocMetadataObject::FLocMetadataObject(pFVar3,(param_1->KeyMetadataObj).Object);
    }
    local_res10.Object = pFVar5;
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(this_01,&local_res10);
  }
  return this;
}

// operator== @ 1416da7b0

bool __thiscall FManifestContext::operator==(FManifestContext *this,FManifestContext *param_1)

{
  TSharedPtr<FLocMetadataObject,1> *this_00;
  bool bVar1;
  int iVar2;
  FLocMetadataObject *pFVar3;
  FLocMetadataObject *pFVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  if ((this->Key).Hash == (param_1->Key).Hash) {
    _Str1 = L"";
    if ((param_1->Key).Str.Data.ArrayNum == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)(param_1->Key).Str.Data.AllocatorInstance.Data;
    }
    if ((this->Key).Str.Data.ArrayNum != 0) {
      _Str1 = (wchar_t *)(this->Key).Str.Data.AllocatorInstance.Data;
    }
    iVar2 = wcscmp(_Str1,_Str2);
    if (iVar2 == 0) {
      pFVar3 = (this->KeyMetadataObj).Object;
      this_00 = &param_1->KeyMetadataObj;
      if ((pFVar3 != (FLocMetadataObject *)0x0) || (this_00->Object != (FLocMetadataObject *)0x0)) {
        pFVar4 = this_00->Object;
        if ((pFVar3 != (FLocMetadataObject *)0x0) == (pFVar4 != (FLocMetadataObject *)0x0)) {
          pFVar3 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                             (&this->KeyMetadataObj);
          pFVar4 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>(this_00);
          bVar1 = FLocMetadataObject::operator==(pFVar3,pFVar4);
          return bVar1;
        }
        if ((pFVar3 == (FLocMetadataObject *)0x0) ||
           (*(int *)&(pFVar3->Values).field_0x8 != *(int *)&(pFVar3->Values).field_0x34)) {
          if (pFVar4 == (FLocMetadataObject *)0x0) {
            return false;
          }
          if (*(int *)&(pFVar4->Values).field_0x8 != *(int *)&(pFVar4->Values).field_0x34) {
            return false;
          }
        }
      }
      return true;
    }
  }
  return false;
}

// operator< @ 1416daf90

bool __thiscall FManifestContext::operator<(FManifestContext *this,FManifestContext *param_1)

{
  bool bVar1;
  int iVar2;
  FLocMetadataObject *pFVar3;
  FLocMetadataObject *pFVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  _Str1 = L"";
  if ((param_1->Key).Str.Data.ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(param_1->Key).Str.Data.AllocatorInstance.Data;
  }
  if ((this->Key).Str.Data.ArrayNum != 0) {
    _Str1 = (wchar_t *)(this->Key).Str.Data.AllocatorInstance.Data;
  }
  iVar2 = wcscmp(_Str1,_Str2);
  if (iVar2 == -1) {
    return true;
  }
  bVar1 = false;
  if (iVar2 == 0) {
    pFVar3 = (param_1->KeyMetadataObj).Object;
    pFVar4 = (this->KeyMetadataObj).Object;
    if ((pFVar4 != (FLocMetadataObject *)0x0) != (pFVar3 != (FLocMetadataObject *)0x0)) {
      if (((pFVar4 == (FLocMetadataObject *)0x0) ||
          (*(int *)&(pFVar4->Values).field_0x8 != *(int *)&(pFVar4->Values).field_0x34)) &&
         ((pFVar3 == (FLocMetadataObject *)0x0 ||
          (*(int *)&(pFVar3->Values).field_0x8 != *(int *)&(pFVar3->Values).field_0x34)))) {
        return pFVar3 != (FLocMetadataObject *)0x0;
      }
      return false;
    }
    bVar1 = false;
    if ((pFVar4 != (FLocMetadataObject *)0x0) && (pFVar3 != (FLocMetadataObject *)0x0)) {
      pFVar3 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                         (&this->KeyMetadataObj);
      pFVar4 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                         (&param_1->KeyMetadataObj);
      bVar1 = FLocMetadataObject::operator<(pFVar3,pFVar4);
    }
  }
  return bVar1;
}

