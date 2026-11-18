// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~FChaosInterpolationResults @ 143afcbc0

void __thiscall
Chaos::FChaosInterpolationResults::~FChaosInterpolationResults(FChaosInterpolationResults *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Chaos::FChaosClusterUnionInterpolationData,int>
            ((FChaosClusterUnionInterpolationData *)
             (this->ClusterUnionInterpolations).AllocatorInstance.Data,
             (this->ClusterUnionInterpolations).ArrayNum);
  pFVar1 = (this->ClusterUnionInterpolations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>
            ((FChaosGeometryCollectionInterpolationData *)
             (this->GeometryCollectionInterpolations).AllocatorInstance.Data,
             (this->GeometryCollectionInterpolations).ArrayNum);
  pFVar1 = (this->GeometryCollectionInterpolations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FChaosRigidInterpolationData,int>
            ((FChaosRigidInterpolationData *)(this->RigidInterpolations).AllocatorInstance.Data,
             (this->RigidInterpolations).ArrayNum);
  pFVar1 = (this->RigidInterpolations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reset @ 143b369e0

void __thiscall Chaos::FChaosInterpolationResults::Reset(FChaosInterpolationResults *this)

{
  int *piVar1;
  TArray<Chaos::FChaosClusterUnionInterpolationData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong lVar4;
  FChaosRigidInterpolationData *pFVar5;
  FChaosGeometryCollectionInterpolationData *pFVar6;
  FChaosClusterUnionInterpolationData *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->RigidInterpolations).AllocatorInstance.Data;
  iVar3 = (this->RigidInterpolations).ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar3 * 0x120;
  while( true ) {
    if ((this->RigidInterpolations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FChaosRigidInterpolationData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (((*(char **)(pFVar8 + 8) != (char *)0x0) && (**(char **)(pFVar8 + 8) == '\0')) &&
       ((*(longlong *)pFVar8 != 0 && (lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x60), lVar4 != 0)
        ))) {
      *(undefined4 *)(lVar4 + 8) = 0xffffffff;
    }
    pFVar8 = pFVar8 + 0x120;
  }
  piVar1 = &(this->RigidInterpolations).ArrayMax;
  pFVar5 = (FChaosRigidInterpolationData *)(this->RigidInterpolations).AllocatorInstance.Data;
  iVar3 = (this->RigidInterpolations).ArrayNum;
  if ((this->RigidInterpolations).ArrayMax < 0) {
    DestructItems<Chaos::FChaosRigidInterpolationData,int>(pFVar5,iVar3);
    (this->RigidInterpolations).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FChaosRigidInterpolationData,int>(pFVar5,iVar3);
    (this->RigidInterpolations).ArrayNum = 0;
  }
  iVar3 = (this->GeometryCollectionInterpolations).ArrayNum;
  pFVar8 = (this->GeometryCollectionInterpolations).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar3 * 0x40;
  while( true ) {
    if ((this->GeometryCollectionInterpolations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FChaosGeometryCollectionInterpolationData,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (((*(char **)(pFVar8 + 8) != (char *)0x0) && (**(char **)(pFVar8 + 8) == '\0')) &&
       ((*(longlong *)pFVar8 != 0 &&
        (lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x860), lVar4 != 0)))) {
      *(undefined4 *)(lVar4 + 8) = 0xffffffff;
    }
    pFVar8 = pFVar8 + 0x40;
  }
  piVar1 = &(this->GeometryCollectionInterpolations).ArrayMax;
  pFVar6 = (FChaosGeometryCollectionInterpolationData *)
           (this->GeometryCollectionInterpolations).AllocatorInstance.Data;
  iVar3 = (this->GeometryCollectionInterpolations).ArrayNum;
  if ((this->GeometryCollectionInterpolations).ArrayMax < 0) {
    DestructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>(pFVar6,iVar3);
    (this->GeometryCollectionInterpolations).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->GeometryCollectionInterpolations).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FChaosGeometryCollectionInterpolationData,int>(pFVar6,iVar3);
    (this->GeometryCollectionInterpolations).ArrayNum = 0;
  }
  iVar3 = (this->ClusterUnionInterpolations).ArrayNum;
  pTVar2 = &this->ClusterUnionInterpolations;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar3 * 0x1e0;
  while( true ) {
    if ((this->ClusterUnionInterpolations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FChaosClusterUnionInterpolationData,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if ((((*(char **)(pFVar8 + 8) != (char *)0x0) && (**(char **)(pFVar8 + 8) == '\0')) &&
        (*(longlong *)pFVar8 != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x178), lVar4 != 0)) {
      *(undefined4 *)(lVar4 + 8) = 0xffffffff;
    }
    pFVar8 = pFVar8 + 0x1e0;
  }
  piVar1 = &(this->ClusterUnionInterpolations).ArrayMax;
  pFVar7 = (FChaosClusterUnionInterpolationData *)(pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ClusterUnionInterpolations).ArrayNum;
  if (-1 < (this->ClusterUnionInterpolations).ArrayMax) {
    DestructItems<Chaos::FChaosClusterUnionInterpolationData,int>(pFVar7,iVar3);
    (this->ClusterUnionInterpolations).ArrayNum = 0;
    return;
  }
  DestructItems<Chaos::FChaosClusterUnionInterpolationData,int>(pFVar7,iVar3);
  (this->ClusterUnionInterpolations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1e0,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return;
}

