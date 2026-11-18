// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FKeyGenInfo @ 147cc58e0

FKeyGenInfo * __thiscall
FGPUSortManager::FKeyGenInfo::FKeyGenInfo(FKeyGenInfo *this,uint param_1,bool param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  this->ElementKeyShift = 0x10;
  this->SortKeyMask = 0xffff;
  *(undefined8 *)&(this->SortKeyParams).field0_0x0 = 0xffff;
  *(undefined8 *)((longlong)&(this->SortKeyParams).field0_0x0 + 8) = 0x8000;
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (1 << ((byte)lVar2 & 0x1f)) - 1;
  this->ElementKeyMask = uVar3;
  if (param_2) {
    uVar5 = 1;
    if (1 < uVar3) {
      uVar5 = uVar3;
    }
    this->ElementKeyMask = uVar5;
    uVar1 = (ulonglong)(uVar5 << 0x10) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar4 = -(int)lVar2 + 0x20;
    (this->SortKeyParams).field0_0x0._s_0.Y = 0x10 - iVar4;
    uVar3 = -(int)lVar2 + 0x30;
    uVar5 = ~(uVar5 << ((byte)uVar3 & 0x1f));
    this->ElementKeyShift = uVar3;
    this->SortKeyMask = uVar5;
    (this->SortKeyParams).field0_0x0._s_0.Z = 0x8000 << ((byte)iVar4 & 0x1f);
    (this->SortKeyParams).field0_0x0._s_0.X = uVar5;
  }
  return this;
}

