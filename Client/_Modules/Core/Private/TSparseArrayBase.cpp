// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 159

// AddUninitialized @ 141486310

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->AllocationFlags,1);
    FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  }
  else {
    iVar4 = this->FirstFreeIndex;
    iVar5 = this->NumFreeIndices + -1;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x18 + 4);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141486970

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x18;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1414adde0

void __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x18;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x18) = iVar10;
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
      pFVar13 = pFVar13 + 0x18;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AddUninitialized @ 1415a8f50

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_>::AddUninitialized
          (TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  
  if (this->NumFreeIndices == 0) {
    uVar6 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                      (0x10,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar7 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(&this->AllocationFlags,1);
    uVar9 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar9;
    pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar7 >> 5);
    *(uint *)pTVar2->Pad =
         *(uint *)pTVar2->Pad & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    uVar6 = this->FirstFreeIndex;
    iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[(int)uVar6].Pad + 4);
    iVar7 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar3;
    this->NumFreeIndices = iVar7;
    if (iVar7 != 0) {
      pTVar1 = (this->Data).AllocatorInstance.InlineData + iVar3;
      pTVar1->Pad[0] = 0xff;
      pTVar1->Pad[1] = 0xff;
      pTVar1->Pad[2] = 0xff;
      pTVar1->Pad[3] = 0xff;
    }
  }
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Data).ArrayNum <= (int)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar7].Pad >> (uVar6 & 0x1f) &
       1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + iVar7;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
  __return_storage_ptr__->Index = uVar6;
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.InlineData + (int)uVar6;
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9160

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar3;
  int iVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar5;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                      (0x10,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              (&this->AllocationFlags,false);
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar5 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
      FVar5 = FVar3;
    }
    iVar2 = *(int *)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0x10);
    iVar1 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)FVar5 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9230

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x10 + 4);
    iVar1 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a92e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::AddUninitialized
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  
  if (this->NumFreeIndices == 0) {
    uVar6 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                      (0x18,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar7 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(&this->AllocationFlags,1);
    uVar9 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar9;
    pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar7 >> 5);
    *(uint *)pTVar2->Pad =
         *(uint *)pTVar2->Pad & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    uVar6 = this->FirstFreeIndex;
    iVar7 = this->NumFreeIndices + -1;
    iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[(int)uVar6].Pad + 4);
    this->FirstFreeIndex = iVar3;
    this->NumFreeIndices = iVar7;
    if (iVar7 != 0) {
      pTVar1 = (this->Data).AllocatorInstance.InlineData + iVar3;
      pTVar1->Pad[0] = 0xff;
      pTVar1->Pad[1] = 0xff;
      pTVar1->Pad[2] = 0xff;
      pTVar1->Pad[3] = 0xff;
    }
  }
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Data).ArrayNum <= (int)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar7].Pad >> (uVar6 & 0x1f) &
       1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + iVar7;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
  __return_storage_ptr__->Index = uVar6;
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.InlineData + (int)uVar6;
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a94f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar3;
  int iVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar5;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                      (0x18,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              (&this->AllocationFlags,false);
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar5 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      FVar5 = FVar3;
    }
    iVar1 = this->NumFreeIndices + -1;
    iVar2 = *(int *)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0x18);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)FVar5 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a95c0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::AddUninitialized
          (TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  
  if (this->NumFreeIndices == 0) {
    uVar6 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
                      (0x20,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar7 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(&this->AllocationFlags,1);
    uVar9 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar9;
    pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar7 >> 5);
    *(uint *)pTVar2->Pad =
         *(uint *)pTVar2->Pad & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    uVar6 = this->FirstFreeIndex;
    iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[(int)uVar6].Pad + 4);
    iVar7 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar3;
    this->NumFreeIndices = iVar7;
    if (iVar7 != 0) {
      pTVar1 = (this->Data).AllocatorInstance.InlineData + iVar3;
      pTVar1->Pad[0] = 0xff;
      pTVar1->Pad[1] = 0xff;
      pTVar1->Pad[2] = 0xff;
      pTVar1->Pad[3] = 0xff;
    }
  }
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Data).ArrayNum <= (int)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar7].Pad >> (uVar6 & 0x1f) &
       1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + iVar7;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
  __return_storage_ptr__->Index = uVar6;
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.InlineData + (int)uVar6;
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a97d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar3;
  int iVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar5;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
                      (0x20,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              (&this->AllocationFlags,false);
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar5 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
      FVar5 = FVar3;
    }
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + (longlong)FVar5);
    iVar1 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + (longlong)FVar5) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a98a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x20 + 4);
    iVar1 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x20) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9950

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::AddUninitialized
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  
  if (this->NumFreeIndices == 0) {
    uVar6 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                      (0x28,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar7 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(&this->AllocationFlags,1);
    uVar9 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar9;
    pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar7 >> 5);
    *(uint *)pTVar2->Pad =
         *(uint *)pTVar2->Pad & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    uVar6 = this->FirstFreeIndex;
    iVar7 = this->NumFreeIndices + -1;
    iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[(int)uVar6].Pad + 4);
    this->FirstFreeIndex = iVar3;
    this->NumFreeIndices = iVar7;
    if (iVar7 != 0) {
      pTVar1 = (this->Data).AllocatorInstance.InlineData + iVar3;
      pTVar1->Pad[0] = 0xff;
      pTVar1->Pad[1] = 0xff;
      pTVar1->Pad[2] = 0xff;
      pTVar1->Pad[3] = 0xff;
    }
  }
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Data).ArrayNum <= (int)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar7].Pad >> (uVar6 & 0x1f) &
       1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + iVar7;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
  __return_storage_ptr__->Index = uVar6;
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.InlineData + (int)uVar6;
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9b60

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar3;
  int iVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar5;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                      (0x28,8,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>
                                 *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              (&this->AllocationFlags,false);
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar5 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      FVar5 = FVar3;
    }
    iVar1 = this->NumFreeIndices + -1;
    iVar2 = *(int *)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0x28);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)FVar5 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9c30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_>::AddUninitialized
          (TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  uint uVar9;
  
  if (this->NumFreeIndices == 0) {
    uVar6 = UE::Core::Private::
            ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                      (0xc,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>
                                *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    iVar7 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(&this->AllocationFlags,1);
    uVar9 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar9;
    pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar7 >> 5);
    *(uint *)pTVar2->Pad =
         *(uint *)pTVar2->Pad & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f));
  }
  else {
    uVar6 = this->FirstFreeIndex;
    iVar7 = this->NumFreeIndices + -1;
    iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[(int)uVar6].Pad + 4);
    this->FirstFreeIndex = iVar3;
    this->NumFreeIndices = iVar7;
    if (iVar7 != 0) {
      pTVar1 = (this->Data).AllocatorInstance.InlineData + iVar3;
      pTVar1->Pad[0] = 0xff;
      pTVar1->Pad[1] = 0xff;
      pTVar1->Pad[2] = 0xff;
      pTVar1->Pad[3] = 0xff;
    }
  }
  if (((int)uVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if (((this->Data).ArrayNum <= (int)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < GetMaxIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar7].Pad >> (uVar6 & 0x1f) &
       1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  if ((((int)uVar6 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar8;
  }
  pTVar2 = (this->AllocationFlags).AllocatorInstance.InlineData + iVar7;
  *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
  __return_storage_ptr__->Index = uVar6;
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.InlineData + (int)uVar6;
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9e40

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AddUninitialized(TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar3;
  int iVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar5;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                      (0xc,4,1,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>
                                *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Add
              (&this->AllocationFlags,false);
  }
  else {
    FVar3 = (this->Data).AllocatorInstance.SecondaryData;
    iVar4 = this->FirstFreeIndex;
    FVar5 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)this;
    if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
      FVar5 = FVar3;
    }
    iVar1 = this->NumFreeIndices + -1;
    iVar2 = *(int *)((uchar *)((longlong)FVar5 + 4) + (longlong)iVar4 * 0xc);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)FVar5 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AddUninitialized @ 1415a9f10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    iVar1 = this->NumFreeIndices + -1;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0xc + 4);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa120

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
    this = (TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x10 + (longlong)this);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa2e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa490

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa640

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x18;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa7e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    this = (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aa9a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x1c;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aab50

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
    this = (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aad10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
    this = (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x20 + (longlong)this);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415aaed0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x20;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415ab080

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    this = (TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x28);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415ab240

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x28;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415ab3e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x50;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415ab580

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
    this = (TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0xc);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1415ab740

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0xc;
  return __return_storage_ptr__;
}

// IsAllocated @ 1415c9350

bool __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::IsAllocated(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsAllocated @ 1415c93e0

bool __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::IsAllocated
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData
                   [(int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5].Pad >> (param_1 & 0x1fU) & 1)
         != 0;
}

// IsAllocated @ 1415c9460

bool __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::IsAllocated(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsAllocated @ 1415c94f0

bool __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::IsAllocated(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsAllocated @ 1415c9580

bool __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::IsAllocated(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsAllocated @ 1415c9610

bool __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::IsAllocated
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData
                   [(int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5].Pad >> (param_1 & 0x1fU) & 1)
         != 0;
}

// IsAllocated @ 1415c9690

bool __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::IsAllocated(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsAllocated @ 1415c9720

bool __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::IsAllocated(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsValidIndex @ 1415ca100

bool __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::IsValidIndex
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->AllocationFlags).NumBits)) {
    if ((this->AllocationFlags).NumBits <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[(uint)param_1 >> 5].Pad >>
         (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsValidIndex @ 1415ca180

bool __thiscall
TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::IsValidIndex
          (TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->AllocationFlags).NumBits)) {
    if ((this->AllocationFlags).NumBits <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[(uint)param_1 >> 5].Pad >>
         (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsValidIndex @ 1415ca200

bool __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::IsValidIndex
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->AllocationFlags).NumBits)) {
    if ((this->AllocationFlags).NumBits <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[(uint)param_1 >> 5].Pad >>
         (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// RemoveAtUninitialized @ 1415e2e70

void __thiscall
TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
          (TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *pTVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    pTVar10 = (this->Data).AllocatorInstance.InlineData + uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar5 >> 5].Pad & uVar9)
           == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar7;
      }
      pTVar10->Pad[0] = 0xff;
      pTVar10->Pad[1] = 0xff;
      pTVar10->Pad[2] = 0xff;
      pTVar10->Pad[3] = 0xff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pTVar10->Pad + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      pTVar10 = pTVar10 + 1;
      uVar6 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pTVar1 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar5 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e2ff0

void __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
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

// RemoveAtUninitialized @ 1415e31a0

void __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x10;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x10) = iVar10;
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
      pFVar13 = pFVar13 + 0x10;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3320

void __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x10;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x10) = iVar10;
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
      pFVar13 = pFVar13 + 0x10;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e34a0

void __thiscall
TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x18;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x18) = iVar10;
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
      pFVar13 = pFVar13 + 0x18;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3620

void __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *pTVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    pTVar10 = (this->Data).AllocatorInstance.InlineData + uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar5 >> 5].Pad & uVar9)
           == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar7;
      }
      pTVar10->Pad[0] = 0xff;
      pTVar10->Pad[1] = 0xff;
      pTVar10->Pad[2] = 0xff;
      pTVar10->Pad[3] = 0xff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pTVar10->Pad + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      pTVar10 = pTVar10 + 1;
      uVar6 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pTVar1 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar5 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e37a0

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
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

// RemoveAtUninitialized @ 1415e3940

void __thiscall
TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *pTVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    pTVar10 = (this->Data).AllocatorInstance.InlineData + uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar5 >> 5].Pad & uVar9)
           == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar7;
      }
      pTVar10->Pad[0] = 0xff;
      pTVar10->Pad[1] = 0xff;
      pTVar10->Pad[2] = 0xff;
      pTVar10->Pad[3] = 0xff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pTVar10->Pad + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      pTVar10 = pTVar10 + 1;
      uVar6 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pTVar1 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar5 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3ac0

