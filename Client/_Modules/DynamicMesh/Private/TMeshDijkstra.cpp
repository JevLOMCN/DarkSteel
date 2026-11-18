// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 14

// <lambda_invoker_cdecl> @ 14c77f5e0

double __cdecl
`UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
TMeshDijkstra<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (int param_1,int param_2,int param_3,double param_4)

{
  return param_4;
}

// ComputeToMaxDistance @ 14c7f2780

void __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2)

{
  double dVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_48 [3];
  
  uVar6 = param_1->ArrayNum;
  lVar9 = (longlong)(int)uVar6;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  if ((int)uVar6 < 1) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
  }
  else {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar6,&local_48[0].AllocatorInstance,&local_48[0].ArrayNum,
                       &local_48[0].ArrayMax);
    DefaultConstructItems<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,int>
              (local_48[0].AllocatorInstance.Data + (longlong)iVar5 * 0x10,uVar6);
  }
  uVar7 = 0;
  if (0 < (int)uVar6) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar1 = *(double *)((param_1->AllocatorInstance).Data + lVar10);
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar10 + 8);
      uVar6 = 0;
      if ((int)uVar7 < local_48[0].ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(local_48[0].AllocatorInstance.Data + lVar10) = 0xffffffff;
      *(int *)(local_48[0].AllocatorInstance.Data + lVar10 + 4) = (int)dVar1;
      *(undefined8 *)(local_48[0].AllocatorInstance.Data + lVar10 + 8) = uVar2;
      lVar10 = lVar10 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  ComputeToMaxDistance(this,local_48,param_2);
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return;
}

// ComputeToMaxDistance @ 14c7f29a0

void __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToMaxDistance
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,
          TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
          *param_1,double param_2)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> *this_00;
  FIndexPriorityQueue *this_01;
  undefined8 *puVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  FGraphNode *pFVar19;
  FScriptContainerElement *pFVar20;
  FGraphNode *pFVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  FGraphNode *pFVar28;
  FScriptContainerElement *pFVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *local_res10;
  uint local_res20 [2];
  uint local_a8 [2];
  uint local_a0;
  undefined1 local_9c [12];
  uint *local_90;
  uint *local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pTVar2 = &this->SeedPoints;
  piVar4 = &(this->SeedPoints).ArrayMax;
  this->MaxGraphDistance = 0.0;
  this->MaxGraphDistancePointID = -1;
  (this->SeedPoints).ArrayNum = 0;
  local_res10 = param_1;
  if (*piVar4 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar4);
  }
  local_a0 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_a0;
  pFVar29 = (param_1->AllocatorInstance).Data;
  pFVar20 = pFVar29 + uVar16 * 0x10;
  local_9c._4_8_ = pFVar20;
  do {
    pFVar28 = (FGraphNode *)0x0;
    if (param_1->ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar29 == pFVar20) {
      iVar27 = (this->Queue).num_nodes;
      do {
        if (iVar27 < 1) {
          return;
        }
        if ((((this->Queue).EnableDebugChecks != false) && ((this->Queue).num_nodes < 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x92,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar7 = *(uint *)(*(longlong *)(this->Queue).nodes.Blocks.AllocatorInstance.Data + 0xc);
        FIndexPriorityQueue::remove_at_index(&this->Queue,1);
        pFVar21 = pFVar28;
        if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
            *(int *)&(this->IDToNodeIndexMap).field_0x34) {
          puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
          puVar18 = &(this->IDToNodeIndexMap).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar18 = puVar10;
          }
          uVar15 = *(uint *)(puVar18 +
                            (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) *
                            4);
          if (uVar15 != 0xffffffff) {
            do {
              puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 + *(longlong *)&this->IDToNodeIndexMap
                                );
              if (*puVar17 == uVar7) {
                pFVar19 = (FGraphNode *)(puVar17 + 1);
                if (puVar17 == (uint *)0x0) {
                  pFVar19 = pFVar28;
                }
                if ((pFVar19 != (FGraphNode *)0x0) &&
                   (pFVar21 = (FGraphNode *)
                              (*(longlong *)
                                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)pFVar19->PointID >> 9) * 8) +
                              (ulonglong)(pFVar19->PointID & 0x1ff) * 0x20),
                   pFVar21 != (FGraphNode *)0x0)) goto LAB_14c7f3013;
                break;
              }
              uVar15 = puVar17[2];
            } while (uVar15 != 0xffffffff);
          }
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                            ,0x83,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14c7f3013:
        dVar5 = pFVar21->GraphDistance;
        uVar30 = SUB84(dVar5,0);
        uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar6 = this->MaxGraphDistance;
        if (dVar5 <= dVar6) {
          uVar30 = SUB84(dVar6,0);
          uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        this->MaxGraphDistance = (double)CONCAT44(uVar31,uVar30);
        if (param_2 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != param_2
           ) {
          return;
        }
        pFVar21->bFrozen = true;
        this->MaxGraphDistancePointID = pFVar21->PointID;
        UpdateNeighboursSparse(this,pFVar21);
        iVar27 = (this->Queue).num_nodes;
      } while( true );
    }
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    iVar27 = (this->SeedPoints).ArrayNum;
    if (((pFVar9 <= pFVar29) && (pFVar29 < pFVar9 + (longlong)*piVar4 * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (this->SeedPoints).ArrayNum;
    if (iVar14 == *piVar4) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar4);
    }
    (this->SeedPoints).ArrayNum = iVar14 + 1;
    uVar12 = *(undefined8 *)(pFVar29 + 8);
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar29;
    *(undefined8 *)(pFVar9 + 8) = uVar12;
    iVar14 = (this->Queue).id_to_index.ArrayNum;
    uVar7 = *(uint *)(pFVar29 + 4);
    if (iVar14 + 1 < (int)uVar7) {
LAB_14c7f2bd7:
      local_a8[0] = uVar7;
      if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
          *(int *)&(this->IDToNodeIndexMap).field_0x34) {
        puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
        puVar18 = &(this->IDToNodeIndexMap).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar18 = puVar10;
        }
        uVar15 = *(uint *)(puVar18 +
                          (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) * 4
                          );
        if (uVar15 != 0xffffffff) {
          do {
            puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 +
                              *(longlong *)&(this->IDToNodeIndexMap).field_0x0);
            if (*puVar17 == uVar7) {
              puVar24 = puVar17 + 1;
              if (puVar17 == (uint *)0x0) {
                puVar24 = (uint *)0x0;
              }
              if (puVar24 != (uint *)0x0) {
                lVar23 = (ulonglong)(*puVar24 & 0x1ff) * 0x20 +
                         *(longlong *)
                          ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                          (ulonglong)(*puVar24 >> 9) * 8);
                goto LAB_14c7f2d00;
              }
              break;
            }
            uVar15 = puVar17[2];
          } while (uVar15 != 0xffffffff);
        }
      }
      uVar15 = (this->AllocatedNodes).CurBlockUsed;
      this_00 = &this->AllocatedNodes;
      uStack_78 = 0;
      local_res20[0] = this_00->CurBlock * 0x200 + uVar15;
      uStack_7c = 0xffffffff;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = uVar7;
      if (uVar15 == 0x200) {
        if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
          AddAllocatedBlock(this_00);
        }
        this_00->CurBlock = this_00->CurBlock + 1;
        (this->AllocatedNodes).CurBlockUsed = 0;
      }
      lVar26 = (longlong)(int)(this->AllocatedNodes).CurBlockUsed * 0x20;
      lVar23 = *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (longlong)(int)this_00->CurBlock * 8);
      local_90 = local_a8;
      local_88 = local_res20;
      puVar3 = (undefined8 *)(lVar23 + lVar26);
      *puVar3 = CONCAT44(uStack_7c,local_80);
      puVar3[1] = CONCAT44(uStack_74,uStack_78);
      puVar3 = (undefined8 *)(lVar23 + 0x10 + lVar26);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar17 = &(this->AllocatedNodes).CurBlockUsed;
      *puVar17 = *puVar17 + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->IDToNodeIndexMap,(TPairInitializer<int_const_&,int_const_&> *)local_9c,
                 (bool *)&local_90);
      lVar23 = (ulonglong)(local_res20[0] & 0x1ff) * 0x20 +
               *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_res20[0] >> 9) * 8);
LAB_14c7f2d00:
      dVar5 = *(double *)(pFVar29 + 8);
      *(int *)(lVar23 + 8) = iVar27;
      this_01 = &this->Queue;
      *(double *)(lVar23 + 0x10) = dVar5;
      *(undefined1 *)(lVar23 + 0x18) = 1;
      if (((this_01->EnableDebugChecks != false) &&
          (bVar13 = FIndexPriorityQueue::Contains(this_01,uVar7), bVar13)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Contains(NodeID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x7d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar27 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar27;
      fVar32 = (float)dVar5;
      uVar15 = 0;
      if ((int)uVar7 < (this->Queue).id_to_index.ArrayNum) {
        uVar15 = ~uVar7 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = iVar27
      ;
      uVar15 = (this->Queue).num_nodes;
      uVar22 = (this->Queue).nodes.CurBlock;
      uVar8 = (this->Queue).nodes.CurBlockUsed;
      uVar25 = uVar22 * 0x200 + uVar8;
      if (uVar15 == uVar25) {
        if (uVar8 == 0x200) {
          if (uVar22 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar22 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar15 = (this->Queue).nodes.CurBlockUsed;
LAB_14c7f2e77:
        lVar26 = (longlong)(int)uVar15;
        lVar23 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
        *(uint *)(lVar23 + lVar26 * 0xc) = uVar7;
        *(float *)(lVar23 + 4 + lVar26 * 0xc) = fVar32;
        *(int *)(lVar23 + 8 + lVar26 * 0xc) = iVar27;
        puVar17 = &(this->Queue).nodes.CurBlockUsed;
        *puVar17 = *puVar17 + 1;
      }
      else {
        if (uVar25 < uVar15) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar15);
          uVar15 = (this->Queue).nodes.CurBlockUsed;
          if (uVar15 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar15 = 0;
            (this->Queue).nodes.CurBlockUsed = 0;
          }
          uVar22 = (this->Queue).nodes.CurBlock;
          goto LAB_14c7f2e77;
        }
        uVar16 = (ulonglong)(uVar15 & 0x1ff);
        lVar23 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
        ;
        *(uint *)(lVar23 + uVar16 * 0xc) = uVar7;
        *(float *)(lVar23 + 4 + uVar16 * 0xc) = fVar32;
        *(int *)(lVar23 + 8 + uVar16 * 0xc) = iVar27;
      }
      uVar7 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (this_01,*(int *)(*(longlong *)
                                   ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                                   (ulonglong)(uVar7 >> 9) * 8) + 8 +
                                 (ulonglong)(uVar7 & 0x1ff) * 0xc));
      pFVar20 = (FScriptContainerElement *)local_9c._4_8_;
    }
    else {
      uVar15 = 0;
      if ((int)uVar7 < iVar14) {
        uVar15 = ~uVar7 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar15 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                        );
      if ((((int)uVar15 < 1) || ((this->Queue).num_nodes < (int)uVar15)) ||
         (*(int *)(*(longlong *)
                    ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar15 >> 9) * 8) + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc) < 1))
      goto LAB_14c7f2bd7;
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4924756041582772341>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                          ,0x75,"Queue.Contains(PointID) == false");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar29 = pFVar29 + 0x10;
    uVar16 = (ulonglong)local_a0;
    param_1 = local_res10;
  } while( true );
}

// UpdateNeighboursSparse @ 14c84fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::UpdateNeighboursSparse
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,FGraphNode *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> *this_00;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_2a8 [32];
  uint local_278 [2];
  int local_270 [2];
  int local_268 [2];
  uint local_260 [2];
  uint local_258 [2];
  undefined4 local_250 [2];
  uint local_248 [2];
  int local_240 [2];
  TPairInitializer<int_const_&,int_const_&> local_238;
  uint *local_228;
  uint *local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  TFunction<int___cdecl(int)> local_1c8;
  TFunction<int___cdecl(int)> local_198;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_270[0] = param_1->PointID;
  Core::Private::Function::CheckCallable(*(void **)&this->GetPositionFunc);
  plVar17 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  pcVar5 = *(code **)&this->GetPositionFunc;
  plVar16 = (longlong *)&(this->GetPositionFunc).field_0x10;
  if (plVar17 != (longlong *)0x0) {
    plVar16 = plVar17;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(&local_200,uVar13,local_270);
  dVar3 = param_1->GraphDistance;
  FDynamicMesh3::VtxVerticesItr(this->PointSet,(MappedValueEnumerable *)local_168,param_1->PointID);
  uVar8 = local_168._8_4_;
  uVar13 = local_168._0_8_;
  local_1c8._0_8_ = local_168._16_8_;
  local_1c8._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar17 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar17)(plVar17,&local_1c8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)uVar13,uVar8,false,&local_1c8);
  local_198._0_8_ = local_168._16_8_;
  local_198._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar17 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar17)(plVar17,&local_198.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_c8,(FSmallListSet *)local_168._0_8_,local_168._8_4_,true,
             &local_198);
LAB_14c84fd40:
  do {
    if ((((local_128._0_8_ == local_c8._0_8_) && (local_128._8_4_ == local_c8._8_4_)) &&
        (local_128._24_4_ == local_c8._24_4_)) && (local_128._28_4_ == local_c8._28_4_)) {
      if (local_c8._48_8_ != 0) {
        plVar17 = (longlong *)(local_c8 + 0x40);
        if ((longlong *)local_c8._88_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_c8._88_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if ((code *)local_128._48_8_ != (code *)0x0) {
        plVar17 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          plVar17 = local_d0;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_168._16_8_ != 0) {
        plVar17 = (longlong *)(local_168 + 0x20);
        if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_168._56_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      return;
    }
    local_268[0] = local_128._32_4_;
    Core::Private::Function::CheckCallable((void *)local_128._48_8_);
    uVar13 = local_128._48_8_;
    plVar17 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar17 = local_d0;
    }
    uVar14 = (**(code **)(*plVar17 + 8))();
    uVar10 = (*(code *)uVar13)(uVar14,local_268);
    local_260[0] = uVar10;
    if (*(int *)&(this->IDToNodeIndexMap).field_0x8 != *(int *)&(this->IDToNodeIndexMap).field_0x34)
    {
      puVar6 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
      puVar18 = &(this->IDToNodeIndexMap).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar18 = puVar6;
      }
      uVar11 = *(uint *)(puVar18 +
                        (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar10) * 4)
      ;
      if (uVar11 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 +
                            *(longlong *)&(this->IDToNodeIndexMap).field_0x0);
          if (*puVar15 == uVar10) {
            puVar21 = puVar15 + 1;
            if (puVar15 == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            if (puVar21 != (uint *)0x0) {
              lVar20 = (ulonglong)(*puVar21 & 0x1ff) * 0x20 +
                       *(longlong *)
                        ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar21 >> 9) * 8);
              goto LAB_14c84fed5;
            }
            break;
          }
          uVar11 = puVar15[2];
        } while (uVar11 != 0xffffffff);
      }
    }
    uVar11 = (this->AllocatedNodes).CurBlockUsed;
    this_00 = &this->AllocatedNodes;
    unaff_XMM6 = ZEXT816(0);
    local_278[0] = this_00->CurBlock * 0x200 + uVar11;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0;
    local_1e8 = uVar10;
    local_1d8 = unaff_XMM6;
    if (uVar11 == 0x200) {
      if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
        AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      (this->AllocatedNodes).CurBlockUsed = 0;
    }
    lVar23 = (longlong)(int)(this->AllocatedNodes).CurBlockUsed * 0x20;
    lVar20 = *(longlong *)
              ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
              (longlong)(int)this_00->CurBlock * 8);
    local_228 = local_260;
    local_220 = local_278;
    puVar2 = (undefined8 *)(lVar20 + lVar23);
    *puVar2 = CONCAT44(uStack_1e4,local_1e8);
    puVar2[1] = CONCAT44(uStack_1dc,uStack_1e0);
    *(undefined1 (*) [16])(lVar20 + 0x10 + lVar23) = unaff_XMM6;
    puVar15 = &(this->AllocatedNodes).CurBlockUsed;
    *puVar15 = *puVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->IDToNodeIndexMap,&local_238,(bool *)&local_228);
    lVar20 = (ulonglong)(local_278[0] & 0x1ff) * 0x20 +
             *(longlong *)
              ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_278[0] >> 9) * 8);
LAB_14c84fed5:
    if (*(char *)(lVar20 + 0x18) == '\0') {
      local_258[0] = uVar10;
      Core::Private::Function::CheckCallable(*(void **)&this->GetPositionFunc);
      plVar17 = *(longlong **)&(this->GetPositionFunc).field_0x28;
      pcVar5 = *(code **)&this->GetPositionFunc;
      plVar16 = (longlong *)&(this->GetPositionFunc).field_0x10;
      if (plVar17 != (longlong *)0x0) {
        plVar16 = plVar17;
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      (*pcVar5)(&local_218,uVar13,local_258);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (local_210 - local_1f8) * (local_210 - local_1f8) +
                     (local_218 - local_200) * (local_218 - local_200) +
                     (local_208 - local_1f0) * (local_208 - local_1f0);
      auVar25 = sqrtpd(unaff_XMM6,auVar7);
      if (this->bEnableDistanceWeighting != false) {
        uVar11 = param_1->SeedPointID;
        uVar12 = 0;
        if ((int)uVar11 < (this->SeedPoints).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_238.Value = auVar25._0_8_;
        local_250[0] = *(undefined4 *)
                        ((this->SeedPoints).AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0x10 + 4);
        local_240[0] = param_1->PointID;
        local_248[0] = uVar10;
        Core::Private::Function::CheckCallable(*(void **)&this->GetWeightedDistanceFunc);
        plVar17 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
        pcVar5 = *(code **)&this->GetWeightedDistanceFunc;
        plVar16 = (longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
        if (plVar17 != (longlong *)0x0) {
          plVar16 = plVar17;
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        auVar25._0_8_ = (*pcVar5)(uVar13,local_240,local_248,local_250);
        auVar25._8_4_ = extraout_XMM0_Dc;
        auVar25._12_4_ = extraout_XMM0_Dd;
      }
      iVar24 = (this->Queue).id_to_index.ArrayNum;
      auVar26._8_8_ = auVar25._8_8_;
      auVar26._0_8_ = auVar25._0_8_ + dVar3;
      if ((int)uVar10 <= iVar24 + 1) {
        uVar11 = 0;
        if ((int)uVar10 < iVar24) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar11 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar10 * 4);
        if (((0 < (int)uVar11) && ((int)uVar11 <= (this->Queue).num_nodes)) &&
           (0 < *(int *)(*(longlong *)
                          ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc))) {
          unaff_XMM6 = auVar26;
          if (*(double *)(lVar20 + 0x10) <= auVar26._0_8_) goto LAB_14c8502ca;
          iVar24 = param_1->PointID;
          *(double *)(lVar20 + 0x10) = auVar26._0_8_;
          *(int *)(lVar20 + 4) = iVar24;
          *(int *)(lVar20 + 8) = param_1->SeedPointID;
          FIndexPriorityQueue::Update(&this->Queue,uVar10,(float)auVar26._0_8_);
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
          goto LAB_14c84fd40;
        }
      }
      iVar24 = param_1->PointID;
      *(double *)(lVar20 + 0x10) = auVar26._0_8_;
      *(int *)(lVar20 + 4) = iVar24;
      *(int *)(lVar20 + 8) = param_1->SeedPointID;
      if ((this->Queue).EnableDebugChecks != false) {
        bVar9 = FIndexPriorityQueue::Contains(&this->Queue,uVar10);
        if (bVar9) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Contains(NodeID) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                             ,0x7d,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar24 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar24;
      unaff_XMM6._4_12_ = auVar26._4_12_;
      unaff_XMM6._0_4_ = (float)auVar26._0_8_;
      uVar11 = 0;
      if ((int)uVar10 < (this->Queue).id_to_index.ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
           iVar24;
      uVar11 = (this->Queue).num_nodes;
      uVar12 = (this->Queue).nodes.CurBlock;
      uVar4 = (this->Queue).nodes.CurBlockUsed;
      uVar22 = uVar12 * 0x200 + uVar4;
      if (uVar11 == uVar22) {
        if (uVar4 == 0x200) {
          if (uVar12 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar12 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar11 = (this->Queue).nodes.CurBlockUsed;
LAB_14c85025e:
        lVar23 = (longlong)(int)uVar11;
        lVar20 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        *(uint *)(lVar20 + lVar23 * 0xc) = uVar10;
        *(float *)(lVar20 + 4 + lVar23 * 0xc) = unaff_XMM6._0_4_;
        *(int *)(lVar20 + 8 + lVar23 * 0xc) = iVar24;
        puVar15 = &(this->Queue).nodes.CurBlockUsed;
        *puVar15 = *puVar15 + 1;
      }
      else {
        if (uVar22 < uVar11) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar11);
          uVar11 = (this->Queue).nodes.CurBlockUsed;
          if (uVar11 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            (this->Queue).nodes.CurBlockUsed = 0;
            uVar11 = 0;
          }
          uVar12 = (this->Queue).nodes.CurBlock;
          goto LAB_14c85025e;
        }
        uVar19 = (ulonglong)(uVar11 & 0x1ff);
        lVar20 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
        ;
        *(uint *)(lVar20 + uVar19 * 0xc) = uVar10;
        *(float *)(lVar20 + 4 + uVar19 * 0xc) = unaff_XMM6._0_4_;
        *(int *)(lVar20 + 8 + uVar19 * 0xc) = iVar24;
      }
      uVar10 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (&this->Queue,
                 *(int *)(*(longlong *)
                           ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar10 >> 9) * 8) + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc));
    }
LAB_14c8502ca:
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
  } while( true );
}

// <lambda_invoker_cdecl> @ 14c85c810

double __cdecl
`UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::TMeshDijkstra<FMeshFaceDualGraph>'::__l2::
<lambda_2>::<lambda_invoker_cdecl>(int param_1,int param_2,int param_3,double param_4)

