// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// SetNum<bool> @ 144d3d2e0

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum<bool>
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          bool param_2)

{
  int iVar1;
  
  iVar1 = this->NumBits;
  SetNumUninitialized(this,param_1);
  if (iVar1 < param_1) {
    SetRange(this,iVar1,param_1 - iVar1,param_2);
  }
  return;
}

// CheckInvariants @ 144d5db10

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this)

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
      this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
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

// FindAndSetFirstZeroBit @ 144d79de0

int __thiscall
TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::FindAndSetFirstZeroBit
          (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  ForElementType<unsigned_int> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  
  uVar9 = -1 << ((byte)param_1 & 0x1f);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar10 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar10 = FVar1;
  }
  uVar11 = this->NumBits + 0x1fU >> 5;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  uVar7 = (ulonglong)iVar5;
  if (iVar5 < (int)uVar11) {
    puVar6 = (uint *)((longlong)FVar10 + uVar7 * 4);
    do {
      iVar5 = (int)uVar7;
      if ((*puVar6 & uVar9) != uVar9) {
        uVar9 = ~*(uint *)((longlong)FVar10 + (longlong)iVar5 * 4) & uVar9;
        iVar2 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        iVar8 = 0x20;
        if (uVar9 != 0) {
          iVar8 = iVar2;
        }
        iVar8 = iVar8 + iVar5 * 0x20;
        if (this->NumBits <= iVar8) {
          return -1;
        }
        if (iVar8 != -1) {
          if ((iVar8 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          FVar1 = (this->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)this;
          if (FVar1 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar1;
          }
          puVar6 = (uint *)((longlong)FVar10 +
                           (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar6 = *puVar6 | 1 << ((byte)iVar8 & 0x1f);
          if ((this->MaxBits < this->NumBits) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBits <= MaxBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x238,
                                 L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          if (((this->NumBits < 0) || (this->MaxBits < 0)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumBits >= 0 && MaxBits >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          uVar11 = this->NumBits >> 0x1f & 0x1f;
          uVar9 = this->NumBits + uVar11;
          iVar5 = (uVar9 & 0x1f) - uVar11;
          if (iVar5 != 0) {
            FVar1 = (this->AllocatorInstance).SecondaryData;
            if (FVar1 != (ForElementType<unsigned_int>)0x0) {
              this = (TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
            }
            if (((*(uint *)((longlong)this + (longlong)((int)uVar9 >> 5) * 4) &
                 -1 << ((byte)iVar5 & 0x1f)) != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(LastWord & SlackMask) == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x243,
                                   L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              iVar5 = (*pcVar3)();
              return iVar5;
            }
          }
        }
        return iVar8;
      }
      uVar7 = (ulonglong)(iVar5 + 1U);
      puVar6 = puVar6 + 1;
      uVar9 = 0xffffffff;
    } while ((int)(iVar5 + 1U) < (int)uVar11);
  }
  return -1;
}

// SetNumUninitialized @ 144d9a4d0

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1)

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
  if (param_1 <= this->MaxBits) goto LAB_144d9a5bb;
  uVar5 = iVar2 + 0x1fU >> 5;
  uVar6 = param_1 + 0x1fU >> 5;
  if (uVar6 < 9) {
    FVar4 = (this->AllocatorInstance).SecondaryData;
    uVar6 = 8;
LAB_144d9a54b:
    uVar7 = uVar6;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      memmove(this,(void *)FVar4,(ulonglong)uVar5 << 2);
      uVar7 = 0;
      uVar5 = 0;
LAB_144d9a59a:
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
    if (uVar7 < 9) goto LAB_144d9a54b;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) goto LAB_144d9a59a;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,uVar7,4);
    memmove((void *)*this_00,this,(ulonglong)uVar5 << 2);
  }
  this->MaxBits = uVar7 << 5;
LAB_144d9a5bb:
  uVar6 = this->NumBits >> 0x1f & 0x1f;
  uVar5 = this->NumBits + uVar6;
  iVar2 = (uVar5 & 0x1f) - uVar6;
  if (iVar2 != 0) {
    FVar4 = (this->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      this = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar4;
    }
    puVar1 = (uint *)((longlong)this + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
  }
  return;
}

// SetRange @ 144d9a6f0

void __thiscall
TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetRange
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
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

// Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_> @ 144f5c6b0

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::
Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *param_1)

{
  int iVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
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
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(param_1->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      param_1 = pTVar2;
    }
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// Realloc @ 144fcee80

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::Realloc(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
  ForElementType<unsigned_int>::ResizeAllocation
            (&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar3 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// Assign<FDefaultBitArrayAllocator> @ 14502c710

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::Assign<FDefaultBitArrayAllocator>
          (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1->NumBits + 0x1fU & 0xffffffe0;
  this->NumBits = 0;
  if ((this->MaxBits < (int)uVar5) || (0x80 < this->MaxBits)) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    this->MaxBits = uVar4;
    Realloc(this,0);
  }
  iVar1 = param_1->NumBits;
  this->NumBits = iVar1;
  if (iVar1 != 0) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
    }
    pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar3;
    }
    memcpy(this,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return;
}

// AddUninitialized @ 1450489b0

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::AddUninitialized(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
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
      uVar9 = this->MaxBits + 0x1fU >> 5;
      uVar7 = 4;
      uVar10 = iVar1 + 0x1fU >> 5;
      if (4 < uVar10) {
        if (uVar9 < 5) {
          uVar9 = 0;
        }
        if (uVar9 == 0) {
          uVar7 = 4;
          if (4 < (ulonglong)uVar10) {
            uVar7 = uVar10;
          }
        }
        else {
          uVar7 = (int)((ulonglong)uVar10 * 3 >> 3) + 0x10 + uVar10;
        }
        if (uVar7 < uVar10) {
          uVar7 = 0x7fffffff;
        }
      }
      this->MaxBits = uVar7 << 5;
      Realloc(this,iVar6);
    }
    this->NumBits = this->NumBits + param_1;
    uVar9 = this->NumBits >> 0x1f & 0x1f;
    uVar7 = this->NumBits + uVar9;
    iVar8 = (uVar7 & 0x1f) - uVar9;
    if (iVar8 != 0) {
      pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar7 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// Add @ 145419470

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::Add(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
      *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// SetRange @ 14544f160

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::SetRange(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this,int param_1,int param_2,bool param_3)

{
  uint uVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar6;
  uint uVar7;
  int iVar8;
  uchar *puVar9;
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
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    uVar7 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    pTVar6 = this;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar6 = pTVar2;
    }
    uVar1 = *(uint *)((pTVar6->AllocatorInstance).InlineData + (ulonglong)uVar11 * 4);
    puVar9 = (pTVar6->AllocatorInstance).InlineData + (ulonglong)uVar11 * 4;
    if (param_3) {
      if (iVar8 == 1) {
        *(uint *)puVar9 = uVar7 & uVar10 | uVar1;
      }
      else {
        *(uint *)puVar9 = uVar1 | uVar10;
        puVar9 = puVar9 + 4;
        uVar10 = iVar8 - 2;
        if (uVar10 != 0) {
          memset(puVar9,-1,(ulonglong)uVar10 * 4);
          puVar9 = puVar9 + (ulonglong)uVar10 * 4;
        }
        *(uint *)puVar9 = *(uint *)puVar9 | uVar7;
      }
    }
    else if (iVar8 == 1) {
      *(uint *)puVar9 = ~(uVar7 & uVar10) & uVar1;
    }
    else {
      *(uint *)puVar9 = ~uVar10 & uVar1;
      puVar9 = puVar9 + 4;
      uVar10 = iVar8 - 2;
      if (uVar10 != 0) {
        memset(puVar9,0,(ulonglong)uVar10 * 4);
        puVar9 = puVar9 + (ulonglong)uVar10 * 4;
      }
      *(uint *)puVar9 = *(uint *)puVar9 & ~uVar7;
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
      pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(this->AllocatorInstance).SecondaryData.Data;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        this = pTVar2;
      }
      if (((*(uint *)((this->AllocatorInstance).InlineData + (longlong)((int)uVar7 >> 5) * 4) &
           -1 << ((byte)iVar8 & 0x1f)) != 0) &&
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

// SetNum<bool> @ 145475670

void __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this,
          int param_1,bool param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = this->NumBits;
  this->NumBits = param_1;
  if (this->MaxBits < param_1) {
    uVar5 = param_1 + 0x1fU >> 5;
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(&this->AllocatorInstance,iVar2 + 0x1fU >> 5,uVar5,4);
    this->MaxBits = uVar5 << 5;
  }
  uVar4 = this->NumBits >> 0x1f & 0x1f;
  uVar5 = this->NumBits + uVar4;
  iVar3 = (uVar5 & 0x1f) - uVar4;
  if (iVar3 != 0) {
    puVar1 = (this->AllocatorInstance).Data + ((int)uVar5 >> 5);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  if (iVar2 < param_1) {
    SetRange(this,iVar2,param_1 - iVar2,param_2);
  }
  return;
}

// PadToNum @ 1454ad520

int __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::PadToNum
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this,
          int param_1,bool param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = this->NumBits;
  iVar6 = param_1 - iVar2;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    if (iVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5;
    }
    if ((int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 0x1fU)) >> 5 == iVar3) {
      this->NumBits = param_1;
    }
    else {
      if (this->MaxBits < param_1) {
        uVar4 = param_1 + 0x1fU >> 5;
        if (this->MaxBits + 0x1fU < 0x20) {
          uVar5 = 4;
          if (4 < (ulonglong)uVar4) {
            uVar5 = uVar4;
          }
        }
        else {
          uVar5 = (int)((ulonglong)uVar4 * 3 >> 3) + 0x10 + uVar4;
        }
        if (uVar5 < uVar4) {
          uVar5 = 0x7fffffff;
        }
        this->MaxBits = uVar5 << 5;
        Realloc(this,iVar2);
      }
      this->NumBits = this->NumBits + iVar6;
      uVar5 = this->NumBits >> 0x1f & 0x1f;
      uVar4 = this->NumBits + uVar5;
      iVar3 = (uVar4 & 0x1f) - uVar5;
      if (iVar3 != 0) {
        puVar1 = (this->AllocatorInstance).Data + ((int)uVar4 >> 5);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
      }
    }
    SetRange(this,iVar2,iVar6,param_2);
  }
  return iVar6;
}

// PadToNum @ 1454ad640

int __thiscall
TBitArray<FDefaultBitArrayAllocator>::PadToNum
          (TBitArray<FDefaultBitArrayAllocator> *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 - this->NumBits;
  if (0 < iVar2) {
    iVar1 = AddUninitialized(this,iVar2);
    SetRange(this,iVar1,iVar2,param_2);
    return iVar2;
  }
  return 0;
}

// Realloc @ 1454b4740

void __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this,
          int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
  ResizeAllocation(&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar4 = this->NumBits >> 0x1f & 0x1f;
  uVar2 = this->NumBits + uVar4;
  iVar3 = (uVar2 & 0x1f) - uVar4;
  if (iVar3 != 0) {
    puVar1 = (this->AllocatorInstance).Data + ((int)uVar2 >> 5);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
  }
  return;
}

// SetRange @ 1454b9ad0

void __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetRange
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this,
          int param_1,int param_2,bool param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (this->NumBits < param_1 + param_2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x379,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 != 0) {
    uVar6 = param_1 >> 0x1f & 0x1f;
    iVar4 = param_1 + uVar6;
    uVar5 = iVar4 >> 5;
    iVar7 = param_1 + param_2 + 0x1f;
    iVar7 = ((int)((iVar7 >> 0x1f & 0x1fU) + iVar7) >> 5) - uVar5;
    uVar9 = -1 << (((byte)iVar4 & 0x1f) - (char)uVar6 & 0x1f);
    puVar1 = (this->AllocatorInstance).Data;
    uVar6 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    puVar8 = puVar1 + uVar5;
    uVar5 = puVar1[uVar5];
    if (param_3) {
      if (iVar7 == 1) {
        *puVar8 = uVar6 & uVar9 | uVar5;
      }
      else {
        *puVar8 = uVar5 | uVar9;
        puVar8 = puVar8 + 1;
        uVar5 = iVar7 - 2;
        if (uVar5 != 0) {
          memset(puVar8,-1,(ulonglong)uVar5 * 4);
          puVar8 = puVar8 + uVar5;
        }
        *puVar8 = *puVar8 | uVar6;
      }
    }
    else if (iVar7 == 1) {
      *puVar8 = ~(uVar6 & uVar9) & uVar5;
    }
    else {
      *puVar8 = ~uVar9 & uVar5;
      puVar8 = puVar8 + 1;
      uVar5 = iVar7 - 2;
      if (uVar5 != 0) {
        memset(puVar8,0,(ulonglong)uVar5 * 4);
        puVar8 = puVar8 + uVar5;
      }
      *puVar8 = *puVar8 & ~uVar6;
    }
    if ((this->MaxBits < this->NumBits) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBits <= MaxBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x238,
                           L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"),
       bVar3)) {
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
    uVar5 = this->NumBits + uVar6;
    iVar7 = (uVar5 & 0x1f) - uVar6;
    if (((iVar7 != 0) &&
        (((this->AllocatorInstance).Data[(int)uVar5 >> 5] & -1 << ((byte)iVar7 & 0x1f)) != 0)) &&
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

// ClearPartialSlackBits @ 14552b2e0

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
::ClearPartialSlackBits
          (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *this)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar3 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 14574e130

TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this)

{
  (this->AllocatorInstance).Data = (uint *)0x0;
  this->NumBits = 0;
  this->MaxBits = 0;
  return this;
}

// ~TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> @ 145750080

void __thiscall
TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
~TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          (TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int *piVar4;
  
  puVar3 = (this->AllocatorInstance).Data;
  if (puVar3 == (uint *)0x0) {
    return;
  }
  if (puVar3 != (uint *)0x0) {
    puVar3 = puVar3 + -2;
    MemoryTrace_Free((ulong64)puVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar3,FMalloc,true);
    }
    piVar4 = (int *)((longlong)puVar3 - (ulonglong)*puVar3);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar4 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar4,0,0);
      if (lVar2 - (longlong)piVar4 != 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x00014475b8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar4);
        return;
      }
      this_01 = FPageAllocator::Get();
      FPageAllocator::Free(this_01,piVar4);
      return;
    }
  }
  return;
}

