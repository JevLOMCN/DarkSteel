// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// operator[] @ 142013fc0

FUObjectCluster * __thiscall
FUObjectClusterContainer::operator[](FUObjectClusterContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUObjectCluster *pFVar4;
  
  if ((param_1 < 0) || ((this->Clusters).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Clusters.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x64f,L"Cluster index %d out of range [0, %d]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUObjectCluster *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Clusters).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUObjectCluster *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FUObjectCluster *)((this->Clusters).AllocatorInstance.Data + (longlong)param_1 * 0x50);
}

// FUObjectClusterContainer @ 1422587e0

FUObjectClusterContainer * __thiscall
FUObjectClusterContainer::FUObjectClusterContainer(FUObjectClusterContainer *this)

{
  (this->Clusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clusters).ArrayNum = 0;
  (this->Clusters).ArrayMax = 0;
  (this->FreeClusterIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeClusterIndices).ArrayNum = 0;
  (this->FreeClusterIndices).ArrayMax = 0;
  this->NumAllocatedClusters = 0;
  this->bClustersNeedDissolving = false;
  return this;
}

// AllocateCluster @ 1422608e0

/* WARNING: Removing unreachable block (ram,0x000142260abe) */
/* WARNING: Removing unreachable block (ram,0x000142260acc) */
/* WARNING: Removing unreachable block (ram,0x000142260ada) */
/* WARNING: Removing unreachable block (ram,0x000142260ae8) */

int __thiscall FUObjectClusterContainer::AllocateCluster(FUObjectClusterContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  FScriptContainerElement local_20;
  
  iVar3 = (this->FreeClusterIndices).ArrayNum;
  if (iVar3 == 0) {
    pFVar6 = (this->Clusters).AllocatorInstance.Data;
    local_68[0] = 0xffffffff;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = (FScriptContainerElement)0x0;
    if (((pFVar6 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < pFVar6 + (longlong)(this->Clusters).ArrayMax * 0x50))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    uVar4 = (this->Clusters).ArrayNum;
    if (uVar4 == (this->Clusters).ArrayMax) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,(ForAnyElementType *)this,&(this->Clusters).ArrayMax);
    }
    (this->Clusters).ArrayNum = uVar4 + 1;
    pFVar6 = (this->Clusters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50;
    *(undefined4 *)pFVar6 = local_68[0];
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 8) = local_60;
    *(undefined4 *)(pFVar6 + 0x10) = (undefined4)local_58;
    *(undefined4 *)(pFVar6 + 0x14) = local_58._4_4_;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = local_50;
    *(undefined4 *)(pFVar6 + 0x20) = (undefined4)local_48;
    *(undefined4 *)(pFVar6 + 0x24) = local_48._4_4_;
    *(undefined8 *)(pFVar6 + 0x28) = 0;
    *(undefined8 *)(pFVar6 + 0x28) = local_40;
    *(undefined4 *)(pFVar6 + 0x30) = (undefined4)local_38;
    *(undefined4 *)(pFVar6 + 0x34) = local_38._4_4_;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = local_30;
    *(undefined4 *)(pFVar6 + 0x40) = (undefined4)local_28;
    *(undefined4 *)(pFVar6 + 0x44) = local_28._4_4_;
    pFVar6[0x48] = local_20;
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
  }
  else {
    if ((iVar3 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = (this->FreeClusterIndices).ArrayNum;
    uVar4 = *(uint *)((this->FreeClusterIndices).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
    (this->FreeClusterIndices).ArrayNum = iVar3 + -1;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->Clusters).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  pFVar6 = (this->Clusters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50;
  if ((*(int *)pFVar6 != -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCluster.RootIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x46,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  *(int *)pFVar6 = param_1;
  this->NumAllocatedClusters = this->NumAllocatedClusters + 1;
  return uVar4;
}

// DissolveCluster @ 1422697a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FUObjectClusterContainer::DissolveCluster(FUObjectClusterContainer *this,FUObjectCluster *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FUObjectItem *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,param_1->RootIndex);
  pFVar4 = (param_1->ReferencedByClusters).AllocatorInstance.Data;
  (param_1->ReferencedByClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_1->ReferencedByClusters).ArrayNum;
  (param_1->ReferencedByClusters).ArrayNum = 0;
  (param_1->ReferencedByClusters).ArrayMax = 0;
  if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
      (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed)
  {
    pFVar8 = (param_1->Objects).AllocatorInstance.Data;
    iVar2 = (param_1->Objects).ArrayNum;
    uVar3 = pFVar7->ClusterRootIndex;
    pFVar9 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if ((param_1->Objects).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar9) break;
      pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*(int *)pFVar8);
      pFVar8 = pFVar8 + 4;
      pFVar7->ClusterRootIndex = 0;
    }
    FreeCluster(this,~uVar3);
  }
  pFVar9 = pFVar4;
  do {
    if (pFVar9 == pFVar4 + (longlong)iVar1 * 4) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
        return;
      }
      return;
    }
    pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*(int *)pFVar9);
    uVar3 = pFVar7->ClusterRootIndex;
    if (uVar3 != 0) {
      if (((byte)(uVar3 >> 0x1f) & (int)~uVar3 < (this->Clusters).ArrayNum) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      DissolveCluster(this,(FUObjectCluster *)
                           ((this->Clusters).AllocatorInstance.Data + (longlong)(int)~uVar3 * 0x50))
      ;
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// DissolveCluster @ 142269920

void __thiscall
FUObjectClusterContainer::DissolveCluster
          (FUObjectClusterContainer *this,UObjectBaseUtility *param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FUObjectCluster *pFVar4;
  int iVar5;
  
  if (param_1 == (UObjectBaseUtility *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClusterRootOrObjectFromCluster",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = *(int *)&param_1->field_0xc;
  pFVar3 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar5);
  if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
    iVar5 = pFVar3->ClusterRootIndex;
  }
  if (iVar5 != 0) {
    if (0 < iVar5) {
      if (iVar5 < GUObjectArray.ObjObjects.NumElements) {
        pFVar3 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar5);
      }
      else {
        pFVar3 = (FUObjectItem *)0x0;
      }
    }
    pFVar4 = operator[](&GUObjectClusters,~pFVar3->ClusterRootIndex);
    if (pFVar4 != (FUObjectCluster *)0x0) {
      DissolveCluster(this,pFVar4);
    }
  }
  return;
}

// DissolveClusterAndMarkObjectsAsUnreachable @ 1422699e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FUObjectClusterContainer::DissolveClusterAndMarkObjectsAsUnreachable
          (FUObjectClusterContainer *this,FUObjectItem *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  longlong lVar5;
  code *pcVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  FUObjectItem *pFVar9;
  EInternalObjectFlags EVar10;
  EInternalObjectFlags EVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  
  uVar12 = ~param_1->ClusterRootIndex;
  local_res20 = uVar12;
  if ((((byte)((uint)param_1->ClusterRootIndex >> 0x1f) & (int)uVar12 < (this->Clusters).ArrayNum)
       == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->Clusters).AllocatorInstance.Data;
  piVar4 = *(int **)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x38);
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x38) = 0;
  iVar1 = *(int *)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x40);
  *(undefined8 *)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x40) = 0;
  piVar13 = *(int **)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 8);
  iVar2 = *(int *)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x10);
  piVar14 = piVar13 + iVar2;
  do {
    if (*(int *)(pFVar3 + (longlong)(int)uVar12 * 0x50 + 0x10) != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar13 == piVar14) {
      (**(code **)(((param_1->field1_0x8).Object)->_padding_ + 0x38))();
      FreeCluster(this,local_res20);
      piVar14 = piVar4;
      do {
        if (piVar14 == piVar4 + iVar1) {
          if (piVar4 != (int *)0x0) {
            FMemory::Free(piVar4);
          }
          return;
        }
        pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*piVar14);
        EVar11 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
        if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) {
          do {
            lVar5 = (pFVar9->field0_0x0).FlagsAndRefCount;
            EVar10 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
            EVar7 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
            if ((EVar11 & EVar10) == Borrowed) break;
            if (((ulonglong)pFVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            bVar8 = lVar5 == (pFVar9->field0_0x0).FlagsAndRefCount;
            if (bVar8) {
              (pFVar9->field0_0x0).FlagsAndRefCount =
                   (longlong)(int)(~EVar11 & EVar10) << 0x20 | (longlong)(int)lVar5;
            }
            UNLOCK();
            EVar7 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          } while (!bVar8);
          do {
            lVar5 = (pFVar9->field0_0x0).FlagsAndRefCount;
            EVar11 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
            if ((EVar11 & EVar7) == EVar7) break;
            if (((ulonglong)pFVar9 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            bVar8 = lVar5 == (pFVar9->field0_0x0).FlagsAndRefCount;
            if (bVar8) {
              (pFVar9->field0_0x0).FlagsAndRefCount =
                   (longlong)(int)(EVar11 | EVar7) << 0x20 | (longlong)(int)lVar5;
            }
            UNLOCK();
          } while (!bVar8);
          DissolveClusterAndMarkObjectsAsUnreachable(this,pFVar9);
        }
        piVar14 = piVar14 + 1;
      } while( true );
    }
    pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*piVar13);
    pFVar9->ClusterRootIndex = 0;
    EVar11 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
    do {
      lVar5 = (pFVar9->field0_0x0).FlagsAndRefCount;
      EVar10 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
      EVar7 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((EVar11 & EVar10) == Borrowed) break;
      if (((ulonglong)pFVar9 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar8 = lVar5 == (pFVar9->field0_0x0).FlagsAndRefCount;
      if (bVar8) {
        (pFVar9->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(~EVar11 & EVar10) << 0x20 | (longlong)(int)lVar5;
      }
      UNLOCK();
      EVar7 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    } while (!bVar8);
    do {
      lVar5 = (pFVar9->field0_0x0).FlagsAndRefCount;
      EVar11 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
      if ((EVar11 & EVar7) == EVar7) break;
      if (((ulonglong)pFVar9 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar8 = lVar5 == (pFVar9->field0_0x0).FlagsAndRefCount;
      if (bVar8) {
        (pFVar9->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(EVar11 | EVar7) << 0x20 | (longlong)(int)lVar5;
      }
      UNLOCK();
    } while (!bVar8);
    piVar13 = piVar13 + 1;
  } while( true );
}

// DissolveClusters @ 142269cc0

void __thiscall
FUObjectClusterContainer::DissolveClusters(FUObjectClusterContainer *this,bool param_1)

{
  int iVar1;
  FUObjectCluster *pFVar2;
  FUObjectCluster *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Clusters).ArrayNum;
  pFVar2 = (FUObjectCluster *)(this->Clusters).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Clusters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUObjectCluster,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((-1 < pFVar2->RootIndex) && ((pFVar2->bNeedsDissolving != false || (param_1)))) {
      DissolveCluster(this,pFVar2);
    }
    pFVar2 = pFVar2 + 1;
  }
  this->bClustersNeedDissolving = false;
  return;
}

// FreeCluster @ 14226cfc0

void __thiscall FUObjectClusterContainer::FreeCluster(FUObjectClusterContainer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  
  pFVar7 = (FUObjectItem *)0x0;
  uVar5 = 0;
  if (param_1 < (this->Clusters).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
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
  pFVar15 = (this->Clusters).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  if ((*(int *)pFVar15 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Cluster.RootIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x4f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)pFVar15;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
    pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
  }
  if ((~pFVar7->ClusterRootIndex != local_res10[0]) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootItem->GetClusterIndex() == InClusterIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x51,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7->ClusterRootIndex = 0;
  do {
    lVar9 = (pFVar7->field0_0x0).FlagsAndRefCount;
    uVar5 = (uint)((ulonglong)lVar9 >> 0x20);
    if ((uVar5 >> 0x18 & 1) == 0) break;
    if (((ulonglong)pFVar7 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar4 = lVar9 == (pFVar7->field0_0x0).FlagsAndRefCount;
    if (bVar4) {
      (pFVar7->field0_0x0).FlagsAndRefCount =
           ((longlong)(int)uVar5 & 0xfffffffffeffffffU) << 0x20 | (longlong)(int)lVar9;
    }
    UNLOCK();
  } while (!bVar4);
  local_res20 = *(uint *)(pFVar15 + 0x20);
  uVar8 = (ulonglong)(int)local_res20;
  piVar13 = *(int **)(pFVar15 + 0x18);
  piVar1 = piVar13 + uVar8;
  do {
    if (*(int *)(pFVar15 + 0x20) != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (piVar13 == piVar1) {
      *(int *)pFVar15 = -1;
      *(int *)(pFVar15 + 0x10) = 0;
      if (*(int *)(pFVar15 + 0x14) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar15 + 8),0,(int *)(pFVar15 + 0x14));
      }
      *(int *)(pFVar15 + 0x30) = 0;
      if (*(int *)(pFVar15 + 0x34) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar15 + 0x28),0,(int *)(pFVar15 + 0x34));
      }
      *(int *)(pFVar15 + 0x20) = 0;
      if (*(int *)(pFVar15 + 0x24) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar15 + 0x18),0,(int *)(pFVar15 + 0x24));
      }
      *(int *)(pFVar15 + 0x40) = 0;
      if (*(int *)(pFVar15 + 0x44) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar15 + 0x38),0,(int *)(pFVar15 + 0x44));
      }
      pFVar15[0x48] = (FScriptContainerElement)0x0;
      pFVar15 = (this->FreeClusterIndices).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar15 + (longlong)(this->FreeClusterIndices).ArrayMax * 4)) &&
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
      iVar6 = (this->FreeClusterIndices).ArrayNum;
      piVar1 = &(this->FreeClusterIndices).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->FreeClusterIndices).AllocatorInstance,piVar1);
      }
      (this->FreeClusterIndices).ArrayNum = iVar6 + 1;
      *(uint *)((this->FreeClusterIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           local_res10[0];
      piVar1 = &this->NumAllocatedClusters;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumAllocatedClusters >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                             ,0x6d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      return;
    }
    if (-1 < *piVar13) {
      pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,*piVar13);
      uVar5 = pFVar7->ClusterRootIndex;
      if ((int)uVar5 < 0) {
        if ((((byte)(uVar5 >> 0x1f) & (int)~uVar5 < (this->Clusters).ArrayNum) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (this->Clusters).AllocatorInstance.Data + (longlong)(int)~uVar5 * 0x50 + 0x38;
        if (((*(FScriptContainerElement **)pFVar10 <= pFVar15) &&
            (pFVar15 < *(FScriptContainerElement **)pFVar10 + (longlong)*(int *)(pFVar10 + 0xc) * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar9 = (longlong)*(int *)(pFVar10 + 8);
        if (*(int *)(pFVar10 + 8) != 0) {
          piVar2 = *(int **)pFVar10;
          iVar14 = 0;
          lVar11 = 0;
          bVar4 = *piVar2 != *(int *)pFVar15;
          iVar6 = 0;
          do {
            lVar11 = lVar11 + 1;
            iVar12 = iVar6 + 1;
            if (lVar11 < lVar9) {
              do {
                if (bVar4 != (piVar2[lVar11] != *(int *)pFVar15)) break;
                iVar12 = iVar12 + 1;
                lVar11 = lVar11 + 1;
              } while (lVar11 < lVar9);
            }
            if (bVar4 != false) {
              if (iVar14 != iVar6) {
                memmove(piVar2 + iVar14,piVar2 + iVar6,(longlong)(iVar12 - iVar6) << 2);
              }
              iVar14 = iVar14 + (iVar12 - iVar6);
            }
            bVar4 = (bool)(bVar4 ^ 1);
            iVar6 = iVar12;
          } while (lVar11 < lVar9);
          *(int *)(pFVar10 + 8) = iVar14;
        }
      }
    }
    uVar8 = (ulonglong)local_res20;
    piVar13 = piVar13 + 1;
  } while( true );
}

// GetMinClusterSize @ 14226fc90

int __thiscall FUObjectClusterContainer::GetMinClusterSize(FUObjectClusterContainer *this)

{
  int iVar1;
  
  iVar1 = GMinGCClusterSize;
  if (GMinGCClusterSize < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// GetObjectCluster @ 14226ff20

FUObjectCluster * __thiscall
FUObjectClusterContainer::GetObjectCluster
          (FUObjectClusterContainer *this,UObjectBaseUtility *param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectCluster *pFVar3;
  FUObjectItem *pFVar4;
  int iVar5;
  
  if ((param_1 == (UObjectBaseUtility *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusterRootOrObjectFromCluster",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x72,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUObjectCluster *)(*pcVar1)();
    return pFVar3;
  }
  iVar5 = *(int *)&param_1->field_0xc;
  pFVar4 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar5);
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
    iVar5 = pFVar4->ClusterRootIndex;
  }
  if (iVar5 == 0) {
    return (FUObjectCluster *)0x0;
  }
  if ((0 < iVar5) && (pFVar4 = (FUObjectItem *)0x0, iVar5 < GUObjectArray.ObjObjects.NumElements)) {
    pFVar4 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar5);
  }
  pFVar3 = operator[](&GUObjectClusters,~pFVar4->ClusterRootIndex);
  return pFVar3;
}

