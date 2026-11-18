// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Reset @ 1445f8950

void __thiscall UE::IoStore::FBitWindow::Reset(FBitWindow *this,uint param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = 1;
  if (param_1 != 0) {
    uVar9 = param_1;
  }
  uVar2 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar8 = 1 << ((byte)lVar4 & 0x1f);
  (this->Bits).NumBits = iVar8;
  uVar9 = iVar8 + 0x1fU >> 5;
  if (iVar8 + 0x1fU >> 5 != 0) {
    if ((this->Bits).MaxBits + 0x1fU >> 5 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar9,4);
      (this->Bits).MaxBits = uVar9 << 5;
    }
    FVar3 = (this->Bits).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar3;
    }
    memset((void *)FVar6,0,(ulonglong)uVar9 << 2);
    iVar5 = (this->Bits).NumBits;
    uVar7 = iVar5 >> 0x1f & 0x1f;
    uVar9 = iVar5 + uVar7;
    iVar5 = (uVar9 & 0x1f) - uVar7;
    if (iVar5 != 0) {
      FVar3 = (this->Bits).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<unsigned_int>)this;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar6 = FVar3;
      }
      puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)uVar9 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  this->Counter = 0;
  this->Mask = iVar8 - 1;
  return;
}