void __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)(uVar11 * 0x20 + (longlong)FVar14);
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
        *(int *)((longlong)this->FirstFreeIndex * 0x20 + (longlong)FVar14) = iVar10;
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
      puVar13 = puVar13 + 8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3c70

void __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)(uVar11 * 0x20 + (longlong)FVar14);
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
        *(int *)((longlong)this->FirstFreeIndex * 0x20 + (longlong)FVar14) = iVar10;
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
      puVar13 = puVar13 + 8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3e20

void __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x20;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x20) = iVar10;
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
      pFVar13 = pFVar13 + 0x20;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e3fa0

void __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *pTVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    pTVar10 = (this->Data).AllocatorInstance.InlineData + uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar5 >> 5].Pad & uVar9)
           == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar7;
      }
      pTVar10->Pad[0] = 0xff;
      pTVar10->Pad[1] = 0xff;
      pTVar10->Pad[2] = 0xff;
      pTVar10->Pad[3] = 0xff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pTVar10->Pad + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      pTVar10 = pTVar10 + 1;
      uVar6 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pTVar1 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar5 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e4120

void __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
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

// RemoveAtUninitialized @ 1415e42c0

void __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x28;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x28) = iVar10;
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
      pFVar13 = pFVar13 + 0x28;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e4440

void __thiscall
TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
          (TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_> *this,int param_1,int param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *pTVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_1;
    bVar3 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    pTVar10 = (this->Data).AllocatorInstance.InlineData + uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if (((*(uint *)(this->AllocationFlags).AllocatorInstance.InlineData[iVar5 >> 5].Pad & uVar9)
           == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar7;
      }
      pTVar10->Pad[0] = 0xff;
      pTVar10->Pad[1] = 0xff;
      pTVar10->Pad[2] = 0xff;
      pTVar10->Pad[3] = 0xff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(pTVar10->Pad + 4) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = iVar7;
      if (((iVar7 < 0) || ((this->AllocationFlags).NumBits <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      pTVar10 = pTVar10 + 1;
      uVar6 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      pTVar1 = (this->AllocationFlags).AllocatorInstance.InlineData + (iVar5 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & uVar6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e45c0

void __thiscall
TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)FVar14 + uVar11 * 0xc);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0xc) = iVar10;
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
      puVar13 = puVar13 + 3;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1415e4760

void __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0xc;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0xc) = iVar10;
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
      pFVar13 = pFVar13 + 0xc;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 1415e8970

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_>::Reserve
          (TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<TFixedAllocator<2>_> *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *pTVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < param_1) {
    iVar10 = param_1 - iVar12;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                (0x10,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)this,
                 iVar12,piVar2);
    }
    lVar11 = (longlong)param_1 + -1;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                       (0x10,4,iVar10,
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)
                        this,piVar1,piVar2);
    if (iVar12 <= lVar11) {
      pTVar7 = (this->Data).AllocatorInstance.InlineData + (longlong)param_1 + -1;
      lVar11 = (lVar11 - iVar12) + 1;
      iVar12 = param_1;
      do {
        iVar12 = iVar12 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar12;
        }
        pTVar7->Pad[0] = 0xff;
        pTVar7->Pad[1] = 0xff;
        pTVar7->Pad[2] = 0xff;
        pTVar7->Pad[3] = 0xff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pTVar7->Pad + 4) = iVar6;
        pTVar7 = pTVar7 + -1;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar10 == param_1) {
      (this->AllocationFlags).NumBits = iVar10;
      uVar9 = iVar10 + 0x1fU >> 5;
      if (iVar10 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar9) {
          if ((2 < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMax >= 0 && NewMax <= NumInlineElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                                 ,0x524,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->AllocationFlags).MaxBits = uVar9 << 5;
        }
        memset(this_00,0,(ulonglong)uVar9 << 2);
        iVar12 = (this->AllocationFlags).NumBits;
        uVar8 = iVar12 >> 0x1f & 0x1f;
        uVar9 = iVar12 + uVar8;
        iVar12 = (uVar9 & 0x1f) - uVar8;
        if (iVar12 != 0) {
          pTVar3 = (this_00->AllocatorInstance).InlineData + ((int)uVar9 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f)
          ;
        }
      }
    }
    else if (-1 < iVar10) {
      iVar12 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(this_00,iVar10);
      TBitArray<TFixedAllocator<2>_>::SetRange(this_00,iVar12,iVar10,false);
    }
  }
  return;
}

// Reserve @ 1415e8b70

void __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar13;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar10 = param_1 - iVar5;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                (0x10,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)this,
                 iVar5,piVar2);
    }
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
                      (0x10,4,iVar10,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)
                       this,piVar1,piVar2);
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    lVar12 = (longlong)param_1 + -1;
    FVar13 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
      FVar13 = FVar4;
    }
    if (iVar5 <= lVar12) {
      puVar7 = (undefined4 *)(lVar12 * 0x10 + (longlong)FVar13);
      lVar12 = (lVar12 - iVar5) + 1;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar13 + (longlong)this->FirstFreeIndex * 0x10) = iVar5;
        }
        *puVar7 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        puVar7[1] = iVar6;
        puVar7 = puVar7 + -4;
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
        FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar8,0,(ulonglong)uVar11 << 2);
        iVar5 = (this->AllocationFlags).NumBits;
        uVar9 = iVar5 >> 0x1f & 0x1f;
        uVar11 = iVar5 + uVar9;
        iVar5 = (uVar11 & 0x1f) - uVar9;
        if (iVar5 != 0) {
          FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<unsigned_int>)0x0) {
            FVar8 = (ForElementType<unsigned_int>)this_00;
          }
          puVar3 = (uint *)((longlong)FVar8 + (longlong)((int)uVar11 >> 5) * 4);
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