{
  return param_4;
}

// TMeshDijkstra<UE::Geometry::FDynamicMesh3> @ 14c895e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMeshDijkstra<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::TMeshDijkstra<UE::Geometry::FDynamicMesh3>
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> *this_00;
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
  this->bEnableDistanceWeighting = false;
  *(undefined8 *)&this->GetWeightedDistanceFunc = 0;
  *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x28 = 0;
  *(undefined8 *)&this->IDToNodeIndexMap = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x48 = 0;
  this_00 = &this->AllocatedNodes;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->AllocatedNodes).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedNodes).Blocks.ArrayNum = 0;
  (this->AllocatedNodes).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
  AddAllocatedBlock(this_00);
  FIndexPriorityQueue::FIndexPriorityQueue(&this->Queue);
  (this->SeedPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeedPoints).ArrayNum = 0;
  (this->SeedPoints).ArrayMax = 0;
  this->PointSet = param_1;
  FIndexPriorityQueue::Initialize
            (&this->Queue,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  this->MaxGraphDistance = 0.0;
  this->MaxGraphDistancePointID = -1;
  local_48 = *(longlong *)&this->GetPositionFunc;
  uVar2 = *(undefined8 *)&(this->GetPositionFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetPositionFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetPositionFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetPositionFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  *(code **)&this->GetPositionFunc =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::TMeshDijkstra<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&(this->GetPositionFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetPositionFunc).field_0x10 = 0x528cb1b0;
  *(undefined4 *)&(this->GetPositionFunc).field_0x14 = 1;
  *(TMeshDijkstra<UE::Geometry::FDynamicMesh3> **)&(this->GetPositionFunc).field_0x18 = this;
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
  this->bEnableDistanceWeighting = false;
  local_48 = *(longlong *)&this->GetWeightedDistanceFunc;
  uVar2 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
  *(code **)&this->GetWeightedDistanceFunc =
       Core::Private::Function::
       TFunctionRefCaller<double_(__cdecl*)(int,int,int,double),double,int,int,int,double>::Call;
  *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x10 = 0x528cb1d0;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x18 = 0x4c77f5e0;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// TMeshDijkstra<FMeshFaceDualGraph> @ 14c8960a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMeshDijkstra<FMeshFaceDualGraph> * __thiscall
UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::TMeshDijkstra<FMeshFaceDualGraph>
          (TMeshDijkstra<FMeshFaceDualGraph> *this,FMeshFaceDualGraph *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512> *this_00;
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
  this->bEnableDistanceWeighting = false;
  *(undefined8 *)&this->GetWeightedDistanceFunc = 0;
  *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x28 = 0;
  *(undefined8 *)&this->IDToNodeIndexMap = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->IDToNodeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x48 = 0;
  this_00 = &this->AllocatedNodes;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->AllocatedNodes).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedNodes).Blocks.ArrayNum = 0;
  (this->AllocatedNodes).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::AddAllocatedBlock
            (this_00);
  FIndexPriorityQueue::FIndexPriorityQueue(&this->Queue);
  (this->SeedPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SeedPoints).ArrayNum = 0;
  (this->SeedPoints).ArrayMax = 0;
  this->PointSet = param_1;
  FIndexPriorityQueue::Initialize
            (&this->Queue,
             (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4));
  this->MaxGraphDistance = 0.0;
  this->MaxGraphDistancePointID = -1;
  local_48 = *(longlong *)&this->GetPositionFunc;
  uVar2 = *(undefined8 *)&(this->GetPositionFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetPositionFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetPositionFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetPositionFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  *(code **)&this->GetPositionFunc =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::TMeshDijkstra<FMeshFaceDualGraph>'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
       ::Call;
  *(undefined8 *)&(this->GetPositionFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetPositionFunc).field_0x10 = 0x528d03d0;
  *(undefined4 *)&(this->GetPositionFunc).field_0x14 = 1;
  *(TMeshDijkstra<FMeshFaceDualGraph> **)&(this->GetPositionFunc).field_0x18 = this;
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
  this->bEnableDistanceWeighting = false;
  local_48 = *(longlong *)&this->GetWeightedDistanceFunc;
  uVar2 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
  *(code **)&this->GetWeightedDistanceFunc =
       Core::Private::Function::
       TFunctionRefCaller<double_(__cdecl*)(int,int,int,double),double,int,int,int,double>::Call;
  *(undefined8 *)&(this->GetWeightedDistanceFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x10 = 0x528cb1d0;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x18 = 0x4c85c810;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetWeightedDistanceFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~TMeshDijkstra<UE::Geometry::FDynamicMesh3> @ 14c899950

void __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
~TMeshDijkstra<UE::Geometry::FDynamicMesh3>(TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  pFVar1 = (this->SeedPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Queue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->Queue).nodes);
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
  ~TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>
            (&this->AllocatedNodes);
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IDToNodeIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IDToNodeIndexMap);
  if (*(longlong *)&this->GetWeightedDistanceFunc != 0) {
    plVar3 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->GetPositionFunc != 0) {
    plVar3 = *(longlong **)&(this->GetPositionFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetPositionFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// ~TMeshDijkstra<FMeshFaceDualGraph> @ 14c899a10

void __thiscall
UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::~TMeshDijkstra<FMeshFaceDualGraph>
          (TMeshDijkstra<FMeshFaceDualGraph> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  pFVar1 = (this->SeedPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Queue).id_to_index.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&(this->Queue).nodes);
  TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::
  ~TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>
            (&this->AllocatedNodes);
  *(undefined4 *)&(this->IDToNodeIndexMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IDToNodeIndexMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IDToNodeIndexMap);
  if (*(longlong *)&this->GetWeightedDistanceFunc != 0) {
    plVar3 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->GetPositionFunc != 0) {
    plVar3 = *(longlong **)&(this->GetPositionFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetPositionFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// ComputeToMaxDistance @ 14c8cdac0

void __thiscall
UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::ComputeToMaxDistance
          (TMeshDijkstra<FMeshFaceDualGraph> *this,
          TArray<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
          *param_1,double param_2)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TArray<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512> *this_00;
  FIndexPriorityQueue *this_01;
  undefined8 *puVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  FGraphNode *pFVar19;
  FScriptContainerElement *pFVar20;
  FGraphNode *pFVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  FGraphNode *pFVar28;
  FScriptContainerElement *pFVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *local_res10;
  uint local_res20 [2];
  uint local_a8 [2];
  uint local_a0;
  undefined1 local_9c [12];
  uint *local_90;
  uint *local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pTVar2 = &this->SeedPoints;
  piVar4 = &(this->SeedPoints).ArrayMax;
  this->MaxGraphDistance = 0.0;
  this->MaxGraphDistancePointID = -1;
  (this->SeedPoints).ArrayNum = 0;
  local_res10 = param_1;
  if (*piVar4 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar4);
  }
  local_a0 = param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_a0;
  pFVar29 = (param_1->AllocatorInstance).Data;
  pFVar20 = pFVar29 + uVar16 * 0x10;
  local_9c._4_8_ = pFVar20;
  do {
    pFVar28 = (FGraphNode *)0x0;
    if (param_1->ArrayNum != (int)uVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FSeedPoint_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar29 == pFVar20) {
      iVar27 = (this->Queue).num_nodes;
      do {
        if (iVar27 < 1) {
          return;
        }
        if ((((this->Queue).EnableDebugChecks != false) && ((this->Queue).num_nodes < 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x92,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar7 = *(uint *)(*(longlong *)(this->Queue).nodes.Blocks.AllocatorInstance.Data + 0xc);
        FIndexPriorityQueue::remove_at_index(&this->Queue,1);
        pFVar21 = pFVar28;
        if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
            *(int *)&(this->IDToNodeIndexMap).field_0x34) {
          puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
          puVar18 = &(this->IDToNodeIndexMap).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar18 = puVar10;
          }
          uVar15 = *(uint *)(puVar18 +
                            (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) *
                            4);
          if (uVar15 != 0xffffffff) {
            do {
              puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 + *(longlong *)&this->IDToNodeIndexMap
                                );
              if (*puVar17 == uVar7) {
                pFVar19 = (FGraphNode *)(puVar17 + 1);
                if (puVar17 == (uint *)0x0) {
                  pFVar19 = pFVar28;
                }
                if ((pFVar19 != (FGraphNode *)0x0) &&
                   (pFVar21 = (FGraphNode *)
                              (*(longlong *)
                                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)pFVar19->PointID >> 9) * 8) +
                              (ulonglong)(pFVar19->PointID & 0x1ff) * 0x20),
                   pFVar21 != (FGraphNode *)0x0)) goto LAB_14c8ce133;
                break;
              }
              uVar15 = puVar17[2];
            } while (uVar15 != 0xffffffff);
          }
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                            ,0x83,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14c8ce133:
        dVar5 = pFVar21->GraphDistance;
        uVar30 = SUB84(dVar5,0);
        uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar6 = this->MaxGraphDistance;
        if (dVar5 <= dVar6) {
          uVar30 = SUB84(dVar6,0);
          uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        this->MaxGraphDistance = (double)CONCAT44(uVar31,uVar30);
        if (param_2 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != param_2
           ) {
          return;
        }
        pFVar21->bFrozen = true;
        this->MaxGraphDistancePointID = pFVar21->PointID;
        UpdateNeighboursSparse(this,pFVar21);
        iVar27 = (this->Queue).num_nodes;
      } while( true );
    }
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    iVar27 = (this->SeedPoints).ArrayNum;
    if (((pFVar9 <= pFVar29) && (pFVar29 < pFVar9 + (longlong)*piVar4 * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (this->SeedPoints).ArrayNum;
    if (iVar14 == *piVar4) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar4);
    }
    (this->SeedPoints).ArrayNum = iVar14 + 1;
    uVar12 = *(undefined8 *)(pFVar29 + 8);
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar29;
    *(undefined8 *)(pFVar9 + 8) = uVar12;
    iVar14 = (this->Queue).id_to_index.ArrayNum;
    uVar7 = *(uint *)(pFVar29 + 4);
    if (iVar14 + 1 < (int)uVar7) {
LAB_14c8cdcf7:
      local_a8[0] = uVar7;
      if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
          *(int *)&(this->IDToNodeIndexMap).field_0x34) {
        puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
        puVar18 = &(this->IDToNodeIndexMap).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar18 = puVar10;
        }
        uVar15 = *(uint *)(puVar18 +
                          (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) * 4
                          );
        if (uVar15 != 0xffffffff) {
          do {
            puVar17 = (uint *)((longlong)(int)uVar15 * 0x10 +
                              *(longlong *)&(this->IDToNodeIndexMap).field_0x0);
            if (*puVar17 == uVar7) {
              puVar24 = puVar17 + 1;
              if (puVar17 == (uint *)0x0) {
                puVar24 = (uint *)0x0;
              }
              if (puVar24 != (uint *)0x0) {
                lVar23 = (ulonglong)(*puVar24 & 0x1ff) * 0x20 +
                         *(longlong *)
                          ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                          (ulonglong)(*puVar24 >> 9) * 8);
                goto LAB_14c8cde20;
              }
              break;
            }
            uVar15 = puVar17[2];
          } while (uVar15 != 0xffffffff);
        }
      }
      uVar15 = (this->AllocatedNodes).CurBlockUsed;
      this_00 = &this->AllocatedNodes;
      uStack_78 = 0;
      local_res20[0] = this_00->CurBlock * 0x200 + uVar15;
      uStack_7c = 0xffffffff;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = uVar7;
      if (uVar15 == 0x200) {
        if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::
          AddAllocatedBlock(this_00);
        }
        this_00->CurBlock = this_00->CurBlock + 1;
        (this->AllocatedNodes).CurBlockUsed = 0;
      }
      lVar26 = (longlong)(int)(this->AllocatedNodes).CurBlockUsed * 0x20;
      lVar23 = *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (longlong)(int)this_00->CurBlock * 8);
      local_90 = local_a8;
      local_88 = local_res20;
      puVar3 = (undefined8 *)(lVar23 + lVar26);
      *puVar3 = CONCAT44(uStack_7c,local_80);
      puVar3[1] = CONCAT44(uStack_74,uStack_78);
      puVar3 = (undefined8 *)(lVar23 + 0x10 + lVar26);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar17 = &(this->AllocatedNodes).CurBlockUsed;
      *puVar17 = *puVar17 + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->IDToNodeIndexMap,(TPairInitializer<int_const_&,int_const_&> *)local_9c,
                 (bool *)&local_90);
      lVar23 = (ulonglong)(local_res20[0] & 0x1ff) * 0x20 +
               *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_res20[0] >> 9) * 8);
