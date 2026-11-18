// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// SetPropertyValue @ 14be4f3a0

bool __thiscall
UMVVMViewModelBase::SetPropertyValue
          (UMVVMViewModelBase *this,FText *param_1,FText *param_2,FFieldId *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_28 [16];
  FName local_18;
  int local_10;
  
  bVar3 = FText::IdenticalTo(param_1,param_2,None);
  if (bVar3) {
    bVar3 = false;
  }
  else {
    pIVar1 = (param_2->TextData).Reference;
    pIVar2 = (param_1->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (param_1->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_28);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    local_18 = param_3->FieldName;
    param_1->Flags = param_2->Flags;
    local_10 = param_3->BitNumber;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    bVar3 = true;
  }
  return bVar3;
}

// SetPropertyValue<FSoftObjectPath,FSoftObjectPath> @ 14be72180

bool __thiscall
UMVVMViewModelBase::SetPropertyValue<FSoftObjectPath,FSoftObjectPath>
          (UMVVMViewModelBase *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2,
          FFieldId *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  FName local_18;
  int local_10;
  
  bVar5 = FSoftObjectPath::operator==(param_1,param_2);
  if (bVar5) {
    bVar5 = false;
  }
  else {
    FVar4 = (param_2->AssetPath).AssetName;
    (param_1->AssetPath).PackageName = (param_2->AssetPath).PackageName;
    (param_1->AssetPath).AssetName = FVar4;
    pFVar6 = &param_1->SubPathString;
    if (pFVar6 != &param_2->SubPathString) {
      iVar2 = (param_2->SubPathString).Data.ArrayNum;
      piVar1 = &(param_1->SubPathString).Data.ArrayMax;
      iVar3 = *piVar1;
      _Src = (param_2->SubPathString).Data.AllocatorInstance.Data;
      (param_1->SubPathString).Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,iVar3,(ForAnyElementType *)pFVar6,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((pFVar6->Data).AllocatorInstance.Data,_Src,(longlong)iVar2);
        }
      }
    }
    local_10 = param_3->BitNumber;
    local_18 = param_3->FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    bVar5 = true;
  }
  return bVar5;
}

// SetPropertyValue<FString,FString> @ 14bf97bf0

bool __thiscall
UMVVMViewModelBase::SetPropertyValue<FString,FString>
          (UMVVMViewModelBase *this,FString *param_1,FString *param_2,FFieldId *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return false;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return false;
  }
  ::FString::operator=(param_1,param_2);
  local_10 = param_3->BitNumber;
  local_18 = param_3->FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return true;
}

