// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// TIncrementalMeshDijkstra<FMeshFaceDualGraph> @ 14c895b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIncrementalMeshDijkstra<FMeshFaceDualGraph> * __thiscall
UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::
TIncrementalMeshDijkstra<FMeshFaceDualGraph>
          (TIncrementalMeshDijkstra<FMeshFaceDualGraph> *this,FMeshFaceDualGraph *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  *(undefined8 *)&this->GetPositionFunc = 0;
  *(undefined8 *)&(this->GetPositionFunc).field_0x28 = 0;
  (this->AllocatedNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedNodes).ArrayNum = 0;
  (this->AllocatedNodes).ArrayMax = 0;
  FIndexPriorityQueue::FIndexPriorityQueue(&this->Queue);
  (this->SeedPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeedPoints).ArrayNum = 0;
  (this->SeedPoints).ArrayMax = 0;
  *(undefined8 *)&this->SeedPointExternalIDMap = 0;
  *(undefined8 *)&(this->SeedPointExternalIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->SeedPointExternalIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->SeedPointExternalIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->SeedPointExternalIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SeedPointExternalIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SeedPointExternalIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->SeedPointExternalIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->SeedPointExternalIDMap).field_0x48 = 0;
  this->InvalidFrozenTimestamp = -1;
  this->CurrentSeedTimestamp = 0;
  this->PointSet = param_1;
  FIndexPriorityQueue::Initialize
            (&this->Queue,
             (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4));
  local_48 = *(longlong *)&this->GetPositionFunc;
  uVar2 = *(undefined8 *)&(this->GetPositionFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetPositionFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetPositionFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetPositionFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  *(code **)&this->GetPositionFunc =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::TIncrementalMeshDijkstra<FMeshFaceDualGraph>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&(this->GetPositionFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetPositionFunc).field_0x10 = 0x528d03f0;
  *(undefined4 *)&(this->GetPositionFunc).field_0x14 = 1;
  *(TIncrementalMeshDijkstra<FMeshFaceDualGraph> **)&(this->GetPositionFunc).field_0x18 = this;
  *(undefined4 *)&(this->GetPositionFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetPositionFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetPositionFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetPositionFunc).field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  ForceInitializeAllNodes(this);
  return this;
}

// AddSeedPoints @ 14c8b7260

void __thiscall
UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::AddSeedPoints
          (TIncrementalMeshDijkstra<FMeshFaceDualGraph> *this,
          TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar2;
  uint *puVar3;
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *pTVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  FGraphNode *pFVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  float fVar24;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *local_res10;
  int local_res18 [2];
  uint local_res20;
  TPairInitializer<int_const_&,int_const_&> local_78;
  int *local_68;
  
  this->CurrentSeedTimestamp = this->CurrentSeedTimestamp + 1;
  local_res20 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)local_res20;
  pFVar22 = (param_1->AllocatorInstance).Data;
  pFVar23 = pFVar22 + uVar15 * 0x10;
  local_res10 = param_1;
  do {
    if (local_res10->ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar22 == pFVar23) {
      iVar13 = (this->Queue).num_nodes;
      while( true ) {
        if (iVar13 < 1) {
          return;
        }
        if ((((this->Queue).EnableDebugChecks != false) && ((this->Queue).num_nodes < 1)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x92,L""), bVar12)) break;
        uVar6 = *(uint *)(*(longlong *)(this->Queue).nodes.Blocks.AllocatorInstance.Data + 0xc);
        FIndexPriorityQueue::remove_at_index(&this->Queue,1);
        uVar14 = 0;
        if ((int)uVar6 < (this->AllocatedNodes).ArrayNum) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar18 = (FGraphNode *)
                  ((this->AllocatedNodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20);
        if ((pFVar18 == (FGraphNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Node != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\IncrementalMeshDijkstra.h"
                                ,0x65,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar18->FrozenTimestamp = this->CurrentSeedTimestamp;
        UpdateNeighboursSparse(this,pFVar18);
        iVar13 = (this->Queue).num_nodes;
      }
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (*(int *)&(this->SeedPointExternalIDMap).field_0x8 !=
        *(int *)&(this->SeedPointExternalIDMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->SeedPointExternalIDMap).field_0x40;
      puVar16 = &(this->SeedPointExternalIDMap).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar16 = puVar8;
      }
      iVar13 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(this->SeedPointExternalIDMap).field_0x48 - 1U & *(uint *)pFVar22)
                       * 4);
      if (iVar13 != -1) {
        lVar19 = *(longlong *)&(this->SeedPointExternalIDMap).field_0x0;
        do {
          if (*(uint *)(lVar19 + (longlong)iVar13 * 0x10) == *(uint *)pFVar22) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("SeedPointExternalIDMap.Contains(SeedPoint.ExternalID) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\IncrementalMeshDijkstra.h"
                                ,0x50,L"");
            if (bVar12) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            break;
          }
          iVar13 = *(int *)(lVar19 + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    local_res18[0] = (this->SeedPoints).ArrayNum;
    local_68 = local_res18;
    local_78.Value = (int *)pFVar22;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->SeedPointExternalIDMap,&local_78,(bool *)&local_78.Value);
    pTVar4 = &this->SeedPoints;
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar22) && (pFVar22 < pFVar9 + (longlong)(this->SeedPoints).ArrayMax * 0x10))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar13 = (this->SeedPoints).ArrayNum;
    piVar1 = &(this->SeedPoints).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->SeedPoints).ArrayNum = iVar13 + 1;
    uVar11 = *(undefined8 *)(pFVar22 + 8);
    pFVar9 = (pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar22;
    *(undefined8 *)(pFVar9 + 8) = uVar11;
    uVar6 = *(uint *)(pFVar22 + 4);
    lVar19 = (longlong)(int)uVar6;
    iVar13 = (this->Queue).id_to_index.ArrayNum;
    if (iVar13 + 1 < (int)uVar6) {
LAB_14c8b7449:
      uVar20 = ~uVar6 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar6 < (this->AllocatedNodes).ArrayNum) {
        uVar14 = uVar20;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (this->AllocatedNodes).AllocatorInstance.Data;
      dVar5 = *(double *)(pFVar22 + 8);
      lVar17 = lVar19 * 0x20;
      *(double *)(pFVar9 + lVar17 + 0x10) = dVar5;
      *(int *)(pFVar9 + lVar17 + 0x18) = this->CurrentSeedTimestamp;
      *(int *)(pFVar9 + lVar17 + 8) = local_res18[0];
      if ((((this->Queue).EnableDebugChecks != false) &&
          (bVar12 = FIndexPriorityQueue::Contains(&this->Queue,uVar6), bVar12)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Contains(NodeID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x7d,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar13;
      fVar24 = (float)dVar5;
      uVar14 = 0;
      if ((int)uVar6 < (this->Queue).id_to_index.ArrayNum) {
        uVar14 = uVar20;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + lVar19 * 4) = iVar13;
      uVar14 = (this->Queue).num_nodes;
      uVar20 = (this->Queue).nodes.CurBlock;
      uVar7 = (this->Queue).nodes.CurBlockUsed;
      uVar21 = uVar20 * 0x200 + uVar7;
      if (uVar14 == uVar21) {
        if (uVar7 == 0x200) {
          if (uVar20 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar2 = &(this->Queue).nodes;
          pTVar2->CurBlock = pTVar2->CurBlock + 1;
          uVar20 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar14 = (this->Queue).nodes.CurBlockUsed;
LAB_14c8b76ab:
        lVar17 = (longlong)(int)uVar14;
        lVar19 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
        *(uint *)(lVar19 + lVar17 * 0xc) = uVar6;
        *(float *)(lVar19 + 4 + lVar17 * 0xc) = fVar24;
        *(int *)(lVar19 + 8 + lVar17 * 0xc) = iVar13;
        puVar3 = &(this->Queue).nodes.CurBlockUsed;
        *puVar3 = *puVar3 + 1;
      }
      else {
        if (uVar21 < uVar14) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar14);
          uVar14 = (this->Queue).nodes.CurBlockUsed;
          if (uVar14 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar2 = &(this->Queue).nodes;
            pTVar2->CurBlock = pTVar2->CurBlock + 1;
            uVar14 = 0;
            (this->Queue).nodes.CurBlockUsed = 0;
          }
          uVar20 = (this->Queue).nodes.CurBlock;
          goto LAB_14c8b76ab;
        }
        uVar15 = (ulonglong)(uVar14 & 0x1ff);
        lVar19 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8)
        ;
        *(uint *)(lVar19 + uVar15 * 0xc) = uVar6;
        *(float *)(lVar19 + 4 + uVar15 * 0xc) = fVar24;
        *(int *)(lVar19 + 8 + uVar15 * 0xc) = iVar13;
      }
      uVar6 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (&this->Queue,
                 *(int *)(*(longlong *)
                           ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar6 >> 9) * 8) + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
    }
    else {
      uVar14 = 0;
      if ((int)uVar6 < iVar13) {
        uVar14 = ~uVar6 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar14 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + lVar19 * 4);
      if ((((int)uVar14 < 1) || ((this->Queue).num_nodes < (int)uVar14)) ||
         (*(int *)(*(longlong *)
                    ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar14 >> 9) * 8) + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc) < 1))
      goto LAB_14c8b7449;
      bVar12 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7904651905425473450>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\IncrementalMeshDijkstra.h"
                          ,0x56,"Queue.Contains(PointID) == false");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar22 = pFVar22 + 0x10;
    uVar15 = (ulonglong)local_res20;
  } while( true );
}

// ForceInitializeAllNodes @ 14c8f0010

void __thiscall
UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::ForceInitializeAllNodes
          (TIncrementalMeshDijkstra<FMeshFaceDualGraph> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  
  piVar1 = &(this->AllocatedNodes).ArrayNum;
  iVar6 = *piVar1;
  uVar8 = (int)this->PointSet->_padding_ * 0x200 +
          *(int *)((longlong)&this->PointSet->_padding_ + 4);
  if (iVar6 < (int)uVar8) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar8 - iVar6,&(this->AllocatedNodes).AllocatorInstance,piVar1,
               &(this->AllocatedNodes).ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar6) {
      uVar11 = iVar6 - uVar8;
      if (((int)(uVar11 | uVar8) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar11 != 0) {
        pFVar7 = (this->AllocatedNodes).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
        iVar6 = (*piVar1 - uVar11) - uVar8;
        if (iVar6 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar11 * 0x20,(longlong)iVar6 << 5);
        }
        *piVar1 = *piVar1 - uVar11;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->AllocatedNodes).AllocatorInstance,*piVar1,
                   &(this->AllocatedNodes).ArrayMax);
      }
    }
  }
  uVar4 = __real_7fefffffffffffff;
  lVar10 = (longlong)(int)uVar8;
  if (0 < (int)uVar8) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      iVar6 = this->InvalidFrozenTimestamp;
      uVar11 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AllocatedNodes).AllocatorInstance.Data;
      pFVar7 = pFVar2 + lVar9;
      *(ulonglong *)pFVar7 = CONCAT44(0xffffffff,uVar8);
      *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_3c,0xffffffff);
      pFVar2 = pFVar2 + lVar9 + 0x10;
      *(undefined8 *)pFVar2 = uVar4;
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iVar6);
      lVar9 = lVar9 + 0x20;
      lVar10 = lVar10 + -1;
      uVar8 = uVar8 + 1;
    } while (lVar10 != 0);
  }
  return;
}