LAB_14c8cde20:
      dVar5 = *(double *)(pFVar29 + 8);
      *(int *)(lVar23 + 8) = iVar27;
      this_01 = &this->Queue;
      *(double *)(lVar23 + 0x10) = dVar5;
      *(undefined1 *)(lVar23 + 0x18) = 1;
      if (((this_01->EnableDebugChecks != false) &&
          (bVar13 = FIndexPriorityQueue::Contains(this_01,uVar7), bVar13)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Contains(NodeID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x7d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar27 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar27;
      fVar32 = (float)dVar5;
      uVar15 = 0;
      if ((int)uVar7 < (this->Queue).id_to_index.ArrayNum) {
        uVar15 = ~uVar7 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = iVar27
      ;
      uVar15 = (this->Queue).num_nodes;
      uVar22 = (this->Queue).nodes.CurBlock;
      uVar8 = (this->Queue).nodes.CurBlockUsed;
      uVar25 = uVar22 * 0x200 + uVar8;
      if (uVar15 == uVar25) {
        if (uVar8 == 0x200) {
          if (uVar22 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar22 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar15 = (this->Queue).nodes.CurBlockUsed;
LAB_14c8cdf97:
        lVar26 = (longlong)(int)uVar15;
        lVar23 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
        *(uint *)(lVar23 + lVar26 * 0xc) = uVar7;
        *(float *)(lVar23 + 4 + lVar26 * 0xc) = fVar32;
        *(int *)(lVar23 + 8 + lVar26 * 0xc) = iVar27;
        puVar17 = &(this->Queue).nodes.CurBlockUsed;
        *puVar17 = *puVar17 + 1;
      }
      else {
        if (uVar25 < uVar15) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar15);
          uVar15 = (this->Queue).nodes.CurBlockUsed;
          if (uVar15 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar15 = 0;
            (this->Queue).nodes.CurBlockUsed = 0;
          }
          uVar22 = (this->Queue).nodes.CurBlock;
          goto LAB_14c8cdf97;
        }
        uVar16 = (ulonglong)(uVar15 & 0x1ff);
        lVar23 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
        ;
        *(uint *)(lVar23 + uVar16 * 0xc) = uVar7;
        *(float *)(lVar23 + 4 + uVar16 * 0xc) = fVar32;
        *(int *)(lVar23 + 8 + uVar16 * 0xc) = iVar27;
      }
      uVar7 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (this_01,*(int *)(*(longlong *)
                                   ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                                   (ulonglong)(uVar7 >> 9) * 8) + 8 +
                                 (ulonglong)(uVar7 & 0x1ff) * 0xc));
      pFVar20 = (FScriptContainerElement *)local_9c._4_8_;
    }
    else {
      uVar15 = 0;
      if ((int)uVar7 < iVar14) {
        uVar15 = ~uVar7 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar15 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                        );
      if ((((int)uVar15 < 1) || ((this->Queue).num_nodes < (int)uVar15)) ||
         (*(int *)(*(longlong *)
                    ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar15 >> 9) * 8) + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc) < 1))
      goto LAB_14c8cdcf7;
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4924756041582772341>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                          ,0x75,"Queue.Contains(PointID) == false");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar29 = pFVar29 + 0x10;
    uVar16 = (ulonglong)local_a0;
    param_1 = local_res10;
  } while( true );
}

