// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 25

// AllocateIndex @ 1448676a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xe8;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 144891280

void __thiscall
TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0xe8;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0xe8) = iVar10;
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
      pFVar13 = pFVar13 + 0xe8;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// AllocateIndex @ 144baa450

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<208,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0xd0;
  return __return_storage_ptr__;
}

// AllocateIndex @ 144d58110

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x20;
  return __return_storage_ptr__;
}

// Shrink @ 144d9c500

void __thiscall
TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  
  this_00 = &this->AllocationFlags;
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::FindLastFromImpl
                    (this_00,true,(this->AllocationFlags).NumBits);
  uVar7 = iVar6 + 1;
  if ((int)uVar7 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar11 = this->FirstFreeIndex;
      uVar8 = (ulonglong)uVar11;
      pFVar9 = (this->Data).AllocatorInstance.Data;
      while (uVar11 != 0xffffffff) {
        lVar13 = (longlong)(int)uVar8 * 0x20;
        if ((int)uVar8 < (int)uVar7) {
          uVar8 = (ulonglong)*(uint *)(pFVar9 + lVar13 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar9 + lVar13 + 4);
          uVar8 = (ulonglong)iVar6;
          iVar12 = *(int *)(pFVar9 + lVar13);
          if (iVar6 != -1) {
            *(int *)(pFVar9 + uVar8 * 0x20) = iVar12;
          }
          if (iVar12 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar9 + (longlong)iVar12 * 0x20 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar11 = (uint)uVar8;
      }
    }
    uVar11 = (this->Data).ArrayNum - uVar7;
    if (((int)(uVar11 | uVar7) < 0) &&
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
      pFVar9 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      iVar6 = ((this->Data).ArrayNum - uVar11) - uVar7;
      if (iVar6 != 0) {
        memmove(pFVar9,pFVar9 + (longlong)(int)uVar11 * 0x20,(longlong)iVar6 << 5);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar11;
    }
    iVar6 = (this->AllocationFlags).NumBits;
    iVar12 = iVar6 - uVar7;
    if ((((int)uVar7 < 0) || (iVar12 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x3ee,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar3 = (this->AllocationFlags).NumBits;
    if (iVar6 != iVar3) {
      FVar10 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)this_00;
      }
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)FVar10,uVar7,(uint *)FVar10,iVar6,(iVar3 - iVar12) - uVar7);
    }
    piVar1 = &(this->AllocationFlags).NumBits;
    *piVar1 = *piVar1 - iVar12;
    iVar6 = (this->AllocationFlags).NumBits;
    uVar11 = iVar6 >> 0x1f & 0x1f;
    uVar7 = iVar6 + uVar11;
    iVar6 = (uVar7 & 0x1f) - uVar11;
    if (iVar6 != 0) {
      FVar10 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
    }
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar6,(ForAnyElementType *)this,iVar6,piVar1);
  }
  return;
}

// AddUninitializedAtLowestFreeIndex @ 144ef73a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<408,8,FDefaultSparseArrayAllocator>::AddUninitializedAtLowestFreeIndex
          (TSparseArrayBase<408,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  FSparseArrayAllocationInfo *pFVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  
  this_00 = &this->AllocationFlags;
  if (this->NumFreeIndices == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x198,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(this_00,true);
    pFVar10 = (this->Data).AllocatorInstance.Data;
  }
  else {
    iVar5 = *param_1;
    FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    iVar1 = (this->AllocationFlags).NumBits;
    uVar14 = -1 << ((byte)iVar5 & 0x1f);
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)this_00;
    }
    uVar11 = iVar1 + 0x1fU >> 5;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
    uVar9 = (ulonglong)iVar5;
    if (iVar5 < (int)uVar11) {
      puVar6 = (uint *)((longlong)FVar13 + uVar9 * 4);
LAB_144ef7403:
      iVar8 = (int)uVar9;
      if ((*puVar6 & uVar14) == uVar14) goto code_r0x000144ef740d;
      uVar14 = ~*(uint *)((longlong)FVar13 + (longlong)iVar8 * 4) & uVar14;
      iVar2 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      iVar5 = 0x20;
      if (uVar14 != 0) {
        iVar5 = iVar2;
      }
      iVar5 = iVar5 + iVar8 * 0x20;
      if (iVar1 <= iVar5) goto LAB_144ef741e;
      if (iVar5 != -1) {
        if (iVar5 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar3)();
            return pFVar7;
          }
        }
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)this_00;
        }
        puVar6 = (uint *)((longlong)FVar13 +
                         (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar6 = *puVar6 | 1 << ((byte)iVar5 & 0x1f);
        TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
      }
      goto LAB_144ef7423;
    }
