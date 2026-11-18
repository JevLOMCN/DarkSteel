// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// CountSetBits @ 149afb210

int __thiscall
TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>::CountSetBits
          (TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == -1) {
    param_2 = this->NumBits;
  }
  FVar2 = (this->AllocatorInstance).SecondaryData;
  iVar10 = 0;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  uVar5 = param_1 >> 0x1f & 0x1f;
  iVar3 = param_1 + uVar5;
  iVar9 = iVar3 >> 5;
  uVar5 = -1 << (((byte)iVar3 & 0x1f) - (char)uVar5 & 0x1f);
  iVar3 = (int)(param_2 + 0x1fU + ((int)(param_2 + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  uVar8 = param_2 & 0x8000001f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
  }
  iVar1 = iVar3 + -1;
  uVar6 = 0xffffffff >> ((byte)(0x20 - uVar8) & 0x1f);
  if (0x1f < (int)(0x20 - uVar8)) {
    uVar6 = 0xffffffff;
  }
  uVar8 = uVar6 & uVar5;
  uVar7 = uVar8;
  if (iVar9 != iVar1) {
    uVar7 = uVar6;
  }
  if (iVar9 < iVar3) {
    if (iVar9 != iVar1) {
      uVar8 = uVar5;
    }
    do {
      if (uVar8 == 0xffffffff) {
        uVar8 = *(uint *)((longlong)this + (longlong)iVar9 * 4);
      }
      else {
        uVar8 = uVar8 & *(uint *)((longlong)this + (longlong)iVar9 * 4);
      }
      iVar9 = iVar9 + 1;
      uVar4 = (ulonglong)uVar8 - ((ulonglong)(uVar8 >> 1) & 0x5555555555555555);
      uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
      iVar10 = iVar10 + (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
      uVar8 = 0xffffffff;
      if (iVar9 == iVar1) {
        uVar8 = uVar7;
      }
    } while (iVar9 < iVar3);
  }
  return iVar10;
}

// SetNumUninitialized @ 149b275b0

void __thiscall
TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  ForElementType<unsigned_int> *this_00;
  uint *puVar1;
  int iVar2;
  ulong64 uVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = this->NumBits;
  this->NumBits = param_1;
  if (param_1 <= this->MaxBits) goto LAB_149b276b5;
  uVar5 = iVar2 + 0x1fU >> 5;
  uVar6 = param_1 + 0x1fU >> 5;
  if (uVar6 < 0x801) {
    FVar4 = (this->AllocatorInstance).SecondaryData;
    uVar6 = 0x800;
LAB_149b2763f:
    uVar7 = uVar6;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      memmove(this,(void *)FVar4,(ulonglong)uVar5 << 2);
      uVar7 = 0;
      uVar5 = 0;
LAB_149b2768e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar5,uVar7,4);
      uVar7 = uVar6;
    }
  }
  else {
    uVar3 = FMemory::QuantizeSize((ulonglong)uVar6 << 2,0);
    uVar7 = (uint)(uVar3 >> 2);
    this_00 = &(this->AllocatorInstance).SecondaryData;
    if ((int)uVar7 < (int)uVar6) {
      uVar7 = 0x7fffffff;
    }
    FVar4 = *this_00;
    uVar6 = uVar7;
    if (uVar7 < 0x801) goto LAB_149b2763f;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) goto LAB_149b2768e;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,uVar7,4);
    memmove((void *)*this_00,this,(ulonglong)uVar5 << 2);
  }
  this->MaxBits = uVar7 << 5;
LAB_149b276b5:
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar5 = this->NumBits + uVar6;
  iVar2 = (uVar5 & 0x1f) - uVar6;
  if (iVar2 != 0) {
    FVar4 = (this->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>_> *)FVar4;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
  }
  return;
}

