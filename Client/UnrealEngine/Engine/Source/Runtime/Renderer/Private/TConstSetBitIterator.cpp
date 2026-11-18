// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FindFirstSetBit @ 144812ef0

void __thiscall
TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::FindFirstSetBit(TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *this)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  
  pTVar2 = this->Array;
  uVar4 = (ulonglong)(int)this->_padding_;
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(pTVar2->AllocatorInstance).SecondaryData.Data;
  iVar1 = pTVar2->NumBits;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar7 = pTVar2;
  }
  uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + uVar4 * 4) & this->UnvisitedBitMask;
  while (uVar6 == 0) {
    this->BaseBitIndex = this->BaseBitIndex + 0x20;
    uVar6 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar6;
    *(uint *)&this->_padding_ = uVar6;
    if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 < (int)uVar6) goto LAB_144812f7b;
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
LAB_144812f7b:
    this->CurrentBitIndex = iVar1;
  }
  return;
}

// TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 14551d1d0

TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
* __thiscall
TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::
TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
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
      pTVar3 = (TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 != this->Array->NumBits) {
    FindFirstSetBit(this);
  }
  return this;
}

// TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 1457c0ac0

TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __thiscall
TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TConstSetBitIterator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *this,TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *param_1
          )

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  iVar7 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->CurrentBitIndex = 0;
  this->BaseBitIndex = 0;
  this->Array = param_1;
  this->UnvisitedBitMask = 0xffffffff;
  iVar2 = param_1->NumBits;
  if (iVar2 == 0) {
    return this;
  }
  puVar4 = (param_1->AllocatorInstance).Data;
  uVar3 = *puVar4;
  while( true ) {
    if (uVar3 != 0) {
      *(uint *)((longlong)&this->_padding_ + 4) = -uVar3 & uVar3;
      uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = (int)lVar5 + -1 + iVar7;
      this->CurrentBitIndex = iVar7;
      if (iVar2 < iVar7) {
        this->CurrentBitIndex = iVar2;
      }
      return this;
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0x20;
    *(int *)&this->_padding_ = iVar6;
    this->BaseBitIndex = iVar7;
    if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar6) break;
    uVar3 = puVar4[iVar6];
    this->UnvisitedBitMask = 0xffffffff;
  }
  this->CurrentBitIndex = iVar2;
  return this;
}

