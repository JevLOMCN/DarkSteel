// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 25

// BufCore @ 141733d40

BufCore * __thiscall
FIoBuffer::BufCore::BufCore(BufCore *this,uchar *param_1,ulong64 param_2,BufCore *param_3)

{
  this->DataPtr = (uchar *)0x0;
  this->DataSizeLow = 0;
  this->NumRefs = 0;
  (this->OuterCore).Reference = param_3;
  if (param_3 != (BufCore *)0x0) {
    LOCK();
    param_3->NumRefs = param_3->NumRefs + 1;
    UNLOCK();
  }
  this->DataSizeLow = (uint)param_2;
  this->Flags = '\0';
  this->DataSizeHigh = (uchar)(param_2 >> 0x20);
  this->DataPtr = param_1;
  return this;
}

// BufCore @ 141733d80

BufCore * __thiscall
FIoBuffer::BufCore::BufCore(BufCore *this,uchar *param_1,ulong64 param_2,bool param_3)

{
  this->DataSizeLow = (uint)param_2;
  (this->OuterCore).Reference = (BufCore *)0x0;
  this->NumRefs = 0;
  this->DataSizeHigh = (uchar)(param_2 >> 0x20);
  this->Flags = param_3;
  this->DataPtr = param_1;
  return this;
}

// BufCore @ 141733db0

BufCore * __thiscall
FIoBuffer::BufCore::BufCore(BufCore *this,ECloneTag param_1,uchar *param_2,ulong64 param_3)

{
  uchar *_Dst;
  
  this->DataPtr = (uchar *)0x0;
  this->DataSizeLow = 0;
  this->NumRefs = 0;
  (this->OuterCore).Reference = (BufCore *)0x0;
  this->DataSizeHigh = '\0';
  this->Flags = '\0';
  _Dst = FMemory::Malloc(param_3,0);
  this->DataPtr = _Dst;
  this->DataSizeHigh = (uchar)(param_3 >> 0x20);
  this->DataSizeLow = (uint)param_3;
  this->Flags = this->Flags | 1;
  memcpy(_Dst,param_2,param_3);
  return this;
}

// BufCore @ 141733e20

BufCore * __thiscall FIoBuffer::BufCore::BufCore(BufCore *this)

{
  this->DataPtr = (uchar *)0x0;
  this->DataSizeLow = 0;
  this->NumRefs = 0;
  (this->OuterCore).Reference = (BufCore *)0x0;
  this->DataSizeHigh = '\0';
  this->Flags = '\0';
  return this;
}

// BufCore @ 141733e40

BufCore * __thiscall FIoBuffer::BufCore::BufCore(BufCore *this,ulong64 param_1)

{
  uchar *puVar1;
  
  this->DataPtr = (uchar *)0x0;
  this->DataSizeLow = 0;
  this->NumRefs = 0;
  (this->OuterCore).Reference = (BufCore *)0x0;
  this->DataSizeHigh = '\0';
  this->Flags = '\0';
  puVar1 = FMemory::Malloc(param_1,0);
  this->DataSizeLow = (uint)param_1;
  this->DataSizeHigh = (uchar)(param_1 >> 0x20);
  this->DataPtr = puVar1;
  this->Flags = this->Flags | 1;
  return this;
}

// FIoBuffer @ 141734580

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,void *param_1,ulong64 param_2,FIoBuffer *param_3)

{
  BufCore *pBVar1;
  BufCore *pBVar2;
  
  pBVar2 = ::operator_new(0x20);
  if (pBVar2 == (BufCore *)0x0) {
    (this->CorePtr).Reference = (BufCore *)0x0;
  }
  else {
    pBVar1 = (param_3->CorePtr).Reference;
    pBVar2->DataPtr = (uchar *)0x0;
    pBVar2->DataSizeLow = 0;
    pBVar2->NumRefs = 0;
    (pBVar2->OuterCore).Reference = pBVar1;
    if (pBVar1 != (BufCore *)0x0) {
      LOCK();
      pBVar1->NumRefs = pBVar1->NumRefs + 1;
      UNLOCK();
    }
    pBVar2->DataSizeLow = (uint)param_2;
    pBVar2->DataSizeHigh = (uchar)(param_2 >> 0x20);
    pBVar2->Flags = '\0';
    pBVar2->DataPtr = param_1;
    (this->CorePtr).Reference = pBVar2;
    LOCK();
    pBVar2->NumRefs = pBVar2->NumRefs + 1;
    UNLOCK();
  }
  return this;
}

// FIoBuffer @ 141734610

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,TMemoryView<void_const_> *param_1,FIoBuffer *param_2)