// ComputeToTargetPoint @ 14c8ce1d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToTargetPoint
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,
          TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,double param_3)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512> *this_00;
  FIndexPriorityQueue *this_01;
  undefined8 *puVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  FGraphNode *pFVar20;
  FScriptContainerElement *pFVar21;
  FGraphNode *pFVar22;
  uint uVar23;
  longlong lVar24;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  FGraphNode *pFVar29;
  FScriptContainerElement *pFVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  *local_res10;
  int local_res18;
  uint local_a8 [2];
  uint local_a0 [2];
  uint local_98;
  undefined1 local_94 [12];
  uint *local_88;
  uint *local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  
  pTVar2 = &this->SeedPoints;
  piVar4 = &(this->SeedPoints).ArrayMax;
  this->MaxGraphDistance = 0.0;
  this->MaxGraphDistancePointID = -1;
  (this->SeedPoints).ArrayNum = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (*piVar4 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar4);
  }
  local_98 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_98;
  pFVar30 = (param_1->AllocatorInstance).Data;
  pFVar21 = pFVar30 + uVar17 * 0x10;
  local_94._4_8_ = pFVar21;
  do {
    pFVar29 = (FGraphNode *)0x0;
    if (param_1->ArrayNum != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar28 = local_res18;
    if (pFVar30 == pFVar21) {
      iVar15 = (this->Queue).num_nodes;
      do {
        if (iVar15 < 1) {
          return false;
        }
        if ((((this->Queue).EnableDebugChecks != false) && ((this->Queue).num_nodes < 1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GetCount() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                ,0x92,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar14 = (*pcVar11)();
          return (bool)uVar14;
        }
        uVar7 = *(uint *)(*(longlong *)(this->Queue).nodes.Blocks.AllocatorInstance.Data + 0xc);
        FIndexPriorityQueue::remove_at_index(&this->Queue,1);
        pFVar22 = pFVar29;
        if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
            *(int *)&(this->IDToNodeIndexMap).field_0x34) {
          puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
          puVar19 = &(this->IDToNodeIndexMap).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar19 = puVar10;
          }
          uVar16 = *(uint *)(puVar19 +
                            (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) *
                            4);
          if (uVar16 != 0xffffffff) {
            do {
              puVar18 = (uint *)((longlong)(int)uVar16 * 0x10 + *(longlong *)&this->IDToNodeIndexMap
                                );
              if (*puVar18 == uVar7) {
                pFVar20 = (FGraphNode *)(puVar18 + 1);
                if (puVar18 == (uint *)0x0) {
                  pFVar20 = pFVar29;
                }
                if ((pFVar20 != (FGraphNode *)0x0) &&
                   (pFVar22 = (FGraphNode *)
                              (*(longlong *)
                                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                                (ulonglong)((uint)pFVar20->PointID >> 9) * 8) +
                              (ulonglong)(pFVar20->PointID & 0x1ff) * 0x20),
                   pFVar22 != (FGraphNode *)0x0)) goto LAB_14c8ce846;
                break;
              }
              uVar16 = puVar18[2];
            } while (uVar16 != 0xffffffff);
          }
        }
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                            ,199,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          uVar14 = (*pcVar11)();
          return (bool)uVar14;
        }
LAB_14c8ce846:
        dVar5 = pFVar22->GraphDistance;
        uVar31 = SUB84(dVar5,0);
        uVar32 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar6 = this->MaxGraphDistance;
        if (dVar5 <= dVar6) {
          uVar31 = SUB84(dVar6,0);
          uVar32 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        this->MaxGraphDistance = (double)CONCAT44(uVar32,uVar31);
        if (param_3 <= (double)CONCAT44(uVar32,uVar31) && (double)CONCAT44(uVar32,uVar31) != param_3
           ) {
          return false;
        }
        pFVar22->bFrozen = true;
        this->MaxGraphDistancePointID = pFVar22->PointID;
        if (pFVar22->PointID == iVar28) {
          return true;
        }
        UpdateNeighboursSparse(this,pFVar22);
        iVar15 = (this->Queue).num_nodes;
      } while( true );
    }
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    iVar28 = (this->SeedPoints).ArrayNum;
    if (((pFVar9 <= pFVar30) && (pFVar30 < pFVar9 + (longlong)*piVar4 * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar14 = (*pcVar11)();
      return (bool)uVar14;
    }
    iVar15 = (this->SeedPoints).ArrayNum;
    if (iVar15 == *piVar4) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar4);
    }
    (this->SeedPoints).ArrayNum = iVar15 + 1;
    uVar12 = *(undefined8 *)(pFVar30 + 8);
    pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
    *(undefined8 *)pFVar9 = *(undefined8 *)pFVar30;
    *(undefined8 *)(pFVar9 + 8) = uVar12;
    iVar15 = (this->Queue).id_to_index.ArrayNum;
    uVar7 = *(uint *)(pFVar30 + 4);
    if (iVar15 + 1 < (int)uVar7) {
LAB_14c8ce40b:
      local_a0[0] = uVar7;
      if (*(int *)&(this->IDToNodeIndexMap).field_0x8 !=
          *(int *)&(this->IDToNodeIndexMap).field_0x34) {
        puVar10 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
        puVar19 = &(this->IDToNodeIndexMap).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar19 = puVar10;
        }
        uVar16 = *(uint *)(puVar19 +
                          (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar7) * 4
                          );
        if (uVar16 != 0xffffffff) {
          do {
            puVar18 = (uint *)((longlong)(int)uVar16 * 0x10 +
                              *(longlong *)&(this->IDToNodeIndexMap).field_0x0);
            if (*puVar18 == uVar7) {
              puVar25 = puVar18 + 1;
              if (puVar18 == (uint *)0x0) {
                puVar25 = (uint *)0x0;
              }
              if (puVar25 != (uint *)0x0) {
                lVar24 = (ulonglong)(*puVar25 & 0x1ff) * 0x20 +
                         *(longlong *)
                          ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                          (ulonglong)(*puVar25 >> 9) * 8);
                goto LAB_14c8ce53f;
              }
              break;
            }
            uVar16 = puVar18[2];
          } while (uVar16 != 0xffffffff);
        }
      }
      uVar16 = (this->AllocatedNodes).CurBlockUsed;
      this_00 = &this->AllocatedNodes;
      uStack_70 = 0;
      local_a8[0] = this_00->CurBlock * 0x200 + uVar16;
      uStack_74 = 0xffffffff;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = uVar7;
      if (uVar16 == 0x200) {
        if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FGraphNode,512>::
          AddAllocatedBlock(this_00);
        }
        this_00->CurBlock = this_00->CurBlock + 1;
        (this->AllocatedNodes).CurBlockUsed = 0;
      }
      lVar27 = (longlong)(int)(this->AllocatedNodes).CurBlockUsed * 0x20;
      lVar24 = *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (longlong)(int)this_00->CurBlock * 8);
      local_88 = local_a0;
      local_80 = local_a8;
      puVar3 = (undefined8 *)(lVar24 + lVar27);
      *puVar3 = CONCAT44(uStack_74,local_78);
      puVar3[1] = CONCAT44(uStack_6c,uStack_70);
      puVar3 = (undefined8 *)(lVar24 + 0x10 + lVar27);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar18 = &(this->AllocatedNodes).CurBlockUsed;
      *puVar18 = *puVar18 + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->IDToNodeIndexMap,(TPairInitializer<int_const_&,int_const_&> *)local_94,
                 (bool *)&local_88);
      lVar24 = (ulonglong)(local_a8[0] & 0x1ff) * 0x20 +
               *(longlong *)
                ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_a8[0] >> 9) * 8);
