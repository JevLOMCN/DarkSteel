// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// AddRef @ 1415a8800

FReturnedRefCountValue __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::AddRef(FIoStoreErrorDetails *this)

{
  longlong *plVar1;
  longlong lVar2;
  int *in_RDX;
  
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  *in_RDX = (int)lVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetErrorCodeString @ 1415c5ff0

FAnsiString * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetErrorCodeString
          (FIoStoreErrorDetails *this,FAnsiString *__return_storage_ptr__,FError *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FUtf8String *pFVar4;
  size_t sVar5;
  int iVar6;
  char *_Str;
  
  pFVar4 = GetErrorName(this,param_1);
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = "";
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar1 = 0;
    *piVar2 = 0;
  }
  else {
    _Str = (char *)(pFVar4->Data).AllocatorInstance.Data;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar1 = 0;
    *piVar2 = 0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
  }
  if ((FScriptContainerElement)*_Str != (FScriptContainerElement)0x0) {
    sVar5 = strlen(_Str);
    iVar6 = (int)sVar5 + 1;
    uVar3 = UE::Core::Private::GetConvertedLength((char *)0x0,(uchar *)_Str,iVar6);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar2 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    UE::Core::Private::Convert
              ((char *)(__return_storage_ptr__->Data).AllocatorInstance.Data,uVar3,(uchar *)_Str,
               iVar6);
  }
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1415c6310

TStringView<char> * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetErrorDetailsTypeName
          (FIoStoreErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x14;
  __return_storage_ptr__->DataPtr = "FIoStoreErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c6410

TStringView<char> * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetErrorDetailsTypeNameForLog
          (FIoStoreErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x14;
  __return_storage_ptr__->DataPtr = "FIoStoreErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorFormatString @ 1415c6620

FText * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetErrorFormatString
          (FIoStoreErrorDetails *this,FText *__return_storage_ptr__,FError *param_1)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res10 [24];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = GenericErrorFormatString.TextData;
  (__return_storage_ptr__->TextData).Reference = GenericErrorFormatString.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res10);
    __return_storage_ptr__->Flags = GenericErrorFormatString.Flags;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Flags = GenericErrorFormatString.Flags;
  return __return_storage_ptr__;
}

// GetErrorName @ 1415c6c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetErrorName
          (FIoStoreErrorDetails *this,FError *param_1)

{
  FUtf8String *this_00;
  FScriptContainerElement FVar1;
  int iVar2;
  wchar_t *_Str;
  size_t sVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  FUtf8String local_f0;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (1 < (this->CachedErrorName).Data.ArrayNum) goto LAB_1415c6e7b;
  _Str = GetIoErrorText(param_1->ErrorCode);
  pFVar9 = (FScriptContainerElement *)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar3);
    uVar4 = local_48 + 1;
    uVar7 = uVar4;
    if (uVar4 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar7 = 0;
        goto LAB_1415c6cc6;
      }
    }
    else {
LAB_1415c6cc6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,1);
    }
    local_50 = local_d8;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((uchar *)local_50,uVar4,_Str,(int)sVar3 + 1);
  }
  pFVar6 = local_50;
  local_f0.Data.ArrayNum = 0;
  local_f0.Data.ArrayMax = 0;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar5.Data = pFVar9;
  iVar8 = iVar2;
  if ((local_50 != (FScriptContainerElement *)0x0) &&
     (iVar8 = 0, *local_50 != (FScriptContainerElement)0x0)) {
    sVar3 = strlen((char *)local_50);
    uVar4 = (int)sVar3 + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,(ForAnyElementType *)&local_f0,0,&local_f0.Data.ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar4,(ForAnyElementType *)&local_f0,&local_f0.Data.ArrayNum,
               &local_f0.Data.ArrayMax);
    FVar5.Data = local_f0.Data.AllocatorInstance.Data;
    FGenericPlatformString::Memcpy(local_f0.Data.AllocatorInstance.Data,pFVar6,(longlong)(int)uVar4)
    ;
    iVar2 = local_f0.Data.ArrayNum;
    iVar8 = local_f0.Data.ArrayMax;
  }
  this_00 = &this->CachedErrorName;
  if (this_00 != &local_f0) {
    pFVar6 = (this_00->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this_00->Data).AllocatorInstance.Data = FVar5.Data;
    (this->CachedErrorName).Data.ArrayNum = iVar2;
    (this->CachedErrorName).Data.ArrayMax = iVar8;
    FVar5.Data = pFVar9;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar2 = isalpha(0x20);
  if (iVar2 == 0) {
    pFVar6 = (this_00->Data).AllocatorInstance.Data;
    iVar2 = (this->CachedErrorName).Data.ArrayNum;
    pFVar9 = pFVar6 + iVar2;
    while( true ) {
      if ((this->CachedErrorName).Data.ArrayNum != iVar2) {
        `TCheckedPointerIterator<char8_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8)
        ;
      }
      if (pFVar6 == pFVar9) break;
      FVar1 = *pFVar6;
      if (*pFVar6 == (FScriptContainerElement)0x20) {
        FVar1 = (FScriptContainerElement)0x5f;
      }
      *pFVar6 = FVar1;
      pFVar6 = pFVar6 + 1;
    }
  }
  else {
    isupper(0x20);
    FUtf8String::ReplaceCharInlineCaseSensitive(this_00,' ','_');
    pFVar6 = (this_00->Data).AllocatorInstance.Data;
    iVar2 = (this->CachedErrorName).Data.ArrayNum;
    pFVar9 = pFVar6 + iVar2;
    while( true ) {
      if ((this->CachedErrorName).Data.ArrayNum != iVar2) {
        `TCheckedPointerIterator<char8_t,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8)
        ;
      }
      if (pFVar6 == pFVar9) break;
      FVar1 = *pFVar6;
      if (*pFVar6 == (FScriptContainerElement)0x20) {
        FVar1 = (FScriptContainerElement)0x5f;
      }
      *pFVar6 = FVar1;
      pFVar6 = pFVar6 + 1;
    }
  }
