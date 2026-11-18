// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FStaticErrorDetails @ 141584620

FStaticErrorDetails * __thiscall
UE::UnifiedError::FStaticErrorDetails::FStaticErrorDetails
          (FStaticErrorDetails *this,TStringView<char> *param_1,TStringView<char> *param_2,
          FText *param_3)

{
  ITextData *pIVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  
  pcVar5 = param_1->DataPtr;
  iVar3 = param_1->Size;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  this->_padding_ = (longlong)&___7FStaticErrorDetails_UnifiedError_UE__6B_;
  (this->ErrorName).DataPtr = pcVar5;
  (this->ErrorName).Size = iVar3;
  *(undefined4 *)&(this->ErrorName).field_0xc = uVar2;
  uVar2 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar3 = param_2->Size;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  *(undefined4 *)&(this->ModuleName).DataPtr = *(undefined4 *)&param_2->DataPtr;
  *(undefined4 *)((longlong)&(this->ModuleName).DataPtr + 4) = uVar2;
  (this->ModuleName).Size = iVar3;
  *(undefined4 *)&(this->ModuleName).field_0xc = uVar4;
  (this->ErrorFormatString).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_3->TextData).Reference;
  (this->ErrorFormatString).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ErrorFormatString).Flags = param_3->Flags;
  return this;
}

// ~FStaticErrorDetails @ 14158a100

void __thiscall
UE::UnifiedError::FStaticErrorDetails::~FStaticErrorDetails(FStaticErrorDetails *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->ErrorFormatString).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  return;
}

// AddRef @ 1415a8840

FReturnedRefCountValue __thiscall
UE::UnifiedError::FStaticErrorDetails::AddRef(FStaticErrorDetails *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 10;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetErrorCodeString @ 1415c6100

FAnsiString * __thiscall
UE::UnifiedError::FStaticErrorDetails::GetErrorCodeString
          (FStaticErrorDetails *this,FAnsiString *__return_storage_ptr__,FError *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnsiString *pFVar2;
  FAnsiString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = FAnsiString::ConstructFromPtrSize
                     (&local_18,(this->ErrorName).DataPtr,
                      (int)*(undefined8 *)&(this->ErrorName).Size);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeId @ 1415c6280

ulong64 __thiscall
UE::UnifiedError::FStaticErrorDetails::GetErrorDetailsTypeId(FStaticErrorDetails *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "UnifiedError::FStaticErrorDetails";
  cVar2 = 'U';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c6370

TStringView<char> * __thiscall
UE::UnifiedError::FStaticErrorDetails::GetErrorDetailsTypeName
          (FStaticErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x21;
  __return_storage_ptr__->DataPtr = "UnifiedError::FStaticErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c6490

TStringView<char> * __thiscall
UE::UnifiedError::FStaticErrorDetails::GetErrorDetailsTypeNameForLog
          (FStaticErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr =
       `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FStaticErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
       ::__l2::Replaced;
  sVar1 = strlen(`public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FStaticErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
                 ::__l2::Replaced);
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetErrorFormatString @ 1415c6680

FText * __thiscall
UE::UnifiedError::FStaticErrorDetails::GetErrorFormatString
          (FStaticErrorDetails *this,FText *__return_storage_ptr__,FError *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->ErrorFormatString).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->ErrorFormatString).Flags;
  return __return_storage_ptr__;
}

// GetModuleIdString @ 1415c7930

FAnsiString * __thiscall
UE::UnifiedError::FStaticErrorDetails::GetModuleIdString
          (FStaticErrorDetails *this,FAnsiString *__return_storage_ptr__,FError *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnsiString *pFVar2;
  FAnsiString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = FAnsiString::ConstructFromPtrSize
                     (&local_18,(this->ModuleName).DataPtr,
                      (int)*(undefined8 *)&(this->ModuleName).Size);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRefCount @ 1415c7c80

uint __thiscall UE::UnifiedError::FStaticErrorDetails::GetRefCount(FStaticErrorDetails *this)

{
  return 10;
}

// Release @ 1415e0d50

uint __thiscall UE::UnifiedError::FStaticErrorDetails::Release(FStaticErrorDetails *this)

{
  return 10;
}

// SerializeToCb @ 1415f2040

void __thiscall
UE::UnifiedError::FStaticErrorDetails::SerializeToCb
          (FStaticErrorDetails *this,FCbWriter *param_1,FError *param_2)

{
  int iVar1;
  TStringView<char8_t> local_28;
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 7;
  local_18.DataPtr = "({ModuleIdString}.{ErrorCodeString})";
  local_18.Size = 0x24;
  local_28.DataPtr = "$format";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,&local_18);
  local_18.Size = 5;
  local_28.DataPtr = "FStaticErrorDetails";
  local_28.Size = 0x13;
  local_18.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_18);
  local_18.DataPtr = local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(this->ErrorName).DataPtr;
  local_18.Size = 0xf;
  local_28.Size = (int)*(undefined8 *)&(this->ErrorName).Size;
  local_18.DataPtr = "ErrorCodeString";
  FCbWriter::SetName(param_1,&local_18);
  local_18.DataPtr = local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(this->ModuleName).DataPtr;
  local_18.Size = 0xe;
  local_28.Size = (int)*(undefined8 *)&(this->ModuleName).Size;
  local_18.DataPtr = "ModuleIdString";
  FCbWriter::SetName(param_1,&local_18);
  local_18.DataPtr = local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  iVar1 = param_2->ErrorCode;
  local_18.Size = 9;
  local_18.DataPtr = "ErrorCode";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,iVar1);
  iVar1 = param_2->ModuleId;
  local_18.Size = 8;
  local_18.DataPtr = "ModuleId";
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,iVar1);
  FCbWriter::EndObject(param_1);
  return;
}

// ShouldInclude @ 1415f3d60

bool __thiscall
UE::UnifiedError::FStaticErrorDetails::ShouldInclude
          (FStaticErrorDetails *this,EDetailFilter param_1)

{
  return (param_1 & Default) != None;
}