LAB_14c8ce53f:
      dVar5 = *(double *)(pFVar30 + 8);
      *(int *)(lVar24 + 8) = iVar28;
      this_01 = &this->Queue;
      *(double *)(lVar24 + 0x10) = dVar5;
      *(undefined1 *)(lVar24 + 0x18) = 1;
      if (((this_01->EnableDebugChecks != false) &&
          (bVar13 = FIndexPriorityQueue::Contains(this_01,uVar7), bVar13)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Contains(NodeID) == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                              ,0x7d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      iVar28 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar28;
      fVar33 = (float)dVar5;
      uVar16 = 0;
      if ((int)uVar7 < (this->Queue).id_to_index.ArrayNum) {
        uVar16 = ~uVar7 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = iVar28
      ;
      uVar16 = (this->Queue).num_nodes;
      uVar23 = (this->Queue).nodes.CurBlock;
      uVar8 = (this->Queue).nodes.CurBlockUsed;
      uVar26 = uVar23 * 0x200 + uVar8;
      if (uVar16 == uVar26) {
        if (uVar8 == 0x200) {
          if (uVar23 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar23 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar16 = (this->Queue).nodes.CurBlockUsed;
LAB_14c8ce6b6:
        lVar27 = (longlong)(int)uVar16;
        lVar24 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
        *(uint *)(lVar24 + lVar27 * 0xc) = uVar7;
        *(float *)(lVar24 + 4 + lVar27 * 0xc) = fVar33;
        *(int *)(lVar24 + 8 + lVar27 * 0xc) = iVar28;
        puVar18 = &(this->Queue).nodes.CurBlockUsed;
        *puVar18 = *puVar18 + 1;
      }
      else {
        if (uVar26 < uVar16) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar16);
          uVar16 = (this->Queue).nodes.CurBlockUsed;
          if (uVar16 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            uVar16 = 0;
            (this->Queue).nodes.CurBlockUsed = 0;
          }
          uVar23 = (this->Queue).nodes.CurBlock;
          goto LAB_14c8ce6b6;
        }
        uVar17 = (ulonglong)(uVar16 & 0x1ff);
        lVar24 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
        ;
        *(uint *)(lVar24 + uVar17 * 0xc) = uVar7;
        *(float *)(lVar24 + 4 + uVar17 * 0xc) = fVar33;
        *(int *)(lVar24 + 8 + uVar17 * 0xc) = iVar28;
      }
      uVar7 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (this_01,*(int *)(*(longlong *)
                                   ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                                   (ulonglong)(uVar7 >> 9) * 8) + 8 +
                                 (ulonglong)(uVar7 & 0x1ff) * 0xc));
      pFVar21 = (FScriptContainerElement *)local_94._4_8_;
    }
    else {
      uVar16 = 0;
      if ((int)uVar7 < iVar15) {
        uVar16 = ~uVar7 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
      uVar16 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                        );
      if ((((int)uVar16 < 1) || ((this->Queue).num_nodes < (int)uVar16)) ||
         (*(int *)(*(longlong *)
                    ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8) + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc) < 1))
      goto LAB_14c8ce40b;
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4924756041582772409>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Parameterization\\MeshDijkstra.h"
                          ,0xb9,"Queue.Contains(PointID) == false");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        uVar14 = (*pcVar11)();
        return (bool)uVar14;
      }
    }
    pFVar30 = pFVar30 + 0x10;
    uVar17 = (ulonglong)local_98;
    param_1 = local_res10;
  } while( true );
}

