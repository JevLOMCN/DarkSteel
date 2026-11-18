// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 18

// TIoStatusOr<FIoContainerHeader> @ 142a50950

TIoStatusOr<FIoContainerHeader> * __thiscall
TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
          (TIoStatusOr<FIoContainerHeader> *this,FIoContainerHeader *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  FIoContainerHeader::FIoContainerHeader((FIoContainerHeader *)&this->Value,param_1);
  return this;
}

// TIoStatusOr<FIoContainerHeader> @ 142a509a0

TIoStatusOr<FIoContainerHeader> * __thiscall
TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
          (TIoStatusOr<FIoContainerHeader> *this,TIoStatusOr<FIoContainerHeader> *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  if ((this->StatusValue).ErrorCode == Ok) {
    FIoContainerHeader::FIoContainerHeader
              ((FIoContainerHeader *)&this->Value,(FIoContainerHeader *)&param_1->Value);
    FIoStatus::operator=(&param_1->StatusValue,Unknown);
  }
  return this;
}

// TIoStatusOr<FIoContainerHeader> @ 142a50a00

TIoStatusOr<FIoContainerHeader> * __thiscall
TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
          (TIoStatusOr<FIoContainerHeader> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FIoContainerHeader> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> @ 142a50a70

TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> *
__thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this,TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>
                 *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(FContainer **)(this->Value).Pad = param_1->Ptr;
  param_1->Ptr = (FContainer *)0x0;
  return this;
}

// TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> @ 142a50ac0

TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> *
__thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> *pTVar3
  ;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<FIoContainerHeader> @ 142a54e00

void __thiscall
TIoStatusOr<FIoContainerHeader>::~TIoStatusOr<FIoContainerHeader>
          (TIoStatusOr<FIoContainerHeader> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    FIoContainerHeader::~FIoContainerHeader((FIoContainerHeader *)&this->Value);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_> @ 142a54e40

void __thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
~TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    TDefaultDelete<UE::IoStore::FContainer>::operator()
              ((TDefaultDelete<UE::IoStore::FContainer> *)&this->Value,
               *(FContainer **)(this->Value).Pad);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ConsumeValueOrDie @ 142a64f90

FIoContainerHeader * __thiscall
TIoStatusOr<FIoContainerHeader>::ConsumeValueOrDie
          (TIoStatusOr<FIoContainerHeader> *this,FIoContainerHeader *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  FIoContainerHeader::FIoContainerHeader(__return_storage_ptr__,(FIoContainerHeader *)&this->Value);
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 142a64fe0

FIoFileHandle __thiscall
TIoStatusOr<UE::FIoFileHandle>::ConsumeValueOrDie(TIoStatusOr<UE::FIoFileHandle> *this)

{
  undefined8 *in_RDX;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  *in_RDX = *(undefined8 *)(this->Value).Pad;
  return (FIoFileHandle)(ulong64)in_RDX;
}

// ConsumeValueOrDie @ 142a65030

TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_> __thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::
ConsumeValueOrDie(TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
                  *this)

{
  FContainer *in_RDX;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (in_RDX->TocStorage).Data._padding_ = *(longlong *)(this->Value).Pad;
  *(undefined8 *)(this->Value).Pad = 0;
  return (TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>)in_RDX;
}

// IsOk @ 142a7f4e0

bool __thiscall TIoStatusOr<FIoContainerHeader>::IsOk(TIoStatusOr<FIoContainerHeader> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 142a7f4f0

bool __thiscall TIoStatusOr<UE::FIoFileHandle>::IsOk(TIoStatusOr<UE::FIoFileHandle> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 142a7f500

bool __thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::IsOk
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Reset @ 142a99ba0

void __thiscall TIoStatusOr<FIoContainerHeader>::Reset(TIoStatusOr<FIoContainerHeader> *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    FIoContainerHeader::~FIoContainerHeader((FIoContainerHeader *)&this->Value);
  }
  return;
}

// Reset @ 142a99be0

void __thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::Reset
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this)

{
  EIoErrorCode EVar1;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if (EVar1 == Ok) {
    TDefaultDelete<UE::IoStore::FContainer>::operator()
              ((TDefaultDelete<UE::IoStore::FContainer> *)&this->Value,
               *(FContainer **)(this->Value).Pad);
  }
  return;
}

// Status @ 142aa1ae0

FIoStatus * __thiscall
TIoStatusOr<FIoContainerHeader>::Status(TIoStatusOr<FIoContainerHeader> *this)

{
  return &this->StatusValue;
}

// Status @ 142aa1af0

FIoStatus * __thiscall TIoStatusOr<UE::FIoFileHandle>::Status(TIoStatusOr<UE::FIoFileHandle> *this)

{
  return &this->StatusValue;
}

// Status @ 142aa1b00

FIoStatus * __thiscall
TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>::Status
          (TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
           *this)

{
  return &this->StatusValue;
}

