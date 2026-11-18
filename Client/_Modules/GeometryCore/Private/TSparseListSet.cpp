// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 7

// TSparseListSet<int> @ 1435e2920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSparseListSet<int> * __thiscall
UE::Geometry::TSparseListSet<int>::TSparseListSet<int>(TSparseListSet<int> *this)

{
  TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  TSparseListSet<int> *pTVar7;
  undefined8 *local_18 [2];
  
  this->BlockSize = 0x20;
  puVar6 = (undefined8 *)0x0;
  this->BlocksPerChunk = 0x100;
  (this->ChunkList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkList).ArrayNum = 0;
  (this->ChunkList).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllocationLock,4000);
  this_00 = &this->Lists;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->Lists).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lists).Blocks.ArrayNum = 0;
  (this->Lists).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::AddAllocatedBlock(this_00);
  puVar5 = ::operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar6 = puVar5;
  }
  pFVar1 = (this->ChunkList).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)(this->ChunkList).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSparseListSet<int> *)(*pcVar2)();
    return pTVar7;
  }
  iVar4 = (this->ChunkList).ArrayNum;
  if (iVar4 == (this->ChunkList).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ChunkList).AllocatorInstance,&(this->ChunkList).ArrayMax);
  }
  (this->ChunkList).ArrayNum = iVar4 + 1;
  *(undefined8 **)((this->ChunkList).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18[0];
  local_18[0] = (undefined8 *)0x0;
  if (((this->ChunkList).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSparseListSet<int> *)(*pcVar2)();
    return pTVar7;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)(this->ChunkList).AllocatorInstance.Data + 8),
             this->BlocksPerChunk * this->BlockSize,Default);
  return this;
}

// AllocateAt @ 1435f0800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FListHandle __thiscall
UE::Geometry::TSparseListSet<int>::AllocateAt(TSparseListSet<int> *this,int param_1)