// FindPathToNearestSeed @ 14c8e6fa0

bool __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FindPathToNearestSeed
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FGraphNode *pFVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  pFVar9 = GetNodeForPointSetID(this,param_1);
  if ((pFVar9 == (FGraphNode *)0x0) || (pFVar9->bFrozen == false)) {
LAB_14c8e71dc:
    bVar5 = false;
  }
  else {
    iVar7 = param_2->ArrayMax;
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (iVar7 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      iVar7 = *piVar1;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)iVar7 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar7 + 1;
    *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_res10[0];
    puVar10 = (uint *)0x0;
    if (0 < param_3) {
      do {
        piVar12 = &pFVar9->ParentPointID;
        uVar14 = (int)puVar10 + 1;
        if (*piVar12 == -1) break;
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= piVar12) && (piVar12 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar12;
        if (*(int *)&(this->IDToNodeIndexMap).field_0x8 ==
            *(int *)&(this->IDToNodeIndexMap).field_0x34) {
LAB_14c8e71b6:
          param_2->ArrayNum = 0;
          if (*piVar1 < 0) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&param_2->AllocatorInstance,0,piVar1);
          }
          goto LAB_14c8e71dc;
        }
        puVar3 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
        puVar11 = &(this->IDToNodeIndexMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        uVar8 = *(uint *)(puVar11 +
                         (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & *piVar12) *
                         4);
        if (uVar8 == 0xffffffff) goto LAB_14c8e71b6;
        while (puVar10 = (uint *)((longlong)(int)uVar8 * 0x10 + *(longlong *)&this->IDToNodeIndexMap
                                 ), *puVar10 != *piVar12) {
          uVar8 = puVar10[2];
          if (uVar8 == 0xffffffff) goto LAB_14c8e71b6;
        }
        puVar13 = puVar10 + 1;
        if (puVar10 == (uint *)0x0) {
          puVar13 = (uint *)0x0;
        }
        if (((puVar13 == (uint *)0x0) ||
            (pFVar9 = (FGraphNode *)
                      ((ulonglong)(*puVar13 & 0x1ff) * 0x20 +
                      *(longlong *)
                       ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                       (ulonglong)(*puVar13 >> 9) * 8)), pFVar9 == (FGraphNode *)0x0)) ||
           (pFVar9->bFrozen == false)) goto LAB_14c8e71b6;
        puVar10 = (uint *)(ulonglong)uVar14;
      } while ((int)uVar14 < param_3);
    }
    bVar5 = true;
  }
  return bVar5;
}

