// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// Compact @ 145f4e6a0

bool __thiscall
TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  uVar12 = this->NumFreeIndices;
  if (uVar12 == 0) {
    return false;
  }
  pFVar3 = (this->Data).AllocatorInstance.Data;
  iVar13 = (this->Data).ArrayNum;
  uVar18 = iVar13 - uVar12;
  bVar7 = false;
  iVar17 = iVar13;
  iVar11 = this->FirstFreeIndex;
  while (iVar6 = iVar11, iVar6 != -1) {
    iVar11 = *(int *)(pFVar3 + (longlong)iVar6 * 0x48 + 4);
    if (iVar6 < (int)uVar18) {
      bVar5 = (byte)iVar17 & 0x1f;
      uVar19 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      iVar16 = iVar17;
      do {
        uVar19 = uVar19 >> 1 | (uint)((uVar19 & 1) != 0) << 0x1f;
        iVar17 = iVar16 + -1;
        if (((iVar17 < 0) || ((this->AllocationFlags).NumBits <= iVar17)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar14;
        }
        iVar10 = iVar17;
        if (iVar17 < 0) {
          iVar10 = iVar16 + 0x1e;
        }
        iVar16 = iVar17;
      } while ((*(uint *)((longlong)FVar15 + (longlong)(iVar10 >> 5) * 4) & uVar19) == 0);
      memmove(pFVar3 + (longlong)iVar6 * 0x48,pFVar3 + (longlong)iVar17 * 0x48,0x48);
      if (((iVar6 < 0) || ((this->AllocationFlags).NumBits <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar14;
      }
      iVar16 = iVar6;
      if (iVar6 < 0) {
        iVar16 = iVar6 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar16 >> 5) * 4);
      bVar7 = true;
      *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
    }
  }
  uVar19 = 0;
  if (iVar13 <= (this->Data).ArrayNum) {
    uVar19 = ~(uVar18 | uVar12) >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar3 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x48;
  iVar11 = ((this->Data).ArrayNum - uVar18) - uVar12;
  if (iVar11 != 0) {
    memmove(pFVar3,pFVar3 + (longlong)(int)uVar12 * 0x48,(longlong)iVar11 * 0x48);
  }
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = *piVar1 - uVar12;
  this_00 = &this->AllocationFlags;
  if (((((int)uVar18 < 0) || ((int)uVar12 < 0)) || ((this->AllocationFlags).NumBits < iVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar11 = (this->AllocationFlags).NumBits;
  if (iVar13 != iVar11) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar14,uVar18,(uint *)FVar14,iVar13,(iVar11 - uVar18) - uVar12);
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  *piVar1 = *piVar1 - uVar12;
  iVar13 = (this->AllocationFlags).NumBits;
  uVar18 = iVar13 >> 0x1f & 0x1f;
  uVar12 = iVar13 + uVar18;
  iVar13 = (uVar12 & 0x1f) - uVar18;
  if (iVar13 != 0) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    puVar2 = (uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  piVar1 = &(this->Data).ArrayMax;
  this->NumFreeIndices = 0;
  this->FirstFreeIndex = -1;
  iVar13 = (this->Data).ArrayNum;
  if (*piVar1 != iVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
  }
  return bVar7;
}

// AllocateIndex @ 145f815a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar2 = (uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
  *puVar2 = *puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  FVar3 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    this = (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar3;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 145f9fa60

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)FVar14 + uVar11 * 0x18);
    do {
      iVar10 = (int)uVar11;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4) & uVar12) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x18) = iVar10;
      }
      *puVar13 = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar7 = -1;
      }
      else {
        iVar7 = this->FirstFreeIndex;
      }
      puVar13[1] = iVar7;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar10;
      if (((iVar10 < 0) || ((this->AllocationFlags).NumBits <= iVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      puVar13 = puVar13 + 6;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 145fa0db0

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  undefined4 *puVar9;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar13;
  
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 < param_1) {
    iVar10 = param_1 - iVar5;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                (0x18,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)this,
                 iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                      (0x18,8,iVar10,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                       this,&(this->Data).ArrayNum,piVar1);
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    lVar2 = (longlong)param_1 + -1;
    FVar13 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      FVar13 = FVar4;
    }
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      puVar9 = (undefined4 *)((longlong)FVar13 + lVar2 * 0x18);
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar13 + (longlong)this->FirstFreeIndex * 0x18) = iVar5;
        }
        *puVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        puVar9[1] = iVar6;
        puVar9 = puVar9 + -6;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar10 == param_1) {
      (this->AllocationFlags).NumBits = iVar10;
      uVar11 = iVar10 + 0x1fU >> 5;
      if (iVar10 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar11) {
          TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar11,4);
          (this->AllocationFlags).MaxBits = uVar11 << 5;
        }
        FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          FVar7 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar7,0,(ulonglong)uVar11 << 2);
        iVar5 = (this->AllocationFlags).NumBits;
        uVar8 = iVar5 >> 0x1f & 0x1f;
        uVar11 = iVar5 + uVar8;
        iVar5 = (uVar11 & 0x1f) - uVar8;
        if (iVar5 != 0) {
          FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<unsigned_int>)0x0) {
            FVar7 = (ForElementType<unsigned_int>)this_00;
          }
          puVar3 = (uint *)((longlong)FVar7 + (longlong)((int)uVar11 >> 5) * 4);
          *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
        }
      }
    }
    else if (-1 < iVar10) {
      iVar5 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                        (this_00,iVar10);
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetRange
                (this_00,iVar5,iVar10,false);
    }
  }
  return;
}

