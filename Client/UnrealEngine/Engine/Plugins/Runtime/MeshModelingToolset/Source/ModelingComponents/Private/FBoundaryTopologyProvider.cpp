// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// ~FBoundaryTopologyProvider @ 14cb64570

void __thiscall
FBoundaryTopologyProvider::~FBoundaryTopologyProvider(FBoundaryTopologyProvider *this)

{
  return;
}

// FindGroupEdgeID @ 14cb8cdf0

int __thiscall
FBoundaryTopologyProvider::FindGroupEdgeID(FBoundaryTopologyProvider *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Geometry::FMeshBoundaryLoops::FindLoopContainingEdge(this->BoundaryLoops,param_1);
  return iVar1;
}

// ForGroupSetEdges @ 14cb91480

void __thiscall
FBoundaryTopologyProvider::ForGroupSetEdges
          (FBoundaryTopologyProvider *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TFunction<void___cdecl(int)> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint local_res20 [2];
  undefined1 local_e8;
  undefined1 local_e7 [3];
  uint local_e4;
  undefined4 local_e0 [2];
  FScriptContainerElement *local_d8;
  FMeshBoundaryLoops *local_d0;
  TBitArray<FDefaultBitArrayAllocator> *local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if ((1 < *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupIDs.Num() < 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\BoundarySelector.h"
                         ,0x38,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = *(int *)&(param_1->Elements).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar2 != 0) {
    puVar18 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar20;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar9 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14cb9155d;
      uVar16 = puVar18[lVar9 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar10 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_a4 = local_a0 + -1 + (int)lVar9;
    local_d8 = (FScriptContainerElement *)CONCAT44(local_d8._4_4_,(int)lVar9);
    if (iVar2 < iStack_a4) {
      iStack_a4 = iVar2;
    }
  }
LAB_14cb9155d:
  uVar16 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_9c = local_44;
  uVar14 = uVar16 & 0xffffffe0;
  iStack_98 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_e4 = uVar16;
  local_c8 = pTVar20;
  local_c0 = param_1;
  local_b0 = (undefined1 *)pTVar20;
  local_90 = param_1;
  TStack_88.Array = pTVar20;
  if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar16 != uVar3) {
    puVar17 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar3;
      local_e4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cb91660;
      uVar16 = *(uint *)(puVar17 + lVar9 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar16 = (int)lVar9 + -1 + uVar14;
    local_e4 = uVar16;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
      local_e4 = uVar3;
    }
  }
LAB_14cb91660:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_88.CurrentBitIndex == uVar16) && (TStack_88.Array == pTVar20)) &&
       (pTVar6 == param_1)) break;
    local_d0 = this->BoundaryLoops;
    local_res20[0] = (local_d0->Loops).ArrayNum;
    uVar10 = (ulonglong)(int)local_res20[0];
    pFVar19 = (local_d0->Loops).AllocatorInstance.Data;
    local_d8 = pFVar19 + uVar10 * 0x40;
    pFVar15 = pFVar19 + 0x20;
    while( true ) {
      pFVar5 = local_d8;
      if ((local_d0->Loops).ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e8);
      }
      if (pFVar19 == pFVar5) break;
      puVar13 = *(undefined4 **)(pFVar15 + -8);
      iVar2 = *(int *)pFVar15;
      puVar1 = puVar13 + iVar2;
      while( true ) {
        if (*(int *)pFVar15 != iVar2) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_e7);
        }
        if (puVar13 == puVar1) break;
        local_e0[0] = *puVar13;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar4 = *(code **)param_2;
        plVar11 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar11 = (longlong *)&param_2->field_0x10;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(uVar8,local_e0);
        puVar13 = puVar13 + 1;
      }
      pFVar19 = pFVar19 + 0x40;
      pFVar15 = pFVar15 + 0x40;
      uVar10 = (ulonglong)local_res20[0];
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar20 = local_c8;
    uVar16 = local_e4;
  }
  return;
}

// GetCornerVertexID @ 14cb952e0

int __thiscall
FBoundaryTopologyProvider::GetCornerVertexID(FBoundaryTopologyProvider *this,int param_1)

{
  return -1;
}

// GetEdgePolyline @ 14cb95ee0

void __thiscall
FBoundaryTopologyProvider::GetEdgePolyline
          (FBoundaryTopologyProvider *this,int param_1,TPolyline<double,3> *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FMeshBoundaryLoops *pFVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  piVar1 = &(param_2->Vertices).ArrayMax;
  (param_2->Vertices).ArrayNum = 0;
  if ((param_2->Vertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_2,0,piVar1);
  }
  pFVar3 = this->BoundaryLoops;
  uVar14 = 0;
  if (param_1 < (pFVar3->Loops).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar14 = 0;
  pFVar4 = (pFVar3->Loops).AllocatorInstance.Data;
  iVar12 = *(int *)(pFVar4 + (longlong)param_1 * 0x40 + 0x10);
  if (0 < iVar12) {
    lVar15 = 0;
    do {
      pFVar5 = this->BoundaryLoops->Mesh;
      uVar11 = 0;
      if ((int)uVar14 < iVar12) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (param_2->Vertices).AllocatorInstance.Data;
      uVar13 = (ulonglong)
               (*(uint *)(lVar15 + *(longlong *)(pFVar4 + (longlong)param_1 * 0x40 + 8)) & 0x1ff);
      lVar7 = *(longlong *)
               ((pFVar5->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)
               (*(uint *)(lVar15 + *(longlong *)(pFVar4 + (longlong)param_1 * 0x40 + 8)) >> 9) * 8);
      puVar2 = (undefined8 *)(lVar7 + uVar13 * 0x18);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      local_28 = *(undefined8 *)(lVar7 + 0x10 + uVar13 * 0x18);
      if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (param_2->Vertices).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,piVar1);
      }
      uVar14 = uVar14 + 1;
      (param_2->Vertices).ArrayNum = iVar12 + 1;
      lVar15 = lVar15 + 4;
      pFVar8 = (param_2->Vertices).AllocatorInstance.Data;
      pFVar6 = pFVar8 + (longlong)iVar12 * 0x18;
      *(undefined8 *)pFVar6 = local_38;
      *(undefined8 *)(pFVar6 + 8) = uStack_30;
      *(undefined8 *)(pFVar8 + (longlong)iVar12 * 0x18 + 0x10) = local_28;
      iVar12 = *(int *)(pFVar4 + (longlong)param_1 * 0x40 + 0x10);
    } while ((int)uVar14 < iVar12);
  }
  return;
}