// Reserve @ 1415e8d70

void __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x10,4,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar6 = pFVar3 + lVar11 * 0x10;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x10) = iVar4;
        }
        *(undefined4 *)pFVar6 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar6 + 4) = iVar5;
        pFVar6 = pFVar6 + -0x10;
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

// Reserve @ 1415e8f40

void __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x10,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar6 = pFVar3 + lVar11 * 0x10;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x10) = iVar4;
        }
        *(undefined4 *)pFVar6 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar6 + 4) = iVar5;
        pFVar6 = pFVar6 + -0x10;
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

// Reserve @ 1415e9110

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::Reserve
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<TFixedAllocator<2>_> *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *pTVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < param_1) {
    iVar10 = param_1 - iVar12;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                (0x18,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)this,
                 iVar12,piVar2);
    }
    lVar11 = (longlong)param_1 + -1;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                       (0x18,8,iVar10,
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                        this,piVar1,piVar2);
    if (iVar12 <= lVar11) {
      lVar11 = (lVar11 - iVar12) + 1;
      pTVar8 = (this->Data).AllocatorInstance.InlineData + (longlong)param_1 + -1;
      iVar12 = param_1;
      do {
        iVar12 = iVar12 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar12;
        }
        pTVar8->Pad[0] = 0xff;
        pTVar8->Pad[1] = 0xff;
        pTVar8->Pad[2] = 0xff;
        pTVar8->Pad[3] = 0xff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pTVar8->Pad + 4) = iVar6;
        pTVar8 = pTVar8 + -1;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar10 == param_1) {
      (this->AllocationFlags).NumBits = iVar10;
      uVar9 = iVar10 + 0x1fU >> 5;
      if (iVar10 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar9) {
          if ((2 < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMax >= 0 && NewMax <= NumInlineElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                                 ,0x524,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->AllocationFlags).MaxBits = uVar9 << 5;
        }
        memset(this_00,0,(ulonglong)uVar9 << 2);
        iVar12 = (this->AllocationFlags).NumBits;
        uVar7 = iVar12 >> 0x1f & 0x1f;
        uVar9 = iVar12 + uVar7;
        iVar12 = (uVar9 & 0x1f) - uVar7;
        if (iVar12 != 0) {
          pTVar3 = (this_00->AllocatorInstance).InlineData + ((int)uVar9 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f)
          ;
        }
      }
    }
    else if (-1 < iVar10) {
      iVar12 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(this_00,iVar10);
      TBitArray<TFixedAllocator<2>_>::SetRange(this_00,iVar12,iVar10,false);
    }
  }
  return;
}

// Reserve @ 1415e9300

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar5;
  int iVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined4 *puVar10;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar14;
  
  piVar2 = &(this->Data).ArrayNum;
  iVar6 = *piVar2;
  if (iVar6 < param_1) {
    iVar11 = param_1 - iVar6;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar3 = &(this->Data).ArrayMax;
    if (*piVar3 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                (0x18,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)this,
                 iVar6,piVar3);
    }
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
                      (0x18,8,iVar11,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)
                       this,piVar2,piVar3);
    FVar5 = (this->Data).AllocatorInstance.SecondaryData;
    lVar1 = (longlong)param_1 + -1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
    if (FVar5 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
      FVar14 = FVar5;
    }
    if (iVar6 <= lVar1) {
      lVar13 = (lVar1 - iVar6) + 1;
      puVar10 = (undefined4 *)((longlong)FVar14 + lVar1 * 0x18);
      iVar6 = param_1;
      do {
        iVar6 = iVar6 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x18) = iVar6;
        }
        *puVar10 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = this->FirstFreeIndex;
        }
        puVar10[1] = iVar7;
        puVar10 = puVar10 + -6;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar11 == param_1) {
      (this->AllocationFlags).NumBits = iVar11;
      uVar12 = iVar11 + 0x1fU >> 5;
      if (iVar11 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar12) {
          TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar12,4);
          (this->AllocationFlags).MaxBits = uVar12 << 5;
        }
        FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar8,0,(ulonglong)uVar12 << 2);
        iVar6 = (this->AllocationFlags).NumBits;
        uVar9 = iVar6 >> 0x1f & 0x1f;
        uVar12 = iVar6 + uVar9;
        iVar6 = (uVar12 & 0x1f) - uVar9;
        if (iVar6 != 0) {
          FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<unsigned_int>)0x0) {
            FVar8 = (ForElementType<unsigned_int>)this_00;
          }
          puVar4 = (uint *)((longlong)FVar8 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
    }
    else if (-1 < iVar11) {
      iVar6 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                        (this_00,iVar11);
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetRange
                (this_00,iVar6,iVar11,false);
    }
  }
  return;
}

// Reserve @ 1415e9500

void __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Reserve @ 1415e96d0

void __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if (*piVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar6 = pFVar3 + lVar11 * 0x20;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x20) = iVar4;
        }
        *(undefined4 *)pFVar6 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar6 + 4) = iVar5;
        pFVar6 = pFVar6 + -0x20;
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

// Reserve @ 1415e98a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::Reserve
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<TFixedAllocator<2>_> *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *pTVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < param_1) {
    iVar10 = param_1 - iVar12;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                (0x28,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)this,
                 iVar12,piVar2);
    }
    lVar11 = (longlong)param_1 + -1;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                       (0x28,8,iVar10,
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)
                        this,piVar1,piVar2);
    if (iVar12 <= lVar11) {
      lVar11 = (lVar11 - iVar12) + 1;
      pTVar8 = (this->Data).AllocatorInstance.InlineData + (longlong)param_1 + -1;
      iVar12 = param_1;
      do {
        iVar12 = iVar12 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar12;
        }
        pTVar8->Pad[0] = 0xff;
        pTVar8->Pad[1] = 0xff;
        pTVar8->Pad[2] = 0xff;
        pTVar8->Pad[3] = 0xff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pTVar8->Pad + 4) = iVar6;
        pTVar8 = pTVar8 + -1;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar10 == param_1) {
      (this->AllocationFlags).NumBits = iVar10;
      uVar9 = iVar10 + 0x1fU >> 5;
      if (iVar10 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar9) {
          if ((2 < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMax >= 0 && NewMax <= NumInlineElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                                 ,0x524,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->AllocationFlags).MaxBits = uVar9 << 5;
        }
        memset(this_00,0,(ulonglong)uVar9 << 2);
        iVar12 = (this->AllocationFlags).NumBits;
        uVar7 = iVar12 >> 0x1f & 0x1f;
        uVar9 = iVar12 + uVar7;
        iVar12 = (uVar9 & 0x1f) - uVar7;
        if (iVar12 != 0) {
          pTVar3 = (this_00->AllocatorInstance).InlineData + ((int)uVar9 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f)
          ;
        }
      }
    }
    else if (-1 < iVar10) {
      iVar12 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(this_00,iVar10);
      TBitArray<TFixedAllocator<2>_>::SetRange(this_00,iVar12,iVar10,false);
    }
  }
  return;
}

// Reserve @ 1415e9a90

