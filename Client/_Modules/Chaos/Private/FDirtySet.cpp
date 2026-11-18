// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// Add @ 143750200

/* WARNING: Removing unreachable block (ram,0x000143750328) */

void __thiscall Chaos::FDirtySet::Add(FDirtySet *this,IPhysicsProxyBase *param_1)

{
  int *piVar1;
  EPhysicsProxyType EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IPhysicsProxyBase *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1->DirtyIdx == -1) {
    EVar2 = param_1->Type;
    piVar1 = (this->DirtyProxyBucketInfo).Num + EVar2;
    *piVar1 = *piVar1 + 1;
    piVar1 = &(this->DirtyProxyBucketInfo).TotalNum;
    *piVar1 = *piVar1 + 1;
    param_1->DirtyIdx = this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum;
    pFVar6 = this->DirtyProxyBuckets[EVar2].ProxiesData.AllocatorInstance.Data;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_28 = param_1;
    if (((pFVar6 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar6 + (longlong)this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum;
    piVar1 = &this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)(this->DirtyProxyBuckets + EVar2),piVar1);
    }
    this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum = iVar5 + 1;
    pFVar6 = this->DirtyProxyBuckets[EVar2].ProxiesData.AllocatorInstance.Data +
             (longlong)iVar5 * 0x20;
    *(IPhysicsProxyBase **)pFVar6 = local_28;
    *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_1c,local_20);
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x10) = local_18;
    *(undefined4 *)(pFVar6 + 0x18) = (undefined4)local_10;
    *(undefined4 *)(pFVar6 + 0x1c) = local_10._4_4_;
  }
  return;
}

// AddShape @ 14389b810

void __thiscall Chaos::FDirtySet::AddShape(FDirtySet *this,IPhysicsProxyBase *param_1,int param_2)

{
  TArray<Chaos::FShapeDirtyData,TSizedDefaultAllocator<32>_> *pTVar1;
  EPhysicsProxyType EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int local_28 [2];
  int local_20;
  undefined4 uStack_1c;
  
  Add(this,param_1);
  EVar2 = param_1->Type;
  uVar3 = param_1->DirtyIdx;
  uVar8 = 0;
  if ((int)uVar3 < this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = this->DirtyProxyBuckets[EVar2].ProxiesData.AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar3 * 0x20;
  iVar11 = *(int *)(pFVar4 + lVar10 + 0x18);
  if (iVar11 <= param_2) {
    pTVar1 = &this->ShapesData;
    do {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      uStack_1c = 0;
      local_20 = iVar11;
      if (((pFVar5 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 < pFVar5 + (longlong)(this->ShapesData).ArrayMax * 8
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ShapesData).ArrayNum;
      if (iVar9 == (this->ShapesData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,&(this->ShapesData).ArrayMax);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      (this->ShapesData).ArrayNum = iVar9 + 1;
      *(ulonglong *)(pFVar5 + (longlong)iVar9 * 8) = CONCAT44(uStack_1c,local_20);
      local_28[0] = iVar9;
      if (((*(int **)(pFVar4 + lVar10 + 0x10) <= local_28) &&
          (local_28 < *(int **)(pFVar4 + lVar10 + 0x10) + *(int *)(pFVar4 + lVar10 + 0x1c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)(pFVar4 + lVar10 + 0x18);
      if (iVar9 == *(int *)(pFVar4 + lVar10 + 0x1c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar4 + lVar10 + 0x10),
                           (int *)(pFVar4 + lVar10 + 0x1c));
      }
      iVar11 = iVar11 + 1;
      *(int *)(pFVar4 + lVar10 + 0x18) = iVar9 + 1;
      *(int *)(*(longlong *)(pFVar4 + lVar10 + 0x10) + (longlong)iVar9 * 4) = local_28[0];
    } while (iVar11 <= param_2);
  }
  return;
}

// Reset @ 1438d0190

void __thiscall Chaos::FDirtySet::Reset(FDirtySet *this)

{
  int *piVar1;
  int iVar2;
  FDirtyProxy *pFVar3;
  FDirtyProxiesBucket *pFVar4;
  
  for (pFVar4 = this->DirtyProxyBuckets;
      (TArray<Chaos::FShapeDirtyData,TSizedDefaultAllocator<32>_> *)pFVar4 != &this->ShapesData;
      pFVar4 = pFVar4 + 1) {
    piVar1 = &(pFVar4->ProxiesData).ArrayMax;
    pFVar3 = (FDirtyProxy *)(pFVar4->ProxiesData).AllocatorInstance.Data;
    iVar2 = (pFVar4->ProxiesData).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<Chaos::FDirtyProxy,int>(pFVar3,iVar2);
      (pFVar4->ProxiesData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)pFVar4,0,piVar1);
      }
    }
    else {
      DestructItems<Chaos::FDirtyProxy,int>(pFVar3,iVar2);
      (pFVar4->ProxiesData).ArrayNum = 0;
    }
  }
  (this->DirtyProxyBucketInfo).Num[0] = 0;
  (this->DirtyProxyBucketInfo).Num[1] = 0;
  (this->DirtyProxyBucketInfo).Num[2] = 0;
  (this->DirtyProxyBucketInfo).Num[3] = 0;
  piVar1 = &(this->ShapesData).ArrayMax;
  (this->DirtyProxyBucketInfo).Num[4] = 0;
  (this->DirtyProxyBucketInfo).Num[5] = 0;
  (this->DirtyProxyBucketInfo).Num[6] = 0;
  (this->DirtyProxyBucketInfo).Num[7] = 0;
  (this->DirtyProxyBucketInfo).Num[8] = 0;
  (this->DirtyProxyBucketInfo).Num[9] = 0;
  (this->DirtyProxyBucketInfo).Num[10] = 0;
  (this->DirtyProxyBucketInfo).Num[0xb] = 0;
  *(undefined8 *)((this->DirtyProxyBucketInfo).Num + 0xc) = 0;
  (this->ShapesData).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ShapesData).AllocatorInstance,0,piVar1);
  }
  return;
}

