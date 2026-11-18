// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 147431030

TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
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
      pTVar3 = (TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  if (param_2 != this->Array->NumBits) {
    FindFirstSetBit(this);
  }
  return this;
}

