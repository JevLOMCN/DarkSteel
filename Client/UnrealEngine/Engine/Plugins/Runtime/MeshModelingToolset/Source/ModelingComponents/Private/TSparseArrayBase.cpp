// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// InsertUninitialized @ 14ca971c0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FSparseArrayAllocationInfo *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar14 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 0x40) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 0x40 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 0x40) = iVar12;
        }
        this->FirstFreeIndex = iVar12;
        iVar4 = (this->AllocationFlags).NumBits;
        iVar15 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        if ((iVar4 == 0) || (iVar15 != (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5)) {
          TBitArray<FDefaultBitArrayAllocator>::Reserve(this_00,iVar4 + 1);
          iVar7 = (this->AllocationFlags).NumBits + 1;
          (this->AllocationFlags).NumBits = iVar7;
          uVar11 = iVar7 >> 0x1f & 0x1f;
          uVar8 = iVar7 + uVar11;
          iVar7 = (uVar8 & 0x1f) - uVar11;
          if (iVar7 != 0) {
            FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
            FVar10 = (ForElementType<unsigned_int>)this_00;
            if (FVar13 != (ForElementType<unsigned_int>)0x0) {
              FVar10 = FVar13;
            }
            puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
            *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
          }
        }
        else {
          (this->AllocationFlags).NumBits = iVar4 + 1;
        }
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)this_00;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar13;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)iVar15 * 4);
        *puVar3 = *puVar3 & ~(1 << ((byte)iVar4 & 0x1f));
        if ((iVar4 != iVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags.Add(false) == FreeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0x17a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
          return pFVar9;
        }
        this->NumFreeIndices = this->NumFreeIndices + 1;
        iVar12 = *piVar2;
      } while (iVar12 < (this->Data).ArrayNum);
    }
  }
  if (((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar9;
  }
  FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)this_00;
  }
  if (((*(uint *)((longlong)FVar13 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4
                 ) >> (param_1 & 0x1fU) & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x184,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar9;
  }
  this->NumFreeIndices = this->NumFreeIndices + -1;
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 0x40);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 0x40 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 0x40 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 0x40) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Reserve @ 14caa0190

void __thiscall
TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::Reserve
          (TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *this,int param_1)

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
                (0x28,8,param_1,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
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

// Reserve @ 14caa0360

void __thiscall
TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::Reserve
          (TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
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
                (0x40,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar6 = pFVar3 + lVar11 * 0x40;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x40) = iVar4;
        }
        *(undefined4 *)pFVar6 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar6 + 4) = iVar5;
        pFVar6 = pFVar6 + -0x40;
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
        FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar7 == (ForElementType<unsigned_int>)0x0) {
          FVar7 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar7,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar8 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar8;
        iVar4 = (uVar10 & 0x1f) - uVar8;
        if (iVar4 != 0) {
          FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<unsigned_int>)0x0) {
            FVar7 = (ForElementType<unsigned_int>)this_00;
          }
          puVar2 = (uint *)((longlong)FVar7 + (longlong)((int)uVar10 >> 5) * 4);
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

// AllocateIndex @ 14cae9630

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<224,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<224,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  ForElementType<unsigned_int> FVar7;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  if (((this->Data).ArrayNum <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if (((*(uint *)((longlong)FVar7 + (longlong)iVar5 * 4) >> (param_1 & 0x1fU) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSparseArrayAllocationInfo *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (uint *)((longlong)FVar7 + (longlong)iVar5 * 4);
  *puVar2 = *puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xe0;
  return __return_storage_ptr__;
}

// Reserve @ 14cb31d20

void __thiscall
TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::Reserve
          (TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  int iVar7;
  uint uVar8;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  iVar7 = (this->Data).ArrayNum;
  lVar9 = (longlong)param_1;
  if (iVar7 < param_1) {
    iVar10 = param_1 - iVar7;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar1 = &(this->Data).ArrayMax;
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)this,iVar7,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar7 = param_1;
    while (lVar9 = lVar9 + -1, iVar4 <= lVar9) {
      iVar7 = iVar7 + -1;
      if (this->NumFreeIndices != 0) {
        *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 8) = iVar7;
      }
      *(undefined4 *)(pFVar3 + lVar9 * 8) = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pFVar3 + lVar9 * 8 + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
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
        FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar6,0,(ulonglong)uVar11 << 2);
        iVar7 = (this->AllocationFlags).NumBits;
        uVar8 = iVar7 >> 0x1f & 0x1f;
        uVar11 = iVar7 + uVar8;
        iVar7 = (uVar11 & 0x1f) - uVar8;
        if (iVar7 != 0) {
          FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar6 == (ForElementType<unsigned_int>)0x0) {
            FVar6 = (ForElementType<unsigned_int>)this_00;
          }
          puVar2 = (uint *)((longlong)FVar6 + (longlong)((int)uVar11 >> 5) * 4);
          *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
        }
      }
    }
    else if (-1 < iVar10) {
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar10);
      TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar7,iVar10,false);
    }
  }
  return;
}

// Reserve @ 14cb31ee0

void __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::Reserve
          (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *this,int param_1)

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
                (0x18,8,param_1,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar4 = (this->Data).AllocatorInstance.Data;
    lVar2 = (longlong)param_1 + -1;
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      pFVar9 = pFVar4 + lVar2 * 0x18;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar4 + (longlong)this->FirstFreeIndex * 0x18) = iVar5;
        }
        *(undefined4 *)pFVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pFVar9 + 4) = iVar6;
        pFVar9 = pFVar9 + -0x18;
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