// GetNodeForPointSetID @ 14c8f5030

FGraphNode * __thiscall
UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::GetNodeForPointSetID
          (TMeshDijkstra<UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->IDToNodeIndexMap).field_0x8 != *(int *)&(this->IDToNodeIndexMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->IDToNodeIndexMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&this->IDToNodeIndexMap);
        if (*piVar3 == param_1) {
          puVar2 = (uint *)(piVar3 + 1);
          if (piVar3 == (int *)0x0) {
            puVar2 = (uint *)0x0;
          }
          if (puVar2 == (uint *)0x0) {
            return (FGraphNode *)0x0;
          }
          return (FGraphNode *)
                 ((ulonglong)(*puVar2 & 0x1ff) * 0x20 +
                 *(longlong *)
                  ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*puVar2 >> 9) * 8));
        }
        iVar1 = piVar3[2];
      } while (iVar1 != -1);
    }
  }
  return (FGraphNode *)0x0;
}

// UpdateNeighboursSparse @ 14c9229d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::UpdateNeighboursSparse
          (TMeshDijkstra<FMeshFaceDualGraph> *this,FGraphNode *param_1)

{
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512> *pTVar1;
  TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512> *this_00;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_2a8 [32];
  uint local_278 [2];
  int local_270 [2];
  int local_268 [2];
  uint local_260 [2];
  uint local_258 [2];
  undefined4 local_250 [2];
  uint local_248 [2];
  int local_240 [2];
  TPairInitializer<int_const_&,int_const_&> local_238;
  uint *local_228;
  uint *local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  TFunction<int___cdecl(int)> local_1c8;
  TFunction<int___cdecl(int)> local_198;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_270[0] = param_1->PointID;
  Core::Private::Function::CheckCallable(*(void **)&this->GetPositionFunc);
  plVar17 = *(longlong **)&(this->GetPositionFunc).field_0x28;
  pcVar5 = *(code **)&this->GetPositionFunc;
  plVar16 = (longlong *)&(this->GetPositionFunc).field_0x10;
  if (plVar17 != (longlong *)0x0) {
    plVar16 = plVar17;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(&local_200,uVar13,local_270);
  dVar3 = param_1->GraphDistance;
  FDynamicGraph::VtxVerticesItr
            ((FDynamicGraph *)this->PointSet,(MappedValueEnumerable *)local_168,param_1->PointID);
  uVar8 = local_168._8_4_;
  uVar13 = local_168._0_8_;
  local_1c8._0_8_ = local_168._16_8_;
  local_1c8._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar17 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar17)(plVar17,&local_1c8.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_128,(FSmallListSet *)uVar13,uVar8,false,&local_1c8);
  local_198._0_8_ = local_168._16_8_;
  local_198._40_8_ = 0;
  if (local_168._16_8_ != 0) {
    plVar17 = (longlong *)(local_168 + 0x20);
    if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_168._56_8_;
    }
    (**(code **)*plVar17)(plVar17,&local_198.field_0x10);
  }
  FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_c8,(FSmallListSet *)local_168._0_8_,local_168._8_4_,true,
             &local_198);
LAB_14c922b20:
  do {
    if ((((local_128._0_8_ == local_c8._0_8_) && (local_128._8_4_ == local_c8._8_4_)) &&
        (local_128._24_4_ == local_c8._24_4_)) && (local_128._28_4_ == local_c8._28_4_)) {
      if (local_c8._48_8_ != 0) {
        plVar17 = (longlong *)(local_c8 + 0x40);
        if ((longlong *)local_c8._88_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_c8._88_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if ((code *)local_128._48_8_ != (code *)0x0) {
        plVar17 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          plVar17 = local_d0;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (local_168._16_8_ != 0) {
        plVar17 = (longlong *)(local_168 + 0x20);
        if ((longlong *)local_168._56_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_168._56_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      return;
    }
    local_268[0] = local_128._32_4_;
    Core::Private::Function::CheckCallable((void *)local_128._48_8_);
    uVar13 = local_128._48_8_;
    plVar17 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar17 = local_d0;
    }
    uVar14 = (**(code **)(*plVar17 + 8))();
    uVar10 = (*(code *)uVar13)(uVar14,local_268);
    local_260[0] = uVar10;
    if (*(int *)&(this->IDToNodeIndexMap).field_0x8 != *(int *)&(this->IDToNodeIndexMap).field_0x34)
    {
      puVar6 = *(undefined1 **)&(this->IDToNodeIndexMap).field_0x40;
      puVar18 = &(this->IDToNodeIndexMap).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar18 = puVar6;
      }
      uVar11 = *(uint *)(puVar18 +
                        (ulonglong)(*(int *)&(this->IDToNodeIndexMap).field_0x48 - 1U & uVar10) * 4)
      ;
      if (uVar11 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 +
                            *(longlong *)&(this->IDToNodeIndexMap).field_0x0);
          if (*puVar15 == uVar10) {
            puVar21 = puVar15 + 1;
            if (puVar15 == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            if (puVar21 != (uint *)0x0) {
              lVar20 = (ulonglong)(*puVar21 & 0x1ff) * 0x20 +
                       *(longlong *)
                        ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar21 >> 9) * 8);
              goto LAB_14c922cb5;
            }
            break;
          }
          uVar11 = puVar15[2];
        } while (uVar11 != 0xffffffff);
      }
    }
    uVar11 = (this->AllocatedNodes).CurBlockUsed;
    this_00 = &this->AllocatedNodes;
    unaff_XMM6 = ZEXT816(0);
    local_278[0] = this_00->CurBlock * 0x200 + uVar11;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0;
    local_1e8 = uVar10;
    local_1d8 = unaff_XMM6;
    if (uVar11 == 0x200) {
      if (this_00->CurBlock == (this->AllocatedNodes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::TMeshDijkstra<FMeshFaceDualGraph>::FGraphNode,512>::
        AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      (this->AllocatedNodes).CurBlockUsed = 0;
    }
    lVar23 = (longlong)(int)(this->AllocatedNodes).CurBlockUsed * 0x20;
    lVar20 = *(longlong *)
              ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
              (longlong)(int)this_00->CurBlock * 8);
    local_228 = local_260;
    local_220 = local_278;
    puVar2 = (undefined8 *)(lVar20 + lVar23);
    *puVar2 = CONCAT44(uStack_1e4,local_1e8);
    puVar2[1] = CONCAT44(uStack_1dc,uStack_1e0);
    *(undefined1 (*) [16])(lVar20 + 0x10 + lVar23) = unaff_XMM6;
    puVar15 = &(this->AllocatedNodes).CurBlockUsed;
    *puVar15 = *puVar15 + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->IDToNodeIndexMap,&local_238,(bool *)&local_228);
    lVar20 = (ulonglong)(local_278[0] & 0x1ff) * 0x20 +
             *(longlong *)
              ((this->AllocatedNodes).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_278[0] >> 9) * 8);