void __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar5;
  int iVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined4 *puVar10;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar14;
  
  piVar2 = &(this->Data).ArrayNum;
  iVar6 = *piVar2;
  if (iVar6 < param_1) {
    iVar11 = param_1 - iVar6;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar3 = &(this->Data).ArrayMax;
    if (*piVar3 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                (0x28,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)this,
                 iVar6,piVar3);
    }
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                      (0x28,8,iVar11,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)
                       this,piVar2,piVar3);
    FVar5 = (this->Data).AllocatorInstance.SecondaryData;
    lVar1 = (longlong)param_1 + -1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
    if (FVar5 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
      FVar14 = FVar5;
    }
    if (iVar6 <= lVar1) {
      lVar13 = (lVar1 - iVar6) + 1;
      puVar10 = (undefined4 *)((longlong)FVar14 + lVar1 * 0x28);
      iVar6 = param_1;
      do {
        iVar6 = iVar6 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x28) = iVar6;
        }
        *puVar10 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = this->FirstFreeIndex;
        }
        puVar10[1] = iVar7;
        puVar10 = puVar10 + -10;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar11 == param_1) {
      (this->AllocationFlags).NumBits = iVar11;
      uVar12 = iVar11 + 0x1fU >> 5;
      if (iVar11 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar12) {
          TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar12,4);
          (this->AllocationFlags).MaxBits = uVar12 << 5;
        }
        FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar8,0,(ulonglong)uVar12 << 2);
        iVar6 = (this->AllocationFlags).NumBits;
        uVar9 = iVar6 >> 0x1f & 0x1f;
        uVar12 = iVar6 + uVar9;
        iVar6 = (uVar12 & 0x1f) - uVar9;
        if (iVar6 != 0) {
          FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<unsigned_int>)0x0) {
            FVar8 = (ForElementType<unsigned_int>)this_00;
          }
          puVar4 = (uint *)((longlong)FVar8 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
    }
    else if (-1 < iVar11) {
      iVar6 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                        (this_00,iVar11);
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetRange
                (this_00,iVar6,iVar11,false);
    }
  }
  return;
}

// Reserve @ 1415e9c90

void __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Reserve @ 1415e9e60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_>::Reserve
          (TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<TFixedAllocator<2>_> *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *pTVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar12 = *piVar1;
  if (iVar12 < param_1) {
    iVar10 = param_1 - iVar12;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar2 = &(this->Data).ArrayMax;
    if (*piVar2 < param_1) {
      UE::Core::Private::
      ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                (0xc,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)this,
                 iVar12,piVar2);
    }
    lVar11 = (longlong)param_1 + -1;
    iVar12 = UE::Core::Private::
             ReallocGrow<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                       (0xc,4,iVar10,
                        (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                        this,piVar1,piVar2);
    if (iVar12 <= lVar11) {
      lVar11 = (lVar11 - iVar12) + 1;
      pTVar8 = (this->Data).AllocatorInstance.InlineData + (longlong)param_1 + -1;
      iVar12 = param_1;
      do {
        iVar12 = iVar12 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(this->Data).AllocatorInstance.InlineData[this->FirstFreeIndex].Pad = iVar12;
        }
        pTVar8->Pad[0] = 0xff;
        pTVar8->Pad[1] = 0xff;
        pTVar8->Pad[2] = 0xff;
        pTVar8->Pad[3] = 0xff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pTVar8->Pad + 4) = iVar6;
        pTVar8 = pTVar8 + -1;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar10 == param_1) {
      (this->AllocationFlags).NumBits = iVar10;
      uVar9 = iVar10 + 0x1fU >> 5;
      if (iVar10 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar9) {
          if ((2 < uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMax >= 0 && NewMax <= NumInlineElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                                 ,0x524,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (this->AllocationFlags).MaxBits = uVar9 << 5;
        }
        memset(this_00,0,(ulonglong)uVar9 << 2);
        iVar12 = (this->AllocationFlags).NumBits;
        uVar7 = iVar12 >> 0x1f & 0x1f;
        uVar9 = iVar12 + uVar7;
        iVar12 = (uVar9 & 0x1f) - uVar7;
        if (iVar12 != 0) {
          pTVar3 = (this_00->AllocatorInstance).InlineData + ((int)uVar9 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f)
          ;
        }
      }
    }
    else if (-1 < iVar10) {
      iVar12 = TBitArray<TFixedAllocator<2>_>::AddUninitialized(this_00,iVar10);
      TBitArray<TFixedAllocator<2>_>::SetRange(this_00,iVar12,iVar10,false);
    }
  }
  return;
}

// Reserve @ 1415ea050

void __thiscall
TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Reserve(TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          *this,int param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar5;
  int iVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  undefined4 *puVar10;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar14;
  
  piVar2 = &(this->Data).ArrayNum;
  iVar6 = *piVar2;
  if (iVar6 < param_1) {
    iVar11 = param_1 - iVar6;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    piVar3 = &(this->Data).ArrayMax;
    if (*piVar3 < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                (0xc,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)this,
                 iVar6,piVar3);
    }
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                      (0xc,4,iVar11,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                       this,piVar2,piVar3);
    FVar5 = (this->Data).AllocatorInstance.SecondaryData;
    lVar1 = (longlong)param_1 + -1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)this;
    if (FVar5 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
      FVar14 = FVar5;
    }
    if (iVar6 <= lVar1) {
      lVar13 = (lVar1 - iVar6) + 1;
      puVar10 = (undefined4 *)((longlong)FVar14 + lVar1 * 0xc);
      iVar6 = param_1;
      do {
        iVar6 = iVar6 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0xc) = iVar6;
        }
        *puVar10 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar7 = -1;
        }
        else {
          iVar7 = this->FirstFreeIndex;
        }
        puVar10[1] = iVar7;
        puVar10 = puVar10 + -3;
        this->NumFreeIndices = this->NumFreeIndices + 1;
        this->FirstFreeIndex = iVar6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    this_00 = &this->AllocationFlags;
    if (iVar11 == param_1) {
      (this->AllocationFlags).NumBits = iVar11;
      uVar12 = iVar11 + 0x1fU >> 5;
      if (iVar11 + 0x1fU >> 5 != 0) {
        if ((this->AllocationFlags).MaxBits + 0x1fU >> 5 < uVar12) {
          TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&this_00->AllocatorInstance,0,uVar12,4);
          (this->AllocationFlags).MaxBits = uVar12 << 5;
        }
        FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        memset((void *)FVar8,0,(ulonglong)uVar12 << 2);
        iVar6 = (this->AllocationFlags).NumBits;
        uVar9 = iVar6 >> 0x1f & 0x1f;
        uVar12 = iVar6 + uVar9;
        iVar6 = (uVar12 & 0x1f) - uVar9;
        if (iVar6 != 0) {
          FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
          if (FVar8 == (ForElementType<unsigned_int>)0x0) {
            FVar8 = (ForElementType<unsigned_int>)this_00;
          }
          puVar4 = (uint *)((longlong)FVar8 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
    }
    else if (-1 < iVar11) {
      iVar6 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddUninitialized
                        (this_00,iVar11);
      TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetRange
                (this_00,iVar6,iVar11,false);
    }
  }
  return;
}

// Reserve @ 1415ea250

void __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0xc,4,param_1,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar4 = (this->Data).AllocatorInstance.Data;
    lVar2 = (longlong)param_1 + -1;
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      pFVar9 = pFVar4 + lVar2 * 0xc;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar4 + (longlong)this->FirstFreeIndex * 0xc) = iVar5;
        }
        *(undefined4 *)pFVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pFVar9 + 4) = iVar6;
        pFVar9 = pFVar9 + -0xc;
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

// Shrink @ 1415f3f40

void __thiscall
TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_>::Shrink
          (TSparseArrayBase<16,4,TFixedSparseArrayAllocator<64>_> *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *_Dst;
  uint uVar8;
  
  iVar6 = TBitArray<TFixedAllocator<2>_>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar8 = this->FirstFreeIndex;
      uVar7 = (ulonglong)uVar8;
      while (uVar8 != 0xffffffff) {
        iVar6 = (int)uVar7;
        if (iVar6 < (int)uVar1) {
          uVar7 = (ulonglong)*(uint *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4);
        }
        else {
          iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4);
          uVar7 = (ulonglong)iVar3;
          iVar6 = *(int *)(this->Data).AllocatorInstance.InlineData[iVar6].Pad;
          if (iVar3 != -1) {
            *(int *)(this->Data).AllocatorInstance.InlineData[uVar7].Pad = iVar6;
          }
          if (iVar6 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar3;
          }
          else {
            *(int *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4) = iVar3;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar8 = (uint)uVar7;
      }
    }
    uVar8 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar8 | uVar1) < 0) &&
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
    if (uVar8 != 0) {
      _Dst = (this->Data).AllocatorInstance.InlineData + (int)uVar1;
      iVar6 = ((this->Data).ArrayNum - uVar8) - uVar1;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar6 << 4);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar8;
    }
    TBitArray<TFixedAllocator<2>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::
    ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
              (0x10,4,iVar6,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)this,
               iVar6,piVar2);
  }
  return;
}

// Shrink @ 1415f40d0

