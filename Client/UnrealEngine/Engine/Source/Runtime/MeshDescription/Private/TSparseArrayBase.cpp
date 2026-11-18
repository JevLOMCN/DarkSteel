// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 11

// AllocateIndex @ 14365fee0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this,
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

// AllocateIndex @ 143660080

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *this,
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

// AllocateIndex @ 143660230

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x18;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1436603d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *this,
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

// AllocateIndex @ 143660580

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x28;
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367c0f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this,
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
              (8,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 8) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 8 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 8) = iVar12;
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
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 8);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 8 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 8 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 8) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367c360

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,4,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<16,4,FDefaultSparseArrayAllocator> *this,
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
              (0x10,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 0x10) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 0x10 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 0x10) = iVar12;
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
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 0x10);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 0x10 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 0x10 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 0x10) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367c5f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<16,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<16,8,FDefaultSparseArrayAllocator> *this,
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
              (0x10,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 0x10) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 0x10 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 0x10) = iVar12;
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
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 0x10);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 0x10 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 0x10 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 0x10) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367c880

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *this,
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
  int iVar14;
  FScriptContainerElement *pFVar15;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar15 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar15 + (longlong)iVar12 * 0x18) = 0xffffffff;
        *(int *)(pFVar15 + (longlong)iVar12 * 0x18 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar15 + (longlong)this->FirstFreeIndex * 0x18) = iVar12;
        }
        this->FirstFreeIndex = iVar12;
        iVar4 = (this->AllocationFlags).NumBits;
        iVar14 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        if ((iVar4 == 0) || (iVar14 != (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5)) {
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
        puVar3 = (uint *)((longlong)FVar10 + (longlong)iVar14 * 4);
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
  iVar12 = *(int *)(pFVar15 + (longlong)param_1 * 0x18);
  iVar4 = *(int *)(pFVar15 + (longlong)param_1 * 0x18 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar15 + (longlong)iVar12 * 0x18 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar15 + (longlong)iVar4 * 0x18) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367cb10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *this,
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
              (0x20,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar14 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar14 + (longlong)iVar12 * 0x20) = 0xffffffff;
        *(int *)(pFVar14 + (longlong)iVar12 * 0x20 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar14 + (longlong)this->FirstFreeIndex * 0x20) = iVar12;
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
  iVar12 = *(int *)(pFVar14 + (longlong)param_1 * 0x20);
  iVar4 = *(int *)(pFVar14 + (longlong)param_1 * 0x20 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar14 + (longlong)iVar12 * 0x20 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar14 + (longlong)iVar4 * 0x20) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14367cda0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *this,
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
  int iVar14;
  FScriptContainerElement *pFVar15;
  
  piVar1 = &(this->Data).ArrayNum;
  piVar2 = &(this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (param_1 < *piVar1) {
    pFVar15 = (this->Data).AllocatorInstance.Data;
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar15 + (longlong)iVar12 * 0x28) = 0xffffffff;
        *(int *)(pFVar15 + (longlong)iVar12 * 0x28 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar15 + (longlong)this->FirstFreeIndex * 0x28) = iVar12;
        }
        this->FirstFreeIndex = iVar12;
        iVar4 = (this->AllocationFlags).NumBits;
        iVar14 = (int)((iVar4 >> 0x1f & 0x1fU) + iVar4) >> 5;
        if ((iVar4 == 0) || (iVar14 != (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5)) {
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
        puVar3 = (uint *)((longlong)FVar10 + (longlong)iVar14 * 4);
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
  iVar12 = *(int *)(pFVar15 + (longlong)param_1 * 0x28);
  iVar4 = *(int *)(pFVar15 + (longlong)param_1 * 0x28 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar15 + (longlong)iVar12 * 0x28 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar15 + (longlong)iVar4 * 0x28) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

