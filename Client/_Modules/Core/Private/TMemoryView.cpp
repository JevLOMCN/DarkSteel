// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// EqualBytes<void_const_> @ 141a4dec0

bool __thiscall
TMemoryView<void_const_>::EqualBytes<void_const_>
          (TMemoryView<void_const_> *this,TMemoryView<void_const_> *param_1)

{
  int iVar1;
  
  if (this->Size != param_1->Size) {
    return false;
  }
  if ((this->Data != param_1->Data) &&
     (iVar1 = memcmp(this->Data,param_1->Data,this->Size), iVar1 != 0)) {
    return false;
  }
  return true;
}

// EqualBytes<void> @ 141a4df00

bool __thiscall
TMemoryView<void_const_>::EqualBytes<void>
          (TMemoryView<void_const_> *this,TMemoryView<void> *param_1)

{
  int iVar1;
  
  if (this->Size != param_1->Size) {
    return false;
  }
  if ((this->Data != param_1->Data) &&
     (iVar1 = memcmp(this->Data,param_1->Data,this->Size), iVar1 != 0)) {
    return false;
  }
  return true;
}

// CompareBytes<void_const_> @ 141c64300

int __thiscall
TMemoryView<void>::CompareBytes<void_const_>
          (TMemoryView<void> *this,TMemoryView<void_const_> *param_1)

{
  int iVar1;
  ulonglong _Size;
  
  if (this->Data != param_1->Data) {
    _Size = param_1->Size;
    if (this->Size < param_1->Size) {
      _Size = this->Size;
    }
    iVar1 = memcmp(this->Data,param_1->Data,_Size);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = 0;
  if ((this->Size != param_1->Size) && (iVar1 = 1, this->Size < param_1->Size)) {
    iVar1 = -1;
  }
  return iVar1;
}

// CompareBytes<void> @ 141c64360

int __thiscall
TMemoryView<void_const_>::CompareBytes<void>
          (TMemoryView<void_const_> *this,TMemoryView<void> *param_1)

{
  int iVar1;
  ulonglong _Size;
  
  if (this->Data != param_1->Data) {
    _Size = param_1->Size;
    if (this->Size < param_1->Size) {
      _Size = this->Size;
    }
    iVar1 = memcmp(this->Data,param_1->Data,_Size);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = 0;
  if ((this->Size != param_1->Size) && (iVar1 = 1, this->Size < param_1->Size)) {
    iVar1 = -1;
  }
  return iVar1;
}

// CompareBytes<void> @ 141c643c0

int __thiscall
TMemoryView<void>::CompareBytes<void>(TMemoryView<void> *this,TMemoryView<void> *param_1)

{
  int iVar1;
  ulonglong _Size;
  
  if (this->Data != param_1->Data) {
    _Size = param_1->Size;
    if (this->Size < param_1->Size) {
      _Size = this->Size;
    }
    iVar1 = memcmp(this->Data,param_1->Data,_Size);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  iVar1 = 0;
  if ((this->Size != param_1->Size) && (iVar1 = 1, this->Size < param_1->Size)) {
    iVar1 = -1;
  }
  return iVar1;
}

// Contains<void_const_> @ 141cde2e0

bool __thiscall
TMemoryView<void_const_>::Contains<void_const_>
          (TMemoryView<void_const_> *this,TMemoryView<void_const_> *param_1)

{
  if ((this->Data <= param_1->Data) &&
     (param_1->Size + (longlong)param_1->Data <= (longlong)this->Data + this->Size)) {
    return true;
  }
  return false;
}

