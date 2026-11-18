// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 2

// Consume @ 148cbf270

void __thiscall
FConnectionCircularBuffer::Consume
          (FConnectionCircularBuffer *this,uchar *param_1,ulong64 param_2,ulong64 *param_3)

{
  ulong64 *puVar1;
  
  Peek(this,param_1,param_2,param_3);
  this->Tail = *param_3 + this->Tail & this->CapacityMask;
  puVar1 = &this->Size;
  *puVar1 = *puVar1 - *param_3;
  if (*puVar1 == 0) {
    this->Head = 0;
    this->Tail = 0;
  }
  return;
}

// Peek @ 148cd2260

void __thiscall
FConnectionCircularBuffer::Peek
          (FConnectionCircularBuffer *this,uchar *param_1,ulong64 param_2,ulong64 *param_3)

{
  ulong64 uVar1;
  uchar *_Src;
  ulonglong _Size;
  ulonglong uVar2;
  size_t _Size_00;
  
  _Size = this->Size;
  if (param_2 < this->Size) {
    _Size = param_2;
  }
  *param_3 = _Size;
  uVar1 = this->Tail;
  uVar2 = this->CapacityMask + 1;
  _Src = this->Allocation + uVar1;
  if (uVar2 < uVar1 + _Size) {
    _Size_00 = uVar2 - uVar1;
    memcpy(param_1,_Src,_Size_00);
    _Src = this->Allocation;
    param_1 = param_1 + _Size_00;
    _Size = _Size - _Size_00;
  }
  memcpy(param_1,_Src,_Size);
  return;
}

