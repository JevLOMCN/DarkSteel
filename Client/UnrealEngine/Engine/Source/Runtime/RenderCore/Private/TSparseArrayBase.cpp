// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// AllocateIndex @ 145da0bf0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar7;
  
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 145da0da0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 145da0f50

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
::AllocateIndex(TSparseArrayBase<32,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar7;
  
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
           (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + param_1;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 145dc7800

void __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
::RemoveAtUninitialized
          (TSparseArrayBase<16,8,TSparseArrayAllocator<TRDGArrayAllocator<0>,TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_>_>
           *this,int param_1,int param_2)

{
  uchar *puVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar2;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  
  if (param_2 != 0) {
    pTVar2 = (this->Data).AllocatorInstance.Data;
    uVar11 = (ulonglong)param_1;
    bVar5 = (byte)param_1 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    pTVar13 = pTVar2 + uVar11;
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
      pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
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
        pTVar2[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar10;
      }
      (pTVar13->_s_1).PrevFreeIndex = -1;
      if (this->NumFreeIndices < 1) {
        iVar7 = -1;
      }
      else {
        iVar7 = this->FirstFreeIndex;
      }
      *(int *)((longlong)pTVar13 + 4) = iVar7;
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
      pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)
               (this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
      pTVar9 = &this->AllocationFlags;
      if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TRDGArrayAllocator<0>_>_> *)0x0) {
        pTVar9 = pTVar3;
      }
      iVar7 = iVar10;
      if (iVar10 < 0) {
        iVar7 = iVar10 + 0x1f;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      pTVar13 = pTVar13 + 1;
      puVar1 = (pTVar9->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *(uint *)puVar1 = *(uint *)puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 145dc88e0

void __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_>
::Reserve(TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar3;
  int iVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar7;
  uint uVar8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *this_00;
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
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                (0x10,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)this,
                 iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                      (0x10,8,iVar9,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)
                       this,&(this->Data).ArrayNum,piVar1);
    pTVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pTVar6 = pTVar3 + lVar11;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          pTVar3[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar4;
        }
        (pTVar6->_s_1).PrevFreeIndex = -1;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)((longlong)pTVar6 + 4) = iVar5;
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
          TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
          ForElementType<unsigned_int>::ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                  *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
        if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar7 = this_00;
        }
        memset(pTVar7,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar8 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar8;
        iVar4 = (uVar10 & 0x1f) - uVar8;
        if (iVar4 != 0) {
          pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                    *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
          if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar7 = this_00;
          }
          puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
          *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              ::AddUninitialized(this_00,iVar9);
      TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
      ::SetRange(this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// AllocateIndex @ 145e8c660

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<1040,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<1040,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x410;
  return __return_storage_ptr__;
}

