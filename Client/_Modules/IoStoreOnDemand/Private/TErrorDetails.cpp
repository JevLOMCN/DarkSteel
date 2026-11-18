// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 25

// GetErrorDetailsTypeId @ 1445d4cb0

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
GetErrorDetailsTypeId(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FCasErrorContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 1445d4ce0

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FChunkHashMismatchErrorContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 1445d4d10

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FChunkMissingErrorContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 1445d4d40

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FInstallCacheErrorContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 1445d4d70

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<IoStoreOnDemand::FVerificationErrorContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1445d4da0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x30;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FCasErrorContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1445d4dc0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x3e;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FChunkHashMismatchErrorContext>"
  ;
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1445d4de0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x39;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FChunkMissingErrorContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1445d4e00

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x39;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FInstallCacheErrorContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1445d4e20

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x39;
  __return_storage_ptr__->DataPtr = "TErrorDetails<IoStoreOnDemand::FVerificationErrorContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1445d4e40

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x20;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FCasErrorContext";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1445d4e60

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x2e;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FChunkHashMismatchErrorContext";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1445d4e80

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x29;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FChunkMissingErrorContext";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1445d4ea0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x29;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FInstallCacheErrorContext";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1445d4ec0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x29;
  __return_storage_ptr__->DataPtr = "IoStoreOnDemand_FVerificationErrorContext";
  return __return_storage_ptr__;
}

// SerializeToCb @ 1445fef70

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::SerializeToCb
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,
          FCbWriter *param_1,FError *param_2)

{
  ::SerializeForLog(param_1,&this->ErrorDetail);
  return;
}

// SerializeToCb @ 1445fef90

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
SerializeToCb(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this
             ,FCbWriter *param_1,FError *param_2)

{
  ::SerializeForLog(param_1,&this->ErrorDetail);
  return;
}

// SerializeToCb @ 1445fefb0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
SerializeToCb(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
             FCbWriter *param_1,FError *param_2)

{
  ::SerializeForLog(param_1,&this->ErrorDetail);
  return;
}

// SerializeToCb @ 1445fefd0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
SerializeToCb(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
             FCbWriter *param_1,FError *param_2)

{
  ::SerializeForLog(param_1,&this->ErrorDetail);
  return;
}

// SerializeToCb @ 1445feff0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
SerializeToCb(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
             FCbWriter *param_1,FError *param_2)

{
  uint uVar1;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"IoStoreOnDemand::FVerificationErrorContext";
  local_18.Size = 0x2a;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  local_18.Size = 7;
  local_28.DataPtr =
       "(CorruptChunkCount: {CorruptChunkCount}, MissingChunkCount: {MissingChunkCount}, ReadErrorCount: {ReadErrorCount})"
  ;
  local_28.Size = 0x72;
  local_18.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  uVar1 = (this->ErrorDetail).CorruptChunkCount;
  local_18.Size = 0x11;
  local_18.DataPtr = L"CorruptChunkCount";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  uVar1 = (this->ErrorDetail).MissingChunkCount;
  local_18.Size = 0x11;
  local_18.DataPtr = L"MissingChunkCount";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  uVar1 = (this->ErrorDetail).ReadErrorCount;
  local_18.Size = 0xe;
  local_18.DataPtr = L"ReadErrorCount";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,uVar1);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 144600160

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::ShouldInclude
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,
          EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 144600170

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
ShouldInclude(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this
             ,EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 144600180

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
ShouldInclude(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 144600190

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
ShouldInclude(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 1446001a0

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
ShouldInclude(TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

