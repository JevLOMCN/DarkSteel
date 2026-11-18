// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 15

// TIoStatusOr<FIoBuffer><FIoBuffer_&> @ 148cac6a0

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer><FIoBuffer_&>
          (TIoStatusOr<FIoBuffer> *this,FIoBuffer *param_1)

{
  BufCore *pBVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(undefined8 *)(this->Value).Pad = 0;
  pBVar1 = (param_1->CorePtr).Reference;
  *(BufCore **)(this->Value).Pad = pBVar1;
  if (pBVar1 != (BufCore *)0x0) {
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
  }
  return this;
}

// TIoStatusOr<FStorageServerConnection::Workspaces> @ 148cb2850

TIoStatusOr<FStorageServerConnection::Workspaces> * __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::TIoStatusOr<FStorageServerConnection::Workspaces>
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this,Workspaces *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad = (param_1->Workspaces).AllocatorInstance.Data;
  (param_1->Workspaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->Workspaces).ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->Workspaces).ArrayMax;
  (param_1->Workspaces).ArrayNum = 0;
  (param_1->Workspaces).ArrayMax = 0;
  return this;
}

// TIoStatusOr<FStorageServerConnection::Workspaces> @ 148cb28b0

TIoStatusOr<FStorageServerConnection::Workspaces> * __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::TIoStatusOr<FStorageServerConnection::Workspaces>
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FStorageServerConnection::Workspaces> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FStorageServerConnection::Workspaces> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<FString> @ 148cb2920

TIoStatusOr<FString> * __thiscall
TIoStatusOr<FString>::TIoStatusOr<FString>(TIoStatusOr<FString> *this,FString *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->Data).ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return this;
}

// TIoStatusOr<FString> @ 148cb2980

TIoStatusOr<FString> * __thiscall
TIoStatusOr<FString>::TIoStatusOr<FString>(TIoStatusOr<FString> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FString> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<FStorageServerConnection::Workspaces> @ 148cb53f0

void __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::
~TIoStatusOr<FStorageServerConnection::Workspaces>
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    DestructItems<FStorageServerConnection::Workspaces::Workspace,int>
              (*(Workspace **)(this->Value).Pad,*(int *)((this->Value).Pad + 8));
    pvVar2 = *(void **)(this->Value).Pad;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<FString> @ 148cb5440

void __thiscall TIoStatusOr<FString>::~TIoStatusOr<FString>(TIoStatusOr<FString> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// operator= @ 148cb6cf0

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::operator=(TIoStatusOr<FIoBuffer> *this,TIoStatusOr<FIoBuffer> *param_1)

{
  if (param_1 != this) {
    Reset(this);
    if ((param_1->StatusValue).ErrorCode == Ok) {
      *(undefined8 *)(this->Value).Pad = 0;
      *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
      *(undefined8 *)(param_1->Value).Pad = 0;
      FIoStatus::operator=(&param_1->StatusValue,Unknown);
      FIoStatus::operator=(&this->StatusValue,Ok);
      return this;
    }
    FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  }
  return this;
}

// IsOk @ 148cccde0

bool __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::IsOk
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 148cccdf0

bool __thiscall TIoStatusOr<FString>::IsOk(TIoStatusOr<FString> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Reset @ 148cdaf30

void __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::Reset
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    DestructItems<FStorageServerConnection::Workspaces::Workspace,int>
              (*(Workspace **)(this->Value).Pad,*(int *)((this->Value).Pad + 8));
    pvVar2 = *(void **)(this->Value).Pad;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  return;
}

// Reset @ 148cdaf80

void __thiscall TIoStatusOr<FString>::Reset(TIoStatusOr<FString> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  return;
}

// Status @ 148ce0850

FIoStatus * __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::Status
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this)

{
  return &this->StatusValue;
}

// ValueOrDie @ 148ce3640

Workspaces * __thiscall
TIoStatusOr<FStorageServerConnection::Workspaces>::ValueOrDie
          (TIoStatusOr<FStorageServerConnection::Workspaces> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (Workspaces *)&this->Value;
  }
  return (Workspaces *)&this->Value;
}

// ValueOrDie @ 148ce3670

FString * __thiscall TIoStatusOr<FString>::ValueOrDie(TIoStatusOr<FString> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (FString *)&this->Value;
  }
  return (FString *)&this->Value;
}