void __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<16,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
                    (&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      uVar10 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar10;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
        FVar9 = FVar4;
      }
      while (uVar10 != 0xffffffff) {
        lVar11 = (longlong)(int)uVar8;
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)*(uint *)((longlong)FVar9 + 4 + lVar11 * 0x10);
        }
        else {
          iVar7 = *(int *)((longlong)FVar9 + 4 + lVar11 * 0x10);
          uVar8 = (ulonglong)iVar7;
          iVar3 = *(int *)((longlong)FVar9 + lVar11 * 0x10);
          if (iVar7 != -1) {
            *(int *)((longlong)FVar9 + uVar8 * 0x10) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((longlong)FVar9 + 4 + (longlong)iVar3 * 0x10) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar8;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar10 != 0) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
        FVar9 = FVar4;
      }
      _Dst = (void *)((longlong)(int)uVar1 * 0x10 + (longlong)FVar9);
      iVar7 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar7 != 0) {
        memmove(_Dst,(void *)((longlong)(int)uVar10 * 0x10 + (longlong)_Dst),(longlong)iVar7 << 4);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>_>
              (0x10,4,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f4290

void __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar9 = this->FirstFreeIndex;
      uVar7 = (ulonglong)uVar9;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar9 != 0xffffffff) {
        lVar10 = (longlong)(int)uVar7;
        if ((int)uVar7 < (int)uVar1) {
          uVar7 = (ulonglong)*(uint *)(pFVar8 + lVar10 * 0x10 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar10 * 0x10 + 4);
          uVar7 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar10 * 0x10);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar7 * 0x10) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x10 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar7;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
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
    if (uVar9 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
      iVar6 = ((this->Data).ArrayNum - uVar9) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar9 * 0x10,(longlong)iVar6 << 4);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar9;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 1415f43f0

void __thiscall
TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_>::Shrink
          (TSparseArrayBase<24,8,TFixedSparseArrayAllocator<64>_> *this)

{
  uint uVar1;
  int *piVar2;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar7 = TBitArray<TFixedAllocator<2>_>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      while (uVar9 != 0xffffffff) {
        pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar8;
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)*(uint *)(pTVar3->Pad + 4);
        }
        else {
          iVar7 = *(int *)(pTVar3->Pad + 4);
          uVar8 = (ulonglong)iVar7;
          iVar4 = *(int *)pTVar3->Pad;
          if (iVar7 != -1) {
            *(int *)(this->Data).AllocatorInstance.InlineData[uVar8].Pad = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((this->Data).AllocatorInstance.InlineData[iVar4].Pad + 4) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar1;
      iVar7 = ((this->Data).ArrayNum - uVar9) - uVar1;
      if (iVar7 != 0) {
        memmove(pTVar3,pTVar3 + (int)uVar9,(longlong)iVar7 * 0x18);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar9;
    }
    TBitArray<TFixedAllocator<2>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f4580

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar10;
  
  iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
                    (&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      FVar10 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
        FVar10 = FVar4;
      }
      while (uVar9 != 0xffffffff) {
        piVar2 = (int *)((longlong)FVar10 + (longlong)(int)uVar8 * 0x18);
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar7 = piVar2[1];
          uVar8 = (ulonglong)iVar7;
          iVar3 = *piVar2;
          if (iVar7 != -1) {
            *(int *)((longlong)FVar10 + uVar8 * 0x18) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((longlong)FVar10 + 4 + (longlong)iVar3 * 0x18) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->Data,uVar1,uVar9);
    }
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
              (0x18,8,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f4700

void __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
              (0x18,8,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// Shrink @ 1415f4870

void __thiscall
TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::Shrink
          (TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *_Dst;
  uint uVar8;
  
  iVar6 = TBitArray<TFixedAllocator<2>_>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar8 = this->FirstFreeIndex;
      uVar7 = (ulonglong)uVar8;
      while (uVar8 != 0xffffffff) {
        iVar6 = (int)uVar7;
        if (iVar6 < (int)uVar1) {
          uVar7 = (ulonglong)*(uint *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4);
        }
        else {
          iVar3 = *(int *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4);
          uVar7 = (ulonglong)iVar3;
          iVar6 = *(int *)(this->Data).AllocatorInstance.InlineData[iVar6].Pad;
          if (iVar3 != -1) {
            *(int *)(this->Data).AllocatorInstance.InlineData[uVar7].Pad = iVar6;
          }
          if (iVar6 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar3;
          }
          else {
            *(int *)((this->Data).AllocatorInstance.InlineData[iVar6].Pad + 4) = iVar3;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar8 = (uint)uVar7;
      }
    }
    uVar8 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar8 | uVar1) < 0) &&
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
    if (uVar8 != 0) {
      _Dst = (this->Data).AllocatorInstance.InlineData + (int)uVar1;
      iVar6 = ((this->Data).ArrayNum - uVar8) - uVar1;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + (int)uVar8,(longlong)iVar6 << 5);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar8;
    }
    TBitArray<TFixedAllocator<2>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::
    ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
              (0x20,8,iVar6,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *)this,
               iVar6,piVar2);
  }
  return;
}

// Shrink @ 1415f4a00

void __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
                    (&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      uVar10 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar10;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
        FVar9 = FVar4;
      }
      while (uVar10 != 0xffffffff) {
        lVar11 = (longlong)(int)uVar8 * 0x20;
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)*(uint *)(lVar11 + 4 + (longlong)FVar9);
        }
        else {
          iVar7 = *(int *)(lVar11 + 4 + (longlong)FVar9);
          uVar8 = (ulonglong)iVar7;
          iVar3 = *(int *)(lVar11 + (longlong)FVar9);
          if (iVar7 != -1) {
            *(int *)(uVar8 * 0x20 + (longlong)FVar9) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((longlong)iVar3 * 0x20 + 4 + (longlong)FVar9) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar10 = (uint)uVar8;
      }
    }
    uVar10 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar10 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar10 != 0) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
        FVar9 = FVar4;
      }
      _Dst = (void *)((longlong)(int)uVar1 * 0x20 + (longlong)FVar9);
      iVar7 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar7 != 0) {
        memmove(_Dst,(void *)((longlong)(int)uVar10 * 0x20 + (longlong)_Dst),(longlong)iVar7 << 5);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar10;
    }
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
              (0x20,8,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f4bc0

void __thiscall
TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<32,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  void *_Dst;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  ulonglong uVar8;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar6 = (this->AllocationFlags).NumBits;
  if (iVar6 != 0) {
    uVar10 = 0xffffffff >> (-(char)iVar6 & 0x1fU);
    FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    }
    uVar11 = iVar6 + 0x1fU >> 5;
    uVar8 = (ulonglong)uVar11;
    while (uVar11 != 0) {
      uVar11 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar11;
      uVar10 = uVar10 & *(uint *)((longlong)FVar7 + uVar8 * 4);
      if (uVar10 != 0) {
        uVar8 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar10 = uVar11 * 0x20 + (int)lVar12;
        goto LAB_1415f4c17;
      }
      uVar10 = 0xffffffff;
    }
  }
  uVar10 = 0;
LAB_1415f4c17:
  if ((int)uVar10 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar3 = (this->Data).AllocatorInstance.SecondaryData;
      uVar11 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar11;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
      if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
        FVar9 = FVar3;
      }
      while (uVar11 != 0xffffffff) {
        lVar12 = (longlong)(int)uVar8 * 0x20;
        if ((int)uVar8 < (int)uVar10) {
          uVar8 = (ulonglong)*(uint *)(lVar12 + 4 + (longlong)FVar9);
        }
        else {
          iVar6 = *(int *)(lVar12 + 4 + (longlong)FVar9);
          uVar8 = (ulonglong)iVar6;
          iVar2 = *(int *)(lVar12 + (longlong)FVar9);
          if (iVar6 != -1) {
            *(int *)(uVar8 * 0x20 + (longlong)FVar9) = iVar2;
          }
          if (iVar2 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)((longlong)iVar2 * 0x20 + 4 + (longlong)FVar9) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar11 = (uint)uVar8;
      }
    }
    uVar11 = (this->Data).ArrayNum - uVar10;
    if ((-1 < (int)(~uVar10 & ~uVar11)) &&
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
    if (uVar11 != 0) {
      FVar3 = (this->Data).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)this;
      if (FVar3 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
        FVar9 = FVar3;
      }
      _Dst = (void *)((longlong)(int)uVar10 * 0x20 + (longlong)FVar9);
      iVar6 = ((this->Data).ArrayNum - uVar11) - uVar10;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)(int)uVar11 * 0x20 + (longlong)_Dst),(longlong)iVar6 << 5);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar11;
    }
    TBitArray<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar10,(this->AllocationFlags).NumBits - uVar10);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
              (0x20,8,iVar6,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *)this,
               iVar6,piVar1);
  }
  return;
}

// Shrink @ 1415f4dc0

