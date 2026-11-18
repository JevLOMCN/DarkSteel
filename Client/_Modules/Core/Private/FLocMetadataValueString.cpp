// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FLocMetadataValueString @ 1416d60c0

FLocMetadataValueString * __thiscall
FLocMetadataValueString::FLocMetadataValueString
          (FLocMetadataValueString *this,FStructuredArchiveSlot param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchiveState *pFVar3;
  FLocMetadataValueString *pFVar4;
  FSlotBase local_res10 [3];
  
  this->_padding_ = (longlong)&___7FLocMetadataValueString__6B_;
  (this->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).Data.ArrayNum = 0;
  (this->Value).Data.ArrayMax = 0;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  if (pFVar3->ArIsLoading == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x1ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLocMetadataValueString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::operator<<((local_res10[0].StructuredArchive)->Formatter->Inner,&this->Value);
  return this;
}

// AsString @ 1416e1380

FString * __thiscall
FLocMetadataValueString::AsString(FLocMetadataValueString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Value);
  return __return_storage_ptr__;
}

// Clone @ 1416e3800

TSharedRef<FLocMetadataValue,1> * __thiscall
FLocMetadataValueString::Clone
          (FLocMetadataValueString *this,TSharedRef<FLocMetadataValue,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FLocMetadataValueString> local_res10;
  
  local_res10.Object = ::operator_new(0x18);
  if (local_res10.Object == (FLocMetadataValueString *)0x0) {
    local_res10.Object = (FLocMetadataValueString *)0x0;
  }
  else {
    (local_res10.Object)->_padding_ = (longlong)&___7FLocMetadataValueString__6B_;
    ::FString::FString(&(local_res10.Object)->Value,&this->Value);
  }
  TSharedRef<FLocMetadataValue,1>::TSharedRef<FLocMetadataValue,1><FLocMetadataValueString>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// EqualTo @ 1416ece60

bool __thiscall
FLocMetadataValueString::EqualTo(FLocMetadataValueString *this,FLocMetadataValue *param_1)

{
  int iVar1;
  
  iVar1 = (this->Value).Data.ArrayNum;
  if (iVar1 != *(int *)(param_1 + 2)) {
    return iVar1 + *(int *)(param_1 + 2) == 1;
  }
  if (1 < iVar1) {
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Value).Data.AllocatorInstance.Data,(wchar_t *)param_1[1]);
    return iVar1 == 0;
  }
  return true;
}

// GetType @ 1416fc6d0

ELocMetadataType __thiscall FLocMetadataValueString::GetType(FLocMetadataValueString *this)

{
  return String;
}

// GetTypeString @ 1416fc770

FString * __thiscall
FLocMetadataValueString::GetTypeString
          (FLocMetadataValueString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"String");
  return __return_storage_ptr__;
}

// LessThan @ 141703d40

bool __thiscall
FLocMetadataValueString::LessThan(FLocMetadataValueString *this,FLocMetadataValue *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = L"";
  if (*(int *)(param_1 + 2) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = *(wchar_t **)(param_1 + 1);
  }
  if ((this->Value).Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)(this->Value).Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,pwVar3);
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// Serialize @ 141710270

void __cdecl
FLocMetadataValueString::Serialize(FLocMetadataValueString *param_1,FStructuredArchiveSlot param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  FArchiveState *pFVar3;
  longlong lVar4;
  FSlotBase local_res10 [3];
  FString local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_2;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  if (pFVar3->ArIsLoading != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x1b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Data.ArrayNum = (param_1->Value).Data.ArrayNum;
  lVar4 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Value).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  ::operator<<((local_res10[0].StructuredArchive)->Formatter->Inner,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ToString @ 141715e60

FString * __thiscall
FLocMetadataValueString::ToString(FLocMetadataValueString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Value);
  return __return_storage_ptr__;
}

