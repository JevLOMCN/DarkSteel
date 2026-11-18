// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 28

// AllocateIndex @ 14a8b0f20

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
    this = (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x10);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a8b10e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar3;
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
  if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
    this = (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar3;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x14);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a8b1290

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0) {
    this = (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x20);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a8b1450

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)0x0) {
    this = (TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)
       ((longlong)this + (longlong)param_1 * 0x80);
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14a8c4d30

void __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a8c4ee0

void __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
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

// RemoveAtUninitialized @ 14a8c5070

void __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a8c5220

void __thiscall
TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<128,16,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<128,16>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<2,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 14a907070

void __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  undefined4 *puVar9;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar13;
  
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
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
                (0x14,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *)this,
                 iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
                      (0x14,4,iVar10,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *)
                       this,&(this->Data).ArrayNum,piVar1);
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    lVar2 = (longlong)param_1 + -1;
    FVar13 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)this;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
      FVar13 = FVar4;
    }
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      puVar9 = (undefined4 *)((longlong)FVar13 + lVar2 * 0x14);
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar13 + (longlong)this->FirstFreeIndex * 0x14) = iVar5;
        }
        *puVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        puVar9[1] = iVar6;
        puVar9 = puVar9 + -5;
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

// AddUninitialized @ 14a9221f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<20,4,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> FVar7;
  ForElementType<unsigned_int> FVar8;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
                      (0x14,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>
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
    FVar7 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>)0x0) {
      FVar7 = FVar3;
    }
    iVar5 = this->NumFreeIndices + -1;
    iVar2 = *(int *)((uchar *)((longlong)FVar7 + 4) + (longlong)iVar4 * 0x14);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)FVar7 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922460

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar3 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar3 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
    this = (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar3;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x10);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922610

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
    this = (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x10);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a9227d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
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
    this = (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x10 + (longlong)this);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922990

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)0x0) {
    this = (TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x120);
  __return_storage_ptr__->Index = param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922b50

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0) {
    this = (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922d10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
    this = (TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)
       ((longlong)this + (longlong)param_1 * 0x28);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a922ed0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<752,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<752,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)0x0) {
    this = (TSparseArrayBase<752,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<752,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x2f0);
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a923090

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)0x0) {
    this = (TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)
       ((longlong)this + (longlong)param_1 * 0x30);
  __return_storage_ptr__->Index = param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14a923250

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar9;
  
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  iVar7 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  if ((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4) >> (param_1 & 0x1fU)
      & 1) != 0) {
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
  pTVar9 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)pFVar2->Data;
  if (pTVar9 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
    pTVar9 = &this->AllocationFlags;
  }
  puVar3 = (pTVar9->AllocatorInstance).InlineData + (longlong)iVar7 * 4;
  *(uint *)puVar3 = *(uint *)puVar3 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar4 = (this->Data).AllocatorInstance.SecondaryData.Data;
  if (pTVar4 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0) {
    this = (TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
            *)pTVar4;
  }
  __return_storage_ptr__->Pointer =
       (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)
       ((longlong)this + (longlong)param_1 * 0xc0);
  __return_storage_ptr__->Index = param_1;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14a9398b0

void __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a939a40

void __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)(uVar11 * 0x10 + (longlong)FVar14);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x10) = iVar10;
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
      puVar13 = puVar13 + 4;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a939bf0

void __thiscall
TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<288,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<288,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a939da0

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a939f40

void __thiscall
TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<40,4,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a93a0e0

void __thiscall
TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<48,8,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14a93a290

void __thiscall
TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<192,8,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar12 = (this->Data).AllocatorInstance.SecondaryData.Data;
    uVar10 = (ulonglong)param_1;
    pTVar13 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)this;
    if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<192,8>_> *)0x0) {
      pTVar13 = pTVar12;
    }
    bVar4 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar4 | 1U >> 0x20 - bVar4;
    pTVar12 = pTVar13 + uVar10;
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      if (((*(uint *)((pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4) & uVar11)
           == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        pTVar13[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar9;
      }
      (pTVar12->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar6 = -1;
      }
      else {
        iVar6 = this->FirstFreeIndex;
      }
      (pTVar12->_s_1).NextFreeIndex = iVar6;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar9;
      if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar8 = &this->AllocationFlags;
      if (pTVar2 != (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
        pTVar8 = pTVar2;
      }
      iVar6 = iVar9;
      if (iVar9 < 0) {
        iVar6 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      pTVar12 = pTVar12 + 1;
      puVar1 = (pTVar8->AllocatorInstance).InlineData + (longlong)(iVar6 >> 5) * 4;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 14a93a4c0

void __thiscall
TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
::Reserve(TSparseArrayBase<16,8,TInlineSparseArrayAllocator<8,TSparseArrayAllocator<TMemStackAllocator<0>,TMemStackAllocator<0>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar6;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *pTVar7;
  uint uVar8;
  TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *this_00;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    iVar9 = param_1 - iVar4;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                (0x10,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)this,
                 iVar4,piVar2);
    }
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,iVar9,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                       this,piVar1,piVar2);
    pTVar6 = (this->Data).AllocatorInstance.SecondaryData.Data;
    lVar11 = (longlong)param_1 + -1;
    pTVar12 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)this;
    if (pTVar6 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0) {
      pTVar12 = pTVar6;
    }
    if (iVar4 <= lVar11) {
      pTVar6 = pTVar12 + lVar11;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          pTVar12[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar4;
        }
        (pTVar6->_s_1).PrevFreeIndex = -1;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        (pTVar6->_s_1).NextFreeIndex = iVar5;
        pTVar6 = pTVar6 + -1;
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
          TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        pTVar7 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                 (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
        if (pTVar7 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
          pTVar7 = this_00;
        }
        memset(pTVar7,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar8 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar8;
        iVar4 = (uVar10 & 0x1f) - uVar8;
        if (iVar4 != 0) {
          pTVar7 = (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)
                   (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
          if (pTVar7 == (TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)0x0) {
            pTVar7 = this_00;
          }
          puVar3 = (pTVar7->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
          *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::AddUninitialized
                        (this_00,iVar9);
      TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::SetRange
                (this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// Reserve @ 14a93a6c0

void __thiscall
TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<360,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x168,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x168,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x168;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x168) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x168;
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

