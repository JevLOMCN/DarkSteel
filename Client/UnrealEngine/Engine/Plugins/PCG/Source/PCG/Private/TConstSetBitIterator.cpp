// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FindFirstSetBit @ 149b13a00

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *this)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  FVar2 = (ForElementType<unsigned_int>)this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  iVar1 = *(int *)((longlong)FVar2 + 0x2008);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x2000);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x2000) ==
      (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_149b13a8b;
    uVar6 = *(uint *)((longlong)FVar7 + (longlong)(int)uVar6 * 4);
    this->UnvisitedBitMask = 0xffffffff;
  }
  iVar5 = this->BaseBitIndex;
  *(uint *)((longlong)&this->_padding_ + 4) = -uVar6 & uVar6;
  uVar4 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar5 = iVar5 + -1 + (int)lVar3;
  this->CurrentBitIndex = iVar5;
  if (iVar1 < iVar5) {
LAB_149b13a8b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

