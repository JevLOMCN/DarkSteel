// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FLocItem @ 1416d59c0

FLocItem * __thiscall FLocItem::FLocItem(FLocItem *this,FLocItem *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *this_00;
  FLocItem *pFVar3;
  TRawPtrProxy<FLocMetadataObject> local_res8;
  
  ::FString::FString(&this->Text,&param_1->Text);
  local_res8.Object = (FLocMetadataObject *)0x0;
  (this->MetadataObj).Object = (FLocMetadataObject *)0x0;
  (this->MetadataObj).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((param_1->MetadataObj).Object != (FLocMetadataObject *)0x0) {
    this_00 = ::operator_new(0x50);
    if (this_00 != (FLocMetadataObject *)0x0) {
      if ((param_1->MetadataObj).Object == (FLocMetadataObject *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FLocItem *)(*pcVar1)();
          return pFVar3;
        }
      }
      local_res8.Object =
           FLocMetadataObject::FLocMetadataObject(this_00,(param_1->MetadataObj).Object);
    }
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(&this->MetadataObj,&local_res8);
  }
  return this;
}

// operator= @ 1416d9b10

FLocItem * __thiscall FLocItem::operator=(FLocItem *this,FLocItem *param_1)

{
  TSharedPtr<FLocMetadataObject,1> *this_00;
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *this_01;
  FLocItem *pFVar3;
  FLocMetadataObject *pFVar4;
  TRawPtrProxy<FLocMetadataObject> local_res8;
  TSharedPtr<FLocMetadataObject,1> local_28;
  
  if (this == param_1) {
    return this;
  }
  ::FString::operator=(&this->Text,&param_1->Text);
  pFVar4 = (FLocMetadataObject *)0x0;
  this_00 = &this->MetadataObj;
  local_28.Object = (FLocMetadataObject *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this_00 != &local_28) {
    this_00->Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MetadataObj).SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if ((param_1->MetadataObj).Object != (FLocMetadataObject *)0x0) {
    this_01 = ::operator_new(0x50);
    if (this_01 != (FLocMetadataObject *)0x0) {
      if ((param_1->MetadataObj).Object == (FLocMetadataObject *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FLocItem *)(*pcVar1)();
          return pFVar3;
        }
      }
      pFVar4 = FLocMetadataObject::FLocMetadataObject(this_01,(param_1->MetadataObj).Object);
    }
    local_res8.Object = pFVar4;
    TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(this_00,&local_res8);
    return this;
  }
  return this;
}

// operator== @ 1416da3a0

bool __thiscall FLocItem::operator==(FLocItem *this,FLocItem *param_1)

{
  int iVar1;
  int iVar2;
  FLocMetadataObject *pFVar3;
  FLocMetadataObject *pFVar4;
  TSharedPtr<FLocMetadataObject,1> *this_00;
  bool bVar5;
  
  iVar2 = (this->Text).Data.ArrayNum;
  iVar1 = (param_1->Text).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_1416da3da;
    iVar2 = wcscmp((wchar_t *)(this->Text).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->Text).Data.AllocatorInstance.Data);
    bVar5 = iVar2 == 0;
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
  }
  if (!bVar5) {
    return false;
  }
LAB_1416da3da:
  pFVar3 = (this->MetadataObj).Object;
  this_00 = &param_1->MetadataObj;
  if ((pFVar3 != (FLocMetadataObject *)0x0) || (this_00->Object != (FLocMetadataObject *)0x0)) {
    pFVar4 = this_00->Object;
    if ((pFVar3 != (FLocMetadataObject *)0x0) == (pFVar4 != (FLocMetadataObject *)0x0)) {
      pFVar3 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>(&this->MetadataObj);
      pFVar4 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>(this_00);
      bVar5 = FLocMetadataObject::operator==(pFVar3,pFVar4);
      return bVar5;
    }
    if (((pFVar3 == (FLocMetadataObject *)0x0) ||
        (*(int *)&(pFVar3->Values).field_0x8 != *(int *)&(pFVar3->Values).field_0x34)) &&
       ((pFVar4 == (FLocMetadataObject *)0x0 ||
        (*(int *)&(pFVar4->Values).field_0x8 != *(int *)&(pFVar4->Values).field_0x34)))) {
      return false;
    }
  }
  return true;
}

// operator< @ 1416da8d0

bool __thiscall FLocItem::operator<(FLocItem *this,FLocItem *param_1)

{
  bool bVar1;
  int iVar2;
  FLocMetadataObject *pFVar3;
  FLocMetadataObject *pFVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  
  _Str1 = L"";
  if ((param_1->Text).Data.ArrayNum == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)(param_1->Text).Data.AllocatorInstance.Data;
  }
  if ((this->Text).Data.ArrayNum != 0) {
    _Str1 = (wchar_t *)(this->Text).Data.AllocatorInstance.Data;
  }
  iVar2 = wcscmp(_Str1,_Str2);
  if (iVar2 == -1) {
    return true;
  }
  bVar1 = false;
  if (iVar2 == 0) {
    pFVar3 = (param_1->MetadataObj).Object;
    pFVar4 = (this->MetadataObj).Object;
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
      pFVar3 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>(&this->MetadataObj);
      pFVar4 = TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
                         (&param_1->MetadataObj);
      bVar1 = FLocMetadataObject::operator<(pFVar3,pFVar4);
    }
  }
  return bVar1;
}

// IsExactMatch @ 141701be0

bool __thiscall FLocItem::IsExactMatch(FLocItem *this,FLocItem *param_1)

{
  int iVar1;
  FLocMetadataObject *this_00;
  FLocMetadataObject *pFVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (this->Text).Data.ArrayNum;
  iVar1 = (param_1->Text).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_141701c1a;
    iVar3 = wcscmp((wchar_t *)(this->Text).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->Text).Data.AllocatorInstance.Data);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
  }
  if (!bVar4) {
    return false;
  }
LAB_141701c1a:
  this_00 = (this->MetadataObj).Object;
  pFVar2 = (param_1->MetadataObj).Object;
  if ((this_00 != (FLocMetadataObject *)0x0) || (pFVar2 != (FLocMetadataObject *)0x0)) {
    if ((this_00 != (FLocMetadataObject *)0x0) == (pFVar2 != (FLocMetadataObject *)0x0)) {
      bVar4 = FLocMetadataObject::IsExactMatch(this_00,pFVar2);
      return bVar4;
    }
    if (((this_00 == (FLocMetadataObject *)0x0) ||
        (*(int *)&(this_00->Values).field_0x8 != *(int *)&(this_00->Values).field_0x34)) &&
       ((pFVar2 == (FLocMetadataObject *)0x0 ||
        (*(int *)&(pFVar2->Values).field_0x8 != *(int *)&(pFVar2->Values).field_0x34)))) {
      return false;
    }
  }
  return true;
}

// FLocItem @ 141be4970

FLocItem * __thiscall FLocItem::FLocItem(FLocItem *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Text).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->MetadataObj).Object = (FLocMetadataObject *)0x0;
  (this->MetadataObj).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

