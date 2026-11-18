// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FLocMetadataValueBoolean @ 1416d5f10

FLocMetadataValueBoolean * __thiscall
FLocMetadataValueBoolean::FLocMetadataValueBoolean
          (FLocMetadataValueBoolean *this,FStructuredArchiveSlot param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchiveState *pFVar3;
  FLocMetadataValueBoolean *pFVar4;
  FSlotBase local_res10 [3];
  
  this->_padding_ = (longlong)&___7FLocMetadataValueBoolean__6B_;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  if (pFVar3->ArIsLoading == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x1cb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLocMetadataValueBoolean *)(*pcVar1)();
      return pFVar4;
    }
  }
  FBinaryArchiveFormatter::Serialize((local_res10[0].StructuredArchive)->Formatter,&this->Value);
  return this;
}

// AsBool @ 1416e0c30

bool __thiscall FLocMetadataValueBoolean::AsBool(FLocMetadataValueBoolean *this)

{
  return this->Value;
}

// Clone @ 1416e36a0

TSharedRef<FLocMetadataValue,1> * __thiscall
FLocMetadataValueBoolean::Clone
          (FLocMetadataValueBoolean *this,TSharedRef<FLocMetadataValue,1> *__return_storage_ptr__)

{
  bool bVar1;
  TRawPtrProxy<FLocMetadataValueBoolean> local_res10 [3];
  
  local_res10[0].Object = ::operator_new(0x10);
  if (local_res10[0].Object != (FLocMetadataValueBoolean *)0x0) {
    bVar1 = this->Value;
    (local_res10[0].Object)->_padding_ = (longlong)&___7FLocMetadataValueBoolean__6B_;
    (local_res10[0].Object)->Value = bVar1;
  }
  TSharedRef<FLocMetadataValue,1>::TSharedRef<FLocMetadataValue,1><FLocMetadataValueBoolean>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// EqualTo @ 1416ecd80

bool __thiscall
FLocMetadataValueBoolean::EqualTo(FLocMetadataValueBoolean *this,FLocMetadataValue *param_1)

{
  return this->Value == (bool)*(char *)(param_1 + 1);
}

// GetType @ 1416fc6b0

ELocMetadataType __thiscall FLocMetadataValueBoolean::GetType(FLocMetadataValueBoolean *this)

{
  return Boolean;
}

// GetTypeString @ 1416fc710

FString * __thiscall
FLocMetadataValueBoolean::GetTypeString
          (FLocMetadataValueBoolean *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Boolean");
  return __return_storage_ptr__;
}

// LessThan @ 141703c60

bool __thiscall
FLocMetadataValueBoolean::LessThan(FLocMetadataValueBoolean *this,FLocMetadataValue *param_1)

{
  if (this->Value != (bool)*(char *)(param_1 + 1)) {
    return this->Value == false;
  }
  return false;
}

// Serialize @ 141710110

void __cdecl
FLocMetadataValueBoolean::Serialize
          (FLocMetadataValueBoolean *param_1,FStructuredArchiveSlot param_2)

{
  FFastPathLoadBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FArchiveState *pFVar4;
  uint local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if (pFVar4->ArIsLoading != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Slot.GetArchiveState().IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\InternationalizationMetadata.cpp"
                       ,0x1d2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = (FArchiveState *)(local_res10.StructuredArchive)->Formatter->Inner;
  pFVar1 = pFVar4->ActiveFPLB;
  if (pFVar1->StartFastPathLoadBuffer + 4 <= pFVar1->EndFastPathLoadBuffer) {
    pFVar1->StartFastPathLoadBuffer = pFVar1->StartFastPathLoadBuffer + 4;
    return;
  }
  local_res8[0] = 0;
  if (pFVar4->ArIsLoading == 0) {
    local_res8[0] = (uint)(param_1->Value != false);
  }
  (**(code **)(pFVar4->_padding_ + 0x188))(pFVar4,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError(pFVar4);
  }
  return;
}

// ToString @ 141715dc0

FString * __thiscall
FLocMetadataValueBoolean::ToString(FLocMetadataValueBoolean *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (this->Value != false) {
    pwVar1 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