LAB_144ef741e:
    iVar5 = -1;
LAB_144ef7423:
    *param_1 = iVar5 + 1;
    pFVar10 = (this->Data).AllocatorInstance.Data;
    if (this->FirstFreeIndex == iVar5) {
      this->FirstFreeIndex = *(int *)(pFVar10 + (longlong)iVar5 * 0x198 + 4);
    }
    pFVar12 = pFVar10 + (longlong)iVar5 * 0x198;
    if (-1 < *(int *)(pFVar12 + 4)) {
      *(int *)(pFVar10 + (longlong)*(int *)(pFVar12 + 4) * 0x198) = *(int *)pFVar12;
    }
    if (-1 < *(int *)pFVar12) {
      *(int *)(pFVar10 + (longlong)*(int *)pFVar12 * 0x198 + 4) = *(int *)(pFVar12 + 4);
    }
    this->NumFreeIndices = this->NumFreeIndices + -1;
  }
  __return_storage_ptr__->Index = iVar5;
  __return_storage_ptr__->Pointer = pFVar10 + (longlong)iVar5 * 0x198;
  return __return_storage_ptr__;
code_r0x000144ef740d:
  uVar9 = (ulonglong)(iVar8 + 1U);
  puVar6 = puVar6 + 1;
  uVar14 = 0xffffffff;
  if ((int)uVar11 <= (int)(iVar8 + 1U)) goto LAB_144ef741e;
  goto LAB_144ef7403;
}

// AllocateIndex @ 144ef7ad0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<328,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<328,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x148;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14504aee0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::AllocateIndex(TSparseArrayBase<12,4,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar8;
  
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pTVar3 + param_1;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1453a0830

void __thiscall
TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x24;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x24) = iVar10;
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
      pFVar13 = pFVar13 + 0x24;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Shrink @ 1453ad7a0

void __thiscall
TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::Shrink(TSparseArrayBase<36,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *this)

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
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  
  iVar9 = (this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (iVar9 == 0) {
LAB_1453ad7f6:
    uVar10 = 0;
  }
  else {
    FVar11 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<unsigned_int>)0x0) {
      FVar11 = (ForElementType<unsigned_int>)this_00;
    }
    uVar14 = iVar9 + 0x1fU >> 5;
    uVar13 = (ulonglong)uVar14;
    uVar10 = 0xffffffff >> (-(char)iVar9 & 0x1fU);
    do {
      if (uVar14 == 0) goto LAB_1453ad7f6;
      uVar14 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar14;
      uVar12 = uVar10 & *(uint *)((longlong)FVar11 + uVar13 * 4);
      uVar10 = 0xffffffff;
    } while (uVar12 == 0);
    uVar13 = (ulonglong)uVar12 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = uVar14 * 0x20 + (int)lVar6;
  }
  if ((int)uVar10 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar14 = this->FirstFreeIndex;
      uVar13 = (ulonglong)uVar14;
      pFVar5 = (this->Data).AllocatorInstance.Data;
      while (uVar14 != 0xffffffff) {
        pFVar2 = pFVar5 + (longlong)(int)uVar13 * 0x24;
        if ((int)uVar13 < (int)uVar10) {
          uVar13 = (ulonglong)*(uint *)(pFVar2 + 4);
        }
        else {
          iVar9 = *(int *)(pFVar2 + 4);
          uVar13 = (ulonglong)iVar9;
          iVar15 = *(int *)pFVar2;
          if (iVar9 != -1) {
            *(int *)(pFVar5 + uVar13 * 0x24) = iVar15;
          }
          if (iVar15 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar9;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar15 * 0x24 + 4) = iVar9;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar14 = (uint)uVar13;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x24;
      iVar9 = ((this->Data).ArrayNum - uVar14) - uVar10;
      if (iVar9 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar14 * 0x24,(longlong)iVar9 * 0x24);
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
              (0x24,4,iVar9,(ForAnyElementType *)this,iVar9,piVar1);
  }
  return;
}

// AllocateIndex @ 14541ecd0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::AllocateIndex(TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar5 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
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
  pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar7 = &this->AllocationFlags;
  }
  __return_storage_ptr__->Index = param_1;
  puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)iVar5 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14541ee80

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<336,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<336,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x150;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14541f030

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::AllocateIndex(TSparseArrayBase<24,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar8;
  
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pTVar3 + param_1;
  return __return_storage_ptr__;
}

