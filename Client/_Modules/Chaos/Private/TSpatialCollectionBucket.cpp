// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_> @ 143d012e0

TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
* __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
          (TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
           *this)

{
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  (this->FreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).ArrayNum = 0;
  (this->FreeIndices).ArrayMax = 0;
  return this;
}

// ~TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_> @ 143d03050

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
::
~TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
          (TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,int>
            ((TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
             (this->Objects).AllocatorInstance.Data,(this->Objects).ArrayNum);
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 143d39070

int __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
::Add(TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
      *this,TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
            **param_1)

{
  int *piVar1;
  ushort uVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (this->FreeIndices).ArrayNum;
  if (iVar7 == 0) {
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->Objects).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    uVar8 = (this->Objects).ArrayNum;
    piVar1 = &(this->Objects).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    (this->Objects).ArrayNum = uVar8 + 1;
    *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      **)(pFVar4 + (longlong)(int)uVar8 * 8) = *param_1;
    return uVar8 & 0xffff;
  }
  if (iVar7 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->FreeIndices).ArrayNum;
  uVar2 = *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2);
  iVar7 = iVar7 + -1;
  (this->FreeIndices).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,&(this->FreeIndices).AllocatorInstance,iVar7,&(this->FreeIndices).ArrayMax);
  pTVar3 = *param_1;
  if ((this->Objects).ArrayNum <= (int)(uint)uVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
    **)((this->Objects).AllocatorInstance.Data + (ulonglong)uVar2 * 8) = pTVar3;
  return (int)uVar2;
}

// Add @ 143d391f0

int __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
::Add(TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
      *this,TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
            **param_1)

{
  int *piVar1;
  ushort uVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (this->FreeIndices).ArrayNum;
  if (iVar7 == 0) {
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->Objects).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    uVar8 = (this->Objects).ArrayNum;
    piVar1 = &(this->Objects).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    (this->Objects).ArrayNum = uVar8 + 1;
    *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      **)(pFVar4 + (longlong)(int)uVar8 * 8) = *param_1;
    return uVar8 & 0xffff;
  }
  if (iVar7 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->FreeIndices).ArrayNum;
  uVar2 = *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2);
  iVar7 = iVar7 + -1;
  (this->FreeIndices).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,&(this->FreeIndices).AllocatorInstance,iVar7,&(this->FreeIndices).ArrayMax);
  pTVar3 = *param_1;
  if ((this->Objects).ArrayNum <= (int)(uint)uVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
    **)((this->Objects).AllocatorInstance.Data + (ulonglong)uVar2 * 8) = pTVar3;
  return (int)uVar2;
}

// Add @ 143d39370

int __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>::
Add(TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>
    *this,TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **param_1)

{
  int *piVar1;
  ushort uVar2;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (this->FreeIndices).ArrayNum;
  if (iVar7 == 0) {
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->Objects).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    uVar8 = (this->Objects).ArrayNum;
    piVar1 = &(this->Objects).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar4 = (this->Objects).AllocatorInstance.Data;
    (this->Objects).ArrayNum = uVar8 + 1;
    *(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)
     (pFVar4 + (longlong)(int)uVar8 * 8) = *param_1;
    return uVar8 & 0xffff;
  }
  if (iVar7 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = (this->FreeIndices).ArrayNum;
  uVar2 = *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2);
  iVar7 = iVar7 + -1;
  (this->FreeIndices).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,&(this->FreeIndices).AllocatorInstance,iVar7,&(this->FreeIndices).ArrayMax);
  pTVar3 = *param_1;
  if ((this->Objects).ArrayNum <= (int)(uint)uVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  *(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)
   ((this->Objects).AllocatorInstance.Data + (ulonglong)uVar2 * 8) = pTVar3;
  return (int)uVar2;
}

// CopyFrom @ 143d493a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
::CopyFrom(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
           *this,TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                 *param_1)

