// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FBufferedLine @ 1418ba9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FBufferedLine * __thiscall
FBufferedLine::FBufferedLine
          (FBufferedLine *this,wchar_t *param_1,FName *param_2,Type param_3,double param_4)

{
  FName FVar1;
  wchar_t *pwVar2;
  undefined1 auVar3 [16];
  ulonglong _Size;
  size_t sVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  
  (this->Data).Ptr = (wchar_t *)0x0;
  FVar1 = *param_2;
  (this->Category).LiteralType = None;
  (this->Category).Either.PackedName = (ulonglong)FVar1 & 0xffffffff | 0x8000000000000000;
  (this->Category).Number = FVar1.Number;
  this->Time = param_4;
  this->Verbosity = param_3;
  sVar4 = wcslen(param_1);
  _Size = (longlong)((int)sVar4 + 1) * 2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Size;
  uVar5 = SUB168(ZEXT816(2) * auVar3,0);
  if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  pwVar6 = operator_new__(uVar5);
  if (this != (FBufferedLine *)&stack0xffffffffffffffe8) {
    pwVar2 = (this->Data).Ptr;
    (this->Data).Ptr = pwVar6;
    pwVar6 = (wchar_t *)0x0;
    operator_delete__(pwVar2);
  }
  operator_delete__(pwVar6);
  memcpy((this->Data).Ptr,param_1,_Size);
  return this;
}

