// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 4

// AllocateIndex @ 1471f0d90

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<288,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<288,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
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
  pFVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x120;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1471f0f30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xf0;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 147245150

void __thiscall
TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
          (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this,int param_1,int param_2)

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
    pFVar13 = pFVar2 + uVar11 * 8;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 8) = iVar10;
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
      pFVar13 = pFVar13 + 8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Shrink @ 14724e010

void __thiscall
TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  
  iVar9 = (this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (iVar9 == 0) {
LAB_14724e066:
    uVar10 = 0;
  }
  else {
    FVar11 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)this_00;
    }
    uVar14 = iVar9 + 0x1fU >> 5;
    uVar12 = (ulonglong)uVar14;
    uVar10 = 0xffffffff >> (-(char)iVar9 & 0x1fU);
    do {
      if (uVar14 == 0) goto LAB_14724e066;
      uVar14 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar14;
      uVar13 = uVar10 & *(uint *)((longlong)FVar11 + uVar12 * 4);
      uVar10 = 0xffffffff;
    } while (uVar13 == 0);
    uVar12 = (ulonglong)uVar13 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = uVar14 * 0x20 + (int)lVar6;
  }
  if ((int)uVar10 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar14 = this->FirstFreeIndex;
      uVar12 = (ulonglong)uVar14;
      pFVar5 = (this->Data).AllocatorInstance.Data;
      while (uVar14 != 0xffffffff) {
        pFVar2 = pFVar5 + (longlong)(int)uVar12 * 8;
        if ((int)uVar12 < (int)uVar10) {
          uVar12 = (ulonglong)*(uint *)(pFVar2 + 4);
        }
        else {
          iVar9 = *(int *)(pFVar2 + 4);
          uVar12 = (ulonglong)iVar9;
          iVar15 = *(int *)pFVar2;
          if (iVar9 != -1) {
            *(int *)(pFVar5 + uVar12 * 8) = iVar15;
          }
          if (iVar15 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar9;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar15 * 8 + 4) = iVar9;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar14 = (uint)uVar12;
      }
    }
    uVar14 = (this->Data).ArrayNum - uVar10;
    if ((-1 < (int)(~uVar10 & ~uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar14 != 0) {
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
      iVar9 = ((this->Data).ArrayNum - uVar14) - uVar10;
      if (iVar9 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar14 * 8,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar14;
    }
    iVar9 = (this->AllocationFlags).NumBits;
    iVar15 = iVar9 - uVar10;
    if (((((int)uVar10 < 0) || (iVar15 < 0)) || ((this->AllocationFlags).NumBits < iVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3ee,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = (this->AllocationFlags).NumBits;
    if (iVar9 != iVar4) {
      FVar11 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)this_00;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar11;
      }
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)FVar16,uVar10,(uint *)FVar16,iVar9,(iVar4 - iVar15) - uVar10);
    }
    piVar1 = &(this->AllocationFlags).NumBits;
    *piVar1 = *piVar1 - iVar15;
    iVar9 = (this->AllocationFlags).NumBits;
    uVar14 = iVar9 >> 0x1f & 0x1f;
    uVar10 = iVar9 + uVar14;
    iVar9 = (uVar10 & 0x1f) - uVar14;
    if (iVar9 != 0) {
      FVar11 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)this_00;
      }
      puVar3 = (uint *)((longlong)FVar11 + (longlong)((int)uVar10 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  }
  iVar9 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar9,(ForAnyElementType *)this,iVar9,piVar1);
  }
  return;
}

