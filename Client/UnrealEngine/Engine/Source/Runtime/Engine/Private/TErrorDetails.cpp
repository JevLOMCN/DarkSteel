// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// GetErrorDetailsTypeId @ 147bdfed0

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FAsyncLoadUnknownError>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 147bdff00

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FPackageLoadCanceled>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 147bdff30

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed>::
GetErrorDetailsTypeId(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FPackageLoadFailed>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 147bdff60

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid>::
GetErrorDetailsTypeId(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FPackageNameInvalid>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 147bdff90

ulong64 __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete>::
GetErrorDetailsTypeId(TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete> *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FSyncLoadIncomplete>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 147bdffc0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x38;
  __return_storage_ptr__->DataPtr = "TErrorDetails<StreamableManager::FAsyncLoadUnknownError>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 147bdffe0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x36;
  __return_storage_ptr__->DataPtr = "TErrorDetails<StreamableManager::FPackageLoadCanceled>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 147be0000

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x34;
  __return_storage_ptr__->DataPtr = "TErrorDetails<StreamableManager::FPackageLoadFailed>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 147be0020

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x35;
  __return_storage_ptr__->DataPtr = "TErrorDetails<StreamableManager::FPackageNameInvalid>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 147be0040

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x35;
  __return_storage_ptr__->DataPtr = "TErrorDetails<StreamableManager::FSyncLoadIncomplete>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 147be0060

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x28;
  __return_storage_ptr__->DataPtr = "StreamableManager_FAsyncLoadUnknownError";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 147be0080

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x26;
  __return_storage_ptr__->DataPtr = "StreamableManager_FPackageLoadCanceled";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 147be00a0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x24;
  __return_storage_ptr__->DataPtr = "StreamableManager_FPackageLoadFailed";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 147be00c0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x25;
  __return_storage_ptr__->DataPtr = "StreamableManager_FPackageNameInvalid";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 147be00e0

TStringView<char> * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete> *this,
          TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x25;
  __return_storage_ptr__->DataPtr = "StreamableManager_FSyncLoadIncomplete";
  return __return_storage_ptr__;
}

// SerializeToCb @ 147c00a50

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError> *this,
             FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  TStringView<char8_t> local_28;
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = "StreamableManager::FAsyncLoadUnknownError";
  local_18.Size = 0x29;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"StreamableManager",L"AsyncLoadUnknownError",
                      L"Unknown async loading error {AsyncLoadingErrorId}.");
  SerializeLogFormat(param_1,pFVar2);
  if ((longlong *)local_18.DataPtr != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  iVar1 = (this->ErrorDetail).AsyncLoadingErrorId;
  local_18.Size = 0x13;
  local_18.DataPtr = "AsyncLoadingErrorId";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,iVar1);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeToCb @ 147c00b50

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled> *this,
             FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"StreamableManager::FPackageLoadCanceled";
  local_18.Size = 0x27;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"StreamableManager",L"PackageLoadCancelled",
                      L"Async load canceled {PackageName}");
  SerializeLogFormat(param_1,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  local_28.DataPtr = (uchar *)(this->ErrorDetail).PackageName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).PackageName.Data.ArrayNum;
  local_18.Size = 0xb;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_28.Size = iVar3;
  local_18.DataPtr = L"PackageName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeToCb @ 147c00c70

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed> *this,
             FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"StreamableManager::FPackageLoadFailed";
  local_18.Size = 0x25;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"StreamableManager",L"PackageLoadError",
                      L"Failed to load package {PackageName}");
  SerializeLogFormat(param_1,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  local_28.DataPtr = (uchar *)(this->ErrorDetail).PackageName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).PackageName.Data.ArrayNum;
  local_18.Size = 0xb;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_28.Size = iVar3;
  local_18.DataPtr = L"PackageName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeToCb @ 147c00d90

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid> *this,
             FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"StreamableManager::FPackageNameInvalid";
  local_18.Size = 0x26;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"StreamableManager",L"PackageNameInvalid",
                      L"Found invalid package name {InvalidPackageName}");
  SerializeLogFormat(param_1,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  local_28.DataPtr = (uchar *)(this->ErrorDetail).InvalidPackageName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).InvalidPackageName.Data.ArrayNum;
  local_18.Size = 0x12;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_28.Size = iVar3;
  local_18.DataPtr = L"InvalidPackageName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeToCb @ 147c00eb0

