// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AppendSerializedData @ 1488b9920

void __thiscall
UE::Transaction::FSerializedTaggedData::AppendSerializedData
          (FSerializedTaggedData *this,FSerializedTaggedData *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1->DataOffset;
  if ((lVar4 != -1) && (lVar1 = param_1->DataSize, lVar1 != 0)) {
    lVar2 = this->DataOffset;
    if (lVar2 == -1) {
      this->DataOffset = lVar4;
      this->DataSize = lVar1;
      return;
    }
    lVar3 = lVar4;
    if (lVar2 < lVar4) {
      lVar3 = lVar2;
    }
    this->DataOffset = lVar3;
    lVar1 = (lVar4 - lVar3) + lVar1;
    lVar4 = this->DataSize;
    if (this->DataSize < lVar1) {
      lVar4 = lVar1;
    }
    this->DataSize = lVar4;
  }
  return;
}

// AppendSerializedData @ 1488b9970

void __thiscall
UE::Transaction::FSerializedTaggedData::AppendSerializedData
          (FSerializedTaggedData *this,long64 param_1,long64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  long64 lVar3;
  
  lVar2 = this->DataOffset;
  if (lVar2 == -1) {
    this->DataSize = param_2;
    this->DataOffset = param_1;
    return;
  }
  lVar3 = param_1;
  if (lVar2 < param_1) {
    lVar3 = lVar2;
  }
  lVar1 = (param_1 - lVar3) + param_2;
  lVar2 = this->DataSize;
  if (this->DataSize < lVar1) {
    lVar2 = lVar1;
  }
  this->DataSize = lVar2;
  this->DataOffset = lVar3;
  return;
}

// FromOffsetAndSize @ 1488c0420

FSerializedTaggedData * __cdecl
UE::Transaction::FSerializedTaggedData::FromOffsetAndSize
          (FSerializedTaggedData *__return_storage_ptr__,long64 param_1,long64 param_2)

{
  __return_storage_ptr__->DataOffset = param_1;
  __return_storage_ptr__->DataSize = param_2;
  return __return_storage_ptr__;
}

// FromStartAndEnd @ 1488c0440

FSerializedTaggedData * __cdecl
UE::Transaction::FSerializedTaggedData::FromStartAndEnd
          (FSerializedTaggedData *__return_storage_ptr__,long64 param_1,long64 param_2)

{
  __return_storage_ptr__->DataOffset = param_1;
  __return_storage_ptr__->DataSize = param_2 - param_1;
  return __return_storage_ptr__;
}

// HasSerializedData @ 1488c7c00

bool __thiscall
UE::Transaction::FSerializedTaggedData::HasSerializedData(FSerializedTaggedData *this)

{
  if ((this->DataOffset != -1) && (this->DataSize != 0)) {
    return true;
  }
  return false;
}

