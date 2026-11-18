// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 15

// AddUninitialized @ 142aea730

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar7;
  ForElementType<unsigned_int> FVar8;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
                      (0x28,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar5 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                      (&this->AllocationFlags,1);
    FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    }
    puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar7 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      FVar7 = FVar3;
    }
    iVar5 = this->NumFreeIndices + -1;
    iVar2 = *(int *)((uchar *)((longlong)FVar7 + 4) + (longlong)iVar4 * 0x28);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)FVar7 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 142aea830

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar3;
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
  if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
    this = (TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar3;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x28);
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 142b145b0

void __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)FVar14 + uVar11 * 0x28);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x28) = iVar10;
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
      puVar13 = puVar13 + 10;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 142b16eb0

void __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<40,4,TInlineSparseArrayAllocator<1,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  undefined4 *puVar9;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> FVar13;
  
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
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
                (0x28,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *)this,
                 iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
                      (0x28,4,iVar10,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *)
                       this,&(this->Data).ArrayNum,piVar1);
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    lVar2 = (longlong)param_1 + -1;
    FVar13 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)this;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>)0x0) {
      FVar13 = FVar4;
    }
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      puVar9 = (undefined4 *)((longlong)FVar13 + lVar2 * 0x28);
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar13 + (longlong)this->FirstFreeIndex * 0x28) = iVar5;
        }
        *puVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        puVar9[1] = iVar6;
        puVar9 = puVar9 + -10;
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

// Reserve @ 142b17090

void __thiscall
TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar5 = (this->Data).ArrayNum;
  if (iVar5 < param_1) {
    iVar10 = param_1 - iVar5;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,param_1,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,4,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar4 = (this->Data).AllocatorInstance.Data;
    lVar2 = (longlong)param_1 + -1;
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      pFVar9 = pFVar4 + lVar2 * 0x28;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar4 + (longlong)this->FirstFreeIndex * 0x28) = iVar5;
        }
        *(undefined4 *)pFVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pFVar9 + 4) = iVar6;
        pFVar9 = pFVar9 + -0x28;
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
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
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
      iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar5,iVar10,false);
    }
  }
  return;
}

// Shrink @ 142b21340

void __thiscall
TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar8 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar10 = this->FirstFreeIndex;
      uVar9 = (ulonglong)uVar10;
      pFVar5 = (this->Data).AllocatorInstance.Data;
      while (uVar10 != 0xffffffff) {
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 0x18;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 0x18) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 0x18 + 4) = iVar8;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar9;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar10 != 0) {
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x18;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 0x18,(longlong)iVar8 * 0x18);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar8 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// Shrink @ 142b214b0

void __thiscall
TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar10 = this->FirstFreeIndex;
      uVar9 = (ulonglong)uVar10;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar10 != 0xffffffff) {
        lVar7 = (longlong)(int)uVar9;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 * 0x30 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 * 0x30 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7 * 0x30);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x30) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x30 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar9;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar10 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x30;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x30,(longlong)iVar6 * 0x30);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 142b21630

void __thiscall
TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar10 = this->FirstFreeIndex;
      uVar9 = (ulonglong)uVar10;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar10 != 0xffffffff) {
        lVar7 = (longlong)(int)uVar9 * 0x60;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x60) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x60 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar9;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar10 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x60;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x60,(longlong)iVar6 * 0x60);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Compact @ 142b56b10

bool __thiscall
TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  FScriptContainerElement *_Dst;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar14 = (this->Data).AllocatorInstance.Data;
  iVar13 = (this->Data).ArrayNum;
  uVar19 = iVar13 - uVar3;
  bVar9 = false;
  iVar16 = iVar13;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar8 = iVar4;
      if (iVar8 == -1) {
        uVar17 = 0;
        if (iVar13 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x50;
        iVar13 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar3 * 0x50,(longlong)iVar13 * 0x50);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar13 = (this->Data).ArrayNum;
        if (*piVar1 != iVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
        }
        return bVar9;
      }
      _Dst = pFVar14 + (longlong)iVar8 * 0x50;
      iVar4 = *(int *)(_Dst + 4);
    } while ((int)uVar19 <= iVar8);
    bVar7 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar7 | 1U >> 0x20 - bVar7;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar5 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar5;
      }
      iVar12 = iVar16;
      if (iVar16 < 0) {
        iVar12 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar12 >> 5) * 4) & uVar17) == 0);
    memmove(_Dst,pFVar14 + (longlong)iVar16 * 0x50,0x50);
    if (((iVar8 < 0) || ((this->AllocationFlags).NumBits <= iVar8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) break;
    FVar5 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar5 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar5;
    }
    iVar15 = iVar8;
    if (iVar8 < 0) {
      iVar15 = iVar8 + 0x1f;
    }
    bVar9 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  }
  pcVar6 = (code *)swi(3);
  uVar10 = (*pcVar6)();
  return (bool)uVar10;
}