void __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar6 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar9 = this->FirstFreeIndex;
      uVar7 = (ulonglong)uVar9;
      pFVar8 = (this->Data).AllocatorInstance.Data;
      while (uVar9 != 0xffffffff) {
        lVar10 = (longlong)(int)uVar7 * 0x20;
        if ((int)uVar7 < (int)uVar1) {
          uVar7 = (ulonglong)*(uint *)(pFVar8 + lVar10 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar10 + 4);
          uVar7 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar10);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar7 * 0x20) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x20 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar7;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
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
    if (uVar9 != 0) {
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
      iVar6 = ((this->Data).ArrayNum - uVar9) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar9 * 0x20,(longlong)iVar6 << 5);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar9;
    }
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 1415f4f30

void __thiscall
TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_>::Shrink
          (TSparseArrayBase<40,8,TFixedSparseArrayAllocator<64>_> *this)

{
  uint uVar1;
  int *piVar2;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar7 = TBitArray<TFixedAllocator<2>_>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      while (uVar9 != 0xffffffff) {
        pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar8;
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)*(uint *)(pTVar3->Pad + 4);
        }
        else {
          iVar7 = *(int *)(pTVar3->Pad + 4);
          uVar8 = (ulonglong)iVar7;
          iVar4 = *(int *)pTVar3->Pad;
          if (iVar7 != -1) {
            *(int *)(this->Data).AllocatorInstance.InlineData[uVar8].Pad = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((this->Data).AllocatorInstance.InlineData[iVar4].Pad + 4) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar1;
      iVar7 = ((this->Data).ArrayNum - uVar9) - uVar1;
      if (iVar7 != 0) {
        memmove(pTVar3,pTVar3 + (int)uVar9,(longlong)iVar7 * 0x28);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar9;
    }
    TBitArray<TFixedAllocator<2>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
              (0x28,8,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f50c0

void __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar10;
  
  iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
                    (&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      FVar10 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
        FVar10 = FVar4;
      }
      while (uVar9 != 0xffffffff) {
        piVar2 = (int *)((longlong)FVar10 + (longlong)(int)uVar8 * 0x28);
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar7 = piVar2[1];
          uVar8 = (ulonglong)iVar7;
          iVar3 = *piVar2;
          if (iVar7 != -1) {
            *(int *)((longlong)FVar10 + uVar8 * 0x28) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((longlong)FVar10 + 4 + (longlong)iVar3 * 0x28) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->Data,uVar1,uVar9);
    }
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
              (0x28,8,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f5240

void __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 0x28;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 0x28) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 0x28 + 4) = iVar8;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x28;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 0x28,(longlong)iVar8 * 0x28);
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
              (0x28,8,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// Shrink @ 1415f53b0

void __thiscall
TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_>::Shrink
          (TSparseArrayBase<12,4,TFixedSparseArrayAllocator<64>_> *this)

{
  uint uVar1;
  int *piVar2;
  TTypeCompatibleBytes<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar7 = TBitArray<TFixedAllocator<2>_>::FindLast(&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      while (uVar9 != 0xffffffff) {
        pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar8;
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)*(uint *)(pTVar3->Pad + 4);
        }
        else {
          iVar7 = *(int *)(pTVar3->Pad + 4);
          uVar8 = (ulonglong)iVar7;
          iVar4 = *(int *)pTVar3->Pad;
          if (iVar7 != -1) {
            *(int *)(this->Data).AllocatorInstance.InlineData[uVar8].Pad = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((this->Data).AllocatorInstance.InlineData[iVar4].Pad + 4) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      pTVar3 = (this->Data).AllocatorInstance.InlineData + (int)uVar1;
      iVar7 = ((this->Data).ArrayNum - uVar9) - uVar1;
      if (iVar7 != 0) {
        memmove(pTVar3,pTVar3 + (int)uVar9,(longlong)iVar7 * 0xc);
      }
      piVar2 = &(this->Data).ArrayNum;
      *piVar2 = *piVar2 - uVar9;
    }
    TBitArray<TFixedAllocator<2>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<0,TFixedAllocator<64>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
              (0xc,4,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f5540

void __thiscall
TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::Shrink(TSparseArrayBase<12,4,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
         *this)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> FVar10;
  
  iVar7 = TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::FindLast
                    (&this->AllocationFlags,true);
  uVar1 = iVar7 + 1;
  if ((int)uVar1 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      FVar4 = (this->Data).AllocatorInstance.SecondaryData;
      uVar9 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar9;
      FVar10 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)this;
      if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>)0x0) {
        FVar10 = FVar4;
      }
      while (uVar9 != 0xffffffff) {
        piVar2 = (int *)((longlong)FVar10 + (longlong)(int)uVar8 * 0xc);
        if ((int)uVar8 < (int)uVar1) {
          uVar8 = (ulonglong)(uint)piVar2[1];
        }
        else {
          iVar7 = piVar2[1];
          uVar8 = (ulonglong)iVar7;
          iVar3 = *piVar2;
          if (iVar7 != -1) {
            *(int *)((longlong)FVar10 + uVar8 * 0xc) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar7;
          }
          else {
            *(int *)((longlong)FVar10 + 4 + (longlong)iVar3 * 0xc) = iVar7;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar9 = (uint)uVar8;
      }
    }
    uVar9 = (this->Data).ArrayNum - uVar1;
    if (((int)(uVar9 | uVar1) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
      ::RemoveAtImpl(&this->Data,uVar1,uVar9);
    }
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::RemoveAt
              (&this->AllocationFlags,uVar1,(this->AllocationFlags).NumBits - uVar1);
  }
  iVar7 = (this->Data).ArrayNum;
  piVar2 = &(this->Data).ArrayMax;
  if (*piVar2 != iVar7) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
              (0xc,4,iVar7,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)this,
               iVar7,piVar2);
  }
  return;
}

// Shrink @ 1415f56c0

void __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 0xc;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 0xc) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 0xc + 4) = iVar8;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xc;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 0xc,(longlong)iVar8 * 0xc);
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
              (0xc,4,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// AllocateIndex @ 141628ce0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x110;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141628e90

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x14;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141629030

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x30;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1416291d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x50;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1416575e0

void __thiscall
TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x110;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x110) = iVar10;
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
      pFVar13 = pFVar13 + 0x110;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 141657770

