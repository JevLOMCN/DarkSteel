// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// GetErrorDetailsTypeId @ 1415c61c0

ulong64 __thiscall
UE::UnifiedError::FAppendFormatStringDetails::GetErrorDetailsTypeId
          (FAppendFormatStringDetails *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "UnifiedError::FAppendFormatStringDetails";
  cVar2 = 'U';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c62d0

TStringView<char> * __thiscall
UE::UnifiedError::FAppendFormatStringDetails::GetErrorDetailsTypeName
          (FAppendFormatStringDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x28;
  __return_storage_ptr__->DataPtr = "UnifiedError::FAppendFormatStringDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c63b0

TStringView<char> * __thiscall
UE::UnifiedError::FAppendFormatStringDetails::GetErrorDetailsTypeNameForLog
          (FAppendFormatStringDetails *this,TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr =
       `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FAppendFormatStringDetails::StaticGetErrorDetailsTypeNameForLog(void)'
       ::__l2::Replaced;
  sVar1 = strlen(`public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FAppendFormatStringDetails::StaticGetErrorDetailsTypeNameForLog(void)'
                 ::__l2::Replaced);
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetErrorFormatString @ 1415c64c0

FText * __thiscall
UE::UnifiedError::FAppendFormatStringDetails::GetErrorFormatString
          (FAppendFormatStringDetails *this,FText *__return_storage_ptr__,FError *param_1)

{
  undefined8 *puVar1;
  FText *pFVar2;
  longlong *local_res8;
  ITextData *local_48;
  uint local_40;
  FText local_38;
  FText local_28;
  FText local_18;
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x28))(this,&local_res8);
  (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,&local_48,param_1);
  if (local_res8 != (longlong *)0x0) {
    (**(code **)(*local_res8 + 0x10))();
  }
  local_38.TextData.Reference = (this->AppendFormatString).TextData.Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,&local_res8);
  }
  local_38.Flags = (this->AppendFormatString).Flags;
  local_28.TextData.Reference = local_48;
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 8))(local_48,&local_res8);
  }
  local_28.Flags = local_40;
  pFVar2 = FText::FromString(&local_18," ");
  FText::Join<FText,FText>(__return_storage_ptr__,pFVar2,&local_28,&local_38);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48 + 0x10))();
  }
  return __return_storage_ptr__;
}

// SerializeToCb @ 1415f1d30

void __thiscall
UE::UnifiedError::FAppendFormatStringDetails::SerializeToCb
          (FAppendFormatStringDetails *this,FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FString *pFVar2;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 0x12;
  local_28.DataPtr = "AppendFormatString";
  pFVar2 = FText::ToString(&this->AppendFormatString);
  local_18.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 1415f3d40

bool __thiscall
UE::UnifiedError::FAppendFormatStringDetails::ShouldInclude
          (FAppendFormatStringDetails *this,EDetailFilter param_1)

{
  return (bool)(param_1 & IncludeInSerialize);
}

