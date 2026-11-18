// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FindFirstSetBit @ 14a9a42c0

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
::FindFirstSetBit(TConstSetBitIterator<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                  *this)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
  *pTVar7;
  
  pTVar2 = this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  pTVar7 = *(TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
             **)&(pTVar2->AllocatorInstance).SecondaryData;
  iVar1 = pTVar2->NumBits;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>_>
                 *)0x0) {
    pTVar7 = pTVar2;
  }
  uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_14a9a434b;
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
LAB_14a9a434b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