// GetGroupEdgeEdges @ 14cb96910

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FBoundaryTopologyProvider::GetGroupEdgeEdges(FBoundaryTopologyProvider *this,int param_1)

{
  FMeshBoundaryLoops *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar1 = this->BoundaryLoops;
  uVar4 = 0;
  if (param_1 < (pFVar1->Loops).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((pFVar1->Loops).AllocatorInstance.Data + (longlong)param_1 * 0x40 + 0x18);
}

// GetGroupEdgeVertices @ 14cb970c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FBoundaryTopologyProvider::GetGroupEdgeVertices(FBoundaryTopologyProvider *this,int param_1)

{
  FMeshBoundaryLoops *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar1 = this->BoundaryLoops;
  uVar4 = 0;
  if (param_1 < (pFVar1->Loops).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((pFVar1->Loops).AllocatorInstance.Data + (longlong)param_1 * 0x40 + 8);
}

// GetGroupIDAt @ 14cb971d0

int __thiscall FBoundaryTopologyProvider::GetGroupIDAt(FBoundaryTopologyProvider *this,int param_1)

{
  return 0;
}

// GetGroupIDForTriangle @ 14cb97270

int __thiscall
FBoundaryTopologyProvider::GetGroupIDForTriangle(FBoundaryTopologyProvider *this,int param_1)

{
  return 0;
}

// GetLoopArcLength @ 14cb97560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

double __thiscall
FBoundaryTopologyProvider::GetLoopArcLength
          (FBoundaryTopologyProvider *this,int param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  
  if ((this->BoundaryLoops == (FMeshBoundaryLoops *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundaryLoops",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                         ,0x25,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    dVar13 = (double)(*pcVar5)();
    return dVar13;
  }
  if (((param_1 < 0) || ((this->BoundaryLoops->Loops).ArrayNum <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoopID >= 0 && LoopID < BoundaryLoops->Loops.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                         ,0x26,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    dVar13 = (double)(*pcVar5)();
    return dVar13;
  }
  pFVar3 = this->BoundaryLoops->Mesh;
  if ((pFVar3 == (FDynamicMesh3 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                         ,0x28,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    dVar13 = (double)(*pcVar5)();
    return dVar13;
  }
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x38))(this,param_1);
  iVar2 = (int)plVar9[1];
  if (param_2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar2,Default);
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      dVar13 = (double)(*pcVar5)();
      return dVar13;
    }
    *(undefined8 *)(param_2->AllocatorInstance).Data = 0;
  }
  uVar11 = 1;
  dVar13 = 0.0;
  if ((longlong)iVar2 < 2) {
    dVar13 = 0.0;
  }
  else {
    lVar12 = 1;
    do {
      uVar8 = 0;
      if ((int)(uVar11 - 1) < (int)plVar9[1]) {
        uVar8 = -uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        dVar13 = (double)(*pcVar5)();
        return dVar13;
      }
      uVar8 = *(uint *)(*plVar9 + -4 + lVar12 * 4);
      uVar10 = (ulonglong)(uVar8 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      dVar16 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
      uVar8 = 0;
      if ((int)uVar11 < (int)plVar9[1]) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        dVar13 = (double)(*pcVar5)();
        return dVar13;
      }
      uVar8 = *(uint *)(*plVar9 + lVar12 * 4);
      uVar10 = (ulonglong)(uVar8 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      dVar16 = dVar16 - *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
      pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
      dVar6 = pdVar1[1];
      dVar17 = dVar17 - *pdVar1;
      auVar14._8_8_ = dVar6;
      auVar14._0_8_ = dVar6;
      dVar18 = dVar18 - dVar6;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16;
      auVar15 = sqrtpd(auVar14,auVar15);
      dVar13 = dVar13 + auVar15._0_8_;
      if (param_2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar8 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          dVar13 = (double)(*pcVar5)();
          return dVar13;
        }
        *(double *)((param_2->AllocatorInstance).Data + lVar12 * 8) = dVar13;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar2);
  }
  return dVar13;
}

// GetLoopMidpoint @ 14cb97880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector<double> * __thiscall
FBoundaryTopologyProvider::GetLoopMidpoint
          (FBoundaryTopologyProvider *this,TVector<double> *__return_storage_ptr__,int param_1,
          double *param_2,TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  
  if ((this->BoundaryLoops == (FMeshBoundaryLoops *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoundaryLoops",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0x40,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar9)();
    return pTVar12;
  }
  if (((param_1 < 0) || ((this->BoundaryLoops->Loops).ArrayNum <= param_1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("LoopID >= 0 && LoopID < BoundaryLoops->Loops.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0x41,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar9)();
    return pTVar12;
  }
  pFVar7 = this->BoundaryLoops->Mesh;
  if ((pFVar7 == (FDynamicMesh3 *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0x43,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar9)();
    return pTVar12;
  }
  plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x38))(this,param_1);
  iVar6 = (int)plVar13[1];
  if (iVar6 == 2) {
    uVar14 = (ulonglong)(*(uint *)*plVar13 & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(*(uint *)*plVar13 >> 9) * 8);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar19 = pdVar1[1];
    dVar3 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    uVar14 = (ulonglong)(*(uint *)(*plVar13 + 4) & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(*(uint *)(*plVar13 + 4) >> 9) * 8);
    dVar4 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar23 = *pdVar1;
    dVar24 = pdVar1[1];
    if (param_2 != (double *)0x0) {
      *param_2 = SQRT((dVar24 - dVar19) * (dVar24 - dVar19) + (dVar23 - dVar5) * (dVar23 - dVar5) +
                      (dVar4 - dVar3) * (dVar4 - dVar3));
    }
    if (param_3 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_3,2,Default);
      if ((param_3->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar9)();
        return pTVar12;
      }
      *(undefined8 *)(param_3->AllocatorInstance).Data = 0;
      if ((param_3->ArrayNum < 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar9)();
        return pTVar12;
      }
      *(double *)((param_3->AllocatorInstance).Data + 8) =
           SQRT((dVar24 - dVar19) * (dVar24 - dVar19) + (dVar23 - dVar5) * (dVar23 - dVar5) +
                (dVar4 - dVar3) * (dVar4 - dVar3));
    }
    dVar19 = (dVar24 + dVar19) * __real_3fe0000000000000;
    dVar3 = (dVar3 + dVar4) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 + dVar23) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar19;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  else if (param_3 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    dVar3 = GetLoopArcLength(this,param_1,(TArray<double,TSizedDefaultAllocator<32>_> *)0x0);
    if (param_2 != (double *)0x0) {
      *param_2 = dVar3;
    }
    dVar4 = __real_3fe0000000000000;
    uVar16 = 1;
    dVar3 = dVar3 * __real_3fe0000000000000;
    uVar15 = 0;
    if (1 < (longlong)iVar6) {
      lVar17 = 1;
      dVar5 = 0.0;
      do {
        uVar11 = 0;
        if ((int)(uVar16 - 1) < (int)plVar13[1]) {
          uVar11 = -uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar12 = (TVector<double> *)(*pcVar9)();
          return pTVar12;
        }
        uVar11 = *(uint *)(*plVar13 + -4 + lVar17 * 4);
        uVar14 = (ulonglong)(uVar11 & 0x1ff);
        lVar8 = *(longlong *)
                 ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
        pdVar1 = (double *)(lVar8 + uVar14 * 0x18);
        dVar23 = *pdVar1;
        dVar24 = pdVar1[1];
        dVar19 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
        uVar11 = 0;
        if ((int)uVar16 < (int)plVar13[1]) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pTVar12 = (TVector<double> *)(*pcVar9)();
          return pTVar12;
        }
        uVar11 = *(uint *)(*plVar13 + lVar17 * 4);
        uVar14 = (ulonglong)(uVar11 & 0x1ff);
        lVar8 = *(longlong *)
                 ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
        pdVar1 = (double *)(lVar8 + uVar14 * 0x18);
        dVar22 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar22;
        dVar23 = dVar23 - *pdVar1;
        dVar19 = dVar19 - dVar22;
        dVar24 = dVar24 - pdVar1[1];
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar24 * dVar24 + dVar23 * dVar23 + dVar19 * dVar19;
        auVar21 = sqrtpd(auVar20,auVar21);
        dVar19 = auVar21._0_8_ + dVar5;
        if (dVar3 < dVar19) {
          uVar18 = uVar16 - 1;
          uVar11 = uVar15;
          if ((int)uVar18 < (int)plVar13[1]) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          dVar3 = (dVar3 - dVar5) / auVar21._0_8_;
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            pTVar12 = (TVector<double> *)(*pcVar9)();
            return pTVar12;
          }
          uVar11 = *(uint *)(*plVar13 + (longlong)(int)uVar18 * 4);
          uVar14 = (ulonglong)(uVar11 & 0x1ff);
          lVar17 = *(longlong *)
                    ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8
                    );
          dVar4 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
          pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
          dVar5 = *pdVar1;
          dVar19 = pdVar1[1];
          if ((int)uVar16 < (int)plVar13[1]) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            pTVar12 = (TVector<double> *)(*pcVar9)();
            return pTVar12;
          }
          dVar22 = __real_3ff0000000000000 - dVar3;
          uVar15 = *(uint *)(*plVar13 + (longlong)(int)uVar16 * 4);
          uVar14 = (ulonglong)(uVar15 & 0x1ff);
          lVar17 = *(longlong *)
                    ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8
                    );
          pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
          dVar24 = pdVar1[1];
          dVar23 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
          (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar22 + *pdVar1 * dVar3;
          dVar4 = dVar4 * dVar22 + dVar23 * dVar3;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar19 * dVar22 + dVar24 * dVar3;
          goto LAB_14cb980dc;
        }
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 1;
        dVar5 = dVar19;
      } while (lVar17 < iVar6);
    }
    if (((int)plVar13[1] < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    uVar16 = iVar6 - 1;
    uVar14 = (ulonglong)(*(uint *)*plVar13 & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)(*(uint *)*plVar13 >> 9) * 8);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar19 = pdVar1[1];
    dVar3 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    if ((int)uVar16 < (int)plVar13[1]) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    uVar15 = *(uint *)(*plVar13 + (longlong)(int)uVar16 * 4);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar23 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 + *pdVar1) * dVar4;
    dVar5 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar19 + dVar23) * dVar4;
    dVar4 = (dVar3 + dVar5) * dVar4;
LAB_14cb980dc:
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  }
  else {
    dVar3 = GetLoopArcLength(this,param_1,param_3);
    if (param_2 != (double *)0x0) {
      *param_2 = dVar3;
    }
    dVar3 = dVar3 * __real_3fe0000000000000;
    uVar15 = 0;
    lVar17 = 0;
    while( true ) {
      uVar16 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar9)();
        return pTVar12;
      }
      pFVar2 = (param_3->AllocatorInstance).Data + lVar17;
      if (dVar3 < *(double *)pFVar2 || dVar3 == *(double *)pFVar2) break;
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + 8;
    }
    uVar16 = uVar15 - 1;
    uVar11 = 0;
    if ((int)uVar16 < param_3->ArrayNum) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    dVar4 = *(double *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
    uVar11 = 0;
    if ((int)uVar15 < param_3->ArrayNum) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    uVar11 = 0;
    if ((int)uVar16 < (int)plVar13[1]) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    dVar3 = (dVar3 - dVar4) /
            (*(double *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar15 * 8) - dVar4);
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    uVar16 = *(uint *)(*plVar13 + (longlong)(int)uVar16 * 4);
    uVar14 = (ulonglong)(uVar16 & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
    dVar4 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar19 = pdVar1[1];
    uVar16 = 0;
    if ((int)uVar15 < (int)plVar13[1]) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar9)();
      return pTVar12;
    }
    dVar22 = __real_3ff0000000000000 - dVar3;
    uVar15 = *(uint *)(*plVar13 + (longlong)(int)uVar15 * 4);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar17 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    pdVar1 = (double *)(lVar17 + uVar14 * 0x18);
    dVar24 = pdVar1[1];
    dVar23 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1 * dVar3 + dVar22 * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar23 * dVar3 + dVar22 * dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar24 * dVar3 + dVar22 * dVar19;
  }
  return __return_storage_ptr__;
}

// GetLoopTangent @ 14cb98520

bool __thiscall
FBoundaryTopologyProvider::GetLoopTangent
          (FBoundaryTopologyProvider *this,int param_1,TVector<double> *param_2)

{
  FMeshBoundaryLoops **ppFVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  FMeshBoundaryLoops *pFVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  
  ppFVar1 = &this->BoundaryLoops;
  if (((param_1 < 0) || (((*ppFVar1)->Loops).ArrayNum <= param_1)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("LoopID >= 0 && LoopID < BoundaryLoops->Loops.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0xf,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pFVar5 = *ppFVar1;
  uVar16 = 0;
  if (param_1 < (pFVar5->Loops).ArrayNum) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  pFVar6 = (pFVar5->Loops).AllocatorInstance.Data;
  lVar19 = (longlong)param_1 * 0x40;
  pFVar7 = (*ppFVar1)->Mesh;
  if ((*(int *)(pFVar6 + lVar19 + 0x10) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  uVar17 = (ulonglong)(**(uint **)(pFVar6 + lVar19 + 8) & 0x1ff);
  lVar8 = *(longlong *)
           ((pFVar7->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)(**(uint **)(pFVar6 + lVar19 + 8) >> 9) * 8);
  dVar3 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
  pdVar2 = (double *)(lVar8 + uVar17 * 0x18);
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  uVar18 = *(int *)(pFVar6 + lVar19 + 0x10) - 1;
  pFVar7 = (*ppFVar1)->Mesh;
  uVar16 = 0;
  if ((int)uVar18 < *(int *)(pFVar6 + lVar19 + 0x10)) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    uVar15 = (*pcVar9)();
    return (bool)uVar15;
  }
  uVar16 = *(uint *)(*(longlong *)(pFVar6 + lVar19 + 8) + (longlong)(int)uVar18 * 4);
  uVar17 = (ulonglong)(uVar16 & 0x1ff);
  lVar19 = *(longlong *)
            ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
  pdVar2 = (double *)(lVar19 + uVar17 * 0x18);
  dVar12 = pdVar2[1];
  dVar4 = *(double *)(lVar19 + 0x10 + uVar17 * 0x18);
  (param_2->field0_0x0)._s_0.X = *pdVar2 - dVar10;
  (param_2->field0_0x0)._s_0.Y = dVar12 - dVar11;
  (param_2->field0_0x0)._s_0.Z = dVar4 - dVar3;
  bVar14 = UE::Math::TVector<double>::Normalize(param_2,__real_3eb0c6f7a0b5ed8d);
  uVar13 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  if (!bVar14) {
    (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = (double)uVar13;
    (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  }
  return bVar14;
}

// GetNumCorners @ 14cb98b80

int __thiscall FBoundaryTopologyProvider::GetNumCorners(FBoundaryTopologyProvider *this)

{
  return 0;
}

// GetNumEdges @ 14cb98bb0

int __thiscall FBoundaryTopologyProvider::GetNumEdges(FBoundaryTopologyProvider *this)

{
  return (this->BoundaryLoops->Loops).ArrayNum;
}

// GetNumGroups @ 14cb98be0

int __thiscall FBoundaryTopologyProvider::GetNumGroups(FBoundaryTopologyProvider *this)

{
  return 1;
}

// GetSelectionBounds @ 14cb9af10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAxisAlignedBox3<double> * __thiscall
FBoundaryTopologyProvider::GetSelectionBounds
          (FBoundaryTopologyProvider *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  FMeshBoundaryLoops *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  TAxisAlignedBox3<double> *pTVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_res18 [8];
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_res20;
  undefined1 local_1b8 [4];
  uint local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  int local_17c;
  FDynamicMesh3 *local_178;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_170;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_b4;
  
  local_res20 = param_2;
  if ((this->BoundaryLoops == (FMeshBoundaryLoops *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoundaryLoops",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0xc6,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar12;
  }
  pFVar4 = this->BoundaryLoops->Mesh;
  local_178 = pFVar4;
  if ((pFVar4 == (FDynamicMesh3 *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,200,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar12;
  }
  if (((*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 ==
        *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34) &&
      (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 ==
       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34)) &&
     (*(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 ==
      *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5522975132567469878>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                        ,0xca,"!Selection.IsEmpty()");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar8)();
      return pTVar12;
    }
    UE::Geometry::FDynamicMesh3::GetBounds(pFVar4,__return_storage_ptr__,false);
  }
  else {
    iStack_158 = 0;
    local_140 = 0;
    uStack_154 = 1;
    local_170 = &param_1->SelectedEdgeIDs;
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(param_1->SelectedEdgeIDs).Elements.field_0x10;
    iVar2 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    local_1b0 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_1a8 = _UNK_150a9e648;
    local_1a0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_198 = _UNK_150a9e6d8;
    local_190 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_188 = _UNK_1508ffb58;
    iStack_144 = 0;
    if (iVar2 != 0) {
      puVar20 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)pTVar21;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar13 = (longlong)iStack_158;
        local_140 = local_140 + 0x20;
        iStack_158 = iStack_158 + 1;
        iStack_144 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14cb9b10f;
        uVar18 = puVar20[lVar13 + 1];
      }
      uStack_154 = -uVar18 & uVar18;
      uVar14 = (ulonglong)uStack_154 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_180 = (int)lVar13;
      iStack_144 = local_140 + -1 + local_180;
      if (iVar2 < iStack_144) {
        iStack_144 = iVar2;
      }
    }
LAB_14cb9b10f:
    uStack_13c = local_b4;
    iStack_138 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
                 *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
    uVar18 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    uStack_148 = 0xffffffff;
    TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
    uVar17 = uVar18 & 0xffffffe0;
    TStack_128.CurrentBitIndex = iStack_144;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_128._28_4_ = local_b4;
    TStack_128.BaseBitIndex = local_140;
    uStack_108 = CONCAT44(uStack_134,iStack_138);
    local_1b4 = uVar18;
    local_168 = pTVar21;
    local_160 = local_170;
    local_150 = (undefined1 *)pTVar21;
    local_130 = local_170;
    TStack_128.Array = pTVar21;
    if ((((int)uVar18 < 0) || (iVar2 < (int)uVar18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar8)();
      return pTVar12;
    }
    pFVar4 = local_178;
    uVar3 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    if (uVar18 != uVar3) {
      puVar19 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)pTVar21;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar18 = uVar3;
        local_1b4 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14cb9b222;
        uVar18 = *(uint *)(puVar19 + lVar13 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_17c = (int)lVar13;
      uVar18 = local_17c + -1 + uVar17;
      local_1b4 = uVar18;
      if ((int)uVar3 < (int)uVar18) {
        uVar18 = uVar3;
        local_1b4 = uVar3;
      }
    }
LAB_14cb9b222:
    uVar23 = (undefined4)uStack_188;
    uVar24 = (undefined4)((ulonglong)uStack_188 >> 0x20);
    uVar25 = (undefined4)local_190;
    uVar26 = (undefined4)((ulonglong)local_190 >> 0x20);
    uVar27 = (undefined4)uStack_198;
    uVar28 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uVar29 = (undefined4)local_1a0;
    uVar30 = (undefined4)((ulonglong)local_1a0 >> 0x20);
    uVar31 = (undefined4)uStack_1a8;
    uVar32 = (undefined4)((ulonglong)uStack_1a8 >> 0x20);
    uVar33 = (undefined4)local_1b0;
    uVar34 = (undefined4)((ulonglong)local_1b0 >> 0x20);
    while( true ) {
      pTVar10 = local_130;
      if (*(int *)&(local_130->Elements).field_0x8 - *(int *)&(local_130->Elements).field_0x34 !=
          (int)uStack_108) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_128.CurrentBitIndex == uVar18) && (TStack_128.Array == pTVar21)) &&
         (pTVar10 == local_170)) break;
      pFVar5 = this->BoundaryLoops;
      uVar18 = *(uint *)(*(longlong *)&pTVar10->Elements +
                        (longlong)TStack_128.CurrentBitIndex * 0xc);
      uVar17 = 0;
      if ((int)uVar18 < (pFVar5->Loops).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar8)();
        return pTVar12;
      }
      pTVar9 = local_res20;
      pFVar6 = (pFVar5->Loops).AllocatorInstance.Data;
      lVar13 = (longlong)(int)uVar18 * 0x40;
      puVar16 = *(uint **)(pFVar6 + lVar13 + 8);
      iVar2 = *(int *)(pFVar6 + lVar13 + 0x10);
      puVar20 = puVar16 + iVar2;
      while( true ) {
        if (*(int *)(pFVar6 + lVar13 + 0x10) != iVar2) {
          local_1b8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1b8);
        }
        if (puVar16 == puVar20) break;
        uVar14 = (ulonglong)(*puVar16 & 0x1ff);
        lVar7 = *(longlong *)
                 ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar16 >> 9) * 8)
        ;
        puVar1 = (undefined8 *)(lVar7 + uVar14 * 0x18);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        local_d8 = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
        (**(code **)pTVar9)(&local_100,*(undefined8 *)&pTVar9->field_0x8,&local_e8);
        uVar22 = (undefined4)((ulonglong)local_100 >> 0x20);
        if (local_100 < (double)CONCAT44(uVar34,uVar33)) {
          uVar33 = SUB84(local_100,0);
          uVar34 = uVar22;
        }
        if ((double)CONCAT44(uVar28,uVar27) <= local_100 &&
            local_100 != (double)CONCAT44(uVar28,uVar27)) {
          uVar27 = SUB84(local_100,0);
          uVar28 = uVar22;
        }
        uVar22 = (undefined4)((ulonglong)local_f8 >> 0x20);
        if (local_f8 < (double)CONCAT44(uVar32,uVar31)) {
          uVar31 = SUB84(local_f8,0);
          uVar32 = uVar22;
        }
        if ((double)CONCAT44(uVar26,uVar25) <= local_f8 &&
            local_f8 != (double)CONCAT44(uVar26,uVar25)) {
          uVar25 = SUB84(local_f8,0);
          uVar26 = uVar22;
        }
        uVar22 = (undefined4)((ulonglong)local_f0 >> 0x20);
        if (local_f0 < (double)CONCAT44(uVar30,uVar29)) {
          uVar29 = SUB84(local_f0,0);
          uVar30 = uVar22;
        }
        if ((double)CONCAT44(uVar24,uVar23) <= local_f0 &&
            local_f0 != (double)CONCAT44(uVar24,uVar23)) {
          uVar23 = SUB84(local_f0,0);
          uVar24 = uVar22;
        }
        puVar16 = puVar16 + 1;
      }
      uStack_188 = CONCAT44(uVar24,uVar23);
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      local_190 = CONCAT44(uVar26,uVar25);
      uStack_198 = CONCAT44(uVar28,uVar27);
      local_1a0 = CONCAT44(uVar30,uVar29);
      uStack_1a8 = CONCAT44(uVar32,uVar31);
      local_1b0 = CONCAT44(uVar34,uVar33);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      pTVar21 = local_168;
      uVar18 = local_1b4;
    }
    *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = local_1b0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uStack_1a8;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = local_1a0;
    *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = uStack_198;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = local_190;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uStack_188;
  }
  return __return_storage_ptr__;
}

// GetSelectionFrame @ 14cb9c180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TFrame3<double> * __thiscall
FBoundaryTopologyProvider::GetSelectionFrame
          (FBoundaryTopologyProvider *this,TFrame3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,TFrame3<double> *param_2)

{
  double *pdVar1;
  undefined1 *puVar2;
  FDynamicMesh3 *this_00;
  FMeshBoundaryLoops *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  TFrame3<double> *pTVar24;
  TVector<double> *pTVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  double extraout_XMM0_Qa;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_res18 [8];
  int local_res20;
  double local_2a0;
  TVector<double>_u_0 local_298;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  int local_260;
  int local_25c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_258;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_250;
  uint uStack_248;
  uint uStack_244;
  undefined1 *local_240;
  undefined4 uStack_238;
  uint uStack_234;
  uint local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  TVector<double>_u_0 local_1f0;
  TQuaternion<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TQuaternion<double>_u_0 local_170;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double dStack_120;
  TVector<double> local_118;
  TVector<double> local_100 [2];
  undefined4 local_cc;
  
  if ((this->BoundaryLoops == (FMeshBoundaryLoops *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoundaryLoops",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0x8a,L""), bVar22)) {
    pcVar6 = (code *)swi(3);
    pTVar24 = (TFrame3<double> *)(*pcVar6)();
    return pTVar24;
  }
  this_00 = this->BoundaryLoops->Mesh;
  if ((this_00 == (FDynamicMesh3 *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                          ,0x8c,L""), bVar22)) {
    pcVar6 = (code *)swi(3);
    pTVar24 = (TFrame3<double> *)(*pcVar6)();
    return pTVar24;
  }
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_res20 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
                *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  if (param_2 == (TFrame3<double> *)0x0) {
    uStack_130 = 0;
    local_138._0_4_ = 0;
    local_138._4_4_ = 0;
    local_128 = ___xmm_3ff00000000000000000000000000000;
    uVar21 = local_128;
    dStack_120 = _UNK_15061cbc8;
    uStack_130._0_4_ = 0;
    uStack_130._4_4_ = 0;
    local_128._0_4_ = (undefined4)___xmm_3ff00000000000000000000000000000;
    local_128._4_4_ = (undefined4)((ulonglong)___xmm_3ff00000000000000000000000000000 >> 0x20);
    uStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    uStack_13c = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    local_138 = 0;
    local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_14c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_144 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_298._16_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
    local_298._20_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
    uStack_280 = (undefined4)local_138;
    uStack_27c = local_138._4_4_;
    local_298._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_298._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_298._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_298._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_278 = (undefined4)uStack_130;
    uStack_274 = uStack_130._4_4_;
    uStack_270 = (undefined4)local_128;
    uStack_26c = local_128._4_4_;
    local_268 = _UNK_15061cbc8;
    local_128 = uVar21;
  }
  else {
    local_298._16_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0x10);
    local_298._20_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0x14);
    uStack_280 = *(undefined4 *)&(param_2->Rotation).field0_0x0;
    uStack_27c = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 4);
    local_298._0_4_ = *(undefined4 *)&(param_2->Origin).field0_0x0;
    local_298._4_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 4);
    local_298._8_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 8);
    local_298._12_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0xc);
    local_278 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 8);
    uStack_274 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0xc);
    uStack_270 = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x10);
    uStack_26c = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x14);
    local_268 = (param_2->Rotation).field0_0x0._s_0.W;
  }
  if (local_res20 == 1) {
    uVar23 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(param_1);
    pFVar3 = this->BoundaryLoops;
    uVar28 = 0;
    if ((int)uVar23 < (pFVar3->Loops).ArrayNum) {
      uVar28 = ~uVar23 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar6 = (code *)swi(3);
      pTVar24 = (TFrame3<double> *)(*pcVar6)();
      return pTVar24;
    }
    pFVar4 = (pFVar3->Loops).AllocatorInstance.Data;
    if ((*(int *)(pFVar4 + (longlong)(int)uVar23 * 0x40 + 0x20) < 1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar6 = (code *)swi(3);
      pTVar24 = (TFrame3<double> *)(*pcVar6)();
      return pTVar24;
    }
    uVar28 = **(uint **)(pFVar4 + (longlong)(int)uVar23 * 0x40 + 0x18);
    uVar27 = *(ulonglong *)
              (*(longlong *)
                ((this_00->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar28 >> 9) * 8) + 8
              + (ulonglong)(uVar28 & 0x1ff) * 0x10);
    iVar31 = (int)(uVar27 >> 0x20);
    iVar29 = (int)uVar27;
    if (iVar31 != -1) {
      uVar12 = uVar27 >> 0x20;
      if (iVar29 < iVar31) {
        uVar12 = uVar27;
      }
      iVar29 = (int)uVar12;
    }
    UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,(TVector<double> *)&local_1f0._s_0,iVar29);
    dVar9 = __real_3ff0000000000000;
    auVar35._0_8_ = local_1f0._s_0.Y * local_1f0._s_0.Y;
    auVar35._8_8_ = 0;
    auVar36._0_8_ =
         local_1f0._s_0.X * local_1f0._s_0.X + auVar35._0_8_ + local_1f0._s_0.Z * local_1f0._s_0.Z;
    auVar36._8_8_ = 0;
    auVar35 = sqrtpd(auVar35,auVar36);
    if (__real_3fb999999999999a < auVar35._0_8_) {
      dVar10 = (double)CONCAT44(uStack_274,local_278);
      dVar8 = (double)CONCAT44(uStack_27c,uStack_280);
      local_1d8._s_0.W = __real_3ff0000000000000;
      dVar7 = (double)CONCAT44(uStack_26c,uStack_270) + (double)CONCAT44(uStack_26c,uStack_270);
      local_1b8._s_0.X = dVar8 * dVar7 + local_268 * (dVar10 + dVar10);
      local_1b8._s_0.Y = dVar10 * dVar7 - local_268 * (dVar8 + dVar8);
      local_1d8._s_0.X = 0.0;
      local_1b8._s_0.Z =
           __real_3ff0000000000000 - (dVar10 * (dVar10 + dVar10) + dVar8 * (dVar8 + dVar8));
      local_1d8._s_0.Y = 0.0;
      local_1d8._s_0.Z = 0.0;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_1d8._s_0,(TVector<double> *)&local_1b8._s_0,
                 (TVector<double> *)&local_1f0._s_0);
      UE::Geometry::TFrame3<double>::Rotate
                ((TFrame3<double> *)&local_298._s_0,(TQuaternion<double> *)&local_1d8._s_0);
    }
    bVar22 = GetLoopTangent(this,uVar23,&local_118);
    if (bVar22) {
      dVar13 = (double)CONCAT44(uStack_27c,uStack_280);
      dVar18 = (double)CONCAT44(uStack_274,local_278);
      dVar19 = (double)CONCAT44(uStack_26c,uStack_270);
      dVar7 = dVar19 + dVar19;
      dVar8 = dVar18 + dVar18;
      dVar10 = dVar18 * dVar7 - local_268 * (dVar13 + dVar13);
      dVar11 = local_268 * dVar8 + dVar13 * dVar7;
      local_188._s_0.Z = dVar13 * dVar7 - local_268 * dVar8;
      local_188._s_0.Y = local_268 * dVar7 + dVar13 * dVar8;
      local_188._s_0.X = dVar9 - (dVar19 * dVar7 + dVar18 * dVar8);
      dVar9 = dVar9 - (dVar13 * (dVar13 + dVar13) + dVar18 * dVar8);
      local_1a0._s_0.X = dVar11;
      local_1a0._s_0.Y = dVar10;
      local_1a0._s_0.Z = dVar9;
      UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                ((TVector<double> *)&local_188._s_0,&local_118,(TVector<double> *)&local_1a0._s_0);
      __libm_sse2_sincos_();
      local_170._s_0.Y = extraout_XMM0_Qa * dVar10;
      local_170._s_0.X = extraout_XMM0_Qa * dVar11;
      local_170._s_0.Z = extraout_XMM0_Qa * dVar9;
      UE::Geometry::TFrame3<double>::Rotate
                ((TFrame3<double> *)&local_298._s_0,(TQuaternion<double> *)&local_170._s_0);
    }
    pTVar25 = GetLoopMidpoint(this,local_100,uVar23,(double *)0x0,
                              (TArray<double,TSizedDefaultAllocator<32>_> *)0x0);
    uVar16 = *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 8);
    uVar17 = *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 0xc);
    uVar14 = *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 0x10);
    uVar15 = *(undefined4 *)((longlong)&pTVar25->field0_0x0 + 0x14);
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar25->field0_0x0)._s_0.X;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 8) = uVar16;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0xc) = uVar17;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = uVar14;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x14) = uVar15;
    *(undefined4 *)&(__return_storage_ptr__->Rotation).field0_0x0 = uStack_280;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 4) = uStack_27c;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = (double)CONCAT44(uStack_274,local_278);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = (double)CONCAT44(uStack_26c,uStack_270);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = local_268;
  }
  else {
    uVar23 = 0;
    local_2a0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    local_258 = &param_1->SelectedEdgeIDs;
    uStack_244 = 1;
    puVar2 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
    uVar28 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    uStack_248 = 0;
    uStack_234 = uStack_248;
    local_230 = uStack_248;
    if (uVar28 != 0) {
      puVar33 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
      if (puVar33 == (uint *)0x0) {
        puVar33 = (uint *)puVar2;
      }
      uVar30 = *puVar33;
      local_230 = uVar23;
      uStack_248 = uVar23;
      while (uVar30 == 0) {
        lVar26 = (longlong)(int)uStack_248;
        local_230 = local_230 + 0x20;
        uStack_248 = uStack_248 + 1;
        uStack_234 = uVar28;
        if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_248)
        goto LAB_14cb9c70d;
        uVar30 = puVar33[lVar26 + 1];
      }
      uStack_244 = -uVar30 & uVar30;
      uVar27 = (ulonglong)uStack_244 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_260 = (int)lVar26;
      uStack_234 = local_260 + -1 + local_230;
      if ((int)uVar28 < (int)uStack_234) {
        uStack_234 = uVar28;
      }
    }