// UpdateNeighboursSparse @ 14c922560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TIncrementalMeshDijkstra<FMeshFaceDualGraph>::UpdateNeighboursSparse
          (TIncrementalMeshDijkstra<FMeshFaceDualGraph> *this,FGraphNode *param_1)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  TIncrementalMeshDijkstra<FMeshFaceDualGraph> *pTVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar16 [16];
  undefined1 auStackY_248 [32];
  int local_218 [2];
  int local_210 [2];
  uint local_208 [2];
  TIncrementalMeshDijkstra<FMeshFaceDualGraph> *local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  TFunction<int___cdecl(int)> local_1c8;
  TFunction<int___cdecl(int)> local_198;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  plVar14 = (longlong *)(local_168 + 0x20);
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_218[0] = param_1->PointID;
  local_200 = this;
  Core::Private::Function::CheckCallable(*(void **)&this->GetPositionFunc);
  plVar13 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  pcVar3 = *(code **)&this->GetPositionFunc;
  plVar12 = (longlong *)&(this->GetPositionFunc).field_0x10;
  if (plVar13 != (longlong *)0x0) {
    plVar12 = plVar13;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  (*pcVar3)(&local_1e0,uVar9,local_218);
  dVar1 = param_1->GraphDistance;
  FDynamicGraph::VtxVerticesItr
            ((FDynamicGraph *)this->PointSet,(MappedValueEnumerable *)local_168,param_1->PointID);
  uVar6 = local_168._8_4_;
  uVar9 = local_168._0_8_;
  local_1c8._0_8_ = local_168._16_8_;
  local_1c8._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar13 = plVar14;
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar13)(plVar13,&local_1c8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)uVar9,uVar6,false,&local_1c8);
  local_198._0_8_ = local_168._16_8_;
  local_198._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar13 = plVar14;
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar13)(plVar13,&local_198.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_c8,(FSmallListSet *)local_168._0_8_,local_168._8_4_,true,
             &local_198);
