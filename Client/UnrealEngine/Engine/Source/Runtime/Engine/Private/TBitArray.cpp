// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Assign<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 14726a8a0

void __thiscall
TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
Assign<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,
          TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar4) || (0x400 < this->MaxBits)) {
    uVar3 = 0x400;
    if (0x400 < (int)uVar4) {
      uVar3 = uVar4;
    }
    this->MaxBits = uVar3;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Realloc @ 1472705b0

void __thiscall
TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  ForElementType<unsigned_int> *this_00;
  uint *puVar1;
  ForElementType<unsigned_int> _Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 + 0x1fU >> 5;
  uVar4 = this->MaxBits + 0x1fU >> 5;
  this_00 = &(this->AllocatorInstance).SecondaryData;
  _Src = *this_00;
  if (uVar4 < 0x21) {
    if (_Src == (ForElementType<unsigned_int>)0x0) goto LAB_14727063b;
    memmove(this,(void *)_Src,(ulonglong)uVar3 << 2);
    uVar4 = 0;
    uVar3 = 0;
  }
  else if (_Src == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,uVar4,4);
    memmove((void *)*this_00,this,(ulonglong)uVar3 << 2);
    goto LAB_14727063b;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this_00,uVar3,uVar4,4);
LAB_14727063b:
  uVar4 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar4;
  iVar2 = (uVar3 & 0x1f) - uVar4;
  if (iVar2 != 0) {
    if (*this_00 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)*this_00;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
  }
  return;
}

// SetRange @ 147729180

void __thiscall
TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2,bool param_3)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 != 0) {
    uVar7 = param_1 >> 0x1f & 0x1f;
    iVar5 = param_1 + uVar7;
    uVar11 = iVar5 >> 5;
    iVar8 = param_1 + param_2 + 0x1f;
    uVar10 = -1 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x1f);
    iVar8 = ((int)((iVar8 >> 0x1f & 0x1fU) + iVar8) >> 5) - uVar11;
    FVar2 = (this->AllocatorInstance).SecondaryData;
    uVar7 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar2;
    }
    uVar1 = *(uint *)((longlong)FVar6 + (ulonglong)uVar11 * 4);
    puVar9 = (uint *)((longlong)FVar6 + (ulonglong)uVar11 * 4);
    if (param_3) {
      if (iVar8 == 1) {
        *puVar9 = uVar7 & uVar10 | uVar1;
      }
      else {
        *puVar9 = uVar1 | uVar10;
        puVar9 = puVar9 + 1;
        uVar10 = iVar8 - 2;
        if (uVar10 != 0) {
          memset(puVar9,-1,(ulonglong)uVar10 * 4);
          puVar9 = puVar9 + uVar10;
        }
        *puVar9 = *puVar9 | uVar7;
      }
    }
    else if (iVar8 == 1) {
      *puVar9 = ~(uVar7 & uVar10) & uVar1;
    }
    else {
      *puVar9 = ~uVar10 & uVar1;
      puVar9 = puVar9 + 1;
      uVar10 = iVar8 - 2;
      if (uVar10 != 0) {
        memset(puVar9,0,(ulonglong)uVar10 * 4);
        puVar9 = puVar9 + uVar10;
      }
      *puVar9 = *puVar9 & ~uVar7;
    }
    if ((this->MaxBits < this->NumBits) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits <= MaxBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x238,
                           L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits >= 0 && MaxBits >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar10;
    iVar8 = (uVar7 & 0x1f) - uVar10;
    if (iVar8 != 0) {
      FVar2 = (this->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
      }
      if (((*(uint *)((longlong)this + (longlong)((int)uVar7 >> 5) * 4) & -1 << ((byte)iVar8 & 0x1f)
           ) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(LastWord & SlackMask) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x243,
                             L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14786c980

void __thiscall
TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = this->NumBits;
  this->NumBits = param_1;
  if (this->MaxBits < param_1) {
    uVar6 = param_1 + 0x1fU >> 5;
    iVar7 = 0x20;
    if (0x20 < uVar6) {
      uVar4 = FMemory::QuantizeSize((ulonglong)uVar6 << 2,0);
      iVar7 = (int)(uVar4 >> 2);
      if (iVar7 < (int)uVar6) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->AllocatorInstance,iVar3 + 0x1fU >> 5,iVar7,4);
    this->MaxBits = iVar7 << 5;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar6 = this->NumBits + uVar5;
  iVar3 = (uVar6 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar6 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