void __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete> *this,
             FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"StreamableManager::FSyncLoadIncomplete";
  local_18.Size = 0x26;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_18,L"StreamableManager",L"SyncLoadIncomplete",
                      L"Sync load did not complete correctly for {DebugName}.");
  SerializeLogFormat(param_1,pFVar2);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_18.DataPtr + 0x10))();
  }
  local_28.DataPtr = (uchar *)(this->ErrorDetail).DebugName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).DebugName.Data.ArrayNum;
  local_18.Size = 9;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  local_28.Size = iVar3;
  local_18.DataPtr = L"DebugName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 147c01f80

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FAsyncLoadUnknownError> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 147c01f90

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadCanceled> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 147c01fa0

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageLoadFailed> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 147c01fb0

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FPackageNameInvalid> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 147c01fc0

bool __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FSyncLoadIncomplete> *this,
             EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// GetErrorDetailsTypeId @ 1487a0420

ulong64 __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
           *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FStreamableManagerAdditionalContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeId @ 1487a0450

ulong64 __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
GetErrorDetailsTypeId
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "TErrorDetails<StreamableManager::FStreamableManagerRequestContext>";
  cVar2 = 'T';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1487a0480

TStringView<char> * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
           *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x45;
  __return_storage_ptr__->DataPtr =
       "TErrorDetails<StreamableManager::FStreamableManagerAdditionalContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeName @ 1487a04a0

TStringView<char> * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
GetErrorDetailsTypeName
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x42;
  __return_storage_ptr__->DataPtr =
       "TErrorDetails<StreamableManager::FStreamableManagerRequestContext>";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1487a04c0

TStringView<char> * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
           *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x35;
  __return_storage_ptr__->DataPtr = "StreamableManager_FStreamableManagerAdditionalContext";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1487a04e0

TStringView<char> * __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::
GetErrorDetailsTypeNameForLog
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x32;
  __return_storage_ptr__->DataPtr = "StreamableManager_FStreamableManagerRequestContext";
  return __return_storage_ptr__;
}

// SerializeToCb @ 1487c1340

void __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
SerializeToCb(TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
              *this,FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"StreamableManager::FStreamableManagerAdditionalContext";
  local_18.Size = 0x36;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  local_18.Size = 7;
  local_28.DataPtr = "(RequstedPackage: {RequestedPackageName}, MissingObject: {MissingObject})";
  local_28.Size = 0x49;
  local_18.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(this->ErrorDetail).RequestedPackageName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).RequestedPackageName.Data.ArrayNum;
  local_18.Size = 0x14;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = L"RequestedPackageName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(this->ErrorDetail).MissingObject.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).MissingObject.Data.ArrayNum;
  local_18.Size = 0xd;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = L"MissingObject";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeToCb @ 1487c14f0

void __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::SerializeToCb
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  FSoftObjectPath *pFVar2;
  FSoftObjectPath *pFVar3;
  undefined1 local_res8 [8];
  TStringView<char8_t> local_38;
  TStringView<wchar_t> local_28;
  
  FCbWriter::BeginObject(param_1);
  local_38.Size = 5;
  local_28.DataPtr = L"StreamableManager::FStreamableManagerRequestContext";
  local_28.Size = 0x33;
  local_38.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  local_28.Size = 7;
  local_38.DataPtr = "(RequestDebugName: {DebugName}, RequestedAssets: {RequestedAssets})";
  local_38.Size = 0x43;
  local_28.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  local_38.DataPtr = (uchar *)(this->ErrorDetail).DebugName.Data.AllocatorInstance.Data;
  iVar1 = (this->ErrorDetail).DebugName.Data.ArrayNum;
  local_28.Size = 9;
  local_38.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.Size = 0;
  }
  local_28.DataPtr = L"DebugName";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  local_28.Size = 0xf;
  local_28.DataPtr = L"RequestedAssets";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  FCbWriter::BeginArray(param_1);
  iVar1 = (this->ErrorDetail).RequestedAssets.ArrayNum;
  pFVar2 = (FSoftObjectPath *)(this->ErrorDetail).RequestedAssets.AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->ErrorDetail).RequestedAssets.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    ::SerializeForLog(param_1,pFVar2);
    pFVar2 = pFVar2 + 1;
  }
  FCbWriter::EndArray(param_1);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 1487c3d30

bool __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>::
ShouldInclude(TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
              *this,EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

// ShouldInclude @ 1487c3d40

bool __thiscall
UE::UnifiedError::
TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>::ShouldInclude
          (TErrorDetails<UE::UnifiedError::StreamableManager::FStreamableManagerRequestContext>
           *this,EDetailFilter param_1)

{
  return (this->DetailFilterMask & param_1) != None;
}

