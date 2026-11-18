// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// VisitOverlap @ 143c7e5d0

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<int> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<int> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<int> *)
                (&((TSpatialVisitorData<int> *)pFVar2->Data)->Payload +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = param_1->Payload;
  return true;
}

// VisitOverlap @ 143d826d0

bool __thiscall
`Chaos::
TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)
                (&((TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)pFVar2->Data)->
                  Payload + *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  pTVar5 = (param_1->Payload).GeometryParticleHandle;
  lVar10 = (longlong)iVar9 * 0x38;
  pFVar3 = pFVar2->Data;
  *(TGeometryParticle<double,3> **)(pFVar3 + lVar10) = (param_1->Payload).ExternalGeometryParticle;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar3 + lVar10 + 8) = pTVar5;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar10 + 0x10) = *(undefined8 *)&(param_1->Payload).CachedUniqueIdx;
  *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar10 + 0x20) =
       *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar10 + 0x30) =
       *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  return true;
}

// VisitOverlap @ 143d827a0

bool __thiscall
`Chaos::
TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)
                (&((TSpatialVisitorData<Chaos::FAccelerationStructureHandle> *)pFVar2->Data)->
                  Payload + *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  pTVar5 = (param_1->Payload).GeometryParticleHandle;
  lVar10 = (longlong)iVar9 * 0x38;
  pFVar3 = pFVar2->Data;
  *(TGeometryParticle<double,3> **)(pFVar3 + lVar10) = (param_1->Payload).ExternalGeometryParticle;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar3 + lVar10 + 8) = pTVar5;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar10 + 0x10) = *(undefined8 *)&(param_1->Payload).CachedUniqueIdx;
  *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar10 + 0x20) =
       *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar10 + 0x30) =
       *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  return true;
}

// VisitOverlap @ 143e623a0

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<int> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<int> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<int> *)
                (&((TSpatialVisitorData<int> *)pFVar2->Data)->Payload +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = param_1->Payload;
  return true;
}

// VisitOverlap @ 143e62450

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<int> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<int> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<int> *)
                (&((TSpatialVisitorData<int> *)pFVar2->Data)->Payload +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = param_1->Payload;
  return true;
}

// VisitOverlap @ 143e62500

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<int> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<int> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<int> *)
                (&((TSpatialVisitorData<int> *)pFVar2->Data)->Payload +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = param_1->Payload;
  return true;
}