{
  int *piVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined2 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined8 *local_res8;
  TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
  *local_res10;
  undefined8 *local_res18;
  FScriptContainerElement local_48 [16];
  
  bVar9 = false;
  bVar8 = false;
  local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = param_1;
  TArray<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->Objects,(param_1->Objects).ArrayNum,Default);
  uVar13 = 0;
  if (0 < (this->Objects).ArrayNum) {
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (param_1->Objects).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = (param_1->Objects).AllocatorInstance.Data;
      puVar14 = (undefined8 *)0x0;
      plVar5 = *(longlong **)(pFVar15 + lVar16);
      if (plVar5 == (longlong *)0x0) {
        bVar8 = true;
        local_res8 = (undefined8 *)0x0;
        pFVar12 = (FScriptContainerElement *)&local_res8;
LAB_143d4948d:
        puVar14 = *(undefined8 **)pFVar12;
        *(longlong *)pFVar12 = 0;
      }
      else {
        bVar9 = true;
        pFVar12 = (FScriptContainerElement *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_res18);
        if (local_48 != pFVar12) goto LAB_143d4948d;
      }
      if ((bVar8) && (bVar8 = false, local_res8 != (undefined8 *)0x0)) {
        (**(code **)*local_res8)(local_res8,1);
      }
      if ((bVar9) && (bVar9 = false, local_res18 != (undefined8 *)0x0)) {
        (**(code **)*local_res18)(local_res18,1);
      }
      uVar3 = *(undefined2 *)(pFVar15 + lVar16 + 8);
      uVar11 = 0;
      if ((int)uVar13 < (this->Objects).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = (this->Objects).AllocatorInstance.Data + lVar16;
      if (pFVar15 != local_48) {
        puVar6 = *(undefined8 **)pFVar15;
        *(undefined8 **)pFVar15 = puVar14;
        puVar14 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      *(undefined2 *)(pFVar15 + 8) = uVar3;
      if (puVar14 != (undefined8 *)0x0) {
        (**(code **)*puVar14)(puVar14,1);
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x10;
      param_1 = local_res10;
    } while ((int)uVar13 < (this->Objects).ArrayNum);
  }
  pTVar2 = &this->FreeIndices;
  if (pTVar2 != &param_1->FreeIndices) {
    iVar4 = (param_1->FreeIndices).ArrayNum;
    piVar1 = &(this->FreeIndices).ArrayMax;
    pFVar15 = (param_1->FreeIndices).AllocatorInstance.Data;
    (this->FreeIndices).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
    if (iVar4 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,pFVar15,(longlong)iVar4 * 2);
    }
  }
  return;
}

// Remove @ 143d61ba0

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
::Remove(TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
         *this,ushort param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ushort local_res10 [12];
  
  iVar6 = (this->Objects).ArrayNum;
  local_res10[0] = param_1;
  if (iVar6 != param_1 + 1) {
    if (iVar6 <= (int)(uint)param_1) {
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
    *(undefined8 *)((this->Objects).AllocatorInstance.Data + (ulonglong)param_1 * 8) = 0;
    pFVar3 = (this->FreeIndices).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->FreeIndices).ArrayMax * 2
       )) {
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
    iVar6 = (this->FreeIndices).ArrayNum;
    piVar2 = &(this->FreeIndices).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->FreeIndices).AllocatorInstance,piVar2);
    }
    (this->FreeIndices).ArrayNum = iVar6 + 1;
    *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_res10[0];
    return;
  }
  if (iVar6 < 1) {
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
  iVar6 = (this->Objects).ArrayNum;
  uVar1 = iVar6 - 1;
  pFVar3 = (this->Objects).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar6 = ~uVar1 + iVar6;
  if (iVar6 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar6 << 3);
  }
  piVar2 = &(this->Objects).ArrayNum;
  *piVar2 = *piVar2 + -1;
  return;
}

// Remove @ 143d61d30

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
::Remove(TSpatialCollectionBucket<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*>
         *this,ushort param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ushort local_res10 [12];
  
  iVar6 = (this->Objects).ArrayNum;
  local_res10[0] = param_1;
  if (iVar6 != param_1 + 1) {
    if (iVar6 <= (int)(uint)param_1) {
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
    *(undefined8 *)((this->Objects).AllocatorInstance.Data + (ulonglong)param_1 * 8) = 0;
    pFVar3 = (this->FreeIndices).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->FreeIndices).ArrayMax * 2
       )) {
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
    iVar6 = (this->FreeIndices).ArrayNum;
    piVar2 = &(this->FreeIndices).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->FreeIndices).AllocatorInstance,piVar2);
    }
    (this->FreeIndices).ArrayNum = iVar6 + 1;
    *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_res10[0];
    return;
  }
  if (iVar6 < 1) {
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
  iVar6 = (this->Objects).ArrayNum;
  uVar1 = iVar6 - 1;
  pFVar3 = (this->Objects).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar6 = ~uVar1 + iVar6;
  if (iVar6 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar6 << 3);
  }
  piVar2 = &(this->Objects).ArrayNum;
  *piVar2 = *piVar2 + -1;
  return;
}

// Remove @ 143d61ec0

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>::
Remove(TSpatialCollectionBucket<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*>
       *this,ushort param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ushort local_res10 [12];
  
  iVar6 = (this->Objects).ArrayNum;
  local_res10[0] = param_1;
  if (iVar6 != param_1 + 1) {
    if (iVar6 <= (int)(uint)param_1) {
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
    *(undefined8 *)((this->Objects).AllocatorInstance.Data + (ulonglong)param_1 * 8) = 0;
    pFVar3 = (this->FreeIndices).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->FreeIndices).ArrayMax * 2
       )) {
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
    iVar6 = (this->FreeIndices).ArrayNum;
    piVar2 = &(this->FreeIndices).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->FreeIndices).AllocatorInstance,piVar2);
    }
    (this->FreeIndices).ArrayNum = iVar6 + 1;
    *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_res10[0];
    return;
  }
  if (iVar6 < 1) {
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
  iVar6 = (this->Objects).ArrayNum;
  uVar1 = iVar6 - 1;
  pFVar3 = (this->Objects).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar6 = ~uVar1 + iVar6;
  if (iVar6 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar6 << 3);
  }
  piVar2 = &(this->Objects).ArrayNum;
  *piVar2 = *piVar2 + -1;
  return;
}

