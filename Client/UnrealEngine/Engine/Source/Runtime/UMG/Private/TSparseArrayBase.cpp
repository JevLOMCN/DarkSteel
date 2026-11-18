// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// AllocateIndex @ 14690bc70

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<20,4,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  ForElementType<unsigned_int> FVar9;
  
  if (param_1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar2 = &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  FVar9 = *pFVar2;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if ((*(uint *)((longlong)FVar9 + (longlong)iVar7 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  FVar9 = *pFVar2;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar3 = (uint *)((longlong)FVar9 + (longlong)iVar7 * 4);
  *puVar3 = *puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  FVar4 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
    this = (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x14);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14690be30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<20,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  ForElementType<unsigned_int> FVar9;
  
  if (param_1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar2 = &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  FVar9 = *pFVar2;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if ((*(uint *)((longlong)FVar9 + (longlong)iVar7 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  FVar9 = *pFVar2;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar3 = (uint *)((longlong)FVar9 + (longlong)iVar7 * 4);
  *puVar3 = *puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  FVar4 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
    this = (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x14);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14690bff0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<104,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<104,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x68;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14693b6b0

void __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)FVar14 + uVar11 * 0x14);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x14) = iVar10;
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
      puVar13 = puVar13 + 5;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14693b850

void __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)FVar14 + uVar11 * 0x14);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x14) = iVar10;
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
      puVar13 = puVar13 + 5;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Shrink @ 146944ce0

void __thiscall
TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *this)

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
        lVar7 = (longlong)(int)uVar9 * 0x38;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x38) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x38 + 4) = iVar6;
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
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x38;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x38,(longlong)iVar6 * 0x38);
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
              (0x38,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