LAB_14cb9c70d:
    local_250 = &param_1->SelectedEdgeIDs;
    uVar30 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    uVar34 = uVar30 & 0xffffffe0;
    uStack_238 = 0xffffffff;
    TStack_218._padding_ = CONCAT44(uStack_244,uStack_248);
    TStack_218.CurrentBitIndex = uStack_234;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    uStack_22c = local_cc;
    TStack_218._28_4_ = local_cc;
    TStack_218.BaseBitIndex = local_230;
    uStack_1f8 = CONCAT44(uStack_224,local_res20);
    iVar29 = (int)uVar30 >> 5;
    local_240 = puVar2;
    iStack_228 = local_res20;
    local_220 = local_250;
    TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar30 < 0) || ((int)uVar28 < (int)uVar30)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      pTVar24 = (TFrame3<double> *)(*pcVar6)();
      return pTVar24;
    }
    dVar9 = __real_3fe0000000000000;
    uVar28 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    if (uVar30 != uVar28) {
      puVar32 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
      if (puVar32 == (undefined1 *)0x0) {
        puVar32 = puVar2;
      }
      uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar29 * 4);
      while (uVar30 == 0) {
        lVar26 = (longlong)iVar29;
        uVar34 = uVar34 + 0x20;
        iVar29 = iVar29 + 1;
        uVar30 = uVar28;
        if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
        goto LAB_14cb9c80f;
        uVar30 = *(uint *)(puVar32 + lVar26 * 4 + 4);
      }
      uVar27 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_25c = (int)lVar26;
      uVar30 = local_25c + -1 + uVar34;
      if ((int)uVar28 < (int)uVar30) {
        uVar30 = uVar28;
      }
    }