// Reserve @ 142b64860

void __thiscall
TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar4 = (this->Data).ArrayNum;
  if (iVar4 < param_1) {
    iVar9 = param_1 - iVar4;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x50;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x50) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x50;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar9 == param_1) {
      (this->AllocationFlags).NumBits = iVar9;
      uVar10 = iVar9 + 0x1fU >> 5;
      if (iVar9 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar10) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar6,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar7 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar7;
        iVar4 = (uVar10 & 0x1f) - uVar7;
        if (iVar4 != 0) {
          FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar6 == (ForElementType<unsigned_int>)0x0) {
            FVar6 = (ForElementType<unsigned_int>)this_00;
          }
          puVar2 = (uint *)((longlong)FVar6 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar9);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// RemoveAtUninitialized @ 142ba41e0

void __thiscall
TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
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
  FScriptContainerElement *pFVar13;
  
  if (param_2 != 0) {
    pFVar2 = (this->Data).AllocatorInstance.Data;
    uVar11 = (ulonglong)param_1;
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    pFVar13 = pFVar2 + uVar11 * 0x78;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x78) = iVar10;
      }
      *(undefined4 *)pFVar13 = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar7 = -1;
      }
      else {
        iVar7 = this->FirstFreeIndex;
      }
      *(int *)(pFVar13 + 4) = iVar7;
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
      pFVar13 = pFVar13 + 0x78;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 142ba54e0

void __thiscall
TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar4 = (this->Data).ArrayNum;
  if (iVar4 < param_1) {
    iVar9 = param_1 - iVar4;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x78;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x78) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x78;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar9 == param_1) {
      (this->AllocationFlags).NumBits = iVar9;
      uVar10 = iVar9 + 0x1fU >> 5;
      if (iVar9 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar10) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar6,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar7 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar7;
        iVar4 = (uVar10 & 0x1f) - uVar7;
        if (iVar4 != 0) {
          FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar6 == (ForElementType<unsigned_int>)0x0) {
            FVar6 = (ForElementType<unsigned_int>)this_00;
          }
          puVar2 = (uint *)((longlong)FVar6 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar9);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// Reserve @ 142ba56b0

void __thiscall
TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar4 = (this->Data).ArrayNum;
  if (iVar4 < param_1) {
    iVar9 = param_1 - iVar4;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0xf0;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0xf0) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0xf0;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar9 == param_1) {
      (this->AllocationFlags).NumBits = iVar9;
      uVar10 = iVar9 + 0x1fU >> 5;
      if (iVar9 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar10) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar6,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar7 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar7;
        iVar4 = (uVar10 & 0x1f) - uVar7;
        if (iVar4 != 0) {
          FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar6 == (ForElementType<unsigned_int>)0x0) {
            FVar6 = (ForElementType<unsigned_int>)this_00;
          }
          puVar2 = (uint *)((longlong)FVar6 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar9);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// Shrink @ 142bafa30

void __thiscall
TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar10 = this->FirstFreeIndex;
      uVar9 = (ulonglong)uVar10;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar10 != 0xffffffff) {
        lVar7 = (longlong)(int)uVar9 * 0x78;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x78) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x78 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar9;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar10 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x78;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x78,(longlong)iVar6 * 0x78);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 142bafb90

void __thiscall
TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar10 = this->FirstFreeIndex;
      uVar9 = (ulonglong)uVar10;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar10 != 0xffffffff) {
        lVar7 = (longlong)(int)uVar9 * 0xf0;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0xf0) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0xf0 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar9;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar10 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xf0;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0xf0,(longlong)iVar6 * 0xf0);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

