// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FStructBaseChain @ 141f68d10

void __thiscall FStructBaseChain::~FStructBaseChain(FStructBaseChain *this)

{
  operator_delete__(this->StructBaseChainArray);
  return;
}

// ReinitializeBaseChainArray @ 141f97aa0

void __thiscall FStructBaseChain::ReinitializeBaseChainArray(FStructBaseChain *this)

{
  FStructBaseChain **ppFVar1;
  undefined1 auVar2 [16];
  FStructBaseChain *pFVar3;
  ulong64 uVar4;
  FStructBaseChain **ppFVar5;
  FStructBaseChain *pFVar6;
  uint uVar7;
  FStructBaseChain *pFVar8;
  
  operator_delete__(this->StructBaseChainArray);
  pFVar8 = (FStructBaseChain *)0x0;
  uVar7 = 0;
  pFVar3 = this + -3;
  pFVar6 = this + -3;
  if (this == (FStructBaseChain *)0x0) {
    pFVar3 = pFVar8;
    pFVar6 = pFVar8;
  }
  for (; pFVar3 != (FStructBaseChain *)0x0;
      pFVar3 = (FStructBaseChain *)pFVar3[4].StructBaseChainArray) {
    uVar7 = (int)pFVar8 + 1;
    pFVar8 = (FStructBaseChain *)(ulonglong)uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(int)uVar7;
  uVar4 = SUB168(ZEXT816(8) * auVar2,0);
  if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  ppFVar5 = operator_new__(uVar4);
  ppFVar1 = ppFVar5 + (int)uVar7;
  for (; pFVar6 != (FStructBaseChain *)0x0;
      pFVar6 = (FStructBaseChain *)pFVar6[4].StructBaseChainArray) {
    ppFVar1 = ppFVar1 + -1;
    *ppFVar1 = pFVar6 + 3;
  }
  this->StructBaseChainArray = ppFVar5;
  this->NumStructBasesInChainMinusOne = uVar7 - 1;
  return;
}

