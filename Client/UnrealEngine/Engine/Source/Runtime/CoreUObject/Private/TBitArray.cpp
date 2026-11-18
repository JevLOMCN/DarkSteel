// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// RemoveAt @ 141f97e00

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  
  if (((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 + param_2 != this->NumBits) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = FVar3;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar8,param_1,(uint *)FVar8,param_1 + param_2,
               (this->NumBits - param_1) - param_2);
  }
  this->NumBits = this->NumBits - param_2;
  piVar1 = &this->NumBits;
  uVar9 = this->NumBits >> 0x1f & 0x1f;
  uVar6 = this->NumBits + uVar9;
  iVar7 = (uVar6 & 0x1f) - uVar9;
  if (iVar7 != 0) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = FVar3;
    }
    puVar2 = (uint *)((longlong)FVar8 + (longlong)((int)uVar6 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
  }
  if (this->MaxBits < *piVar1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits <= MaxBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*piVar1 < 0) || (this->MaxBits < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBits >= 0 && MaxBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = *piVar1 >> 0x1f & 0x1f;
  uVar6 = *piVar1 + uVar9;
  iVar7 = (uVar6 & 0x1f) - uVar9;
  if (iVar7 != 0) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    if ((*(uint *)((longlong)this + (longlong)((int)uVar6 >> 5) * 4) & -1 << ((byte)iVar7 & 0x1f))
        != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

