// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 5

// GetErrorDetailsTypeId @ 14458c820

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
GetErrorDetailsTypeId(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FHttpError>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 14458c850

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x2a;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FHttpError>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 14458c870

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x1a;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FHttpError";
  return __return_storage_ptr__;
}

// SerializeToCb @ 1445932c0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::SerializeToCb
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,FCbWriter *param_1,
          FError *param_2)

{
  uint uVar1;
  FText *pFVar2;
  TStringView<char8_t> local_28;
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = "IoStoreOnDemand::FHttpError";
  local_18.Size = 0x1b;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"IoStoreOnDemand",L"HttpError",
                      L"HTTP error ({StatusCode})");
  SerializeLogFormat(param_1,pFVar2);
  if ((longlong *)local_18.DataPtr != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  uVar1 = (this->ErrorDetail).StatusCode;
  local_18.Size = 10;
  local_18.DataPtr = "StatusCode";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 144593480

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::ShouldInclude
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError> *this,EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

