// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// Add @ 14c95c0b0

int __thiscall
TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Add
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this,bool param_1,
          int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return this->NumBits;
  }
  iVar1 = AddUninitialized(this,param_2);
  SetRange(this,iVar1,param_2,param_1);
  return iVar1;
}

// AddUninitialized @ 14c95c380

int __thiscall
TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar11;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = this->NumBits;
  if (0 < param_1) {
    if (iVar6 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar7) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar9 = this->MaxBits + 0x1fU >> 5;
      uVar10 = iVar1 + 0x1fU >> 5;
      uVar11 = (ulonglong)uVar10;
      iVar7 = 0x200;
      if (0x200 < uVar10) {
        if (uVar9 < 0x201) {
          uVar9 = 0;
        }
        if (uVar9 == 0) {
          uVar12 = 4;
          if (4 < uVar11) {
            uVar12 = uVar11;
          }
        }
        else {
          uVar12 = (uVar11 * 3 >> 3) + 0x10 + uVar11;
        }
        uVar8 = FMemory::QuantizeSize(uVar12 * 4,0);
        iVar7 = (int)(uVar8 >> 2);
        if (iVar7 < (int)uVar10) {
          iVar7 = 0x7fffffff;
        }
      }
      this->MaxBits = iVar7 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar10 = this->NumBits >> 0x1f & 0x1f;
    uVar9 = this->NumBits + uVar10;
    iVar7 = (uVar9 & 0x1f) - uVar10;
    if (iVar7 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar9 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// CheckInvariants @ 14c977140

void __thiscall
TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((this->MaxBits < this->NumBits) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  if (iVar5 != 0) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    if (((*(uint *)((longlong)this + (longlong)((int)uVar4 >> 5) * 4) & -1 << ((byte)iVar5 & 0x1f))
         != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LastWord & SlackMask) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x243,
                           L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Realloc @ 14c983ff0

void __thiscall
TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// SetRange @ 14c985460

void __thiscall
TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
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
    CheckInvariants(this);
  }
  return;
}

