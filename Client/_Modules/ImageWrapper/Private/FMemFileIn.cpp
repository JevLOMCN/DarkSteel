// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 5

// ~FMemFileIn @ 14266a2a0

void __thiscall FMemFileIn::~FMemFileIn(FMemFileIn *this)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  this->_padding_ = (longlong)Imf_3_3::IStream::vftable;
  uVar1 = this->_padding_;
  if (0xf < uVar1) {
    pvVar2 = (void *)this->_padding_;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar4);
  }
  this->_padding_ = 0;
  this->_padding_ = 0xf;
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// read @ 1426924c0

bool __thiscall FMemFileIn::read(FMemFileIn *this,char *param_1,int param_2)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong _Size;
  exception local_28;
  
  uVar1 = this->Pos;
  _Size = (ulonglong)param_2;
  if ((uVar1 < 0x8000000000000000) &&
     (uVar3 = _Size + uVar1, -1 < (longlong)((uVar3 ^ uVar1) & (uVar3 ^ _Size)))) {
    bVar2 = true;
  }
  else {
    uVar3 = 0;
    bVar2 = false;
  }
  if ((((-1 < param_2) && (bVar2)) && (this->Size < 0x8000000000000000)) &&
     ((longlong)uVar3 <= (longlong)this->Size)) {
    memcpy(param_1,this->Data + uVar1,_Size);
    this->Pos = this->Pos + _Size;
    return this->Pos != this->Size;
  }
  std::exception::exception(&local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&_TI1_AVexception_std__);
}

// seekg @ 142692570

void __thiscall FMemFileIn::seekg(FMemFileIn *this,ulong64 param_1)

{
  this->Pos = param_1;
  return;
}

// size @ 142692590

long64 __thiscall FMemFileIn::size(FMemFileIn *this)

{
  return this->Size;
}

// tellg @ 1426925a0

ulong64 __thiscall FMemFileIn::tellg(FMemFileIn *this)

{
  return this->Pos;
}

