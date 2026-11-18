// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// GetErrorDetailsTypeId @ 1415c6190

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::Core::FArgumentError>::GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::Core::FArgumentError> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<Core::FArgumentError>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c62b0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::Core::FArgumentError>::GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::Core::FArgumentError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x23;
  __return_storage_ptr__->DataPtr = "TErrorDetails<Core::FArgumentError>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c6390

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::Core::FArgumentError>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::Core::FArgumentError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x13;
  __return_storage_ptr__->DataPtr = "Core_FArgumentError";
  return __return_storage_ptr__;
}

// SerializeToCb @ 1415f1ba0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::Core::FArgumentError>::SerializeToCb
          (TErrorDetails<UE::UnifiedError::Core::FArgumentError> *this,FCbWriter *param_1,
          FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"Core::FArgumentError";
  local_18.Size = 0x14;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"Core",L"ArgumentError",
                      L"Invalid argument \'{ArgumentName}\', reason \'{ArgumentError}\'");
  SerializeLogFormat(param_1,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  local_28.DataPtr = (uchar *)(this->ErrorDetail).ArgumentName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).ArgumentName.Data.ArrayNum;
  local_18.Size = 0xc;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_18.DataPtr = L"ArgumentName";
  local_28.Size = iVar3;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(this->ErrorDetail).ArgumentError.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).ArgumentError.Data.ArrayNum;
  local_18.Size = 0xd;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = L"ArgumentError";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 1415f3d30

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::Core::FArgumentError>::ShouldInclude
          (TErrorDetails<UE::UnifiedError::Core::FArgumentError> *this,EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