// Remove @ 143d62050

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
::Remove(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
         *this,ushort param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ushort local_res10 [4];
  
  iVar6 = (this->Objects).ArrayNum;
  local_res10[0] = param_1;
  if (iVar6 != param_1 + 1) {
    if (iVar6 <= (int)(uint)param_1) {
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
    pFVar8 = (this->Objects).AllocatorInstance.Data;
    puVar2 = *(undefined8 **)(pFVar8 + (ulonglong)param_1 * 0x10);
    *(undefined8 *)(pFVar8 + (ulonglong)param_1 * 0x10) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    pFVar8 = (this->FreeIndices).AllocatorInstance.Data;
    if ((pFVar8 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar8 + (longlong)(this->FreeIndices).ArrayMax * 2
       )) {
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
    iVar6 = (this->FreeIndices).ArrayNum;
    piVar1 = &(this->FreeIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(this->FreeIndices).AllocatorInstance,piVar1);
    }
    (this->FreeIndices).ArrayNum = iVar6 + 1;
    *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_res10[0];
    return;
  }
  if (iVar6 < 1) {
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
  lVar7 = (longlong)(this->Objects).ArrayNum;
  pFVar8 = (this->Objects).AllocatorInstance.Data;
  puVar2 = *(undefined8 **)(pFVar8 + lVar7 * 0x10 + -0x10);
  *(undefined8 *)(pFVar8 + lVar7 * 0x10 + -0x10) = 0;
  iVar6 = (this->Objects).ArrayNum;
  pFVar8 = (this->Objects).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  puVar3 = *(undefined8 **)(pFVar8 + -0x10);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  iVar6 = (this->Objects).ArrayNum - iVar6;
  if (iVar6 != 0) {
    memmove(pFVar8 + -0x10,pFVar8,(longlong)iVar6 << 4);
  }
  piVar1 = &(this->Objects).ArrayNum;
  *piVar1 = *piVar1 + -1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// UpdateOrAddAt @ 143d7e110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
::UpdateOrAddAt(TSpatialCollectionBucket<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>_>
                *this,ushort param_1,
               TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>
               *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  longlong lVar8;
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *pTVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort local_res10 [4];
  TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *local_res18;
  ushort local_48 [8];
  
  uVar1 = (ushort)(this->Objects).ArrayNum;
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (param_1 < uVar1) {
    pFVar2 = (this->FreeIndices).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar2 + (longlong)(this->FreeIndices).ArrayMax * 2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->FreeIndices).ArrayNum;
    uVar7 = local_res10[0];
    if (iVar6 != 0) {
      iVar12 = 0;
      pFVar2 = (this->FreeIndices).AllocatorInstance.Data;
      bVar5 = *(ushort *)pFVar2 != local_res10[0];
      lVar8 = 0;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar8 = lVar8 + 1;
          iVar11 = iVar11 + 1;
          if (iVar6 <= lVar8) break;
        } while (bVar5 == (*(ushort *)(pFVar2 + lVar8 * 2) != uVar7));
        if (bVar5 != false) {
          if (iVar12 != iVar10) {
            memmove(pFVar2 + (longlong)iVar12 * 2,pFVar2 + (longlong)iVar10 * 2,
                    (longlong)(iVar11 - iVar10) * 2);
            uVar7 = local_res10[0];
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar10 = iVar11;
      } while (lVar8 < iVar6);
      (this->FreeIndices).ArrayNum = iVar12;
      param_2 = local_res18;
    }
  }
  else {
    TArray<Chaos::TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
    ::SetNum(&this->Objects,param_1 + 1,Default);
    uVar7 = local_res10[0];
    local_48[0] = uVar1;
    if ((int)(uint)uVar1 < (int)(local_res10[0] - 1)) {
      do {
        pFVar2 = (this->FreeIndices).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             pFVar2 + (longlong)(this->FreeIndices).ArrayMax * 2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (this->FreeIndices).ArrayNum;
        if (iVar6 == (this->FreeIndices).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x202,&(this->FreeIndices).AllocatorInstance,
                             &(this->FreeIndices).ArrayMax);
        }
        (this->FreeIndices).ArrayNum = iVar6 + 1;
        *(ushort *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar6 * 2) = local_48[0];
        local_48[0] = local_48[0] + 1;
        param_2 = local_res18;
        uVar7 = local_res10[0];
      } while ((int)(uint)local_48[0] < (int)(local_res10[0] - 1));
    }
  }
  if (((this->Objects).ArrayNum <= (int)(uint)uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = (TSpatialAccelerationBucketEntry<Chaos::FAccelerationStructureHandle,double,3> *)
           ((this->Objects).AllocatorInstance.Data + (ulonglong)uVar7 * 0x10);
  if (pTVar9 != param_2) {
    pIVar3 = (pTVar9->Acceleration).Ptr;
    (pTVar9->Acceleration).Ptr = (param_2->Acceleration).Ptr;
    (param_2->Acceleration).Ptr =
         (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
    if (pIVar3 != (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
  }
  pTVar9->TypeInnerIdx = param_2->TypeInnerIdx;
  return;
}