void __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x14;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x14) = iVar10;
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
      pFVar13 = pFVar13 + 0x14;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AllocateIndex @ 141680c90

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,FDefaultSparseArrayLLMAllocator>::AllocateIndex
          (TSparseArrayBase<16,8,FDefaultSparseArrayLLMAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar7;
  
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  if (((*(uint *)((pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4) >> (param_1 & 0x1fU)
       & 1) != 0) &&
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer =
       (void *)((longlong)param_1 * 0x10 + (longlong)(this->Data).AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141680e40

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayLLMAllocator>::AllocateIndex
          (TSparseArrayBase<24,8,FDefaultSparseArrayLLMAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar8;
  
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
  pTVar8 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
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
  pTVar8 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar8 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pvVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)pvVar3 + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141680fe0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,FDefaultSparseArrayLLMAllocator>::AllocateIndex
          (TSparseArrayBase<32,8,FDefaultSparseArrayLLMAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar7;
  
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  if (((*(uint *)((pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4) >> (param_1 & 0x1fU)
       & 1) != 0) &&
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer =
       (void *)((longlong)param_1 * 0x20 + (longlong)(this->Data).AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141681190

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,8,FDefaultSparseArrayLLMAllocator>::AllocateIndex
          (TSparseArrayBase<56,8,FDefaultSparseArrayLLMAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar7;
  
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  if (((*(uint *)((pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4) >> (param_1 & 0x1fU)
       & 1) != 0) &&
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
  pTVar7 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
            &(this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (pTVar7 == (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer =
       (void *)((longlong)param_1 * 0x38 + (longlong)(this->Data).AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141681340

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x68;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1416814f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0xa0;
  return __return_storage_ptr__;
}

// Compact @ 14168bfc0

bool __thiscall
TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<unsigned_int> FVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *_Dst;
  
  uVar11 = this->NumFreeIndices;
  if (uVar11 == 0) {
    return false;
  }
  pFVar13 = (this->Data).AllocatorInstance.Data;
  iVar12 = (this->Data).ArrayNum;
  uVar18 = iVar12 - uVar11;
  bVar6 = false;
  iVar17 = iVar12;
  iVar10 = this->FirstFreeIndex;
  while (iVar5 = iVar10, iVar5 != -1) {
    _Dst = pFVar13 + (longlong)iVar5 * 0x68;
    iVar10 = *(int *)(_Dst + 4);
    if (iVar5 < (int)uVar18) {
      bVar4 = (byte)iVar17 & 0x1f;
      uVar19 = 1 << bVar4 | 1U >> 0x20 - bVar4;
      iVar16 = iVar17;
      do {
        uVar19 = uVar19 >> 1 | (uint)((uVar19 & 1) != 0) << 0x1f;
        iVar17 = iVar16 + -1;
        if (((iVar17 < 0) || ((this->AllocationFlags).NumBits <= iVar17)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar15 = FVar14;
        }
        iVar9 = iVar17;
        if (iVar17 < 0) {
          iVar9 = iVar16 + 0x1e;
        }
        iVar16 = iVar17;
      } while ((*(uint *)((longlong)FVar15 + (longlong)(iVar9 >> 5) * 4) & uVar19) == 0);
      memmove(_Dst,pFVar13 + (longlong)iVar17 * 0x68,0x68);
      if (((iVar5 < 0) || ((this->AllocationFlags).NumBits <= iVar5)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar14 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar14;
      }
      iVar16 = iVar5;
      if (iVar5 < 0) {
        iVar16 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar16 >> 5) * 4);
      bVar6 = true;
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
    }
  }
  uVar19 = 0;
  if (iVar12 <= (this->Data).ArrayNum) {
    uVar19 = ~(uVar18 | uVar11) >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar13 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x68;
  iVar10 = ((this->Data).ArrayNum - uVar18) - uVar11;
  if (iVar10 != 0) {
    memmove(pFVar13,pFVar13 + (longlong)(int)uVar11 * 0x68,(longlong)iVar10 * 0x68);
  }
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = *piVar1 - uVar11;
  this_00 = &this->AllocationFlags;
  if (((((int)uVar18 < 0) || ((int)uVar11 < 0)) || ((this->AllocationFlags).NumBits < iVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3ee,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar10 = (this->AllocationFlags).NumBits;
  if (iVar12 != iVar10) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    FBitArrayMemory::MemmoveBitsWordOrder
              ((uint *)FVar14,uVar18,(uint *)FVar14,iVar12,(iVar10 - uVar18) - uVar11);
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  *piVar1 = *piVar1 - uVar11;
  iVar12 = (this->AllocationFlags).NumBits;
  uVar18 = iVar12 >> 0x1f & 0x1f;
  uVar11 = iVar12 + uVar18;
  iVar12 = (uVar11 & 0x1f) - uVar18;
  if (iVar12 != 0) {
    FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    puVar2 = (uint *)((longlong)FVar14 + (longlong)((int)uVar11 >> 5) * 4);
    *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
  }
  TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  piVar1 = &(this->Data).ArrayMax;
  this->NumFreeIndices = 0;
  this->FirstFreeIndex = -1;
  iVar12 = (this->Data).ArrayNum;
  if (*piVar1 != iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar12,(ForAnyElementType *)this,iVar12,piVar1);
  }
  return bVar6;
}

// RemoveAtUninitialized @ 1416bd950

void __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayLLMAllocator>::RemoveAtUninitialized
          (TSparseArrayBase<24,8,FDefaultSparseArrayLLMAllocator> *this,int param_1,int param_2)

{
  uchar *puVar1;
  void *pvVar2;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TBitArray<FDefaultBitArrayLLMAllocator> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  if (param_2 != 0) {
    pvVar2 = (this->Data).AllocatorInstance.Data;
    uVar11 = (ulonglong)param_1;
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)((longlong)pvVar2 + uVar11 * 0x18);
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
      pTVar3 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
                &(this->AllocationFlags).AllocatorInstance.SecondaryData;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
        pTVar9 = pTVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      if (((*(uint *)((pTVar9->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4) & uVar12)
           == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        *(int *)((longlong)pvVar2 + (longlong)this->FirstFreeIndex * 0x18) = iVar10;
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
      pTVar3 = *(TBitArray<FDefaultBitArrayLLMAllocator> **)
                &(this->AllocationFlags).AllocatorInstance.SecondaryData;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<FDefaultBitArrayLLMAllocator> *)0x0) {
        pTVar9 = pTVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      puVar13 = puVar13 + 6;
      puVar1 = (pTVar9->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 1416be440

void __thiscall
TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x68,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x68;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x68) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x68;
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

// Reserve @ 1416be610

void __thiscall
TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<160,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0xa0,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0xa0;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0xa0) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0xa0;
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

// AllocateIndex @ 1416dfee0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<24,8,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>)0x0) {
    this = (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x18);
  return __return_storage_ptr__;
}

// AllocateIndex @ 1416e00a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x48;
  return __return_storage_ptr__;
}

// Compact @ 1416e3b90

bool __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar5 = (this->Data).AllocatorInstance.Data;
  iVar14 = (this->Data).ArrayNum;
  uVar19 = iVar14 - uVar3;
  bVar10 = false;
  iVar16 = iVar14;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar9 = iVar4;
      if (iVar9 == -1) {
        uVar17 = 0;
        if (iVar14 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x28;
        iVar14 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar3 * 0x28,(longlong)iVar14 * 0x28);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar14 = (this->Data).ArrayNum;
        if (*piVar1 != iVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar14,(ForAnyElementType *)this,iVar14,piVar1);
        }
        return bVar10;
      }
      iVar4 = *(int *)(pFVar5 + (longlong)iVar9 * 0x28 + 4);
    } while ((int)uVar19 <= iVar9);
    bVar8 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar6;
      }
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar13 >> 5) * 4) & uVar17) == 0);
    memmove(pFVar5 + (longlong)iVar9 * 0x28,pFVar5 + (longlong)iVar16 * 0x28,0x28);
    if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) break;
    FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar6;
    }
    iVar15 = iVar9;
    if (iVar9 < 0) {
      iVar15 = iVar9 + 0x1f;
    }
    bVar10 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return (bool)uVar11;
}

// RemoveAtUninitialized @ 14170c040

void __thiscall
TSparseArrayBase<24,8,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<24,8,TInlineSparseArrayAllocator<256,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
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

// RemoveAtUninitialized @ 14170c1e0

void __thiscall
TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x48;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x48) = iVar10;
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
      pFVar13 = pFVar13 + 0x48;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AddUninitialized @ 141743a20

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    iVar1 = this->NumFreeIndices + -1;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x60 + 4);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x60) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141743ad0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x60;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141743c70

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<176,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<176,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xb0;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141743e20

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<192,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0xc0;
  return __return_storage_ptr__;
}

// Compact @ 14174c2f0

bool __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x20;
        iVar13 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar3 * 0x20,(longlong)iVar13 << 5);
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
                    (0x20,8,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
        }
        return bVar9;
      }
      _Dst = pFVar14 + (longlong)iVar8 * 0x20;
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
    memmove(_Dst,pFVar14 + (longlong)iVar16 * 0x20,0x20);
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

// RemoveAtUninitialized @ 141776520

void __thiscall
TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x60;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x60) = iVar10;
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
      pFVar13 = pFVar13 + 0x60;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 141777180

void __thiscall
TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x60,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x60;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x60) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x60;
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

// Shrink @ 14177e6e0

void __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 0x14;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 0x14) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 0x14 + 4) = iVar8;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x14;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 0x14,(longlong)iVar8 * 0x14);
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
              (0x14,4,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// AllocateIndex @ 1417b3fe0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1417b4190

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x20;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1417b4340

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x28;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1417b44e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x70;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1417f4fa0

void __thiscall
TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<112,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x70;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x70) = iVar10;
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
      pFVar13 = pFVar13 + 0x70;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 1417f5c20

void __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Reserve(TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
                (0x14,4,param_1,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,iVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar4 = (this->Data).AllocatorInstance.Data;
    lVar2 = (longlong)param_1 + -1;
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      pFVar9 = pFVar4 + lVar2 * 0x14;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar4 + (longlong)this->FirstFreeIndex * 0x14) = iVar5;
        }
        *(undefined4 *)pFVar9 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)(pFVar9 + 4) = iVar6;
        pFVar9 = pFVar9 + -0x14;
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

// AllocateIndex @ 14181b980

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x100;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14181bb30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x38;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14181bce0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x40;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14181be90

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x80;
  return __return_storage_ptr__;
}

// AddUninitialized @ 141861a90

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    iVar1 = this->NumFreeIndices + -1;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x28 + 4);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141861f60

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<264,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<264,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x108;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141862110

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<112,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x70;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1418622c0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xb8;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141862470

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xe0;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14188a2c0

void __thiscall
TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x68;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x68) = iVar10;
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
      pFVar13 = pFVar13 + 0x68;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 14188a440

void __thiscall
TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0xb8;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0xb8) = iVar10;
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
      pFVar13 = pFVar13 + 0xb8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Shrink @ 141891fc0