// AllocateIndex @ 14541f1d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<64,16,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<64,16,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
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

// RemoveAtUninitialized @ 1454497b0

void __thiscall
TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
          (TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *this,int param_1,int param_2)

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

// RemoveAtUninitialized @ 145449930

void __thiscall
TSparseArrayBase<336,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<336,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x150;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x150) = iVar10;
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
      pFVar13 = pFVar13 + 0x150;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Reserve @ 14544d640

void __thiscall
TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::Reserve(TSparseArrayBase<16,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar3;
  int iVar4;
  int iVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  uint uVar8;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
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
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
                (0x10,8,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *)this,
                 iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
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
          TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          ::ForElementType<unsigned_int>::ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
          (this->AllocationFlags).MaxBits = uVar10 << 5;
        }
        pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
        if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar7 = this_00;
        }
        memset(pTVar7,0,(ulonglong)uVar10 << 2);
        iVar4 = (this->AllocationFlags).NumBits;
        uVar8 = iVar4 >> 0x1f & 0x1f;
        uVar10 = iVar4 + uVar8;
        iVar4 = (uVar10 & 0x1f) - uVar8;
        if (iVar4 != 0) {
          pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
          if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar7 = this_00;
          }
          puVar2 = (pTVar7->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
          *(uint *)puVar2 = *(uint *)puVar2 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
        }
      }
    }
    else if (-1 < iVar9) {
      iVar4 = TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              ::AddUninitialized(this_00,iVar9);
      TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
      ::SetRange(this_00,iVar4,iVar9,false);
    }
  }
  return;
}

// AddUninitializedAtLowestFreeIndex @ 145492740

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitializedAtLowestFreeIndex
          (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  FSparseArrayAllocationInfo *pFVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  
  this_00 = &this->AllocationFlags;
  if (this->NumFreeIndices == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(this_00,true);
    pFVar11 = (this->Data).AllocatorInstance.Data;
  }
  else {
    iVar6 = *param_1;
    FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    iVar2 = (this->AllocationFlags).NumBits;
    uVar14 = -1 << ((byte)iVar6 & 0x1f);
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)this_00;
    }
    uVar12 = iVar2 + 0x1fU >> 5;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
    uVar10 = (ulonglong)iVar6;
    if (iVar6 < (int)uVar12) {
      puVar7 = (uint *)((longlong)FVar13 + uVar10 * 4);
LAB_1454927a3:
      iVar9 = (int)uVar10;
      if ((*puVar7 & uVar14) == uVar14) goto code_r0x0001454927ad;
      uVar14 = ~*(uint *)((longlong)FVar13 + (longlong)iVar9 * 4) & uVar14;
      iVar3 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      iVar6 = 0x20;
      if (uVar14 != 0) {
        iVar6 = iVar3;
      }
      iVar6 = iVar6 + iVar9 * 0x20;
      if (iVar2 <= iVar6) goto LAB_1454927be;
      if (iVar6 != -1) {
        if (iVar6 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar4)();
            return pFVar8;
          }
        }
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)this_00;
        }
        puVar7 = (uint *)((longlong)FVar13 +
                         (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar7 = *puVar7 | 1 << ((byte)iVar6 & 0x1f);
        TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
      }
      goto LAB_1454927c3;
    }
LAB_1454927be:
    iVar6 = -1;
LAB_1454927c3:
    *param_1 = iVar6 + 1;
    pFVar11 = (this->Data).AllocatorInstance.Data;
    if (this->FirstFreeIndex == iVar6) {
      this->FirstFreeIndex = *(int *)(pFVar11 + (longlong)iVar6 * 0x18 + 4);
    }
    pFVar1 = pFVar11 + (longlong)iVar6 * 0x18;
    if (-1 < *(int *)(pFVar11 + (longlong)iVar6 * 0x18 + 4)) {
      *(int *)(pFVar11 + (longlong)*(int *)(pFVar11 + (longlong)iVar6 * 0x18 + 4) * 0x18) =
           *(int *)pFVar1;
    }
    if (-1 < *(int *)pFVar1) {
      *(int *)(pFVar11 + (longlong)*(int *)pFVar1 * 0x18 + 4) = *(int *)(pFVar1 + 4);
    }
    this->NumFreeIndices = this->NumFreeIndices + -1;
  }
  __return_storage_ptr__->Index = iVar6;
  __return_storage_ptr__->Pointer = pFVar11 + (longlong)iVar6 * 0x18;
  return __return_storage_ptr__;