LAB_14c9226c0:
  do {
    if ((((local_128._0_8_ == local_c8._0_8_) && (local_128._8_4_ == local_c8._8_4_)) &&
        (local_128._24_4_ == local_c8._24_4_)) && (local_128._28_4_ == local_c8._28_4_)) {
      if (local_c8._48_8_ != 0) {
        plVar13 = (longlong *)(local_c8 + 0x40);
        if ((longlong *)local_c8._88_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_c8._88_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if ((code *)local_128._48_8_ != (code *)0x0) {
        plVar13 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          plVar13 = local_d0;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if (local_168._16_8_ != 0) {
        if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_168._56_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      return;
    }
    local_210[0] = local_128._32_4_;
    Core::Private::Function::CheckCallable((void *)local_128._48_8_);
    uVar9 = local_128._48_8_;
    plVar13 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar13 = local_d0;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    uVar8 = (*(code *)uVar9)(uVar10,local_210);
    pTVar5 = local_200;
    uVar11 = 0;
    if ((int)uVar8 < (local_200->AllocatedNodes).ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4 = (pTVar5->AllocatedNodes).AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar8 * 0x20;
    if (*(int *)(pFVar4 + lVar15 + 0x18) != pTVar5->CurrentSeedTimestamp) {
      local_208[0] = uVar8;
      Core::Private::Function::CheckCallable(*(void **)&pTVar5->GetPositionFunc);
      pcVar3 = *(code **)&pTVar5->GetPositionFunc;
      plVar13 = *(longlong **)&(local_200->GetPositionFunc).field_0x28;
      plVar12 = (longlong *)&(local_200->GetPositionFunc).field_0x10;
      if (plVar13 != (longlong *)0x0) {
        plVar12 = plVar13;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      (*pcVar3)(&local_1f8,uVar9,local_208);
      pTVar5 = local_200;
      iVar2 = (local_200->Queue).id_to_index.ArrayNum;
      auVar16._8_8_ = 0;
      auVar16._0_8_ =
           (local_1f0 - local_1d8) * (local_1f0 - local_1d8) +
           (local_1f8 - local_1e0) * (local_1f8 - local_1e0) +
           (local_1e8 - local_1d0) * (local_1e8 - local_1d0);
      auVar16 = sqrtpd(unaff_XMM6,auVar16);
      unaff_XMM6._8_8_ = auVar16._8_8_;
      unaff_XMM6._0_8_ = auVar16._0_8_ + dVar1;
      if ((int)uVar8 <= iVar2 + 1) {
        uVar11 = 0;
        if ((int)uVar8 < iVar2) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar11 = *(uint *)((pTVar5->Queue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar8 * 4);
        if (((0 < (int)uVar11) && ((int)uVar11 <= (pTVar5->Queue).num_nodes)) &&
           (0 < *(int *)(*(longlong *)
                          ((pTVar5->Queue).nodes.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc))) {
          if (*(double *)(pFVar4 + lVar15 + 0x10) <= unaff_XMM6._0_8_) goto LAB_14c9228fd;
          *(int *)(pFVar4 + lVar15 + 4) = param_1->PointID;
          *(int *)(pFVar4 + lVar15 + 8) = param_1->SeedID;
          *(double *)(pFVar4 + lVar15 + 0x10) = unaff_XMM6._0_8_;
          FIndexPriorityQueue::Update(&pTVar5->Queue,uVar8,(float)unaff_XMM6._0_8_);
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
          goto LAB_14c9226c0;
        }
      }
      if (unaff_XMM6._0_8_ < *(double *)(pFVar4 + lVar15 + 0x10)) {
        *(int *)(pFVar4 + lVar15 + 4) = param_1->PointID;
        *(int *)(pFVar4 + lVar15 + 8) = param_1->SeedID;
        *(double *)(pFVar4 + lVar15 + 0x10) = unaff_XMM6._0_8_;
        FIndexPriorityQueue::Insert(&pTVar5->Queue,uVar8,(float)unaff_XMM6._0_8_);
      }
    }
LAB_14c9228fd:
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
  } while( true );
}

