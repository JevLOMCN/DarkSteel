// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 26

// AllocateIndex @ 1460aa320

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// RemoveAtUninitialized @ 1460e80d0

void __thiscall
TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<256,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x100;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x100) = iVar10;
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
      pFVar13 = pFVar13 + 0x100;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1460e8250

void __thiscall
TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<336,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// AddUninitialized @ 146123b50

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::AddUninitialized
          (TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *this,
          FSparseArrayAllocationInfo *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  
  if (this->NumFreeIndices == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x140,8,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                       &(this->Data).ArrayMax);
    TBitArray<FDefaultBitArrayAllocator>::Add(&this->AllocationFlags,false);
  }
  else {
    iVar4 = this->FirstFreeIndex;
    iVar1 = this->NumFreeIndices + -1;
    pFVar3 = (this->Data).AllocatorInstance.Data;
    iVar2 = *(int *)(pFVar3 + (longlong)iVar4 * 0x140 + 4);
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(pFVar3 + (longlong)iVar2 * 0x140) = 0xffffffff;
    }
  }
  AllocateIndex(this,__return_storage_ptr__,iVar4);
  return __return_storage_ptr__;
}

// AllocateIndex @ 146124300

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<6,2,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<6,2,FDefaultSparseArrayAllocator> *this,
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

// AllocateIndex @ 1461244a0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x140;
  return __return_storage_ptr__;
}

// AllocateIndex @ 146124640

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x38;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1461247f0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0xc;
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14613f780

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *this,
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
              (0x38,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,
               &(this->Data).ArrayMax);
    iVar12 = *piVar2;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar15 + (longlong)iVar12 * 0x38) = 0xffffffff;
        *(int *)(pFVar15 + (longlong)iVar12 * 0x38 + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar15 + (longlong)this->FirstFreeIndex * 0x38) = iVar12;
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
  iVar12 = *(int *)(pFVar15 + (longlong)param_1 * 0x38);
  iVar4 = *(int *)(pFVar15 + (longlong)param_1 * 0x38 + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar15 + (longlong)iVar12 * 0x38 + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar15 + (longlong)iVar4 * 0x38) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 14613fa10

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::InsertUninitialized
          (TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *this,
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
              (0xc,4,(param_1 - *piVar1) + 1,(ForAnyElementType *)this,piVar1,&(this->Data).ArrayMax
              );
    iVar12 = *piVar2;
    pFVar15 = (this->Data).AllocatorInstance.Data;
    if (iVar12 < *piVar1) {
      do {
        *(undefined4 *)(pFVar15 + (longlong)iVar12 * 0xc) = 0xffffffff;
        *(int *)(pFVar15 + (longlong)iVar12 * 0xc + 4) = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar15 + (longlong)this->FirstFreeIndex * 0xc) = iVar12;
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
  iVar12 = *(int *)(pFVar15 + (longlong)param_1 * 0xc);
  iVar4 = *(int *)(pFVar15 + (longlong)param_1 * 0xc + 4);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar4;
  }
  else {
    *(int *)(pFVar15 + (longlong)iVar12 * 0xc + 4) = iVar4;
  }
  if (iVar4 != -1) {
    *(int *)(pFVar15 + (longlong)iVar4 * 0xc) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Reserve @ 146150ec0

void __thiscall
TSparseArrayBase<392,8,FDefaultSparseArrayAllocator>::Reserve
          (TSparseArrayBase<392,8,FDefaultSparseArrayAllocator> *this,int param_1)

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
                (0x188,8,param_1,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x188,8,iVar9,(ForAnyElementType *)this,&(this->Data).ArrayNum,piVar1);
    pFVar3 = (this->Data).AllocatorInstance.Data;
    lVar11 = (longlong)param_1 + -1;
    if (iVar4 <= lVar11) {
      pFVar8 = pFVar3 + lVar11 * 0x188;
      lVar11 = (lVar11 - iVar4) + 1;
      iVar4 = param_1;
      do {
        iVar4 = iVar4 + -1;
        if (this->NumFreeIndices != 0) {
          *(int *)(pFVar3 + (longlong)this->FirstFreeIndex * 0x188) = iVar4;
        }
        *(undefined4 *)pFVar8 = 0xffffffff;
        if (this->NumFreeIndices < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = this->FirstFreeIndex;
        }
        *(int *)(pFVar8 + 4) = iVar5;
        pFVar8 = pFVar8 + -0x188;
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

// Shrink @ 146154790

void __thiscall
TSparseArrayBase<6,2,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<6,2,FDefaultSparseArrayAllocator> *this)

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
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 8;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 8) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 8 + 4) = iVar8;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 8,(longlong)iVar8 << 3);
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
              (8,4,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// Shrink @ 1461548e0

void __thiscall
TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *this)

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
        pFVar3 = pFVar5 + (longlong)(int)uVar9 * 8;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar3 + 4);
        }
        else {
          iVar8 = *(int *)(pFVar3 + 4);
          uVar9 = (ulonglong)iVar8;
          iVar4 = *(int *)pFVar3;
          if (iVar8 != -1) {
            *(int *)(pFVar5 + uVar9 * 8) = iVar4;
          }
          if (iVar4 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar8;
          }
          else {
            *(int *)(pFVar5 + (longlong)iVar4 * 8 + 4) = iVar8;
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
      pFVar5 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
      iVar8 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar8 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(int)uVar10 * 8,(longlong)iVar8 << 3);
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
              (8,8,iVar8,(ForAnyElementType *)this,iVar8,piVar2);
  }
  return;
}