{
  ulong64 uVar1;
  uchar *puVar2;
  BufCore *pBVar3;
  BufCore *pBVar4;
  
  uVar1 = param_1->Size;
  puVar2 = param_1->Data;
  pBVar4 = ::operator_new(0x20);
  if (pBVar4 == (BufCore *)0x0) {
    (this->CorePtr).Reference = (BufCore *)0x0;
  }
  else {
    pBVar3 = (param_2->CorePtr).Reference;
    pBVar4->DataPtr = (uchar *)0x0;
    pBVar4->DataSizeLow = 0;
    pBVar4->NumRefs = 0;
    (pBVar4->OuterCore).Reference = pBVar3;
    if (pBVar3 != (BufCore *)0x0) {
      LOCK();
      pBVar3->NumRefs = pBVar3->NumRefs + 1;
      UNLOCK();
    }
    pBVar4->DataSizeLow = (uint)uVar1;
    pBVar4->DataSizeHigh = (uchar)(uVar1 >> 0x20);
    pBVar4->Flags = '\0';
    pBVar4->DataPtr = puVar2;
    (this->CorePtr).Reference = pBVar4;
    LOCK();
    pBVar4->NumRefs = pBVar4->NumRefs + 1;
    UNLOCK();
  }
  return this;
}

// FIoBuffer @ 1417346a0

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,EAssumeOwnershipTag param_1,void *param_2,ulong64 param_3)

{
  BufCore *pBVar1;
  
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 != (BufCore *)0x0) {
    pBVar1->DataSizeLow = (uint)param_3;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = (uchar)(param_3 >> 0x20);
    pBVar1->NumRefs = 0;
    pBVar1->DataPtr = param_2;
    pBVar1->Flags = '\x01';
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// FIoBuffer @ 141734720

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,EAssumeOwnershipTag param_1,TMemoryView<void_const_> *param_2)

{
  ulong64 uVar1;
  uchar *puVar2;
  BufCore *pBVar3;
  
  uVar1 = param_2->Size;
  pBVar3 = ::operator_new(0x20);
  if (pBVar3 != (BufCore *)0x0) {
    puVar2 = param_2->Data;
    pBVar3->DataSizeLow = (uint)uVar1;
    (pBVar3->OuterCore).Reference = (BufCore *)0x0;
    pBVar3->DataSizeHigh = (uchar)(uVar1 >> 0x20);
    pBVar3->NumRefs = 0;
    pBVar3->DataPtr = puVar2;
    pBVar3->Flags = '\x01';
    (this->CorePtr).Reference = pBVar3;
    LOCK();
    pBVar3->NumRefs = pBVar3->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// FIoBuffer @ 1417347a0

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,ECloneTag param_1,void *param_2,ulong64 param_3)

{
  BufCore *pBVar1;
  uchar *_Dst;
  
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 == (BufCore *)0x0) {
    (this->CorePtr).Reference = (BufCore *)0x0;
  }
  else {
    pBVar1->DataPtr = (uchar *)0x0;
    pBVar1->DataSizeLow = 0;
    pBVar1->NumRefs = 0;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = '\0';
    pBVar1->Flags = '\0';
    _Dst = FMemory::Malloc(param_3,0);
    pBVar1->DataPtr = _Dst;
    pBVar1->DataSizeHigh = (uchar)(param_3 >> 0x20);
    pBVar1->DataSizeLow = (uint)param_3;
    pBVar1->Flags = pBVar1->Flags | 1;
    memcpy(_Dst,param_2,param_3);
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
  }
  return this;
}

// FIoBuffer @ 141734840

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,ECloneTag param_1,TMemoryView<void_const_> *param_2)

{
  ulong64 _Size;
  void *_Src;
  BufCore *pBVar1;
  uchar *_Dst;
  
  _Size = param_2->Size;
  _Src = param_2->Data;
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 == (BufCore *)0x0) {
    (this->CorePtr).Reference = (BufCore *)0x0;
  }
  else {
    pBVar1->DataPtr = (uchar *)0x0;
    pBVar1->DataSizeLow = 0;
    pBVar1->NumRefs = 0;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = '\0';
    pBVar1->Flags = '\0';
    _Dst = FMemory::Malloc(_Size,0);
    pBVar1->DataPtr = _Dst;
    pBVar1->DataSizeHigh = (uchar)(_Size >> 0x20);
    pBVar1->DataSizeLow = (uint)_Size;
    pBVar1->Flags = pBVar1->Flags | 1;
    memcpy(_Dst,_Src,_Size);
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
  }
  return this;
}

// FIoBuffer @ 1417348e0

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,EWrapTag param_1,void *param_2,ulong64 param_3)

