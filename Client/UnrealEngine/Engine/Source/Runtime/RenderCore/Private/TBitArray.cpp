// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// Add @ 145d9a180

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::Add
          (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *this,bool param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar3 = AddUninitialized(this,1);
  pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
           (this->AllocatorInstance).SecondaryData.Data;
  if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    this = pTVar2;
  }
  uVar6 = iVar3 >> 0x1f & 0x1f;
  iVar4 = iVar3 + uVar6;
  bVar5 = ((byte)iVar4 & 0x1f) - (char)uVar6;
  puVar1 = (this->AllocatorInstance).InlineData + (longlong)(iVar4 >> 5) * 4;
  *(uint *)puVar1 = ~(1 << (bVar5 & 0x1f)) & *(uint *)puVar1 | (uint)param_1 << (bVar5 & 0x1f);
  return iVar3;
}

// AddUninitialized @ 145da08c0

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
AddUninitialized(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
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
      pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar7 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// AddUninitialized @ 145da0a10

int __thiscall
TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::AddUninitialized
          (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *this,int param_1)

{
  int iVar1;
  uchar *puVar2;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar3;
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
      pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
               (this->AllocatorInstance).SecondaryData.Data;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
        this = pTVar3;
      }
      puVar2 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar7 >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
    }
  }
  return iVar6;
}

// Realloc @ 145dc4b40

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
Realloc(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
        *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<unsigned_int>::ResizeAllocation
            (&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar3 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// Realloc @ 145dc4bb0

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>::Realloc
          (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>::ForElementType<unsigned_int>::ResizeAllocation
            (&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
             (this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar3 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

// SetRange @ 145dccb30

void __thiscall
TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
SetRange(TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *this,int param_1,int param_2,bool param_3)

{
  uint uVar1;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
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
    pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    uVar7 = 0xffffffff >> (0x20 - ((byte)(param_1 + param_2) & 0x1f) & 0x1f);
    pTVar6 = this;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
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
      pTVar2 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(this->AllocatorInstance).SecondaryData.Data;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
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

// Realloc @ 145e20110

void __thiscall
TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>::
Realloc(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
        *this,int param_1)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  ForElementType<unsigned_int>::ResizeAllocation
            (&this->AllocatorInstance,param_1 + 0x1fU >> 5,this->MaxBits + 0x1fU >> 5,4);
  uVar5 = this->NumBits >> 0x1f & 0x1f;
  uVar3 = this->NumBits + uVar5;
  iVar4 = (uVar3 & 0x1f) - uVar5;
  if (iVar4 != 0) {
    pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(this->AllocatorInstance).SecondaryData.Data;
    if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      this = pTVar2;
    }
    puVar1 = (this->AllocatorInstance).InlineData + (longlong)((int)uVar3 >> 5) * 4;
    *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
  }
  return;
}