// Shrink @ 146154a30

void __thiscall
TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *this)

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
        lVar7 = (longlong)(int)uVar9 * 0x140;
        if ((int)uVar9 < (int)uVar1) {
          uVar9 = (ulonglong)*(uint *)(pFVar8 + lVar7 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar8 + lVar7 + 4);
          uVar9 = (ulonglong)iVar6;
          iVar3 = *(int *)(pFVar8 + lVar7);
          if (iVar6 != -1) {
            *(int *)(pFVar8 + uVar9 * 0x140) = iVar3;
          }
          if (iVar3 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar8 + (longlong)iVar3 * 0x140 + 4) = iVar6;
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
      pFVar8 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x140;
      iVar6 = ((this->Data).ArrayNum - uVar10) - uVar1;
      if (iVar6 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar10 * 0x140,(longlong)iVar6 * 0x140);
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
              (0x140,8,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// Shrink @ 146154bb0

void __thiscall
TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *this)

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
              (0x38,4,iVar6,(ForAnyElementType *)this,iVar6,piVar2);
  }
  return;
}

// AllocateIndex @ 146192130

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// AllocateIndex @ 1461922d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<408,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<408,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x198;
  return __return_storage_ptr__;
}

// AllocateIndex @ 146192480

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x38;
  return __return_storage_ptr__;
}

// AllocateIndex @ 146192630

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x48;
  return __return_storage_ptr__;
}

// AllocateIndex @ 1461927d0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::AllocateIndex
          (TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *this,
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
  __return_storage_ptr__->Pointer = (this->Data).AllocatorInstance.Data + (longlong)param_1 * 0x70;
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 1461c9ee0

void __thiscall
TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<288,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x120;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x120) = iVar10;
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
      pFVar13 = pFVar13 + 0x120;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// RemoveAtUninitialized @ 1461ca070

void __thiscall
TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Shrink @ 1461d3d10

