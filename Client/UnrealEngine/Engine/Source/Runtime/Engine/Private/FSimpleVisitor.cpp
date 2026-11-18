// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// VisitOverlap @ 1482bf7e0

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FindAllIntersectionsImp'::__l2::FSimpleVisitor::VisitOverlap
          (void *this,TSpatialVisitorData<FExternalSpatialAccelerationPayload> *param_1)

{
  int *piVar1;
  FObjectKey *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  int iVar5;
  FUniqueIdx FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  
  pFVar3 = *(ForAnyElementType **)this;
  if (((TSpatialVisitorData<FExternalSpatialAccelerationPayload> *)pFVar3->Data <= param_1) &&
     (param_1 < (TSpatialVisitorData<FExternalSpatialAccelerationPayload> *)
                (&((TSpatialVisitorData<FExternalSpatialAccelerationPayload> *)pFVar3->Data)->
                  Payload + *(int *)((longlong)&pFVar3[1].Data + 4)))) {
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
  iVar9 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar9 + 1;
  iVar5 = (param_1->Payload).BoneId;
  FVar6.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  pFVar2 = (FObjectKey *)(pFVar3->Data + (longlong)iVar9 * 0x10);
  *pFVar2 = (param_1->Payload).Component.ObjectKey;
  pFVar2[1].ObjectIndex = iVar5;
  pFVar2[1].ObjectSerialNumber = FVar6.Idx;
  return true;
}