{
  uchar *puVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FListHandle FVar7;
  uint uVar8;
  ForElementType<int_*> FVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  ForElementType<int_*> FVar11;
  longlong lVar12;
  ForElementType<int_*> FVar13;
  uint in_R8D;
  uint uVar14;
  undefined1 auStackY_f8 [32];
  int *local_a8;
  ForElementType<int_*> local_a0;
  int local_58;
  int local_54;
  int *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0.SecondaryData = (ForElementType<int_*>)0x0;
  local_58 = 0;
  local_54 = 8;
  local_50 = (int *)0x0;
  local_48 = 0;
  local_a8 = AllocateNewBlockMemory(this);
  FVar11 = (ForElementType<int_*>)&local_a0;
  if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
    FVar11 = local_a0.SecondaryData;
  }
  if ((ulonglong)FVar11 <= &local_a8) {
    FVar11 = (ForElementType<int_*>)&local_a0;
    if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
      FVar11 = local_a0.SecondaryData;
    }
    if ((&local_a8 < (int **)((longlong)FVar11 + (longlong)local_54 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      FVar7.ListRef = (void *)(*pcVar4)();
      return (FListHandle)FVar7.ListRef;
    }
  }
  iVar6 = local_58;
  if (local_58 == local_54) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                      (0x808,&local_a0,&local_54);
  }
  local_58 = iVar6 + 1;
  FVar11 = (ForElementType<int_*>)&local_a0;
  if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
    FVar11 = local_a0.SecondaryData;
  }
  *(int **)((longlong)FVar11 + (longlong)iVar6 * 8) = local_a8;
  if ((local_58 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar7.ListRef = (void *)(*pcVar4)();
    return (FListHandle)FVar7.ListRef;
  }
  iVar6 = local_58;
  uVar8 = (this->Lists).CurBlock;
  uVar14 = (this->Lists).CurBlockUsed;
  FVar11 = (ForElementType<int_*>)&local_a0;
  if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
    FVar11 = local_a0.SecondaryData;
  }
  uVar10 = uVar8 * 0x200 + uVar14;
  local_50 = *(int **)FVar11;
  local_48 = 0;
  if (in_R8D == uVar10) {
    if (uVar14 == 0x200) {
      if (uVar8 == (this->Lists).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::AddAllocatedBlock
                  (&this->Lists);
      }
      (this->Lists).CurBlock = (this->Lists).CurBlock + 1;
      uVar8 = (this->Lists).CurBlock;
      (this->Lists).CurBlockUsed = 0;
      uVar14 = 0;
    }
    iVar6 = local_58;
    FVar11 = (ForElementType<int_*>)
             (*(longlong *)((this->Lists).Blocks.AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
             + (longlong)(int)uVar14 * 0x60);
    if (FVar11 != (ForElementType<int_*>)&local_a0) {
      iVar3 = *(int *)((longlong)FVar11 + 0x4c);
      *(int *)((ForElementType<int_*> *)((longlong)FVar11 + 0x48))->InlineData = local_58;
      puVar1 = (uchar *)((longlong)FVar11 + 0x4c);
      FVar13 = (ForElementType<int_*>)&local_a0;
      if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
        FVar13 = local_a0.SecondaryData;
      }
      if ((local_58 == 0) && (iVar3 == 0)) {
        puVar1[0] = '\b';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                  (8,8,local_58,iVar3,(ForElementType<int_*> *)FVar11,local_58,(int *)puVar1);
        FVar9 = FVar11;
        if (*(ForElementType<int_*> *)((longlong)FVar11 + 0x40) != (ForElementType<int_*>)0x0) {
          FVar9 = *(ForElementType<int_*> *)((longlong)FVar11 + 0x40);
        }
        if (iVar6 != 0) {
          memcpy((void *)FVar9,(void *)FVar13,(longlong)iVar6 << 3);
        }
      }
    }
    *(int **)((longlong)FVar11 + 0x50) = local_50;
    *(undefined4 *)((longlong)FVar11 + 0x58) = local_48;
    puVar2 = &(this->Lists).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
  }
  else if (uVar10 < in_R8D) {
    TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::Resize(&this->Lists,in_R8D);
    uVar8 = (this->Lists).CurBlockUsed;
    if (uVar8 == 0x200) {
      if ((this->Lists).CurBlock == (this->Lists).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::AddAllocatedBlock
                  (&this->Lists);
      }
      (this->Lists).CurBlock = (this->Lists).CurBlock + 1;
      (this->Lists).CurBlockUsed = 0;
      uVar8 = 0;
    }
    iVar6 = local_58;
    FVar11 = (ForElementType<int_*>)
             (*(longlong *)
               ((this->Lists).Blocks.AllocatorInstance.Data +
               (longlong)(int)(this->Lists).CurBlock * 8) + (longlong)(int)uVar8 * 0x60);
    if (FVar11 != (ForElementType<int_*>)&local_a0) {
      lVar12 = (longlong)local_58;
      puVar1 = (uchar *)((longlong)FVar11 + 0x4c);
      iVar3 = *(int *)puVar1;
      *(int *)((ForElementType<int_*> *)((longlong)FVar11 + 0x48))->InlineData = local_58;
      FVar13 = (ForElementType<int_*>)&local_a0;
      if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
        FVar13 = local_a0.SecondaryData;
      }
      if ((local_58 == 0) && (iVar3 == 0)) {
        puVar1[0] = '\b';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                  (8,8,local_58,iVar3,(ForElementType<int_*> *)FVar11,local_58,(int *)puVar1);
        FVar9 = FVar11;
        if (*(ForElementType<int_*> *)((longlong)FVar11 + 0x40) != (ForElementType<int_*>)0x0) {
          FVar9 = *(ForElementType<int_*> *)((longlong)FVar11 + 0x40);
        }
        if (iVar6 != 0) {
          memcpy((void *)FVar9,(void *)FVar13,lVar12 << 3);
        }
      }
    }
    *(int **)((longlong)FVar11 + 0x50) = local_50;
    *(undefined4 *)((longlong)FVar11 + 0x58) = local_48;
    puVar2 = &(this->Lists).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
  }
  else {
    FVar11 = (ForElementType<int_*>)
             (*(longlong *)
               ((this->Lists).Blocks.AllocatorInstance.Data + (ulonglong)(in_R8D >> 9) * 8) +
             (ulonglong)(in_R8D & 0x1ff) * 0x60);
    if (FVar11 != (ForElementType<int_*>)&local_a0) {
      iVar3 = *(int *)((longlong)FVar11 + 0x4c);
      *(int *)((ForElementType<int_*> *)((longlong)FVar11 + 0x48))->InlineData = local_58;
      puVar1 = (uchar *)((longlong)FVar11 + 0x4c);
      FVar13 = (ForElementType<int_*>)&local_a0;
      if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
        FVar13 = local_a0.SecondaryData;
      }
      if ((local_58 == 0) && (iVar3 == 0)) {
        puVar1[0] = '\b';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
      }
      else {
        Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                  (8,8,local_58,iVar3,(ForElementType<int_*> *)FVar11,local_58,(int *)puVar1);
        FVar9 = FVar11;
        if (*(ForElementType<int_*> *)((longlong)FVar11 + 0x40) != (ForElementType<int_*>)0x0) {
          FVar9 = *(ForElementType<int_*> *)((longlong)FVar11 + 0x40);
        }
        if (iVar6 != 0) {
          memcpy((void *)FVar9,(void *)FVar13,(longlong)iVar6 << 3);
        }
      }
    }
    *(int **)((longlong)FVar11 + 0x50) = local_50;
    *(undefined4 *)((longlong)FVar11 + 0x58) = local_48;
  }
  *(longlong *)CONCAT44(in_register_00000014,param_1) =
       (ulonglong)(in_R8D & 0x1ff) * 0x60 +
       *(longlong *)((this->Lists).Blocks.AllocatorInstance.Data + (ulonglong)(in_R8D >> 9) * 8);
  if (local_a0.SecondaryData != (ForElementType<int_*>)0x0) {
    FMemory::Free((void *)local_a0.SecondaryData);
  }
  return (FListHandle)(longlong *)CONCAT44(in_register_00000014,param_1);
}