// Remove @ 143c10f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FDirtySet::Remove(FDirtySet *this,IPhysicsProxyBase *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_> *this_00;
  FDirtyProxy local_28;
  
  uVar2 = param_1->DirtyIdx;
  if (uVar2 == 0xffffffff) {
    return;
  }
  this_00 = &this->DirtyProxyBuckets[param_1->Type].ProxiesData;
  if (uVar2 == this_00->ArrayNum - 1U) {
    TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_>::Pop(this_00,&local_28,No);
    if (local_28.ShapeDataIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.ShapeDataIndices.AllocatorInstance.Data);
    }
  }
  else {
    if (((int)uVar2 < 0) || (this_00->ArrayNum <= (int)uVar2)) goto LAB_143c11051;
    if (((int)uVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar2);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
    uVar5 = 0;
    if ((int)uVar2 < this_00->ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(uint *)(*(longlong *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x20) + 0x18)
         = uVar2;
  }
  piVar1 = (this->DirtyProxyBucketInfo).Num + param_1->Type;
  *piVar1 = *piVar1 + -1;
  piVar1 = &(this->DirtyProxyBucketInfo).TotalNum;
  *piVar1 = *piVar1 + -1;
LAB_143c11051:
  param_1->DirtyIdx = -1;
  return;
}

// SetNumDirtyShapes @ 143e4d5a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FDirtySet::SetNumDirtyShapes(FDirtySet *this,IPhysicsProxyBase *param_1,int param_2)

{
  TArray<Chaos::FShapeDirtyData,TSizedDefaultAllocator<32>_> *pTVar1;
  EPhysicsProxyType EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int local_28 [2];
  int local_20;
  undefined4 uStack_1c;
  
  Add(this,param_1);
  EVar2 = param_1->Type;
  uVar3 = param_1->DirtyIdx;
  uVar8 = 0;
  if ((int)uVar3 < this->DirtyProxyBuckets[EVar2].ProxiesData.ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = this->DirtyProxyBuckets[EVar2].ProxiesData.AllocatorInstance.Data;
  lVar10 = (longlong)(int)uVar3 * 0x20;
  iVar11 = *(int *)(pFVar4 + lVar10 + 0x18);
  if (param_2 < iVar11) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + lVar10 + 0x10),param_2,Default);
  }
  else if (iVar11 < param_2) {
    pTVar1 = &this->ShapesData;
    do {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      uStack_1c = 0;
      local_20 = iVar11;
      if (((pFVar5 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 < pFVar5 + (longlong)(this->ShapesData).ArrayMax * 8
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (this->ShapesData).ArrayNum;
      if (iVar9 == (this->ShapesData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,&(this->ShapesData).ArrayMax);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      (this->ShapesData).ArrayNum = iVar9 + 1;
      *(ulonglong *)(pFVar5 + (longlong)iVar9 * 8) = CONCAT44(uStack_1c,local_20);
      local_28[0] = iVar9;
      if (((*(int **)(pFVar4 + lVar10 + 0x10) <= local_28) &&
          (local_28 < *(int **)(pFVar4 + lVar10 + 0x10) + *(int *)(pFVar4 + lVar10 + 0x1c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)(pFVar4 + lVar10 + 0x18);
      if (iVar9 == *(int *)(pFVar4 + lVar10 + 0x1c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar4 + lVar10 + 0x10),
                           (int *)(pFVar4 + lVar10 + 0x1c));
      }
      iVar11 = iVar11 + 1;
      *(int *)(pFVar4 + lVar10 + 0x18) = iVar9 + 1;
      *(int *)(*(longlong *)(pFVar4 + lVar10 + 0x10) + (longlong)iVar9 * 4) = local_28[0];
    } while (iVar11 < param_2);
  }
  return;
}

// RemoveWithoutDirtyIdx @ 143fc2a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FDirtySet::RemoveWithoutDirtyIdx
          (FDirtySet *this,IPhysicsProxyBase *param_1,FDirtyPropertiesManager *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar16;
  undefined1 local_res20 [8];
  byte bStack_77;
  undefined6 uStack_76;
  FDirtyProxy local_60;
  
  this_00 = &this->DirtyProxyBuckets[param_1->Type].ProxiesData;
  uVar11 = this_00->ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar13 = (longlong)(int)uVar11 << 5;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < this_00->ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(IPhysicsProxyBase **)((this_00->AllocatorInstance).Data + lVar13) == param_1) {
        uVar9 = 0;
        if ((int)uVar11 < this_00->ArrayNum) {
          uVar9 = uVar12;
        }
        uVar16 = this_00->ArrayNum - 1;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this_00->AllocatorInstance).Data;
        pFVar5 = (this->ShapesData).AllocatorInstance.Data;
        lVar13 = (longlong)(int)uVar11 * 0x20;
        FDirtyChaosProperties::Clear((FDirtyChaosProperties *)(pFVar4 + lVar13 + 8),param_2,uVar11);
        puVar14 = *(uint **)(pFVar4 + lVar13 + 0x10);
        iVar3 = *(int *)(pFVar4 + lVar13 + 0x18);
        puVar1 = puVar14 + iVar3;
        while( true ) {
          if (*(int *)(pFVar4 + lVar13 + 0x18) != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          uVar9 = 0;
          if (puVar14 == puVar1) break;
          uVar10 = *puVar14;
          lVar15 = (longlong)(int)uVar10;
          if (((byte)pFVar5[lVar15 * 8 + 4] & 1) != 0) {
            if ((int)uVar10 < (param_2->CollisionDataShapePool).Elements.ArrayNum) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (param_2->CollisionDataShapePool).Elements.AllocatorInstance.Data;
            *(undefined8 *)(pFVar6 + lVar15 * 0x30) = 0;
            *(undefined8 *)(pFVar6 + lVar15 * 0x30 + 8) = 0;
            *(undefined8 *)(pFVar6 + lVar15 * 0x30 + 0x10) = 0;
            *(undefined8 *)(pFVar6 + lVar15 * 0x30 + 0x10 + 8) = 0;
            *(undefined8 *)(pFVar6 + lVar15 * 0x30 + 0x20) = 0;
            *(ulonglong *)(pFVar6 + lVar15 * 0x30 + 0x20 + 8) =
                 (ulonglong)(CONCAT61(uStack_76,bStack_77) & 0xfffffffffffffb) << 8 | 0x300;
            bStack_77 = bStack_77 & 0xfb | 3;
          }
          if (((byte)pFVar5[lVar15 * 8 + 4] & 2) != 0) {
            TDirtyElementPool<Chaos::FMaterialData>::Reset(&param_2->MaterialsShapePool,uVar10);
          }
          *(undefined4 *)(pFVar5 + lVar15 * 8 + 4) = 0;
          puVar14 = puVar14 + 1;
        }
        if (uVar11 == uVar16) {
          TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_>::Pop(this_00,&local_60,No);
          if (local_60.ShapeDataIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.ShapeDataIndices.AllocatorInstance.Data);
          }
        }
        else {
          uVar10 = uVar9;
          if ((int)uVar11 < this_00->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar11);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
          if ((int)uVar11 < this_00->ArrayNum) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FDirtyChaosProperties::MoveData
                    ((FDirtyChaosProperties *)((this_00->AllocatorInstance).Data + lVar13 + 8),
                     param_2,uVar16,uVar11);
        }
        piVar2 = (this->DirtyProxyBucketInfo).Num + param_1->Type;
        *piVar2 = *piVar2 + -1;
        piVar2 = &(this->DirtyProxyBucketInfo).TotalNum;
        *piVar2 = *piVar2 + -1;
        return;
      }
      uVar11 = uVar11 - 1;
      lVar13 = lVar13 + -0x20;
    } while (-1 < (int)uVar11);
  }
  return;
}

// operator() @ 14406da50

void __thiscall
`Chaos::FDirtySet::
ParallelForEachProxy<`Chaos::FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>_>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  void *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  uint local_res10;
  
  piVar4 = *(int **)this;
  uVar3 = 0;
  do {
    if (param_1 < *piVar4) goto LAB_14406dab4;
    param_1 = param_1 - *piVar4;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 0xd);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                     ,0x409,L"");
  param_1 = local_res10;
  uVar3 = local_res10;
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14406dab4:
  this_00 = *(void **)((longlong)this + 8);
  lVar5 = *(longlong *)this + (longlong)(int)uVar3 * 0x10;
  uVar3 = 0;
  if (param_1 < *(int *)(lVar5 + 0x40)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>::operator()
            (this_00,param_1,(FDirtyProxy *)((longlong)param_1 * 0x20 + *(longlong *)(lVar5 + 0x38))
            );
  return;
}

