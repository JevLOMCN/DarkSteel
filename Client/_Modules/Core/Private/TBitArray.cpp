// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 64

// AddUninitialized @ 1414861a0

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
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
      uVar10 = this->MaxBits + 0x1fU >> 5;
      uVar11 = iVar1 + 0x1fU >> 5;
      uVar12 = (ulonglong)uVar11;
      uVar8 = 4;
      if (4 < uVar11) {
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          if (4 < uVar12) {
            uVar8 = uVar12;
          }
        }
        else {
          uVar8 = (uVar12 * 3 >> 3) + 0x10 + uVar12;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        uVar8 = uVar9 >> 2 & 0xffffffff;
        if ((int)(uVar9 >> 2) < (int)uVar11) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = (int)uVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar11 = this->NumBits >> 0x1f & 0x1f;
    uVar10 = this->NumBits + uVar11;
    iVar7 = (uVar10 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar10 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 1414acbc0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::Realloc
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 5) {
    if (FVar2 == (ForElementType<unsigned_int>)0x0) goto LAB_1414acc45;
    memmove(this,(void *)FVar2,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (FVar2 == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove((void *)(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_1414acc45;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_1414acc45:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// Assign<TFixedAllocator<2>_> @ 1414ecd40

void __thiscall
TBitArray<TFixedAllocator<2>_>::Assign<TFixedAllocator<2>_>
          (TBitArray<TFixedAllocator<2>_> *this,TBitArray<TFixedAllocator<2>_> *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar3) || (0x40 < this->MaxBits)) {
    uVar2 = 0x40;
    if (0x40 < (int)uVar3) {
      uVar2 = uVar3;
    }
    this->MaxBits = uVar2;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Assign<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1414ecdc0

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
Assign<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar4) || (0x20 < this->MaxBits)) {
    uVar3 = 0x20;
    if (0x20 < (int)uVar4) {
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
      param_1 = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Assign<FDefaultBitArrayAllocator> @ 1414ece50

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar4) || (0x80 < this->MaxBits)) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
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
      param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Add @ 1415a8580

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,bool param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (uint *)((longlong)this + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = ~(1 << (bVar5 & 0x1f)) & *puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// Add @ 1415a8600

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::Add(TBitArray<FDefaultBitArrayAllocator> *this,bool param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (uint *)((longlong)this + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = ~(1 << (bVar5 & 0x1f)) & *puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// AddUninitialized @ 1415a8b20

int __thiscall
TBitArray<TFixedAllocator<2>_>::AddUninitialized(TBitArray<TFixedAllocator<2>_> *this,int param_1)

{
  int iVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->NumBits;
  if (0 < param_1) {
    if (iVar5 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5;
    }
    iVar1 = iVar5 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar7) {
      this->NumBits = iVar1;
      return iVar5;
    }
    if (this->MaxBits < iVar1) {
      if (0x40 < (iVar1 + 0x1fU & 0xffffffe0)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewMax <= NumInlineElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                           ,0x536,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      this->MaxBits = 0x40;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar8 = this->NumBits >> 0x1f & 0x1f;
    uVar6 = this->NumBits + uVar8;
    iVar7 = (uVar6 & 0x1f) - uVar8;
    if (iVar7 != 0) {
      pTVar2 = (this->AllocatorInstance).InlineData + ((int)uVar6 >> 5);
      *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar5;
}

// AddUninitialized @ 1415a8c50

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
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
      iVar8 = -1;
    }
    else {
      iVar8 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar8) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar7 = this->MaxBits + 0x1fU >> 5;
      uVar12 = iVar1 + 0x1fU >> 5;
      if (uVar12 < 2) {
        iVar8 = 1;
      }
      else {
        uVar10 = (ulonglong)uVar12;
        if (uVar7 < 2) {
          uVar7 = 0;
        }
        if (uVar7 == 0) {
          uVar11 = 4;
          if (4 < uVar10) {
            uVar11 = uVar10;
          }
        }
        else {
          uVar11 = ((ulonglong)uVar12 * 3 >> 3) + 0x10 + uVar10;
        }
        uVar9 = FMemory::QuantizeSize(uVar11 * 4,0);
        iVar8 = (int)(uVar9 >> 2);
        if (iVar8 < (int)uVar12) {
          iVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = iVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar12 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// AddUninitialized @ 1415a8dd0

int __thiscall
TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
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
      iVar8 = -1;
    }
    else {
      iVar8 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar8) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar7 = this->MaxBits + 0x1fU >> 5;
      uVar12 = iVar1 + 0x1fU >> 5;
      if (uVar12 < 3) {
        iVar8 = 2;
      }
      else {
        uVar10 = (ulonglong)uVar12;
        if (uVar7 < 3) {
          uVar7 = 0;
        }
        if (uVar7 == 0) {
          uVar11 = 4;
          if (4 < uVar10) {
            uVar11 = uVar10;
          }
        }
        else {
          uVar11 = ((ulonglong)uVar12 * 3 >> 3) + 0x10 + uVar10;
        }
        uVar9 = FMemory::QuantizeSize(uVar11 * 4,0);
        iVar8 = (int)(uVar9 >> 2);
        if (iVar8 < (int)uVar12) {
          iVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = iVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar12 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// CheckInvariants @ 1415afdd0

void __thiscall
TBitArray<TFixedAllocator<2>_>::CheckInvariants(TBitArray<TFixedAllocator<2>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((this->MaxBits < this->NumBits) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (((iVar4 != 0) &&
      ((*(uint *)(this->AllocatorInstance).InlineData[(int)uVar3 >> 5].Pad &
       -1 << ((byte)iVar4 & 0x1f)) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CheckInvariants @ 1415afed0

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this)

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
      this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
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

// CheckInvariants @ 1415affe0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(TBitArray<FDefaultBitArrayAllocator> *this)

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
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
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

// Find @ 1415c14d0

int __thiscall
TBitArray<TFixedAllocator<2>_>::Find(TBitArray<TFixedAllocator<2>_> *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  TBitArray<TFixedAllocator<2>_> *pTVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar6 = -1;
  if (param_1) {
    iVar6 = 0;
  }
  uVar5 = this->NumBits + 0x1f;
  pTVar4 = this;
  if (uVar5 >> 5 != 0) {
    while (*(int *)(pTVar4->AllocatorInstance).InlineData[0].Pad == iVar6) {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      pTVar4 = (TBitArray<TFixedAllocator<2>_> *)((pTVar4->AllocatorInstance).InlineData + 1);
      if ((int)(uVar5 >> 5) <= (int)uVar1) {
        return -1;
      }
    }
    uVar5 = *(uint *)(this->AllocatorInstance).InlineData[uVar3].Pad;
    if (!param_1) {
      uVar5 = ~uVar5;
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    iVar2 = 0x20;
    if (uVar5 != 0) {
      iVar2 = iVar6;
    }
    iVar2 = (int)uVar3 * 0x20 + iVar2;
    if (iVar2 < this->NumBits) {
      return iVar2;
    }
  }
  return -1;
}

// Find @ 1415c1540

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Find
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  
  FVar4 = (this->AllocatorInstance).SecondaryData;
  uVar3 = 0;
  iVar6 = -1;
  if (param_1) {
    iVar6 = 0;
  }
  uVar5 = this->NumBits + 0x1f;
  FVar7 = (ForElementType<unsigned_int>)this;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar4;
  }
  FVar4 = FVar7;
  if (uVar5 >> 5 != 0) {
    while (*(int *)FVar4 == iVar6) {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      FVar4 = (ForElementType<unsigned_int>)((longlong)FVar4 + 4);
      if ((int)(uVar5 >> 5) <= (int)uVar1) {
        return -1;
      }
    }
    uVar5 = *(uint *)((longlong)FVar7 + uVar3 * 4);
    if (!param_1) {
      uVar5 = ~uVar5;
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    iVar2 = 0x20;
    if (uVar5 != 0) {
      iVar2 = iVar6;
    }
    iVar2 = (int)uVar3 * 0x20 + iVar2;
    if (iVar2 < this->NumBits) {
      return iVar2;
    }
  }
  return -1;
}

// Find @ 1415c15c0

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::Find(TBitArray<FDefaultBitArrayAllocator> *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  
  FVar4 = (this->AllocatorInstance).SecondaryData;
  uVar3 = 0;
  iVar6 = -1;
  if (param_1) {
    iVar6 = 0;
  }
  uVar5 = this->NumBits + 0x1f;
  FVar7 = (ForElementType<unsigned_int>)this;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar4;
  }
  FVar4 = FVar7;
  if (uVar5 >> 5 != 0) {
    while (*(int *)FVar4 == iVar6) {
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      FVar4 = (ForElementType<unsigned_int>)((longlong)FVar4 + 4);
      if ((int)(uVar5 >> 5) <= (int)uVar1) {
        return -1;
      }
    }
    uVar5 = *(uint *)((longlong)FVar7 + uVar3 * 4);
    if (!param_1) {
      uVar5 = ~uVar5;
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    iVar2 = 0x20;
    if (uVar5 != 0) {
      iVar2 = iVar6;
    }
    iVar2 = (int)uVar3 * 0x20 + iVar2;
    if (iVar2 < this->NumBits) {
      return iVar2;
    }
  }
  return -1;
}

// FindLast @ 1415c2b60

int __thiscall
TBitArray<TFixedAllocator<2>_>::FindLast(TBitArray<TFixedAllocator<2>_> *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  
  iVar1 = this->NumBits;
  if (iVar1 == 0) {
    return -1;
  }
  uVar5 = iVar1 + 0x1fU >> 5;
  uVar6 = (ulonglong)uVar5;
  uVar7 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
  while( true ) {
    if (uVar5 == 0) {
      return -1;
    }
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    uVar4 = uVar7;
    if (param_1) {
      uVar4 = 0;
    }
    uVar2 = *(uint *)(this->AllocatorInstance).InlineData[uVar6].Pad;
    if ((uVar2 & uVar7) != uVar4) break;
    uVar7 = 0xffffffff;
  }
  if (!param_1) {
    uVar2 = ~uVar2;
  }
  uVar6 = (ulonglong)(uVar2 & uVar7) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  return (int)lVar3 + -1 + uVar5 * 0x20;
}

// FindLast @ 1415c2c10

int __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  ulonglong uVar6;
  
  iVar1 = this->NumBits;
  if (iVar1 == 0) {
    return -1;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  uVar8 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
  }
  uVar5 = iVar1 + 0x1fU >> 5;
  uVar6 = (ulonglong)uVar5;
  while( true ) {
    if (uVar5 == 0) {
      return -1;
    }
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    uVar7 = uVar8;
    if (param_1) {
      uVar7 = 0;
    }
    uVar2 = *(uint *)((longlong)this + uVar6 * 4);
    if ((uVar2 & uVar8) != uVar7) break;
    uVar8 = 0xffffffff;
  }
  if (!param_1) {
    uVar2 = ~uVar2;
  }
  uVar6 = (ulonglong)(uVar2 & uVar8) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  return uVar5 * 0x20 + (int)lVar4 + -1;
}

// FindLast @ 1415c2cd0

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::FindLast
          (TBitArray<FDefaultBitArrayAllocator> *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  ulonglong uVar6;
  
  iVar1 = this->NumBits;
  if (iVar1 == 0) {
    return -1;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  uVar8 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
  }
  uVar5 = iVar1 + 0x1fU >> 5;
  uVar6 = (ulonglong)uVar5;
  while( true ) {
    if (uVar5 == 0) {
      return -1;
    }
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    uVar7 = uVar8;
    if (param_1) {
      uVar7 = 0;
    }
    uVar2 = *(uint *)((longlong)this + uVar6 * 4);
    if ((uVar2 & uVar8) != uVar7) break;
    uVar8 = 0xffffffff;
  }
  if (!param_1) {
    uVar2 = ~uVar2;
  }
  uVar6 = (ulonglong)(uVar2 & uVar8) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  return uVar5 * 0x20 + (int)lVar4 + -1;
}

// Realloc @ 1415dada0

void __thiscall
TBitArray<TFixedAllocator<2>_>::Realloc(TBitArray<TFixedAllocator<2>_> *this,int param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (0x40 < (this->MaxBits + 0x1fU & 0xffffffe0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax >= 0 && NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x524,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  if (iVar5 != 0) {
    pTVar1 = (this->AllocatorInstance).InlineData + ((int)uVar4 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
  }
  return;
}

// Realloc @ 1415dae20

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// Realloc @ 1415dae90

void __thiscall
TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 3) {
    if (FVar2 == (ForElementType<unsigned_int>)0x0) goto LAB_1415daf15;
    memmove(this,(void *)FVar2,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (FVar2 == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove((void *)(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_1415daf15;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_1415daf15:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// RemoveAt @ 1415e21e0

void __thiscall
TBitArray<TFixedAllocator<2>_>::RemoveAt
          (TBitArray<TFixedAllocator<2>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 + param_2 != this->NumBits) {
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)this,param_1,(uint *)this,param_1 + param_2,
               (this->NumBits - param_1) - param_2);
  }
  this->NumBits = this->NumBits - param_2;
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  if (iVar5 != 0) {
    pTVar1 = (this->AllocatorInstance).InlineData + ((int)uVar4 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// RemoveAt @ 1415e22a0

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  if (((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 + param_2 != this->NumBits) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar2;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar7,param_1,(uint *)FVar7,param_1 + param_2,
               (this->NumBits - param_1) - param_2);
  }
  this->NumBits = this->NumBits - param_2;
  uVar8 = this->NumBits >> 0x1f & 0x1f;
  uVar5 = this->NumBits + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// RemoveAt @ 1415e2380

void __thiscall
TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
          (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
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
      this = (TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
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

// RemoveAt @ 1415e2540

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::RemoveAt
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  if (((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1 + param_2 != this->NumBits) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar2;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar7,param_1,(uint *)FVar7,param_1 + param_2,
               (this->NumBits - param_1) - param_2);
  }
  this->NumBits = this->NumBits - param_2;
  uVar8 = this->NumBits >> 0x1f & 0x1f;
  uVar5 = this->NumBits + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  if (iVar6 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar2;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// SetRange @ 1415f3840

void __thiscall
TBitArray<TFixedAllocator<2>_>::SetRange
          (TBitArray<TFixedAllocator<2>_> *this,int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TTypeCompatibleBytes<unsigned_int> *pTVar8;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != 0) {
    uVar6 = param_1 >> 0x1f & 0x1f;
    iVar3 = param_1 + uVar6;
    uVar5 = iVar3 >> 5;
    iVar4 = param_1 + param_2 + 0x1f;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) - uVar5;
    uVar6 = -1 << (((byte)iVar3 & 0x1f) - (char)uVar6 & 0x1f);
    pTVar8 = (this->AllocatorInstance).InlineData + uVar5;
    uVar7 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    uVar5 = *(uint *)pTVar8->Pad;
    if (param_3) {
      if (iVar4 == 1) {
        *(uint *)pTVar8->Pad = uVar7 & uVar6 | uVar5;
      }
      else {
        *(uint *)pTVar8->Pad = uVar5 | uVar6;
        pTVar8 = pTVar8 + 1;
        uVar5 = iVar4 - 2;
        if (uVar5 != 0) {
          memset(pTVar8,-1,(ulonglong)uVar5 * 4);
          pTVar8 = pTVar8 + uVar5;
        }
        *(uint *)pTVar8->Pad = *(uint *)pTVar8->Pad | uVar7;
      }
    }
    else if (iVar4 == 1) {
      *(uint *)pTVar8->Pad = ~(uVar7 & uVar6) & uVar5;
    }
    else {
      *(uint *)pTVar8->Pad = ~uVar6 & uVar5;
      pTVar8 = pTVar8 + 1;
      uVar5 = iVar4 - 2;
      if (uVar5 != 0) {
        memset(pTVar8,0,(ulonglong)uVar5 * 4);
        pTVar8 = pTVar8 + uVar5;
      }
      *(uint *)pTVar8->Pad = *(uint *)pTVar8->Pad & ~uVar7;
    }
    CheckInvariants(this);
  }
  return;
}

// SetRange @ 1415f39b0

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
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

// SetRange @ 1415f3b30

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::SetRange
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,int param_2,bool param_3)

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

// Add @ 14167f010

int __thiscall
TBitArray<FDefaultBitArrayLLMAllocator>::Add
          (TBitArray<FDefaultBitArrayLLMAllocator> *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)&(this->AllocatorInstance).SecondaryData;
  if (pTVar2 != (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// AddUninitialized @ 14167fd70

int __thiscall
TBitArray<FDefaultBitArrayLLMAllocator>::AddUninitialized
          (TBitArray<FDefaultBitArrayLLMAllocator> *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
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
      uVar10 = this->MaxBits + 0x1fU >> 5;
      uVar11 = iVar1 + 0x1fU >> 5;
      uVar12 = (ulonglong)uVar11;
      uVar8 = 4;
      if (4 < uVar11) {
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          if (4 < uVar12) {
            uVar8 = uVar12;
          }
        }
        else {
          uVar8 = (uVar12 * 3 >> 3) + 0x10 + uVar12;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        uVar8 = uVar9 >> 2 & 0xffffffff;
        if ((int)(uVar9 >> 2) < (int)uVar11) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = (int)uVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar11 = this->NumBits >> 0x1f & 0x1f;
    uVar10 = this->NumBits + uVar11;
    iVar7 = (uVar10 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      pTVar3 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)&(this->AllocatorInstance).SecondaryData
      ;
      if (pTVar3 != (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 1416b9ff0

void __thiscall
TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
          (TBitArray<FDefaultBitArrayLLMAllocator> *this,int param_1)

{
  uchar *puVar1;
  void *_Src;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  _Src = *(void **)&(this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 5) {
    if (_Src == (void *)0x0) goto LAB_1416ba075;
    memmove(this,_Src,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (_Src == (void *)0x0) {
    TSizedLLMAllocator<32>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove(*(void **)&(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_1416ba075;
  }
  TSizedLLMAllocator<32>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_1416ba075:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    pTVar2 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)&(this->AllocatorInstance).SecondaryData;
    if (pTVar2 != (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar4 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// Assign<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 1416ca6f0

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
Assign<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar4) || (0x100 < this->MaxBits)) {
    uVar3 = 0x100;
    if (0x100 < (int)uVar4) {
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
      param_1 = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// AddUninitialized @ 1416dfcd0

int __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
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
      iVar8 = -1;
    }
    else {
      iVar8 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar8) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar7 = this->MaxBits + 0x1fU >> 5;
      uVar12 = iVar1 + 0x1fU >> 5;
      if (uVar12 < 9) {
        iVar8 = 8;
      }
      else {
        uVar10 = (ulonglong)uVar12;
        if (uVar7 < 9) {
          uVar7 = 0;
        }
        if (uVar7 == 0) {
          uVar11 = 4;
          if (4 < uVar10) {
            uVar11 = uVar10;
          }
        }
        else {
          uVar11 = ((ulonglong)uVar12 * 3 >> 3) + 0x10 + uVar10;
        }
        uVar9 = FMemory::QuantizeSize(uVar11 * 4,0);
        iVar8 = (int)(uVar9 >> 2);
        if (iVar8 < (int)uVar12) {
          iVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = iVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar12 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 141708990

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 9) {
    if (FVar2 == (ForElementType<unsigned_int>)0x0) goto LAB_141708a15;
    memmove(this,(void *)FVar2,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (FVar2 == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove((void *)(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_141708a15;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_141708a15:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// AddUninitialized @ 14198b0d0

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
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
      uVar10 = this->MaxBits + 0x1fU >> 5;
      uVar11 = iVar1 + 0x1fU >> 5;
      uVar12 = (ulonglong)uVar11;
      uVar8 = 4;
      if (4 < uVar11) {
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          if (4 < uVar12) {
            uVar8 = uVar12;
          }
        }
        else {
          uVar8 = (uVar12 * 3 >> 3) + 0x10 + uVar12;
        }
        uVar9 = FMemory::QuantizeSize(uVar8 * 4,0);
        uVar8 = uVar9 >> 2 & 0xffffffff;
        if ((int)(uVar9 >> 2) < (int)uVar11) {
          uVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = (int)uVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar11 = this->NumBits >> 0x1f & 0x1f;
    uVar10 = this->NumBits + uVar11;
    iVar7 = (uVar10 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar10 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 1419a6c10

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// AddUninitialized @ 141a750b0

int __thiscall
TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
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
      iVar8 = -1;
    }
    else {
      iVar8 = (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5;
    }
    iVar1 = iVar6 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar8) {
      this->NumBits = iVar1;
      return iVar6;
    }
    if (this->MaxBits < iVar1) {
      uVar7 = this->MaxBits + 0x1fU >> 5;
      uVar12 = iVar1 + 0x1fU >> 5;
      if (uVar12 < 0x11) {
        iVar8 = 0x10;
      }
      else {
        uVar10 = (ulonglong)uVar12;
        if (uVar7 < 0x11) {
          uVar7 = 0;
        }
        if (uVar7 == 0) {
          uVar11 = 4;
          if (4 < uVar10) {
            uVar11 = uVar10;
          }
        }
        else {
          uVar11 = ((ulonglong)uVar12 * 3 >> 3) + 0x10 + uVar10;
        }
        uVar9 = FMemory::QuantizeSize(uVar11 * 4,0);
        iVar8 = (int)(uVar9 >> 2);
        if (iVar8 < (int)uVar12) {
          iVar8 = 0x7fffffff;
        }
      }
      this->MaxBits = iVar8 << 5;
      Realloc(this,this->NumBits);
    }
    this->NumBits = this->NumBits + param_1;
    uVar12 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar12;
    iVar8 = (uVar7 & 0x1f) - uVar12;
    if (iVar8 != 0) {
      FVar3 = (this->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
      }
      puVar2 = (uint *)((longlong)this + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 141a8e710

void __thiscall
TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  uVar5 = this->MaxBits + 0x1fU >> 5;
  uVar4 = param_1 + 0x1fU >> 5;
  if (uVar5 < 0x11) {
    if (FVar2 == (ForElementType<unsigned_int>)0x0) goto LAB_141a8e795;
    memmove(this,(void *)FVar2,(ulonglong)uVar4 << 2);
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (FVar2 == (ForElementType<unsigned_int>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,0,uVar5,4);
    memmove((void *)(this->AllocatorInstance).SecondaryData,this,(ulonglong)uVar4 << 2);
    goto LAB_141a8e795;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->AllocatorInstance).SecondaryData,uVar4,uVar5,4);
LAB_141a8e795:
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// AddRange<unsigned_int> @ 141adf2d0

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::AddRange<unsigned_int>
          (TBitArray<FDefaultBitArrayAllocator> *this,uint *param_1,int param_2,int param_3)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = AddUninitialized(this,param_2);
  if (((iVar4 < 0) || (param_2 < 0)) || (this->NumBits < iVar4 + param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if ((param_2 != 0) && (param_1 == (uint *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToSet == 0 || ReadBits != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)this,iVar4,param_1,param_3,param_2);
  return iVar4;
}

// InsertRange<unsigned_int> @ 141ae6dd0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::InsertRange<unsigned_int>
          (TBitArray<FDefaultBitArrayAllocator> *this,uint *param_1,int param_2,int param_3,
          int param_4)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  
  InsertUninitialized(this,param_2,param_3);
  if (((param_2 < 0) || (param_3 < 0)) || (this->NumBits < param_2 + param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_3 != 0) && (param_1 == (uint *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToSet == 0 || ReadBits != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)this,param_2,param_1,param_4,param_3);
  return;
}

// InsertRange<FDefaultBitArrayAllocator> @ 141ae6ea0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::InsertRange<FDefaultBitArrayAllocator>
          (TBitArray<FDefaultBitArrayAllocator> *this,TBitArray<FDefaultBitArrayAllocator> *param_1,
          int param_2,int param_3,int param_4)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((param_4 < 0) || (param_1->NumBits < param_3 + param_4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2ea,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  InsertUninitialized(this,param_2,param_3);
  if ((((param_2 < 0) || (param_3 < 0)) || (this->NumBits < param_2 + param_3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3cf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_4 < 0) || (param_1->NumBits < param_3 + param_4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3d0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)this,param_2,(uint *)param_1,param_4,param_3);
  return;
}

// Add @ 141b37d90

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::Add
          (TBitArray<FDefaultBitArrayAllocator> *this,bool param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return this->NumBits;
  }
  iVar1 = AddUninitialized(this,param_2);
  SetRange(this,iVar1,param_2,param_1);
  return iVar1;
}

// AddUninitialized @ 141b382e0

int __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::AddUninitialized
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->NumBits;
  if (0 < param_1) {
    if (iVar5 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = (int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5;
    }
    iVar1 = iVar5 + param_1;
    if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar6) {
      this->NumBits = iVar1;
      return iVar5;
    }
    Reserve(this,iVar1);
    iVar6 = this->NumBits + param_1;
    this->NumBits = iVar6;
    uVar8 = iVar6 >> 0x1f & 0x1f;
    uVar7 = iVar6 + uVar8;
    iVar6 = (uVar7 & 0x1f) - uVar8;
    if (iVar6 != 0) {
      puVar2 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
    }
  }
  return iVar5;
}

// BitwiseNOT @ 141b38e10

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::BitwiseNOT(TBitArray<FDefaultBitArrayAllocator> *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<unsigned_int> FVar8;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar8 = FVar2;
  }
  uVar7 = 0;
  iVar4 = this->NumBits + 0x1f;
  iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
  uVar5 = this->NumBits & 0x8000001f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar5) & 0x1f);
  if (0x1f < (int)(0x20 - uVar5)) {
    uVar3 = 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (iVar4 == 1) {
    uVar5 = uVar3;
  }
  if (0 < iVar4) {
    do {
      puVar1 = (uint *)((longlong)FVar8 + uVar7 * 4);
      uVar6 = *(uint *)((longlong)FVar8 + uVar7 * 4) & uVar5;
      if (uVar5 == 0xffffffff) {
        uVar6 = *puVar1;
      }
      uVar5 = ~uVar6 & uVar3;
      if ((uint)uVar7 != iVar4 - 1U) {
        uVar5 = ~uVar6;
      }
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *puVar1 = uVar5;
      uVar5 = 0xffffffff;
      if (uVar6 == iVar4 - 1U) {
        uVar5 = uVar3;
      }
    } while ((int)uVar6 < iVar4);
  }
  return;
}

// CheckInvariants @ 141b39c20

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::CheckInvariants
          (TBitArray<TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((this->MaxBits < this->NumBits) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits <= MaxBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x238,L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBits >= 0 && MaxBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (((iVar4 != 0) &&
      ((*(uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar3 >> 5) * 4) &
       -1 << ((byte)iVar4 & 0x1f)) != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LastWord & SlackMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x243,
                         L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CheckInvariants @ 141b39d30

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this)

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
      this = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
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

// ClearPartialSlackBits @ 141b39e40

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::ClearPartialSlackBits
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// ClearPartialSlackBits @ 141b39e90

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits
          (TBitArray<FDefaultBitArrayAllocator> *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar3 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// CountSetBits @ 141b3ca70

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::CountSetBits
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,int param_2)

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
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
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

// FindFromImpl @ 141b40f30

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
          (TBitArray<FDefaultBitArrayAllocator> *this,bool param_1,int param_2,int param_3)

{
  ForElementType<unsigned_int> FVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = -1 << ((byte)param_2 & 0x1f);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
  }
  uVar7 = param_3 + 0x1fU >> 5;
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if (iVar3 < (int)uVar7) {
    puVar6 = (uint *)((longlong)this + (longlong)iVar3 * 4);
    do {
      uVar4 = uVar8;
      if (param_1) {
        uVar4 = 0;
      }
      if ((*puVar6 & uVar8) != uVar4) {
        uVar7 = *(uint *)((longlong)this + (longlong)iVar3 * 4);
        if (!param_1) {
          uVar7 = ~uVar7;
        }
        uVar7 = uVar7 & uVar8;
        iVar2 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar5 = 0x20;
        if (uVar7 != 0) {
          iVar5 = iVar2;
        }
        iVar5 = iVar5 + iVar3 * 0x20;
        iVar3 = -1;
        if (iVar5 < param_3) {
          iVar3 = iVar5;
        }
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
      uVar8 = 0xffffffff;
    } while (iVar3 < (int)uVar7);
  }
  return -1;
}

// FindLastFromImpl @ 141b41220

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl
          (TBitArray<FDefaultBitArrayAllocator> *this,bool param_1,int param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  ulonglong uVar5;
  
  if (this->NumBits != 0) {
    FVar2 = (this->AllocatorInstance).SecondaryData;
    uVar7 = 0xffffffff >> (-(char)param_2 & 0x1fU);
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    uVar4 = param_2 + 0x1fU >> 5;
    uVar5 = (ulonglong)uVar4;
    while (uVar4 != 0) {
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar7;
      if (param_1) {
        uVar6 = 0;
      }
      uVar1 = *(uint *)((longlong)this + uVar5 * 4);
      if ((uVar1 & uVar7) != uVar6) {
        if (!param_1) {
          uVar1 = ~uVar1;
        }
        uVar5 = (ulonglong)(uVar1 & uVar7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        return uVar4 * 0x20 + (int)lVar3 + -1;
      }
      uVar7 = 0xffffffff;
    }
  }
  return -1;
}

// Insert @ 141b44e50

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::Insert
          (TBitArray<TSizedDefaultAllocator<32>_> *this,bool param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = &this->NumBits;
  if ((param_2 < 0) || (*piVar1 < param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 <= Index && Index <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *piVar1;
  if ((iVar6 == 0) ||
     ((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5 !=
      (int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5)) {
    Reserve(this,iVar6 + 1);
    iVar5 = *piVar1 + 1;
    *piVar1 = iVar5;
    uVar8 = iVar5 >> 0x1f & 0x1f;
    uVar9 = iVar5 + uVar8;
    iVar5 = (uVar9 & 0x1f) - uVar8;
    if (iVar5 != 0) {
      puVar2 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar9 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  else {
    *piVar1 = iVar6 + 1;
  }
  if (iVar6 - param_2 != 0) {
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)this->AllocatorInstance,param_2 + 1,(uint *)this->AllocatorInstance,param_2,
               iVar6 - param_2);
  }
  uVar9 = param_2 >> 0x1f & 0x1f;
  iVar6 = param_2 + uVar9;
  bVar7 = ((byte)iVar6 & 0x1f) - (char)uVar9;
  puVar2 = (uint *)((longlong)this->AllocatorInstance + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = ~(1 << (bVar7 & 0x1f)) & *puVar2 | (uint)param_1 << (bVar7 & 0x1f);
  return;
}

// InsertUninitialized @ 141b457e0

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::InsertUninitialized
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (((param_1 < 0) || (this->NumBits < param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < param_2) {
    iVar1 = this->NumBits;
    AddUninitialized(this,param_2);
    uVar4 = iVar1 - param_1;
    if (uVar4 != 0) {
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)this->AllocatorInstance,param_1 + param_2,(uint *)this->AllocatorInstance,
                 param_1,uVar4);
    }
  }
  return;
}

// InsertUninitialized @ 141b458b0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::InsertUninitialized
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,int param_2)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (((param_1 < 0) || (this->NumBits < param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToAdd >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x2f8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < param_2) {
    iVar1 = this->NumBits;
    AddUninitialized(this,param_2);
    uVar5 = iVar1 - param_1;
    if (uVar5 != 0) {
      FVar2 = (this->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        this = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
      }
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)this,param_1 + param_2,(uint *)this,param_1,uVar5);
    }
  }
  return;
}

// Realloc @ 141b49010

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::Realloc
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)this,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar4 = this->NumBits >> 0x1f & 0x1f;
  uVar2 = this->NumBits + uVar4;
  iVar3 = (uVar2 & 0x1f) - uVar4;
  if (iVar3 != 0) {
    puVar1 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// RemoveAt @ 141b4af10

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::RemoveAt
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3ee,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 + param_2 != this->NumBits) {
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)this->AllocatorInstance,param_1,(uint *)this->AllocatorInstance,
               param_1 + param_2,(this->NumBits - param_1) - param_2);
  }
  this->NumBits = this->NumBits - param_2;
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar4 = this->NumBits + uVar6;
  iVar5 = (uVar4 & 0x1f) - uVar6;
  if (iVar5 != 0) {
    puVar1 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// RemoveAtSwap @ 141b4b530

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::RemoveAtSwap
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x405,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 < this->NumBits - param_2) && (0 < param_2)) {
    iVar11 = -param_1;
    do {
      iVar10 = (iVar11 - param_2) + param_1 + this->NumBits;
      if (((iVar10 < 0) || (this->NumBits <= iVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar7 = (byte)iVar10;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
      }
      uVar6 = *(uint *)((longlong)this->AllocatorInstance + (longlong)(iVar10 >> 5) * 4);
      if (((param_1 < 0) || (this->NumBits <= param_1)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = param_1;
      if (param_1 < 0) {
        iVar10 = param_1 + 0x1f;
      }
      lVar2 = (longlong)(iVar10 >> 5) * 4;
      uVar5 = 1 << ((byte)param_1 & 0x1f);
      uVar9 = *(uint *)(lVar2 + (longlong)this->AllocatorInstance);
      if ((1 << (bVar7 & 0x1f) & uVar6) == 0) {
        uVar5 = ~uVar5 & uVar9;
      }
      else {
        uVar5 = uVar5 | uVar9;
      }
      param_1 = param_1 + 1;
      *(uint *)((longlong)this->AllocatorInstance + lVar2) = uVar5;
    } while (iVar11 + param_1 < param_2);
  }
  piVar8 = &this->NumBits;
  *piVar8 = *piVar8 - param_2;
  uVar9 = *piVar8 >> 0x1f & 0x1f;
  uVar6 = *piVar8 + uVar9;
  iVar11 = (uVar6 & 0x1f) - uVar9;
  if (iVar11 != 0) {
    puVar1 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar6 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// RemoveAtSwap @ 141b4b6f0

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x405,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 < this->NumBits - param_2) && (0 < param_2)) {
    iVar13 = -param_1;
    do {
      iVar12 = (iVar13 - param_2) + param_1 + this->NumBits;
      if (((iVar12 < 0) || (this->NumBits <= iVar12)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      bVar8 = (byte)iVar12;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0x1f;
      }
      uVar7 = *(uint *)((longlong)FVar10 + (longlong)(iVar12 >> 5) * 4);
      if (((param_1 < 0) || (this->NumBits <= param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)this;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      iVar12 = param_1;
      if (param_1 < 0) {
        iVar12 = param_1 + 0x1f;
      }
      lVar2 = (longlong)(iVar12 >> 5) * 4;
      uVar6 = 1 << ((byte)param_1 & 0x1f);
      uVar11 = *(uint *)(lVar2 + (longlong)FVar10);
      if ((1 << (bVar8 & 0x1f) & uVar7) == 0) {
        uVar6 = ~uVar6 & uVar11;
      }
      else {
        uVar6 = uVar6 | uVar11;
      }
      param_1 = param_1 + 1;
      *(uint *)((longlong)FVar10 + lVar2) = uVar6;
    } while (iVar13 + param_1 < param_2);
  }
  piVar9 = &this->NumBits;
  *piVar9 = *piVar9 - param_2;
  uVar11 = *piVar9 >> 0x1f & 0x1f;
  uVar7 = *piVar9 + uVar11;
  iVar13 = (uVar7 & 0x1f) - uVar11;
  if (iVar13 != 0) {
    FVar3 = (this->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar3;
    }
    puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
  }
  CheckInvariants(this);
  return;
}

// Reserve @ 141b4c070

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::Reserve
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (this->MaxBits < param_1) {
    uVar4 = param_1 + 0x1fU >> 5;
    uVar5 = (ulonglong)uVar4;
    if (this->MaxBits + 0x1fU < 0x20) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 4,0);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < (int)uVar4) {
      iVar1 = 0x7fffffff;
    }
    this->MaxBits = iVar1 << 5;
    Realloc(this,this->NumBits);
  }
  return;
}

// Reserve @ 141b4c100

void __thiscall
TBitArray<FDefaultBitArrayAllocator>::Reserve
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1)

{
  ulonglong uVar1;
  ulong64 uVar2;
  uint uVar3;
  uint uVar5;
  ulonglong uVar4;
  
  if (this->MaxBits < param_1) {
    uVar5 = this->MaxBits + 0x1fU >> 5;
    uVar3 = param_1 + 0x1fU >> 5;
    uVar4 = (ulonglong)uVar3;
    uVar1 = 4;
    if (4 < uVar3) {
      if (uVar5 < 5) {
        uVar5 = 0;
      }
      if (uVar5 == 0) {
        if (4 < uVar4) {
          uVar1 = uVar4;
        }
      }
      else {
        uVar1 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
      }
      uVar2 = FMemory::QuantizeSize(uVar1 * 4,0);
      uVar1 = uVar2 >> 2 & 0xffffffff;
      if ((int)(uVar2 >> 2) < (int)uVar3) {
        uVar1 = 0x7fffffff;
      }
    }
    this->MaxBits = (int)uVar1 << 5;
    Realloc(this,this->NumBits);
  }
  return;
}

// SetNumUninitialized @ 141b4ddd0

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = this->NumBits;
  this->NumBits = param_1;
  if (this->MaxBits < param_1) {
    uVar2 = param_1 + 0x1fU >> 5;
    uVar4 = FMemory::QuantizeSize((ulonglong)uVar2 << 2,0);
    iVar6 = (int)(uVar4 >> 2);
    if (iVar6 < (int)uVar2) {
      iVar6 = 0x7fffffff;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,iVar3 + 0x1fU >> 5,iVar6,4);
    this->MaxBits = iVar6 << 5;
  }
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar2 = this->NumBits + uVar5;
  iVar3 = (uVar2 & 0x1f) - uVar5;
  if (iVar3 != 0) {
    puVar1 = (uint *)((longlong)this->AllocatorInstance + (longlong)((int)uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// SetRange @ 141b4de90

void __thiscall
TBitArray<TSizedDefaultAllocator<32>_>::SetRange
          (TBitArray<TSizedDefaultAllocator<32>_> *this,int param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != 0) {
    uVar5 = param_1 >> 0x1f & 0x1f;
    iVar3 = param_1 + uVar5;
    uVar4 = iVar3 >> 5;
    iVar6 = param_1 + param_2 + 0x1f;
    iVar6 = ((int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5) - uVar4;
    uVar8 = -1 << (((byte)iVar3 & 0x1f) - (char)uVar5 & 0x1f);
    uVar5 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    puVar7 = (uint *)((longlong)this->AllocatorInstance + (ulonglong)uVar4 * 4);
    uVar4 = *(uint *)((longlong)this->AllocatorInstance + (ulonglong)uVar4 * 4);
    if (param_3) {
      if (iVar6 == 1) {
        *puVar7 = uVar5 & uVar8 | uVar4;
      }
      else {
        *puVar7 = uVar4 | uVar8;
        puVar7 = puVar7 + 1;
        uVar4 = iVar6 - 2;
        if (uVar4 != 0) {
          memset(puVar7,-1,(ulonglong)uVar4 * 4);
          puVar7 = puVar7 + uVar4;
        }
        *puVar7 = *puVar7 | uVar5;
      }
    }
    else if (iVar6 == 1) {
      *puVar7 = ~(uVar5 & uVar8) & uVar4;
    }
    else {
      *puVar7 = ~uVar8 & uVar4;
      puVar7 = puVar7 + 1;
      uVar4 = iVar6 - 2;
      if (uVar4 != 0) {
        memset(puVar7,0,(ulonglong)uVar4 * 4);
        puVar7 = puVar7 + uVar4;
      }
      *puVar7 = *puVar7 & ~uVar5;
    }
    CheckInvariants(this);
  }
  return;
}

// SetRange @ 141b4e010

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
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