// AllocateNewBlockMemory @ 1435f0e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int * __thiscall
UE::Geometry::TSparseListSet<int>::AllocateNewBlockMemory(TSparseListSet<int> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *local_28 [2];
  
  lpCriticalSection = &this->AllocationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->FreeList).ArrayNum < 1) {
    iVar4 = (this->ChunkList).ArrayNum;
    puVar7 = (undefined8 *)0x0;
    uVar9 = iVar4 - 1;
    uVar8 = 0;
    if ((int)uVar9 < iVar4) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
    piVar5 = *(int **)((this->ChunkList).AllocatorInstance.Data +
                      (longlong)(this->ChunkList).ArrayNum * 8 + -8);
    iVar4 = *piVar5;
    if (iVar4 == this->BlocksPerChunk) {
      puVar6 = ::operator_new(0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar7 = puVar6;
      }
      pFVar1 = (this->ChunkList).AllocatorInstance.Data;
      local_28[0] = puVar7;
      if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)(this->ChunkList).ArrayMax * 8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
      iVar4 = (this->ChunkList).ArrayNum;
      piVar5 = &(this->ChunkList).ArrayMax;
      if (iVar4 == *piVar5) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ChunkList).AllocatorInstance,piVar5);
      }
      (this->ChunkList).ArrayNum = iVar4 + 1;
      *(undefined8 **)((this->ChunkList).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_28[0]
      ;
      iVar4 = (this->ChunkList).ArrayNum;
      local_28[0] = (undefined8 *)0x0;
      uVar9 = iVar4 - 1;
      uVar8 = 0;
      if ((int)uVar9 < iVar4) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
      piVar5 = *(int **)((this->ChunkList).AllocatorInstance.Data +
                        (longlong)(this->ChunkList).ArrayNum * 8 + -8);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar5 + 2),
                 this->BlocksPerChunk * this->BlockSize,Default);
      iVar4 = *piVar5;
    }
    uVar9 = iVar4 * this->BlockSize;
    uVar8 = 0;
    if ((int)uVar9 < piVar5[4]) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
    *piVar5 = *piVar5 + 1;
    piVar5 = (int *)(*(longlong *)(piVar5 + 2) + (longlong)(int)uVar9 * 4);
  }
  else {
    iVar4 = (this->FreeList).ArrayNum;
    iVar10 = iVar4 + -1;
    piVar5 = *(int **)((this->FreeList).AllocatorInstance.Data + (longlong)iVar4 * 8 + -8);
    (this->FreeList).ArrayNum = iVar10;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->FreeList).AllocatorInstance,iVar10,&(this->FreeList).ArrayMax);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return piVar5;
}

// Clear_Internal @ 1435f4170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSparseListSet<int>::Clear_Internal(TSparseListSet<int> *this,FList *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ForElementType<int_*> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<int_*> FVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 local_28 [2];
  
  iVar7 = (param_1->Blocks).ArrayNum;
  uVar9 = 1;
  if (1 < iVar7) {
    lpCriticalSection = &this->AllocationLock;
    lVar10 = 8;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar2 = (param_1->Blocks).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<int_*>)param_1;
      if (FVar2 != (ForElementType<int_*>)0x0) {
        FVar8 = FVar2;
      }
      local_28[0] = *(undefined8 *)(lVar10 + (longlong)FVar8);
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar3 = (this->FreeList).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(this->FreeList).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->FreeList).ArrayNum;
      piVar1 = &(this->FreeList).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->FreeList).AllocatorInstance,piVar1);
      }
      (this->FreeList).ArrayNum = iVar7 + 1;
      *(undefined8 *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar7 = (param_1->Blocks).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < iVar7);
  }
  TArray<int_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&param_1->Blocks,1,Default);
  if ((param_1->Blocks).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar2 = (param_1->Blocks).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<int_*>)param_1;
  if (FVar2 != (ForElementType<int_*>)0x0) {
    FVar8 = FVar2;
  }
  param_1->CurBlock = *(int **)FVar8;
  param_1->CurIndex = 0;
  return;
}

