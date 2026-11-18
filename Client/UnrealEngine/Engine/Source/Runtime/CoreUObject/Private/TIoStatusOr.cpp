// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// ConsumeValueOrDie @ 141f2b620

uchar * __thiscall
TIoStatusOr<unsigned_char_*>::ConsumeValueOrDie(TIoStatusOr<unsigned_char_*> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  return *(uchar **)(this->Value).Pad;
}

// ConsumeValueOrDie @ 141f2b660

FIoMappedRegion * __thiscall
TIoStatusOr<FIoMappedRegion>::ConsumeValueOrDie
          (TIoStatusOr<FIoMappedRegion> *this,FIoMappedRegion *__return_storage_ptr__)

{
  IMappedFileRegion *pIVar1;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  pIVar1 = *(IMappedFileRegion **)((this->Value).Pad + 8);
  __return_storage_ptr__->MappedFileHandle = *(IMappedFileHandle **)(this->Value).Pad;
  __return_storage_ptr__->MappedFileRegion = pIVar1;
  return __return_storage_ptr__;
}

// ConsumeValueOrDie @ 141f2b6b0

FIoBuffer __thiscall TIoStatusOr<FIoBuffer>::ConsumeValueOrDie(TIoStatusOr<FIoBuffer> *this)

{
  TRefCountPtr<FIoBuffer::BufCore> in_RDX;
  
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (in_RDX.Reference)->DataPtr = (uchar *)0x0;
  (in_RDX.Reference)->DataPtr = *(uchar **)(this->Value).Pad;
  *(undefined8 *)(this->Value).Pad = 0;
  return (FIoBuffer)(TRefCountPtr<FIoBuffer::BufCore>)in_RDX.Reference;
}

// IsOk @ 141f3a4c0

bool __thiscall TIoStatusOr<unsigned_char_*>::IsOk(TIoStatusOr<unsigned_char_*> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 141f3a4d0

bool __thiscall TIoStatusOr<FIoBuffer>::IsOk(TIoStatusOr<FIoBuffer> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Status @ 141f4dd10

FIoStatus * __thiscall TIoStatusOr<FIoBuffer>::Status(TIoStatusOr<FIoBuffer> *this)

{
  return &this->StatusValue;
}

// ValueOrDie @ 141f503c0

uchar ** __thiscall TIoStatusOr<unsigned_char_*>::ValueOrDie(TIoStatusOr<unsigned_char_*> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (uchar **)&this->Value;
  }
  return (uchar **)&this->Value;
}

// ValueOrDie @ 141f503f0

FIoBuffer * __thiscall TIoStatusOr<FIoBuffer>::ValueOrDie(TIoStatusOr<FIoBuffer> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (FIoBuffer *)&this->Value;
  }
  return (FIoBuffer *)&this->Value;
}

// ValueOrDie @ 141f50420

ulong64 * __thiscall TIoStatusOr<unsigned___int64>::ValueOrDie(TIoStatusOr<unsigned___int64> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (ulong64 *)&this->Value;
  }
  return (ulong64 *)&this->Value;
}

// TIoStatusOr<FIoMappedRegion> @ 14212ae60

TIoStatusOr<FIoMappedRegion> * __thiscall
TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>
          (TIoStatusOr<FIoMappedRegion> *this,FIoMappedRegion *param_1)

{
  IMappedFileRegion *pIVar1;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  pIVar1 = param_1->MappedFileRegion;
  *(IMappedFileHandle **)(this->Value).Pad = param_1->MappedFileHandle;
  *(IMappedFileRegion **)((this->Value).Pad + 8) = pIVar1;
  return this;
}