void __thiscall
TSparseArrayBase<112,8,FDefaultSparseArrayAllocator>::Shrink
          (TSparseArrayBase<112,8,FDefaultSparseArrayAllocator> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<unsigned_int> FVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  
  iVar6 = (this->AllocationFlags).NumBits;
  this_00 = &this->AllocationFlags;
  if (iVar6 == 0) {
LAB_1461d3d66:
    uVar7 = 0;
  }
  else {
    FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)this_00;
    }
    uVar13 = iVar6 + 0x1fU >> 5;
    uVar12 = (ulonglong)uVar13;
    uVar7 = 0xffffffff >> (-(char)iVar6 & 0x1fU);
    do {
      if (uVar13 == 0) goto LAB_1461d3d66;
      uVar13 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar13;
      uVar11 = uVar7 & *(uint *)((longlong)FVar9 + uVar12 * 4);
      uVar7 = 0xffffffff;
    } while (uVar11 == 0);
    uVar12 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = uVar13 * 0x20 + (int)lVar8;
  }
  if ((int)uVar7 < (this->Data).ArrayNum) {
    if (0 < this->NumFreeIndices) {
      uVar13 = this->FirstFreeIndex;
      uVar12 = (ulonglong)uVar13;
      pFVar10 = (this->Data).AllocatorInstance.Data;
      while (uVar13 != 0xffffffff) {
        lVar8 = (longlong)(int)uVar12 * 0x70;
        if ((int)uVar12 < (int)uVar7) {
          uVar12 = (ulonglong)*(uint *)(pFVar10 + lVar8 + 4);
        }
        else {
          iVar6 = *(int *)(pFVar10 + lVar8 + 4);
          uVar12 = (ulonglong)iVar6;
          iVar14 = *(int *)(pFVar10 + lVar8);
          if (iVar6 != -1) {
            *(int *)(pFVar10 + uVar12 * 0x70) = iVar14;
          }
          if (iVar14 == -1) {
            this->NumFreeIndices = this->NumFreeIndices + -1;
            this->FirstFreeIndex = iVar6;
          }
          else {
            *(int *)(pFVar10 + (longlong)iVar14 * 0x70 + 4) = iVar6;
            this->NumFreeIndices = this->NumFreeIndices + -1;
          }
        }
        uVar13 = (uint)uVar12;
      }
    }
    uVar13 = (this->Data).ArrayNum - uVar7;
    if ((-1 < (int)(~uVar7 & ~uVar13)) &&
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
    if (uVar13 != 0) {
      pFVar10 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x70;
      iVar6 = ((this->Data).ArrayNum - uVar13) - uVar7;
      if (iVar6 != 0) {
        memmove(pFVar10,pFVar10 + (longlong)(int)uVar13 * 0x70,(longlong)iVar6 * 0x70);
      }
      piVar1 = &(this->Data).ArrayNum;
      *piVar1 = *piVar1 - uVar13;
    }
    iVar6 = (this->AllocationFlags).NumBits;
    iVar14 = iVar6 - uVar7;
    if (((((int)uVar7 < 0) || (iVar14 < 0)) || ((this->AllocationFlags).NumBits < iVar6)) &&
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
      FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)this_00;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar9;
      }
      FBitArrayMemory::MemmoveBitsWordOrder
                ((uint *)FVar15,uVar7,(uint *)FVar15,iVar6,(iVar3 - iVar14) - uVar7);
    }
    piVar1 = &(this->AllocationFlags).NumBits;
    *piVar1 = *piVar1 - iVar14;
    iVar6 = (this->AllocationFlags).NumBits;
    uVar13 = iVar6 >> 0x1f & 0x1f;
    uVar7 = iVar6 + uVar13;
    iVar6 = (uVar7 & 0x1f) - uVar13;
    if (iVar6 != 0) {
      FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar9 + (longlong)((int)uVar7 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
    }
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
  }
  iVar6 = (this->Data).ArrayNum;
  piVar1 = &(this->Data).ArrayMax;
  if (*piVar1 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar6,(ForAnyElementType *)this,iVar6,piVar1);
  }
  return;
}

