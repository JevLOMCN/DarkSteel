// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// AdjustSize @ 144328080

void __thiscall
UE::Net::FNetSerializerAlignedStorage::AdjustSize
          (FNetSerializerAlignedStorage *this,FNetSerializationContext *param_1,uint param_2,
          uint param_3)

{
  ulonglong _Size;
  uchar *_Dst;
  
  _Size = (ulonglong)param_2;
  if (param_2 == 0) {
    if (this->Data != (uchar *)0x0) {
      FMemory::Free(this->Data);
    }
    this->Data = (uchar *)0x0;
    this->StorageNum = 0;
    this->StorageMaxCapacity = 0;
    this->StorageAlignment = 0;
    return;
  }
  if ((param_2 <= this->StorageMaxCapacity) &&
     (((ulonglong)this->Data & (ulonglong)param_3 - 1) == 0)) {
    if (param_2 < this->StorageNum) {
      memset(this->Data + _Size,0,(ulonglong)(this->StorageNum - param_2));
    }
    this->StorageNum = param_2;
    this->StorageAlignment = param_3;
    return;
  }
  _Dst = FMemory::Malloc(_Size,param_3);
  memset(_Dst,0,_Size);
  if (this->StorageNum != 0) {
    memcpy(_Dst,this->Data,(ulonglong)this->StorageNum);
  }
  FMemory::Free(this->Data);
  this->Data = _Dst;
  this->StorageMaxCapacity = param_2;
  this->StorageNum = param_2;
  this->StorageAlignment = param_3;
  return;
}

// Clone @ 144328480

void __thiscall
UE::Net::FNetSerializerAlignedStorage::Clone
          (FNetSerializerAlignedStorage *this,FNetSerializationContext *param_1,
          FNetSerializerAlignedStorage *param_2)

{
  uchar *_Dst;
  
  if (param_2->StorageNum != 0) {
    _Dst = FMemory::Malloc((ulonglong)param_2->StorageNum,param_2->StorageAlignment);
    this->Data = _Dst;
    this->StorageNum = param_2->StorageNum;
    this->StorageMaxCapacity = param_2->StorageNum;
    this->StorageAlignment = param_2->StorageAlignment;
    memcpy(_Dst,param_2->Data,(ulonglong)param_2->StorageNum);
    return;
  }
  this->Data = (uchar *)0x0;
  this->StorageNum = 0;
  this->StorageMaxCapacity = 0;
  this->StorageAlignment = 0;
  return;
}

// Free @ 14432fa70

void __thiscall
UE::Net::FNetSerializerAlignedStorage::Free
          (FNetSerializerAlignedStorage *this,FNetSerializationContext *param_1)

{
  if (this->Data != (uchar *)0x0) {
    FMemory::Free(this->Data);
  }
  this->Data = (uchar *)0x0;
  this->StorageNum = 0;
  this->StorageMaxCapacity = 0;
  this->StorageAlignment = 0;
  return;
}