{
  BufCore *pBVar1;
  
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 != (BufCore *)0x0) {
    pBVar1->DataSizeLow = (uint)param_3;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = (uchar)(param_3 >> 0x20);
    pBVar1->NumRefs = 0;
    pBVar1->DataPtr = param_2;
    pBVar1->Flags = '\0';
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// FIoBuffer @ 141734960

FIoBuffer * __thiscall
FIoBuffer::FIoBuffer(FIoBuffer *this,EWrapTag param_1,TMemoryView<void_const_> *param_2)

{
  ulong64 uVar1;
  uchar *puVar2;
  BufCore *pBVar3;
  
  uVar1 = param_2->Size;
  pBVar3 = ::operator_new(0x20);
  if (pBVar3 != (BufCore *)0x0) {
    puVar2 = param_2->Data;
    pBVar3->DataSizeLow = (uint)uVar1;
    (pBVar3->OuterCore).Reference = (BufCore *)0x0;
    pBVar3->DataSizeHigh = (uchar)(uVar1 >> 0x20);
    pBVar3->NumRefs = 0;
    pBVar3->DataPtr = puVar2;
    pBVar3->Flags = '\0';
    (this->CorePtr).Reference = pBVar3;
    LOCK();
    pBVar3->NumRefs = pBVar3->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// FIoBuffer @ 1417349e0

FIoBuffer * __thiscall FIoBuffer::FIoBuffer(FIoBuffer *this)

{
  BufCore *pBVar1;
  
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 != (BufCore *)0x0) {
    pBVar1->DataPtr = (uchar *)0x0;
    pBVar1->DataSizeLow = 0;
    pBVar1->NumRefs = 0;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = '\0';
    pBVar1->Flags = '\0';
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// FIoBuffer @ 141734a30

FIoBuffer * __thiscall FIoBuffer::FIoBuffer(FIoBuffer *this,ulong64 param_1)

{
  BufCore *pBVar1;
  uchar *puVar2;
  
  pBVar1 = ::operator_new(0x20);
  if (pBVar1 != (BufCore *)0x0) {
    pBVar1->DataPtr = (uchar *)0x0;
    pBVar1->DataSizeLow = 0;
    pBVar1->NumRefs = 0;
    (pBVar1->OuterCore).Reference = (BufCore *)0x0;
    pBVar1->DataSizeHigh = '\0';
    pBVar1->Flags = '\0';
    puVar2 = FMemory::Malloc(param_1,0);
    pBVar1->DataSizeLow = (uint)param_1;
    pBVar1->DataSizeHigh = (uchar)(param_1 >> 0x20);
    pBVar1->DataPtr = puVar2;
    pBVar1->Flags = pBVar1->Flags | 1;
    (this->CorePtr).Reference = pBVar1;
    LOCK();
    pBVar1->NumRefs = pBVar1->NumRefs + 1;
    UNLOCK();
    return this;
  }
  (this->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// ~BufCore @ 141739180

void __thiscall FIoBuffer::BufCore::~BufCore(BufCore *this)

{
  BufCore *this_00;
  
  if ((this->Flags & 1) != 0) {
    FMemory::Free(this->DataPtr);
  }
  this_00 = (this->OuterCore).Reference;
  if (this_00 != (BufCore *)0x0) {
    Release(this_00);
    return;
  }
  return;
}

// CheckRefCount @ 14174b740

void __thiscall FIoBuffer::BufCore::CheckRefCount(BufCore *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->NumRefs == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                       ,0x38,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// MakeOwned @ 14176cf20

void __thiscall FIoBuffer::BufCore::MakeOwned(BufCore *this)

{
  uchar uVar1;
  uint uVar2;
  uchar *_Dst;
  ulonglong _Size;
  
  if ((this->Flags & 1) == 0) {
    uVar2 = this->DataSizeLow;
    uVar1 = this->DataSizeHigh;
    _Size = (ulonglong)CONCAT14(uVar1,uVar2);
    _Dst = FMemory::Malloc(_Size,0);
    memcpy(_Dst,this->DataPtr,_Size);
    this->Flags = this->Flags | 1;
    this->DataPtr = _Dst;
    this->DataSizeLow = uVar2;
    this->DataSizeHigh = uVar1;
  }
  return;
}

// MakeOwned @ 14176cfa0

void __thiscall FIoBuffer::MakeOwned(FIoBuffer *this)

{
  uchar uVar1;
  uint uVar2;
  BufCore *pBVar3;
  uchar *_Dst;
  ulonglong _Size;
  
  pBVar3 = (this->CorePtr).Reference;
  if ((pBVar3->Flags & 1) == 0) {
    uVar2 = pBVar3->DataSizeLow;
    uVar1 = pBVar3->DataSizeHigh;
    _Size = (ulonglong)CONCAT14(uVar1,uVar2);
    _Dst = FMemory::Malloc(_Size,0);
    memcpy(_Dst,pBVar3->DataPtr,_Size);
    pBVar3->Flags = pBVar3->Flags | 1;
    pBVar3->DataPtr = _Dst;
    pBVar3->DataSizeLow = uVar2;
    pBVar3->DataSizeHigh = uVar1;
  }
  return;
}

// Release @ 141776170

uint __thiscall FIoBuffer::BufCore::Release(BufCore *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->NumRefs == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoBuffer.cpp"
                       ,0x38,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  LOCK();
  piVar1 = &this->NumRefs;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 - 1U == 0) && (this != (BufCore *)0x0)) {
    if ((this->Flags & 1) != 0) {
      FMemory::Free(this->DataPtr);
    }
    this_00 = (this->OuterCore).Reference;
    if (this_00 != (BufCore *)0x0) {
      Release(this_00);
    }
    ::operator_delete(this,0x20);
  }
  return iVar2 - 1U;
}

// Release @ 141776200

TIoStatusOr<unsigned_char_*> * __thiscall
FIoBuffer::Release(FIoBuffer *this,TIoStatusOr<unsigned_char_*> *__return_storage_ptr__)

{
  BufCore *pBVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FIoStatus *this_00;
  TIoStatusOr<unsigned_char_*> *pTVar5;
  TStringView<wchar_t> local_28;
  FIoStatus local_18;
  
  pBVar1 = (this->CorePtr).Reference;
  if ((pBVar1->Flags & 1) != 0) {
    puVar2 = pBVar1->DataPtr;
    pBVar1->DataPtr = (uchar *)0x0;
    pBVar1->DataSizeLow = 0;
    pBVar1->DataSizeHigh = '\0';
    pBVar1->Flags = '\0';
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(uchar **)(__return_storage_ptr__->Value).Pad = puVar2;
    return __return_storage_ptr__;
  }
  local_28.Size = 0x3d;
  local_28.DataPtr = L"Cannot call release on a FIoBuffer unless it owns it\'s memory";
  this_00 = FIoStatus::FIoStatus(&local_18,InvalidParameter,&local_28);
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (this_00->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<unsigned_char_*> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
  FIoStatus::~FIoStatus(this_00);
  return __return_storage_ptr__;
}

// ReleaseMemory @ 141776340

TIoStatusOr<unsigned_char_*> * __thiscall
FIoBuffer::BufCore::ReleaseMemory
          (BufCore *this,TIoStatusOr<unsigned_char_*> *__return_storage_ptr__)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  FIoStatus *this_00;
  TIoStatusOr<unsigned_char_*> *pTVar4;
  TStringView<wchar_t> local_28;
  FIoStatus local_18;
  
  if ((this->Flags & 1) != 0) {
    puVar1 = this->DataPtr;
    this->DataPtr = (uchar *)0x0;
    this->DataSizeLow = 0;
    this->DataSizeHigh = '\0';
    this->Flags = '\0';
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(uchar **)(__return_storage_ptr__->Value).Pad = puVar1;
    return __return_storage_ptr__;
  }
  local_28.Size = 0x3d;
  local_28.DataPtr = L"Cannot call release on a FIoBuffer unless it owns it\'s memory";
  this_00 = FIoStatus::FIoStatus(&local_18,InvalidParameter,&local_28);
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (this_00->ErrorCode == Ok) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TIoStatusOr<unsigned_char_*> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
  FIoStatus::~FIoStatus(this_00);
  return __return_storage_ptr__;
}

// SetDataAndSize @ 14177d0c0

void __thiscall FIoBuffer::BufCore::SetDataAndSize(BufCore *this,uchar *param_1,ulong64 param_2)

{
  this->DataSizeLow = (uint)param_2;
  this->DataSizeHigh = (uchar)(param_2 >> 0x20);
  this->DataPtr = param_1;
  return;
}

// SetSize @ 14177db40

void __thiscall FIoBuffer::BufCore::SetSize(BufCore *this,ulong64 param_1)

{
  this->DataSizeLow = (uint)param_1;
  this->DataSizeHigh = (uchar)(param_1 >> 0x20);
  return;
}

// ~FIoBuffer @ 1417a6e40

void __thiscall FIoBuffer::~FIoBuffer(FIoBuffer *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  this_00 = (this->CorePtr).Reference;
  if (this_00 != (BufCore *)0x0) {
    BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