LAB_14cb9c80f:
    dVar7 = (double)CONCAT44(uVar17,uVar16);
    dVar8 = (double)CONCAT44(uVar15,uVar14);
    while( true ) {
      pTVar20 = local_220;
      if (*(int *)&(local_220->Elements).field_0x8 - *(int *)&(local_220->Elements).field_0x34 !=
          (int)uStack_1f8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      iVar29 = local_res20;
      if (((TStack_218.CurrentBitIndex == uVar30) &&
          (TStack_218.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar20 == local_258)) break;
      pFVar3 = this->BoundaryLoops;
      uVar28 = *(uint *)(*(longlong *)&pTVar20->Elements +
                        (longlong)TStack_218.CurrentBitIndex * 0xc);
      uVar34 = uVar23;
      if ((int)uVar28 < (pFVar3->Loops).ArrayNum) {
        uVar34 = ~uVar28 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        pTVar24 = (TFrame3<double> *)(*pcVar6)();
        return pTVar24;
      }
      pFVar4 = (pFVar3->Loops).AllocatorInstance.Data;
      lVar26 = (longlong)(int)uVar28 * 0x40;
      if ((*(int *)(pFVar4 + lVar26 + 0x10) < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        pTVar24 = (TFrame3<double> *)(*pcVar6)();
        return pTVar24;
      }
      uVar27 = (ulonglong)(**(uint **)(pFVar4 + lVar26 + 8) & 0x1ff);
      lVar5 = *(longlong *)
               ((this_00->Vertices).Blocks.AllocatorInstance.Data +
               (ulonglong)(**(uint **)(pFVar4 + lVar26 + 8) >> 9) * 8);
      dVar10 = *(double *)(lVar5 + 0x10 + uVar27 * 0x18);
      pdVar1 = (double *)(lVar5 + uVar27 * 0x18);
      dVar11 = *pdVar1;
      dVar13 = pdVar1[1];
      uVar34 = *(int *)(pFVar4 + lVar26 + 0x10) - 1;
      uVar28 = uVar23;
      if ((int)uVar34 < *(int *)(pFVar4 + lVar26 + 0x10)) {
        uVar28 = ~uVar34 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        pTVar24 = (TFrame3<double> *)(*pcVar6)();
        return pTVar24;
      }
      uVar28 = *(uint *)(*(longlong *)(pFVar4 + lVar26 + 8) + (longlong)(int)uVar34 * 4);
      uVar27 = (ulonglong)(uVar28 & 0x1ff);
      lVar26 = *(longlong *)
                ((this_00->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar28 >> 9) * 8);
      pdVar1 = (double *)(lVar26 + uVar27 * 0x18);
      TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
      dVar8 = dVar8 + dVar11 * dVar9 + *pdVar1 * dVar9;
      dVar7 = dVar7 + dVar13 * dVar9 + pdVar1[1] * dVar9;
      local_2a0 = local_2a0 + dVar10 * dVar9 + *(double *)(lVar26 + 0x10 + uVar27 * 0x18) * dVar9;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
    }
    if ((local_res20 < 2) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumSelectedLoops > 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\BoundarySelector.cpp"
                            ,0xb9,L""), bVar22)) {
      pcVar6 = (code *)swi(3);
      pTVar24 = (TFrame3<double> *)(*pcVar6)();
      return pTVar24;
    }
    dVar9 = __real_3ff0000000000000 / (double)iVar29;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar8 * dVar9;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar7 * dVar9;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_2a0 * dVar9;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  }
  return __return_storage_ptr__;
}

