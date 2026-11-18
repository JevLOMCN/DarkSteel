// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// TBlockData3<bool,8> @ 14c945d40

TBlockData3<bool,8> * __thiscall
UE::Geometry::TBlockData3<bool,8>::TBlockData3<bool,8>
          (TBlockData3<bool,8> *this,bool *param_1,int param_2)

{
  TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this_00;
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  
  this->Id = param_2;
  (this->BitArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this_00 = &this->BitArray;
  (this->BitArray).NumBits = 0;
  (this->BitArray).MaxBits = 0x4000;
  bVar2 = *param_1;
  (this->BitArray).NumBits = 0x200;
  if (((this->BitArray).MaxBits + 0x1fU & 0xffffffe0) < 0x200) {
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this_00->AllocatorInstance,0,0x10,4);
    (this->BitArray).MaxBits = 0x200;
  }
  FVar5 = (this->BitArray).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)this_00;
  }
  iVar3 = (-(uint)(bVar2 != false) & 0xff) * 0x1010101;
  *(int *)FVar5 = iVar3;
  *(int *)((longlong)FVar5 + 4) = iVar3;
  *(int *)((longlong)FVar5 + 8) = iVar3;
  *(int *)((longlong)FVar5 + 0xc) = iVar3;
  *(int *)((longlong)FVar5 + 0x10) = iVar3;
  *(int *)((longlong)FVar5 + 0x14) = iVar3;
  *(int *)((longlong)FVar5 + 0x18) = iVar3;
  *(int *)((longlong)FVar5 + 0x1c) = iVar3;
  *(int *)((longlong)FVar5 + 0x20) = iVar3;
  *(int *)((longlong)FVar5 + 0x24) = iVar3;
  *(int *)((longlong)FVar5 + 0x28) = iVar3;
  *(int *)((longlong)FVar5 + 0x2c) = iVar3;
  *(int *)((longlong)FVar5 + 0x30) = iVar3;
  *(int *)((longlong)FVar5 + 0x34) = iVar3;
  *(int *)((longlong)FVar5 + 0x38) = iVar3;
  *(int *)((longlong)FVar5 + 0x3c) = iVar3;
  iVar3 = (this->BitArray).NumBits;
  uVar6 = iVar3 >> 0x1f & 0x1f;
  uVar4 = iVar3 + uVar6;
  iVar3 = (uVar4 & 0x1f) - uVar6;
  if (iVar3 != 0) {
    FVar5 = (this->BitArray).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar5 + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return this;
}