code_r0x0001454927ad:
  uVar10 = (ulonglong)(iVar9 + 1U);
  puVar7 = puVar7 + 1;
  uVar14 = 0xffffffff;
  if ((int)uVar12 <= (int)(iVar9 + 1U)) goto LAB_1454927be;
  goto LAB_1454927a3;
}

// AllocateIndex @ 1454930e0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::AllocateIndex(TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uchar *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar8;
  
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
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
  pTVar8 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
            *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
    pTVar8 = &this->AllocationFlags;
  }
  puVar2 = (pTVar8->AllocatorInstance).InlineData + (longlong)iVar6 * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pTVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pTVar3 + param_1;
  return __return_storage_ptr__;
}

// InsertUninitialized @ 1454abbc0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::InsertUninitialized
          (TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
           *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *this_00;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  byte bVar8;
  int iVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_> *pTVar10;
  int iVar11;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar12;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar13;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pTVar10 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::
    ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_>
              (8,8,(param_1 - *piVar1) + 1,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *)this,
               piVar1,&(this->Data).ArrayMax);
    iVar11 = *piVar2;
    pTVar10 = (this->Data).AllocatorInstance.Data;
    if (iVar11 < *piVar1) {
      do {
        pTVar10[iVar11]._s_1.PrevFreeIndex = -1;
        *(int *)((longlong)(pTVar10 + iVar11) + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          pTVar10[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar11;
        }
        this->FirstFreeIndex = iVar11;
        iVar6 = TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                ::AddUninitialized(this_00,1);
        pTVar13 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
        pTVar12 = this_00;
        if (pTVar13 !=
            (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar12 = pTVar13;
        }
        bVar8 = (byte)iVar6 & 0x1f;
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = iVar6 + 0x1f;
          bVar8 = bVar8 - 0x20;
        }
        puVar3 = (pTVar12->AllocatorInstance).InlineData + (longlong)(iVar9 >> 5) * 4;
        *(uint *)puVar3 = *(uint *)puVar3 & ~(1 << (bVar8 & 0x1f));
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
        iVar11 = *piVar2;
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
  pTVar13 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
  if (pTVar13 ==
      (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar13 = this_00;
  }
  if (((*(uint *)((pTVar13->AllocatorInstance).InlineData +
                 (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
        (param_1 & 0x1fU) & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x184,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
    return pFVar7;
  }
  this->NumFreeIndices = this->NumFreeIndices + -1;
  iVar11 = pTVar10[param_1]._s_1.PrevFreeIndex;
  iVar6 = *(int *)((longlong)pTVar10 + (longlong)param_1 * 8 + 4);
  if (iVar11 == -1) {
    this->FirstFreeIndex = iVar6;
  }
  else {
    *(int *)((longlong)pTVar10 + (longlong)iVar11 * 8 + 4) = iVar6;
  }
  if (iVar6 != -1) {
    pTVar10[iVar6]._s_1.PrevFreeIndex = iVar11;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Reserve @ 14554f810

void __thiscall
TSparseArrayBase<12,4,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
::Reserve(TSparseArrayBase<12,4,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  uchar *puVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar4;
  int iVar5;
  int iVar6;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar7;
  uint uVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_> *pTVar9;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *this_00;
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
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                (0xc,4,param_1,
                 (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)this,
                 iVar5,piVar1);
    }
    iVar5 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                      (0xc,4,iVar10,
                       (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                       this,&(this->Data).ArrayNum,piVar1);
    pTVar4 = (this->Data).AllocatorInstance.Data;
    lVar2 = (longlong)param_1 + -1;
    if (iVar5 <= lVar2) {
      lVar12 = (lVar2 - iVar5) + 1;
      pTVar9 = pTVar4 + lVar2;
      iVar5 = param_1;
      do {
        iVar5 = iVar5 + -1;
        if (this->NumFreeIndices != 0) {
          pTVar4[this->FirstFreeIndex]._s_1.PrevFreeIndex = iVar5;
        }
        (pTVar9->_s_1).PrevFreeIndex = -1;
        if (this->NumFreeIndices < 1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->FirstFreeIndex;
        }
        *(int *)((longlong)pTVar9 + 4) = iVar6;
        pTVar9 = pTVar9 + -1;
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
          TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          ::ForElementType<unsigned_int>::ResizeAllocation(&this_00->AllocatorInstance,0,uVar11,4);
          (this->AllocationFlags).MaxBits = uVar11 << 5;
        }
        pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
        if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar7 = this_00;
        }
        memset(pTVar7,0,(ulonglong)uVar11 << 2);
        iVar5 = (this->AllocationFlags).NumBits;
        uVar8 = iVar5 >> 0x1f & 0x1f;
        uVar11 = iVar5 + uVar8;
        iVar5 = (uVar11 & 0x1f) - uVar8;
        if (iVar5 != 0) {
          pTVar7 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(this->AllocationFlags).AllocatorInstance.SecondaryData.Data;
          if (pTVar7 == (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar7 = this_00;
          }
          puVar3 = (pTVar7->AllocatorInstance).InlineData + (longlong)((int)uVar11 >> 5) * 4;
          *(uint *)puVar3 = *(uint *)puVar3 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
        }
      }
    }
    else if (-1 < iVar10) {
      iVar5 = TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              ::AddUninitialized(this_00,iVar10);
      TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
      ::SetRange(this_00,iVar5,iVar10,false);
    }
  }
  return;
}

// AllocateIndex @ 14557fbf0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<2240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<2240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x8c0;
  return __return_storage_ptr__;
}

// AllocateIndex @ 145619ad0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 8;
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14563a210

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  byte bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar10 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    iVar11 = *piVar2;
    pFVar10 = (this->Data).AllocatorInstance.Data;
    if (iVar11 < *piVar1) {
      do {
        *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8) = 0xffffffff;
        *(int *)(pFVar10 + (longlong)iVar11 * 8 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar10 + (longlong)this->FirstFreeIndex * 8) = iVar11;
        }
        this->FirstFreeIndex = iVar11;
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)this_00;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar13;
        }
        bVar8 = (byte)iVar6 & 0x1f;
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = iVar6 + 0x1f;
          bVar8 = bVar8 - 0x20;
        }
        puVar3 = (uint *)((longlong)FVar12 + (longlong)(iVar9 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (bVar8 & 0x1f));
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
        iVar11 = *piVar2;
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
    FVar13 = (ForElementType<unsigned_int>)this_00;
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
  iVar11 = *(int *)(pFVar10 + (longlong)param_1 * 8);
  iVar6 = *(int *)(pFVar10 + (longlong)param_1 * 8 + 4);
  if (iVar11 == -1) {
    this->FirstFreeIndex = iVar6;
  }
  else {
    *(int *)(pFVar10 + (longlong)iVar11 * 8 + 4) = iVar6;
  }
  if (iVar6 != -1) {
    *(int *)(pFVar10 + (longlong)iVar6 * 8) = iVar11;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14568c810

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  byte bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar10 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar11 = *piVar2;
    pFVar10 = (this->Data).AllocatorInstance.Data;
    if (iVar11 < *piVar1) {
      do {
        *(undefined4 *)(pFVar10 + (longlong)iVar11 * 0x50) = 0xffffffff;
        *(int *)(pFVar10 + (longlong)iVar11 * 0x50 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar10 + (longlong)this->FirstFreeIndex * 0x50) = iVar11;
        }
        this->FirstFreeIndex = iVar11;
        iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,1);
        FVar13 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)this_00;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar13;
        }
        bVar8 = (byte)iVar6 & 0x1f;
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = iVar6 + 0x1f;
          bVar8 = bVar8 - 0x20;
        }
        puVar3 = (uint *)((longlong)FVar12 + (longlong)(iVar9 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (bVar8 & 0x1f));
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
        iVar11 = *piVar2;
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
    FVar13 = (ForElementType<unsigned_int>)this_00;
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
  iVar11 = *(int *)(pFVar10 + (longlong)param_1 * 0x50);
  iVar6 = *(int *)(pFVar10 + (longlong)param_1 * 0x50 + 4);
  if (iVar11 == -1) {
    this->FirstFreeIndex = iVar6;
  }
  else {
    *(int *)(pFVar10 + (longlong)iVar11 * 0x50 + 4) = iVar6;
  }
  if (iVar6 != -1) {
    *(int *)(pFVar10 + (longlong)iVar6 * 0x50) = iVar11;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