// FreeBlockMemory @ 1436038e0

void __thiscall
UE::Geometry::TSparseListSet<int>::FreeBlockMemory(TSparseListSet<int> *this,int *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *local_res10 [3];
  
  lpCriticalSection = &this->AllocationLock;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->FreeList).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeList).ArrayNum;
  piVar1 = &(this->FreeList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FreeList).AllocatorInstance,piVar1);
  }
  (this->FreeList).ArrayNum = iVar5 + 1;
  *(int **)((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Remove @ 143616990

bool __thiscall
UE::Geometry::TSparseListSet<int>::Remove(TSparseListSet<int> *this,int param_1,int param_2)

{
  longlong lVar1;
  void *_Dst;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  TSparseListSet<int> *pTVar10;
  ForElementType<int_*> FVar11;
  ForElementType<int_*> FVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  FVar12 = (ForElementType<int_*>)
           (*(longlong *)
             ((this->Lists).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x60);
  if (*(longlong *)((longlong)FVar12 + 0x50) != 0) {
    iVar15 = *(int *)((ForElementType<int_*> *)((longlong)FVar12 + 0x48))->InlineData;
    uVar17 = 0;
    if (0 < iVar15) {
      uVar9 = uVar17;
      uVar18 = uVar17;
      do {
        uVar16 = (uint)uVar9;
        uVar7 = 0;
        if ((int)uVar16 < *(int *)((ForElementType<int_*> *)((longlong)FVar12 + 0x48))->InlineData)
        {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar11 = FVar12;
        if (*(ForElementType<int_*> *)((longlong)FVar12 + 0x40) != (ForElementType<int_*>)0x0) {
          FVar11 = *(ForElementType<int_*> *)((longlong)FVar12 + 0x40);
        }
        lVar3 = *(longlong *)((longlong)FVar11 + uVar18 * 8);
        pTVar10 = (TSparseListSet<int> *)((longlong)FVar12 + 0x58);
        if (uVar16 != iVar15 - 1U) {
          pTVar10 = this;
        }
        uVar9 = uVar17;
        uVar14 = uVar17;
        if (0 < (longlong)pTVar10->BlockSize) {
          do {
            iVar13 = (int)uVar14;
            if (*(int *)(lVar3 + uVar9 * 4) == param_2) {
              iVar15 = *(int *)((longlong)FVar12 + 0x58);
              if (lVar3 == *(longlong *)((longlong)FVar12 + 0x50)) {
                iVar8 = iVar15 + -1;
                if (iVar13 == iVar8) {
                  *(int *)((longlong)FVar12 + 0x58) = iVar8;
                }
                else {
                  lVar1 = lVar3 + (longlong)iVar15 * 4;
                  uVar2 = *(undefined4 *)(lVar3 + (longlong)iVar13 * 4);
                  *(undefined4 *)(lVar3 + (longlong)iVar13 * 4) = *(undefined4 *)(lVar1 + -4);
                  *(undefined4 *)(lVar1 + -4) = uVar2;
                  iVar8 = *(int *)((longlong)FVar12 + 0x58) + -1;
                  *(int *)((longlong)FVar12 + 0x58) = iVar8;
                }
              }
              else {
                if ((iVar15 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("false",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseListSet.h"
                                       ,0x167,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                lVar1 = *(longlong *)((longlong)FVar12 + 0x50) +
                        (longlong)*(int *)((longlong)FVar12 + 0x58) * 4;
                uVar2 = *(undefined4 *)(lVar3 + (longlong)iVar13 * 4);
                *(undefined4 *)(lVar3 + (longlong)iVar13 * 4) = *(undefined4 *)(lVar1 + -4);
                *(undefined4 *)(lVar1 + -4) = uVar2;
                *(int *)((longlong)FVar12 + 0x58) = *(int *)((longlong)FVar12 + 0x58) + -1;
                iVar8 = *(int *)((longlong)FVar12 + 0x58);
              }
              if ((iVar8 == 0) && (1 < *(int *)((longlong)FVar12 + 0x48))) {
                FreeBlockMemory(this,*(int **)((longlong)FVar12 + 0x50));
                if ((*(int *)((longlong)FVar12 + 0x48) < 1) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                FVar11 = FVar12;
                if (*(ForElementType<int_*> *)((longlong)FVar12 + 0x40) !=
                    (ForElementType<int_*>)0x0) {
                  FVar11 = *(ForElementType<int_*> *)((longlong)FVar12 + 0x40);
                }
                uVar7 = *(int *)((longlong)FVar12 + 0x48) - 1;
                _Dst = (void *)((longlong)FVar11 + (longlong)(int)uVar7 * 8);
                iVar15 = ~uVar7 + *(int *)((longlong)FVar12 + 0x48);
                if (iVar15 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar15 << 3);
                }
                iVar15 = *(int *)((longlong)FVar12 + 0x48) + -1;
                *(int *)((longlong)FVar12 + 0x48) = iVar15;
                Core::Private::
                ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                          (8,8,(ForElementType<int_*> *)FVar12,iVar15,
                           (int *)((longlong)FVar12 + 0x4c));
                uVar16 = *(int *)((longlong)FVar12 + 0x48) - 1;
                uVar7 = 0;
                if ((int)uVar16 < *(int *)((longlong)FVar12 + 0x48)) {
                  uVar7 = ~uVar16 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                FVar11 = FVar12;
                if (*(ForElementType<int_*> *)((longlong)FVar12 + 0x40) !=
                    (ForElementType<int_*>)0x0) {
                  FVar11 = *(ForElementType<int_*> *)((longlong)FVar12 + 0x40);
                }
                *(undefined8 *)((longlong)FVar12 + 0x50) =
                     *(undefined8 *)
                      ((longlong)FVar11 + -8 + (longlong)*(int *)((longlong)FVar12 + 0x48) * 8);
                *(int *)((longlong)FVar12 + 0x58) = this->BlockSize;
              }
              return true;
            }
            uVar9 = uVar9 + 1;
            uVar14 = (ulonglong)(iVar13 + 1);
          } while ((longlong)uVar9 < (longlong)pTVar10->BlockSize);
        }
        uVar9 = (ulonglong)(uVar16 + 1);
        uVar18 = uVar18 + 1;
      } while ((longlong)uVar18 < (longlong)iVar15);
    }
  }
  return false;
}

// SetValues_Internal @ 14361ad50

void __thiscall
UE::Geometry::TSparseListSet<int>::SetValues_Internal
          (TSparseListSet<int> *this,FList *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<int_*> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<int_*> FVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int *local_28 [2];
  
  iVar3 = param_2->ArrayNum;
  if (param_1->CurIndex != 0) {
    Clear_Internal(this,param_1);
  }
  uVar12 = 0;
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      if (param_1->CurIndex == this->BlockSize) {
        local_28[0] = AllocateNewBlockMemory(this);
        FVar4 = (param_1->Blocks).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int_*>)param_1;
        if (FVar4 != (ForElementType<int_*>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= local_28) {
          FVar9 = (ForElementType<int_*>)param_1;
          if (FVar4 != (ForElementType<int_*>)0x0) {
            FVar9 = FVar4;
          }
          if ((local_28 < (int **)((longlong)FVar9 + (longlong)(param_1->Blocks).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = (param_1->Blocks).ArrayNum;
        piVar1 = &(param_1->Blocks).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int_*>_>
                            (0x808,(ForElementType<int_*> *)param_1,piVar1);
        }
        (param_1->Blocks).ArrayNum = iVar7 + 1;
        FVar4 = (param_1->Blocks).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int_*>)param_1;
        if (FVar4 != (ForElementType<int_*>)0x0) {
          FVar9 = FVar4;
        }
        *(int **)((longlong)FVar9 + (longlong)iVar7 * 8) = local_28[0];
        iVar7 = (param_1->Blocks).ArrayNum;
        uVar10 = iVar7 - 1;
        uVar8 = 0;
        if ((int)uVar10 < iVar7) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_1->Blocks).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<int_*>)param_1;
        if (FVar4 != (ForElementType<int_*>)0x0) {
          FVar9 = FVar4;
        }
        param_1->CurBlock =
             *(int **)((int *)((longlong)FVar9 + -8) + (longlong)(param_1->Blocks).ArrayNum * 2);
        param_1->CurIndex = 0;
      }
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar2 = lVar11 * 4;
      lVar11 = lVar11 + 1;
      param_1->CurBlock[param_1->CurIndex] = *(int *)((param_2->AllocatorInstance).Data + lVar2);
      param_1->CurIndex = param_1->CurIndex + 1;
    } while (lVar11 < iVar3);
  }
  return;
}

