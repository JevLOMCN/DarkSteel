// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FindFirstSetBit @ 141495510

void __thiscall
TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
          (TConstSetBitIterator<FDefaultBitArrayAllocator> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x18);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) == (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_14149559b;
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
LAB_14149559b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// TConstSetBitIterator<TFixedAllocator<2>_> @ 14157e330

TConstSetBitIterator<TFixedAllocator<2>_> * __thiscall
TConstSetBitIterator<TFixedAllocator<2>_>::TConstSetBitIterator<TFixedAllocator<2>_>
          (TConstSetBitIterator<TFixedAllocator<2>_> *this,TBitArray<TFixedAllocator<2>_> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  iVar6 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->CurrentBitIndex = 0;
  this->BaseBitIndex = 0;
  this->Array = param_1;
  this->UnvisitedBitMask = 0xffffffff;
  iVar2 = param_1->NumBits;
  if (iVar2 == 0) {
    return this;
  }
  uVar3 = *(uint *)(param_1->AllocatorInstance).InlineData[0].Pad;
  while( true ) {
    if (uVar3 != 0) {
      *(uint *)((longlong)&this->_padding_ + 4) = -uVar3 & uVar3;
      uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = (int)lVar4 + -1 + iVar6;
      this->CurrentBitIndex = iVar6;
      if (iVar2 < iVar6) {
        this->CurrentBitIndex = iVar2;
      }
      return this;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x20;
    *(int *)&this->_padding_ = iVar5;
    this->BaseBitIndex = iVar6;
    if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar5) break;
    uVar3 = *(uint *)(param_1->AllocatorInstance).InlineData[iVar5].Pad;
    this->UnvisitedBitMask = 0xffffffff;
  }
  this->CurrentBitIndex = iVar2;
  return this;
}

// TConstSetBitIterator<TFixedAllocator<2>_> @ 14157e400

TConstSetBitIterator<TFixedAllocator<2>_> * __thiscall
TConstSetBitIterator<TFixedAllocator<2>_>::TConstSetBitIterator<TFixedAllocator<2>_>
          (TConstSetBitIterator<TFixedAllocator<2>_> *this,TBitArray<TFixedAllocator<2>_> *param_1,
          int param_2)

{
  int iVar1;
  TBitArray<TFixedAllocator<2>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TConstSetBitIterator<TFixedAllocator<2>_> *pTVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  *(int *)&this->_padding_ = param_2 >> 5;
  bVar7 = (byte)param_2 & 0x1f;
  this->Array = param_1;
  this->CurrentBitIndex = param_2;
  *(int *)((longlong)&this->_padding_ + 4) = 1 << bVar7;
  this->UnvisitedBitMask = -1 << bVar7;
  this->BaseBitIndex = param_2 & 0xffffffe0;
  if (((param_2 < 0) || (param_1->NumBits < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TConstSetBitIterator<TFixedAllocator<2>_> *)(*pcVar4)();
    return pTVar6;
  }
  pTVar2 = this->Array;
  iVar1 = pTVar2->NumBits;
  if (param_2 != iVar1) {
    uVar9 = (ulonglong)(int)this->_padding_;
    uVar10 = *(uint *)(pTVar2->AllocatorInstance).InlineData[uVar9].Pad & this->UnvisitedBitMask;
    while (uVar10 == 0) {
      this->BaseBitIndex = this->BaseBitIndex + 0x20;
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      *(uint *)&this->_padding_ = uVar10;
      if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar10) {
        this->CurrentBitIndex = iVar1;
        return this;
      }
      uVar10 = *(uint *)(pTVar2->AllocatorInstance).InlineData[(int)uVar10].Pad;
      this->UnvisitedBitMask = 0xffffffff;
    }
    *(uint *)((longlong)&this->_padding_ + 4) = -uVar10 & uVar10;
    uVar9 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar8 = (int)lVar3 + this->BaseBitIndex + -1;
    this->CurrentBitIndex = iVar8;
    if (iVar1 < iVar8) {
      this->CurrentBitIndex = iVar1;
      return this;
    }
  }
  return this;
}

// FindFirstSetBit @ 1415c28a0

void __thiscall
TConstSetBitIterator<TFixedAllocator<2>_>::FindFirstSetBit
          (TConstSetBitIterator<TFixedAllocator<2>_> *this)

{
  int iVar1;
  TBitArray<TFixedAllocator<2>_> *pTVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  pTVar2 = this->Array;
  iVar1 = pTVar2->NumBits;
  uVar5 = (ulonglong)(int)this->_padding_;
  uVar6 = *(uint *)(pTVar2->AllocatorInstance).InlineData[uVar5].Pad & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_1415c2915;
    uVar6 = *(uint *)(pTVar2->AllocatorInstance).InlineData[(int)uVar6].Pad;
    this->UnvisitedBitMask = 0xffffffff;
  }
  *(uint *)((longlong)&this->_padding_ + 4) = -uVar6 & uVar6;
  uVar5 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar4 = (int)lVar3 + this->BaseBitIndex + -1;
  this->CurrentBitIndex = iVar4;
  if (iVar1 < iVar4) {
LAB_1415c2915:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 1415c2930

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x10);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 8);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 8) == (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_1415c29bb;
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
LAB_1415c29bb:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 1415c29d0

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x10);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 8);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 8) == (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_1415c2a5b;
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
LAB_1415c2a5b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// TConstSetBitIterator<FDefaultBitArrayAllocator> @ 14161a460

TConstSetBitIterator<FDefaultBitArrayAllocator> * __thiscall
TConstSetBitIterator<FDefaultBitArrayAllocator>::TConstSetBitIterator<FDefaultBitArrayAllocator>
          (TConstSetBitIterator<FDefaultBitArrayAllocator> *this,
          TBitArray<FDefaultBitArrayAllocator> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar3;
  byte bVar4;
  
  *(int *)&this->_padding_ = param_2 >> 5;
  bVar4 = (byte)param_2 & 0x1f;
  *(int *)((longlong)&this->_padding_ + 4) = 1 << bVar4;
  this->UnvisitedBitMask = -1 << bVar4;
  this->Array = param_1;
  this->CurrentBitIndex = param_2;
  this->BaseBitIndex = param_2 & 0xffffffe0;
  if ((param_2 < 0) || (param_1->NumBits < param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConstSetBitIterator<FDefaultBitArrayAllocator> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 != this->Array->NumBits) {
    FindFirstSetBit(this);
  }
  return this;
}

// FindFirstSetBit @ 141693b90

void __thiscall
TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit
          (TConstSetBitIterator<FDefaultBitArrayLLMAllocator> *this)

{
  int iVar1;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar7;
  
  pTVar2 = this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)&(pTVar2->AllocatorInstance).SecondaryData;
  iVar1 = pTVar2->NumBits;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = pTVar2;
  }
  uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_141693c1b;
    uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + (longlong)(int)uVar6 * 4);
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
LAB_141693c1b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 1416ef020

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x28);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x20);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x20) == (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_1416ef0ab;
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
LAB_1416ef0ab:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 141994420

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x18);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) == (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_1419944ab;
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
LAB_1419944ab:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 141a7f540

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this)

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
  iVar1 = *(int *)((longlong)FVar2 + 0x48);
  FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x40);
  if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x40) == (ForElementType<unsigned_int>)0x0
     ) {
    FVar7 = FVar2;
  }
  uVar6 = *(uint *)((longlong)FVar7 + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_141a7f5cb;
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
LAB_141a7f5cb:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

