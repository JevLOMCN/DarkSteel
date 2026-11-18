// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// AllocateIndex @ 1426b1410

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<7,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<7,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
    this = (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<7,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x10 + (longlong)this);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 1426c2190

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<7,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::InsertUninitialized
          (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<7,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  byte bVar8;
  int iVar9;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> FVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  
  piVar1 = &(this->Data).ArrayNum;
  FVar10 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)this;
  if (param_1 < *piVar1) {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
      FVar10 = FVar3;
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
              (0x10,8,(param_1 - *piVar1) + 1,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)this,
               piVar1,&(this->Data).ArrayMax);
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar11 = (this->AllocationFlags).NumBits;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
      FVar10 = FVar3;
    }
    if (iVar11 < *piVar1) {
      do {
        *(undefined4 *)((longlong)FVar10 + (longlong)iVar11 * 0x10) = 0xffffffff;
        *(int *)((uchar *)((longlong)FVar10 + 4) + (longlong)iVar11 * 0x10) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar10 + (longlong)this->FirstFreeIndex * 0x10) = iVar11;
        }
        this->FirstFreeIndex = iVar11;
        iVar6 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
                AddUninitialized(&this->AllocationFlags,1);
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)&this->AllocationFlags;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar13;
        }
        bVar8 = (byte)iVar6 & 0x1f;
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = iVar6 + 0x1f;
          bVar8 = bVar8 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar12 + (longlong)(iVar9 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar8 & 0x1f));
        if ((iVar6 != iVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags.Add(false) == FreeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0x17a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
          return pFVar7;
        }
        this->NumFreeIndices = this->NumFreeIndices + 1;
        iVar11 = (this->AllocationFlags).NumBits;
      } while (iVar11 < *piVar1);
    }
  }
  if (((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar7;
  }
  FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if (((*(uint *)((longlong)FVar13 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4
                 ) >> (param_1 & 0x1fU) & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x184,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar7;
  }
  this->NumFreeIndices = this->NumFreeIndices + -1;
  iVar11 = *(int *)((longlong)FVar10 + (longlong)param_1 * 0x10);
  iVar6 = *(int *)((uchar *)((longlong)FVar10 + 4) + (longlong)param_1 * 0x10);
  if (iVar11 == -1) {
    this->FirstFreeIndex = iVar6;
  }
  else {
    *(int *)((uchar *)((longlong)FVar10 + 4) + (longlong)iVar11 * 0x10) = iVar6;
  }
  if (iVar6 != -1) {
    *(int *)((longlong)FVar10 + (longlong)iVar6 * 0x10) = iVar11;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14270cd30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<60,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<60,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x3c;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14270cee0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x58;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14277b730

void __thiscall
TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x58;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x58) = iVar10;
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
      pFVar13 = pFVar13 + 0x58;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14277b8b0

void __thiscall
TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x80;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x80) = iVar10;
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
      pFVar13 = pFVar13 + 0x80;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 142a05fc0

void __thiscall
TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this,int param_1)

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

