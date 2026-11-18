// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FCallstackData @ 141ed3430

FCallstackData * __thiscall
FArchiveCallstacks::FCallstackData::FCallstackData
          (FCallstackData *this,TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *param_1,
          UObject *param_2,FProperty *param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_28;
  
  pFVar1 = &this->SerializedPropertyName;
  (this->Callstack).Ptr = param_1->Ptr;
  pFVar4 = &this->SerializedObjectName;
  param_1->Ptr = (char *)0x0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedObjectName).Data.ArrayNum = 0;
  (this->SerializedObjectName).Data.ArrayMax = 0;
  this->SerializedProp = param_3;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedPropertyName).Data.ArrayNum = 0;
  (this->SerializedPropertyName).Data.ArrayMax = 0;
  if (param_2 != (UObject *)0x0) {
    pFVar3 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0,None);
    if (pFVar4 != pFVar3) {
      pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SerializedObjectName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->SerializedObjectName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 != (FProperty *)0x0) {
    pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
    if (pFVar1 != pFVar4) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SerializedPropertyName).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (this->SerializedPropertyName).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// Clone @ 141ee0510

FCallstackData * __thiscall
FArchiveCallstacks::FCallstackData::Clone
          (FCallstackData *this,FCallstackData *__return_storage_ptr__)

{
  FString *pFVar1;
  FString *pFVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FProperty *this_00;
  FScriptContainerElement *pFVar6;
  size_t sVar7;
  char *_Dst;
  FString *pFVar8;
  char *_Dst_00;
  ulong64 _Size;
  FString local_28;
  
  _Dst_00 = (char *)0x0;
  sVar7 = strlen((this->Callstack).Ptr);
  if (0 < (int)sVar7) {
    _Size = (ulong64)((int)sVar7 + 1);
    _Dst = operator_new__(_Size);
    if (_Dst != (char *)0x0) {
      memset(_Dst,0,_Size);
      _Dst_00 = _Dst;
    }
    operator_delete__((void *)0x0);
    operator_delete__((void *)0x0);
    memcpy(_Dst_00,(this->Callstack).Ptr,_Size);
  }
  this_00 = this->SerializedProp;
  pFVar1 = &__return_storage_ptr__->SerializedObjectName;
  (__return_storage_ptr__->SerializedObjectName).Data.ArrayMax = 0;
  pFVar2 = &__return_storage_ptr__->SerializedPropertyName;
  (__return_storage_ptr__->Callstack).Ptr = _Dst_00;
  piVar3 = &(__return_storage_ptr__->SerializedObjectName).Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SerializedObjectName).Data.ArrayNum = 0;
  __return_storage_ptr__->SerializedProp = this_00;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SerializedPropertyName).Data.ArrayNum = 0;
  (__return_storage_ptr__->SerializedPropertyName).Data.ArrayMax = 0;
  if (this_00 != (FProperty *)0x0) {
    pFVar8 = FField::GetFullName((FField *)this_00,&local_28);
    if (pFVar2 != pFVar8) {
      pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->SerializedPropertyName).Data.ArrayNum = (pFVar8->Data).ArrayNum;
      (__return_storage_ptr__->SerializedPropertyName).Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (pFVar1 != &this->SerializedObjectName) {
    iVar4 = (this->SerializedObjectName).Data.ArrayNum;
    pFVar6 = (this->SerializedObjectName).Data.AllocatorInstance.Data;
    iVar5 = *piVar3;
    (__return_storage_ptr__->SerializedObjectName).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,iVar5,(ForAnyElementType *)pFVar1,iVar4,piVar3);
      if (iVar4 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,pFVar6,(longlong)iVar4 * 2);
      }
    }
  }
  operator_delete__((void *)0x0);
  return __return_storage_ptr__;
}

// ToString @ 141f16810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FArchiveCallstacks::FCallstackData::ToString
          (FCallstackData *this,FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *_Str;
  wchar_t *_Str_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  FDiffFormatHelper *pFVar4;
  size_t sVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = FDiffFormatHelper::Get();
  _Str = pFVar4->LineTerminator;
  pFVar4 = FDiffFormatHelper::Get();
  _Str_00 = pFVar4->Indent;
  ::FString::FString(&local_68,(this->Callstack).Ptr);
  if (param_1 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_1);
    iVar2 = ::FString::Find(&local_68,param_1,(int)sVar5,CaseSensitive,FromStart,-1);
    if ((0 < iVar2) &&
       (iVar2 = ::FString::Find(&local_68,L"\n",1,CaseSensitive,FromEnd,iVar2 + -1), 0 < iVar2)) {
      iVar3 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      if (iVar2 + 1 < iVar3) {
        iVar3 = iVar2 + 1;
      }
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar7.Data,iVar2);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_68.Data.ArrayNum = local_48.Data.ArrayNum;
      local_68.Data.ArrayMax = local_48.Data.ArrayMax;
    }
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArrayLines(&local_68,&local_58,true);
  iVar2 = local_58.ArrayNum;
  pFVar8 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar7.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar7.Data == pFVar8) break;
    bVar1 = ::FString::StartsWith((FString *)FVar7.Data,L"0x",2,IgnoreCase);
    if ((bVar1) &&
       (iVar3 = ::FString::Find((FString *)FVar7.Data,L" ",1,CaseSensitive,FromStart,-1), -2 < iVar3
       )) {
      iVar6 = *(int *)(FVar7.Data + 8) + -3;
      if (*(int *)(FVar7.Data + 8) == 0) {
        iVar6 = -2;
      }
      if (iVar3 < iVar6) {
        ::FString::RemoveAt((FString *)FVar7.Data,0,iVar3 + 1,No);
      }
    }
    sVar5 = wcslen(_Str_00);
    ::FString::AppendChars(__return_storage_ptr__,_Str_00,(int)sVar5);
    iVar3 = *(int *)(FVar7.Data + 8) + -1;
    if (*(int *)(FVar7.Data + 8) == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar7.Data,iVar3);
    sVar5 = wcslen(_Str);
    ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
    FVar7.Data = FVar7.Data + 0x10;
  }
  if (1 < (this->SerializedObjectName).Data.ArrayNum) {
    sVar5 = wcslen(_Str);
    ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
    sVar5 = wcslen(_Str_00);
    ::FString::AppendChars(__return_storage_ptr__,_Str_00,(int)sVar5);
    ::FString::AppendChars(__return_storage_ptr__,L"Serialized Object: ",0x13);
    iVar3 = (this->SerializedObjectName).Data.ArrayNum;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,
               (wchar_t *)(this->SerializedObjectName).Data.AllocatorInstance.Data,iVar2);
    sVar5 = wcslen(_Str);
    ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
  }
  if (1 < (this->SerializedPropertyName).Data.ArrayNum) {
    if ((this->SerializedObjectName).Data.ArrayNum < 2) {
      sVar5 = wcslen(_Str);
      ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
    }
    sVar5 = wcslen(_Str_00);
    ::FString::AppendChars(__return_storage_ptr__,_Str_00,(int)sVar5);
    ::FString::AppendChars(__return_storage_ptr__,L"Serialized Property: ",0x15);
    iVar3 = (this->SerializedPropertyName).Data.ArrayNum;
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,
               (wchar_t *)(this->SerializedPropertyName).Data.AllocatorInstance.Data,iVar2);
    sVar5 = wcslen(_Str);
    ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar5);
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