LAB_14c922cb5:
    if (*(char *)(lVar20 + 0x18) == '\0') {
      local_258[0] = uVar10;
      Core::Private::Function::CheckCallable(*(void **)&this->GetPositionFunc);
      plVar17 = *(longlong **)&(this->GetPositionFunc).field_0x28;
      pcVar5 = *(code **)&this->GetPositionFunc;
      plVar16 = (longlong *)&(this->GetPositionFunc).field_0x10;
      if (plVar17 != (longlong *)0x0) {
        plVar16 = plVar17;
      }
      uVar13 = (**(code **)(*plVar16 + 8))();
      (*pcVar5)(&local_218,uVar13,local_258);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (local_210 - local_1f8) * (local_210 - local_1f8) +
                     (local_218 - local_200) * (local_218 - local_200) +
                     (local_208 - local_1f0) * (local_208 - local_1f0);
      auVar25 = sqrtpd(unaff_XMM6,auVar7);
      if (this->bEnableDistanceWeighting != false) {
        uVar11 = param_1->SeedPointID;
        uVar12 = 0;
        if ((int)uVar11 < (this->SeedPoints).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_238.Value = auVar25._0_8_;
        local_250[0] = *(undefined4 *)
                        ((this->SeedPoints).AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0x10 + 4);
        local_240[0] = param_1->PointID;
        local_248[0] = uVar10;
        Core::Private::Function::CheckCallable(*(void **)&this->GetWeightedDistanceFunc);
        plVar17 = *(longlong **)&(this->GetWeightedDistanceFunc).field_0x28;
        pcVar5 = *(code **)&this->GetWeightedDistanceFunc;
        plVar16 = (longlong *)&(this->GetWeightedDistanceFunc).field_0x10;
        if (plVar17 != (longlong *)0x0) {
          plVar16 = plVar17;
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        auVar25._0_8_ = (*pcVar5)(uVar13,local_240,local_248,local_250);
        auVar25._8_4_ = extraout_XMM0_Dc;
        auVar25._12_4_ = extraout_XMM0_Dd;
      }
      iVar24 = (this->Queue).id_to_index.ArrayNum;
      auVar26._8_8_ = auVar25._8_8_;
      auVar26._0_8_ = auVar25._0_8_ + dVar3;
      if ((int)uVar10 <= iVar24 + 1) {
        uVar11 = 0;
        if ((int)uVar10 < iVar24) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar11 = *(uint *)((this->Queue).id_to_index.AllocatorInstance.Data +
                          (longlong)(int)uVar10 * 4);
        if (((0 < (int)uVar11) && ((int)uVar11 <= (this->Queue).num_nodes)) &&
           (0 < *(int *)(*(longlong *)
                          ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar11 >> 9) * 8) + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc))) {
          unaff_XMM6 = auVar26;
          if (*(double *)(lVar20 + 0x10) <= auVar26._0_8_) goto LAB_14c9230aa;
          iVar24 = param_1->PointID;
          *(double *)(lVar20 + 0x10) = auVar26._0_8_;
          *(int *)(lVar20 + 4) = iVar24;
          *(int *)(lVar20 + 8) = param_1->SeedPointID;
          FIndexPriorityQueue::Update(&this->Queue,uVar10,(float)auVar26._0_8_);
          FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
          goto LAB_14c922b20;
        }
      }
      iVar24 = param_1->PointID;
      *(double *)(lVar20 + 0x10) = auVar26._0_8_;
      *(int *)(lVar20 + 4) = iVar24;
      *(int *)(lVar20 + 8) = param_1->SeedPointID;
      if ((this->Queue).EnableDebugChecks != false) {
        bVar9 = FIndexPriorityQueue::Contains(&this->Queue,uVar10);
        if (bVar9) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Contains(NodeID) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                             ,0x7d,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar24 = (this->Queue).num_nodes + 1;
      (this->Queue).num_nodes = iVar24;
      unaff_XMM6._4_12_ = auVar26._4_12_;
      unaff_XMM6._0_4_ = (float)auVar26._0_8_;
      uVar11 = 0;
      if ((int)uVar10 < (this->Queue).id_to_index.ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(int *)((this->Queue).id_to_index.AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
           iVar24;
      uVar11 = (this->Queue).num_nodes;
      uVar12 = (this->Queue).nodes.CurBlock;
      uVar4 = (this->Queue).nodes.CurBlockUsed;
      uVar22 = uVar12 * 0x200 + uVar4;
      if (uVar11 == uVar22) {
        if (uVar4 == 0x200) {
          if (uVar12 == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&(this->Queue).nodes);
          }
          pTVar1 = &(this->Queue).nodes;
          pTVar1->CurBlock = pTVar1->CurBlock + 1;
          uVar12 = (this->Queue).nodes.CurBlock;
          (this->Queue).nodes.CurBlockUsed = 0;
        }
        uVar11 = (this->Queue).nodes.CurBlockUsed;
LAB_14c92303e:
        lVar23 = (longlong)(int)uVar11;
        lVar20 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
        *(uint *)(lVar20 + lVar23 * 0xc) = uVar10;
        *(float *)(lVar20 + 4 + lVar23 * 0xc) = unaff_XMM6._0_4_;
        *(int *)(lVar20 + 8 + lVar23 * 0xc) = iVar24;
        puVar15 = &(this->Queue).nodes.CurBlockUsed;
        *puVar15 = *puVar15 + 1;
      }
      else {
        if (uVar22 < uVar11) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&(this->Queue).nodes,uVar11);
          uVar11 = (this->Queue).nodes.CurBlockUsed;
          if (uVar11 == 0x200) {
            if ((this->Queue).nodes.CurBlock == (this->Queue).nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&(this->Queue).nodes);
            }
            pTVar1 = &(this->Queue).nodes;
            pTVar1->CurBlock = pTVar1->CurBlock + 1;
            (this->Queue).nodes.CurBlockUsed = 0;
            uVar11 = 0;
          }
          uVar12 = (this->Queue).nodes.CurBlock;
          goto LAB_14c92303e;
        }
        uVar19 = (ulonglong)(uVar11 & 0x1ff);
        lVar20 = *(longlong *)
                  ((this->Queue).nodes.Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
        ;
        *(uint *)(lVar20 + uVar19 * 0xc) = uVar10;
        *(float *)(lVar20 + 4 + uVar19 * 0xc) = unaff_XMM6._0_4_;
        *(int *)(lVar20 + 8 + uVar19 * 0xc) = iVar24;
      }
      uVar10 = (this->Queue).num_nodes;
      FIndexPriorityQueue::move_up
                (&this->Queue,
                 *(int *)(*(longlong *)
                           ((this->Queue).nodes.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar10 >> 9) * 8) + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc));
    }
LAB_14c9230aa:
    FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_128);
  } while( true );
}

