// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ResizeAllocation @ 148421960

void __thiscall
TNonRelocatableInlineAllocator<64>::ForElementType<unsigned_char>::ResizeAllocation
          (ForElementType<unsigned_char> *this,int param_1,int param_2,ulong64 param_3)

{
  TTypeCompatibleBytes<unsigned_char> *_Src;
  uchar *puVar1;
  
  _Src = this->InlineData;
  puVar1 = this->Data;
  if ((uint)param_2 < 0x41) {
    if ((TTypeCompatibleBytes<unsigned_char> *)puVar1 != _Src) {
      memmove(_Src,puVar1,(longlong)param_1);
      FMemory::Free(this->Data);
      this->Data = _Src->Pad;
      return;
    }
  }
  else {
    if ((TTypeCompatibleBytes<unsigned_char> *)puVar1 != _Src) {
      puVar1 = FMemory::Realloc(puVar1,(longlong)param_2 * param_3,0);
      this->Data = puVar1;
      return;
    }
    puVar1 = FMemory::Realloc((void *)0x0,(longlong)param_2 * param_3,0);
    this->Data = puVar1;
    memmove(puVar1,_Src,(longlong)param_1);
  }
  return;
}

// ResizeAllocation @ 1485d6fd0

void __thiscall
TNonRelocatableInlineAllocator<64>::ForElementType<UE::Shader::FValueComponent>::ResizeAllocation
          (ForElementType<UE::Shader::FValueComponent> *this,int param_1,int param_2,ulong64 param_3
          )

{
  TTypeCompatibleBytes<UE::Shader::FValueComponent> *_Src;
  FValueComponent *pFVar1;
  
  _Src = this->InlineData;
  pFVar1 = this->Data;
  if ((uint)param_2 < 0x41) {
    if (pFVar1 != (FValueComponent *)_Src) {
      memmove(_Src,pFVar1,(longlong)param_1 << 3);
      FMemory::Free(this->Data);
      this->Data = (FValueComponent *)_Src;
      return;
    }
  }
  else {
    if (pFVar1 != (FValueComponent *)_Src) {
      pFVar1 = FMemory::Realloc(pFVar1,(longlong)param_2 * param_3,0);
      this->Data = pFVar1;
      return;
    }
    pFVar1 = FMemory::Realloc((void *)0x0,(longlong)param_2 * param_3,0);
    this->Data = pFVar1;
    memmove(pFVar1,_Src,(longlong)param_1 << 3);
  }
  return;
}

// ResizeAllocation @ 1485d7120

void __thiscall
TNonRelocatableInlineAllocator<8>::ForElementType<UE::Shader::FPreshaderType>::ResizeAllocation
          (ForElementType<UE::Shader::FPreshaderType> *this,int param_1,int param_2,ulong64 param_3)

{
  TTypeCompatibleBytes<UE::Shader::FPreshaderType> *_Src;
  FPreshaderType *pFVar1;
  
  _Src = this->InlineData;
  pFVar1 = this->Data;
  if ((uint)param_2 < 9) {
    if (pFVar1 != (FPreshaderType *)_Src) {
      memmove(_Src,pFVar1,(longlong)param_1 << 5);
      FMemory::Free(this->Data);
      this->Data = (FPreshaderType *)_Src;
      return;
    }
  }
  else {
    if (pFVar1 != (FPreshaderType *)_Src) {
      pFVar1 = FMemory::Realloc(pFVar1,(longlong)param_2 * param_3,0);
      this->Data = pFVar1;
      return;
    }
    pFVar1 = FMemory::Realloc((void *)0x0,(longlong)param_2 * param_3,0);
    this->Data = pFVar1;
    memmove(pFVar1,_Src,(longlong)param_1 << 5);
  }
  return;
}