LAB_1415c6e7b:
  return &this->CachedErrorName;
}

// GetModuleIdString @ 1415c7890

FAnsiString * __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetModuleIdString
          (FIoStoreErrorDetails *this,FAnsiString *__return_storage_ptr__,FError *param_1)

{
  FScriptContainerElement *pFVar1;
  size_t sVar2;
  FAnsiString *pFVar3;
  FAnsiString local_18;
  
  sVar2 = strlen("IoStore");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = FAnsiString::ConstructFromPtrSize(&local_18,"IoStore",(int)sVar2);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRefCount @ 1415c7c60

uint __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::GetRefCount(FIoStoreErrorDetails *this)

{
  return (uint)this->_padding_;
}

// Release @ 1415e0cd0

uint __thiscall UE::UnifiedError::IoStore::FIoStoreErrorDetails::Release(FIoStoreErrorDetails *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = &this->_padding_;
  LOCK();
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    plVar3 = &this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  return (int)lVar2 - 1;
}

// SerializeToCb @ 1415f1dd0

void __thiscall
UE::UnifiedError::IoStore::FIoStoreErrorDetails::SerializeToCb
          (FIoStoreErrorDetails *this,FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FUtf8String *pFVar2;
  size_t sVar3;
  int iVar4;
  TStringView<char8_t> local_38;
  TStringView<wchar_t> local_28;
  
  FCbWriter::BeginObject(param_1);
  if (param_2->ModuleId == StaticModuleId) {
    pFVar2 = GetErrorName(this,param_2);
    local_38.Size = 0xf;
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    iVar1 = (pFVar2->Data).ArrayNum;
    local_28.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_28.Size = 0;
    }
    local_38.DataPtr = "ErrorCodeString";
    FCbWriter::SetName(param_1,&local_38);
    FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
    sVar3 = strlen("IoStore");
    local_28.Size = 0xe;
    local_38.Size = (int)sVar3;
    local_38.DataPtr = "IoStore";
    local_28.DataPtr = L"ModuleIdString";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
    local_28.DataPtr = (wchar_t *)local_38.DataPtr;
    local_28.Size = local_38.Size;
    local_28._12_4_ = local_38._12_4_;
    FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
    iVar1 = param_2->ErrorCode;
    local_28.Size = 9;
    local_28.DataPtr = L"ErrorCode";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
    FCbWriter::AddInteger(param_1,iVar1);
    iVar1 = param_2->ModuleId;
    local_28.Size = 8;
    local_28.DataPtr = L"ModuleId";
    FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
    FCbWriter::AddInteger(param_1,iVar1);
  }
  local_38.DataPtr = (uchar *)(this->ErrorMessage).Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorMessage).Data.ArrayNum;
  local_28.Size = 0x13;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_28.DataPtr = L"IoStoreErrorMessage";
  local_38.Size = iVar4;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  local_28.Size = 7;
  local_38.DataPtr = "{IoStoreErrorMessage}";
  local_38.Size = 0x15;
  local_28.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  local_28.Size = 5;
  local_38.DataPtr = "FIoStoreErrorDetails";
  local_38.Size = 0x14;
  local_28.DataPtr = L"$type";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  FCbWriter::EndObject(param_1);
  return;
}

