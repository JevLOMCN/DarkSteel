// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AddUninitialized @ 141f6e290

int __thiscall
TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>::
AddUninitialized(TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                 *this,FScriptSparseArrayLayout *param_1)

{
  TScriptBitArray<FDefaultBitArrayAllocator,void> *this_00;
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  
  if (this->NumFreeIndices == 0) {
    iVar8 = (this->Data).ArrayNum;
    uVar7 = param_1->Alignment;
    iVar3 = param_1->Size;
    (this->Data).ArrayNum = iVar8 + 1;
    if ((this->Data).ArrayMax < iVar8 + 1) {
      TScriptArray<TSizedDefaultAllocator<32>_>::ResizeGrow(&this->Data,iVar8,iVar3,uVar7);
    }
    iVar3 = (this->AllocationFlags).NumBits;
    this_00 = &this->AllocationFlags;
    (this->AllocationFlags).NumBits = iVar3 + 1;
    if ((this->AllocationFlags).MaxBits < iVar3 + 1) {
      TScriptBitArray<FDefaultBitArrayAllocator,void>::ReallocGrow(this_00,iVar3);
    }
    else {
      uVar10 = iVar3 >> 0x1f & 0x1f;
      uVar7 = iVar3 + uVar10;
      if ((uVar7 & 0x1f) == uVar10) {
        FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)this_00;
        }
        *(undefined4 *)((longlong)FVar9 + (longlong)((int)uVar7 >> 5) * 4) = 0;
      }
    }
    if (((iVar3 < 0) || ((this->AllocationFlags).NumBits <= iVar3)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)this_00;
    }
    puVar1 = (uint *)((longlong)FVar9 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar3 & 0x1f));
  }
  else {
    iVar8 = this->FirstFreeIndex;
    lVar4 = (this->Data)._padding_;
    iVar2 = *(int *)((longlong)(iVar8 * param_1->Size) + 4 + lVar4);
    iVar3 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar2 * param_1->Size + lVar4) = 0xffffffff;
    }
  }
  if (((iVar8 < 0) || ((this->AllocationFlags).NumBits <= iVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  FVar9 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar1 = (uint *)((longlong)FVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  return iVar8;
}

// AddUninitialized @ 1420f1480

int __thiscall
TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
::AddUninitialized(TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                   *this,FScriptSparseArrayLayout *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TScriptBitArray<TMemoryImageAllocator<0>,void> *this_00;
  ForElementType<unsigned_int> FVar11;
  
  if (this->NumFreeIndices == 0) {
    iVar8 = (this->Data).ArrayNum;
    uVar3 = param_1->Alignment;
    iVar4 = param_1->Size;
    (this->Data).ArrayNum = iVar8 + 1;
    if ((this->Data).ArrayMax < iVar8 + 1) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(&this->Data,iVar8,iVar4,uVar3);
    }
    uVar3 = (this->AllocationFlags).NumBits;
    this_00 = &this->AllocationFlags;
    (this->AllocationFlags).NumBits = uVar3 + 1;
    if ((this->AllocationFlags).MaxBits < (int)(uVar3 + 1)) {
      TScriptBitArray<TMemoryImageAllocator<0>,void>::ReallocGrow(this_00,uVar3);
    }
    else {
      uVar7 = uVar3 & 0x8000001f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
      }
      if (uVar7 == 0) {
        FVar11 = this_00->AllocatorInstance;
        if (((ulonglong)FVar11 & 1) != 0) {
          FVar11 = (ForElementType<unsigned_int>)
                   ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
        }
        *(undefined4 *)
         ((longlong)FVar11 + (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4) = 0;
      }
    }
    if ((((int)uVar3 < 0) || ((this->AllocationFlags).NumBits <= (int)uVar3)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    FVar11 = this_00->AllocatorInstance;
    if (((ulonglong)FVar11 & 1) != 0) {
      FVar11 = (ForElementType<unsigned_int>)
               ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
    }
    puVar1 = (uint *)((longlong)FVar11 +
                     (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar3 & 0x1f));
  }
  else {
    iVar8 = this->FirstFreeIndex;
    uVar9 = (this->Data)._padding_;
    uVar10 = uVar9;
    if ((uVar9 & 1) != 0) {
      uVar10 = (longlong)&(this->Data)._padding_ + ((longlong)uVar9 >> 0x18);
    }
    iVar2 = *(int *)((longlong)(iVar8 * param_1->Size) + 4 + uVar10);
    iVar4 = this->NumFreeIndices + -1;
    this->FirstFreeIndex = iVar2;
    this->NumFreeIndices = iVar4;
    if (iVar4 != 0) {
      if ((uVar9 & 1) != 0) {
        uVar9 = (longlong)&(this->Data)._padding_ + ((longlong)uVar9 >> 0x18);
      }
      *(undefined4 *)((longlong)(iVar2 * param_1->Size) + uVar9) = 0xffffffff;
    }
  }
  if (((iVar8 < 0) || ((this->AllocationFlags).NumBits <= iVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x8be,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  FVar11 = (this->AllocationFlags).AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForElementType<unsigned_int>)
             ((longlong)&(this->AllocationFlags).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  puVar1 = (uint *)((longlong)FVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  return iVar8;
}

// RemoveAtUninitialized @ 14214a290

void __thiscall
TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
::RemoveAtUninitialized
          (TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
           *this,FScriptSparseArrayLayout *param_1,int param_2,int param_3)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    do {
      if (((param_2 < 0) || ((this->AllocationFlags).NumBits <= param_2)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->AllocationFlags).AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForElementType<unsigned_int>)
                ((longlong)&(this->AllocationFlags).AllocatorInstance.field_0x0 +
                ((longlong)FVar8 >> 0x18));
      }
      iVar5 = param_2;
      if (param_2 < 0) {
        iVar5 = param_2 + 0x1f;
      }
      if (((*(uint *)((longlong)FVar8 + (longlong)(iVar5 >> 5) * 4) & uVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0x649,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this->NumFreeIndices != 0) {
        uVar7 = (this->Data)._padding_;
        if ((uVar7 & 1) != 0) {
          uVar7 = (longlong)&(this->Data)._padding_ + ((longlong)uVar7 >> 0x18);
        }
        *(int *)((longlong)(param_1->Size * this->FirstFreeIndex) + uVar7) = param_2;
      }
      uVar7 = (this->Data)._padding_;
      if ((uVar7 & 1) != 0) {
        uVar7 = (longlong)&(this->Data)._padding_ + ((longlong)uVar7 >> 0x18);
      }
      lVar9 = (longlong)(param_2 * param_1->Size);
      *(undefined4 *)(lVar9 + uVar7) = 0xffffffff;
      if (this->NumFreeIndices < 1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->FirstFreeIndex;
      }
      *(int *)(lVar9 + 4 + uVar7) = iVar5;
      this->NumFreeIndices = this->NumFreeIndices + 1;
      this->FirstFreeIndex = param_2;
      if (((param_2 < 0) || ((this->AllocationFlags).NumBits <= param_2)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar8 = (this->AllocationFlags).AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForElementType<unsigned_int>)
                ((longlong)&(this->AllocationFlags).AllocatorInstance.field_0x0 +
                ((longlong)FVar8 >> 0x18));
      }
      iVar5 = param_2;
      if (param_2 < 0) {
        iVar5 = param_2 + 0x1f;
      }
      param_2 = param_2 + 1;
      puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