void __thiscall
TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<272,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        lVar7 = (longlong)(int)uVar9 * 0x110;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x110) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x110 + 4) = iVar6;
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
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x110;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x110,(longlong)iVar6 * 0x110);
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
              (0x110,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 141892130

void __thiscall
TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        lVar7 = (longlong)(int)uVar9 * 0x68;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x68) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x68 + 4) = iVar6;
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
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x68;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x68,(longlong)iVar6 * 0x68);
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
              (0x68,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 141892290

void __thiscall
TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<184,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        lVar7 = (longlong)(int)uVar9 * 0xb8;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0xb8) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0xb8 + 4) = iVar6;
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
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0xb8;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0xb8,(longlong)iVar6 * 0xb8);
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
              (0xb8,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// AllocateIndex @ 1418c7590

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x38;
  return __return_storage_ptr__;
}

// AllocateIndex @ 141925fb0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<2120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<2120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x848;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 141965710

void __thiscall
TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x30;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x30) = iVar10;
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
      pFVar13 = pFVar13 + 0x30;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AllocateIndex @ 14198b3a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<40,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
    this = (TSparseArrayBase<40,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 0x28);
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1419a81f0

void __thiscall
TSparseArrayBase<40,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<40,8,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>)0x0) {
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

// AllocateIndex @ 1419dff30

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<304,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<304,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x130;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1419e00e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<48,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<48,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>)0x0) {
    this = (TSparseArrayBase<48,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x30 + (longlong)this);
  __return_storage_ptr__->Index = param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1419e02a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x78;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1419e0450

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Compact @ 1419e4db0

bool __thiscall
TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar5 = (this->Data).AllocatorInstance.Data;
  iVar14 = (this->Data).ArrayNum;
  uVar19 = iVar14 - uVar3;
  bVar10 = false;
  iVar16 = iVar14;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar9 = iVar4;
      if (iVar9 == -1) {
        uVar17 = 0;
        if (iVar14 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x14;
        iVar14 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar3 * 0x14,(longlong)iVar14 * 0x14);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar14 = (this->Data).ArrayNum;
        if (*piVar1 != iVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar14,(ForAnyElementType *)this,iVar14,piVar1);
        }
        return bVar10;
      }
      iVar4 = *(int *)(pFVar5 + (longlong)iVar9 * 0x14 + 4);
    } while ((int)uVar19 <= iVar9);
    bVar8 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar6;
      }
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar13 >> 5) * 4) & uVar17) == 0);
    memmove(pFVar5 + (longlong)iVar9 * 0x14,pFVar5 + (longlong)iVar16 * 0x14,0x14);
    if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) break;
    FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar6;
    }
    iVar15 = iVar9;
    if (iVar9 < 0) {
      iVar15 = iVar9 + 0x1f;
    }
    bVar10 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return (bool)uVar11;
}

// Compact @ 1419e5080

bool __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  byte bVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  
  uVar3 = this->NumFreeIndices;
  if (uVar3 == 0) {
    return false;
  }
  pFVar5 = (this->Data).AllocatorInstance.Data;
  iVar14 = (this->Data).ArrayNum;
  uVar19 = iVar14 - uVar3;
  bVar10 = false;
  iVar16 = iVar14;
  iVar4 = this->FirstFreeIndex;
  while( true ) {
    do {
      iVar9 = iVar4;
      if (iVar9 == -1) {
        uVar17 = 0;
        if (iVar14 <= (this->Data).ArrayNum) {
          uVar17 = ~(uVar19 | uVar3) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x18;
        iVar14 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar3 * 0x18,(longlong)iVar14 * 0x18);
        }
        piVar1 = &(this->Data).ArrayNum;
        *piVar1 = *piVar1 - uVar3;
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(&this->AllocationFlags,uVar19,uVar3);
        this->FirstFreeIndex = -1;
        piVar1 = &(this->Data).ArrayMax;
        this->NumFreeIndices = 0;
        iVar14 = (this->Data).ArrayNum;
        if (*piVar1 != iVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar14,(ForAnyElementType *)this,iVar14,piVar1);
        }
        return bVar10;
      }
      iVar4 = *(int *)(pFVar5 + (longlong)iVar9 * 0x18 + 4);
    } while ((int)uVar19 <= iVar9);
    bVar8 = (byte)iVar16 & 0x1f;
    uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
    iVar15 = iVar16;
    do {
      uVar17 = uVar17 >> 1 | (uint)((uVar17 & 1) != 0) << 0x1f;
      iVar16 = iVar15 + -1;
      if (((iVar16 < 0) || ((this->AllocationFlags).NumBits <= iVar16)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar6;
      }
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = iVar15 + 0x1e;
      }
      iVar15 = iVar16;
    } while ((*(uint *)((longlong)FVar18 + (longlong)(iVar13 >> 5) * 4) & uVar17) == 0);
    memmove(pFVar5 + (longlong)iVar9 * 0x18,pFVar5 + (longlong)iVar16 * 0x18,0x18);
    if (((iVar9 < 0) || ((this->AllocationFlags).NumBits <= iVar9)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) break;
    FVar6 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar6;
    }
    iVar15 = iVar9;
    if (iVar9 < 0) {
      iVar15 = iVar9 + 0x1f;
    }
    bVar10 = true;
    puVar2 = (uint *)((longlong)FVar18 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  }
  pcVar7 = (code *)swi(3);
  uVar11 = (*pcVar7)();
  return (bool)uVar11;
}

// RemoveAtUninitialized @ 141a18b30

void __thiscall
TSparseArrayBase<304,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<304,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x130;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x130) = iVar10;
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
      pFVar13 = pFVar13 + 0x130;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 141a18cc0

void __thiscall
TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x1c;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x1c) = iVar10;
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
      pFVar13 = pFVar13 + 0x1c;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 141a18e40

void __thiscall
TSparseArrayBase<48,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<48,8,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>_>)0x0) {
      FVar14 = FVar2;
    }
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    puVar13 = (undefined4 *)(uVar11 * 0x30 + (longlong)FVar14);
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
        *(int *)((longlong)FVar14 + (longlong)this->FirstFreeIndex * 0x30) = iVar10;
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
      puVar13 = puVar13 + 0xc;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 141a18ff0

void __thiscall
TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x40;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x40) = iVar10;
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
      pFVar13 = pFVar13 + 0x40;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 141a19170

void __thiscall
TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0xf0;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0xf0) = iVar10;
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
      pFVar13 = pFVar13 + 0xf0;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AllocateIndex @ 141a75440

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<16,4,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
    this = (TSparseArrayBase<16,4,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)param_1 * 0x10 + (longlong)this);
  return __return_storage_ptr__;
}

// AllocateIndex @ 141a75600

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<44,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x2c;
  return __return_storage_ptr__;
}

// Compact @ 141a7c5d0

bool __thiscall
TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10;
        iVar13 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar3 * 0x10,(longlong)iVar13 << 4);
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
                    (0x10,4,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
        }
        return bVar9;
      }
      _Dst = pFVar14 + (longlong)iVar8 * 0x10;
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
    memmove(_Dst,pFVar14 + (longlong)iVar16 * 0x10,0x10);
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

// RemoveAtUninitialized @ 141a8fa60

void __thiscall
TSparseArrayBase<16,4,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,4,TInlineSparseArrayAllocator<512,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
           *this,int param_1,int param_2)

{
  uint *puVar1;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar2;
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
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_> FVar14;
  
  if (param_2 != 0) {
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    uVar11 = (ulonglong)param_1;
    FVar14 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)this;
    if (FVar2 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_>)0x0) {
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

// AddUninitialized @ 141d76a10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AddUninitialized(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *this,FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->AllocationFlags,1);
    FVar7 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    uVar6 = iVar5 >> 0x1f & 0x1f;
    iVar5 = iVar5 + uVar6;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->AllocationFlags;
    }
    puVar1 = (uint *)((longlong)FVar7 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x1f));
  }
  else {
    iVar4 = this->FirstFreeIndex;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x10 + 4);
    iVar5 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// Compact @ 141d789b0

bool __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Compact(TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
        pFVar14 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10;
        iVar13 = ((this->Data).ArrayNum - uVar19) - uVar3;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar3 * 0x10,(longlong)iVar13 << 4);
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
                    (0x10,8,iVar13,(ForAnyElementType *)this,iVar13,piVar1);
        }
        return bVar9;
      }
      _Dst = pFVar14 + (longlong)iVar8 * 0x10;
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
    memmove(_Dst,pFVar14 + (longlong)iVar16 * 0x10,0x10);
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

