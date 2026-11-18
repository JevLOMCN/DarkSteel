// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// FindFirstSetBit @ 14a8b8e40

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar7;
  
  pTVar2 = this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  pTVar7 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
           (pTVar2->AllocatorInstance).SecondaryData.Data;
  iVar1 = pTVar2->NumBits;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar7 = pTVar2;
  }
  uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_14a8b8ecb;
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
LAB_14a8b8ecb:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// FindFirstSetBit @ 14a8b8ee0

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_>::FindFirstSetBit
          (TConstSetBitIterator<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *this)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar7;
  
  pTVar2 = this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  pTVar7 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
           (pTVar2->AllocatorInstance).SecondaryData.Data;
  iVar1 = pTVar2->NumBits;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar7 = pTVar2;
  }
  uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_14a8b8f6b;
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
LAB_14a8b8f6b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> @ 14a9184e0

TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> * __thiscall
TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::
TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>
          (TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this,
          TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar3;
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
      pTVar3 = (TConstSetBitIterator<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 != this->Array->NumBits) {
    FindFirstSetBit(this);
  }
  return this;
}