// AllocateIndex @ 146206ff0

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::AllocateIndex(TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> FVar4;
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
  if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0) {
    this = (TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
            *)FVar4;
  }
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = (void *)((longlong)this + (longlong)param_1 * 8);
  return __return_storage_ptr__;
}

// InsertUninitialized @ 146221570

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::InsertUninitialized
          (TSparseArrayBase<8,4,TSparseArrayAllocator<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
           *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSparseArrayAllocationInfo *pFVar8;
  byte bVar9;
  int iVar10;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> FVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  
  piVar1 = &(this->Data).ArrayNum;
  FVar11 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)this;
  if (param_1 < *piVar1) {
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0) {
      FVar11 = FVar4;
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>_>
              (8,4,(param_1 - *piVar1) + 1,
               (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_> *)this,
               piVar1,&(this->Data).ArrayMax);
    FVar4 = (this->Data).AllocatorInstance.SecondaryData;
    iVar12 = (this->AllocationFlags).NumBits;
    if (FVar4 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,4>_>_>)0x0) {
      FVar11 = FVar4;
    }
    if (iVar12 < *piVar1) {
      do {
        puVar2 = (undefined4 *)((longlong)FVar11 + (longlong)iVar12 * 8);
        *puVar2 = 0xffffffff;
        puVar2[1] = this->FirstFreeIndex;
        if (this->NumFreeIndices != 0) {
          *(int *)((longlong)FVar11 + (longlong)this->FirstFreeIndex * 8) = iVar12;
        }
        this->FirstFreeIndex = iVar12;
        iVar7 = TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                AddUninitialized(&this->AllocationFlags,1);
        FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<unsigned_int>)&this->AllocationFlags;
        if (FVar14 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar14;
        }
        bVar9 = (byte)iVar7 & 0x1f;
        iVar10 = iVar7;
        if (iVar7 < 0) {
          iVar10 = iVar7 + 0x1f;
          bVar9 = bVar9 - 0x20;
        }
        puVar3 = (uint *)((longlong)FVar13 + (longlong)(iVar10 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (bVar9 & 0x1f));
        if ((iVar7 != iVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags.Add(false) == FreeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0x17a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
          return pFVar8;
        }
        this->NumFreeIndices = this->NumFreeIndices + 1;
        iVar12 = (this->AllocationFlags).NumBits;
      } while (iVar12 < *piVar1);
    }
  }
  if (((param_1 < 0) || ((this->AllocationFlags).NumBits <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar8;
  }
  FVar14 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if (((*(uint *)((longlong)FVar14 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4
                 ) >> (param_1 & 0x1fU) & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0x184,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FSparseArrayAllocationInfo *)(*pcVar5)();
    return pFVar8;
  }
  this->NumFreeIndices = this->NumFreeIndices + -1;
  iVar12 = *(int *)((longlong)FVar11 + (longlong)param_1 * 8);
  iVar7 = *(int *)((uchar *)((longlong)FVar11 + 4) + (longlong)param_1 * 8);
  if (iVar12 == -1) {
    this->FirstFreeIndex = iVar7;
  }
  else {
    *(int *)((uchar *)((longlong)FVar11 + 4) + (longlong)iVar12 * 8) = iVar7;
  }
  if (iVar7 != -1) {
    *(int *)((longlong)FVar11 + (longlong)iVar7 * 8) = iVar12;
  }
  AllocateIndex(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// RemoveAtUninitialized @ 14622f180

void __thiscall
TSparseArrayBase<60,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::RemoveAtUninitialized
          (TSparseArrayBase<60,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    pFVar13 = pFVar2 + uVar11 * 0x3c;
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
        *(int *)(pFVar2 + (longlong)this->FirstFreeIndex * 0x3c) = iVar10;
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
      pFVar13 = pFVar13 + 0x3c;
      puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar7 >> 5) * 4);
      uVar8 = ~uVar12;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      *puVar1 = *puVar1 & uVar8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

