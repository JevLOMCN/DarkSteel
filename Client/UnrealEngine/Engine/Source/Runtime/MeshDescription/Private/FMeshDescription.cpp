// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 81

// DeleteEdge_Internal<TArray> @ 14363b900

void __thiscall
FMeshDescription::DeleteEdge_Internal<TArray>
          (FMeshDescription *this,FEdgeID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FVertexID,int> *pTVar3;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> *pTVar4;
  FVertexID local_res8 [2];
  FVertexID local_res10 [2];
  TArrayView<FVertexID,int> local_78;
  TArrayView<FVertexID,int> local_68;
  TArrayView<int_const_,int> local_58;
  TArrayView<int_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  pTVar3 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&local_78,(int)param_1);
  if (pTVar3->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10[0] = *pTVar3->DataPtr;
  pTVar3 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&local_68,(int)param_1);
  if (pTVar3->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = pTVar3->DataPtr[1];
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToEdges,(int)local_res10[0],(int)param_1,0);
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToEdges,(int)local_res8[0],(int)param_1,0);
  this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->EdgeToTriangles,(int)param_1,0);
  if (param_2 != (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_58,(int)local_res10[0],0);
    if (pTVar4->ArrayNum == 0) {
      pTVar4 = FMeshElementIndexer::Find
                         (&this->VertexToVertexInstances,&local_48,(int)local_res10[0],0);
      if (pTVar4->ArrayNum != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID0).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x2ff,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                (param_2,local_res10);
    }
    pTVar4 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_38,(int)local_res8[0],0);
    if (pTVar4->ArrayNum == 0) {
      pTVar4 = FMeshElementIndexer::Find
                         (&this->VertexToVertexInstances,&local_28,(int)local_res8[0],0);
      if (pTVar4->ArrayNum != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID1).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x305,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                (param_2,local_res8);
    }
  }
  return;
}

// DeleteEdge_Internal<TSet> @ 14363bb60

void __thiscall
FMeshDescription::DeleteEdge_Internal<TSet>
          (FMeshDescription *this,FEdgeID param_1,
          TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *param_2)

{
  FVertexID FVar1;
  FVertexID FVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FVertexID,int> *pTVar5;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> *pTVar6;
  FVertexID local_res8 [2];
  FVertexID local_res10 [2];
  FVertexID local_res18 [2];
  FVertexID local_res20 [2];
  TArrayView<FVertexID,int> local_98;
  TArrayView<FVertexID,int> local_88;
  TArrayView<int_const_,int> local_78;
  TArrayView<int_const_,int> local_68;
  TArrayView<int_const_,int> local_58;
  TArrayView<int_const_,int> local_48;
  
  pTVar5 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&local_98,(int)param_1);
  if (pTVar5->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar1 = *pTVar5->DataPtr;
  local_res10[0] = FVar1;
  pTVar5 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&local_88,(int)param_1);
  if (pTVar5->ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = pTVar5->DataPtr[1];
  local_res8[0] = FVar2;
  FMeshElementIndexer::RemoveReferenceFromKey(&this->VertexToEdges,(int)FVar1,(int)param_1,0);
  FMeshElementIndexer::RemoveReferenceFromKey(&this->VertexToEdges,(int)FVar2,(int)param_1,0);
  this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->EdgeToTriangles,(int)param_1,0);
  if (param_2 != (TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)0x0) {
    pTVar6 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_78,(int)FVar1,0);
    if (pTVar6->ArrayNum == 0) {
      pTVar6 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_68,(int)FVar1,0);
      if (pTVar6->ArrayNum != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID0).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x2ff,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator>::Emplace<FVertexID_const_&>
                (param_2,local_res18,(bool *)local_res10);
    }
    pTVar6 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_58,(int)FVar2,0);
    if (pTVar6->ArrayNum == 0) {
      pTVar6 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_48,(int)FVar2,0);
      if (pTVar6->ArrayNum != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID1).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x305,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator>::Emplace<FVertexID_const_&>
                (param_2,local_res20,(bool *)local_res8);
    }
  }
  return;
}

// DeletePolygon_Internal<TArray> @ 14363bdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::DeletePolygon_Internal<TArray>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  FMeshElementIndexer *this_00;
  uint *puVar1;
  ForElementType<FEdgeID> FVar2;
  FVertexID *pFVar3;
  FTriangleID FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FScriptContainerElement *pFVar6;
  TMeshAttributeArraySet<FVertexID> *this_01;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar7;
  code *pcVar8;
  int iVar9;
  FMeshDescription *pFVar10;
  FEdgeID FVar11;
  FVertexInstanceID FVar12;
  FPolygonID FVar13;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *this_02;
  bool bVar14;
  uint uVar15;
  FTriangleID FVar16;
  int iVar17;
  FPolygonGroupID *pFVar18;
  FPolygonID *pFVar19;
  FPolygonID *pFVar20;
  TMeshAttributeArrayBase<FVertexID> *this_03;
  FMeshElementContainer *this_04;
  TArrayView<int_const_,int> *pTVar21;
  ForElementType<FMeshElementContainer> FVar22;
  FMeshAttributeArraySetBase *pFVar23;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_05;
  FVertexID *pFVar24;
  ForElementType<FMeshElementContainer> FVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  FTriangleID *pFVar29;
  ForElementType<FEdgeID> FVar30;
  ulonglong uVar31;
  uint uVar32;
  FMeshDescription *pFVar33;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  FPolygonGroupID local_144;
  FEdgeID local_140 [2];
  FMeshDescription *local_138;
  FVertexInstanceID local_130;
  FPolygonID local_12c;
  longlong local_128;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *local_120;
  TArrayView<FEdgeID,int> local_118;
  TArrayView<FVertexInstanceID,int> local_108;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *local_f8;
  FTriangleID *local_f0;
  TArrayView<FTriangleID_const_,int> local_e8;
  TArrayView<FVertexID,int> local_d8;
  FTriangleID *local_c8;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *local_c0;
  TArrayView<int_const_,int> local_b8;
  TArrayView<int_const_,int> local_a8;
  TArrayView<FTriangleID_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  undefined1 local_78 [32];
  ForElementType<FEdgeID> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_c0 = param_4;
  local_138 = this;
  local_12c = param_1;
  local_120 = param_2;
  local_f8 = param_3;
  pFVar18 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  local_144 = *pFVar18;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_e8,(int)param_1,0);
  iVar27 = local_e8.ArrayNum;
  local_50 = 0;
  local_58 = (ForElementType<FEdgeID>)0x0;
  local_4c = 8;
  uVar26 = iVar27 - 1;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (8 < (int)uVar26) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
              (4,4,uVar26,(ForElementType<FEdgeID> *)local_78,0,&local_4c);
  }
  local_f0 = local_e8.DataPtr;
  local_c8 = local_e8.DataPtr + iVar27;
  if (local_e8.DataPtr != local_c8) {
    this_00 = &this->EdgeToTriangles;
    pFVar33 = this;
    do {
      uVar28 = 0;
      pFVar5 = (pFVar33->TriangleVertexInstances).ArrayPtr;
      FVar4 = *local_f0;
      if ((pFVar33->TriangleVertexInstances).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FVertexInstanceID>::Get
                  ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar23,&local_108,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_108.DataPtr =
             TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar23,(int)FVar4);
        local_108.ArrayNum = (pFVar33->TriangleVertexInstances).Extent;
        if ((local_108.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar5 = (pFVar33->TriangleEdges).ArrayPtr;
      if ((pFVar33->TriangleEdges).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar23,&local_118,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_118.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar23,(int)FVar4);
        local_118.ArrayNum = (pFVar33->TriangleEdges).Extent;
        if ((local_118.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_128 = 0;
      uVar31 = uVar28;
      do {
        iVar27 = (int)uVar28;
        if ((local_118.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_140[0] = *(FEdgeID *)(&(local_118.DataPtr)->field_0x0 + uVar31);
        FMeshElementIndexer::Find<FTriangleID>(this_00,&local_98,(int)local_140[0],0);
        pFVar29 = local_98.DataPtr;
        if (local_98.ArrayNum == 2) {
          pFVar19 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar33->TrianglePolygons,(int)*local_98.DataPtr);
          pFVar20 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar33->TrianglePolygons,(int)pFVar29[1]);
          param_2 = local_120;
          if (*pFVar19 != *pFVar20) goto LAB_14363c148;
          TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<FEdgeID_const_&>
                    ((TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                     local_78,local_140);
        }
        else {
LAB_14363c148:
          FMeshElementIndexer::RemoveReferenceFromKey(this_00,(int)local_140[0],(int)FVar4,0);
          if ((local_118.ArrayNum <= iVar27) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar11 = local_140[0];
          *(undefined4 *)(&(local_118.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
          if (param_2 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
            if (((this->EdgeToTriangles).bSuspended != false) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!bSuspended",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x67,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::ConditionalBuild(this_00,(int)FVar11,0);
            uVar26 = (this->EdgeToTriangles).ChunkMask;
            uVar32 = (int)FVar11 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("KeyChannelIndex < PerChannelIndices.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x6c,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)((this_00->PerChannelIndices).AllocatorInstance.Data + 8) == 0) {
              local_b8.DataPtr = (int *)0x0;
              local_b8.ArrayNum = 0;
            }
            else {
              if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar6 = (this_00->PerChannelIndices).AllocatorInstance.Data;
              uVar15 = 0;
              if ((int)uVar32 < *(int *)(pFVar6 + 8)) {
                uVar15 = ~uVar32 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FMeshElementIndexer::FChunk::Get
                        ((FChunk *)((longlong)(int)uVar32 * 0x58 + *(longlong *)pFVar6),&local_b8,
                         uVar26 & (uint)FVar11);
              if (local_b8.ArrayNum != 0) goto LAB_14363c323;
            }
            TArray<FEdgeID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FEdgeID_const_&>
                      (local_120,local_140);
          }
        }
LAB_14363c323:
        if ((local_108.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar33 = local_138;
        local_130 = *(FVertexInstanceID *)(&(local_108.DataPtr)->field_0x0 + uVar31);
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&local_138->VertexInstanceToTriangles,(int)local_130,(int)FVar4,0);
        if ((local_108.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar12 = local_130;
        *(undefined4 *)(&(local_108.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
        if (local_f8 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
          if (((pFVar33->VertexInstanceToTriangles).bSuspended != false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bSuspended",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x67,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FMeshElementIndexer::ConditionalBuild(&pFVar33->VertexInstanceToTriangles,(int)FVar12,0);
          pFVar10 = local_138;
          uVar26 = (pFVar33->VertexInstanceToTriangles).ChunkMask;
          uVar32 = (int)FVar12 >> ((byte)(pFVar33->VertexInstanceToTriangles).ChunkBits & 0x1f);
          if (((local_138->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("KeyChannelIndex < PerChannelIndices.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x6c,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data
                      + 8) == 0) {
            local_a8.DataPtr = (int *)0x0;
            local_a8.ArrayNum = 0;
          }
          else {
            if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
            uVar15 = 0;
            if ((int)uVar32 < *(int *)(pFVar6 + 8)) {
              uVar15 = ~uVar32 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::FChunk::Get
                      ((FChunk *)((longlong)(int)uVar32 * 0x58 + *(longlong *)pFVar6),&local_a8,
                       uVar26 & (uint)FVar12);
            if (local_a8.ArrayNum != 0) goto LAB_14363c57d;
          }
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FVertexInstanceID_const_&>(local_f8,&local_130);
        }
LAB_14363c57d:
        uVar28 = (ulonglong)(iVar27 + 1U);
        local_128 = local_128 + 1;
        uVar31 = uVar31 + 4;
        param_2 = local_120;
        pFVar33 = local_138;
      } while ((int)(iVar27 + 1U) < 3);
      local_f0 = local_f0 + 1;
    } while (local_f0 != local_c8);
    iVar27 = local_e8.ArrayNum;
    this = local_138;
  }
  pFVar33 = local_138;
  pFVar29 = local_e8.DataPtr;
  iVar9 = local_50;
  while( true ) {
    local_50 = iVar9;
    if (pFVar29 == local_e8.DataPtr + iVar27) {
      FVar30 = (ForElementType<FEdgeID>)local_78;
      if (local_58 != (ForElementType<FEdgeID>)0x0) {
        FVar30 = local_58;
      }
      FVar2 = (ForElementType<FEdgeID>)((longlong)FVar30 + (longlong)iVar9 * 4);
      pFVar33 = local_138;
      while( true ) {
        if (local_50 != iVar9) {
          local_148[0] = 0;
          `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_148);
        }
        FVar13 = local_12c;
        if (FVar30 == FVar2) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar33->PolygonGroupToPolygons,(int)local_144,(int)local_12c,0);
          this_04 = FMeshElementChannels::Get(pFVar33->PolygonElements,0);
          FMeshElementContainer::Remove(this_04,(int)FVar13);
          FMeshElementIndexer::RemoveKey(&pFVar33->PolygonToTriangles,(int)FVar13,0);
          this_02 = local_c0;
          if ((local_c0 != (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) &&
             (pTVar21 = FMeshElementIndexer::Find
                                  (&pFVar33->PolygonGroupToPolygons,&local_88,(int)local_144,0),
             pTVar21->ArrayNum == 0)) {
            TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPolygonGroupID_const_&>(this_02,&local_144);
          }
          if (local_58 != (ForElementType<FEdgeID>)0x0) {
            FMemory::Free((void *)local_58);
          }
          return;
        }
        iVar27 = *(int *)FVar30;
        this_01 = (TMeshAttributeArraySet<FVertexID> *)(pFVar33->EdgeVertices).ArrayPtr;
        if ((pFVar33->EdgeVertices).Extent == 0) {
          if (((this_01->ArrayForChannels).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar7 = (this_01->ArrayForChannels).AllocatorInstance.SecondaryData;
          this_05 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_01->ArrayForChannels;
          if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            this_05 = FVar7;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)this_05,&local_d8,iVar27);
        }
        else {
          this_03 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_01,0);
          local_d8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_03,iVar27);
          local_d8.ArrayNum = (pFVar33->EdgeVertices).Extent;
          if ((local_d8.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar3 = local_d8.DataPtr + local_d8.ArrayNum;
        pFVar10 = pFVar33;
        for (pFVar24 = local_d8.DataPtr; pFVar24 != pFVar3; pFVar24 = pFVar24 + 1) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar33->VertexToEdges,(int)*pFVar24,iVar27,0);
          pFVar10 = local_138;
        }
        FVar25 = (ForElementType<FMeshElementContainer>)pFVar10->EdgeElements;
        if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) break;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
        }
        if (((iVar27 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= iVar27)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar22 = FVar25;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
        }
        iVar17 = iVar27;
        if (iVar27 < 0) {
          iVar17 = iVar27 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar17 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar27 & 0x1f));
        *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
        FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),iVar27);
        FMeshElementIndexer::RemoveKey(&pFVar10->EdgeToTriangles,iVar27,0);
        FVar30 = (ForElementType<FEdgeID>)((longlong)FVar30 + 4);
        pFVar33 = pFVar10;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (pFVar33->TrianglePolygonGroups).ArrayPtr;
    FVar4 = *pFVar29;
    if (((int)pFVar5[2].Type < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar23 = pFVar5 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
    }
    pFVar18 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                        ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar23,(int)FVar4);
    if ((*pFVar18 != local_144) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrianglePolygonGroups[TriangleID] == PolygonGroupID",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x421,L""), bVar14)) break;
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->PolygonGroupToTriangles,(int)local_144,(int)FVar4,0);
    FVar25 = (ForElementType<FMeshElementContainer>)pFVar33->TriangleElements;
    if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
    }
    if ((((int)FVar4 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= (int)FVar4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar22 = FVar25;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
    }
    FVar16 = FVar4;
    if ((int)FVar4 < 0) {
      FVar16 = (FTriangleID)((int)FVar4 + 0x1f);
    }
    puVar1 = (uint *)((longlong)FVar22 + (longlong)((int)FVar16 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (FVar4._0_1_ & 0x1f));
    *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
    FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),(int)FVar4);
    pFVar29 = pFVar29 + 1;
    iVar9 = local_50;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// DeletePolygon_Internal<TSet> @ 14363ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::DeletePolygon_Internal<TSet>
          (FMeshDescription *this,FPolygonID param_1,
          TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *param_2,
          TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *param_3
          ,TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *param_4)

{
  FMeshElementIndexer *this_00;
  uint *puVar1;
  ForElementType<FEdgeID> FVar2;
  FVertexID *pFVar3;
  FTriangleID FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FScriptContainerElement *pFVar6;
  TMeshAttributeArraySet<FVertexID> *this_01;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar7;
  code *pcVar8;
  int iVar9;
  FMeshDescription *pFVar10;
  FEdgeID FVar11;
  FPolygonGroupID FVar12;
  FPolygonID FVar13;
  TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *this_02;
  bool bVar14;
  uint uVar15;
  FTriangleID FVar16;
  int iVar17;
  FPolygonGroupID *pFVar18;
  FPolygonID *pFVar19;
  FPolygonID *pFVar20;
  TMeshAttributeArrayBase<FVertexID> *this_03;
  FMeshElementContainer *this_04;
  TArrayView<int_const_,int> *pTVar21;
  ForElementType<FMeshElementContainer> FVar22;
  FMeshAttributeArraySetBase *pFVar23;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_05;
  FVertexID *pFVar24;
  ForElementType<FMeshElementContainer> FVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  FTriangleID *pFVar29;
  ForElementType<FEdgeID> FVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  FMeshDescription *pFVar34;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  FEdgeID local_154;
  FPolygonGroupID local_150 [2];
  FMeshDescription *local_148;
  uint local_140;
  FPolygonID local_13c;
  longlong local_138;
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *local_130;
  TArrayView<FEdgeID,int> local_128;
  TArrayView<FVertexInstanceID,int> local_118;
  TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *local_108;
  FTriangleID *local_100;
  TArrayView<FTriangleID_const_,int> local_f8;
  TArrayView<FVertexID,int> local_e8;
  FEdgeID local_d8;
  FVertexInstanceID local_d4;
  FPolygonGroupID local_d0 [2];
  FTriangleID *local_c8;
  TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *local_c0;
  TArrayView<int_const_,int> local_b8;
  TArrayView<int_const_,int> local_a8;
  TArrayView<FTriangleID_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_c0 = param_4;
  local_148 = this;
  local_13c = param_1;
  local_130 = param_2;
  local_108 = param_3;
  pFVar18 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  local_150[0] = *pFVar18;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_f8,(int)param_1,0);
  iVar27 = local_f8.ArrayNum;
  local_78.ArrayNum = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<FEdgeID>)0x0;
  local_78.ArrayMax = 8;
  uVar26 = iVar27 - 1;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (8 < (int)uVar26) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
              (4,4,uVar26,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
  }
  local_100 = local_f8.DataPtr;
  local_c8 = local_f8.DataPtr + iVar27;
  if (local_f8.DataPtr != local_c8) {
    this_00 = &this->EdgeToTriangles;
    pFVar34 = this;
    do {
      uVar28 = 0;
      pFVar5 = (pFVar34->TriangleVertexInstances).ArrayPtr;
      FVar4 = *local_100;
      if ((pFVar34->TriangleVertexInstances).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FVertexInstanceID>::Get
                  ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar23,&local_118,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_118.DataPtr =
             TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar23,(int)FVar4);
        local_118.ArrayNum = (pFVar34->TriangleVertexInstances).Extent;
        if ((local_118.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar5 = (pFVar34->TriangleEdges).ArrayPtr;
      if ((pFVar34->TriangleEdges).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar23,&local_128,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_128.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar23,(int)FVar4);
        local_128.ArrayNum = (pFVar34->TriangleEdges).Extent;
        if ((local_128.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_138 = 0;
      uVar31 = uVar28;
      do {
        iVar27 = (int)uVar28;
        if ((local_128.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_154 = *(FEdgeID *)(&(local_128.DataPtr)->field_0x0 + uVar31);
        FMeshElementIndexer::Find<FTriangleID>(this_00,&local_98,(int)local_154,0);
        pFVar29 = local_98.DataPtr;
        if (local_98.ArrayNum == 2) {
          pFVar19 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar34->TrianglePolygons,(int)*local_98.DataPtr);
          pFVar20 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar34->TrianglePolygons,(int)pFVar29[1]);
          param_2 = local_130;
          if (*pFVar19 != *pFVar20) goto LAB_14363cdb8;
          TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<FEdgeID_const_&>(&local_78,&local_154);
        }
        else {
LAB_14363cdb8:
          FMeshElementIndexer::RemoveReferenceFromKey(this_00,(int)local_154,(int)FVar4,0);
          if ((local_128.ArrayNum <= iVar27) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar11 = local_154;
          *(undefined4 *)(&(local_128.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
          if (param_2 != (TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *)0x0) {
            if (((this->EdgeToTriangles).bSuspended != false) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!bSuspended",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x67,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::ConditionalBuild(this_00,(int)FVar11,0);
            uVar26 = (this->EdgeToTriangles).ChunkMask;
            uVar32 = (int)FVar11 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("KeyChannelIndex < PerChannelIndices.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x6c,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)((this_00->PerChannelIndices).AllocatorInstance.Data + 8) == 0) {
              local_b8.DataPtr = (int *)0x0;
              local_b8.ArrayNum = 0;
            }
            else {
              if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar6 = (this_00->PerChannelIndices).AllocatorInstance.Data;
              uVar33 = 0;
              if ((int)uVar32 < *(int *)(pFVar6 + 8)) {
                uVar33 = ~uVar32 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FMeshElementIndexer::FChunk::Get
                        ((FChunk *)((longlong)(int)uVar32 * 0x58 + *(longlong *)pFVar6),&local_b8,
                         uVar26 & (uint)FVar11);
              if (local_b8.ArrayNum != 0) goto LAB_14363cf9a;
            }
            TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                      (local_130,&local_d8,(bool *)&local_154);
          }
        }
LAB_14363cf9a:
        if ((local_118.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar34 = local_148;
        uVar26 = *(uint *)(&(local_118.DataPtr)->field_0x0 + uVar31);
        local_140 = uVar26;
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&local_148->VertexInstanceToTriangles,uVar26,(int)FVar4,0);
        if ((local_118.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)(&(local_118.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
        if (local_108 !=
            (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)0x0
           ) {
          if (((pFVar34->VertexInstanceToTriangles).bSuspended != false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bSuspended",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x67,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FMeshElementIndexer::ConditionalBuild(&pFVar34->VertexInstanceToTriangles,uVar26,0);
          pFVar10 = local_148;
          uVar32 = (pFVar34->VertexInstanceToTriangles).ChunkMask;
          uVar33 = (int)uVar26 >> ((byte)(pFVar34->VertexInstanceToTriangles).ChunkBits & 0x1f);
          if (((local_148->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("KeyChannelIndex < PerChannelIndices.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x6c,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data
                      + 8) == 0) {
            local_a8.DataPtr = (int *)0x0;
            local_a8.ArrayNum = 0;
          }
          else {
            if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
            uVar15 = 0;
            if ((int)uVar33 < *(int *)(pFVar6 + 8)) {
              uVar15 = ~uVar33 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::FChunk::Get
                      ((FChunk *)((longlong)(int)uVar33 * 0x58 + *(longlong *)pFVar6),&local_a8,
                       uVar32 & uVar26);
            if (local_a8.ArrayNum != 0) goto LAB_14363d1fd;
          }
          TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
          Emplace<FVertexInstanceID_const_&>(local_108,&local_d4,(bool *)&local_140);
        }
LAB_14363d1fd:
        uVar28 = (ulonglong)(iVar27 + 1U);
        local_138 = local_138 + 1;
        uVar31 = uVar31 + 4;
        param_2 = local_130;
        pFVar34 = local_148;
      } while ((int)(iVar27 + 1U) < 3);
      local_100 = local_100 + 1;
    } while (local_100 != local_c8);
    iVar27 = local_f8.ArrayNum;
    this = local_148;
  }
  pFVar34 = local_148;
  pFVar29 = local_f8.DataPtr;
  iVar9 = local_78.ArrayNum;
  while( true ) {
    local_78.ArrayNum = iVar9;
    if (pFVar29 == local_f8.DataPtr + iVar27) {
      FVar30 = (ForElementType<FEdgeID>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FVar30 = local_78.AllocatorInstance.SecondaryData;
      }
      FVar2 = (ForElementType<FEdgeID>)((longlong)FVar30 + (longlong)iVar9 * 4);
      pFVar34 = local_148;
      while( true ) {
        if (local_78.ArrayNum != iVar9) {
          local_158[0] = 0;
          `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        FVar13 = local_13c;
        FVar12 = local_150[0];
        if (FVar30 == FVar2) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar34->PolygonGroupToPolygons,(int)local_150[0],(int)local_13c,0);
          this_04 = FMeshElementChannels::Get(pFVar34->PolygonElements,0);
          FMeshElementContainer::Remove(this_04,(int)FVar13);
          FMeshElementIndexer::RemoveKey(&pFVar34->PolygonToTriangles,(int)FVar13,0);
          this_02 = local_c0;
          if ((local_c0 !=
               (TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *)0x0)
             && (pTVar21 = FMeshElementIndexer::Find
                                     (&pFVar34->PolygonGroupToPolygons,&local_88,(int)FVar12,0),
                pTVar21->ArrayNum == 0)) {
            TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator>::
            Emplace<FPolygonGroupID_const_&>(this_02,local_d0,(bool *)local_150);
          }
          if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
          }
          return;
        }
        iVar27 = *(int *)FVar30;
        this_01 = (TMeshAttributeArraySet<FVertexID> *)(pFVar34->EdgeVertices).ArrayPtr;
        if ((pFVar34->EdgeVertices).Extent == 0) {
          if (((this_01->ArrayForChannels).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar7 = (this_01->ArrayForChannels).AllocatorInstance.SecondaryData;
          this_05 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_01->ArrayForChannels;
          if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            this_05 = FVar7;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)this_05,&local_e8,iVar27);
        }
        else {
          this_03 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_01,0);
          local_e8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_03,iVar27);
          local_e8.ArrayNum = (pFVar34->EdgeVertices).Extent;
          if ((local_e8.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar3 = local_e8.DataPtr + local_e8.ArrayNum;
        pFVar10 = pFVar34;
        for (pFVar24 = local_e8.DataPtr; pFVar24 != pFVar3; pFVar24 = pFVar24 + 1) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar34->VertexToEdges,(int)*pFVar24,iVar27,0);
          pFVar10 = local_148;
        }
        FVar25 = (ForElementType<FMeshElementContainer>)pFVar10->EdgeElements;
        if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) break;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
        }
        if (((iVar27 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= iVar27)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar22 = FVar25;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
        }
        iVar17 = iVar27;
        if (iVar27 < 0) {
          iVar17 = iVar27 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar17 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar27 & 0x1f));
        *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
        FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),iVar27);
        FMeshElementIndexer::RemoveKey(&pFVar10->EdgeToTriangles,iVar27,0);
        FVar30 = (ForElementType<FEdgeID>)((longlong)FVar30 + 4);
        pFVar34 = pFVar10;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (pFVar34->TrianglePolygonGroups).ArrayPtr;
    FVar4 = *pFVar29;
    if (((int)pFVar5[2].Type < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar23 = pFVar5 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
    }
    pFVar18 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                        ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar23,(int)FVar4);
    if ((*pFVar18 != local_150[0]) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrianglePolygonGroups[TriangleID] == PolygonGroupID",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x421,L""), bVar14)) break;
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->PolygonGroupToTriangles,(int)local_150[0],(int)FVar4,0);
    FVar25 = (ForElementType<FMeshElementContainer>)pFVar34->TriangleElements;
    if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
    }
    if ((((int)FVar4 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= (int)FVar4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar22 = FVar25;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
    }
    FVar16 = FVar4;
    if ((int)FVar4 < 0) {
      FVar16 = (FTriangleID)((int)FVar4 + 0x1f);
    }
    puVar1 = (uint *)((longlong)FVar22 + (longlong)((int)FVar16 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (FVar4._0_1_ & 0x1f));
    *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
    FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),(int)FVar4);
    pFVar29 = pFVar29 + 1;
    iVar9 = local_78.ArrayNum;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// DeleteTriangle_Internal<TArray> @ 14363d6a0

void __thiscall
FMeshDescription::DeleteTriangle_Internal<TArray>
          (FMeshDescription *this,FTriangleID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  FVertexInstanceID FVar4;
  FEdgeID FVar5;
  FPolygonID FVar6;
  FUVID *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FPolygonGroupID *pFVar11;
  FPolygonID *pFVar12;
  TArrayView<int_const_,int> *pTVar13;
  FMeshElementContainer *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FMeshAttributeArraySetBase *pFVar18;
  int local_res8;
  FPolygonGroupID local_res10 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *local_res20;
  longlong local_d8;
  FVertexInstanceID local_d0;
  FEdgeID local_cc;
  FPolygonID local_c8;
  longlong local_c0;
  TArrayView<FUVID,int> local_b8;
  TArrayView<FVertexInstanceID,int> local_a8;
  TArrayView<FEdgeID,int> local_98;
  TArrayView<int_const_,int> local_88;
  TArrayView<int_const_,int> local_78;
  TArrayView<int_const_,int> local_68;
  TArrayView<int_const_,int> local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar11 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->TrianglePolygonGroups,(int)param_1);
  local_res10[0] = *pFVar11;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonGroupToTriangles,(int)local_res10[0],(int)param_1,0);
  pFVar12 = TMeshAttributesRef<int,FPolygonID>::operator[](&this->TrianglePolygons,(int)param_1);
  local_c8 = *pFVar12;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonToTriangles,(int)local_c8,(int)param_1,0);
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
            (&this->TriangleVertexInstances,&local_a8,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&local_98,(int)param_1);
  local_res8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  do {
    lVar17 = local_c0;
    if ((local_a8.ArrayNum <= local_res8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d0 = *(FVertexInstanceID *)(&(local_a8.DataPtr)->field_0x0 + local_d8);
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->VertexInstanceToTriangles,(int)local_d0,(int)param_1,0);
    if ((local_a8.ArrayNum <= local_res8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar4 = local_d0;
    *(undefined4 *)(&(local_a8.DataPtr)->field_0x0 + local_d8) = 0xffffffff;
    if (local_res20 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((this->VertexInstanceToTriangles).bSuspended != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->VertexInstanceToTriangles,(int)FVar4,0);
      uVar16 = (this->VertexInstanceToTriangles).ChunkMask;
      uVar15 = (int)FVar4 >> ((byte)(this->VertexInstanceToTriangles).ChunkBits & 0x1f);
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data + 8)
          == 0) {
        local_88.DataPtr = (int *)0x0;
        local_88.ArrayNum = 0;
      }
      else {
        if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pFVar1 + 8)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar15 * 0x58 + *(longlong *)pFVar1),&local_88,
                   uVar16 & (uint)FVar4);
        if (local_88.ArrayNum != 0) goto LAB_14363d999;
      }
      TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FVertexInstanceID_const_&>(local_res20,&local_d0);
    }
LAB_14363d999:
    if ((local_98.ArrayNum <= local_res8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_cc = *(FEdgeID *)(&(local_98.DataPtr)->field_0x0 + local_d8);
    FMeshElementIndexer::RemoveReferenceFromKey(&this->EdgeToTriangles,(int)local_cc,(int)param_1,0)
    ;
    if ((local_98.ArrayNum <= local_res8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar5 = local_cc;
    *(undefined4 *)(&(local_98.DataPtr)->field_0x0 + local_d8) = 0xffffffff;
    if (local_res18 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((this->EdgeToTriangles).bSuspended != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->EdgeToTriangles,(int)FVar5,0);
      uVar16 = (this->EdgeToTriangles).ChunkMask;
      uVar15 = (int)FVar5 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data + 8) == 0) {
        local_78.DataPtr = (int *)0x0;
        local_78.ArrayNum = 0;
      }
      else {
        if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pFVar1 + 8)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar15 * 0x58 + *(longlong *)pFVar1),&local_78,
                   uVar16 & (uint)FVar5);
        if (local_78.ArrayNum != 0) goto LAB_14363dbcc;
      }
      TArray<FEdgeID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FEdgeID_const_&>
                (local_res18,&local_cc);
    }
LAB_14363dbcc:
    uVar16 = 0;
    iVar10 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
    if (0 < iVar10) {
      do {
        pFVar2 = (this->TriangleUVs).ArrayPtr;
        if ((this->TriangleUVs).Extent == 0) {
          uVar15 = 0;
          if ((int)uVar16 < (int)pFVar2[2].Type) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          TAttributeArrayContainer<FUVID>::Get
                    ((TAttributeArrayContainer<FUVID> *)(pFVar18 + (int)uVar16),&local_b8,
                     (int)param_1);
          uVar15 = local_b8.ArrayNum;
        }
        else {
          uVar15 = 0;
          if ((int)uVar16 < (int)pFVar2[2].Type) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          local_b8.DataPtr =
               TMeshAttributeArrayBase<FUVID>::GetElementBase
                         ((TMeshAttributeArrayBase<FUVID> *)(pFVar18 + (int)uVar16),(int)param_1);
          uVar15 = (this->TriangleUVs).Extent;
          local_b8.ArrayNum = uVar15;
          if (((int)uVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar7 = local_b8.DataPtr;
        if (((int)uVar15 <= local_res8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->UVToTriangles,*(int *)(&pFVar7->field_0x0 + local_d8),(int)param_1,uVar16)
        ;
        uVar16 = uVar16 + 1;
        iVar10 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
        lVar17 = local_c0;
      } while ((int)uVar16 < iVar10);
    }
    FVar6 = local_c8;
    local_res8 = local_res8 + 1;
    local_c0 = lVar17 + 1;
    local_d8 = local_d8 + 4;
    if (2 < local_res8) {
      pTVar13 = FMeshElementIndexer::Find(&this->PolygonToTriangles,&local_68,(int)local_c8,0);
      if (pTVar13->ArrayNum == 0) {
        pFVar11 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                            (&this->PolygonPolygonGroups,(int)FVar6);
        if ((*pFVar11 != local_res10[0]) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PolygonPolygonGroups[PolygonID] == PolygonGroupID",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x394,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->PolygonGroupToPolygons,(int)local_res10[0],(int)FVar6,0);
        pFVar14 = FMeshElementChannels::Get(this->PolygonElements,0);
        FMeshElementContainer::Remove(pFVar14,(int)FVar6);
        FMeshElementIndexer::RemoveKey(&this->PolygonToTriangles,(int)FVar6,0);
      }
      pFVar14 = FMeshElementChannels::Get(this->TriangleElements,0);
      FMeshElementContainer::Remove(pFVar14,(int)param_1);
      if ((param_4 != (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) &&
         (pTVar13 = FMeshElementIndexer::Find
                              (&this->PolygonGroupToTriangles,&local_58,(int)local_res10[0],0),
         pTVar13->ArrayNum == 0)) {
        TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonGroupID_const_&>
                  (param_4,local_res10);
      }
      return;
    }
  } while( true );
}

// DeleteTriangle_Internal<TSet> @ 14363deb0

void __thiscall
FMeshDescription::DeleteTriangle_Internal<TSet>
          (FMeshDescription *this,FTriangleID param_1,
          TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *param_2,
          TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *param_3
          ,TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *param_4)

{
  FScriptContainerElement *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  FPolygonID FVar4;
  FUVID *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FPolygonGroupID *pFVar10;
  FPolygonID *pFVar11;
  TArrayView<int_const_,int> *pTVar12;
  FMeshElementContainer *pFVar13;
  uint uVar14;
  FPolygonGroupID FVar15;
  longlong lVar16;
  uint uVar17;
  FMeshAttributeArraySetBase *pFVar18;
  int local_res8;
  FPolygonGroupID local_res10 [2];
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *local_res18;
  TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *local_res20;
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  FPolygonID local_d8;
  longlong local_d0;
  TArrayView<FUVID,int> local_c8;
  TArrayView<FVertexInstanceID,int> local_b8;
  TArrayView<FEdgeID,int> local_a8;
  FVertexInstanceID local_98;
  FEdgeID local_94;
  FPolygonGroupID local_90 [2];
  TArrayView<int_const_,int> local_88;
  TArrayView<int_const_,int> local_78;
  TArrayView<int_const_,int> local_68;
  TArrayView<int_const_,int> local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar10 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->TrianglePolygonGroups,(int)param_1);
  local_res10[0] = *pFVar10;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonGroupToTriangles,(int)local_res10[0],(int)param_1,0);
  pFVar11 = TMeshAttributesRef<int,FPolygonID>::operator[](&this->TrianglePolygons,(int)param_1);
  local_d8 = *pFVar11;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonToTriangles,(int)local_d8,(int)param_1,0);
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
            (&this->TriangleVertexInstances,&local_b8,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&local_a8,(int)param_1);
  local_res8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  do {
    lVar16 = local_d0;
    if ((local_b8.ArrayNum <= local_res8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = *(uint *)(&(local_b8.DataPtr)->field_0x0 + local_e8);
    local_e0 = uVar14;
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->VertexInstanceToTriangles,uVar14,(int)param_1,0);
    if ((local_b8.ArrayNum <= local_res8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)(&(local_b8.DataPtr)->field_0x0 + local_e8) = 0xffffffff;
    if (local_res20 !=
        (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)0x0) {
      if (((this->VertexInstanceToTriangles).bSuspended != false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->VertexInstanceToTriangles,uVar14,0);
      uVar9 = (this->VertexInstanceToTriangles).ChunkMask;
      uVar17 = (int)uVar14 >> ((byte)(this->VertexInstanceToTriangles).ChunkBits & 0x1f);
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data + 8)
          == 0) {
        local_88.DataPtr = (int *)0x0;
        local_88.ArrayNum = 0;
      }
      else {
        if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar17 < *(int *)(pFVar1 + 8)) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar17 * 0x58 + *(longlong *)pFVar1),&local_88,
                   uVar9 & uVar14);
        if (local_88.ArrayNum != 0) goto LAB_14363e1a1;
      }
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
      Emplace<FVertexInstanceID_const_&>(local_res20,&local_98,(bool *)&local_e0);
    }
LAB_14363e1a1:
    if ((local_a8.ArrayNum <= local_res8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = *(uint *)(&(local_a8.DataPtr)->field_0x0 + local_e8);
    local_dc = uVar14;
    FMeshElementIndexer::RemoveReferenceFromKey(&this->EdgeToTriangles,uVar14,(int)param_1,0);
    if ((local_a8.ArrayNum <= local_res8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)(&(local_a8.DataPtr)->field_0x0 + local_e8) = 0xffffffff;
    if (local_res18 != (TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *)0x0) {
      if (((this->EdgeToTriangles).bSuspended != false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->EdgeToTriangles,uVar14,0);
      uVar9 = (this->EdgeToTriangles).ChunkMask;
      uVar17 = (int)uVar14 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data + 8) == 0) {
        local_78.DataPtr = (int *)0x0;
        local_78.ArrayNum = 0;
      }
      else {
        if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar17 < *(int *)(pFVar1 + 8)) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar17 * 0x58 + *(longlong *)pFVar1),&local_78,
                   uVar9 & uVar14);
        if (local_78.ArrayNum != 0) goto LAB_14363e3f7;
      }
      TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::Emplace<FEdgeID_const_&>
                (local_res18,&local_94,(bool *)&local_dc);
    }
LAB_14363e3f7:
    uVar14 = 0;
    iVar8 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
    if (0 < iVar8) {
      do {
        pFVar2 = (this->TriangleUVs).ArrayPtr;
        if ((this->TriangleUVs).Extent == 0) {
          uVar9 = 0;
          if ((int)uVar14 < (int)pFVar2[2].Type) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          TAttributeArrayContainer<FUVID>::Get
                    ((TAttributeArrayContainer<FUVID> *)(pFVar18 + (int)uVar14),&local_c8,
                     (int)param_1);
          uVar9 = local_c8.ArrayNum;
        }
        else {
          uVar9 = 0;
          if ((int)uVar14 < (int)pFVar2[2].Type) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          local_c8.DataPtr =
               TMeshAttributeArrayBase<FUVID>::GetElementBase
                         ((TMeshAttributeArrayBase<FUVID> *)(pFVar18 + (int)uVar14),(int)param_1);
          uVar9 = (this->TriangleUVs).Extent;
          local_c8.ArrayNum = uVar9;
          if (((int)uVar9 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar5 = local_c8.DataPtr;
        if (((int)uVar9 <= local_res8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->UVToTriangles,*(int *)(&pFVar5->field_0x0 + local_e8),(int)param_1,uVar14)
        ;
        uVar14 = uVar14 + 1;
        iVar8 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
        lVar16 = local_d0;
      } while ((int)uVar14 < iVar8);
    }
    FVar4 = local_d8;
    local_res8 = local_res8 + 1;
    local_d0 = lVar16 + 1;
    local_e8 = local_e8 + 4;
    if (2 < local_res8) {
      pTVar12 = FMeshElementIndexer::Find(&this->PolygonToTriangles,&local_68,(int)local_d8,0);
      FVar15 = local_res10[0];
      if (pTVar12->ArrayNum == 0) {
        pFVar10 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                            (&this->PolygonPolygonGroups,(int)FVar4);
        FVar15 = local_res10[0];
        if ((*pFVar10 != local_res10[0]) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PolygonPolygonGroups[PolygonID] == PolygonGroupID",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x394,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->PolygonGroupToPolygons,(int)FVar15,(int)FVar4,0);
        pFVar13 = FMeshElementChannels::Get(this->PolygonElements,0);
        FMeshElementContainer::Remove(pFVar13,(int)FVar4);
        FMeshElementIndexer::RemoveKey(&this->PolygonToTriangles,(int)FVar4,0);
      }
      pFVar13 = FMeshElementChannels::Get(this->TriangleElements,0);
      FMeshElementContainer::Remove(pFVar13,(int)param_1);
      if ((param_4 !=
           (TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator> *)0x0) &&
         (pTVar12 = FMeshElementIndexer::Find
                              (&this->PolygonGroupToTriangles,&local_58,(int)FVar15,0),
         pTVar12->ArrayNum == 0)) {
        TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator>::
        Emplace<FPolygonGroupID_const_&>(param_4,local_90,(bool *)local_res10);
      }
      return;
    }
  } while( true );
}

// DeleteVertexInstance_Internal<TArray> @ 14363e6e0

void __thiscall
FMeshDescription::DeleteVertexInstance_Internal<TArray>
          (FMeshDescription *this,FVertexInstanceID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar1;
  FMeshElementContainer *this_01;
  TArrayView<int_const_,int> *pTVar2;
  FVertexID local_res10 [2];
  TArrayView<int_const_,int> local_18;
  
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,
                       0);
  pFVar1 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)param_1);
  local_res10[0] = *pFVar1;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToVertexInstances,(int)local_res10[0],(int)param_1,0);
  this_01 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FMeshElementContainer::Remove(this_01,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->VertexInstanceToTriangles,(int)param_1,0);
  if (param_2 != (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = FMeshElementIndexer::Find
                       (&this->VertexToVertexInstances,&local_18,(int)local_res10[0],0);
    if (pTVar2->ArrayNum == 0) {
      pTVar2 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_18,(int)local_res10[0],0);
      if (pTVar2->ArrayNum == 0) {
        TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                  (param_2,local_res10);
      }
    }
  }
  return;
}

// DeleteVertexInstance_Internal<TSet> @ 14363e7c0

void __thiscall
FMeshDescription::DeleteVertexInstance_Internal<TSet>
          (FMeshDescription *this,FVertexInstanceID param_1,
          TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *param_2)

{
  FVertexID FVar1;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar2;
  FMeshElementContainer *this_01;
  TArrayView<int_const_,int> *pTVar3;
  FVertexID local_res8 [2];
  FVertexID local_res10 [2];
  TArrayView<int_const_,int> local_28;
  
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,
                       0);
  pFVar2 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)param_1);
  FVar1 = *pFVar2;
  local_res10[0] = FVar1;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToVertexInstances,(int)FVar1,(int)param_1,0);
  this_01 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FMeshElementContainer::Remove(this_01,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->VertexInstanceToTriangles,(int)param_1,0);
  if (param_2 != (TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)0x0) {
    pTVar3 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_28,(int)FVar1,0);
    if (pTVar3->ArrayNum == 0) {
      pTVar3 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_28,(int)FVar1,0);
      if (pTVar3->ArrayNum == 0) {
        TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator>::
        Emplace<FVertexID_const_&>(param_2,local_res8,(bool *)local_res10);
      }
    }
  }
  return;
}

// GetEdgeConnectedPolygons<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 143645130

TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FMeshDescription::GetEdgeConnectedPolygons<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *this,
          TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,FEdgeID param_1)

{
  int *piVar1;
  uint uVar2;
  FTriangleID FVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<int_const_,int> *pTVar7;
  TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FPolygonID *pFVar9;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar10;
  TArrayView<FTriangleID_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<FPolygonID>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 8;
  pTVar7 = FMeshElementIndexer::Find(&this->EdgeToTriangles,&local_28,(int)param_1,0);
  uVar2 = pTVar7->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
              (4,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_38,(int)param_1,0);
  pFVar10 = local_38.DataPtr;
  while( true ) {
    if (pFVar10 == local_38.DataPtr + local_38.ArrayNum) {
      return __return_storage_ptr__;
    }
    pFVar4 = (this->TrianglePolygons).ArrayPtr;
    FVar3 = *pFVar10;
    if (((int)pFVar4[2].Type < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    this_00 = pFVar4 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      this_00 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
    }
    pFVar9 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                       ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar3);
    TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<FPolygonID_const_&>(__return_storage_ptr__,pFVar9);
    pFVar10 = pFVar10 + 1;
  }
  pcVar5 = (code *)swi(3);
  pTVar8 = (TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
           (*pcVar5)();
  return pTVar8;
}

// GetPolygonAdjacentPolygons<TSizedDefaultAllocator<32>_> @ 143645280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::GetPolygonAdjacentPolygons<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  FTriangleID *pFVar1;
  ForElementType<FPolygonID> FVar2;
  int iVar3;
  uint uVar4;
  FTriangleID FVar5;
  FMeshAttributeArraySetBase *pFVar6;
  code *pcVar7;
  FMeshDescription *pFVar8;
  ForElementType<FEdgeID> FVar9;
  bool bVar10;
  int iVar11;
  TArrayView<int_const_,int> *pTVar12;
  ForElementType<FPolygonID> FVar13;
  ForElementType<FPolygonID> FVar14;
  longlong lVar15;
  ulonglong uVar16;
  FMeshAttributeArraySetBase *this_00;
  ForElementType<FPolygonID> FVar17;
  ForElementType<FEdgeID> FVar18;
  ulonglong uVar19;
  int *piVar20;
  FTriangleID *pFVar21;
  undefined1 auStackY_158 [32];
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  ForElementType<FEdgeID> local_100;
  FMeshDescription *local_f8;
  ForElementType<FEdgeID> local_f0;
  TArrayView<FTriangleID_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  ForElementType<FPolygonID> local_c8;
  int local_a0;
  int local_9c;
  TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  param_2->ArrayNum = 0;
  local_f8 = this;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_98.AllocatorInstance.SecondaryData = (ForElementType<FEdgeID>)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0x10;
  GetPolygonPerimeterEdges<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            (this,param_1,&local_98);
  uVar16 = (ulonglong)local_98.ArrayNum;
  local_104 = local_98.ArrayNum;
  FVar18 = (ForElementType<FEdgeID>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FEdgeID>)0x0) {
    FVar18 = local_98.AllocatorInstance.SecondaryData;
  }
  local_f0 = (ForElementType<FEdgeID>)((longlong)FVar18 + uVar16 * 4);
  uVar19 = uVar16;
  do {
    FVar9 = local_f0;
    local_100 = FVar18;
    if ((int)uVar16 != (int)uVar19) {
      local_108 = 0;
      `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_108)
      ;
    }
    if (FVar18 == FVar9) {
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      return;
    }
    iVar3 = *(int *)FVar18;
    local_c8.SecondaryData = (ForElementType<FPolygonID>)0x0;
    local_a0 = 0;
    local_9c = 8;
    pTVar12 = FMeshElementIndexer::Find(&this->EdgeToTriangles,&local_d8,iVar3,0);
    uVar4 = pTVar12->ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    local_a0 = 0;
    if (local_9c < (int)uVar4) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                (4,4,uVar4,&local_c8,0,&local_9c);
    }
    FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_e8,iVar3,0);
    pFVar8 = local_f8;
    pFVar1 = local_e8.DataPtr + local_e8.ArrayNum;
    iVar3 = local_a0;
    for (pFVar21 = local_e8.DataPtr; local_a0 = iVar3, pFVar21 != pFVar1; pFVar21 = pFVar21 + 1) {
      pFVar6 = (pFVar8->TrianglePolygons).ArrayPtr;
      FVar5 = *pFVar21;
      if (((int)pFVar6[2].Type < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = pFVar6 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar6[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        this_00 = (FMeshAttributeArraySetBase *)pFVar6[2]._padding_;
      }
      FVar13 = (ForElementType<FPolygonID>)
               TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                         ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar5);
      FVar17 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar17 = local_c8.SecondaryData;
      }
      FVar2 = (ForElementType<FPolygonID>)((longlong)FVar17 + (longlong)local_a0 * 4);
      if (FVar17 != FVar2) {
        FVar14 = FVar17;
        do {
          if (*(FPolygonID *)FVar14 == *(FPolygonID *)FVar13) {
            if ((int)((longlong)FVar14 - (longlong)FVar17 >> 2) != -1) goto LAB_14364553b;
            break;
          }
          FVar14 = (ForElementType<FPolygonID>)((longlong)FVar14 + 4);
        } while (FVar14 != FVar2);
      }
      FVar17 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar17 = local_c8.SecondaryData;
      }
      if ((ulonglong)FVar17 <= (ulonglong)FVar13) {
        FVar17 = (ForElementType<FPolygonID>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
          FVar17 = local_c8.SecondaryData;
        }
        if (((ulonglong)FVar13 < (ulonglong)((longlong)FVar17 + (longlong)local_9c * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_a0 == local_9c) {
        local_a0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                             (0x404,&local_c8,&local_9c);
      }
      lVar15 = (longlong)local_a0;
      FVar17 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar17 = local_c8.SecondaryData;
      }
      local_a0 = local_a0 + 1;
      *(FPolygonID *)((longlong)FVar17 + lVar15 * 4) = *(FPolygonID *)FVar13;
LAB_14364553b:
      iVar3 = local_a0;
    }
    piVar20 = &param_2->ArrayMax;
    FVar17 = (ForElementType<FPolygonID>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FVar17 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FPolygonID>)((longlong)FVar17 + (longlong)iVar3 * 4);
    while( true ) {
      if (local_a0 != iVar3) {
        local_107[0] = 0;
        `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_107);
      }
      if (FVar17 == FVar13) break;
      if (*(FPolygonID *)FVar17 != param_1) {
        FVar2 = (ForElementType<FPolygonID>)(param_2->AllocatorInstance).Data;
        if ((((ulonglong)FVar2 <= (ulonglong)FVar17) &&
            ((ulonglong)FVar17 < (ulonglong)((longlong)FVar2 + (longlong)*piVar20 * 4))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar20) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar20);
        }
        param_2->ArrayNum = iVar11 + 1;
        *(FPolygonID *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             *(FPolygonID *)FVar17;
      }
      FVar17 = (ForElementType<FPolygonID>)((longlong)FVar17 + 4);
    }
    if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
    uVar16 = (ulonglong)(uint)local_98.ArrayNum;
    FVar18 = (ForElementType<FEdgeID>)((longlong)local_100 + 4);
    uVar19 = (ulonglong)local_104;
    this = local_f8;
  } while( true );
}

// GetPolygonInternalEdges<TSizedDefaultAllocator<32>_> @ 1436456a0

void __thiscall
FMeshDescription::GetPolygonInternalEdges<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FEdgeID *pFVar3;
  FEdgeID *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FTriangleID *pFVar7;
  bool bVar8;
  int iVar9;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar10;
  FEdgeID *pFVar11;
  FPolygonID *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FEdgeID *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_90;
  TArrayView<FEdgeID_const_,int> local_80;
  TArrayView<FTriangleID_const_,int> local_70;
  TArrayView<FTriangleID_const_,int> local_60;
  TArrayView<FTriangleID_const_,int> local_50;
  
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_60,(int)param_1,0);
  uVar17 = local_60.ArrayNum - 1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&param_2->AllocatorInstance,0,piVar1);
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_50,(int)param_1,0);
  if (3 < local_50.ArrayNum + 2) {
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>(this,param_1,&local_90);
    uVar6 = local_90._8_8_;
    uVar13 = (ulonglong)local_90.ArrayNum;
    pFVar2 = local_90.AllocatorInstance.Data + uVar13 * 4;
    uVar14 = uVar13;
    FVar16.Data = local_90.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FVertexInstanceID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar16.Data == pFVar2) break;
      iVar9 = *(int *)FVar16.Data;
      this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar10 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar9);
      FMeshElementIndexer::Find<FEdgeID>(&this->VertexToEdges,&local_80,(int)*pFVar10,0);
      pFVar3 = local_80.DataPtr + local_80.ArrayNum;
      for (pFVar15 = local_80.DataPtr; pFVar15 != pFVar3; pFVar15 = pFVar15 + 1) {
        pFVar11 = (FEdgeID *)(param_2->AllocatorInstance).Data;
        pFVar4 = pFVar11 + param_2->ArrayNum;
        if (pFVar11 != pFVar4) {
          do {
            if (*pFVar11 == *pFVar15) goto LAB_143645900;
            pFVar11 = pFVar11 + 1;
          } while (pFVar11 != pFVar4);
        }
        FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_70,(int)*pFVar15,0);
        pFVar7 = local_70.DataPtr;
        if (((local_70.ArrayNum == 2) &&
            (pFVar12 = TMeshAttributesRef<int,FPolygonID>::operator[]
                                 (&this->TrianglePolygons,(int)*local_70.DataPtr),
            *pFVar12 == param_1)) &&
           (pFVar12 = TMeshAttributesRef<int,FPolygonID>::operator[]
                                (&this->TrianglePolygons,(int)pFVar7[1]), *pFVar12 == param_1)) {
          pFVar4 = (FEdgeID *)(param_2->AllocatorInstance).Data;
          if (((pFVar4 <= pFVar15) && (pFVar15 < pFVar4 + *piVar1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar9 + 1;
          *(FEdgeID *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = *pFVar15;
        }
LAB_143645900:
      }
      uVar13 = local_90._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 4;
      uVar14 = uVar6 & 0xffffffff;
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_> @ 143645980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FTriangleID FVar2;
  FEdgeID FVar3;
  FEdgeID *_Src;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FEdgeID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  uint uVar13;
  uint uVar14;
  FMeshAttributeArraySetBase *pFVar15;
  uint uVar16;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_128;
  FMeshDescription *local_118;
  longlong local_110;
  longlong local_108;
  TArrayView<FEdgeID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FEdgeID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_118 = this;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  TArray<FEdgeID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,local_d8.ArrayNum + 2,Default);
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_128,(int)param_1,0);
  if (local_128.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                        (&this->TriangleEdges,&local_a8,(int)*local_128.DataPtr);
    iVar1 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    param_2->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,param_2->ArrayMax,&param_2->AllocatorInstance,iVar1,&param_2->ArrayMax);
      if (iVar1 != 0) {
        memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  else {
    uVar14 = 0;
    local_98.ArrayMax = 8;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_128.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_128.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    if (0 < local_98.ArrayNum) {
      local_108 = 0;
      local_110 = 0;
      do {
        lVar6 = local_110;
        uVar16 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < local_98.ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar8 = *(uint *)(lVar6 + (longlong)FVar12);
        uVar9 = 0;
        if ((int)uVar8 < local_128.ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_128.DataPtr[(int)uVar8];
        uVar9 = 0;
        uVar8 = uVar9;
        if ((int)uVar14 < local_98.ArrayNum) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar6);
        pFVar4 = (local_118->TriangleEdges).ArrayPtr;
        if ((local_118->TriangleEdges).Extent == 0) {
          if (((int)pFVar4[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar15 = pFVar4 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar15,&local_100,(int)FVar2);
          uVar13 = local_100.ArrayNum;
        }
        else {
          if (((int)pFVar4[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar15 = pFVar4 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
          }
          local_100.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar15,(int)FVar2);
          uVar13 = (local_118->TriangleEdges).Extent;
          local_100.ArrayNum = uVar13;
          if (((int)uVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar10 = uVar9;
        if ((int)uVar8 < (int)uVar13) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar9 = uVar16;
        }
        FVar3 = local_100.DataPtr[(int)uVar8];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = uVar14 + 1;
        local_110 = local_110 + 8;
        *(FEdgeID *)((param_2->AllocatorInstance).Data + local_108) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar14 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetPolygonPerimeterEdges<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 143645e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::
GetPolygonPerimeterEdges<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  void *_Dst;
  FTriangleID FVar2;
  FEdgeID FVar3;
  FEdgeID *_Src;
  ForElementType<FEdgeID> FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FEdgeID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  ForElementType<FEdgeID> FVar13;
  uint uVar14;
  FMeshAttributeArraySetBase *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_118;
  longlong local_108;
  TArrayView<FEdgeID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FEdgeID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  uVar16 = local_d8.ArrayNum + 2;
  if (iVar8 < (int)uVar16) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
              (4,4,uVar16 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar8) {
      uVar14 = iVar8 - uVar16;
      if (((int)(uVar14 | uVar16) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FEdgeID>)param_2;
        if (FVar4 != (ForElementType<FEdgeID>)0x0) {
          FVar13 = FVar4;
        }
        _Dst = (void *)((longlong)FVar13 + (longlong)(int)uVar16 * 4);
        iVar8 = (*piVar1 - uVar14) - uVar16;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar14 * 4),(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_118,(int)param_1,0);
  if (local_118.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                        (&this->TriangleEdges,&local_a8,(int)*local_118.DataPtr);
    iVar8 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    *piVar1 = iVar8;
    if ((iVar8 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 0x10;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                (4,4,iVar8,param_2->ArrayMax,&param_2->AllocatorInstance,iVar8,&param_2->ArrayMax);
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar4 != (ForElementType<FEdgeID>)0x0) {
        param_2 = (TArray<FEdgeID,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar4
        ;
      }
      if (iVar8 != 0) {
        memcpy(param_2,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  else {
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 8;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_118.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_118.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    uVar16 = 0;
    if (0 < local_98.ArrayNum) {
      lVar17 = 0;
      local_108 = 0;
      do {
        uVar18 = ~uVar16 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar16 < local_98.ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar17 + (longlong)FVar12);
        uVar9 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = local_118.DataPtr[(int)uVar14];
        uVar14 = 0;
        if ((int)uVar16 < local_98.ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->TriangleEdges).ArrayPtr;
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar17 + 4 + (longlong)FVar12);
        if ((this->TriangleEdges).Extent == 0) {
          if (((int)pFVar5[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar15,&local_100,(int)FVar2);
          uVar9 = local_100.ArrayNum;
        }
        else {
          if (((int)pFVar5[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          local_100.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar15,(int)FVar2);
          uVar9 = (this->TriangleEdges).Extent;
          local_100.ArrayNum = uVar9;
          if (((int)uVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar9) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar9 = uVar18;
        }
        FVar3 = local_100.DataPtr[(int)uVar14];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FEdgeID>)param_2;
        if (FVar4 != (ForElementType<FEdgeID>)0x0) {
          FVar13 = FVar4;
        }
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 8;
        *(FEdgeID *)(local_108 + (longlong)FVar13) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar16 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetPolygonVertexInstances<TSizedDefaultAllocator<32>_> @ 143646400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FTriangleID FVar2;
  FVertexInstanceID FVar3;
  FVertexInstanceID *_Src;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FVertexInstanceID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FMeshAttributeArraySetBase *pFVar16;
  uint uVar17;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_128;
  FMeshDescription *local_118;
  longlong local_110;
  longlong local_108;
  TArrayView<FVertexInstanceID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FVertexInstanceID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_118 = this;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  uVar15 = local_d8.ArrayNum + 2;
  if (iVar8 < (int)uVar15) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar8) {
      uVar14 = iVar8 - uVar15;
      if (((int)(uVar14 | uVar15) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar14 != 0) {
        _Dst = (param_2->AllocatorInstance).Data + (longlong)(int)uVar15 * 4;
        iVar8 = (*piVar1 - uVar14) - uVar15;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar14 * 4,(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_128,(int)param_1,0);
  if (local_128.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&this->TriangleVertexInstances,&local_a8,(int)*local_128.DataPtr);
    iVar8 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    *piVar1 = iVar8;
    if ((iVar8 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar8,param_2->ArrayMax,&param_2->AllocatorInstance,iVar8,&param_2->ArrayMax);
      if (iVar8 != 0) {
        memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  else {
    uVar15 = 0;
    local_98.ArrayMax = 8;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_128.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_128.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    if (0 < local_98.ArrayNum) {
      local_108 = 0;
      local_110 = 0;
      do {
        lVar6 = local_110;
        uVar17 = ~uVar15 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar15 < local_98.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar6 + (longlong)FVar12);
        uVar9 = 0;
        if ((int)uVar14 < local_128.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_128.DataPtr[(int)uVar14];
        uVar9 = 0;
        uVar14 = uVar9;
        if ((int)uVar15 < local_98.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar6 + 4 + (longlong)FVar12);
        pFVar4 = (local_118->TriangleVertexInstances).ArrayPtr;
        if ((local_118->TriangleVertexInstances).Extent == 0) {
          if (((int)pFVar4[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = pFVar4 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar16 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar16,&local_100,(int)FVar2);
          uVar13 = local_100.ArrayNum;
        }
        else {
          if (((int)pFVar4[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = pFVar4 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar16 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
          }
          local_100.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                         ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar16,(int)FVar2);
          uVar13 = (local_118->TriangleVertexInstances).Extent;
          local_100.ArrayNum = uVar13;
          if (((int)uVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar10 = uVar9;
        if ((int)uVar14 < (int)uVar13) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar9 = uVar17;
        }
        FVar3 = local_100.DataPtr[(int)uVar14];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = uVar15 + 1;
        local_110 = local_110 + 8;
        *(FVertexInstanceID *)((param_2->AllocatorInstance).Data + local_108) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar15 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetPolygonVertexInstances<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 143646990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::
GetPolygonVertexInstances<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  void *_Dst;
  FTriangleID FVar2;
  FVertexInstanceID FVar3;
  FVertexInstanceID *_Src;
  ForElementType<FVertexInstanceID> FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FVertexInstanceID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  ForElementType<FVertexInstanceID> FVar13;
  uint uVar14;
  FMeshAttributeArraySetBase *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_118;
  longlong local_108;
  TArrayView<FVertexInstanceID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FVertexInstanceID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  piVar1 = &param_2->ArrayNum;
  iVar8 = *piVar1;
  uVar16 = local_d8.ArrayNum + 2;
  if (iVar8 < (int)uVar16) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
              (4,4,uVar16 - iVar8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if ((int)uVar16 < iVar8) {
      uVar14 = iVar8 - uVar16;
      if (((int)(uVar14 | uVar16) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar14 != 0) {
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FVertexInstanceID>)param_2;
        if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
          FVar13 = FVar4;
        }
        _Dst = (void *)((longlong)FVar13 + (longlong)(int)uVar16 * 4);
        iVar8 = (*piVar1 - uVar14) - uVar16;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar14 * 4),(longlong)iVar8 << 2);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_118,(int)param_1,0);
  if (local_118.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&this->TriangleVertexInstances,&local_a8,(int)*local_118.DataPtr);
    iVar8 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    *piVar1 = iVar8;
    if ((iVar8 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                (4,4,iVar8,param_2->ArrayMax,&param_2->AllocatorInstance,iVar8,&param_2->ArrayMax);
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
        param_2 = (TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar4;
      }
      if (iVar8 != 0) {
        memcpy(param_2,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  else {
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 8;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_118.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_118.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    uVar16 = 0;
    if (0 < local_98.ArrayNum) {
      lVar17 = 0;
      local_108 = 0;
      do {
        uVar18 = ~uVar16 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar16 < local_98.ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar17 + (longlong)FVar12);
        uVar9 = 0;
        if ((int)uVar14 < local_118.ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = local_118.DataPtr[(int)uVar14];
        uVar14 = 0;
        if ((int)uVar16 < local_98.ArrayNum) {
          uVar14 = uVar18;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->TriangleVertexInstances).ArrayPtr;
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar14 = *(uint *)(lVar17 + 4 + (longlong)FVar12);
        if ((this->TriangleVertexInstances).Extent == 0) {
          if (((int)pFVar5[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar15,&local_100,(int)FVar2);
          uVar9 = local_100.ArrayNum;
        }
        else {
          if (((int)pFVar5[2].Type < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          local_100.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                         ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar15,(int)FVar2);
          uVar9 = (this->TriangleVertexInstances).Extent;
          local_100.ArrayNum = uVar9;
          if (((int)uVar9 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar10 = 0;
        if ((int)uVar14 < (int)uVar9) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar9 = uVar18;
        }
        FVar3 = local_100.DataPtr[(int)uVar14];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FVertexInstanceID>)param_2;
        if (FVar4 != (ForElementType<FVertexInstanceID>)0x0) {
          FVar13 = FVar4;
        }
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 8;
        *(FVertexInstanceID *)(local_108 + (longlong)FVar13) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar16 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetPolygonVertices<TSizedDefaultAllocator<32>_> @ 143646f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::GetPolygonVertices<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FTriangleID FVar2;
  FVertexID FVar3;
  FVertexID *_Src;
  TMeshAttributeArraySet<FVertexID> *this_00;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<FVertexID,int> *pTVar11;
  ForElementType<TTuple<int,int>_> FVar12;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  uint uVar13;
  uint uVar14;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_02;
  uint uVar15;
  undefined1 auStackY_168 [32];
  TArrayView<FTriangleID_const_,int> local_128;
  FMeshDescription *local_118;
  longlong local_110;
  longlong local_108;
  TArrayView<FVertexID,int> local_100;
  ForElementType<TTuple<int,int>_> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<TTuple<int,int>,int> local_c8;
  TArrayView<FTriangleID_const_,int> local_b8;
  TArrayView<FVertexID,int> local_a8;
  TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_118 = this;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_d8,(int)param_1,0);
  TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,local_d8.ArrayNum + 2,Default);
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_128,(int)param_1,0);
  if (local_128.ArrayNum == 1) {
    pTVar11 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&this->TriangleVertices,&local_a8,(int)*local_128.DataPtr);
    iVar1 = pTVar11->ArrayNum;
    _Src = pTVar11->DataPtr;
    param_2->ArrayNum = iVar1;
    if ((iVar1 == 0) && (param_2->ArrayMax == 0)) {
      param_2->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,param_2->ArrayMax,&param_2->AllocatorInstance,iVar1,&param_2->ArrayMax);
      if (iVar1 != 0) {
        memcpy((param_2->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  else {
    uVar14 = 0;
    local_98.ArrayMax = 8;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_98.ArrayNum = 0;
    TArray<TTuple<int,int>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
    SetNumUninitialized(&local_98,local_128.ArrayNum + 2,Default);
    iStack_e0 = local_98.ArrayNum;
    local_e8 = (ForElementType<TTuple<int,int>_>)&local_98;
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      local_e8 = local_98.AllocatorInstance.SecondaryData;
    }
    if ((local_98.ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8._12_4_ = uStack_dc;
    local_c8.ArrayNum = iStack_e0;
    local_c8.DataPtr = (TTuple<int,int> *)local_e8;
    local_b8.DataPtr = local_128.DataPtr;
    FindPolygonPerimeter(this,&local_b8,&local_c8);
    if (0 < local_98.ArrayNum) {
      local_108 = 0;
      local_110 = 0;
      do {
        lVar6 = local_110;
        uVar15 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < local_98.ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar8 = *(uint *)((longlong)FVar12 + lVar6);
        uVar9 = 0;
        if ((int)uVar8 < local_128.ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = local_128.DataPtr[(int)uVar8];
        uVar9 = 0;
        uVar8 = uVar9;
        if ((int)uVar14 < local_98.ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<TTuple<int,int>_>)&local_98;
        if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar12 = local_98.AllocatorInstance.SecondaryData;
        }
        uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar6);
        this_00 = (TMeshAttributeArraySet<FVertexID> *)(local_118->TriangleVertices).ArrayPtr;
        if ((local_118->TriangleVertices).Extent == 0) {
          if (((this_00->ArrayForChannels).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar4 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
          this_02 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_00->ArrayForChannels;
          if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            this_02 = FVar4;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)this_02,&local_100,(int)FVar2);
          uVar13 = local_100.ArrayNum;
        }
        else {
          this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
          local_100.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,(int)FVar2)
          ;
          uVar13 = (local_118->TriangleVertices).Extent;
          local_100.ArrayNum = uVar13;
          if (((int)uVar13 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar10 = uVar9;
        if ((int)uVar8 < (int)uVar13) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar9 = uVar15;
        }
        FVar3 = local_100.DataPtr[(int)uVar8];
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = uVar14 + 1;
        local_110 = local_110 + 8;
        *(FVertexID *)((param_2->AllocatorInstance).Data + local_108) = FVar3;
        local_108 = local_108 + 4;
      } while ((int)uVar14 < local_98.ArrayNum);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetTriangleAdjacentTriangles<TSizedDefaultAllocator<32>_> @ 1436473e0

void __thiscall
FMeshDescription::GetTriangleAdjacentTriangles<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FTriangleID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FMeshElementIndexer *this_00;
  FTriangleID *pFVar2;
  FEdgeID FVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FTriangleID *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  FTriangleID *pFVar12;
  FEdgeID *pFVar13;
  FTriangleID local_58 [2];
  TArrayView<int_const_,int> local_50;
  TArrayView<FEdgeID,int> local_40;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&local_40,(int)param_1);
  if (local_40.DataPtr != local_40.DataPtr + local_40.ArrayNum) {
    this_00 = &this->EdgeToTriangles;
    pFVar13 = local_40.DataPtr;
    do {
      FVar3 = *pFVar13;
      if (((this->EdgeToTriangles).bSuspended != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(this_00,(int)FVar3,0);
      uVar4 = (this->EdgeToTriangles).ChunkMask;
      uVar11 = (int)FVar3 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((this_00->PerChannelIndices).AllocatorInstance.Data + 8) == 0) {
        local_50.DataPtr = (int *)0x0;
        local_50.ArrayNum = 0;
      }
      else {
        if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this_00->PerChannelIndices).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar11 < *(int *)(pFVar5 + 8)) {
          uVar9 = ~uVar11 >> 0x1f;
        }
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
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar11 * 0x58 + *(longlong *)pFVar5),&local_50,
                   uVar4 & (uint)FVar3);
      }
      pFVar2 = (FTriangleID *)(local_50.DataPtr + local_50.ArrayNum);
      for (pFVar12 = (FTriangleID *)local_50.DataPtr; pFVar12 != pFVar2; pFVar12 = pFVar12 + 1) {
        local_58[0] = *pFVar12;
        if (local_58[0] != param_1) {
          pFVar6 = (FTriangleID *)(param_2->AllocatorInstance).Data;
          if (((pFVar6 <= local_58) && (local_58 < pFVar6 + *piVar1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar10 + 1;
          *(FTriangleID *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58[0];
        }
      }
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != local_40.DataPtr + local_40.ArrayNum);
  }
  return;
}

// GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_> @ 143647710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_>
          (FMeshDescription *this,FVertexID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  FEdgeID FVar1;
  FVertexID FVar2;
  TMeshAttributeArraySet<FVertexID> *this_00;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  FVertexID *pFVar8;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_02;
  uint uVar9;
  longlong lVar10;
  FEdgeID *pFVar11;
  TArrayView<FVertexID,int> local_58;
  TArrayView<FEdgeID_const_,int> local_48;
  
  FMeshElementIndexer::Find<FEdgeID>(&this->VertexToEdges,&local_48,(int)param_1,0);
  TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_2,local_48.ArrayNum,Default);
  uVar9 = 0;
  if (local_48.DataPtr != local_48.DataPtr + local_48.ArrayNum) {
    lVar10 = 0;
    pFVar11 = local_48.DataPtr;
    do {
      FVar1 = *pFVar11;
      this_00 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
      if ((this->EdgeVertices).Extent == 0) {
        if (((this_00->ArrayForChannels).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
        this_02 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_00->ArrayForChannels;
        if (FVar3 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
          this_02 = FVar3;
        }
        TAttributeArrayContainer<FVertexID>::Get
                  ((TAttributeArrayContainer<FVertexID> *)this_02,&local_58,(int)FVar1);
        pFVar8 = local_58.DataPtr;
      }
      else {
        this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
        pFVar8 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,(int)FVar1);
        local_58.ArrayNum = (this->EdgeVertices).Extent;
        local_58.DataPtr = pFVar8;
        if ((local_58.ArrayNum < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar5 = local_58.ArrayNum;
      if ((local_58.ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*pFVar8 == param_1) {
        if ((iVar5 < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar8 = pFVar8 + 1;
      }
      else if ((iVar5 < 1) &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
              bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = *pFVar8;
      uVar7 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar11 = pFVar11 + 1;
      *(FVertexID *)((param_2->AllocatorInstance).Data + lVar10) = FVar2;
      lVar10 = lVar10 + 4;
    } while (pFVar11 != local_48.DataPtr + local_48.ArrayNum);
  }
  return;
}

// FMeshDescription @ 143656f00

FMeshDescription * __thiscall
FMeshDescription::FMeshDescription(FMeshDescription *this,FMeshDescription *param_1)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  puVar1 = &(this->Elements).field_0x48;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  *(undefined8 *)&(this->Elements).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  (this->VertexInstanceVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeVertices).Extent = 1;
  (this->TriangleVertexInstances).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleVertexInstances).Extent = 1;
  (this->TrianglePolygons).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleEdges).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleEdges).Extent = 1;
  (this->TriangleVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleVertices).Extent = 1;
  (this->TriangleUVs).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleUVs).Extent = 1;
  (this->TrianglePolygonGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonPolygonGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexPositions).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayNum = 0;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayMax = 0;
  (this->VertexToVertexInstances).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToVertexInstances).ReferencingAttributeRef.Extent = 1;
  (this->VertexToVertexInstances).InitialSize = 1;
  (this->VertexToVertexInstances).ChunkBits = 8;
  (this->VertexToVertexInstances).ChunkMask = 0xff;
  (this->VertexToVertexInstances).bSuspended = false;
  (this->VertexToVertexInstances).bEverythingStale = true;
  (this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexToEdges).PerChannelIndices.ArrayNum = 0;
  (this->VertexToEdges).PerChannelIndices.ArrayMax = 0;
  (this->VertexToEdges).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToEdges).ReferencingAttributeRef.Extent = 1;
  (this->VertexToEdges).InitialSize = 1;
  (this->VertexToEdges).ChunkBits = 8;
  (this->VertexToEdges).ChunkMask = 0xff;
  (this->VertexToEdges).bSuspended = false;
  (this->VertexToEdges).bEverythingStale = true;
  (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->VertexInstanceToTriangles).InitialSize = 1;
  (this->VertexInstanceToTriangles).ChunkBits = 8;
  (this->VertexInstanceToTriangles).ChunkMask = 0xff;
  (this->VertexInstanceToTriangles).bSuspended = false;
  (this->VertexInstanceToTriangles).bEverythingStale = true;
  (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->EdgeToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->EdgeToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->EdgeToTriangles).InitialSize = 1;
  (this->EdgeToTriangles).ChunkBits = 8;
  (this->EdgeToTriangles).ChunkMask = 0xff;
  (this->EdgeToTriangles).bSuspended = false;
  (this->EdgeToTriangles).bEverythingStale = true;
  (this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->UVToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->UVToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->UVToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->UVToTriangles).InitialSize = 1;
  (this->UVToTriangles).ChunkBits = 8;
  (this->UVToTriangles).ChunkMask = 0xff;
  (this->UVToTriangles).bSuspended = false;
  (this->UVToTriangles).bEverythingStale = true;
  (this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->PolygonToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->PolygonToTriangles).InitialSize = 1;
  (this->PolygonToTriangles).ChunkBits = 8;
  (this->PolygonToTriangles).ChunkMask = 0xff;
  (this->PolygonToTriangles).bSuspended = false;
  (this->PolygonToTriangles).bEverythingStale = true;
  (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->PolygonGroupToTriangles).InitialSize = 1;
  (this->PolygonGroupToTriangles).ChunkBits = 8;
  (this->PolygonGroupToTriangles).ChunkMask = 0xff;
  (this->PolygonGroupToTriangles).bSuspended = false;
  (this->PolygonGroupToTriangles).bEverythingStale = true;
  (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayNum = 0;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.Extent = 1;
  (this->PolygonGroupToPolygons).InitialSize = 1;
  (this->PolygonGroupToPolygons).ChunkBits = 8;
  (this->PolygonGroupToPolygons).ChunkMask = 0xff;
  (this->PolygonGroupToPolygons).bSuspended = false;
  (this->PolygonGroupToPolygons).bEverythingStale = true;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Elements).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->Elements).field_0x38,
               *(int *)&(param_1->Elements).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  Cache(this);
  return this;
}

// FMeshDescription @ 143657220

FMeshDescription * __thiscall FMeshDescription::FMeshDescription(FMeshDescription *this)

{
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  *(undefined8 *)&(this->Elements).field_0x40 = 0;
  *(undefined4 *)&(this->Elements).field_0x48 = 0;
  (this->VertexInstanceVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeVertices).Extent = 1;
  (this->TriangleVertexInstances).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleVertexInstances).Extent = 1;
  (this->TrianglePolygons).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleEdges).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleEdges).Extent = 1;
  (this->TriangleVertices).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleVertices).Extent = 1;
  (this->TriangleUVs).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleUVs).Extent = 1;
  (this->TrianglePolygonGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonPolygonGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexPositions).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayNum = 0;
  (this->VertexToVertexInstances).PerChannelIndices.ArrayMax = 0;
  (this->VertexToVertexInstances).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToVertexInstances).ReferencingAttributeRef.Extent = 1;
  (this->VertexToVertexInstances).InitialSize = 1;
  (this->VertexToVertexInstances).ChunkBits = 8;
  (this->VertexToVertexInstances).ChunkMask = 0xff;
  (this->VertexToVertexInstances).bSuspended = false;
  (this->VertexToVertexInstances).bEverythingStale = true;
  (this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexToEdges).PerChannelIndices.ArrayNum = 0;
  (this->VertexToEdges).PerChannelIndices.ArrayMax = 0;
  (this->VertexToEdges).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexToEdges).ReferencingAttributeRef.Extent = 1;
  (this->VertexToEdges).InitialSize = 1;
  (this->VertexToEdges).ChunkBits = 8;
  (this->VertexToEdges).ChunkMask = 0xff;
  (this->VertexToEdges).bSuspended = false;
  (this->VertexToEdges).bEverythingStale = true;
  (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->VertexInstanceToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->VertexInstanceToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->VertexInstanceToTriangles).InitialSize = 1;
  (this->VertexInstanceToTriangles).ChunkBits = 8;
  (this->VertexInstanceToTriangles).ChunkMask = 0xff;
  (this->VertexInstanceToTriangles).bSuspended = false;
  (this->VertexInstanceToTriangles).bEverythingStale = true;
  (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->EdgeToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->EdgeToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->EdgeToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->EdgeToTriangles).InitialSize = 1;
  (this->EdgeToTriangles).ChunkBits = 8;
  (this->EdgeToTriangles).ChunkMask = 0xff;
  (this->EdgeToTriangles).bSuspended = false;
  (this->EdgeToTriangles).bEverythingStale = true;
  (this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->UVToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->UVToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->UVToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->UVToTriangles).InitialSize = 1;
  (this->UVToTriangles).ChunkBits = 8;
  (this->UVToTriangles).ChunkMask = 0xff;
  (this->UVToTriangles).bSuspended = false;
  (this->UVToTriangles).bEverythingStale = true;
  (this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->PolygonToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonToTriangles).ReferencingAttributeRef.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->PolygonToTriangles).InitialSize = 1;
  (this->PolygonToTriangles).ChunkBits = 8;
  (this->PolygonToTriangles).ChunkMask = 0xff;
  (this->PolygonToTriangles).bSuspended = false;
  (this->PolygonToTriangles).bEverythingStale = true;
  (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayNum = 0;
  (this->PolygonGroupToTriangles).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonGroupToTriangles).ReferencingAttributeRef.Extent = 1;
  (this->PolygonGroupToTriangles).InitialSize = 1;
  (this->PolygonGroupToTriangles).ChunkBits = 8;
  (this->PolygonGroupToTriangles).ChunkMask = 0xff;
  (this->PolygonGroupToTriangles).bSuspended = false;
  (this->PolygonGroupToTriangles).bEverythingStale = true;
  (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayNum = 0;
  (this->PolygonGroupToPolygons).PerChannelIndices.ArrayMax = 0;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.ArrayPtr =
       (FMeshAttributeArraySetBase *)0x0;
  (this->PolygonGroupToPolygons).ReferencingAttributeRef.Extent = 1;
  (this->PolygonGroupToPolygons).InitialSize = 1;
  (this->PolygonGroupToPolygons).ChunkBits = 8;
  (this->PolygonGroupToPolygons).ChunkMask = 0xff;
  (this->PolygonGroupToPolygons).bSuspended = false;
  (this->PolygonGroupToPolygons).bEverythingStale = true;
  Initialize(this);
  return this;
}

// ~FMeshDescription @ 143658320

void __thiscall FMeshDescription::~FMeshDescription(FMeshDescription *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)
             (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data,
             (this->PolygonGroupToPolygons).PerChannelIndices.ArrayNum);
  pFVar1 = (this->PolygonGroupToPolygons).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)
             (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data,
             (this->PolygonGroupToTriangles).PerChannelIndices.ArrayNum);
  pFVar1 = (this->PolygonGroupToTriangles).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)(this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data
             ,(this->PolygonToTriangles).PerChannelIndices.ArrayNum);
  pFVar1 = (this->PolygonToTriangles).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)(this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data,
             (this->UVToTriangles).PerChannelIndices.ArrayNum);
  pFVar1 = (this->UVToTriangles).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)(this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data,
             (this->EdgeToTriangles).PerChannelIndices.ArrayNum);
  pFVar1 = (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)
             (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data,
             (this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum);
  pFVar1 = (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)(this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data,
             (this->VertexToEdges).PerChannelIndices.ArrayNum);
  pFVar1 = (this->VertexToEdges).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
            ((FIndexPerChannel *)
             (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data,
             (this->VertexToVertexInstances).PerChannelIndices.ArrayNum);
  pFVar1 = (this->VertexToVertexInstances).PerChannelIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Elements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Elements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 143658930

FMeshDescription * __thiscall
FMeshDescription::operator=(FMeshDescription *this,FMeshDescription *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->Elements).field_0x8);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    if (*(longlong *)&(param_1->Elements).field_0x40 == 0) {
      *(undefined4 *)&(this->Elements).field_0x38 = *(undefined4 *)&(param_1->Elements).field_0x38;
    }
    pvVar1 = *(void **)&(this->Elements).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->Elements).field_0x40 = *(undefined8 *)&(param_1->Elements).field_0x40;
    *(undefined8 *)&(param_1->Elements).field_0x40 = 0;
    *(undefined4 *)&(this->Elements).field_0x48 = *(undefined4 *)&(param_1->Elements).field_0x48;
    *(undefined4 *)&(param_1->Elements).field_0x48 = 0;
  }
  this->VertexElements = param_1->VertexElements;
  this->VertexInstanceElements = param_1->VertexInstanceElements;
  this->UVElements = param_1->UVElements;
  this->EdgeElements = param_1->EdgeElements;
  this->TriangleElements = param_1->TriangleElements;
  this->PolygonElements = param_1->PolygonElements;
  this->PolygonGroupElements = param_1->PolygonGroupElements;
  (this->VertexInstanceVertices).ArrayPtr = (param_1->VertexInstanceVertices).ArrayPtr;
  uVar2 = (param_1->EdgeVertices).Extent;
  uVar3 = *(undefined4 *)&(param_1->EdgeVertices).field_0xc;
  (this->EdgeVertices).ArrayPtr = (param_1->EdgeVertices).ArrayPtr;
  (this->EdgeVertices).Extent = uVar2;
  *(undefined4 *)&(this->EdgeVertices).field_0xc = uVar3;
  uVar2 = (param_1->TriangleVertexInstances).Extent;
  uVar3 = *(undefined4 *)&(param_1->TriangleVertexInstances).field_0xc;
  (this->TriangleVertexInstances).ArrayPtr = (param_1->TriangleVertexInstances).ArrayPtr;
  (this->TriangleVertexInstances).Extent = uVar2;
  *(undefined4 *)&(this->TriangleVertexInstances).field_0xc = uVar3;
  (this->TrianglePolygons).ArrayPtr = (param_1->TrianglePolygons).ArrayPtr;
  uVar2 = (param_1->TriangleEdges).Extent;
  uVar3 = *(undefined4 *)&(param_1->TriangleEdges).field_0xc;
  (this->TriangleEdges).ArrayPtr = (param_1->TriangleEdges).ArrayPtr;
  (this->TriangleEdges).Extent = uVar2;
  *(undefined4 *)&(this->TriangleEdges).field_0xc = uVar3;
  uVar2 = (param_1->TriangleVertices).Extent;
  uVar3 = *(undefined4 *)&(param_1->TriangleVertices).field_0xc;
  (this->TriangleVertices).ArrayPtr = (param_1->TriangleVertices).ArrayPtr;
  (this->TriangleVertices).Extent = uVar2;
  *(undefined4 *)&(this->TriangleVertices).field_0xc = uVar3;
  uVar2 = (param_1->TriangleUVs).Extent;
  uVar3 = *(undefined4 *)&(param_1->TriangleUVs).field_0xc;
  (this->TriangleUVs).ArrayPtr = (param_1->TriangleUVs).ArrayPtr;
  (this->TriangleUVs).Extent = uVar2;
  *(undefined4 *)&(this->TriangleUVs).field_0xc = uVar3;
  (this->TrianglePolygonGroups).ArrayPtr = (param_1->TrianglePolygonGroups).ArrayPtr;
  (this->PolygonPolygonGroups).ArrayPtr = (param_1->PolygonPolygonGroups).ArrayPtr;
  (this->VertexPositions).ArrayPtr = (param_1->VertexPositions).ArrayPtr;
  FMeshElementIndexer::operator=(&this->VertexToVertexInstances,&param_1->VertexToVertexInstances);
  FMeshElementIndexer::operator=(&this->VertexToEdges,&param_1->VertexToEdges);
  FMeshElementIndexer::operator=
            (&this->VertexInstanceToTriangles,&param_1->VertexInstanceToTriangles);
  FMeshElementIndexer::operator=(&this->EdgeToTriangles,&param_1->EdgeToTriangles);
  FMeshElementIndexer::operator=(&this->UVToTriangles,&param_1->UVToTriangles);
  FMeshElementIndexer::operator=(&this->PolygonToTriangles,&param_1->PolygonToTriangles);
  FMeshElementIndexer::operator=(&this->PolygonGroupToTriangles,&param_1->PolygonGroupToTriangles);
  FMeshElementIndexer::operator=(&this->PolygonGroupToPolygons,&param_1->PolygonGroupToPolygons);
  return this;
}

// operator= @ 143658ba0

FMeshDescription * __thiscall
FMeshDescription::operator=(FMeshDescription *this,FMeshDescription *param_1)

{
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Elements).field_0x38,
               (int *)&(this->Elements).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Elements).field_0x38,
               *(int *)&(param_1->Elements).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
    Cache(this);
  }
  return this;
}

// operator() @ 14365e450

double __thiscall
`FMeshDescription::GetPolygonCornerAngleForVertex'::__l2::<lambda_1>::operator()
          (void *this,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FVertexID FVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  TMeshAttributeArrayBase<FVertexID> *pTVar17;
  FVertexID *pFVar18;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar19;
  TVector<float> *pTVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  
  lVar8 = *(longlong *)this;
  iVar4 = param_1->ArrayNum;
  uVar22 = (param_2 + -1 + iVar4) % iVar4;
  uVar23 = (param_2 + 1) % iVar4;
  uVar21 = 0;
  if ((int)uVar22 < iVar4) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    dVar24 = (double)(*pcVar9)();
    return dVar24;
  }
  iVar4 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar22 * 4);
  pTVar17 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<FVertexID> **)(lVar8 + 0x88),0);
  pFVar18 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar17,iVar4);
  lVar8 = *(longlong *)this;
  FVar5 = *pFVar18;
  uVar21 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar21 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    dVar24 = (double)(*pcVar9)();
    return dVar24;
  }
  iVar4 = *(int *)((param_1->AllocatorInstance).Data + (longlong)param_2 * 4);
  pTVar17 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<FVertexID> **)(lVar8 + 0x88),0);
  pFVar18 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar17,iVar4);
  lVar8 = *(longlong *)this;
  FVar6 = *pFVar18;
  uVar21 = 0;
  if ((int)uVar23 < param_1->ArrayNum) {
    uVar21 = ~uVar23 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    dVar24 = (double)(*pcVar9)();
    return dVar24;
  }
  iVar4 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar23 * 4);
  pTVar17 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<FVertexID> **)(lVar8 + 0x88),0);
  pFVar18 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar17,iVar4);
  FVar7 = *pFVar18;
  pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                        (*(longlong *)this + 0xf8),0);
  pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar19,(int)FVar5);
  fVar1 = (pTVar20->field0_0x0)._s_0.X;
  fVar2 = (pTVar20->field0_0x0)._s_0.Y;
  fVar3 = (pTVar20->field0_0x0)._s_0.Z;
  pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                        (*(longlong *)this + 0xf8),0);
  pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar19,(int)FVar6);
  dVar27 = (double)(pTVar20->field0_0x0)._s_0.Y;
  dVar24 = (double)(pTVar20->field0_0x0)._s_0.Z;
  dVar29 = (double)(pTVar20->field0_0x0)._s_0.X;
  pTVar19 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      (*(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)
                        (*(longlong *)this + 0xf8),0);
  pTVar20 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar19,(int)FVar7);
  dVar10 = (double)fVar2 - dVar27;
  dVar11 = (double)fVar3 - dVar24;
  dVar26 = (double)fVar1 - dVar29;
  dVar25 = dVar10 * dVar10 + dVar26 * dVar26 + dVar11 * dVar11;
  uVar12 = dVar10;
  uVar13 = dVar11;
  uVar14 = dVar26;
  if ((dVar25 != __real_3ff0000000000000) &&
     (uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar25)) {
    dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
    uVar12 = dVar10 * dVar25;
    uVar13 = dVar11 * dVar25;
    uVar14 = dVar26 * dVar25;
  }
  dVar27 = (double)(pTVar20->field0_0x0)._s_0.Y - dVar27;
  dVar24 = (double)(pTVar20->field0_0x0)._s_0.Z - dVar24;
  dVar29 = (double)(pTVar20->field0_0x0)._s_0.X - dVar29;
  dVar26 = dVar27 * dVar27 + dVar29 * dVar29 + dVar24 * dVar24;
  uVar28 = dVar27;
  uVar30 = dVar29;
  uVar15 = dVar24;
  if ((dVar26 != __real_3ff0000000000000) &&
     (uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar26)) {
    dVar26 = __real_3ff0000000000000 / SQRT(dVar26);
    uVar28 = dVar27 * dVar26;
    uVar30 = dVar29 * dVar26;
    uVar15 = dVar24 * dVar26;
  }
  dVar26 = (double)uVar28 * (double)uVar12 + (double)uVar30 * (double)uVar14 +
           (double)uVar15 * (double)uVar13;
  dVar24 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar26) && (dVar24 = dVar26, __real_3ff0000000000000 <= dVar26)) {
    dVar24 = __real_3ff0000000000000;
  }
  dVar24 = acos(dVar24);
  return dVar24;
}

// BuildIndexers @ 143662280

void __thiscall FMeshDescription::BuildIndexers(FMeshDescription *this)

{
  FMeshElementIndexer::Build(&this->VertexToVertexInstances);
  FMeshElementIndexer::Build(&this->VertexToEdges);
  FMeshElementIndexer::Build(&this->VertexInstanceToTriangles);
  FMeshElementIndexer::Build(&this->EdgeToTriangles);
  FMeshElementIndexer::Build(&this->UVToTriangles);
  FMeshElementIndexer::Build(&this->PolygonToTriangles);
  FMeshElementIndexer::Build(&this->PolygonGroupToTriangles);
  FMeshElementIndexer::Build(&this->PolygonGroupToPolygons);
  return;
}

// Cache @ 1436633d0

void __thiscall FMeshDescription::Cache(FMeshDescription *this)

{
  FMeshElementChannels *pFVar1;
  uint uVar2;
  undefined4 uVar3;
  FMeshElementTypeWrapper *pFVar4;
  FMeshElementContainer *pFVar5;
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *pTVar6;
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *pTVar7;
  TTuple<FName,FAttributesSetEntry> *pTVar8;
  FMeshAttributeArraySetBase *pFVar9;
  FMeshAttributeArraySetBase *pFVar10;
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_> local_18;
  
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,VerticesName);
  this->VertexElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,VertexInstancesName);
  this->VertexInstanceElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,UVsName);
  this->UVElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,EdgesName);
  this->EdgeElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,TrianglesName);
  this->TriangleElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,PolygonsName);
  this->PolygonElements = (pFVar4->Ptr).Ptr;
  pFVar4 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
           ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                   *)this,PolygonGroupsName);
  this->PolygonGroupElements = (pFVar4->Ptr).Ptr;
  pFVar5 = FMeshElementChannels::Get(this->TriangleElements,0);
  pTVar6 = FAttributesSetBase::RegisterIndexAttribute<FVertexID_[3],0>
                     (&pFVar5->Attributes,&local_18,MeshAttribute::Triangle::VertexIndex,1,
                      Mandatory|Transient);
  pFVar1 = this->TriangleElements;
  uVar2 = pTVar6->Extent;
  uVar3 = *(undefined4 *)&pTVar6->field_0xc;
  (this->TriangleVertices).ArrayPtr = pTVar6->ArrayPtr;
  (this->TriangleVertices).Extent = uVar2;
  *(undefined4 *)&(this->TriangleVertices).field_0xc = uVar3;
  pFVar5 = FMeshElementChannels::Get(pFVar1,0);
  pTVar7 = FAttributesSetBase::RegisterIndexAttribute<FEdgeID_[3],0>
                     (&pFVar5->Attributes,
                      (TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *)&local_18,
                      MeshAttribute::Triangle::EdgeIndex,1,Mandatory|Transient);
  pFVar1 = this->VertexInstanceElements;
  uVar2 = pTVar7->Extent;
  uVar3 = *(undefined4 *)&pTVar7->field_0xc;
  (this->TriangleEdges).ArrayPtr = pTVar7->ArrayPtr;
  (this->TriangleEdges).Extent = uVar2;
  *(undefined4 *)&(this->TriangleEdges).field_0xc = uVar3;
  pFVar5 = FMeshElementChannels::Get(pFVar1,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::VertexInstance::VertexIndex);
  pFVar10 = (FMeshAttributeArraySetBase *)0x0;
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar9 = (FMeshAttributeArraySetBase *)pFVar9->_padding_, pFVar9->Type != 4)) ||
     (pFVar9->Extent != 1)) {
    pFVar9 = pFVar10;
  }
  (this->VertexInstanceVertices).ArrayPtr = pFVar9;
  pFVar5 = FMeshElementChannels::Get(this->EdgeElements,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Edge::VertexIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
     (local_18.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar9->_padding_,
     (local_18.ArrayPtr)->Type != 4)) {
    local_18.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    local_18.Extent = 1;
  }
  else {
    local_18.Extent = (local_18.ArrayPtr)->Extent;
  }
  pFVar1 = this->TriangleElements;
  (this->EdgeVertices).ArrayPtr = local_18.ArrayPtr;
  *(ulonglong *)&(this->EdgeVertices).Extent = CONCAT44(local_18._12_4_,local_18.Extent);
  pFVar5 = FMeshElementChannels::Get(pFVar1,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Triangle::VertexInstanceIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
     (local_18.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar9->_padding_,
     (local_18.ArrayPtr)->Type != 4)) {
    local_18.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    local_18.Extent = 1;
  }
  else {
    local_18.Extent = (local_18.ArrayPtr)->Extent;
  }
  pFVar1 = this->TriangleElements;
  (this->TriangleVertexInstances).ArrayPtr = local_18.ArrayPtr;
  *(ulonglong *)&(this->TriangleVertexInstances).Extent = CONCAT44(local_18._12_4_,local_18.Extent);
  pFVar5 = FMeshElementChannels::Get(pFVar1,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Triangle::PolygonIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar9 = (FMeshAttributeArraySetBase *)pFVar9->_padding_, pFVar9->Type != 4)) ||
     (pFVar9->Extent != 1)) {
    pFVar9 = pFVar10;
  }
  (this->TrianglePolygons).ArrayPtr = pFVar9;
  pFVar5 = FMeshElementChannels::Get(this->TriangleElements,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Triangle::PolygonGroupIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar9 = (FMeshAttributeArraySetBase *)pFVar9->_padding_, pFVar9->Type != 4)) ||
     (pFVar9->Extent != 1)) {
    pFVar9 = pFVar10;
  }
  (this->TrianglePolygonGroups).ArrayPtr = pFVar9;
  pFVar5 = FMeshElementChannels::Get(this->TriangleElements,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Triangle::UVIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
     (local_18.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar9->_padding_,
     (local_18.ArrayPtr)->Type != 4)) {
    local_18.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    local_18.Extent = 1;
  }
  else {
    local_18.Extent = (local_18.ArrayPtr)->Extent;
  }
  pFVar1 = this->PolygonElements;
  (this->TriangleUVs).ArrayPtr = local_18.ArrayPtr;
  *(ulonglong *)&(this->TriangleUVs).Extent = CONCAT44(local_18._12_4_,local_18.Extent);
  pFVar5 = FMeshElementChannels::Get(pFVar1,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Polygon::PolygonGroupIndex);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar9 = (FMeshAttributeArraySetBase *)pFVar9->_padding_, pFVar9->Type != 4)) ||
     (pFVar9->Extent != 1)) {
    pFVar9 = pFVar10;
  }
  (this->PolygonPolygonGroups).ArrayPtr = pFVar9;
  pFVar5 = FMeshElementChannels::Get(this->VertexElements,0);
  pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::Vertex::Position);
  pFVar9 = (FMeshAttributeArraySetBase *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar9 = pFVar10;
  }
  if (((pFVar9 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar9 = (FMeshAttributeArraySetBase *)pFVar9->_padding_, pFVar9->Type != 1)) ||
     (pFVar9->Extent != 1)) {
    pFVar9 = pFVar10;
  }
  (this->VertexPositions).ArrayPtr = pFVar9;
  InitializeIndexers(this);
  return;
}

// Compact @ 143663d70

void __thiscall FMeshDescription::Compact(FMeshDescription *this,FElementIDRemappings *param_1)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->VertexElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewVertexIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewVertexInstanceIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->EdgeElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewEdgeIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->TriangleElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewTriangleIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->PolygonElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewPolygonIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
  FMeshElementContainer::Compact(pFVar1,&param_1->NewPolygonGroupIndexLookup);
  FixUpElementIDs(this,param_1);
  return;
}

// ComputeBoundingBox @ 143664130

TBox<double> * __thiscall
FMeshDescription::ComputeBoundingBox(FMeshDescription *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TElementIDs local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_58;
  TConstIterator local_38;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  local_res8.Array = &FMeshElementChannels::Get(this->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_58);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_res8,&local_38);
  while( true ) {
    if ((local_58.CurrentBitIndex == local_38.Iterator.CurrentBitIndex) &&
       (local_58.Array == local_38.Iterator.Array)) break;
    iVar4 = -1;
    if (local_58.CurrentBitIndex < (local_58.Array)->NumBits) {
      iVar4 = local_58.CurrentBitIndex;
    }
    this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         (this->VertexPositions).ArrayPtr,0);
    pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar4);
    dVar7 = (double)(pTVar3->field0_0x0)._s_0.X;
    dVar8 = (double)(pTVar3->field0_0x0)._s_0.Y;
    dVar6 = (double)(pTVar3->field0_0x0)._s_0.Z;
    if (__return_storage_ptr__->IsValid == '\0') {
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar7;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar8;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6;
      dVar7 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      __return_storage_ptr__->IsValid = '\x01';
      dVar6 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar7;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar8;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6;
    }
    else {
      dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
      dVar5 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
      if (dVar7 <= dVar1) {
        dVar1 = dVar7;
      }
      if (dVar8 <= dVar5) {
        dVar5 = dVar8;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1;
      dVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
      if (dVar6 <= dVar1) {
        dVar1 = dVar6;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar5;
      dVar5 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (dVar6 <= dVar2) {
        dVar6 = dVar2;
      }
      if (dVar5 <= dVar7) {
        dVar5 = dVar7;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1;
      dVar7 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (dVar7 <= dVar8) {
        dVar7 = dVar8;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar5;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
    }
    local_58.UnvisitedBitMask = local_58.UnvisitedBitMask & ~local_58._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_58);
  }
  return __return_storage_ptr__;
}

// ComputePolygonNormal @ 1436642c0

TVector<double> * __thiscall
FMeshDescription::ComputePolygonNormal
          (FMeshDescription *this,TVector<double> *__return_storage_ptr__,
          TArrayView<FVertexInstanceID_const_,int> *param_1)

{
  TArrayView<FVertexInstanceID_const_,int> local_38;
  TPlane<double> local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ComputePolygonPlane(this,&local_28,&local_38);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_28._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_28._padding_;
  return __return_storage_ptr__;
}

// ComputePolygonPlane @ 143664310

TPlane<double> * __thiscall
FMeshDescription::ComputePolygonPlane
          (FMeshDescription *this,TPlane<double> *__return_storage_ptr__,
          TArrayView<FVertexInstanceID_const_,int> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FVertexID FVar3;
  float fVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  TPlane<double> *pTVar10;
  TMeshAttributeArrayBase<FVertexID> *pTVar11;
  FVertexID *pFVar12;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar13;
  TVector<float> *pTVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float local_e8;
  float fStack_e4;
  float fStack_d4;
  double local_b8;
  
  iVar15 = param_1->ArrayNum;
  uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (0 < iVar15) {
    lVar16 = (longlong)(int)(iVar15 - 1U) * 4;
    lVar20 = 0;
    uVar19 = iVar15 - 1U;
    uVar17 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar19 < iVar15) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TPlane<double> *)(*pcVar5)();
        return pTVar10;
      }
      iVar15 = *(int *)(&param_1->DataPtr->field_0x0 + lVar16);
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar12 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar15);
      FVar3 = *pFVar12;
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (this->VertexPositions).ArrayPtr,0);
      pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar13,(int)FVar3);
      uVar2 = *(undefined8 *)&pTVar14->field0_0x0;
      fVar4 = (pTVar14->field0_0x0)._s_0.Z;
      uVar19 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TPlane<double> *)(*pcVar5)();
        return pTVar10;
      }
      iVar15 = *(int *)(&param_1->DataPtr->field_0x0 + lVar20);
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar12 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar15);
      FVar3 = *pFVar12;
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (this->VertexPositions).ArrayPtr,0);
      pTVar14 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar13,(int)FVar3);
      fStack_e4 = (float)((ulonglong)uVar2 >> 0x20);
      iVar15 = param_1->ArrayNum;
      uVar18 = uVar17 + 1;
      fVar22 = (float)*(undefined8 *)&pTVar14->field0_0x0;
      fVar1 = (pTVar14->field0_0x0)._s_0.Z;
      uVar23 = (float)uVar23 + fVar22;
      fStack_d4 = (float)((ulonglong)*(undefined8 *)&pTVar14->field0_0x0 >> 0x20);
      uVar25 = (float)uVar25 + fVar1;
      uVar24 = (float)uVar24 + fStack_d4;
      uVar8 = (double)uVar8 + (double)((fVar1 + fVar4) * (fStack_d4 - fStack_e4));
      local_e8 = (float)uVar2;
      uVar7 = (double)uVar7 + (double)((fVar22 + local_e8) * (fVar1 - fVar4));
      local_b8 = local_b8 + (double)((fVar22 - local_e8) * (fStack_e4 + fStack_d4));
      lVar16 = lVar20;
      lVar20 = lVar20 + 4;
      uVar19 = uVar17;
      uVar17 = uVar18;
    } while ((int)uVar18 < iVar15);
  }
  dVar21 = (double)uVar7 * (double)uVar7 + (double)uVar8 * (double)uVar8 + local_b8 * local_b8;
  if (__real_3e45798ee0000000 < dVar21) {
    dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
    uVar8 = (double)uVar8 * dVar21;
    uVar7 = (double)uVar7 * dVar21;
    local_b8 = local_b8 * dVar21;
  }
  auVar6._8_4_ = (int)uVar7;
  auVar6._0_8_ = uVar8;
  auVar6._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->_padding_ = uVar8;
  __return_storage_ptr__->_padding_ = auVar6._8_8_;
  __return_storage_ptr__->_padding_ = (longlong)local_b8;
  __return_storage_ptr__->W =
       ((double)(float)uVar24 * (double)uVar7 + (double)(float)uVar23 * (double)uVar8 +
       (double)(float)uVar25 * local_b8) / (double)iVar15;
  return __return_storage_ptr__;
}

// ComputePolygonTriangulation @ 1436646e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::ComputePolygonTriangulation(FMeshDescription *this,FPolygonID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  TArrayView<FTriangleID_const_,int> local_78;
  ForElementType<FVertexInstanceID> local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FVertexInstanceID_const_,int> local_58;
  TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_78,(int)param_1,0);
  if (local_78.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TriangleIDs.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                       ,0x5d0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_78.ArrayNum != 1) {
    local_48.ArrayMax = 8;
    local_48.AllocatorInstance.SecondaryData = (ForElementType<FVertexInstanceID>)0x0;
    local_48.ArrayNum = 0;
    GetPolygonVertexInstances<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (this,param_1,&local_48);
    RemovePolygonTriangles(this,param_1);
    iStack_60 = local_48.ArrayNum;
    local_68 = (ForElementType<FVertexInstanceID>)&local_48;
    if (local_48.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      local_68 = local_48.AllocatorInstance.SecondaryData;
    }
    if (local_48.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iStack_60;
    local_58.DataPtr = (FVertexInstanceID *)local_68;
    CreatePolygonTriangles(this,param_1,&local_58);
    if (local_48.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// CreateEdge @ 143664be0

FEdgeID __thiscall
FMeshDescription::CreateEdge(FMeshDescription *this,FVertexID param_1,FVertexID param_2)

{
  FEdgeID FVar1;
  FMeshElementContainer *this_00;
  undefined4 in_register_00000014;
  FVertexID in_R9D;
  
  this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
  FVar1 = (FEdgeID)FMeshElementContainer::Add(this_00);
  *(FEdgeID *)CONCAT44(in_register_00000014,param_1) = FVar1;
  CreateEdge_Internal(this,FVar1,param_2,in_R9D);
  return (FEdgeID)param_1;
}

// CreateEdge_Internal @ 143664ed0

void __thiscall
FMeshDescription::CreateEdge_Internal
          (FMeshDescription *this,FEdgeID param_1,FVertexID param_2,FVertexID param_3)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FVertexID,int> local_28;
  
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
            (&this->EdgeVertices,&local_28,(int)param_1);
  if (local_28.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *local_28.DataPtr = param_2;
  if (local_28.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.DataPtr[1] = param_3;
  FMeshElementIndexer::AddReferenceToKey(&this->VertexToEdges,(int)param_2,(int)param_1,0);
  FMeshElementIndexer::AddReferenceToKey(&this->VertexToEdges,(int)param_3,(int)param_1,0);
  return;
}

// CreatePolygonTriangles @ 1436651b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescription::CreatePolygonTriangles
          (FMeshDescription *this,FPolygonID param_1,
          TArrayView<FVertexInstanceID_const_,int> *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  FVertexInstanceID FVar3;
  FVertexInstanceID FVar4;
  FVertexID FVar5;
  float fVar6;
  FVertexID FVar7;
  FMeshAttributeArraySetBase *pFVar8;
  TMeshAttributeArraySet<FVertexID> *this_00;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FMeshElementIndexer *pFVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  FEdgeID FVar26;
  FPolygonGroupID *pFVar27;
  FMeshElementContainer *pFVar28;
  FVertexInstanceID *pFVar29;
  FPolygonID *pFVar30;
  TMeshAttributeArrayBase<FVertexID> *pTVar31;
  FVertexID *pFVar32;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  ForElementType<FMeshElementContainer> this_02;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_03;
  FMeshAttributeArraySetBase *pFVar37;
  ulonglong uVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  uint uVar42;
  ForElementType<FMeshElementContainer> FVar43;
  FPolygonGroupID FVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  int iVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  uint local_268;
  int local_260;
  TArray<int,TSizedDefaultAllocator<32>_> local_258;
  ForAnyElementType local_248;
  undefined8 local_240;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  FEdgeID local_228;
  FEdgeID local_224;
  TArrayView<FVertexInstanceID,int> local_220;
  int local_210;
  FPolygonGroupID local_20c;
  TArrayView<FVertexInstanceID,int> local_208;
  ulonglong local_1f8;
  ulonglong local_1f0;
  FMeshElementIndexer *local_1e8;
  TArrayView<FVertexID,int> local_1e0;
  TArrayView<FEdgeID,int> local_1d0;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  double local_190;
  double local_188;
  double local_180;
  TArrayView<FVertexID,int> local_178;
  TArrayView<FEdgeID,int> local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  double local_128;
  TArrayView<FVertexInstanceID_const_,int> local_118;
  TPlane<double> local_108 [6];
  
  pFVar27 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  FVar44 = *pFVar27;
  uVar34 = param_2->ArrayNum;
  local_20c = FVar44;
  if (uVar34 == 3) {
    pFVar28 = FMeshElementChannels::Get(this->TriangleElements,0);
    iVar21 = FMeshElementContainer::Add(pFVar28);
    TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
              (&this->TriangleVertexInstances,&local_208,iVar21);
    pFVar29 = TArrayView<FVertexInstanceID_const_,int>::operator[](param_2,0);
    iVar25 = local_208.ArrayNum;
    uVar40 = 0;
    FVar3 = *pFVar29;
    if ((local_208.ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *local_208.DataPtr = FVar3;
    pFVar29 = TArrayView<FVertexInstanceID_const_,int>::operator[](param_2,1);
    FVar3 = *pFVar29;
    if ((iVar25 < 2) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_208.DataPtr[1] = FVar3;
    pFVar29 = TArrayView<FVertexInstanceID_const_,int>::operator[](param_2,2);
    FVar3 = *pFVar29;
    if ((iVar25 < 3) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_208.DataPtr[2] = FVar3;
    pFVar27 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                        (&this->TrianglePolygonGroups,iVar21);
    *pFVar27 = FVar44;
    FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToTriangles,(int)FVar44,iVar21,0);
    pFVar30 = TMeshAttributesRef<int,FPolygonID>::operator[](&this->TrianglePolygons,iVar21);
    *pFVar30 = param_1;
    FMeshElementIndexer::AddReferenceToKey(&this->PolygonToTriangles,(int)param_1,iVar21,0);
    TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
              (&this->TriangleVertices,&local_178,iVar21);
    TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
              (&this->TriangleEdges,&local_168,iVar21);
    local_1e8 = &this->EdgeToTriangles;
    uVar38 = uVar40;
    uVar45 = uVar40;
    do {
      iVar48 = (int)uVar45;
      if ((iVar25 <= iVar48) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_1f0 = uVar38 + 1;
      FVar3 = local_208.DataPtr[uVar38];
      uVar34 = 0;
      uVar45 = uVar40;
      if (iVar48 != 2) {
        uVar34 = iVar48 + 1;
        uVar45 = local_1f0;
      }
      uVar22 = 0;
      if ((int)uVar34 < iVar25) {
        uVar22 = ~uVar34 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar4 = local_208.DataPtr[uVar45];
      pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar32 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,(int)FVar3);
      FVar5 = *pFVar32;
      pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,(int)FVar4);
      if ((local_178.ArrayNum <= iVar48) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_178.DataPtr[uVar38] = FVar5;
      GetVertexPairEdge(this,SUB84(&local_228,0),FVar5);
      FVar26 = local_228;
      if ((local_228 == (FEdgeID)0xffffffff) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("EdgeID != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                              ,0x650,L""), bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((local_168.ArrayNum <= iVar48) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_168.DataPtr[uVar38] = FVar26;
      FMeshElementIndexer::AddReferenceToKey(&this->VertexInstanceToTriangles,(int)FVar3,iVar21,0);
      FMeshElementIndexer::AddReferenceToKey(local_1e8,(int)FVar26,iVar21,0);
      uVar45 = (ulonglong)(iVar48 + 1U);
      uVar38 = local_1f0;
      iVar25 = local_208.ArrayNum;
    } while ((int)(iVar48 + 1U) < 3);
  }
  else {
    local_118.DataPtr = param_2->DataPtr;
    local_118.ArrayNum = param_2->ArrayNum;
    local_118._12_4_ = *(undefined4 *)&param_2->field_0xc;
    ComputePolygonPlane(this,local_108,&local_118);
    uVar40 = (ulonglong)(int)uVar34;
    uVar45 = 0;
    uVar22 = 0;
    local_188 = (double)local_108[0]._padding_;
    local_190 = (double)local_108[0]._padding_;
    local_180 = (double)local_108[0]._padding_;
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0;
    local_248.Data = (FScriptContainerElement *)0x0;
    local_240 = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_238,uVar34,No);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_258,uVar34,No);
    if ((int)local_240 < (int)uVar34) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar34 - (int)local_240,&local_248,(int *)&local_240,
                 (int *)((longlong)&local_240 + 4));
    }
    else {
      if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
      if ((int)uVar34 < (int)local_240) {
        uVar35 = (int)local_240 - uVar34;
        if ((int)(uVar35 | uVar34) < 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (uVar35 != 0) {
          iVar21 = ((int)local_240 - uVar35) - uVar34;
          iVar25 = (int)local_240;
          if (iVar21 != 0) {
            memmove(local_248.Data + uVar40 * 0xc,
                    local_248.Data + uVar40 * 0xc + (longlong)(int)uVar35 * 0xc,
                    (longlong)iVar21 * 0xc);
            iVar25 = (int)local_240;
          }
          local_240 = CONCAT44(local_240._4_4_,iVar25 - uVar35);
        }
      }
    }
    uVar35 = 0;
    if (0 < (int)uVar34) {
      local_1f8 = 0;
      uVar38 = uVar45;
      uVar46 = uVar45;
      do {
        uVar41 = (uint)uVar38;
        uVar39 = ~uVar41 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar41 < local_238.ArrayNum) {
          uVar23 = uVar39;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(uint *)(local_238.AllocatorInstance.Data + uVar46 * 4) = uVar41 - 1;
        uVar23 = 0;
        if ((int)uVar41 < local_258.ArrayNum) {
          uVar23 = uVar39;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(uint *)(local_258.AllocatorInstance.Data + uVar46 * 4) = uVar41 + 1;
        uVar23 = uVar35;
        if ((int)uVar41 < param_2->ArrayNum) {
          uVar23 = uVar39;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar3 = param_2->DataPtr[uVar46];
        pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->VertexInstanceVertices).ArrayPtr,0);
        pFVar32 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,(int)FVar3);
        FVar5 = *pFVar32;
        this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (this->VertexPositions).ArrayPtr,0);
        pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (this_01,(int)FVar5);
        uVar2 = *(undefined8 *)&pTVar33->field0_0x0;
        fVar6 = (pTVar33->field0_0x0)._s_0.Z;
        uVar23 = uVar35;
        if ((int)uVar41 < (int)local_240) {
          uVar23 = uVar39;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar46 = uVar46 + 1;
        uVar38 = (ulonglong)(uVar41 + 1);
        *(undefined8 *)(local_248.Data + local_1f8) = uVar2;
        *(float *)(local_248.Data + local_1f8 + 8) = fVar6;
        local_1f8 = local_1f8 + 0xc;
      } while ((longlong)uVar46 < (longlong)uVar40);
      uVar40 = (ulonglong)uVar34;
      FVar44 = local_20c;
    }
    if ((local_238.ArrayNum < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar39 = (uint)uVar40 - 1;
    *(uint *)local_238.AllocatorInstance.Data = uVar39;
    uVar23 = uVar35;
    if ((int)uVar39 < local_258.ArrayNum) {
      uVar23 = ~uVar39 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar23 = 0;
    *(undefined4 *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar39 * 4) = 0;
    dVar18 = __real_3e45798ee0000000;
    fVar6 = __real_322bcc77;
    dVar17 = __real_3ff0000000000000;
    uVar38 = uVar45;
    uVar39 = (uint)uVar40;
    while (2 < (int)uVar39) {
      local_268 = 0;
      uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
      uVar55 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X >> 0x20);
      uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar53 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y >> 0x20);
      uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar51 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z >> 0x20);
      uVar46 = uVar45;
      while( true ) {
        uVar41 = (uint)uVar38;
        uVar39 = 0;
        if (((int)uVar40 < 4) || ((int)uVar40 <= (int)uVar46)) break;
        uVar42 = ~uVar41 >> 0x1f;
        uVar24 = uVar22;
        if ((int)uVar41 < local_238.ArrayNum) {
          uVar24 = uVar42;
        }
        if (uVar24 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        lVar47 = (longlong)(int)uVar41;
        uVar41 = *(uint *)(local_238.AllocatorInstance.Data + lVar47 * 4);
        lVar36 = (longlong)(int)uVar41;
        uVar24 = uVar22;
        if ((int)uVar41 < (int)local_240) {
          uVar24 = ~uVar41 >> 0x1f;
        }
        if (uVar24 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        local_1a8._s_0.X = (double)*(float *)(local_248.Data + lVar36 * 0xc);
        local_1a8._s_0.Y = (double)*(float *)(local_248.Data + lVar36 * 0xc + 4);
        local_1a8._s_0.Z = (double)*(float *)(local_248.Data + lVar36 * 0xc + 8);
        uVar41 = uVar22;
        if ((int)uVar23 < (int)local_240) {
          uVar41 = uVar42;
        }
        if (uVar41 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        local_1c0._s_0.X = (double)*(float *)(local_248.Data + lVar47 * 0xc);
        local_1c0._s_0.Y = (double)*(float *)(local_248.Data + lVar47 * 0xc + 4);
        local_1c0._s_0.Z = (double)*(float *)(local_248.Data + lVar47 * 0xc + 8);
        uVar41 = uVar22;
        if ((int)uVar23 < local_258.ArrayNum) {
          uVar41 = uVar42;
        }
        if (uVar41 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar41 = *(uint *)(local_258.AllocatorInstance.Data + lVar47 * 4);
        lVar36 = (longlong)(int)uVar41;
        uVar24 = uVar22;
        if ((int)uVar41 < (int)local_240) {
          uVar24 = ~uVar41 >> 0x1f;
        }
        if (uVar24 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        local_140._s_0.Z = (double)*(float *)(local_248.Data + lVar36 * 0xc + 8);
        local_140._s_0.X = (double)*(float *)(local_248.Data + lVar36 * 0xc);
        local_140._s_0.Y = (double)*(float *)(local_248.Data + lVar36 * 0xc + 4);
        dVar13 = (local_140._s_0.Y - local_1a8._s_0.Y) * (local_1c0._s_0.Z - local_1a8._s_0.Z) -
                 (local_140._s_0.Z - local_1a8._s_0.Z) * (local_1c0._s_0.Y - local_1a8._s_0.Y);
        dVar11 = (local_140._s_0.Z - local_1a8._s_0.Z) * (local_1c0._s_0.X - local_1a8._s_0.X) -
                 (local_140._s_0.X - local_1a8._s_0.X) * (local_1c0._s_0.Z - local_1a8._s_0.Z);
        dVar12 = (local_140._s_0.X - local_1a8._s_0.X) * (local_1c0._s_0.Y - local_1a8._s_0.Y) -
                 (local_140._s_0.Y - local_1a8._s_0.Y) * (local_1c0._s_0.X - local_1a8._s_0.X);
        dVar49 = dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12;
        dVar14 = dVar13;
        dVar15 = dVar11;
        dVar16 = dVar12;
        if ((dVar49 != dVar17) &&
           (dVar14 = (double)CONCAT44(uVar55,uVar54), dVar15 = (double)CONCAT44(uVar53,uVar52),
           dVar16 = (double)CONCAT44(uVar51,uVar50), dVar18 <= dVar49)) {
          local_128 = dVar17 / SQRT(dVar49);
          dVar14 = dVar13 * local_128;
          dVar15 = dVar11 * local_128;
          dVar16 = dVar12 * local_128;
        }
        if (__real_0000000000000000 < dVar15 * local_190 + dVar14 * local_188 + dVar16 * local_180)
        {
          uVar41 = uVar22;
          if ((int)uVar23 < local_258.ArrayNum) {
            uVar41 = uVar42;
          }
          if ((uVar41 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar41 = *(uint *)(local_258.AllocatorInstance.Data + lVar47 * 4);
          uVar24 = uVar22;
          if ((int)uVar41 < local_258.ArrayNum) {
            uVar24 = ~uVar41 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar24 = *(uint *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar41 * 4);
          while( true ) {
            uVar41 = uVar22;
            if ((int)uVar24 < (int)local_240) {
              uVar41 = ~uVar24 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar36 = (longlong)(int)uVar24;
            local_158._s_0.X = (double)*(float *)(local_248.Data + lVar36 * 0xc);
            local_158._s_0.Y = (double)*(float *)(local_248.Data + lVar36 * 0xc + 4);
            local_158._s_0.Z = (double)*(float *)(local_248.Data + lVar36 * 0xc + 8);
            bVar20 = PointInTriangle((TVector<double> *)&local_1a8._s_0,
                                     (TVector<double> *)&local_1c0._s_0,
                                     (TVector<double> *)&local_140._s_0,
                                     (TVector<double> *)&local_158._s_0,fVar6);
            if (bVar20) break;
            uVar41 = uVar39;
            if ((int)uVar24 < local_258.ArrayNum) {
              uVar41 = ~uVar24 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar24 = *(uint *)(local_258.AllocatorInstance.Data + lVar36 * 4);
            uVar41 = uVar39;
            if ((int)uVar23 < local_238.ArrayNum) {
              uVar41 = uVar42;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar41 = uVar23;
            if (uVar24 == *(uint *)(local_238.AllocatorInstance.Data + lVar47 * 4))
            goto LAB_14366600a;
          }
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        }
        uVar39 = uVar35;
        if ((int)uVar23 < local_258.ArrayNum) {
          uVar39 = uVar42;
        }
        if (uVar39 == 0) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar54 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar55 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar53 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar50 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar51 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar40 = (ulonglong)uVar34;
        uVar23 = *(uint *)(local_258.AllocatorInstance.Data + lVar47 * 4);
        uVar38 = (ulonglong)uVar23;
        local_268 = local_268 + 1;
        uVar46 = (ulonglong)local_268;
      }
LAB_14366600a:
      this_02 = (ForElementType<FMeshElementContainer>)this->TriangleElements;
      if ((*(int *)((longlong)this_02 + 0x88) < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(ForElementType<FMeshElementContainer> *)((longlong)this_02 + 0x80) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        this_02 = *(ForElementType<FMeshElementContainer> *)((longlong)this_02 + 0x80);
      }
      if (*(int *)((longlong)this_02 + 0x78) < 1) {
        iVar25 = TBitArray<FDefaultBitArrayAllocator>::Add
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_02,true);
        local_210 = iVar25;
        FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)this_02 + 0x20),iVar25);
      }
      else {
        iVar25 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                           ((TBitArray<FDefaultBitArrayAllocator> *)this_02,false,0,
                            *(int *)((longlong)this_02 + 0x18));
        local_210 = iVar25;
        if (iVar25 == -1) {
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementContainer.h"
                              ,0x47,L"");
          if (bVar20) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(int *)((longlong)this_02 + 0x78) = *(int *)((longlong)this_02 + 0x78) + -1;
        }
        else {
          if (((iVar25 < 0) || (*(int *)((longlong)this_02 + 0x18) <= iVar25)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar43 = this_02;
          if (*(ForElementType<FMeshElementContainer> *)((longlong)this_02 + 0x10) !=
              (ForElementType<FMeshElementContainer>)0x0) {
            FVar43 = *(ForElementType<FMeshElementContainer> *)((longlong)this_02 + 0x10);
          }
          iVar21 = iVar25;
          if (iVar25 < 0) {
            iVar21 = iVar25 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar43 + (longlong)(iVar21 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar25 & 0x1f);
          TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_02);
          *(int *)((longlong)this_02 + 0x78) = *(int *)((longlong)this_02 + 0x78) + -1;
        }
      }
      pFVar8 = (this->TriangleVertexInstances).ArrayPtr;
      if ((this->TriangleVertexInstances).Extent == 0) {
        if (((int)pFVar8[2].Type < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar37 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        TAttributeArrayContainer<FVertexInstanceID>::Get
                  ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar37,&local_220,iVar25);
      }
      else {
        if (((int)pFVar8[2].Type < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar37 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        local_220.DataPtr =
             TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar37,iVar25);
        local_220.ArrayNum = (this->TriangleVertexInstances).Extent;
        if ((local_220.ArrayNum < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar42 = ~uVar41 >> 0x1f;
      uVar24 = uVar35;
      if ((int)uVar41 < local_238.ArrayNum) {
        uVar24 = uVar42;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar36 = (longlong)(int)uVar41;
      uVar41 = *(uint *)(local_238.AllocatorInstance.Data + lVar36 * 4);
      uVar24 = uVar39;
      if ((int)uVar41 < param_2->ArrayNum) {
        uVar24 = ~uVar41 >> 0x1f;
      }
      local_1e8 = (FMeshElementIndexer *)lVar36;
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar3 = param_2->DataPtr[(int)uVar41];
      if ((local_220.ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *local_220.DataPtr = FVar3;
      uVar41 = uVar39;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar3 = param_2->DataPtr[lVar36];
      if ((local_220.ArrayNum < 2) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_220.DataPtr[1] = FVar3;
      uVar41 = uVar22;
      if ((int)uVar23 < local_258.ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar41 = *(uint *)(local_258.AllocatorInstance.Data + lVar36 * 4);
      uVar24 = uVar22;
      if ((int)uVar41 < param_2->ArrayNum) {
        uVar24 = ~uVar41 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar3 = param_2->DataPtr[(int)uVar41];
      if ((local_220.ArrayNum < 3) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_220.DataPtr[2] = FVar3;
      pFVar8 = (this->TrianglePolygonGroups).ArrayPtr;
      if (((int)pFVar8[2].Type < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar37 = pFVar8 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
      }
      pFVar27 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar37,iVar25);
      *pFVar27 = FVar44;
      FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToTriangles,(int)FVar44,iVar25,0);
      pFVar8 = (this->TrianglePolygons).ArrayPtr;
      if (((int)pFVar8[2].Type < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar37 = pFVar8 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
      }
      pFVar30 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonID> *)pFVar37,iVar25);
      *pFVar30 = param_1;
      FMeshElementIndexer::AddReferenceToKey(&this->PolygonToTriangles,(int)param_1,iVar25,0);
      this_00 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
      if ((this->TriangleVertices).Extent == 0) {
        if (((this_00->ArrayForChannels).ArrayNum < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar9 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
        this_03 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_00->ArrayForChannels;
        if (FVar9 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
          this_03 = FVar9;
        }
        TAttributeArrayContainer<FVertexID>::Get
                  ((TAttributeArrayContainer<FVertexID> *)this_03,&local_1e0,iVar25);
      }
      else {
        pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
        local_1e0.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,iVar25);
        local_1e0.ArrayNum = (this->TriangleVertices).Extent;
        if ((local_1e0.ArrayNum < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      pFVar8 = (this->TriangleEdges).ArrayPtr;
      if ((this->TriangleEdges).Extent == 0) {
        if (((int)pFVar8[2].Type < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar37 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar37,&local_1d0,iVar25);
      }
      else {
        if (((int)pFVar8[2].Type < 1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar37 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar37 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        local_1d0.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar37,iVar25);
        local_1d0.ArrayNum = (this->TriangleEdges).Extent;
        if ((local_1d0.ArrayNum < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      local_260 = 0;
      uVar38 = uVar45;
      uVar40 = uVar45;
      do {
        iVar25 = (int)uVar38;
        if ((local_220.ArrayNum <= iVar25) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_1f0 = uVar40 * 4;
        FVar3 = local_220.DataPtr[uVar40];
        uVar40 = uVar40 + 1;
        uVar41 = uVar22;
        uVar38 = uVar45;
        if (iVar25 != 2) {
          uVar41 = iVar25 + 1;
          uVar38 = uVar40;
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,iVar25 + 1);
        uVar24 = uVar22;
        if ((int)uVar41 < local_220.ArrayNum) {
          uVar24 = ~uVar41 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar4 = local_220.DataPtr[uVar38];
        pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->VertexInstanceVertices).ArrayPtr,0);
        pFVar32 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,(int)FVar3);
        FVar5 = *pFVar32;
        pTVar31 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->VertexInstanceVertices).ArrayPtr,0);
        pFVar32 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar31,(int)FVar4);
        FVar7 = *pFVar32;
        if ((local_1e0.ArrayNum <= local_260) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(FVertexID *)(&(local_1e0.DataPtr)->field_0x0 + local_1f0) = FVar5;
        GetVertexPairEdge(this,SUB84(&local_224,0),FVar5);
        if (local_224 == (FEdgeID)0xffffffff) {
          pFVar28 = FMeshElementChannels::Get(this->EdgeElements,0);
          FVar26 = (FEdgeID)FMeshElementContainer::Add(pFVar28);
          CreateEdge_Internal(this,FVar26,FVar5,FVar7);
          local_224 = FVar26;
        }
        FVar26 = local_224;
        if ((local_1d0.ArrayNum <= local_260) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(FEdgeID *)(&(local_1d0.DataPtr)->field_0x0 + local_1f0) = FVar26;
        FMeshElementIndexer::AddReferenceToKey
                  (&this->VertexInstanceToTriangles,(int)FVar3,local_210,0);
        FMeshElementIndexer::AddReferenceToKey(&this->EdgeToTriangles,(int)FVar26,local_210,0);
        pFVar19 = local_1e8;
        FVar44 = local_20c;
        local_260 = (int)local_1f8;
        uVar38 = local_1f8 & 0xffffffff;
      } while ((int)local_1f8 < 3);
      uVar41 = uVar22;
      if ((int)uVar23 < local_258.ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar50 = *(undefined4 *)(local_258.AllocatorInstance.Data + (longlong)pFVar19 * 4);
      uVar41 = uVar22;
      if ((int)uVar23 < local_238.ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar41 = *(uint *)(local_238.AllocatorInstance.Data + (longlong)pFVar19 * 4);
      uVar24 = uVar22;
      if ((int)uVar41 < local_258.ArrayNum) {
        uVar24 = ~uVar41 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) = uVar50;
      uVar41 = uVar22;
      if ((int)uVar23 < local_238.ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar50 = *(undefined4 *)(local_238.AllocatorInstance.Data + (longlong)pFVar19 * 4);
      uVar41 = uVar39;
      if ((int)uVar23 < local_258.ArrayNum) {
        uVar41 = uVar42;
      }
      if ((uVar41 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar41 = *(uint *)(local_258.AllocatorInstance.Data + (longlong)pFVar19 * 4);
      uVar24 = uVar39;
      if ((int)uVar41 < local_238.ArrayNum) {
        uVar24 = ~uVar41 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar34 = uVar34 - 1;
      *(undefined4 *)(local_238.AllocatorInstance.Data + (longlong)(int)uVar41 * 4) = uVar50;
      if ((int)uVar23 < local_238.ArrayNum) {
        uVar39 = uVar42;
      }
      if ((uVar39 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar23 = *(uint *)(local_238.AllocatorInstance.Data + (longlong)pFVar19 * 4);
      uVar38 = (ulonglong)uVar23;
      uVar40 = (ulonglong)uVar34;
      uVar39 = uVar34;
    }
    if (local_248.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data);
    }
    if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.AllocatorInstance.Data);
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
  }
  return;
}

// CreatePolygon_Internal @ 143666e30

void __thiscall
FMeshDescription::CreatePolygon_Internal
          (FMeshDescription *this,FPolygonID param_1,FPolygonGroupID param_2,
          TArrayView<FVertexInstanceID_const_,int> *param_3,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  uint uVar2;
  FVertexInstanceID FVar3;
  FVertexInstanceID FVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FEdgeID *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FEdgeID FVar12;
  int iVar13;
  FPolygonGroupID *pFVar14;
  TMeshAttributeArrayBase<FVertexID> *pTVar15;
  FVertexID *pFVar16;
  FMeshElementContainer *this_00;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  FEdgeID local_68 [4];
  TArrayView<FVertexInstanceID_const_,int> local_58;
  
  if (param_4 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  if ((param_2 == (FPolygonGroupID)0xffffffff) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PolygonGroupID != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                         ,0x3cd,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  *pFVar14 = param_2;
  FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToPolygons,(int)param_2,(int)param_1,0);
  uVar2 = param_3->ArrayNum;
  uVar18 = 0;
  if (0 < (int)uVar2) {
    lVar17 = 0;
    uVar19 = (longlong)(int)uVar2;
    do {
      uVar10 = 0;
      if ((int)uVar18 < (int)uVar2) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = uVar18 + 1;
      lVar1 = lVar17 + 1;
      FVar3 = param_3->DataPtr[lVar17];
      lVar17 = 0;
      if (uVar18 != (uint)uVar19) {
        lVar17 = lVar1;
      }
      uVar10 = 0;
      if (uVar18 != (uint)uVar19) {
        uVar10 = uVar18;
      }
      uVar11 = 0;
      if ((int)uVar10 < (int)uVar2) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar4 = param_3->DataPtr[lVar17];
      pTVar15 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar16 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar15,(int)FVar3);
      FVar5 = *pFVar16;
      pTVar15 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->VertexInstanceVertices).ArrayPtr,0);
      pFVar16 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar15,(int)FVar4);
      FVar6 = *pFVar16;
      GetVertexPairEdge(this,SUB84(local_68,0),FVar5);
      if (local_68[0] == (FEdgeID)0xffffffff) {
        this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
        FVar12 = (FEdgeID)FMeshElementContainer::Add(this_00);
        CreateEdge_Internal(this,FVar12,FVar5,FVar6);
        local_68[0] = FVar12;
        if (param_4 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar7 = (FEdgeID *)(param_4->AllocatorInstance).Data;
          if (((pFVar7 <= local_68) && (local_68 < pFVar7 + param_4->ArrayMax)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = param_4->ArrayNum;
          if (iVar13 == param_4->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar13 + 1;
          *(FEdgeID *)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_68[0];
        }
      }
      uVar19 = (ulonglong)uVar2;
      lVar17 = lVar1;
    } while (lVar1 < (int)uVar2);
  }
  local_58.DataPtr = param_3->DataPtr;
  local_58.ArrayNum = param_3->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
  CreatePolygonTriangles(this,param_1,&local_58);
  return;
}

// CreateTriangle_Internal @ 1436673c0

void __thiscall
FMeshDescription::CreateTriangle_Internal
          (FMeshDescription *this,FTriangleID param_1,FPolygonGroupID param_2,
          TArrayView<FVertexInstanceID_const_,int> *param_3,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  FVertexInstanceID FVar2;
  FVertexInstanceID FVar3;
  FVertexID FVar4;
  FVertexID FVar5;
  FEdgeID *pFVar6;
  code *pcVar7;
  bool bVar8;
  FPolygonID FVar9;
  uint uVar10;
  FEdgeID FVar11;
  int iVar12;
  FPolygonGroupID *pFVar13;
  FMeshElementContainer *pFVar14;
  FPolygonID *pFVar15;
  TMeshAttributeArrayBase<FVertexID> *pTVar16;
  FVertexID *pFVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FEdgeID local_78 [2];
  TArrayView<FVertexInstanceID,int> local_70;
  TArrayView<FVertexID,int> local_60;
  TArrayView<FEdgeID,int> local_50;
  
  if (param_4 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
            (&this->TriangleVertexInstances,&local_70,(int)param_1);
  if ((param_3->ArrayNum != 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexInstanceIDs.Num() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                         ,0x319,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_3->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar2 = *param_3->DataPtr;
  if ((local_70.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *local_70.DataPtr = FVar2;
  if ((param_3->ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar2 = param_3->DataPtr[1];
  if ((local_70.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_70.DataPtr[1] = FVar2;
  if ((param_3->ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar2 = param_3->DataPtr[2];
  if ((local_70.ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_70.DataPtr[2] = FVar2;
  pFVar13 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->TrianglePolygonGroups,(int)param_1);
  *pFVar13 = param_2;
  FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToTriangles,(int)param_2,(int)param_1,0)
  ;
  pFVar14 = FMeshElementChannels::Get(this->PolygonElements,0);
  FVar9 = (FPolygonID)FMeshElementContainer::Add(pFVar14);
  pFVar13 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)FVar9);
  *pFVar13 = param_2;
  FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToPolygons,(int)param_2,(int)FVar9,0);
  pFVar15 = TMeshAttributesRef<int,FPolygonID>::operator[](&this->TrianglePolygons,(int)param_1);
  *pFVar15 = FVar9;
  FMeshElementIndexer::AddReferenceToKey(&this->PolygonToTriangles,(int)FVar9,(int)param_1,0);
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
            (&this->TriangleVertices,&local_60,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&local_50,(int)param_1);
  lVar18 = 0;
  uVar21 = 0;
  while( true ) {
    if ((local_70.ArrayNum <= (int)uVar21) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar2 = local_70.DataPtr[lVar18];
    lVar19 = 0;
    if (uVar21 != 2) {
      lVar19 = lVar18 + 1;
    }
    uVar1 = uVar21 + 1;
    uVar20 = 0;
    if (uVar21 != 2) {
      uVar20 = uVar1;
    }
    uVar10 = 0;
    if ((int)uVar20 < local_70.ArrayNum) {
      uVar10 = ~uVar20 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) break;
    FVar3 = local_70.DataPtr[lVar19];
    pTVar16 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar17 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar16,(int)FVar2);
    FVar4 = *pFVar17;
    pTVar16 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar17 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar16,(int)FVar3);
    FVar5 = *pFVar17;
    if ((local_60.ArrayNum <= (int)uVar21) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_60.DataPtr[lVar18] = FVar4;
    GetVertexPairEdge(this,SUB84(local_78,0),FVar4);
    if (local_78[0] == (FEdgeID)0xffffffff) {
      pFVar14 = FMeshElementChannels::Get(this->EdgeElements,0);
      FVar11 = (FEdgeID)FMeshElementContainer::Add(pFVar14);
      CreateEdge_Internal(this,FVar11,FVar4,FVar5);
      local_78[0] = FVar11;
      if (param_4 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar6 = (FEdgeID *)(param_4->AllocatorInstance).Data;
        if (((pFVar6 <= local_78) && (local_78 < pFVar6 + param_4->ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = param_4->ArrayNum;
        if (iVar12 == param_4->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar12 + 1;
        *(FEdgeID *)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_78[0];
      }
    }
    FVar11 = local_78[0];
    if ((local_50.ArrayNum <= (int)uVar21) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_50.DataPtr[lVar18] = FVar11;
    FMeshElementIndexer::AddReferenceToKey
              (&this->VertexInstanceToTriangles,(int)FVar2,(int)param_1,0);
    FMeshElementIndexer::AddReferenceToKey(&this->EdgeToTriangles,(int)local_78[0],(int)param_1,0);
    lVar18 = lVar18 + 1;
    uVar21 = uVar1;
    if (2 < (int)uVar1) {
      return;
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// CreateVertexInstance_Internal @ 143667bf0

void __thiscall
FMeshDescription::CreateVertexInstance_Internal
          (FMeshDescription *this,FVertexInstanceID param_1,FVertexID param_2)

{
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar1;
  
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,
                       0);
  pFVar1 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)param_1);
  *pFVar1 = param_2;
  FMeshElementIndexer::AddReferenceToKey(&this->VertexToVertexInstances,(int)param_2,(int)param_1,0)
  ;
  return;
}

// DeleteEdge @ 143667cf0

void __thiscall
FMeshDescription::DeleteEdge
          (FMeshDescription *this,FEdgeID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FVertexID,int> *pTVar3;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> *pTVar4;
  FVertexID aFStackX_8 [2];
  FVertexID aFStackX_10 [2];
  TArrayView<FVertexID,int> TStack_78;
  TArrayView<FVertexID,int> TStack_68;
  TArrayView<int_const_,int> TStack_58;
  TArrayView<int_const_,int> TStack_48;
  TArrayView<int_const_,int> TStack_38;
  TArrayView<int_const_,int> TStack_28;
  
  pTVar3 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&TStack_78,(int)param_1);
  if (pTVar3->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  aFStackX_10[0] = *pTVar3->DataPtr;
  pTVar3 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->EdgeVertices,&TStack_68,(int)param_1);
  if (pTVar3->ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  aFStackX_8[0] = pTVar3->DataPtr[1];
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToEdges,(int)aFStackX_10[0],(int)param_1,0);
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToEdges,(int)aFStackX_8[0],(int)param_1,0);
  this_00 = FMeshElementChannels::Get(this->EdgeElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->EdgeToTriangles,(int)param_1,0);
  if (param_2 != (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = FMeshElementIndexer::Find(&this->VertexToEdges,&TStack_58,(int)aFStackX_10[0],0);
    if (pTVar4->ArrayNum == 0) {
      pTVar4 = FMeshElementIndexer::Find
                         (&this->VertexToVertexInstances,&TStack_48,(int)aFStackX_10[0],0);
      if (pTVar4->ArrayNum != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID0).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x2ff,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                (param_2,aFStackX_10);
    }
    pTVar4 = FMeshElementIndexer::Find(&this->VertexToEdges,&TStack_38,(int)aFStackX_8[0],0);
    if (pTVar4->ArrayNum == 0) {
      pTVar4 = FMeshElementIndexer::Find
                         (&this->VertexToVertexInstances,&TStack_28,(int)aFStackX_8[0],0);
      if (pTVar4->ArrayNum != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID1).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x305,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                (param_2,aFStackX_8);
    }
  }
  return;
}

// DeletePolygon @ 143667da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::DeletePolygon
          (FMeshDescription *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  FMeshElementIndexer *this_00;
  uint *puVar1;
  ForElementType<FEdgeID> FVar2;
  FVertexID *pFVar3;
  FTriangleID FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FScriptContainerElement *pFVar6;
  TMeshAttributeArraySet<FVertexID> *this_01;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar7;
  code *pcVar8;
  int iVar9;
  FMeshDescription *pFVar10;
  FEdgeID FVar11;
  FVertexInstanceID FVar12;
  FPolygonID FVar13;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *this_02;
  bool bVar14;
  uint uVar15;
  FTriangleID FVar16;
  int iVar17;
  FPolygonGroupID *pFVar18;
  FPolygonID *pFVar19;
  FPolygonID *pFVar20;
  TMeshAttributeArrayBase<FVertexID> *this_03;
  FMeshElementContainer *this_04;
  TArrayView<int_const_,int> *pTVar21;
  ForElementType<FMeshElementContainer> FVar22;
  FMeshAttributeArraySetBase *pFVar23;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_05;
  FVertexID *pFVar24;
  ForElementType<FMeshElementContainer> FVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  FTriangleID *pFVar29;
  ForElementType<FEdgeID> FVar30;
  ulonglong uVar31;
  uint uVar32;
  FMeshDescription *pFVar33;
  undefined1 auStackY_178 [32];
  undefined1 auStack_148 [4];
  FPolygonGroupID FStack_144;
  FEdgeID aFStack_140 [2];
  FMeshDescription *pFStack_138;
  FVertexInstanceID FStack_130;
  FPolygonID FStack_12c;
  longlong lStack_128;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTStack_120;
  TArrayView<FEdgeID,int> TStack_118;
  TArrayView<FVertexInstanceID,int> TStack_108;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTStack_f8;
  FTriangleID *pFStack_f0;
  TArrayView<FTriangleID_const_,int> TStack_e8;
  TArrayView<FVertexID,int> TStack_d8;
  FTriangleID *pFStack_c8;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *pTStack_c0;
  TArrayView<int_const_,int> TStack_b8;
  TArrayView<int_const_,int> TStack_a8;
  TArrayView<FTriangleID_const_,int> TStack_98;
  TArrayView<int_const_,int> TStack_88;
  undefined1 auStack_78 [32];
  ForElementType<FEdgeID> FStack_58;
  int iStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTStack_c0 = param_4;
  pFStack_138 = this;
  FStack_12c = param_1;
  pTStack_120 = param_2;
  pTStack_f8 = param_3;
  pFVar18 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  FStack_144 = *pFVar18;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&TStack_e8,(int)param_1,0);
  iVar27 = TStack_e8.ArrayNum;
  iStack_50 = 0;
  FStack_58 = (ForElementType<FEdgeID>)0x0;
  iStack_4c = 8;
  uVar26 = iVar27 - 1;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
  if (8 < (int)uVar26) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
              (4,4,uVar26,(ForElementType<FEdgeID> *)auStack_78,0,&iStack_4c);
  }
  pFStack_f0 = TStack_e8.DataPtr;
  pFStack_c8 = TStack_e8.DataPtr + iVar27;
  if (TStack_e8.DataPtr != pFStack_c8) {
    this_00 = &this->EdgeToTriangles;
    pFVar33 = this;
    do {
      uVar28 = 0;
      pFVar5 = (pFVar33->TriangleVertexInstances).ArrayPtr;
      FVar4 = *pFStack_f0;
      if ((pFVar33->TriangleVertexInstances).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FVertexInstanceID>::Get
                  ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar23,&TStack_108,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TStack_108.DataPtr =
             TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar23,(int)FVar4);
        TStack_108.ArrayNum = (pFVar33->TriangleVertexInstances).Extent;
        if ((TStack_108.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar5 = (pFVar33->TriangleEdges).ArrayPtr;
      if ((pFVar33->TriangleEdges).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar23,&TStack_118,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar23 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TStack_118.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar23,(int)FVar4);
        TStack_118.ArrayNum = (pFVar33->TriangleEdges).Extent;
        if ((TStack_118.ArrayNum < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lStack_128 = 0;
      uVar31 = uVar28;
      do {
        iVar27 = (int)uVar28;
        if ((TStack_118.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        aFStack_140[0] = *(FEdgeID *)(&(TStack_118.DataPtr)->field_0x0 + uVar31);
        FMeshElementIndexer::Find<FTriangleID>(this_00,&TStack_98,(int)aFStack_140[0],0);
        pFVar29 = TStack_98.DataPtr;
        if (TStack_98.ArrayNum == 2) {
          pFVar19 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar33->TrianglePolygons,(int)*TStack_98.DataPtr);
          pFVar20 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&pFVar33->TrianglePolygons,(int)pFVar29[1]);
          param_2 = pTStack_120;
          if (*pFVar19 != *pFVar20) goto LAB_14363c148;
          TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
          AddUniqueImpl<FEdgeID_const_&>
                    ((TArray<FEdgeID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                     auStack_78,aFStack_140);
        }
        else {
LAB_14363c148:
          FMeshElementIndexer::RemoveReferenceFromKey(this_00,(int)aFStack_140[0],(int)FVar4,0);
          if ((TStack_118.ArrayNum <= iVar27) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar11 = aFStack_140[0];
          *(undefined4 *)(&(TStack_118.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
          if (param_2 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
            if (((this->EdgeToTriangles).bSuspended != false) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!bSuspended",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x67,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::ConditionalBuild(this_00,(int)FVar11,0);
            uVar26 = (this->EdgeToTriangles).ChunkMask;
            uVar32 = (int)FVar11 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("KeyChannelIndex < PerChannelIndices.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                    ,0x6c,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)((this_00->PerChannelIndices).AllocatorInstance.Data + 8) == 0) {
              TStack_b8.DataPtr = (int *)0x0;
              TStack_b8.ArrayNum = 0;
            }
            else {
              if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar6 = (this_00->PerChannelIndices).AllocatorInstance.Data;
              uVar15 = 0;
              if ((int)uVar32 < *(int *)(pFVar6 + 8)) {
                uVar15 = ~uVar32 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FMeshElementIndexer::FChunk::Get
                        ((FChunk *)((longlong)(int)uVar32 * 0x58 + *(longlong *)pFVar6),&TStack_b8,
                         uVar26 & (uint)FVar11);
              if (TStack_b8.ArrayNum != 0) goto LAB_14363c323;
            }
            TArray<FEdgeID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FEdgeID_const_&>
                      (pTStack_120,aFStack_140);
          }
        }
LAB_14363c323:
        if ((TStack_108.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar33 = pFStack_138;
        FStack_130 = *(FVertexInstanceID *)(&(TStack_108.DataPtr)->field_0x0 + uVar31);
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&pFStack_138->VertexInstanceToTriangles,(int)FStack_130,(int)FVar4,0);
        if ((TStack_108.ArrayNum <= iVar27) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar12 = FStack_130;
        *(undefined4 *)(&(TStack_108.DataPtr)->field_0x0 + uVar31) = 0xffffffff;
        if (pTStack_f8 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
          if (((pFVar33->VertexInstanceToTriangles).bSuspended != false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bSuspended",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x67,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FMeshElementIndexer::ConditionalBuild(&pFVar33->VertexInstanceToTriangles,(int)FVar12,0);
          pFVar10 = pFStack_138;
          uVar26 = (pFVar33->VertexInstanceToTriangles).ChunkMask;
          uVar32 = (int)FVar12 >> ((byte)(pFVar33->VertexInstanceToTriangles).ChunkBits & 0x1f);
          if (((pFStack_138->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("KeyChannelIndex < PerChannelIndices.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                                  ,0x6c,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data
                      + 8) == 0) {
            TStack_a8.DataPtr = (int *)0x0;
            TStack_a8.ArrayNum = 0;
          }
          else {
            if (((pFVar10->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (pFVar10->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
            uVar15 = 0;
            if ((int)uVar32 < *(int *)(pFVar6 + 8)) {
              uVar15 = ~uVar32 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FMeshElementIndexer::FChunk::Get
                      ((FChunk *)((longlong)(int)uVar32 * 0x58 + *(longlong *)pFVar6),&TStack_a8,
                       uVar26 & (uint)FVar12);
            if (TStack_a8.ArrayNum != 0) goto LAB_14363c57d;
          }
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FVertexInstanceID_const_&>(pTStack_f8,&FStack_130);
        }
LAB_14363c57d:
        uVar28 = (ulonglong)(iVar27 + 1U);
        lStack_128 = lStack_128 + 1;
        uVar31 = uVar31 + 4;
        param_2 = pTStack_120;
        pFVar33 = pFStack_138;
      } while ((int)(iVar27 + 1U) < 3);
      pFStack_f0 = pFStack_f0 + 1;
    } while (pFStack_f0 != pFStack_c8);
    iVar27 = TStack_e8.ArrayNum;
    this = pFStack_138;
  }
  pFVar33 = pFStack_138;
  pFVar29 = TStack_e8.DataPtr;
  iVar9 = iStack_50;
  while( true ) {
    iStack_50 = iVar9;
    if (pFVar29 == TStack_e8.DataPtr + iVar27) {
      FVar30 = (ForElementType<FEdgeID>)auStack_78;
      if (FStack_58 != (ForElementType<FEdgeID>)0x0) {
        FVar30 = FStack_58;
      }
      FVar2 = (ForElementType<FEdgeID>)((longlong)FVar30 + (longlong)iVar9 * 4);
      pFVar33 = pFStack_138;
      while( true ) {
        if (iStack_50 != iVar9) {
          auStack_148[0] = 0;
          `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_148);
        }
        FVar13 = FStack_12c;
        if (FVar30 == FVar2) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar33->PolygonGroupToPolygons,(int)FStack_144,(int)FStack_12c,0);
          this_04 = FMeshElementChannels::Get(pFVar33->PolygonElements,0);
          FMeshElementContainer::Remove(this_04,(int)FVar13);
          FMeshElementIndexer::RemoveKey(&pFVar33->PolygonToTriangles,(int)FVar13,0);
          this_02 = pTStack_c0;
          if ((pTStack_c0 != (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) &&
             (pTVar21 = FMeshElementIndexer::Find
                                  (&pFVar33->PolygonGroupToPolygons,&TStack_88,(int)FStack_144,0),
             pTVar21->ArrayNum == 0)) {
            TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPolygonGroupID_const_&>(this_02,&FStack_144);
          }
          if (FStack_58 != (ForElementType<FEdgeID>)0x0) {
            FMemory::Free((void *)FStack_58);
          }
          return;
        }
        iVar27 = *(int *)FVar30;
        this_01 = (TMeshAttributeArraySet<FVertexID> *)(pFVar33->EdgeVertices).ArrayPtr;
        if ((pFVar33->EdgeVertices).Extent == 0) {
          if (((this_01->ArrayForChannels).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar7 = (this_01->ArrayForChannels).AllocatorInstance.SecondaryData;
          this_05 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_01->ArrayForChannels;
          if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            this_05 = FVar7;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)this_05,&TStack_d8,iVar27);
        }
        else {
          this_03 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_01,0);
          TStack_d8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_03,iVar27);
          TStack_d8.ArrayNum = (pFVar33->EdgeVertices).Extent;
          if ((TStack_d8.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar3 = TStack_d8.DataPtr + TStack_d8.ArrayNum;
        pFVar10 = pFVar33;
        for (pFVar24 = TStack_d8.DataPtr; pFVar24 != pFVar3; pFVar24 = pFVar24 + 1) {
          FMeshElementIndexer::RemoveReferenceFromKey
                    (&pFVar33->VertexToEdges,(int)*pFVar24,iVar27,0);
          pFVar10 = pFStack_138;
        }
        FVar25 = (ForElementType<FMeshElementContainer>)pFVar10->EdgeElements;
        if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) break;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
        }
        if (((iVar27 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= iVar27)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar22 = FVar25;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
        }
        iVar17 = iVar27;
        if (iVar27 < 0) {
          iVar17 = iVar27 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar22 + (longlong)(iVar17 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar27 & 0x1f));
        *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
        FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),iVar27);
        FMeshElementIndexer::RemoveKey(&pFVar10->EdgeToTriangles,iVar27,0);
        FVar30 = (ForElementType<FEdgeID>)((longlong)FVar30 + 4);
        pFVar33 = pFVar10;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (pFVar33->TrianglePolygonGroups).ArrayPtr;
    FVar4 = *pFVar29;
    if (((int)pFVar5[2].Type < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar23 = pFVar5 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar23 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
    }
    pFVar18 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                        ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar23,(int)FVar4);
    if ((*pFVar18 != FStack_144) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrianglePolygonGroups[TriangleID] == PolygonGroupID",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x421,L""), bVar14)) break;
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->PolygonGroupToTriangles,(int)FStack_144,(int)FVar4,0);
    FVar25 = (ForElementType<FMeshElementContainer>)pFVar33->TriangleElements;
    if ((*(int *)((longlong)FVar25 + 0x88) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar25 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x80);
    }
    if ((((int)FVar4 < 0) || (*(int *)((longlong)FVar25 + 0x18) <= (int)FVar4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar22 = FVar25;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar22 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar25 + 0x10);
    }
    FVar16 = FVar4;
    if ((int)FVar4 < 0) {
      FVar16 = (FTriangleID)((int)FVar4 + 0x1f);
    }
    puVar1 = (uint *)((longlong)FVar22 + (longlong)((int)FVar16 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (FVar4._0_1_ & 0x1f));
    *(int *)((longlong)FVar25 + 0x78) = *(int *)((longlong)FVar25 + 0x78) + 1;
    FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar25 + 0x20),(int)FVar4);
    pFVar29 = pFVar29 + 1;
    iVar9 = iStack_50;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// DeletePolygonGroup @ 143667e60

void __thiscall FMeshDescription::DeletePolygonGroup(FMeshDescription *this,FPolygonGroupID param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int_const_,int> *pTVar3;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> local_18;
  
  pTVar3 = FMeshElementIndexer::Find(&this->PolygonGroupToPolygons,&local_18,(int)param_1,0);
  if (pTVar3->ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PolygonGroupToPolygons.Find(PolygonGroupID).Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->PolygonGroupToPolygons,(int)param_1,0);
  FMeshElementIndexer::RemoveKey(&this->PolygonGroupToTriangles,(int)param_1,0);
  return;
}

// DeletePolygons @ 143667fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::DeletePolygons
          (FMeshDescription *this,TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_1)

{
  FPolygonID *pFVar1;
  ulonglong uVar2;
  FVertexID FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  TArrayView<int_const_,int> *pTVar7;
  FMeshElementContainer *pFVar8;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FPolygonID *pFVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_3b8 [32];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined1 local_384 [4];
  longlong *local_380;
  int iStack_378;
  uint uStack_374;
  TBitArray<FDefaultBitArrayAllocator> *local_370;
  undefined4 uStack_368;
  uint uStack_364;
  int local_360;
  uint uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  ulonglong local_350;
  FVertexID local_348 [2];
  longlong *local_340;
  int iStack_338;
  uint uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *local_330;
  undefined4 uStack_328;
  uint uStack_324;
  int local_320;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  FVertexID local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  TArrayView<int_const_,int> local_228;
  TArrayView<int_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<int_const_,int> local_1f8;
  TArrayView<int_const_,int> local_1e8 [2];
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pFVar13 = (FPolygonID *)(param_1->AllocatorInstance).Data;
  iVar15 = 0;
  iVar12 = param_1->ArrayNum;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  pFVar1 = pFVar13 + iVar12;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_178._0_8_ = 0;
  local_178._8_8_ = 0;
  local_158 = (uint *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_388 = 0;
      `TCheckedPointerIterator<FPolygonID_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_388);
    }
    uVar14 = local_100;
    if (pFVar13 == pFVar1) break;
    DeletePolygon_Internal<TSet>
              (this,*pFVar13,
               (TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *)local_88,
               (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)
               local_d8,(TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator>
                         *)local_128);
    pFVar13 = pFVar13 + 1;
  }
  local_350 = 1;
  uStack_334 = 1;
  uStack_324 = 0;
  local_320 = 0;
  if (local_100 != 0) {
    puVar16 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar16 = local_108;
    }
    uStack_334 = *puVar16;
    iVar15 = 0;
    while (uStack_334 == 0) {
      lVar11 = (longlong)iVar15;
      local_320 = local_320 + 0x20;
      iVar15 = iVar15 + 1;
      uStack_334 = 1;
      uStack_324 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_1436681d0;
      uStack_334 = puVar16[lVar11 + 1];
    }
    uStack_334 = -uStack_334 & uStack_334;
    uVar2 = (ulonglong)uStack_334 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_310 = (int)lVar11;
    uStack_324 = local_310 + -1 + local_320;
    if ((int)local_100 < (int)uStack_324) {
      uStack_324 = local_100;
    }
  }
LAB_1436681d0:
  local_340 = (longlong *)local_128;
  uStack_31c = local_1bc;
  local_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  iStack_318 = local_128._8_4_ - local_f4;
  uVar17 = local_100 & 0xffffffe0;
  TStack_2e0._padding_ = CONCAT44(uStack_334,iVar15);
  uStack_328 = 0xffffffff;
  TStack_2e0.CurrentBitIndex = uStack_324;
  TStack_2e0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_100 >> 5;
  TStack_2e0._28_4_ = local_1bc;
  TStack_2e0.BaseBitIndex = local_320;
  uStack_2c0 = CONCAT44(uStack_314,iStack_318);
  bVar10 = (byte)local_100;
  iStack_338 = iVar15;
  local_2e8 = local_340;
  TStack_2e0.Array = local_330;
  if (((int)local_100 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_100) {
    puVar16 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar16 = local_108;
    }
    uVar14 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1436682f0;
      uVar14 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_30c = (int)lVar11;
    uVar14 = local_30c + -1 + uVar17;
    if ((int)local_100 < (int)uVar14) {
      uVar14 = local_100;
    }
  }
LAB_1436682f0:
  while( true ) {
    plVar5 = local_2e8;
    if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
      local_387 = 0;
      `TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_387);
    }
    uVar17 = local_b0;
    if (((TStack_2e0.CurrentBitIndex == uVar14) &&
        (TStack_2e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar5 == (longlong *)local_128)) break;
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_2e0.CurrentBitIndex * 0xc);
    pTVar7 = FMeshElementIndexer::Find(&this->PolygonGroupToPolygons,local_1e8,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PolygonGroupToPolygons.Find(PolygonGroupID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0x1a1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToPolygons,iVar12,0);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToTriangles,iVar12,0);
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  iStack_378 = 0;
  uStack_374 = (uint)local_350;
  local_360 = 0;
  uStack_364 = 0;
  if (local_b0 != 0) {
    puVar16 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar16 = local_b8;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143668470;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_374 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_374 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_308 = (int)lVar11;
    uStack_364 = local_360 + -1 + local_308;
    if ((int)local_b0 < (int)uStack_364) {
      uStack_364 = local_b0;
    }
  }
LAB_143668470:
  local_380 = (longlong *)local_d8;
  uStack_35c = local_19c;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar14 = local_b0 & 0xffffffe0;
  iStack_358 = local_d8._8_4_ - local_a4;
  TStack_2b0._padding_ = CONCAT44(uStack_374,iStack_378);
  uStack_368 = 0xffffffff;
  TStack_2b0.CurrentBitIndex = uStack_364;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_b0 >> 5;
  TStack_2b0._28_4_ = local_19c;
  TStack_2b0.BaseBitIndex = local_360;
  uStack_290 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_b0;
  local_2b8 = local_380;
  TStack_2b0.Array = local_370;
  if (((int)local_b0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_b0) {
    puVar16 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar16 = local_b8;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143668590;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_304 = (int)lVar11;
    uVar17 = (uVar14 - 1) + local_304;
    if ((int)local_b0 < (int)uVar17) {
      uVar17 = local_b0;
    }
  }
LAB_143668590:
  while( true ) {
    plVar5 = local_2b8;
    if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
      local_386 = 0;
      `TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_386);
    }
    uVar14 = local_60;
    if (((TStack_2b0.CurrentBitIndex == uVar17) &&
        (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar5 == (longlong *)local_d8)) break;
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_2b0.CurrentBitIndex * 0xc);
    this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar9 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar12);
    FVar3 = *pFVar9;
    local_348[0] = FVar3;
    FMeshElementIndexer::RemoveReferenceFromKey(&this->VertexToVertexInstances,(int)FVar3,iVar12,0);
    pFVar8 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->VertexInstanceToTriangles,iVar12,0);
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_228,(int)FVar3,0);
    if ((pTVar7->ArrayNum == 0) &&
       (pTVar7 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_218,(int)FVar3,0),
       pTVar7->ArrayNum == 0)) {
      TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator>::Emplace<FVertexID_const_&>
                ((TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)local_178,
                 &local_300,(bool *)local_348);
    }
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  iStack_378 = 0;
  local_360 = 0;
  uStack_374 = (uint)local_350;
  uStack_364 = 0;
  if (local_60 != 0) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143668740;
      uVar17 = puVar16[lVar11 + 1];
    }
    uStack_374 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_374 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2fc = (int)lVar11;
    uStack_364 = local_360 + -1 + local_2fc;
    if ((int)local_60 < (int)uStack_364) {
      uStack_364 = local_60;
    }
  }
LAB_143668740:
  local_380 = (longlong *)local_88;
  uStack_35c = local_17c;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar17 = local_60 & 0xffffffe0;
  iStack_358 = local_88._8_4_ - local_54;
  TStack_280._padding_ = CONCAT44(uStack_374,iStack_378);
  uStack_368 = 0xffffffff;
  TStack_280.CurrentBitIndex = uStack_364;
  TStack_280.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_60 >> 5;
  TStack_280._28_4_ = local_17c;
  TStack_280.BaseBitIndex = local_360;
  uStack_260 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_60;
  local_288 = local_380;
  TStack_280.Array = local_370;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_60) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar14 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143668860;
      uVar14 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f8 = (int)lVar11;
    uVar14 = (uVar17 - 1) + local_2f8;
    if ((int)local_60 < (int)uVar14) {
      uVar14 = local_60;
    }
  }
LAB_143668860:
  while( true ) {
    plVar5 = local_288;
    if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
      local_385 = 0;
      `TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_385);
    }
    uVar17 = local_150;
    if (((TStack_280.CurrentBitIndex == uVar14) &&
        (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) break;
    DeleteEdge_Internal<TSet>
              (this,*(FEdgeID *)(*plVar5 + (longlong)TStack_280.CurrentBitIndex * 0xc),
               (TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)local_178);
    TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
  }
  iStack_378 = 0;
  local_360 = 0;
  uStack_364 = 0;
  if (local_150 != 0) {
    puVar16 = (uint *)(local_178 + 0x10);
    if (local_158 != (uint *)0x0) {
      puVar16 = local_158;
    }
    uVar14 = *puVar16;
    local_360 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143668973;
      uVar14 = puVar16[lVar11 + 1];
    }
    local_350 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = local_350 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f4 = (int)lVar11;
    uStack_364 = local_2f4 + -1 + local_360;
    if ((int)local_150 < (int)uStack_364) {
      uStack_364 = local_150;
    }
  }
LAB_143668973:
  local_380 = (longlong *)local_178;
  uVar14 = local_150 & 0xffffffe0;
  uStack_374 = (uint)local_350;
  uStack_35c = uStack_324;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  iStack_358 = local_178._8_4_ - local_144;
  uStack_368 = 0xffffffff;
  TStack_250.CurrentBitIndex = uStack_364;
  TStack_250.UnvisitedBitMask = 0xffffffff;
  TStack_250._padding_ = CONCAT44(uStack_374,iStack_378);
  iVar12 = (int)local_150 >> 5;
  TStack_250._28_4_ = uStack_324;
  TStack_250.BaseBitIndex = local_360;
  uStack_230 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_150;
  local_258 = local_380;
  TStack_250.Array = local_370;
  if (((int)local_150 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_150) {
    puVar16 = (uint *)(local_178 + 0x10);
    if (local_158 != (uint *)0x0) {
      puVar16 = local_158;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143668a94;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f0 = (int)lVar11;
    uVar17 = local_2f0 + -1 + uVar14;
    if ((int)local_150 < (int)uVar17) {
      uVar17 = local_150;
    }
  }
LAB_143668a94:
  while( true ) {
    plVar5 = local_258;
    if ((int)local_258[1] - *(int *)((longlong)local_258 + 0x34) != (int)uStack_230) {
      local_384[0] = 0;
      `TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_384);
    }
    if (((TStack_250.CurrentBitIndex == uVar17) &&
        (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
       (plVar5 == (longlong *)local_178)) {
      local_130 = 0;
      if (local_138 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138);
      }
      TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_250.CurrentBitIndex * 0xc);
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_208,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0xdb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_1f8,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToEdges.Find(VertexID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0xdc,L""), bVar6)) break;
    pFVar8 = FMeshElementChannels::Get(this->VertexElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->VertexToVertexInstances,iVar12,0);
    FMeshElementIndexer::RemoveKey(&this->VertexToEdges,iVar12,0);
    TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// DeleteTriangle @ 143668ca0

void __thiscall
FMeshDescription::DeleteTriangle
          (FMeshDescription *this,FTriangleID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  FVertexInstanceID FVar4;
  FEdgeID FVar5;
  FPolygonID FVar6;
  FUVID *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FPolygonGroupID *pFVar11;
  FPolygonID *pFVar12;
  TArrayView<int_const_,int> *pTVar13;
  FMeshElementContainer *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FMeshAttributeArraySetBase *pFVar18;
  int iStackX_8;
  FPolygonGroupID aFStackX_10 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTStackX_18;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTStackX_20;
  longlong lStack_d8;
  FVertexInstanceID FStack_d0;
  FEdgeID FStack_cc;
  FPolygonID FStack_c8;
  longlong lStack_c0;
  TArrayView<FUVID,int> TStack_b8;
  TArrayView<FVertexInstanceID,int> TStack_a8;
  TArrayView<FEdgeID,int> TStack_98;
  TArrayView<int_const_,int> TStack_88;
  TArrayView<int_const_,int> TStack_78;
  TArrayView<int_const_,int> TStack_68;
  TArrayView<int_const_,int> TStack_58;
  
  pTStackX_18 = param_2;
  pTStackX_20 = param_3;
  pFVar11 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->TrianglePolygonGroups,(int)param_1);
  aFStackX_10[0] = *pFVar11;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonGroupToTriangles,(int)aFStackX_10[0],(int)param_1,0);
  pFVar12 = TMeshAttributesRef<int,FPolygonID>::operator[](&this->TrianglePolygons,(int)param_1);
  FStack_c8 = *pFVar12;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonToTriangles,(int)FStack_c8,(int)param_1,0);
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
            (&this->TriangleVertexInstances,&TStack_a8,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&TStack_98,(int)param_1);
  iStackX_8 = 0;
  lStack_c0 = 0;
  lStack_d8 = 0;
  do {
    lVar17 = lStack_c0;
    if ((TStack_a8.ArrayNum <= iStackX_8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FStack_d0 = *(FVertexInstanceID *)(&(TStack_a8.DataPtr)->field_0x0 + lStack_d8);
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->VertexInstanceToTriangles,(int)FStack_d0,(int)param_1,0);
    if ((TStack_a8.ArrayNum <= iStackX_8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar4 = FStack_d0;
    *(undefined4 *)(&(TStack_a8.DataPtr)->field_0x0 + lStack_d8) = 0xffffffff;
    if (pTStackX_20 != (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((this->VertexInstanceToTriangles).bSuspended != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->VertexInstanceToTriangles,(int)FVar4,0);
      uVar16 = (this->VertexInstanceToTriangles).ChunkMask;
      uVar15 = (int)FVar4 >> ((byte)(this->VertexInstanceToTriangles).ChunkBits & 0x1f);
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data + 8)
          == 0) {
        TStack_88.DataPtr = (int *)0x0;
        TStack_88.ArrayNum = 0;
      }
      else {
        if (((this->VertexInstanceToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->VertexInstanceToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pFVar1 + 8)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar15 * 0x58 + *(longlong *)pFVar1),&TStack_88,
                   uVar16 & (uint)FVar4);
        if (TStack_88.ArrayNum != 0) goto LAB_14363d999;
      }
      TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FVertexInstanceID_const_&>(pTStackX_20,&FStack_d0);
    }
LAB_14363d999:
    if ((TStack_98.ArrayNum <= iStackX_8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FStack_cc = *(FEdgeID *)(&(TStack_98.DataPtr)->field_0x0 + lStack_d8);
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->EdgeToTriangles,(int)FStack_cc,(int)param_1,0);
    if ((TStack_98.ArrayNum <= iStackX_8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar5 = FStack_cc;
    *(undefined4 *)(&(TStack_98.DataPtr)->field_0x0 + lStack_d8) = 0xffffffff;
    if (pTStackX_18 != (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
      if (((this->EdgeToTriangles).bSuspended != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSuspended",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x67,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMeshElementIndexer::ConditionalBuild(&this->EdgeToTriangles,(int)FVar5,0);
      uVar16 = (this->EdgeToTriangles).ChunkMask;
      uVar15 = (int)FVar5 >> ((byte)(this->EdgeToTriangles).ChunkBits & 0x1f);
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("KeyChannelIndex < PerChannelIndices.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                             ,0x6c,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)((this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data + 8) == 0) {
        TStack_78.DataPtr = (int *)0x0;
        TStack_78.ArrayNum = 0;
      }
      else {
        if (((this->EdgeToTriangles).PerChannelIndices.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->EdgeToTriangles).PerChannelIndices.AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)(pFVar1 + 8)) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::FChunk::Get
                  ((FChunk *)((longlong)(int)uVar15 * 0x58 + *(longlong *)pFVar1),&TStack_78,
                   uVar16 & (uint)FVar5);
        if (TStack_78.ArrayNum != 0) goto LAB_14363dbcc;
      }
      TArray<FEdgeID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FEdgeID_const_&>
                (pTStackX_18,&FStack_cc);
    }
LAB_14363dbcc:
    uVar16 = 0;
    iVar10 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
    if (0 < iVar10) {
      do {
        pFVar2 = (this->TriangleUVs).ArrayPtr;
        if ((this->TriangleUVs).Extent == 0) {
          uVar15 = 0;
          if ((int)uVar16 < (int)pFVar2[2].Type) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          TAttributeArrayContainer<FUVID>::Get
                    ((TAttributeArrayContainer<FUVID> *)(pFVar18 + (int)uVar16),&TStack_b8,
                     (int)param_1);
          uVar15 = TStack_b8.ArrayNum;
        }
        else {
          uVar15 = 0;
          if ((int)uVar16 < (int)pFVar2[2].Type) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar18 = pFVar2 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar18 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
          }
          TStack_b8.DataPtr =
               TMeshAttributeArrayBase<FUVID>::GetElementBase
                         ((TMeshAttributeArrayBase<FUVID> *)(pFVar18 + (int)uVar16),(int)param_1);
          uVar15 = (this->TriangleUVs).Extent;
          TStack_b8.ArrayNum = uVar15;
          if (((int)uVar15 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar7 = TStack_b8.DataPtr;
        if (((int)uVar15 <= iStackX_8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->UVToTriangles,*(int *)(&pFVar7->field_0x0 + lStack_d8),(int)param_1,uVar16
                  );
        uVar16 = uVar16 + 1;
        iVar10 = (**(code **)(((this->TriangleUVs).ArrayPtr)->_padding_ + 0x68))();
        lVar17 = lStack_c0;
      } while ((int)uVar16 < iVar10);
    }
    FVar6 = FStack_c8;
    iStackX_8 = iStackX_8 + 1;
    lStack_c0 = lVar17 + 1;
    lStack_d8 = lStack_d8 + 4;
    if (2 < iStackX_8) {
      pTVar13 = FMeshElementIndexer::Find(&this->PolygonToTriangles,&TStack_68,(int)FStack_c8,0);
      if (pTVar13->ArrayNum == 0) {
        pFVar11 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                            (&this->PolygonPolygonGroups,(int)FVar6);
        if ((*pFVar11 != aFStackX_10[0]) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PolygonPolygonGroups[PolygonID] == PolygonGroupID",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                               ,0x394,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->PolygonGroupToPolygons,(int)aFStackX_10[0],(int)FVar6,0);
        pFVar14 = FMeshElementChannels::Get(this->PolygonElements,0);
        FMeshElementContainer::Remove(pFVar14,(int)FVar6);
        FMeshElementIndexer::RemoveKey(&this->PolygonToTriangles,(int)FVar6,0);
      }
      pFVar14 = FMeshElementChannels::Get(this->TriangleElements,0);
      FMeshElementContainer::Remove(pFVar14,(int)param_1);
      if ((param_4 != (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) &&
         (pTVar13 = FMeshElementIndexer::Find
                              (&this->PolygonGroupToTriangles,&TStack_58,(int)aFStackX_10[0],0),
         pTVar13->ArrayNum == 0)) {
        TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonGroupID_const_&>
                  (param_4,aFStackX_10);
      }
      return;
    }
  } while( true );
}

// DeleteTriangles @ 143668d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::DeleteTriangles
          (FMeshDescription *this,TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_1)

{
  FTriangleID *pFVar1;
  ulonglong uVar2;
  FVertexID FVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  TArrayView<int_const_,int> *pTVar7;
  FMeshElementContainer *pFVar8;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FTriangleID *pFVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_3b8 [32];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined1 local_384 [4];
  longlong *local_380;
  int iStack_378;
  uint uStack_374;
  TBitArray<FDefaultBitArrayAllocator> *local_370;
  undefined4 uStack_368;
  uint uStack_364;
  int local_360;
  uint uStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  ulonglong local_350;
  FVertexID local_348 [2];
  longlong *local_340;
  int iStack_338;
  uint uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *local_330;
  undefined4 uStack_328;
  uint uStack_324;
  int local_320;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  FVertexID local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  TArrayView<int_const_,int> local_228;
  TArrayView<int_const_,int> local_218;
  TArrayView<int_const_,int> local_208;
  TArrayView<int_const_,int> local_1f8;
  TArrayView<int_const_,int> local_1e8 [2];
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined4 local_17c;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pFVar13 = (FTriangleID *)(param_1->AllocatorInstance).Data;
  iVar15 = 0;
  iVar12 = param_1->ArrayNum;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  pFVar1 = pFVar13 + iVar12;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_178._0_8_ = 0;
  local_178._8_8_ = 0;
  local_158 = (uint *)0x0;
  local_150 = 0;
  local_14c = 0x80;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar12) {
      local_388 = 0;
      `TCheckedPointerIterator<FTriangleID_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_388);
    }
    uVar14 = local_100;
    if (pFVar13 == pFVar1) break;
    DeleteTriangle_Internal<TSet>
              (this,*pFVar13,
               (TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> *)local_88,
               (TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator> *)
               local_d8,(TSet<FPolygonGroupID,DefaultKeyFuncs<FPolygonGroupID,0>,FDefaultSetAllocator>
                         *)local_128);
    pFVar13 = pFVar13 + 1;
  }
  local_350 = 1;
  uStack_334 = 1;
  uStack_324 = 0;
  local_320 = 0;
  if (local_100 != 0) {
    puVar16 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar16 = local_108;
    }
    uStack_334 = *puVar16;
    iVar15 = 0;
    while (uStack_334 == 0) {
      lVar11 = (longlong)iVar15;
      local_320 = local_320 + 0x20;
      iVar15 = iVar15 + 1;
      uStack_334 = 1;
      uStack_324 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_143668f90;
      uStack_334 = puVar16[lVar11 + 1];
    }
    uStack_334 = -uStack_334 & uStack_334;
    uVar2 = (ulonglong)uStack_334 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_310 = (int)lVar11;
    uStack_324 = local_310 + -1 + local_320;
    if ((int)local_100 < (int)uStack_324) {
      uStack_324 = local_100;
    }
  }
LAB_143668f90:
  local_340 = (longlong *)local_128;
  uStack_31c = local_1bc;
  local_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  iStack_318 = local_128._8_4_ - local_f4;
  uVar17 = local_100 & 0xffffffe0;
  TStack_2e0._padding_ = CONCAT44(uStack_334,iVar15);
  uStack_328 = 0xffffffff;
  TStack_2e0.CurrentBitIndex = uStack_324;
  TStack_2e0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_100 >> 5;
  TStack_2e0._28_4_ = local_1bc;
  TStack_2e0.BaseBitIndex = local_320;
  uStack_2c0 = CONCAT44(uStack_314,iStack_318);
  bVar10 = (byte)local_100;
  iStack_338 = iVar15;
  local_2e8 = local_340;
  TStack_2e0.Array = local_330;
  if (((int)local_100 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_100) {
    puVar16 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar16 = local_108;
    }
    uVar14 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1436690b0;
      uVar14 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_30c = (int)lVar11;
    uVar14 = local_30c + -1 + uVar17;
    if ((int)local_100 < (int)uVar14) {
      uVar14 = local_100;
    }
  }
LAB_1436690b0:
  while( true ) {
    plVar5 = local_2e8;
    if ((int)local_2e8[1] - *(int *)((longlong)local_2e8 + 0x34) != (int)uStack_2c0) {
      local_387 = 0;
      `TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_387);
    }
    uVar17 = local_b0;
    if (((TStack_2e0.CurrentBitIndex == uVar14) &&
        (TStack_2e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar5 == (longlong *)local_128)) break;
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_2e0.CurrentBitIndex * 0xc);
    pTVar7 = FMeshElementIndexer::Find(&this->PolygonGroupToPolygons,local_1e8,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PolygonGroupToPolygons.Find(PolygonGroupID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0x1a1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToPolygons,iVar12,0);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToTriangles,iVar12,0);
    TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
  }
  iStack_378 = 0;
  uStack_374 = (uint)local_350;
  local_360 = 0;
  uStack_364 = 0;
  if (local_b0 != 0) {
    puVar16 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar16 = local_b8;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143669230;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_374 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_374 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_308 = (int)lVar11;
    uStack_364 = local_360 + -1 + local_308;
    if ((int)local_b0 < (int)uStack_364) {
      uStack_364 = local_b0;
    }
  }
LAB_143669230:
  local_380 = (longlong *)local_d8;
  uStack_35c = local_19c;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar14 = local_b0 & 0xffffffe0;
  iStack_358 = local_d8._8_4_ - local_a4;
  TStack_2b0._padding_ = CONCAT44(uStack_374,iStack_378);
  uStack_368 = 0xffffffff;
  TStack_2b0.CurrentBitIndex = uStack_364;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_b0 >> 5;
  TStack_2b0._28_4_ = local_19c;
  TStack_2b0.BaseBitIndex = local_360;
  uStack_290 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_b0;
  local_2b8 = local_380;
  TStack_2b0.Array = local_370;
  if (((int)local_b0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_b0) {
    puVar16 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar16 = local_b8;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143669350;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_304 = (int)lVar11;
    uVar17 = (uVar14 - 1) + local_304;
    if ((int)local_b0 < (int)uVar17) {
      uVar17 = local_b0;
    }
  }
LAB_143669350:
  while( true ) {
    plVar5 = local_2b8;
    if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
      local_386 = 0;
      `TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_386);
    }
    uVar14 = local_60;
    if (((TStack_2b0.CurrentBitIndex == uVar17) &&
        (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar5 == (longlong *)local_d8)) break;
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_2b0.CurrentBitIndex * 0xc);
    this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar9 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar12);
    FVar3 = *pFVar9;
    local_348[0] = FVar3;
    FMeshElementIndexer::RemoveReferenceFromKey(&this->VertexToVertexInstances,(int)FVar3,iVar12,0);
    pFVar8 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->VertexInstanceToTriangles,iVar12,0);
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_228,(int)FVar3,0);
    if ((pTVar7->ArrayNum == 0) &&
       (pTVar7 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_218,(int)FVar3,0),
       pTVar7->ArrayNum == 0)) {
      TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator>::Emplace<FVertexID_const_&>
                ((TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)local_178,
                 &local_300,(bool *)local_348);
    }
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  iStack_378 = 0;
  local_360 = 0;
  uStack_374 = (uint)local_350;
  uStack_364 = 0;
  if (local_60 != 0) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143669500;
      uVar17 = puVar16[lVar11 + 1];
    }
    uStack_374 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_374 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2fc = (int)lVar11;
    uStack_364 = local_360 + -1 + local_2fc;
    if ((int)local_60 < (int)uStack_364) {
      uStack_364 = local_60;
    }
  }
LAB_143669500:
  local_380 = (longlong *)local_88;
  uStack_35c = local_17c;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar17 = local_60 & 0xffffffe0;
  iStack_358 = local_88._8_4_ - local_54;
  TStack_280._padding_ = CONCAT44(uStack_374,iStack_378);
  uStack_368 = 0xffffffff;
  TStack_280.CurrentBitIndex = uStack_364;
  TStack_280.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)local_60 >> 5;
  TStack_280._28_4_ = local_17c;
  TStack_280.BaseBitIndex = local_360;
  uStack_260 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_60;
  local_288 = local_380;
  TStack_280.Array = local_370;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar14 != local_60) {
    puVar16 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar16 = local_68;
    }
    uVar14 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143669620;
      uVar14 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f8 = (int)lVar11;
    uVar14 = (uVar17 - 1) + local_2f8;
    if ((int)local_60 < (int)uVar14) {
      uVar14 = local_60;
    }
  }
LAB_143669620:
  while( true ) {
    plVar5 = local_288;
    if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
      local_385 = 0;
      `TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_385);
    }
    uVar17 = local_150;
    if (((TStack_280.CurrentBitIndex == uVar14) &&
        (TStack_280.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar5 == (longlong *)local_88)) break;
    DeleteEdge_Internal<TSet>
              (this,*(FEdgeID *)(*plVar5 + (longlong)TStack_280.CurrentBitIndex * 0xc),
               (TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> *)local_178);
    TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
  }
  iStack_378 = 0;
  local_360 = 0;
  uStack_364 = 0;
  if (local_150 != 0) {
    puVar16 = (uint *)(local_178 + 0x10);
    if (local_158 != (uint *)0x0) {
      puVar16 = local_158;
    }
    uVar14 = *puVar16;
    local_360 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_378;
      local_360 = local_360 + 0x20;
      iStack_378 = iStack_378 + 1;
      uStack_364 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_378)
      goto LAB_143669733;
      uVar14 = puVar16[lVar11 + 1];
    }
    local_350 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = local_350 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f4 = (int)lVar11;
    uStack_364 = local_2f4 + -1 + local_360;
    if ((int)local_150 < (int)uStack_364) {
      uStack_364 = local_150;
    }
  }
LAB_143669733:
  local_380 = (longlong *)local_178;
  uVar14 = local_150 & 0xffffffe0;
  uStack_374 = (uint)local_350;
  uStack_35c = uStack_324;
  local_370 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
  iStack_358 = local_178._8_4_ - local_144;
  uStack_368 = 0xffffffff;
  TStack_250.CurrentBitIndex = uStack_364;
  TStack_250.UnvisitedBitMask = 0xffffffff;
  TStack_250._padding_ = CONCAT44(uStack_374,iStack_378);
  iVar12 = (int)local_150 >> 5;
  TStack_250._28_4_ = uStack_324;
  TStack_250.BaseBitIndex = local_360;
  uStack_230 = CONCAT44(uStack_354,iStack_358);
  bVar10 = (byte)local_150;
  local_258 = local_380;
  TStack_250.Array = local_370;
  if (((int)local_150 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_150) {
    puVar16 = (uint *)(local_178 + 0x10);
    if (local_158 != (uint *)0x0) {
      puVar16 = local_158;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = local_150;
      if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_143669854;
      uVar17 = puVar16[lVar11 + 1];
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2f0 = (int)lVar11;
    uVar17 = local_2f0 + -1 + uVar14;
    if ((int)local_150 < (int)uVar17) {
      uVar17 = local_150;
    }
  }
LAB_143669854:
  while( true ) {
    plVar5 = local_258;
    if ((int)local_258[1] - *(int *)((longlong)local_258 + 0x34) != (int)uStack_230) {
      local_384[0] = 0;
      `TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_384);
    }
    if (((TStack_250.CurrentBitIndex == uVar17) &&
        (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
       (plVar5 == (longlong *)local_178)) {
      local_130 = 0;
      if (local_138 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138);
      }
      TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      local_e0 = 0;
      if (local_e8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8);
      }
      TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return;
    }
    iVar12 = *(int *)(*plVar5 + (longlong)TStack_250.CurrentBitIndex * 0xc);
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_208,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToVertexInstances.Find(VertexID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0xdb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar7 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_1f8,iVar12,0);
    if ((pTVar7->ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexToEdges.Find(VertexID).Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0xdc,L""), bVar6)) break;
    pFVar8 = FMeshElementChannels::Get(this->VertexElements,0);
    FMeshElementContainer::Remove(pFVar8,iVar12);
    FMeshElementIndexer::RemoveKey(&this->VertexToVertexInstances,iVar12,0);
    FMeshElementIndexer::RemoveKey(&this->VertexToEdges,iVar12,0);
    TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// DeleteVertex @ 143669a60

void __thiscall FMeshDescription::DeleteVertex(FMeshDescription *this,FVertexID param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<int_const_,int> *pTVar3;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> local_28;
  TArrayView<int_const_,int> local_18;
  
  pTVar3 = FMeshElementIndexer::Find(&this->VertexToVertexInstances,&local_28,(int)param_1,0);
  if (pTVar3->ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexToVertexInstances.Find(VertexID).Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                       ,0xdb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_18,(int)param_1,0);
  if (pTVar3->ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexToEdges.Find(VertexID).Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = FMeshElementChannels::Get(this->VertexElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->VertexToVertexInstances,(int)param_1,0);
  FMeshElementIndexer::RemoveKey(&this->VertexToEdges,(int)param_1,0);
  return;
}

// DeleteVertexInstance @ 143669be0

void __thiscall
FMeshDescription::DeleteVertexInstance
          (FMeshDescription *this,FVertexInstanceID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar1;
  FMeshElementContainer *this_01;
  TArrayView<int_const_,int> *pTVar2;
  FVertexID local_res10 [2];
  TArrayView<int_const_,int> local_18;
  
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,
                       0);
  pFVar1 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)param_1);
  local_res10[0] = *pFVar1;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->VertexToVertexInstances,(int)local_res10[0],(int)param_1,0);
  this_01 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FMeshElementContainer::Remove(this_01,(int)param_1);
  FMeshElementIndexer::RemoveKey(&this->VertexInstanceToTriangles,(int)param_1,0);
  if (param_2 != (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = FMeshElementIndexer::Find
                       (&this->VertexToVertexInstances,&local_18,(int)local_res10[0],0);
    if (pTVar2->ArrayNum == 0) {
      pTVar2 = FMeshElementIndexer::Find(&this->VertexToEdges,&local_18,(int)local_res10[0],0);
      if (pTVar2->ArrayNum == 0) {
        TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                  (param_2,local_res10);
      }
    }
  }
  return;
}

// Empty @ 14366bfb0

void __thiscall FMeshDescription::Empty(FMeshDescription *this)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14366c04d;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar15;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14366c04d:
  uVar12 = *(uint *)&(this->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Elements).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14366c150;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14366c150:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)
             (*(longlong *)&this->Elements + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    piVar2 = (int *)(lVar9 + 0x88);
    iVar4 = *piVar2;
    if (*(longlong *)(lVar9 + 0x80) != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x80);
    }
    piVar10 = (int *)(lVar9 + 0x1c);
    while( true ) {
      if (*piVar2 != iVar4) {
        `TCheckedPointerIterator<FMeshElementContainer,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((TBitArray<FDefaultBitArrayAllocator> *)(piVar10 + -7) ==
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)iVar4 * 0x80 + lVar9)) break;
      piVar10[-1] = 0;
      if ((*piVar10 < 0) || (0x80 < *piVar10)) {
        *piVar10 = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(piVar10 + -7),0);
      }
      FAttributesSetBase::Initialize((FAttributesSetBase *)(piVar10 + 1),0);
      piVar10[0x17] = 0;
      piVar10 = piVar10 + 0x20;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  FMeshElementIndexer::Reset(&this->VertexToVertexInstances);
  FMeshElementIndexer::Reset(&this->VertexToEdges);
  FMeshElementIndexer::Reset(&this->VertexInstanceToTriangles);
  FMeshElementIndexer::Reset(&this->EdgeToTriangles);
  FMeshElementIndexer::Reset(&this->UVToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonGroupToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonGroupToPolygons);
  return;
}

// FindPolygonPerimeter @ 14366c600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::FindPolygonPerimeter
          (FMeshDescription *this,FPolygonID param_1,TArrayView<FEdgeID,int> *param_2)

{
  FTriangleID FVar1;
  undefined4 uVar2;
  FEdgeID FVar3;
  int iVar4;
  FEdgeID FVar5;
  FEdgeID FVar6;
  FVertexID FVar7;
  FMeshAttributeArraySetBase *pFVar8;
  TMeshAttributeArraySet<FVertexID> *pTVar9;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar10;
  code *pcVar11;
  FMeshDescription *pFVar12;
  bool bVar13;
  uint uVar14;
  TMeshAttributeArrayBase<FVertexID> *pTVar15;
  FVertexID *pFVar16;
  TArrayView<FVertexID,int> *pTVar17;
  TArrayView<FEdgeID,int> *pTVar18;
  FVertexID *pFVar19;
  uint uVar20;
  uint uVar21;
  FMeshAttributeArraySetBase *pFVar22;
  ForElementType<FEdgeID> FVar23;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar24;
  ForElementType<FEdgeID> FVar25;
  longlong lVar26;
  FEdgeID *pFVar27;
  int iVar28;
  FEdgeID *pFVar29;
  ForElementType<FEdgeID> FVar30;
  FEdgeID *pFVar31;
  uint uVar32;
  undefined1 auStack_238 [32];
  FEdgeID *local_218;
  ForElementType<FEdgeID> local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  FEdgeID local_1e8;
  FEdgeID local_1e4;
  uint local_1e0;
  longlong local_1d8;
  FMeshDescription *local_1d0;
  TArrayView<FTriangleID_const_,int> local_1c8;
  FEdgeID *local_1b8;
  TArrayView<FEdgeID,int> local_1b0;
  TArrayView<FVertexID,int> local_1a0;
  TArrayView<FEdgeID,int> local_190;
  TArrayView<FVertexID,int> local_180;
  TArrayView<FEdgeID,int> *local_170;
  TArrayView<FVertexID,int> local_168;
  TArrayView<FVertexID,int> local_158;
  TArrayView<FVertexID,int> local_148;
  TArrayView<FVertexID,int> local_138;
  TArrayView<FVertexID,int> local_128;
  TArrayView<FVertexID,int> local_118;
  TArrayView<FVertexID,int> local_108;
  TArrayView<FVertexID,int> local_f8;
  TArrayView<FEdgeID,int> local_e8;
  TArrayView<FVertexID,int> local_d8;
  TArrayView<FVertexID,int> local_c8;
  TArrayView<FVertexID,int> local_b8;
  ForElementType<FEdgeID> local_a8;
  int local_80;
  int local_7c;
  ForElementType<int> local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_1d0 = this;
  local_170 = param_2;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_1c8,(int)param_1,0);
  if ((param_2->ArrayNum != local_1c8.ArrayNum + 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Edges.Num() == PolygonTris.Num() + 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                          ,0x50e,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (local_1c8.ArrayNum == 1) {
    iVar28 = 0;
    lVar26 = 0;
    pFVar29 = (FEdgeID *)0x0;
    do {
      if (local_1c8.ArrayNum < 1) {
        local_210 = (ForElementType<FEdgeID>)(longlong)local_1c8.ArrayNum;
        local_218 = (FEdgeID *)0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      pFVar8 = (this->TriangleEdges).ArrayPtr;
      FVar1 = *local_1c8.DataPtr;
      uVar32 = pFVar8[2].Type;
      if ((this->TriangleEdges).Extent == 0) {
        if ((int)uVar32 < 1) {
          local_218 = (FEdgeID *)0x0;
          local_210 = (ForElementType<FEdgeID>)(longlong)(int)uVar32;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar22 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar22,&local_1b0,(int)FVar1);
        uVar32 = local_1b0.ArrayNum;
      }
      else {
        if ((int)uVar32 < 1) {
          local_218 = (FEdgeID *)0x0;
          local_210 = (ForElementType<FEdgeID>)(longlong)(int)uVar32;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar22 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        local_1b0.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar22,(int)FVar1);
        uVar32 = (this->TriangleEdges).Extent;
        local_1b0.ArrayNum = uVar32;
        if (((int)uVar32 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if ((int)uVar32 <= iVar28) {
        local_210 = (ForElementType<FEdgeID>)(longlong)(int)uVar32;
        local_218 = pFVar29;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      uVar2 = *(undefined4 *)(&(local_1b0.DataPtr)->field_0x0 + lVar26);
      if ((param_2->ArrayNum <= iVar28) &&
         (local_218 = pFVar29, local_210 = (ForElementType<FEdgeID>)(longlong)param_2->ArrayNum,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar28 = iVar28 + 1;
      pFVar29 = (FEdgeID *)&pFVar29->field_0x1;
      *(undefined4 *)(&param_2->DataPtr->field_0x0 + lVar26) = uVar2;
      lVar26 = lVar26 + 4;
    } while (iVar28 < 3);
  }
  else {
    local_7c = 8;
    local_a8.SecondaryData = (ForElementType<FEdgeID>)0x0;
    local_80 = 0;
    local_78.SecondaryData = (ForElementType<int>)0x0;
    local_50 = 0;
    local_4c = 8;
    local_1e4 = (FEdgeID)0x0;
    local_1d8 = 4;
    if (0 < local_1c8.ArrayNum) {
      do {
        FVar3 = local_1e4;
        uVar32 = 0;
        if ((int)local_1e4 < local_1c8.ArrayNum) {
          uVar32 = ~(uint)local_1e4 >> 0x1f;
        }
        if (uVar32 == 0) {
          local_210 = (ForElementType<FEdgeID>)(longlong)local_1c8.ArrayNum;
          local_218 = (FEdgeID *)(longlong)(int)local_1e4;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar8 = (this->TriangleEdges).ArrayPtr;
        FVar1 = local_1c8.DataPtr[(int)FVar3];
        uVar32 = pFVar8[2].Type;
        if ((this->TriangleEdges).Extent == 0) {
          if ((int)uVar32 < 1) {
            local_218 = (FEdgeID *)0x0;
            local_210 = (ForElementType<FEdgeID>)(longlong)(int)uVar32;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar22 = pFVar8 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar22 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar22,&local_190,(int)FVar1);
        }
        else {
          if ((int)uVar32 < 1) {
            local_218 = (FEdgeID *)0x0;
            local_210 = (ForElementType<FEdgeID>)(longlong)(int)uVar32;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar22 = pFVar8 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar22 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
          }
          local_190.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar22,(int)FVar1);
          local_190.ArrayNum = (this->TriangleEdges).Extent;
          if ((local_190.ArrayNum < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar29 = local_190.DataPtr + local_190.ArrayNum;
        FVar30 = local_210;
        for (pFVar27 = local_190.DataPtr; local_210 = FVar30, pFVar27 != pFVar29;
            pFVar27 = pFVar27 + 1) {
          local_1e8 = *pFVar27;
          FVar25 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar25 = local_a8.SecondaryData;
          }
          local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
          for (FVar23 = FVar25;
              FVar23 != (ForElementType<FEdgeID>)((longlong)FVar25 + (longlong)local_210 * 4);
              FVar23 = (ForElementType<FEdgeID>)((longlong)FVar23 + 4)) {
            if (*(FEdgeID *)FVar23 == local_1e8) {
              uVar32 = (uint)((longlong)FVar23 - (longlong)FVar25 >> 2);
              if (uVar32 != 0xffffffff) {
                uVar14 = 0;
                if ((int)uVar32 < local_80) {
                  uVar14 = ~uVar32 >> 0x1f;
                }
                if (uVar14 == 0) {
                  local_218 = (FEdgeID *)(longlong)(int)uVar32;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  FVar30 = local_210;
                  if (bVar13) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                local_210 = FVar30;
                FVar30 = (ForElementType<FEdgeID>)&local_a8;
                if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar30 = local_a8.SecondaryData;
                }
                iVar28 = (local_80 - uVar32) + -1;
                if (1 < iVar28) {
                  iVar28 = 1;
                }
                if (iVar28 != 0) {
                  memmove((FEdgeID *)((longlong)FVar30 + (longlong)(int)uVar32 * 4),
                          (FEdgeID *)((longlong)FVar30 + (longlong)(local_80 - iVar28) * 4),
                          (longlong)iVar28 << 2);
                }
                local_80 = local_80 + -1;
                uVar14 = 0;
                if ((int)uVar32 < local_50) {
                  uVar14 = ~uVar32 >> 0x1f;
                }
                if (uVar14 == 0) {
                  local_218 = (FEdgeID *)(longlong)(int)uVar32;
                  local_210 = (ForElementType<FEdgeID>)(longlong)local_50;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                FVar30 = (ForElementType<FEdgeID>)&local_78;
                if (local_78.SecondaryData != (ForElementType<int>)0x0) {
                  FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
                }
                iVar28 = (local_50 - uVar32) + -1;
                if (1 < iVar28) {
                  iVar28 = 1;
                }
                if (iVar28 != 0) {
                  memmove((FEdgeID *)((longlong)FVar30 + (longlong)(int)uVar32 * 4),
                          (FEdgeID *)((longlong)FVar30 + (longlong)(local_50 - iVar28) * 4),
                          (longlong)iVar28 << 2);
                }
                local_50 = local_50 + -1;
                goto LAB_14366cc8e;
              }
              break;
            }
          }
          FVar25 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar25 = local_a8.SecondaryData;
          }
          local_210 = FVar30;
          if ((ulonglong)FVar25 <= &local_1e8) {
            FVar25 = (ForElementType<FEdgeID>)&local_a8;
            if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
              FVar25 = local_a8.SecondaryData;
            }
            if (&local_1e8 < (FEdgeID *)((longlong)FVar25 + (longlong)local_7c * 4)) {
              local_200 = (longlong)local_80;
              local_1f8 = 4;
              local_218 = &local_1e8;
              local_210 = (ForElementType<FEdgeID>)&local_a8;
              if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                local_210 = local_a8.SecondaryData;
              }
              local_208 = (longlong)local_7c;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
          iVar28 = local_80;
          if (local_80 == local_7c) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                               (0x404,&local_a8,&local_7c);
          }
          local_80 = iVar28 + 1;
          FVar30 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar30 = local_a8.SecondaryData;
          }
          *(FEdgeID *)((longlong)FVar30 + (longlong)iVar28 * 4) = local_1e8;
          FVar30 = (ForElementType<FEdgeID>)&local_78;
          if (local_78.SecondaryData != (ForElementType<int>)0x0) {
            FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
          }
          if ((ulonglong)FVar30 <= &local_1e4) {
            FVar30 = (ForElementType<FEdgeID>)&local_78;
            if (local_78.SecondaryData != (ForElementType<int>)0x0) {
              FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
            }
            if (&local_1e4 < (FEdgeID *)((longlong)FVar30 + (longlong)local_4c * 4)) {
              local_200 = (longlong)local_50;
              local_1f8 = 4;
              local_218 = &local_1e4;
              local_210 = (ForElementType<FEdgeID>)&local_78;
              if (local_78.SecondaryData != (ForElementType<int>)0x0) {
                local_210 = (ForElementType<FEdgeID>)local_78.SecondaryData;
              }
              local_208 = (longlong)local_4c;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
          iVar28 = local_50;
          if (local_50 == local_4c) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_78,&local_4c);
          }
          local_50 = iVar28 + 1;
          FVar30 = (ForElementType<FEdgeID>)&local_78;
          if (local_78.SecondaryData != (ForElementType<int>)0x0) {
            FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
          }
          *(FEdgeID *)((longlong)FVar30 + (longlong)iVar28 * 4) = local_1e4;
LAB_14366cc8e:
          this = local_1d0;
          FVar30 = local_210;
        }
        local_1e4 = (FEdgeID)((int)local_1e4 + 1);
      } while ((int)local_1e4 < local_1c8.ArrayNum);
    }
    if ((local_80 != local_1c8.ArrayNum + 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerimeterEdges.Num() == PolygonTris.Num() + 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x536,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((local_80 != local_50) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerimeterEdges.Num() == TriIndices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x537,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (0 < local_80 + -2) {
      local_1e0 = 1;
      local_1b8 = (FEdgeID *)&DAT_00000001;
      lVar26 = 4;
      do {
        pFVar29 = local_1b8;
        uVar32 = local_1e0;
        uVar14 = 0;
        if ((int)(local_1e0 - 1) < local_80) {
          uVar14 = ~(local_1e0 - 1) >> 0x1f;
        }
        if (uVar14 == 0) {
          local_218 = (FEdgeID *)(longlong)(int)(local_1e0 - 1);
          local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pTVar9 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
        FVar30 = (ForElementType<FEdgeID>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar30 = local_a8.SecondaryData;
        }
        iVar28 = *(int *)((longlong)&((FEdgeID *)((longlong)FVar30 + -4))->field_0x0 + lVar26);
        if ((this->EdgeVertices).Extent == 0) {
          iVar4 = (pTVar9->ArrayForChannels).ArrayNum;
          if (iVar4 < 1) {
            local_218 = (FEdgeID *)0x0;
            local_210 = (ForElementType<FEdgeID>)(longlong)iVar4;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar10 = (pTVar9->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar24 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar9->ArrayForChannels;
          if (FVar10 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar24 = FVar10;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar24,&local_180,iVar28);
        }
        else {
          pTVar15 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar9,0);
          local_180.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar15,iVar28);
          local_180.ArrayNum = (this->EdgeVertices).Extent;
          if ((local_180.ArrayNum < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar28 = local_180.ArrayNum;
        pFVar19 = local_180.DataPtr;
        FVar30 = (ForElementType<FEdgeID>)(longlong)local_180.ArrayNum;
        uVar14 = uVar32;
        if ((int)uVar32 < local_80) {
          do {
            uVar14 = 0;
            if ((int)uVar32 < local_80) {
              uVar14 = ~uVar32 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
              local_218 = (FEdgeID *)(longlong)(int)uVar32;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            pFVar12 = local_1d0;
            FVar25 = (ForElementType<FEdgeID>)&local_a8;
            if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
              FVar25 = local_a8.SecondaryData;
            }
            pTVar9 = (TMeshAttributeArraySet<FVertexID> *)(local_1d0->EdgeVertices).ArrayPtr;
            FVar3 = *(FEdgeID *)((longlong)FVar25 + (longlong)pFVar29 * 4);
            if ((local_1d0->EdgeVertices).Extent == 0) {
              iVar4 = (pTVar9->ArrayForChannels).ArrayNum;
              if (iVar4 < 1) {
                local_218 = (FEdgeID *)0x0;
                local_210 = (ForElementType<FEdgeID>)(longlong)iVar4;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar13) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              FVar10 = (pTVar9->ArrayForChannels).AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)
                       &pTVar9->ArrayForChannels;
              if (FVar10 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
                FVar24 = FVar10;
              }
              TAttributeArrayContainer<FVertexID>::Get
                        ((TAttributeArrayContainer<FVertexID> *)FVar24,&local_1a0,(int)FVar3);
              pFVar16 = local_1a0.DataPtr;
            }
            else {
              pTVar15 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar9,0);
              pFVar16 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar15,(int)FVar3);
              local_1a0.ArrayNum = (pFVar12->EdgeVertices).Extent;
              local_1a0.DataPtr = pFVar16;
              if ((local_1a0.ArrayNum < 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            iVar4 = local_1a0.ArrayNum;
            FVar25 = (ForElementType<FEdgeID>)(longlong)local_1a0.ArrayNum;
            if (iVar28 < 1) {
              local_218 = (FEdgeID *)0x0;
              local_210 = FVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iVar4 < 1) {
              local_218 = (FEdgeID *)0x0;
              local_210 = FVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (*pFVar19 == *pFVar16) {
LAB_14366dddd:
              uVar14 = local_1e0;
              pFVar27 = (FEdgeID *)(longlong)(int)local_1e0;
              if ((int)local_1e0 < (int)uVar32) {
                uVar20 = 0;
                if ((int)uVar32 < local_80) {
                  uVar20 = ~uVar32 >> 0x1f;
                }
                if (uVar20 == 0) {
                  local_218 = (FEdgeID *)(longlong)(int)uVar32;
                  local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                FVar30 = (ForElementType<FEdgeID>)&local_a8;
                if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar30 = local_a8.SecondaryData;
                }
                pFVar31 = (FEdgeID *)((longlong)FVar30 + (longlong)pFVar29 * 4);
                uVar20 = 0;
                if ((int)uVar14 < local_80) {
                  uVar20 = ~uVar14 >> 0x1f;
                }
                if (uVar20 == 0) {
                  local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
                  local_218 = pFVar27;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                lVar26 = local_1d8;
                FVar30 = (ForElementType<FEdgeID>)&local_a8;
                if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar30 = local_a8.SecondaryData;
                }
                FVar3 = *(FEdgeID *)(local_1d8 + (longlong)FVar30);
                *(FEdgeID *)(local_1d8 + (longlong)FVar30) = *pFVar31;
                *pFVar31 = FVar3;
                uVar20 = 0;
                if ((int)uVar32 < local_50) {
                  uVar20 = ~uVar32 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (local_218 = pFVar29, local_210 = (ForElementType<FEdgeID>)(longlong)local_50,
                   bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar13)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                FVar30 = (ForElementType<FEdgeID>)&local_78;
                if (local_78.SecondaryData != (ForElementType<int>)0x0) {
                  FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
                }
                pFVar29 = (FEdgeID *)((longlong)FVar30 + (longlong)pFVar29 * 4);
                uVar32 = 0;
                if ((int)uVar14 < local_50) {
                  uVar32 = ~uVar14 >> 0x1f;
                }
                if (uVar32 == 0) {
                  local_210 = (ForElementType<FEdgeID>)(longlong)local_50;
                  local_218 = local_1b8;
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar13) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                FVar30 = (ForElementType<FEdgeID>)&local_78;
                if (local_78.SecondaryData != (ForElementType<int>)0x0) {
                  FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
                }
                FVar3 = *(FEdgeID *)(lVar26 + (longlong)FVar30);
                *(FEdgeID *)(lVar26 + (longlong)FVar30) = *pFVar29;
                *pFVar29 = FVar3;
                local_1d8 = lVar26;
              }
              break;
            }
            if (iVar28 < 1) {
              local_218 = (FEdgeID *)0x0;
              local_210 = FVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iVar4 < 2) {
              local_218 = (FEdgeID *)&DAT_00000001;
              local_210 = FVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (*pFVar19 == pFVar16[1]) goto LAB_14366dddd;
            if (iVar28 < 2) {
              local_218 = (FEdgeID *)&DAT_00000001;
              local_210 = FVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iVar4 < 1) {
              local_218 = (FEdgeID *)0x0;
              local_210 = FVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (pFVar19[1] == *pFVar16) goto LAB_14366dddd;
            if (iVar28 < 2) {
              local_218 = (FEdgeID *)&DAT_00000001;
              local_210 = FVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iVar4 < 2) {
              local_218 = (FEdgeID *)&DAT_00000001;
              local_210 = FVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (pFVar19[1] == pFVar16[1]) goto LAB_14366dddd;
            uVar32 = uVar32 + 1;
            pFVar29 = (FEdgeID *)&pFVar29->field_0x1;
            uVar14 = local_1e0;
          } while ((int)uVar32 < local_80);
        }
        local_1e0 = uVar14 + 1;
        lVar26 = local_1d8 + 4;
        local_1b8 = (FEdgeID *)&local_1b8->field_0x1;
        this = local_1d0;
        local_1d8 = lVar26;
      } while ((int)uVar14 < local_80 + -2);
    }
    pFVar29 = (FEdgeID *)0x0;
    uVar20 = local_80 - 1;
    uVar14 = 0;
    uVar32 = uVar14;
    if ((int)uVar20 < local_80) {
      uVar32 = ~uVar20 >> 0x1f;
    }
    if (uVar32 == 0) {
      local_218 = (FEdgeID *)(longlong)(int)uVar20;
      local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30 = (ForElementType<FEdgeID>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar30 = local_a8.SecondaryData;
    }
    pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&this->EdgeVertices,&local_168,
                         (int)((FEdgeID *)((longlong)FVar30 + -4))[local_80]);
    if (pTVar17->ArrayNum < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar19 = pTVar17->DataPtr;
    if (local_80 < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30 = (ForElementType<FEdgeID>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar30 = local_a8.SecondaryData;
    }
    pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&this->EdgeVertices,&local_158,(int)*(FEdgeID *)FVar30);
    if (pTVar17->ArrayNum < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*pFVar19 != *pTVar17->DataPtr) {
      uVar20 = local_80 - 1;
      uVar32 = uVar14;
      if ((int)uVar20 < local_80) {
        uVar32 = ~uVar20 >> 0x1f;
      }
      if (uVar32 == 0) {
        local_218 = (FEdgeID *)(longlong)(int)uVar20;
        local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FVar30 = (ForElementType<FEdgeID>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FVar30 = local_a8.SecondaryData;
      }
      pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&this->EdgeVertices,&local_148,
                           (int)*(FEdgeID *)((longlong)FVar30 + (longlong)(local_80 + -1) * 4));
      if (pTVar17->ArrayNum < 1) {
        local_218 = (FEdgeID *)0x0;
        local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      pFVar19 = pTVar17->DataPtr;
      if (local_80 < 1) {
        local_218 = (FEdgeID *)0x0;
        local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FVar30 = (ForElementType<FEdgeID>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FVar30 = local_a8.SecondaryData;
      }
      pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&this->EdgeVertices,&local_138,(int)*(FEdgeID *)FVar30);
      if (pTVar17->ArrayNum < 2) {
        local_218 = (FEdgeID *)&DAT_00000001;
        local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (*pFVar19 != pTVar17->DataPtr[1]) {
        uVar20 = local_80 - 1;
        uVar32 = uVar14;
        if ((int)uVar20 < local_80) {
          uVar32 = ~uVar20 >> 0x1f;
        }
        if (uVar32 == 0) {
          local_218 = (FEdgeID *)(longlong)(int)uVar20;
          local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        FVar30 = (ForElementType<FEdgeID>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar30 = local_a8.SecondaryData;
        }
        pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&this->EdgeVertices,&local_128,
                             (int)*(FEdgeID *)((longlong)FVar30 + (longlong)(local_80 + -1) * 4));
        if (pTVar17->ArrayNum < 2) {
          local_218 = (FEdgeID *)&DAT_00000001;
          local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar19 = pTVar17->DataPtr;
        if (local_80 < 1) {
          local_218 = (FEdgeID *)0x0;
          local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        FVar30 = (ForElementType<FEdgeID>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar30 = local_a8.SecondaryData;
        }
        pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&this->EdgeVertices,&local_118,(int)*(FEdgeID *)FVar30);
        if (pTVar17->ArrayNum < 1) {
          local_218 = (FEdgeID *)0x0;
          local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (pFVar19[1] != *pTVar17->DataPtr) {
          uVar20 = local_80 - 1;
          uVar32 = uVar14;
          if ((int)uVar20 < local_80) {
            uVar32 = ~uVar20 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_218 = (FEdgeID *)(longlong)(int)uVar20;
            local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar30 = local_a8.SecondaryData;
          }
          pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&this->EdgeVertices,&local_108,
                               (int)((FEdgeID *)((longlong)FVar30 + -4))[local_80]);
          if (pTVar17->ArrayNum < 2) {
            local_218 = (FEdgeID *)&DAT_00000001;
            local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar19 = pTVar17->DataPtr;
          if (local_80 < 1) {
            local_218 = (FEdgeID *)0x0;
            local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar30 = local_a8.SecondaryData;
          }
          pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&this->EdgeVertices,&local_f8,(int)*(FEdgeID *)FVar30);
          if (pTVar17->ArrayNum < 2) {
            local_218 = (FEdgeID *)&DAT_00000001;
            local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if ((pFVar19[1] != pTVar17->DataPtr[1]) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EdgeVertices[PerimeterEdges.Last()][0] == EdgeVertices[PerimeterEdges[0]][0] || EdgeVertices[PerimeterEdges.Last()][0] == EdgeVertices[PerimeterEdges[0]][1] || EdgeVertices[PerimeterEdges.Last()][1] == EdgeVertices[PerimeterEdges[0]][0] || EdgeVertices[PerimeterEdges.Last()][1] == EdgeVertices[PerimeterEdges[0]][1]"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                                  ,0x54d,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
      }
    }
    if (local_80 < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30 = (ForElementType<FEdgeID>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar30 = local_a8.SecondaryData;
    }
    FVar3 = *(FEdgeID *)FVar30;
    if (local_80 < 2) {
      local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
      local_218 = (FEdgeID *)&DAT_00000001;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30 = (ForElementType<FEdgeID>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar30 = local_a8.SecondaryData;
    }
    FVar5 = *(FEdgeID *)((longlong)FVar30 + 4);
    if (local_50 < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)local_50;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar30 = (ForElementType<FEdgeID>)&local_78;
    if (local_78.SecondaryData != (ForElementType<int>)0x0) {
      FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
    }
    FVar6 = *(FEdgeID *)FVar30;
    uVar32 = uVar14;
    if ((int)FVar6 < local_1c8.ArrayNum) {
      uVar32 = ~(uint)FVar6 >> 0x1f;
    }
    if (uVar32 == 0) {
      local_210 = (ForElementType<FEdgeID>)(longlong)local_1c8.ArrayNum;
      local_218 = (FEdgeID *)(longlong)(int)FVar6;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    FVar1 = local_1c8.DataPtr[(int)FVar6];
    pTVar18 = TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                        (&this->TriangleEdges,&local_e8,(int)FVar1);
    pFVar27 = pTVar18->DataPtr;
    for (pFVar31 = pFVar27; pFVar31 != pFVar27 + pTVar18->ArrayNum; pFVar31 = pFVar31 + 1) {
      if (*pFVar31 == FVar3) {
        iVar28 = (int)((longlong)pFVar31 - (longlong)pFVar27 >> 2);
        goto LAB_14366daee;
      }
    }
    iVar28 = -1;
LAB_14366daee:
    pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&this->TriangleVertices,&local_d8,(int)FVar1);
    iVar28 = iVar28 + 1;
    pFVar19 = TArrayView<FVertexID,int>::operator[]
                        (pTVar17,iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                                          (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) &
                                                0xffffffffU) >> 0x1f)) * -3);
    FVar7 = *pFVar19;
    pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&this->EdgeVertices,&local_c8,(int)FVar5);
    if (pTVar17->ArrayNum < 1) {
      local_218 = (FEdgeID *)0x0;
      local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*pTVar17->DataPtr != FVar7) {
      pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&this->EdgeVertices,&local_b8,(int)FVar5);
      if (pTVar17->ArrayNum < 2) {
        local_218 = (FEdgeID *)&DAT_00000001;
        local_210 = (ForElementType<FEdgeID>)(longlong)pTVar17->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if ((pTVar17->DataPtr[1] != FVar7) && (pFVar27 = pFVar29, pFVar31 = pFVar29, 0 < local_80 / 2)
         ) {
        do {
          uVar21 = (uint)pFVar27;
          uVar32 = local_80 + ~uVar21;
          uVar20 = uVar14;
          if ((int)uVar32 < local_80) {
            uVar20 = ~uVar32 >> 0x1f;
          }
          if (uVar20 == 0) {
            local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
            local_218 = (FEdgeID *)(longlong)(int)uVar32;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar30 = local_a8.SecondaryData;
          }
          pFVar27 = (FEdgeID *)((longlong)FVar30 + (longlong)(int)uVar32 * 4);
          uVar32 = uVar14;
          if ((int)uVar21 < local_80) {
            uVar32 = ~uVar21 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
            local_218 = (FEdgeID *)(longlong)(int)uVar21;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_a8;
          if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar30 = local_a8.SecondaryData;
          }
          FVar3 = *(FEdgeID *)((longlong)FVar30 + (longlong)pFVar31 * 4);
          *(FEdgeID *)((longlong)FVar30 + (longlong)pFVar31 * 4) = *pFVar27;
          *pFVar27 = FVar3;
          uVar20 = ~uVar21 + local_80;
          uVar32 = uVar14;
          if ((int)uVar20 < local_50) {
            uVar32 = ~uVar20 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_218 = (FEdgeID *)(longlong)(int)uVar20;
            local_210 = (ForElementType<FEdgeID>)(longlong)local_50;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_78;
          if (local_78.SecondaryData != (ForElementType<int>)0x0) {
            FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
          }
          pFVar27 = (FEdgeID *)((longlong)FVar30 + (longlong)(int)uVar20 * 4);
          uVar32 = uVar14;
          if ((int)uVar21 < local_50) {
            uVar32 = ~uVar21 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_210 = (ForElementType<FEdgeID>)(longlong)local_50;
            local_218 = pFVar31;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar30 = (ForElementType<FEdgeID>)&local_78;
          if (local_78.SecondaryData != (ForElementType<int>)0x0) {
            FVar30 = (ForElementType<FEdgeID>)local_78.SecondaryData;
          }
          FVar3 = *(FEdgeID *)((longlong)FVar30 + (longlong)pFVar31 * 4);
          *(FEdgeID *)((longlong)FVar30 + (longlong)pFVar31 * 4) = *pFVar27;
          *pFVar27 = FVar3;
          pFVar27 = (FEdgeID *)(ulonglong)(uVar21 + 1);
          pFVar31 = (FEdgeID *)&pFVar31->field_0x1;
        } while ((int)(uVar21 + 1) < local_80 / 2);
      }
    }
    pTVar18 = local_170;
    pFVar27 = pFVar29;
    if (0 < local_80) {
      do {
        uVar20 = (uint)pFVar29;
        uVar32 = uVar14;
        if ((int)uVar20 < local_80) {
          uVar32 = ~uVar20 >> 0x1f;
        }
        if (uVar32 == 0) {
          local_210 = (ForElementType<FEdgeID>)(longlong)local_80;
          local_218 = (FEdgeID *)(longlong)(int)uVar20;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar28 = pTVar18->ArrayNum;
        FVar30 = (ForElementType<FEdgeID>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar30 = local_a8.SecondaryData;
        }
        uVar32 = uVar14;
        if ((int)uVar20 < iVar28) {
          uVar32 = ~uVar20 >> 0x1f;
        }
        uVar2 = *(undefined4 *)(&pFVar27->field_0x0 + (longlong)FVar30);
        if (uVar32 == 0) {
          local_218 = (FEdgeID *)(longlong)(int)uVar20;
          local_210 = (ForElementType<FEdgeID>)(longlong)iVar28;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar29 = (FEdgeID *)(ulonglong)(uVar20 + 1);
        *(undefined4 *)(&pTVar18->DataPtr->field_0x0 + (longlong)&pFVar27->field_0x0) = uVar2;
        pFVar27 = pFVar27 + 1;
      } while ((int)(uVar20 + 1) < local_80);
    }
    if (local_78.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_78.SecondaryData);
    }
    if (local_a8.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FMemory::Free((void *)local_a8.SecondaryData);
    }
  }
  return;
}

// FindPolygonPerimeter @ 14366e120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::FindPolygonPerimeter
          (FMeshDescription *this,TArrayView<FTriangleID_const_,int> *param_1,
          TArrayView<TTuple<int,int>,int> *param_2)

{
  FEdgeID *pFVar1;
  FEdgeID FVar2;
  FTriangleID FVar3;
  FVertexID FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  TMeshAttributeArraySet<FVertexID> *pTVar6;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar7;
  undefined8 uVar8;
  code *pcVar9;
  TTuple<int,int> TVar10;
  TTuple<int,int> TVar11;
  FMeshDescription *pFVar12;
  TArrayView<TTuple<int,int>,int> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TTuple<int,int> *pTVar17;
  TMeshAttributeArrayBase<FVertexID> *pTVar18;
  FVertexID *pFVar19;
  TArrayView<FVertexID,int> *pTVar20;
  FTriangleID *pFVar21;
  TArrayView<FEdgeID,int> *pTVar22;
  FVertexID *pFVar23;
  FMeshAttributeArraySetBase *pFVar24;
  ForElementType<FEdgeID> FVar25;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar26;
  ForElementType<FEdgeID> FVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  ForElementType<FEdgeID> FVar34;
  FEdgeID FVar35;
  FEdgeID *pFVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  FEdgeID *pFVar40;
  undefined1 auStack_268 [32];
  FEdgeID *local_248;
  ForElementType<FEdgeID> local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  FEdgeID local_218;
  uint local_214;
  FEdgeID *local_210;
  FEdgeID local_208;
  int iStack_204;
  FMeshDescription *local_200;
  longlong local_1f8;
  longlong local_1f0;
  uchar local_1e8 [16];
  ForElementType<TTuple<int,int>_> local_1d8;
  TArrayView<FTriangleID_const_,int> *local_1d0;
  TArrayView<FVertexID,int> local_1c8;
  TArrayView<FEdgeID,int> local_1b8;
  TArrayView<FVertexID,int> local_1a8;
  TArrayView<TTuple<int,int>,int> *local_198;
  TArrayView<FVertexID,int> local_190;
  TArrayView<FVertexID,int> local_180;
  TArrayView<FVertexID,int> local_170;
  TArrayView<FVertexID,int> local_160;
  TArrayView<FVertexID,int> local_150;
  TArrayView<FVertexID,int> local_140;
  TArrayView<FVertexID,int> local_130;
  TArrayView<FVertexID,int> local_120;
  TArrayView<FEdgeID,int> local_110;
  TArrayView<FVertexID,int> local_100;
  TArrayView<FVertexID,int> local_f0;
  TArrayView<FVertexID,int> local_e0;
  ForElementType<FEdgeID> local_d0;
  int local_a8;
  int local_a4 [3];
  ForElementType<TTuple<int,int>_> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_200 = this;
  local_1d0 = param_1;
  local_198 = param_2;
  if ((param_2->ArrayNum != param_1->ArrayNum + 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Num() == Triangles.Num() + 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                          ,0x56e,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar33 = param_1->ArrayNum;
  if (iVar33 == 1) {
    local_1e8[0] = '\0';
    local_1e8[1] = '\0';
    local_1e8[2] = '\0';
    local_1e8[3] = '\0';
    local_1e8[4] = '\0';
    local_1e8[5] = '\0';
    local_1e8[6] = '\0';
    local_1e8[7] = '\0';
    pTVar17 = TArrayView<TTuple<int,int>,int>::operator[](param_2,0);
    local_1e8[8] = '\0';
    local_1e8[9] = '\0';
    local_1e8[10] = '\0';
    local_1e8[0xb] = '\0';
    *pTVar17 = (TTuple<int,int>)0x0;
    local_1e8[0xc] = '\x01';
    local_1e8[0xd] = '\0';
    local_1e8[0xe] = '\0';
    local_1e8[0xf] = '\0';
    pTVar17 = TArrayView<TTuple<int,int>,int>::operator[](param_2,1);
    TVar10._4_1_ = local_1e8[0xc];
    TVar10._5_1_ = local_1e8[0xd];
    TVar10._6_1_ = local_1e8[0xe];
    TVar10._7_1_ = local_1e8[0xf];
    TVar10._0_1_ = local_1e8[8];
    TVar10._1_1_ = local_1e8[9];
    TVar10._2_1_ = local_1e8[10];
    TVar10._3_1_ = local_1e8[0xb];
    local_1d8._0_4_ = 0;
    local_1d8._4_4_ = 2;
    *pTVar17 = TVar10;
    pTVar17 = TArrayView<TTuple<int,int>,int>::operator[](param_2,2);
    TVar11._4_4_ = local_1d8._4_4_;
    TVar11._0_4_ = local_1d8._0_4_;
    *pTVar17 = TVar11;
  }
  else {
    FVar35 = (FEdgeID)0x0;
    local_a8 = 0;
    local_d0.SecondaryData = (ForElementType<FEdgeID>)0x0;
    local_1f8 = 8;
    local_a4[0] = 8;
    local_98.SecondaryData = (ForElementType<TTuple<int,int>_>)0x0;
    local_50 = 0;
    local_4c = 8;
    local_1f0 = 4;
    if (0 < iVar33) {
      local_210 = (FEdgeID *)0x0;
      do {
        pFVar36 = local_210;
        uVar37 = 0;
        if ((int)FVar35 < iVar33) {
          uVar37 = ~(uint)FVar35 >> 0x1f;
        }
        if (uVar37 == 0) {
          local_240 = (ForElementType<FEdgeID>)(longlong)iVar33;
          local_248 = (FEdgeID *)(longlong)(int)FVar35;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar33 = *(int *)(&param_1->DataPtr->field_0x0 + (longlong)pFVar36);
        pFVar5 = (this->TriangleEdges).ArrayPtr;
        uVar37 = pFVar5[2].Type;
        if ((this->TriangleEdges).Extent == 0) {
          if ((int)uVar37 < 1) {
            local_248 = (FEdgeID *)0x0;
            local_240 = (ForElementType<FEdgeID>)(longlong)(int)uVar37;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar24 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar24,&local_1b8,iVar33);
        }
        else {
          if ((int)uVar37 < 1) {
            local_248 = (FEdgeID *)0x0;
            local_240 = (ForElementType<FEdgeID>)(longlong)(int)uVar37;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar24 = pFVar5 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
          }
          local_1b8.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar24,iVar33);
          local_1b8.ArrayNum = (this->TriangleEdges).Extent;
          if ((local_1b8.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar33 = local_1b8.ArrayNum;
        FVar34 = (ForElementType<FEdgeID>)(longlong)local_1b8.ArrayNum;
        iVar28 = 0;
        pFVar40 = (FEdgeID *)0x0;
        pFVar36 = local_1b8.DataPtr;
        do {
          if ((iVar33 <= iVar28) &&
             (local_248 = pFVar40, local_240 = FVar34,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_218 = *pFVar36;
          FVar27 = (ForElementType<FEdgeID>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar27 = local_d0.SecondaryData;
          }
          for (FVar25 = FVar27;
              FVar25 != (ForElementType<FEdgeID>)((longlong)FVar27 + (longlong)local_a8 * 4);
              FVar25 = (ForElementType<FEdgeID>)((longlong)FVar25 + 4)) {
            if (*(FEdgeID *)FVar25 == local_218) {
              uVar37 = (uint)((longlong)FVar25 - (longlong)FVar27 >> 2);
              if (uVar37 != 0xffffffff) {
                uVar16 = 0;
                if ((int)uVar37 < local_a8) {
                  uVar16 = ~uVar37 >> 0x1f;
                }
                if (uVar16 == 0) {
                  local_248 = (FEdgeID *)(longlong)(int)uVar37;
                  local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                FVar27 = (ForElementType<FEdgeID>)&local_d0;
                if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar27 = local_d0.SecondaryData;
                }
                iVar15 = (local_a8 - uVar37) + -1;
                if (1 < iVar15) {
                  iVar15 = 1;
                }
                if (iVar15 != 0) {
                  memmove((FEdgeID *)((longlong)FVar27 + (longlong)(int)uVar37 * 4),
                          (FEdgeID *)((longlong)FVar27 + (longlong)(local_a8 - iVar15) * 4),
                          (longlong)iVar15 << 2);
                }
                local_a8 = local_a8 + -1;
                uVar16 = 0;
                if ((int)uVar37 < local_50) {
                  uVar16 = ~uVar37 >> 0x1f;
                }
                if (uVar16 == 0) {
                  local_248 = (FEdgeID *)(longlong)(int)uVar37;
                  local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                FVar27 = (ForElementType<FEdgeID>)&local_98;
                if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
                  FVar27 = (ForElementType<FEdgeID>)local_98.SecondaryData;
                }
                iVar15 = (local_50 - uVar37) + -1;
                if (1 < iVar15) {
                  iVar15 = 1;
                }
                if (iVar15 != 0) {
                  memmove((FEdgeID *)((longlong)FVar27 + (longlong)(int)uVar37 * 8),
                          (FEdgeID *)((longlong)FVar27 + (longlong)(local_50 - iVar15) * 8),
                          (longlong)iVar15 << 3);
                }
                local_50 = local_50 + -1;
                goto LAB_14366e634;
              }
              break;
            }
          }
          FVar27 = (ForElementType<FEdgeID>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar27 = local_d0.SecondaryData;
          }
          if ((ulonglong)FVar27 <= &local_218) {
            FVar27 = (ForElementType<FEdgeID>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
              FVar27 = local_d0.SecondaryData;
            }
            if (&local_218 < (FEdgeID *)((longlong)FVar27 + (longlong)local_a4[0] * 4)) {
              local_230 = (longlong)local_a8;
              local_228 = 4;
              local_248 = &local_218;
              local_240 = (ForElementType<FEdgeID>)&local_d0;
              if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                local_240 = local_d0.SecondaryData;
              }
              local_238 = (longlong)local_a4[0];
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
          iVar15 = local_a8;
          if (local_a8 == local_a4[0]) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                               (0x404,&local_d0,local_a4);
          }
          local_a8 = iVar15 + 1;
          FVar27 = (ForElementType<FEdgeID>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar27 = local_d0.SecondaryData;
          }
          *(FEdgeID *)((longlong)FVar27 + (longlong)iVar15 * 4) = local_218;
          FVar27 = (ForElementType<FEdgeID>)&local_98;
          if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
            FVar27 = (ForElementType<FEdgeID>)local_98.SecondaryData;
          }
          local_208 = FVar35;
          iStack_204 = iVar28;
          if ((ulonglong)FVar27 <= &local_208) {
            FVar27 = (ForElementType<FEdgeID>)&local_98;
            if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
              FVar27 = (ForElementType<FEdgeID>)local_98.SecondaryData;
            }
            if (&local_208 < (FEdgeID *)((longlong)FVar27 + (longlong)local_4c * 8)) {
              local_230 = (longlong)local_50;
              local_228 = 8;
              local_248 = &local_208;
              local_240 = (ForElementType<FEdgeID>)&local_98;
              if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
                local_240 = (ForElementType<FEdgeID>)local_98.SecondaryData;
              }
              local_238 = (longlong)local_4c;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
          iVar15 = local_50;
          if (local_50 == local_4c) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,int>_>_>
                               (0x408,&local_98,&local_4c);
          }
          local_50 = iVar15 + 1;
          FVar27 = (ForElementType<FEdgeID>)&local_98;
          if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
            FVar27 = (ForElementType<FEdgeID>)local_98.SecondaryData;
          }
          *(ulonglong *)((longlong)FVar27 + (longlong)iVar15 * 8) = CONCAT44(iStack_204,local_208);
LAB_14366e634:
          iVar28 = iVar28 + 1;
          pFVar40 = (FEdgeID *)&pFVar40->field_0x1;
          pFVar36 = pFVar36 + 1;
        } while (iVar28 < 3);
        FVar35 = (FEdgeID)((int)FVar35 + 1);
        local_210 = (FEdgeID *)((longlong)local_210 + 4);
        iVar33 = local_1d0->ArrayNum;
        this = local_200;
        param_1 = local_1d0;
      } while ((int)FVar35 < iVar33);
    }
    lVar38 = 4;
    if ((local_a8 != iVar33 + 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerimeterEdges.Num() == Triangles.Num() + 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x597,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((local_a8 != local_50) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerimeterEdges.Num() == Indices.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                            ,0x598,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (0 < local_a8 + -2) {
      local_214 = 1;
      local_210 = (FEdgeID *)&DAT_00000001;
      do {
        pFVar36 = local_210;
        uVar37 = local_214;
        uVar16 = 0;
        if ((int)(local_214 - 1) < local_a8) {
          uVar16 = ~(local_214 - 1) >> 0x1f;
        }
        if (uVar16 == 0) {
          local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
          local_248 = (FEdgeID *)(longlong)(int)(local_214 - 1);
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
        FVar34 = (ForElementType<FEdgeID>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar34 = local_d0.SecondaryData;
        }
        iVar33 = *(int *)((longlong)&((FEdgeID *)((longlong)FVar34 + -4))->field_0x0 + lVar38);
        if ((this->EdgeVertices).Extent == 0) {
          iVar28 = (pTVar6->ArrayForChannels).ArrayNum;
          if (iVar28 < 1) {
            local_248 = (FEdgeID *)0x0;
            local_240 = (ForElementType<FEdgeID>)(longlong)iVar28;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar26 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
          if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar26 = FVar7;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar26,&local_1a8,iVar33);
        }
        else {
          pTVar18 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
          local_1a8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar18,iVar33);
          local_1a8.ArrayNum = (this->EdgeVertices).Extent;
          if ((local_1a8.ArrayNum < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar33 = local_1a8.ArrayNum;
        pFVar23 = local_1a8.DataPtr;
        FVar34 = (ForElementType<FEdgeID>)(longlong)local_1a8.ArrayNum;
        uVar16 = uVar37;
        if ((int)uVar37 < local_a8) {
          do {
            uVar16 = 0;
            if ((int)uVar37 < local_a8) {
              uVar16 = ~uVar37 >> 0x1f;
            }
            if (uVar16 == 0) {
              local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
              local_248 = (FEdgeID *)(longlong)(int)uVar37;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pFVar12 = local_200;
            FVar27 = (ForElementType<FEdgeID>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
              FVar27 = local_d0.SecondaryData;
            }
            pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(local_200->EdgeVertices).ArrayPtr;
            FVar35 = *(FEdgeID *)((longlong)FVar27 + (longlong)pFVar36 * 4);
            if ((local_200->EdgeVertices).Extent == 0) {
              iVar28 = (pTVar6->ArrayForChannels).ArrayNum;
              if (iVar28 < 1) {
                local_248 = (FEdgeID *)0x0;
                local_240 = (ForElementType<FEdgeID>)(longlong)iVar28;
                bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar14) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
              FVar26 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)
                       &pTVar6->ArrayForChannels;
              if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
                FVar26 = FVar7;
              }
              TAttributeArrayContainer<FVertexID>::Get
                        ((TAttributeArrayContainer<FVertexID> *)FVar26,&local_1c8,(int)FVar35);
              pFVar19 = local_1c8.DataPtr;
            }
            else {
              pTVar18 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
              pFVar19 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar18,(int)FVar35);
              local_1c8.ArrayNum = (pFVar12->EdgeVertices).Extent;
              local_1c8.DataPtr = pFVar19;
              if ((local_1c8.ArrayNum < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar28 = local_1c8.ArrayNum;
            FVar27 = (ForElementType<FEdgeID>)(longlong)local_1c8.ArrayNum;
            if (iVar33 < 1) {
              local_248 = (FEdgeID *)0x0;
              local_240 = FVar34;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iVar28 < 1) {
              local_248 = (FEdgeID *)0x0;
              local_240 = FVar27;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (*pFVar23 == *pFVar19) {
LAB_14366f684:
              uVar16 = local_214;
              pFVar40 = (FEdgeID *)(longlong)(int)local_214;
              if ((int)local_214 < (int)uVar37) {
                uVar32 = 0;
                if ((int)uVar37 < local_a8) {
                  uVar32 = ~uVar37 >> 0x1f;
                }
                if (uVar32 == 0) {
                  local_248 = (FEdgeID *)(longlong)(int)uVar37;
                  local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                FVar34 = (ForElementType<FEdgeID>)&local_d0;
                if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar34 = local_d0.SecondaryData;
                }
                pFVar1 = (FEdgeID *)((longlong)FVar34 + (longlong)pFVar36 * 4);
                uVar32 = 0;
                if ((int)uVar16 < local_a8) {
                  uVar32 = ~uVar16 >> 0x1f;
                }
                if (uVar32 == 0) {
                  local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
                  local_248 = pFVar40;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                FVar34 = (ForElementType<FEdgeID>)&local_d0;
                if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar34 = local_d0.SecondaryData;
                }
                FVar35 = *(FEdgeID *)((longlong)FVar34 + local_1f0);
                *(FEdgeID *)((longlong)FVar34 + local_1f0) = *pFVar1;
                *pFVar1 = FVar35;
                uVar32 = 0;
                if ((int)uVar37 < local_50) {
                  uVar32 = ~uVar37 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (local_248 = pFVar36, local_240 = (ForElementType<FEdgeID>)(longlong)local_50,
                   bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar34 = (ForElementType<FEdgeID>)&local_98;
                if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
                  FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
                }
                pFVar36 = (FEdgeID *)((longlong)FVar34 + (longlong)pFVar36 * 8);
                uVar37 = 0;
                if ((int)uVar16 < local_50) {
                  uVar37 = ~uVar16 >> 0x1f;
                }
                if (uVar37 == 0) {
                  local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
                  local_248 = local_210;
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                FVar34 = (ForElementType<FEdgeID>)&local_98;
                if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
                  FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
                }
                uVar8 = *(undefined8 *)((longlong)FVar34 + local_1f8);
                *(undefined8 *)((longlong)FVar34 + local_1f8) = *(undefined8 *)pFVar36;
                *(undefined8 *)pFVar36 = uVar8;
              }
              break;
            }
            if (iVar33 < 1) {
              local_248 = (FEdgeID *)0x0;
              local_240 = FVar34;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iVar28 < 2) {
              local_248 = (FEdgeID *)&DAT_00000001;
              local_240 = FVar27;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (*pFVar23 == pFVar19[1]) goto LAB_14366f684;
            if (iVar33 < 2) {
              local_248 = (FEdgeID *)&DAT_00000001;
              local_240 = FVar34;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iVar28 < 1) {
              local_248 = (FEdgeID *)0x0;
              local_240 = FVar27;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (pFVar23[1] == *pFVar19) goto LAB_14366f684;
            if (iVar33 < 2) {
              local_248 = (FEdgeID *)&DAT_00000001;
              local_240 = FVar34;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (iVar28 < 2) {
              local_248 = (FEdgeID *)&DAT_00000001;
              local_240 = FVar27;
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if (pFVar23[1] == pFVar19[1]) goto LAB_14366f684;
            uVar37 = uVar37 + 1;
            pFVar36 = (FEdgeID *)&pFVar36->field_0x1;
            uVar16 = local_214;
          } while ((int)uVar37 < local_a8);
        }
        local_214 = uVar16 + 1;
        local_1f8 = local_1f8 + 8;
        lVar38 = local_1f0 + 4;
        local_210 = (FEdgeID *)&local_210->field_0x1;
        this = local_200;
        local_1f0 = lVar38;
      } while ((int)uVar16 < local_a8 + -2);
    }
    pFVar12 = local_200;
    uVar31 = 0;
    uVar32 = local_a8 - 1;
    uVar16 = 0;
    uVar37 = uVar16;
    if ((int)uVar32 < local_a8) {
      uVar37 = ~uVar32 >> 0x1f;
    }
    if (uVar37 == 0) {
      local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
      local_248 = (FEdgeID *)(longlong)(int)uVar32;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FVar34 = (ForElementType<FEdgeID>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar34 = local_d0.SecondaryData;
    }
    pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&pFVar12->EdgeVertices,&local_190,
                         (int)((FEdgeID *)((longlong)FVar34 + -4))[local_a8]);
    if (pTVar20->ArrayNum < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar23 = pTVar20->DataPtr;
    if (local_a8 < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FVar34 = (ForElementType<FEdgeID>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar34 = local_d0.SecondaryData;
    }
    pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&pFVar12->EdgeVertices,&local_180,(int)*(FEdgeID *)FVar34);
    if (pTVar20->ArrayNum < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (*pFVar23 != *pTVar20->DataPtr) {
      uVar32 = local_a8 - 1;
      uVar37 = uVar16;
      if ((int)uVar32 < local_a8) {
        uVar37 = ~uVar32 >> 0x1f;
      }
      if (uVar37 == 0) {
        local_248 = (FEdgeID *)(longlong)(int)uVar32;
        local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FVar34 = (ForElementType<FEdgeID>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FVar34 = local_d0.SecondaryData;
      }
      pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar12->EdgeVertices,&local_170,
                           (int)*(FEdgeID *)((longlong)FVar34 + (longlong)(local_a8 + -1) * 4));
      if (pTVar20->ArrayNum < 1) {
        local_248 = (FEdgeID *)0x0;
        local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar23 = pTVar20->DataPtr;
      if (local_a8 < 1) {
        local_248 = (FEdgeID *)0x0;
        local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FVar34 = (ForElementType<FEdgeID>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
        FVar34 = local_d0.SecondaryData;
      }
      pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar12->EdgeVertices,&local_160,(int)*(FEdgeID *)FVar34);
      if (pTVar20->ArrayNum < 2) {
        local_248 = (FEdgeID *)&DAT_00000001;
        local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (*pFVar23 != pTVar20->DataPtr[1]) {
        uVar32 = local_a8 - 1;
        uVar37 = uVar16;
        if ((int)uVar32 < local_a8) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if (uVar37 == 0) {
          local_248 = (FEdgeID *)(longlong)(int)uVar32;
          local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        FVar34 = (ForElementType<FEdgeID>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar34 = local_d0.SecondaryData;
        }
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&pFVar12->EdgeVertices,&local_150,
                             (int)*(FEdgeID *)((longlong)FVar34 + (longlong)(local_a8 + -1) * 4));
        if (pTVar20->ArrayNum < 2) {
          local_248 = (FEdgeID *)&DAT_00000001;
          local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pFVar23 = pTVar20->DataPtr;
        if (local_a8 < 1) {
          local_248 = (FEdgeID *)0x0;
          local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        FVar34 = (ForElementType<FEdgeID>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
          FVar34 = local_d0.SecondaryData;
        }
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                            (&pFVar12->EdgeVertices,&local_140,(int)*(FEdgeID *)FVar34);
        if (pTVar20->ArrayNum < 1) {
          local_248 = (FEdgeID *)0x0;
          local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (pFVar23[1] != *pTVar20->DataPtr) {
          uVar32 = local_a8 - 1;
          uVar37 = uVar16;
          if ((int)uVar32 < local_a8) {
            uVar37 = ~uVar32 >> 0x1f;
          }
          if (uVar37 == 0) {
            local_248 = (FEdgeID *)(longlong)(int)uVar32;
            local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar34 = (ForElementType<FEdgeID>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar34 = local_d0.SecondaryData;
          }
          pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&pFVar12->EdgeVertices,&local_130,
                               (int)((FEdgeID *)((longlong)FVar34 + -4))[local_a8]);
          if (pTVar20->ArrayNum < 2) {
            local_248 = (FEdgeID *)&DAT_00000001;
            local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar23 = pTVar20->DataPtr;
          if (local_a8 < 1) {
            local_248 = (FEdgeID *)0x0;
            local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar34 = (ForElementType<FEdgeID>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
            FVar34 = local_d0.SecondaryData;
          }
          pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&pFVar12->EdgeVertices,&local_120,(int)*(FEdgeID *)FVar34);
          if (pTVar20->ArrayNum < 2) {
            local_248 = (FEdgeID *)&DAT_00000001;
            local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if ((pFVar23[1] != pTVar20->DataPtr[1]) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("EdgeVertices[PerimeterEdges.Last()][0] == EdgeVertices[PerimeterEdges[0]][0] || EdgeVertices[PerimeterEdges.Last()][0] == EdgeVertices[PerimeterEdges[0]][1] || EdgeVertices[PerimeterEdges.Last()][1] == EdgeVertices[PerimeterEdges[0]][0] || EdgeVertices[PerimeterEdges.Last()][1] == EdgeVertices[PerimeterEdges[0]][1]"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                                  ,0x5ae,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
    if (local_a8 < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FVar34 = (ForElementType<FEdgeID>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar34 = local_d0.SecondaryData;
    }
    FVar35 = *(FEdgeID *)FVar34;
    if (local_a8 < 2) {
      local_240 = (ForElementType<FEdgeID>)(longlong)local_a8;
      local_248 = (FEdgeID *)&DAT_00000001;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FVar34 = (ForElementType<FEdgeID>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FVar34 = local_d0.SecondaryData;
    }
    FVar2 = *(FEdgeID *)((longlong)FVar34 + 4);
    if (local_50 < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FVar34 = (ForElementType<FEdgeID>)&local_98;
    if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
    }
    pFVar21 = TArrayView<FTriangleID_const_,int>::operator[](local_1d0,(int)*(FEdgeID *)FVar34);
    FVar3 = *pFVar21;
    pTVar22 = TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                        (&pFVar12->TriangleEdges,&local_110,(int)FVar3);
    pFVar36 = pTVar22->DataPtr;
    for (pFVar40 = pFVar36; pFVar40 != pFVar36 + pTVar22->ArrayNum; pFVar40 = pFVar40 + 1) {
      if (*pFVar40 == FVar35) {
        iVar33 = (int)((longlong)pFVar40 - (longlong)pFVar36 >> 2);
        goto LAB_14366f468;
      }
    }
    iVar33 = -1;
LAB_14366f468:
    pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&pFVar12->TriangleVertices,&local_100,(int)FVar3);
    iVar33 = iVar33 + 1;
    pFVar23 = TArrayView<FVertexID,int>::operator[]
                        (pTVar20,iVar33 + (iVar33 / 3 + (iVar33 >> 0x1f) +
                                          (int)(((longlong)iVar33 / 3 + ((longlong)iVar33 >> 0x3f) &
                                                0xffffffffU) >> 0x1f)) * -3);
    FVar4 = *pFVar23;
    pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&pFVar12->EdgeVertices,&local_f0,(int)FVar2);
    if (pTVar20->ArrayNum < 1) {
      local_248 = (FEdgeID *)0x0;
      local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (*pTVar20->DataPtr != FVar4) {
      pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar12->EdgeVertices,&local_e0,(int)FVar2);
      if (pTVar20->ArrayNum < 2) {
        local_248 = (FEdgeID *)&DAT_00000001;
        local_240 = (ForElementType<FEdgeID>)(longlong)pTVar20->ArrayNum;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if ((pTVar20->DataPtr[1] != FVar4) && (uVar30 = uVar31, uVar39 = uVar31, 0 < local_50 / 2)) {
        do {
          uVar29 = (uint)uVar30;
          uVar32 = local_a8 + ~uVar29;
          uVar37 = uVar16;
          if ((int)uVar32 < local_50) {
            uVar37 = ~uVar32 >> 0x1f;
          }
          if (uVar37 == 0) {
            local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
            local_248 = (FEdgeID *)(longlong)(int)uVar32;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar34 = (ForElementType<FEdgeID>)&local_98;
          if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
            FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
          }
          pFVar36 = (FEdgeID *)((longlong)FVar34 + (longlong)(int)uVar32 * 8);
          uVar37 = uVar16;
          if ((int)uVar29 < local_50) {
            uVar37 = ~uVar29 >> 0x1f;
          }
          if (uVar37 == 0) {
            local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
            local_248 = (FEdgeID *)(longlong)(int)uVar29;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar34 = (ForElementType<FEdgeID>)&local_98;
          if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
            FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
          }
          uVar8 = *(undefined8 *)((longlong)FVar34 + uVar39);
          *(undefined8 *)((longlong)FVar34 + uVar39) = *(undefined8 *)pFVar36;
          *(undefined8 *)pFVar36 = uVar8;
          uVar30 = (ulonglong)(uVar29 + 1);
          uVar39 = uVar39 + 8;
        } while ((int)(uVar29 + 1) < local_50 / 2);
      }
    }
    pTVar13 = local_198;
    uVar30 = uVar31;
    if (0 < local_50) {
      do {
        uVar32 = (uint)uVar31;
        uVar37 = uVar16;
        if ((int)uVar32 < local_50) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if (uVar37 == 0) {
          local_240 = (ForElementType<FEdgeID>)(longlong)local_50;
          local_248 = (FEdgeID *)(longlong)(int)uVar32;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar33 = pTVar13->ArrayNum;
        FVar34 = (ForElementType<FEdgeID>)&local_98;
        if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
          FVar34 = (ForElementType<FEdgeID>)local_98.SecondaryData;
        }
        uVar37 = uVar16;
        if ((int)uVar32 < iVar33) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        uVar8 = *(undefined8 *)((longlong)FVar34 + uVar30);
        if (uVar37 == 0) {
          local_248 = (FEdgeID *)(longlong)(int)uVar32;
          local_240 = (ForElementType<FEdgeID>)(longlong)iVar33;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        uVar31 = (ulonglong)(uVar32 + 1);
        *(undefined8 *)(&pTVar13->DataPtr->field_0x0 + uVar30) = uVar8;
        uVar30 = uVar30 + 8;
      } while ((int)(uVar32 + 1) < local_50);
    }
    if (local_98.SecondaryData != (ForElementType<TTuple<int,int>_>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
    if (local_d0.SecondaryData != (ForElementType<FEdgeID>)0x0) {
      FMemory::Free((void *)local_d0.SecondaryData);
    }
  }
  return;
}

// FixUpElementIDs @ 14366f9b0

void __thiscall
FMeshDescription::FixUpElementIDs(FMeshDescription *this,FElementIDRemappings *param_1)

{
  FVertexID FVar1;
  FVertexInstanceID FVar2;
  FEdgeID FVar3;
  FPolygonID FVar4;
  FPolygonGroupID FVar5;
  TMeshAttributeArraySet<FVertexID> *pTVar6;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar7;
  FMeshAttributeArraySetBase *pFVar8;
  code *pcVar9;
  bool bVar10;
  TMeshAttributeArrayBase<FVertexID> *pTVar11;
  FVertexID *pFVar12;
  FPolygonID *pFVar13;
  FPolygonGroupID *pFVar14;
  uint uVar15;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar16;
  FMeshAttributeArraySetBase *pFVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FElementIDs local_res8;
  FElementIDRemappings *local_res10;
  FElementIDs local_res18;
  FElementIDs local_res20;
  TArrayView<FVertexID,int> local_1d8;
  TArrayView<FVertexID,int> local_1c8;
  FElementIDs local_1b8;
  TArrayView<FVertexInstanceID,int> local_1b0;
  TArrayView<FVertexInstanceID,int> local_1a0;
  TArrayView<FEdgeID,int> local_190;
  TArrayView<FEdgeID,int> local_180;
  TArrayView<FVertexID,int> local_170;
  TArrayView<FVertexID,int> local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FConstIterator local_d0;
  FConstIterator local_b0;
  FConstIterator local_90;
  FConstIterator local_70;
  
  local_res10 = param_1;
  local_res8.Array = &FMeshElementChannels::Get(this->VertexInstanceElements,0)->BitArray;
  FMeshElementContainer::FElementIDs::begin(&local_res8,(FConstIterator *)&local_150);
  FMeshElementContainer::FElementIDs::end(&local_res8,&local_d0);
  while ((local_150.CurrentBitIndex != local_d0.Iterator.CurrentBitIndex ||
         (local_150.Array != local_d0.Iterator.Array))) {
    iVar18 = -1;
    if (local_150.CurrentBitIndex < (local_150.Array)->NumBits) {
      iVar18 = local_150.CurrentBitIndex;
    }
    pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar12 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
    FVar1 = *(FVertexID *)
             (*(longlong *)&param_1->NewVertexIndexLookup + (longlong)(int)*pFVar12 * 8);
    pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar12 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
    *pFVar12 = FVar1;
    local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
  }
  local_res18.Array = &FMeshElementChannels::Get(this->EdgeElements,0)->BitArray;
  FMeshElementContainer::FElementIDs::begin(&local_res18,(FConstIterator *)&local_130);
  FMeshElementContainer::FElementIDs::end(&local_res18,&local_b0);
  do {
    if ((local_130.CurrentBitIndex == local_b0.Iterator.CurrentBitIndex) &&
       (local_130.Array == local_b0.Iterator.Array)) {
      local_res20.Array = &FMeshElementChannels::Get(this->TriangleElements,0)->BitArray;
      FMeshElementContainer::FElementIDs::begin(&local_res20,(FConstIterator *)&local_110);
      FMeshElementContainer::FElementIDs::end(&local_res20,&local_90);
      do {
        uVar20 = 0;
        if ((local_110.CurrentBitIndex == local_90.Iterator.CurrentBitIndex) &&
           (local_110.Array == local_90.Iterator.Array)) {
          local_1b8.Array = &FMeshElementChannels::Get(this->PolygonElements,0)->BitArray;
          FMeshElementContainer::FElementIDs::begin(&local_1b8,(FConstIterator *)&local_f0);
          FMeshElementContainer::FElementIDs::end(&local_1b8,&local_70);
          while( true ) {
            if ((local_f0.CurrentBitIndex == local_70.Iterator.CurrentBitIndex) &&
               (local_f0.Array == local_70.Iterator.Array)) {
              RebuildIndexers(this);
              return;
            }
            pFVar8 = (this->PolygonPolygonGroups).ArrayPtr;
            iVar18 = -1;
            if (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits) {
              iVar18 = local_f0.CurrentBitIndex;
            }
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) break;
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            pFVar14 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                                ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar17,iVar18);
            pFVar8 = (this->PolygonPolygonGroups).ArrayPtr;
            FVar5 = *(FPolygonGroupID *)
                     (*(longlong *)&param_1->NewPolygonGroupIndexLookup +
                     (longlong)(int)*pFVar14 * 8);
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            pFVar14 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                                ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar17,iVar18);
            *pFVar14 = FVar5;
            local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
          }
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar21 = uVar20;
        uVar22 = uVar20;
        iVar18 = -1;
        if (local_110.CurrentBitIndex < (local_110.Array)->NumBits) {
          iVar18 = local_110.CurrentBitIndex;
        }
        do {
          pFVar8 = (this->TriangleVertexInstances).ArrayPtr;
          if ((this->TriangleVertexInstances).Extent == 0) {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            TAttributeArrayContainer<FVertexInstanceID>::Get
                      ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar17,&local_1b0,iVar18);
            uVar15 = local_1b0.ArrayNum;
          }
          else {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            local_1b0.DataPtr =
                 TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                           ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar17,iVar18);
            uVar15 = (this->TriangleVertexInstances).Extent;
            local_1b0.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          iVar19 = (int)uVar20;
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (this->TriangleVertexInstances).ArrayPtr;
          FVar2 = *(FVertexInstanceID *)
                   (*(longlong *)&local_res10->NewVertexInstanceIndexLookup +
                   (longlong)*(int *)(&(local_1b0.DataPtr)->field_0x0 + uVar22) * 8);
          if ((this->TriangleVertexInstances).Extent == 0) {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            TAttributeArrayContainer<FVertexInstanceID>::Get
                      ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar17,&local_1a0,iVar18);
            uVar15 = local_1a0.ArrayNum;
          }
          else {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            local_1a0.DataPtr =
                 TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                           ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar17,iVar18);
            uVar15 = (this->TriangleVertexInstances).Extent;
            local_1a0.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_1a0.DataPtr[uVar21] = FVar2;
          pFVar8 = (this->TriangleEdges).ArrayPtr;
          if ((this->TriangleEdges).Extent == 0) {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            TAttributeArrayContainer<FEdgeID>::Get
                      ((TAttributeArrayContainer<FEdgeID> *)pFVar17,&local_190,iVar18);
            uVar15 = local_190.ArrayNum;
          }
          else {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            local_190.DataPtr =
                 TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                           ((TMeshAttributeArrayBase<FEdgeID> *)pFVar17,iVar18);
            uVar15 = (this->TriangleEdges).Extent;
            local_190.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (this->TriangleEdges).ArrayPtr;
          FVar3 = *(FEdgeID *)
                   (*(longlong *)&local_res10->NewEdgeIndexLookup +
                   (longlong)(int)local_190.DataPtr[uVar21] * 8);
          if ((this->TriangleEdges).Extent == 0) {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            TAttributeArrayContainer<FEdgeID>::Get
                      ((TAttributeArrayContainer<FEdgeID> *)pFVar17,&local_180,iVar18);
            uVar15 = local_180.ArrayNum;
          }
          else {
            if (((int)pFVar8[2].Type < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar8 + 1;
            if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                (FMeshAttributeArraySetBase *)0x0) {
              pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
            }
            local_180.DataPtr =
                 TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                           ((TMeshAttributeArrayBase<FEdgeID> *)pFVar17,iVar18);
            uVar15 = (this->TriangleEdges).Extent;
            local_180.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_180.DataPtr[uVar21] = FVar3;
          pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
          if ((this->TriangleVertices).Extent == 0) {
            if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
            if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
              FVar16 = FVar7;
            }
            TAttributeArrayContainer<FVertexID>::Get
                      ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_170,iVar18);
            uVar15 = local_170.ArrayNum;
          }
          else {
            pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
            local_170.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
            uVar15 = (this->TriangleVertices).Extent;
            local_170.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
          FVar1 = *(FVertexID *)
                   (*(longlong *)&local_res10->NewVertexIndexLookup +
                   (longlong)(int)local_170.DataPtr[uVar21] * 8);
          if ((this->TriangleVertices).Extent == 0) {
            if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
            if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
              FVar16 = FVar7;
            }
            TAttributeArrayContainer<FVertexID>::Get
                      ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_160,iVar18);
            uVar15 = local_160.ArrayNum;
          }
          else {
            pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
            local_160.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
            uVar15 = (this->TriangleVertices).Extent;
            local_160.ArrayNum = uVar15;
            if (((int)uVar15 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((int)uVar15 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar20 = (ulonglong)(iVar19 + 1U);
          uVar22 = uVar22 + 4;
          local_160.DataPtr[uVar21] = FVar1;
          uVar21 = uVar21 + 1;
        } while ((int)(iVar19 + 1U) < 3);
        pFVar8 = (this->TrianglePolygons).ArrayPtr;
        if (((int)pFVar8[2].Type < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        pFVar13 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonID> *)pFVar17,iVar18);
        param_1 = local_res10;
        pFVar8 = (this->TrianglePolygons).ArrayPtr;
        FVar4 = *(FPolygonID *)
                 (*(longlong *)&local_res10->NewPolygonIndexLookup + (longlong)(int)*pFVar13 * 8);
        if (((int)pFVar8[2].Type < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        pFVar13 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonID> *)pFVar17,iVar18);
        *pFVar13 = FVar4;
        pFVar8 = (this->TrianglePolygonGroups).ArrayPtr;
        if (((int)pFVar8[2].Type < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        pFVar14 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar17,iVar18);
        pFVar8 = (this->TrianglePolygonGroups).ArrayPtr;
        FVar5 = *(FPolygonGroupID *)
                 (*(longlong *)&param_1->NewPolygonGroupIndexLookup + (longlong)(int)*pFVar14 * 8);
        if (((int)pFVar8[2].Type < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = pFVar8 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar17 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
        }
        pFVar14 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar17,iVar18);
        *pFVar14 = FVar5;
        local_110.UnvisitedBitMask = local_110.UnvisitedBitMask & ~local_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_110);
      } while( true );
    }
    pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    iVar18 = -1;
    if (local_130.CurrentBitIndex < (local_130.Array)->NumBits) {
      iVar18 = local_130.CurrentBitIndex;
    }
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
      if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar16 = FVar7;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_1d8,iVar18);
      uVar15 = local_1d8.ArrayNum;
LAB_14366fb8f:
      bVar10 = (int)uVar15 < 0;
    }
    else {
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
      local_1d8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
      uVar15 = (this->EdgeVertices).Extent;
      bVar10 = false;
      local_1d8.ArrayNum = uVar15;
      if ((int)uVar15 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_14366fb8f;
      }
    }
    if ((uVar15 == 0 || bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    FVar1 = *(FVertexID *)
             (*(longlong *)&param_1->NewVertexIndexLookup + (longlong)(int)*local_1d8.DataPtr * 8);
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
      if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar16 = FVar7;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_1c8,iVar18);
      uVar15 = local_1c8.ArrayNum;
LAB_14366fc99:
      bVar10 = (int)uVar15 < 0;
    }
    else {
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
      local_1c8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
      uVar15 = (this->EdgeVertices).Extent;
      bVar10 = false;
      local_1c8.ArrayNum = uVar15;
      if ((int)uVar15 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_14366fc99;
      }
    }
    if ((uVar15 == 0 || bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *local_1c8.DataPtr = FVar1;
    pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
      if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar16 = FVar7;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_1d8,iVar18);
      uVar15 = local_1d8.ArrayNum;
    }
    else {
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
      local_1d8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
      uVar15 = (this->EdgeVertices).Extent;
      local_1d8.ArrayNum = uVar15;
      if (((int)uVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (((int)uVar15 < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar6 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    FVar1 = *(FVertexID *)
             (*(longlong *)&param_1->NewVertexIndexLookup + (longlong)(int)local_1d8.DataPtr[1] * 8)
    ;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar6->ArrayForChannels).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar7 = (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar6->ArrayForChannels;
      if (FVar7 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar16 = FVar7;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_1c8,iVar18);
      uVar15 = local_1c8.ArrayNum;
    }
    else {
      pTVar11 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar6,0);
      local_1c8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar11,iVar18);
      uVar15 = (this->EdgeVertices).Extent;
      local_1c8.ArrayNum = uVar15;
      if (((int)uVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (((int)uVar15 < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_1c8.DataPtr[1] = FVar1;
    local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
  } while( true );
}

// GetBounds @ 143671600

TBoxSphereBounds<double,double> * __thiscall
FMeshDescription::GetBounds
          (FMeshDescription *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  bool bVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  int iVar7;
  double dVar8;
  bool bVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  longlong lVar12;
  FVertexID FVar13;
  FMeshElementContainer *pFVar14;
  FVertexID FVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  TArrayView<FVertexInstanceID_const_,int> local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined1 local_d8 [20];
  FVertexID FStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  double local_b0;
  
  bVar5 = false;
  local_c0 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uStack_bc = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uStack_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  local_b0 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  local_d8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8._16_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  FStack_c4 = SUB84((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20,0);
  local_128.DataPtr = (FVertexInstanceID *)FMeshElementChannels::Get(this->VertexElements,0);
  TMeshElementContainer<FVertexID>::TElementIDs::begin
            ((TElementIDs *)&local_128,(TConstIterator *)&local_f8);
  TMeshElementContainer<FVertexID>::TElementIDs::end
            ((TElementIDs *)&local_128,(TConstIterator *)&local_118);
  iVar7 = local_118.CurrentBitIndex;
  pTVar6 = local_118.Array;
  uVar24 = SUB84(local_b0,0);
  uVar26 = (undefined4)((ulonglong)local_b0 >> 0x20);
  uVar21 = (undefined4)uStack_b8;
  uVar23 = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  dVar18 = (double)CONCAT44(uStack_bc,local_c0);
  dVar2 = (double)local_d8._0_8_;
  dVar17 = unique0x100007ef;
  pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)local_d8._8_8_;
  while ((local_f8.CurrentBitIndex != iVar7 ||
         ((TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_f8.Array._4_4_,(int)local_f8.Array)
          != pTVar6))) {
    FVar13 = (FVertexID)0xffffffff;
    if (local_f8.CurrentBitIndex <
        ((TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(local_f8.Array._4_4_,(int)local_f8.Array))
        ->NumBits) {
      FVar13 = (FVertexID)local_f8.CurrentBitIndex;
    }
    bVar9 = IsVertexOrphaned(this,FVar13);
    dVar1 = dVar18;
    dVar16 = dVar17;
    pTVar3 = pTVar4;
    if (!bVar9) {
      pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                           (this->VertexPositions).ArrayPtr,0);
      pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar10,(int)FVar13);
      dVar1 = (double)(pTVar11->field0_0x0)._s_0.X;
      pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)(double)(pTVar11->field0_0x0)._s_0.Y;
      dVar25 = (double)(pTVar11->field0_0x0)._s_0.Z;
      dVar16 = dVar25;
      pTVar3 = pTVar22;
      if (bVar5) {
        dVar8 = dVar1;
        if (dVar2 <= dVar1) {
          dVar8 = dVar2;
        }
        dVar2 = dVar8;
        if ((double)pTVar4 <= (double)pTVar22) {
          pTVar3 = pTVar4;
        }
        if (dVar1 <= dVar18) {
          dVar1 = dVar18;
        }
        if ((double)pTVar22 <= (double)CONCAT44(uVar23,uVar21)) {
          pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar23,uVar21);
        }
        if (dVar17 <= dVar25) {
          dVar16 = dVar17;
        }
        if (dVar25 <= (double)CONCAT44(uVar26,uVar24)) {
          dVar25 = (double)CONCAT44(uVar26,uVar24);
        }
      }
      else {
        bVar5 = true;
        dVar2 = dVar1;
        local_b0 = dVar25;
        unique0x10000d35 = dVar25;
      }
      uVar24 = SUB84(dVar25,0);
      uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
      uVar21 = SUB84(pTVar22,0);
      uVar23 = (undefined4)((ulonglong)pTVar22 >> 0x20);
    }
    local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
    dVar18 = dVar1;
    dVar17 = dVar16;
    pTVar4 = pTVar3;
  }
  dVar16 = ((double)CONCAT44(uVar23,uVar21) - (double)pTVar4) * __real_3fe0000000000000;
  dVar1 = ((double)CONCAT44(uVar26,uVar24) - dVar17) * __real_3fe0000000000000;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = (dVar18 - dVar2) * __real_3fe0000000000000
  ;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar16;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar2 + (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar16 + (double)pTVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1 + dVar17;
  __return_storage_ptr__->SphereRadius = 0.0;
  local_128.DataPtr = (FVertexInstanceID *)FMeshElementChannels::Get(this->VertexElements,0);
  TMeshElementContainer<FVertexID>::TElementIDs::begin
            ((TElementIDs *)&local_128,(TConstIterator *)&local_118);
  TMeshElementContainer<FVertexID>::TElementIDs::end
            ((TElementIDs *)&local_128,(TConstIterator *)local_d8);
  FVar13 = FStack_c4;
  do {
    if (((FVertexID)local_118.CurrentBitIndex == FVar13) &&
       (local_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_d8._8_8_)) {
      return __return_storage_ptr__;
    }
    FVar15 = (FVertexID)0xffffffff;
    if (local_118.CurrentBitIndex < (local_118.Array)->NumBits) {
      FVar15 = (FVertexID)local_118.CurrentBitIndex;
    }
    FMeshElementIndexer::Find<FVertexInstanceID>
              (&this->VertexToVertexInstances,&local_128,(int)FVar15,0);
    lVar12 = (longlong)local_128.ArrayNum;
    pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_128.DataPtr)->field_0x0;
    for (pFVar14 = (FMeshElementContainer *)local_128.DataPtr;
        pFVar14 != (FMeshElementContainer *)((pTVar4->AllocatorInstance).InlineData + lVar12 * 4);
        pFVar14 = (FMeshElementContainer *)((pFVar14->BitArray).AllocatorInstance.InlineData + 4)) {
      FMeshElementIndexer::Find<FTriangleID>
                (&this->VertexInstanceToTriangles,(TArrayView<FTriangleID_const_,int> *)&local_f8,
                 *(int *)(pFVar14->BitArray).AllocatorInstance.InlineData,0);
      if (0 < (int)local_f8.Array) {
        pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                             (this->VertexPositions).ArrayPtr,0);
        pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar10,(int)FVar15);
        dVar2 = (double)(pTVar11->field0_0x0)._s_0.Y -
                (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
        dVar17 = (double)(pTVar11->field0_0x0)._s_0.Z -
                 (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
        dVar18 = (double)(pTVar11->field0_0x0)._s_0.X -
                 (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
        auVar19._0_8_ = dVar17 * dVar17;
        auVar19._8_8_ = 0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar2 * dVar2 + dVar18 * dVar18 + auVar19._0_8_;
        auVar20 = sqrtpd(auVar19,auVar20);
        dVar18 = auVar20._0_8_;
        if (auVar20._0_8_ <= __return_storage_ptr__->SphereRadius) {
          dVar18 = __return_storage_ptr__->SphereRadius;
        }
        __return_storage_ptr__->SphereRadius = dVar18;
        break;
      }
    }
    local_118.UnvisitedBitMask = local_118.UnvisitedBitMask & ~local_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
  } while( true );
}

// GetNumVertexConnectedPolygons @ 143673780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMeshDescription::GetNumVertexConnectedPolygons(FMeshDescription *this,FVertexID param_1)

{
  FTriangleID *pFVar1;
  ForElementType<FPolygonID> FVar2;
  FTriangleID FVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FPolygonID> FVar8;
  ForElementType<FPolygonID> FVar9;
  ForElementType<FPolygonID> FVar10;
  longlong lVar11;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar12;
  FVertexInstanceID *pFVar13;
  undefined1 auStack_d8 [32];
  ForElementType<FPolygonID> local_b8;
  ForElementType<FPolygonID> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  TArrayView<FVertexInstanceID_const_,int> local_88;
  TArrayView<FTriangleID_const_,int> local_78;
  ForElementType<FPolygonID> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68.SecondaryData = (ForElementType<FPolygonID>)0x0;
  local_3c = 8;
  local_40 = 0;
  FMeshElementIndexer::Find<FVertexInstanceID>
            (&this->VertexToVertexInstances,&local_88,(int)param_1,0);
  pFVar13 = local_88.DataPtr;
  iVar7 = local_40;
  do {
    local_40 = iVar7;
    if (pFVar13 == local_88.DataPtr + local_88.ArrayNum) {
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      return iVar7;
    }
    FMeshElementIndexer::Find<FTriangleID>
              (&this->VertexInstanceToTriangles,&local_78,(int)*pFVar13,0);
    pFVar1 = local_78.DataPtr + local_78.ArrayNum;
    FVar9 = local_b0;
    for (pFVar12 = local_78.DataPtr; pFVar12 != pFVar1; pFVar12 = pFVar12 + 1) {
      pFVar4 = (this->TrianglePolygons).ArrayPtr;
      FVar3 = *pFVar12;
      local_b0 = (ForElementType<FPolygonID>)(longlong)(int)pFVar4[2].Type;
      if ((int)pFVar4[2].Type < 1) {
        local_b8 = (ForElementType<FPolygonID>)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar9 = local_b0;
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
      }
      local_b0 = FVar9;
      this_00 = pFVar4 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        this_00 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
      }
      FVar8 = (ForElementType<FPolygonID>)
              TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                        ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar3);
      FVar9 = (ForElementType<FPolygonID>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar9 = local_68.SecondaryData;
      }
      FVar2 = (ForElementType<FPolygonID>)((longlong)FVar9 + (longlong)local_40 * 4);
      if (FVar9 != FVar2) {
        FVar10 = FVar9;
        do {
          if (*(FPolygonID *)FVar10 == *(FPolygonID *)FVar8) {
            if ((int)((longlong)FVar10 - (longlong)FVar9 >> 2) != -1) goto LAB_14367399a;
            break;
          }
          FVar10 = (ForElementType<FPolygonID>)((longlong)FVar10 + 4);
        } while (FVar10 != FVar2);
      }
      FVar9 = (ForElementType<FPolygonID>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar9 = local_68.SecondaryData;
      }
      if ((ulonglong)FVar9 <= (ulonglong)FVar8) {
        FVar9 = (ForElementType<FPolygonID>)&local_68;
        if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
          FVar9 = local_68.SecondaryData;
        }
        if ((ulonglong)FVar8 < (ulonglong)((longlong)FVar9 + (longlong)local_3c * 4)) {
          local_98 = 4;
          local_b0 = (ForElementType<FPolygonID>)&local_68;
          if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
            local_b0 = local_68.SecondaryData;
          }
          local_b8 = FVar8;
          local_a8 = (longlong)local_3c;
          local_a0 = (longlong)local_40;
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
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                             (0x404,&local_68,&local_3c);
      }
      lVar11 = (longlong)local_40;
      FVar9 = (ForElementType<FPolygonID>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar9 = local_68.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(FPolygonID *)((longlong)FVar9 + lVar11 * 4) = *(FPolygonID *)FVar8;
LAB_14367399a:
      FVar9 = local_b0;
    }
    pFVar13 = pFVar13 + 1;
    local_b0 = FVar9;
    iVar7 = local_40;
  } while( true );
}

// GetNumVertexConnectedTriangles @ 143673ac0

int __thiscall
FMeshDescription::GetNumVertexConnectedTriangles(FMeshDescription *this,FVertexID param_1)

{
  TArrayView<int_const_,int> *pTVar1;
  FVertexInstanceID *pFVar2;
  int iVar3;
  TArrayView<FVertexInstanceID_const_,int> local_18;
  
  FMeshElementIndexer::Find<FVertexInstanceID>
            (&this->VertexToVertexInstances,&local_18,(int)param_1,0);
  iVar3 = 0;
  for (pFVar2 = local_18.DataPtr; pFVar2 != local_18.DataPtr + local_18.ArrayNum;
      pFVar2 = pFVar2 + 1) {
    pTVar1 = FMeshElementIndexer::Find
                       (&this->VertexInstanceToTriangles,(TArrayView<int_const_,int> *)&local_18,
                        (int)*pFVar2,0);
    iVar3 = iVar3 + pTVar1->ArrayNum;
  }
  return iVar3;
}

// GetNumVertexInstanceConnectedPolygons @ 143673be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FMeshDescription::GetNumVertexInstanceConnectedPolygons
          (FMeshDescription *this,FVertexInstanceID param_1)

{
  ForElementType<FPolygonID> FVar1;
  uint uVar2;
  FTriangleID FVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int_const_,int> *pTVar8;
  ForElementType<FPolygonID> FVar9;
  ForElementType<FPolygonID> FVar10;
  ForElementType<FPolygonID> FVar11;
  longlong lVar12;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar13;
  undefined1 auStackY_d8 [32];
  TArrayView<FTriangleID_const_,int> local_88;
  TArrayView<int_const_,int> local_78;
  ForElementType<FPolygonID> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 8;
  local_68.SecondaryData = (ForElementType<FPolygonID>)0x0;
  pTVar8 = FMeshElementIndexer::Find(&this->VertexInstanceToTriangles,&local_78,(int)param_1,0);
  uVar2 = pTVar8->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  local_40 = 0;
  if (local_3c < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
              (4,4,uVar2,&local_68,0,&local_3c);
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->VertexInstanceToTriangles,&local_88,(int)param_1,0);
  pFVar13 = local_88.DataPtr;
  iVar7 = local_40;
  do {
    local_40 = iVar7;
    if (pFVar13 == local_88.DataPtr + local_88.ArrayNum) {
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      return iVar7;
    }
    pFVar4 = (this->TrianglePolygons).ArrayPtr;
    FVar3 = *pFVar13;
    if (((int)pFVar4[2].Type < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    this_00 = pFVar4 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      this_00 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
    }
    FVar9 = (ForElementType<FPolygonID>)
            TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                      ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar3);
    FVar10 = (ForElementType<FPolygonID>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FVar10 = local_68.SecondaryData;
    }
    FVar1 = (ForElementType<FPolygonID>)((longlong)FVar10 + (longlong)local_40 * 4);
    if (FVar10 != FVar1) {
      FVar11 = FVar10;
      do {
        if (*(FPolygonID *)FVar11 == *(FPolygonID *)FVar9) {
          if ((int)((longlong)FVar11 - (longlong)FVar10 >> 2) != -1) goto LAB_143673df9;
          break;
        }
        FVar11 = (ForElementType<FPolygonID>)((longlong)FVar11 + 4);
      } while (FVar11 != FVar1);
    }
    FVar10 = (ForElementType<FPolygonID>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FVar10 = local_68.SecondaryData;
    }
    if ((ulonglong)FVar10 <= (ulonglong)FVar9) {
      FVar10 = (ForElementType<FPolygonID>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar10 = local_68.SecondaryData;
      }
      if (((ulonglong)FVar9 < (ulonglong)((longlong)FVar10 + (longlong)local_3c * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    if (local_40 == local_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                           (0x404,&local_68,&local_3c);
    }
    FVar10 = (ForElementType<FPolygonID>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FVar10 = local_68.SecondaryData;
    }
    lVar12 = (longlong)local_40;
    local_40 = local_40 + 1;
    *(FPolygonID *)((longlong)FVar10 + lVar12 * 4) = *(FPolygonID *)FVar9;
LAB_143673df9:
    pFVar13 = pFVar13 + 1;
    iVar7 = local_40;
  } while( true );
}

// GetPolygonCornerAngleForVertex @ 1436740d0

float __thiscall
FMeshDescription::GetPolygonCornerAngleForVertex
          (FMeshDescription *this,FPolygonID param_1,FVertexID param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  double dVar6;
  float fVar7;
  FMeshDescription *local_res8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_38 [2];
  
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>(this,param_1,local_38);
  FVar2.Data = local_38[0].AllocatorInstance.Data;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)local_38[0].ArrayNum * 4;
  local_res8 = this;
  FVar5.Data = local_38[0].AllocatorInstance.Data;
  do {
    if (FVar5.Data == pFVar1) {
LAB_143674157:
      fVar7 = 0.0;
LAB_14367415a:
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      return fVar7;
    }
    iVar4 = *(int *)FVar5.Data;
    this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar3 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar4);
    if (*pFVar3 == param_2) {
      iVar4 = (int)((longlong)FVar5.Data - (longlong)FVar2.Data >> 2);
      if (iVar4 != -1) {
        dVar6 = `FMeshDescription::GetPolygonCornerAngleForVertex'::__l2::<lambda_1>::operator()
                          (&local_res8,local_38,iVar4);
        fVar7 = (float)dVar6;
        goto LAB_14367415a;
      }
      goto LAB_143674157;
    }
    FVar5.Data = FVar5.Data + 4;
  } while( true );
}

// GetVertexInstancePairEdge @ 143675b80

FEdgeID __thiscall
FMeshDescription::GetVertexInstancePairEdge
          (FMeshDescription *this,FVertexInstanceID param_1,FVertexInstanceID param_2)

{
  FVertexID FVar1;
  FVertexID FVar2;
  FVertexID FVar3;
  TMeshAttributeArraySet<FVertexID> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar5;
  code *pcVar6;
  bool bVar7;
  FEdgeID FVar8;
  TMeshAttributeArrayBase<FVertexID> *pTVar9;
  FVertexID *pFVar10;
  undefined4 in_register_00000014;
  uint uVar11;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar12;
  int in_R9D;
  FEdgeID *pFVar13;
  TArrayView<FVertexID,int> local_58;
  TArrayView<FVertexID,int> local_48;
  TArrayView<FEdgeID_const_,int> local_38;
  
  pTVar9 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                     ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,0
                     );
  pFVar10 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar9,(int)param_2);
  FVar1 = *pFVar10;
  pTVar9 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                     ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr,0
                     );
  pFVar10 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar9,in_R9D);
  FVar2 = *pFVar10;
  FMeshElementIndexer::Find<FEdgeID>(&this->VertexToEdges,&local_38,(int)FVar1,0);
  pFVar13 = local_38.DataPtr;
  do {
    if (pFVar13 == local_38.DataPtr + local_38.ArrayNum) {
      *(FEdgeID *)CONCAT44(in_register_00000014,param_1) = (FEdgeID)0xffffffff;
      return (FEdgeID)param_1;
    }
    FVar8 = *pFVar13;
    pTVar4 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar4->ArrayForChannels).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEdgeID)(*pcVar6)();
        return FVar8;
      }
      FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar4->ArrayForChannels;
      if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar12 = FVar5;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar12,&local_58,(int)FVar8);
      uVar11 = local_58.ArrayNum;
LAB_143675cd6:
      bVar7 = (int)uVar11 < 0;
    }
    else {
      pTVar9 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar4,0);
      local_58.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar9,(int)FVar8);
      uVar11 = (this->EdgeVertices).Extent;
      bVar7 = false;
      local_58.ArrayNum = uVar11;
      if ((int)uVar11 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          FVar8 = (FEdgeID)(*pcVar6)();
          return FVar8;
        }
        goto LAB_143675cd6;
      }
    }
    if ((uVar11 == 0 || bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEdgeID)(*pcVar6)();
      return FVar8;
    }
    pTVar4 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    FVar3 = *local_58.DataPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar4->ArrayForChannels).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEdgeID)(*pcVar6)();
        return FVar8;
      }
      FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar4->ArrayForChannels;
      if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar12 = FVar5;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar12,&local_48,(int)FVar8);
      uVar11 = local_48.ArrayNum;
    }
    else {
      pTVar9 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar4,0);
      local_48.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar9,(int)FVar8);
      uVar11 = (this->EdgeVertices).Extent;
      local_48.ArrayNum = uVar11;
      if (((int)uVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar8 = (FEdgeID)(*pcVar6)();
        return FVar8;
      }
    }
    if (((int)uVar11 < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8 = (FEdgeID)(*pcVar6)();
      return FVar8;
    }
    if (((FVar3 == FVar1) && (local_48.DataPtr[1] == FVar2)) ||
       ((FVar3 == FVar2 && (local_48.DataPtr[1] == FVar1)))) {
      *(FEdgeID *)CONCAT44(in_register_00000014,param_1) = FVar8;
      return (FEdgeID)param_1;
    }
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// GetVertexPairEdge @ 143676060

FEdgeID __thiscall
FMeshDescription::GetVertexPairEdge(FMeshDescription *this,FVertexID param_1,FVertexID param_2)

{
  FVertexID FVar1;
  TMeshAttributeArraySet<FVertexID> *pTVar2;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar3;
  code *pcVar4;
  bool bVar5;
  FEdgeID FVar6;
  TMeshAttributeArrayBase<FVertexID> *pTVar7;
  undefined4 in_register_00000014;
  uint uVar8;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar9;
  FVertexID in_R9D;
  FEdgeID *pFVar10;
  TArrayView<FVertexID,int> local_58;
  TArrayView<FVertexID,int> local_48;
  TArrayView<FEdgeID_const_,int> local_38;
  
  FMeshElementIndexer::Find<FEdgeID>(&this->VertexToEdges,&local_38,(int)param_2,0);
  pFVar10 = local_38.DataPtr;
  do {
    if (pFVar10 == local_38.DataPtr + local_38.ArrayNum) {
      *(FEdgeID *)CONCAT44(in_register_00000014,param_1) = (FEdgeID)0xffffffff;
      return (FEdgeID)param_1;
    }
    FVar6 = *pFVar10;
    pTVar2 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar2->ArrayForChannels).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar6 = (FEdgeID)(*pcVar4)();
        return FVar6;
      }
      FVar3 = (pTVar2->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar2->ArrayForChannels;
      if (FVar3 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar9 = FVar3;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar9,&local_58,(int)FVar6);
      uVar8 = local_58.ArrayNum;
LAB_143676181:
      bVar5 = (int)uVar8 < 0;
    }
    else {
      pTVar7 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar2,0);
      local_58.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar7,(int)FVar6);
      uVar8 = (this->EdgeVertices).Extent;
      bVar5 = false;
      local_58.ArrayNum = uVar8;
      if ((int)uVar8 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar6 = (FEdgeID)(*pcVar4)();
          return FVar6;
        }
        goto LAB_143676181;
      }
    }
    if ((uVar8 == 0 || bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      FVar6 = (FEdgeID)(*pcVar4)();
      return FVar6;
    }
    pTVar2 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    FVar1 = *local_58.DataPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((pTVar2->ArrayForChannels).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar6 = (FEdgeID)(*pcVar4)();
        return FVar6;
      }
      FVar3 = (pTVar2->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar2->ArrayForChannels;
      if (FVar3 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar9 = FVar3;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar9,&local_48,(int)FVar6);
      uVar8 = local_48.ArrayNum;
    }
    else {
      pTVar7 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar2,0);
      local_48.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar7,(int)FVar6);
      uVar8 = (this->EdgeVertices).Extent;
      local_48.ArrayNum = uVar8;
      if (((int)uVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar6 = (FEdgeID)(*pcVar4)();
        return FVar6;
      }
    }
    if (((int)uVar8 < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      FVar6 = (FEdgeID)(*pcVar4)();
      return FVar6;
    }
    if (((FVar1 == param_2) && (local_48.DataPtr[1] == in_R9D)) ||
       ((FVar1 == in_R9D && (local_48.DataPtr[1] == param_2)))) {
      *(FEdgeID *)CONCAT44(in_register_00000014,param_1) = FVar6;
      return (FEdgeID)param_1;
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// Initialize @ 143678fa0

void __thiscall FMeshDescription::Initialize(FMeshDescription *this)

{
  FAttributesSetBase *pFVar1;
  int iVar2;
  longlong *plVar3;
  FName FVar4;
  FMeshElementChannels *pFVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  TKeyInitializer<FName_&> TVar9;
  FAttributesSetEntry FVar10;
  FMeshElementContainer *pFVar11;
  TTuple<FName,FAttributesSetEntry> *pTVar12;
  TMeshAttributeArraySet<int> *pTVar13;
  TMeshAttributesRef<int,FPolygonGroupID> TVar14;
  TMeshAttributesRef<int,TArrayView<FUVID,int>_> *pTVar15;
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *pTVar16;
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *pTVar17;
  TMeshAttributesRef<int,UE::Math::TVector<float>_> TVar18;
  TKeyInitializer<FName_&> TVar19;
  FAttributesSetEntry FVar20;
  FAttributesSetEntry FVar21;
  TKeyInitializer<FName_&> local_res8;
  FAttributesSetEntry local_res10;
  FName local_res18;
  FName local_res20;
  TMeshAttributesRef<int,TArrayView<FUVID,int>_> local_48;
  
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &VerticesName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->VertexElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &VertexInstancesName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->VertexInstanceElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)&UVsName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->UVElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &EdgesName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->EdgeElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &TrianglesName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->TriangleElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &PolygonsName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->PolygonElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       &PolygonGroupsName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res10);
  this->PolygonGroupElements =
       *(FMeshElementChannels **)
        (*(longlong *)&this->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  pFVar11 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  local_res18 = MeshAttribute::VertexInstance::VertexIndex;
  pFVar1 = &pFVar11->Attributes;
  pTVar12 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)pFVar1,MeshAttribute::VertexInstance::VertexIndex);
  FVar21.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar13 = (TMeshAttributeArraySet<int> *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar13 = (TMeshAttributeArraySet<int> *)FVar21.Ptr.Ptr;
  }
  if (pTVar13 == (TMeshAttributeArraySet<int> *)0x0) {
LAB_143679184:
    iVar2 = (pFVar11->Attributes).NumElements;
    local_res8.Key = (FName *)0x0;
    pTVar13 = ::operator_new(0x48);
    TVar19.Key = (FName *)FVar21.Ptr.Ptr;
    if (pTVar13 != (TMeshAttributeArraySet<int> *)0x0) {
      (pTVar13->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
      *(undefined4 *)&pTVar13->_padding_ = 4;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 1;
      *(int *)&pTVar13->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 0x30;
      pTVar13->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
      (pTVar13->ArrayForChannels).ArrayNum = 0;
      (pTVar13->ArrayForChannels).ArrayMax = 1;
      pTVar13->DefaultValue = -1;
      TMeshAttributeArraySet<int>::SetNumChannels(pTVar13,1);
      TVar19.Key = (FName *)pTVar13;
    }
    TVar9.Key = local_res8.Key;
    if (local_res8.Key != (FName *)0x0) {
      FVar4 = *local_res8.Key;
      local_res8.Key = TVar19.Key;
      (**(code **)FVar4)(TVar9.Key,1);
      TVar19.Key = local_res8.Key;
    }
    local_res8.Key = TVar19.Key;
    pTVar13 = (TMeshAttributeArraySet<int> *)
              TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Emplace<FName_const_&,FAttributesSetEntry>
                        ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)pFVar1,&local_res18,(FAttributesSetEntry *)&local_res8);
    if ((TMeshAttributeArraySet<int> *)local_res8.Key != (TMeshAttributeArraySet<int> *)0x0) {
      (**(code **)*local_res8.Key)();
    }
  }
  else {
    plVar3 = (longlong *)pTVar13->_padding_;
    if (((int)plVar3[1] != 4) || (*(int *)((longlong)plVar3 + 0xc) != 1)) {
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,local_res18);
      goto LAB_143679184;
    }
    (**(code **)(*plVar3 + 0x70))();
    *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x30;
  }
  pFVar5 = this->EdgeElements;
  (this->VertexInstanceVertices).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar13->_padding_;
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  local_res20 = MeshAttribute::Edge::VertexIndex;
  pFVar1 = &pFVar11->Attributes;
  pTVar12 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)pFVar1,MeshAttribute::Edge::VertexIndex);
  pTVar13 = (TMeshAttributeArraySet<int> *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar13 = (TMeshAttributeArraySet<int> *)FVar21.Ptr.Ptr;
  }
  if (pTVar13 == (TMeshAttributeArraySet<int> *)0x0) {
LAB_143679294:
    iVar2 = (pFVar11->Attributes).NumElements;
    local_res10.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (FMeshAttributeArraySetBase *)0x0;
    pTVar13 = ::operator_new(0x48);
    FVar20.Ptr.Ptr = FVar21.Ptr.Ptr;
    if (pTVar13 != (TMeshAttributeArraySet<int> *)0x0) {
      (pTVar13->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
      *(undefined4 *)&pTVar13->_padding_ = 4;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 2;
      *(int *)&pTVar13->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 0x30;
      pTVar13->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
      (pTVar13->ArrayForChannels).ArrayNum = 0;
      (pTVar13->ArrayForChannels).ArrayMax = 1;
      pTVar13->DefaultValue = -1;
      TMeshAttributeArraySet<int>::SetNumChannels(pTVar13,1);
      FVar20.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           pTVar13;
    }
    FVar10.Ptr.Ptr = local_res10.Ptr.Ptr;
    if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
      puVar6 = *(undefined8 **)local_res10.Ptr.Ptr;
      local_res10.Ptr.Ptr = FVar20.Ptr.Ptr;
      (*(code *)*puVar6)(FVar10.Ptr.Ptr,1);
      FVar20.Ptr.Ptr = local_res10.Ptr.Ptr;
    }
    local_res10.Ptr.Ptr = FVar20.Ptr.Ptr;
    pTVar13 = (TMeshAttributeArraySet<int> *)
              TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Emplace<FName_const_&,FAttributesSetEntry>
                        ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)pFVar1,&local_res20,&local_res10);
    if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
      (*(code *)**(undefined8 **)local_res10.Ptr.Ptr)();
    }
  }
  else {
    plVar3 = (longlong *)pTVar13->_padding_;
    if (((int)plVar3[1] != 4) || (*(int *)((longlong)plVar3 + 0xc) != 2)) {
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,local_res20);
      goto LAB_143679294;
    }
    (**(code **)(*plVar3 + 0x70))();
    *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x30;
  }
  local_48.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar13->_padding_;
  pFVar5 = this->TriangleElements;
  local_48.Extent = 2;
  (this->EdgeVertices).ArrayPtr = local_48.ArrayPtr;
  *(ulonglong *)&(this->EdgeVertices).Extent = CONCAT44(local_48._12_4_,2);
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  local_res20 = MeshAttribute::Triangle::VertexInstanceIndex;
  pFVar1 = &pFVar11->Attributes;
  pTVar12 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)pFVar1,MeshAttribute::Triangle::VertexInstanceIndex);
  pTVar13 = (TMeshAttributeArraySet<int> *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar13 = (TMeshAttributeArraySet<int> *)FVar21.Ptr.Ptr;
  }
  if (pTVar13 == (TMeshAttributeArraySet<int> *)0x0) {
LAB_1436793b3:
    iVar2 = (pFVar11->Attributes).NumElements;
    local_res10.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (FMeshAttributeArraySetBase *)0x0;
    pTVar13 = ::operator_new(0x48);
    FVar20.Ptr.Ptr = FVar21.Ptr.Ptr;
    if (pTVar13 != (TMeshAttributeArraySet<int> *)0x0) {
      (pTVar13->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
      *(undefined4 *)&pTVar13->_padding_ = 4;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 3;
      *(int *)&pTVar13->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 0x30;
      pTVar13->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
      (pTVar13->ArrayForChannels).ArrayNum = 0;
      (pTVar13->ArrayForChannels).ArrayMax = 1;
      pTVar13->DefaultValue = -1;
      TMeshAttributeArraySet<int>::SetNumChannels(pTVar13,1);
      FVar20.Ptr.Ptr =
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
           pTVar13;
    }
    FVar10.Ptr.Ptr = local_res10.Ptr.Ptr;
    if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
      puVar6 = *(undefined8 **)local_res10.Ptr.Ptr;
      local_res10.Ptr.Ptr = FVar20.Ptr.Ptr;
      (*(code *)*puVar6)(FVar10.Ptr.Ptr,1);
      FVar20.Ptr.Ptr = local_res10.Ptr.Ptr;
    }
    local_res10.Ptr.Ptr = FVar20.Ptr.Ptr;
    pTVar13 = (TMeshAttributeArraySet<int> *)
              TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Emplace<FName_const_&,FAttributesSetEntry>
                        ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                          *)pFVar1,&local_res20,&local_res10);
    if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
      (*(code *)**(undefined8 **)local_res10.Ptr.Ptr)();
    }
  }
  else {
    plVar3 = (longlong *)pTVar13->_padding_;
    if (((int)plVar3[1] != 4) || (*(int *)((longlong)plVar3 + 0xc) != 3)) {
      TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
      ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,local_res20);
      goto LAB_1436793b3;
    }
    (**(code **)(*plVar3 + 0x70))();
    *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x30;
  }
  local_48.ArrayPtr = (FMeshAttributeArraySetBase *)pTVar13->_padding_;
  pFVar5 = this->TriangleElements;
  local_48.Extent = 3;
  (this->TriangleVertexInstances).ArrayPtr = local_48.ArrayPtr;
  *(ulonglong *)&(this->TriangleVertexInstances).Extent = CONCAT44(local_48._12_4_,3);
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  local_res20 = MeshAttribute::Triangle::PolygonIndex;
  pFVar1 = &pFVar11->Attributes;
  pTVar12 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)pFVar1,MeshAttribute::Triangle::PolygonIndex);
  pTVar13 = (TMeshAttributeArraySet<int> *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar13 = (TMeshAttributeArraySet<int> *)FVar21.Ptr.Ptr;
  }
  if (pTVar13 != (TMeshAttributeArraySet<int> *)0x0) {
    plVar3 = (longlong *)pTVar13->_padding_;
    if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
      (**(code **)(*plVar3 + 0x70))();
      *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x30;
      goto LAB_143679571;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)pFVar1,local_res20);
  }
  iVar2 = (pFVar11->Attributes).NumElements;
  local_res10.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar13 = ::operator_new(0x48);
  if (pTVar13 != (TMeshAttributeArraySet<int> *)0x0) {
    (pTVar13->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    *(undefined4 *)&pTVar13->_padding_ = 4;
    *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 1;
    *(int *)&pTVar13->_padding_ = iVar2;
    *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 0x30;
    pTVar13->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pTVar13->ArrayForChannels).ArrayNum = 0;
    (pTVar13->ArrayForChannels).ArrayMax = 1;
    pTVar13->DefaultValue = -1;
    TMeshAttributeArraySet<int>::SetNumChannels(pTVar13,1);
    FVar21.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar13
    ;
  }
  FVar20.Ptr.Ptr = local_res10.Ptr.Ptr;
  if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar6 = *(undefined8 **)local_res10.Ptr.Ptr;
    local_res10.Ptr.Ptr = FVar21.Ptr.Ptr;
    (*(code *)*puVar6)(FVar20.Ptr.Ptr,1);
    FVar21.Ptr.Ptr = local_res10.Ptr.Ptr;
  }
  local_res10.Ptr.Ptr = FVar21.Ptr.Ptr;
  pTVar13 = (TMeshAttributeArraySet<int> *)
            TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Emplace<FName_const_&,FAttributesSetEntry>
                      ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)pFVar1,&local_res20,&local_res10);
  if (local_res10.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res10.Ptr.Ptr)();
  }
LAB_143679571:
  pFVar5 = this->TriangleElements;
  (this->TrianglePolygons).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar13->_padding_;
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  TVar14 = FAttributesSetBase::RegisterIndexAttribute<FPolygonGroupID,0>
                     (&pFVar11->Attributes,(FName)&local_res8,
                      MeshAttribute::Triangle::PolygonGroupIndex.ComparisonIndex.Value.Value,
                      Lerpable);
  (this->TrianglePolygonGroups).ArrayPtr =
       (FMeshAttributeArraySetBase *)(TVar14.ArrayPtr)->_padding_;
  pFVar11 = FMeshElementChannels::Get(this->TriangleElements,0);
  pTVar15 = FAttributesSetBase::RegisterIndexAttribute<FUVID_[3],0>
                      (&pFVar11->Attributes,&local_48,MeshAttribute::Triangle::UVIndex,0,Mandatory);
  pFVar5 = this->TriangleElements;
  uVar7 = pTVar15->Extent;
  uVar8 = *(undefined4 *)&pTVar15->field_0xc;
  (this->TriangleUVs).ArrayPtr = pTVar15->ArrayPtr;
  (this->TriangleUVs).Extent = uVar7;
  *(undefined4 *)&(this->TriangleUVs).field_0xc = uVar8;
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  pTVar16 = FAttributesSetBase::RegisterIndexAttribute<FVertexID_[3],0>
                      (&pFVar11->Attributes,
                       (TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)&local_48,
                       MeshAttribute::Triangle::VertexIndex,1,Mandatory|Transient);
  pFVar5 = this->TriangleElements;
  uVar7 = pTVar16->Extent;
  uVar8 = *(undefined4 *)&pTVar16->field_0xc;
  (this->TriangleVertices).ArrayPtr = pTVar16->ArrayPtr;
  (this->TriangleVertices).Extent = uVar7;
  *(undefined4 *)&(this->TriangleVertices).field_0xc = uVar8;
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  pTVar17 = FAttributesSetBase::RegisterIndexAttribute<FEdgeID_[3],0>
                      (&pFVar11->Attributes,
                       (TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *)&local_48,
                       MeshAttribute::Triangle::EdgeIndex,1,Mandatory|Transient);
  pFVar5 = this->PolygonElements;
  uVar7 = pTVar17->Extent;
  uVar8 = *(undefined4 *)&pTVar17->field_0xc;
  (this->TriangleEdges).ArrayPtr = pTVar17->ArrayPtr;
  (this->TriangleEdges).Extent = uVar7;
  *(undefined4 *)&(this->TriangleEdges).field_0xc = uVar8;
  pFVar11 = FMeshElementChannels::Get(pFVar5,0);
  TVar14 = FAttributesSetBase::RegisterIndexAttribute<FPolygonGroupID,0>
                     (&pFVar11->Attributes,(FName)&local_res8,
                      MeshAttribute::Polygon::PolygonGroupIndex.ComparisonIndex.Value.Value,Lerpable
                     );
  (this->PolygonPolygonGroups).ArrayPtr = (FMeshAttributeArraySetBase *)(TVar14.ArrayPtr)->_padding_
  ;
  pFVar11 = FMeshElementChannels::Get(this->VertexElements,0);
  TVar18 = FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
                     (&pFVar11->Attributes,(FName)&local_res8,
                      MeshAttribute::Vertex::Position.ComparisonIndex.Value.Value,
                      (TVector<float> *)&DAT_00000001,0x54b783f8);
  (this->VertexPositions).ArrayPtr = (FMeshAttributeArraySetBase *)(TVar18.ArrayPtr)->_padding_;
  pFVar11 = FMeshElementChannels::Get(this->UVElements,0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector2<float>,0>
            (&pFVar11->Attributes,(FName)&local_res8,
             MeshAttribute::UV::UVCoordinate.ComparisonIndex.Value.Value,
             (TVector2<float> *)&DAT_00000001,0x54b783b0);
  InitializeIndexers(this);
  return;
}

// InitializeIndexers @ 143679730

void __thiscall FMeshDescription::InitializeIndexers(FMeshDescription *this)

{
  (this->VertexToVertexInstances).InitialSize = 6;
  FMeshElementIndexer::Set
            (&this->VertexToVertexInstances,this->VertexElements,this->VertexInstanceElements,
             MeshAttribute::VertexInstance::VertexIndex,0);
  (this->VertexToEdges).InitialSize = 6;
  FMeshElementIndexer::Set
            (&this->VertexToEdges,this->VertexElements,this->EdgeElements,
             MeshAttribute::Edge::VertexIndex,0);
  FMeshElementIndexer::Set
            (&this->VertexInstanceToTriangles,this->VertexInstanceElements,this->TriangleElements,
             MeshAttribute::Triangle::VertexInstanceIndex,0);
  (this->EdgeToTriangles).InitialSize = 2;
  FMeshElementIndexer::Set
            (&this->EdgeToTriangles,this->EdgeElements,this->TriangleElements,
             MeshAttribute::Triangle::EdgeIndex,0);
  (this->UVToTriangles).InitialSize = 6;
  FMeshElementIndexer::Set
            (&this->UVToTriangles,this->UVElements,this->TriangleElements,
             MeshAttribute::Triangle::UVIndex,0);
  (this->PolygonToTriangles).InitialSize = 1;
  FMeshElementIndexer::Set
            (&this->PolygonToTriangles,this->PolygonElements,this->TriangleElements,
             MeshAttribute::Triangle::PolygonIndex,0);
  FMeshElementIndexer::SetUnchunked(&this->PolygonGroupToTriangles);
  FMeshElementIndexer::SetUnchunked(&this->PolygonGroupToPolygons);
  (this->PolygonGroupToTriangles).InitialSize = 0x100;
  (this->PolygonGroupToPolygons).InitialSize = 0x100;
  FMeshElementIndexer::Set
            (&this->PolygonGroupToTriangles,this->PolygonGroupElements,this->TriangleElements,
             MeshAttribute::Triangle::PolygonGroupIndex,0);
  FMeshElementIndexer::Set
            (&this->PolygonGroupToPolygons,this->PolygonGroupElements,this->PolygonElements,
             MeshAttribute::Polygon::PolygonGroupIndex,0);
  return;
}

// IsEdgeInternal @ 14367d880

bool __thiscall FMeshDescription::IsEdgeInternal(FMeshDescription *this,FEdgeID param_1)

{
  FPolygonID *pFVar1;
  FPolygonID *pFVar2;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_18,(int)param_1,0);
  if (local_18.ArrayNum == 2) {
    pFVar1 = TMeshAttributesRef<int,FPolygonID>::operator[]
                       (&this->TrianglePolygons,(int)*local_18.DataPtr);
    pFVar2 = TMeshAttributesRef<int,FPolygonID>::operator[]
                       (&this->TrianglePolygons,(int)local_18.DataPtr[1]);
    if (*pFVar1 == *pFVar2) {
      return true;
    }
  }
  return false;
}

// IsEdgeInternalToPolygon @ 14367d990

bool __thiscall
FMeshDescription::IsEdgeInternalToPolygon(FMeshDescription *this,FEdgeID param_1,FPolygonID param_2)

{
  FPolygonID *pFVar1;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_18,(int)param_1,0);
  if (local_18.ArrayNum == 2) {
    pFVar1 = TMeshAttributesRef<int,FPolygonID>::operator[]
                       (&this->TrianglePolygons,(int)*local_18.DataPtr);
    if (*pFVar1 == param_2) {
      pFVar1 = TMeshAttributesRef<int,FPolygonID>::operator[]
                         (&this->TrianglePolygons,(int)local_18.DataPtr[1]);
      if (*pFVar1 == param_2) {
        return true;
      }
    }
  }
  return false;
}

// IsEmpty @ 14367db90

bool __thiscall FMeshDescription::IsEmpty(FMeshDescription *this)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14367dc2d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar15;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14367dc2d:
  uVar12 = *(uint *)&(this->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->Elements).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14367dd30;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14367dd30:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMeshElementTypeWrapper>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)
              (*(longlong *)&this->Elements + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    piVar2 = (int *)(lVar10 + 0x88);
    iVar4 = *piVar2;
    if (*(longlong *)(lVar10 + 0x80) != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x80);
    }
    lVar17 = (longlong)iVar4 * 0x80 + lVar10;
    while( true ) {
      if (*piVar2 != iVar4) {
        `TCheckedPointerIterator<FMeshElementContainer_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (lVar10 == lVar17) break;
      if (*(int *)(lVar10 + 0x18) != 0) {
        return false;
      }
      lVar10 = lVar10 + 0x80;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// IsVertexOrphaned @ 14367e040

bool __thiscall FMeshDescription::IsVertexOrphaned(FMeshDescription *this,FVertexID param_1)

{
  longlong lVar1;
  FVertexInstanceID *pFVar2;
  TArrayView<FVertexInstanceID_const_,int> local_18;
  
  FMeshElementIndexer::Find<FVertexInstanceID>
            (&this->VertexToVertexInstances,&local_18,(int)param_1,0);
  lVar1 = (longlong)local_18.ArrayNum;
  pFVar2 = local_18.DataPtr;
  while( true ) {
    if (pFVar2 == local_18.DataPtr + lVar1) {
      return true;
    }
    FMeshElementIndexer::Find<FTriangleID>
              (&this->VertexInstanceToTriangles,(TArrayView<FTriangleID_const_,int> *)&local_18,
               (int)*pFVar2,0);
    if (0 < local_18.ArrayNum) break;
    pFVar2 = pFVar2 + 1;
  }
  return false;
}

// NeedsCompact @ 14367e1d0

bool __thiscall FMeshDescription::NeedsCompact(FMeshDescription *this)

{
  int iVar1;
  int iVar2;
  FMeshElementChannels *pFVar3;
  FMeshElementContainer *pFVar4;
  
  pFVar3 = this->VertexElements;
  pFVar4 = FMeshElementChannels::Get(pFVar3,0);
  iVar1 = (pFVar4->BitArray).NumBits;
  iVar2 = pFVar4->NumHoles;
  pFVar4 = FMeshElementChannels::Get(pFVar3,0);
  if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
    pFVar3 = this->VertexInstanceElements;
    pFVar4 = FMeshElementChannels::Get(pFVar3,0);
    iVar1 = (pFVar4->BitArray).NumBits;
    iVar2 = pFVar4->NumHoles;
    pFVar4 = FMeshElementChannels::Get(pFVar3,0);
    if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
      pFVar3 = this->EdgeElements;
      pFVar4 = FMeshElementChannels::Get(pFVar3,0);
      iVar1 = (pFVar4->BitArray).NumBits;
      iVar2 = pFVar4->NumHoles;
      pFVar4 = FMeshElementChannels::Get(pFVar3,0);
      if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
        pFVar3 = this->TriangleElements;
        pFVar4 = FMeshElementChannels::Get(pFVar3,0);
        iVar1 = (pFVar4->BitArray).NumBits;
        iVar2 = pFVar4->NumHoles;
        pFVar4 = FMeshElementChannels::Get(pFVar3,0);
        if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
          pFVar3 = this->PolygonElements;
          pFVar4 = FMeshElementChannels::Get(pFVar3,0);
          iVar1 = (pFVar4->BitArray).NumBits;
          iVar2 = pFVar4->NumHoles;
          pFVar4 = FMeshElementChannels::Get(pFVar3,0);
          if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
            pFVar3 = this->PolygonGroupElements;
            pFVar4 = FMeshElementChannels::Get(pFVar3,0);
            iVar1 = (pFVar4->BitArray).NumBits;
            iVar2 = pFVar4->NumHoles;
            pFVar4 = FMeshElementChannels::Get(pFVar3,0);
            if ((pFVar4->BitArray).NumBits == iVar1 - iVar2) {
              return false;
            }
          }
        }
      }
    }
  }
  return true;
}

// RebuildIndexers @ 14367f080

void __thiscall FMeshDescription::RebuildIndexers(FMeshDescription *this)

{
  (this->VertexToVertexInstances).bSuspended = false;
  (this->VertexToVertexInstances).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->VertexToVertexInstances);
  (this->VertexToEdges).bSuspended = false;
  (this->VertexToEdges).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->VertexToEdges);
  (this->VertexInstanceToTriangles).bSuspended = false;
  (this->VertexInstanceToTriangles).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->VertexInstanceToTriangles);
  (this->EdgeToTriangles).bSuspended = false;
  (this->EdgeToTriangles).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->EdgeToTriangles);
  (this->UVToTriangles).bSuspended = false;
  (this->UVToTriangles).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->UVToTriangles);
  (this->PolygonToTriangles).bSuspended = false;
  (this->PolygonToTriangles).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->PolygonToTriangles);
  (this->PolygonGroupToTriangles).bSuspended = false;
  (this->PolygonGroupToTriangles).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->PolygonGroupToTriangles);
  (this->PolygonGroupToPolygons).bSuspended = false;
  (this->PolygonGroupToPolygons).bEverythingStale = true;
  FMeshElementIndexer::Build(&this->PolygonGroupToPolygons);
  return;
}

// Remap @ 1436838c0

void __thiscall FMeshDescription::Remap(FMeshDescription *this,FElementIDRemappings *param_1)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->VertexElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewVertexIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewVertexInstanceIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->EdgeElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewEdgeIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->TriangleElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewTriangleIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->PolygonElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewPolygonIndexLookup);
  pFVar1 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
  FMeshElementContainer::Remap(pFVar1,&param_1->NewPolygonGroupIndexLookup);
  FixUpElementIDs(this,param_1);
  return;
}

// RemapPolygonGroups @ 143683d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshDescription::RemapPolygonGroups
          (FMeshDescription *this,
          TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  FPolygonGroupID FVar2;
  void *pvVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  FMeshDescription *pFVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FPolygonGroupID FVar10;
  FMeshElementContainer *pFVar11;
  TTuple<FName,FAttributesSetEntry> *pTVar12;
  ForElementType<unsigned_int> FVar13;
  TMeshAttributeArrayBase<FName> *pTVar14;
  FName *pFVar15;
  TArrayView<FTriangleID_const_,int> *pTVar16;
  TArrayView<FPolygonID_const_,int> *pTVar17;
  FPolygonGroupID *pFVar18;
  byte bVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  ForElementType<FMeshElementContainer> FVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  ForElementType<FMeshElementContainer> FVar27;
  longlong *plVar28;
  TMeshAttributeArraySet<FName> *this_00;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  uint *puVar31;
  FMeshAttributeArraySetBase *pFVar32;
  uint uVar33;
  uint *puVar34;
  ForAnyElementType FVar35;
  undefined1 auStackY_238 [32];
  uint local_1f8;
  uint local_1f4;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined1 local_1ee [6];
  FMeshDescription *local_1e8;
  uint local_1e0;
  FName local_1d8;
  ForAnyElementType local_1d0;
  uint local_1c8;
  int local_1c4;
  ForAnyElementType local_1c0;
  uint local_1b8;
  int local_1b4;
  int local_1b0 [2];
  ulonglong local_1a8;
  uint local_1a0;
  uint uStack_19c;
  ForElementType<unsigned_int> FStack_198;
  undefined4 local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>
  *local_180;
  TMeshAttributeArraySet<FName> *local_178;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  uint *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TArrayView<FTriangleID_const_,int> local_d8;
  TArrayView<FPolygonID_const_,int> local_c8 [2];
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = this;
  local_180 = param_1;
  pFVar11 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
  pTVar12 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar11->Attributes,MeshAttribute_::PolygonGroup::ImportedMaterialSlotName);
  plVar20 = (longlong *)0x0;
  plVar28 = (longlong *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar28 = plVar20;
  }
  if (((plVar28 == (longlong *)0x0) ||
      (local_178 = (TMeshAttributeArraySet<FName> *)*plVar28, (int)local_178->_padding_ != 6)) ||
     (*(int *)((longlong)&local_178->_padding_ + 4) != 1)) {
    local_178 = (TMeshAttributeArraySet<FName> *)0x0;
  }
  this_00 = local_178;
  local_98 = 0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_88.MaxBits = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  FVar13 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(this->PolygonGroupElements,0);
  local_1a0 = 0;
  local_1a8 = 1;
  uStack_19c = 1;
  local_1f4 = *(int *)((longlong)FVar13 + 0x18);
  uStack_18c = 0;
  uStack_188 = 0;
  if (local_1f4 != 0) {
    FVar29 = FVar13;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar29 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
    }
    uVar33 = *(uint *)FVar29;
    plVar28 = plVar20;
    while (uVar33 == 0) {
      uStack_188 = (int)plVar28 + 0x20;
      plVar28 = (longlong *)(ulonglong)uStack_188;
      iVar26 = (int)plVar20;
      local_1a0 = iVar26 + 1;
      plVar20 = (longlong *)(ulonglong)local_1a0;
      if ((int)((local_1f4 - 1) + ((int)(local_1f4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a0)
      goto LAB_143683ef8;
      uVar33 = ((uint *)((longlong)FVar29 + 4))[iVar26];
    }
    uStack_19c = -uVar33 & uVar33;
    uVar22 = (ulonglong)uStack_19c * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_170 = (int)lVar21;
    uStack_18c = local_170 + -1 + (int)plVar28;
    if ((int)local_1f4 < (int)uStack_18c) {
LAB_143683ef8:
      uStack_18c = local_1f4;
    }
  }
  local_190 = 0xffffffff;
  local_158._padding_ = CONCAT44(uStack_19c,local_1a0);
  local_158.CurrentBitIndex = uStack_18c;
  local_158.UnvisitedBitMask = 0xffffffff;
  local_158._28_4_ = uStack_184;
  local_158.BaseBitIndex = uStack_188;
  iVar26 = (int)local_1f4 >> 5;
  bVar19 = (byte)local_1f4;
  uVar33 = local_1f4 & 0xffffffe0;
  FStack_198 = FVar13;
  local_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar13;
  if (((int)local_1f4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)((longlong)FVar13 + 0x18);
  if (local_1f4 != uVar9) {
    FVar29 = FVar13;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar29 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
    }
    uVar30 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar29 + (longlong)iVar26 * 4);
    while (uVar30 == 0) {
      lVar21 = (longlong)iVar26;
      uVar33 = uVar33 + 0x20;
      iVar26 = iVar26 + 1;
      local_1f4 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_143683fe0;
      uVar30 = *(uint *)((longlong)FVar29 + 4 + lVar21 * 4);
    }
    uVar22 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_16c = (int)lVar21;
    local_1f4 = local_16c + -1 + uVar33;
    if ((int)uVar9 < (int)local_1f4) {
      local_1f4 = uVar9;
    }
  }
LAB_143683fe0:
  uVar33 = local_88.NumBits;
  if ((local_158.CurrentBitIndex != local_1f4) ||
     ((ForElementType<unsigned_int>)local_158.Array != FVar13)) {
    local_1f8 = 0xffffffff;
    if (local_158.CurrentBitIndex < *(int *)((longlong)local_158.Array + 0x18)) {
      local_1f8 = local_158.CurrentBitIndex;
    }
    if (*(int *)&local_180->field_0x8 != *(int *)&local_180->field_0x34) {
      puVar25 = *(undefined1 **)&local_180->field_0x40;
      puVar24 = &local_180->field_0x38;
      if (puVar25 != (undefined1 *)0x0) {
        puVar24 = puVar25;
      }
      uVar22 = (ulonglong)(*(int *)&local_180->field_0x48 - 1U & local_1f8);
      iVar26 = *(int *)(puVar24 + uVar22 * 4);
      if (iVar26 != -1) {
        lVar21 = *(longlong *)local_180;
        do {
          if (*(uint *)(lVar21 + (longlong)iVar26 * 0x10) == local_1f8) {
            puVar24 = &local_180->field_0x38;
            if (puVar25 != (undefined1 *)0x0) {
              puVar24 = puVar25;
            }
            uVar33 = *(uint *)(puVar24 + uVar22 * 4);
            if (uVar33 == 0xffffffff) goto LAB_14368409c;
            goto LAB_143684080;
          }
          iVar26 = *(int *)(lVar21 + 8 + (longlong)iVar26 * 0x10);
        } while (iVar26 != -1);
      }
    }
    goto LAB_1436842c8;
  }
  iStack_130 = 0;
  local_118 = 0;
  uStack_11c = 0;
  if (local_88.NumBits == 0) goto LAB_143684362;
  FVar13 = (ForElementType<unsigned_int>)&local_88;
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar13 = local_88.AllocatorInstance.SecondaryData;
  }
  uVar9 = *(uint *)FVar13;
  goto joined_r0x00014368431e;
  while (uVar33 = puVar31[2], uVar33 != 0xffffffff) {
LAB_143684080:
    puVar31 = (uint *)((longlong)(int)uVar33 * 0x10 + lVar21);
    if (*puVar31 == local_1f8) {
      if (puVar31 != (uint *)0x0) goto LAB_1436840c9;
      goto LAB_14368409f;
    }
  }
LAB_14368409c:
  puVar31 = (uint *)0x0;
LAB_14368409f:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1436840c9:
  if (local_1f8 != puVar31[1]) {
    if ((int)local_90 != local_64) {
      puVar25 = local_60;
      if (local_58 != (undefined1 *)0x0) {
        puVar25 = local_58;
      }
      uVar33 = *(uint *)(puVar25 + (ulonglong)(local_50 - 1U & local_1f8) * 4);
      while (uVar33 != 0xffffffff) {
        puVar31 = (uint *)((longlong)(int)uVar33 * 0x38 + local_98);
        if (*puVar31 == local_1f8) {
          if (puVar31 != (uint *)0x0) goto LAB_143684176;
          break;
        }
        uVar33 = puVar31[0xc];
      }
    }
    local_160 = &local_1f8;
    TSet<TTuple<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FPolygonGroupID_const_&>_>
              (&local_98,(uint)local_1b0,
               (TKeyInitializer<FPolygonGroupID_const_&> *)(ulonglong)local_1f8,(bool *)&local_160);
    puVar31 = (uint *)((longlong)local_1b0[0] * 0x38 + local_98);
LAB_143684176:
    uVar33 = local_1f8;
    pTVar14 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_00,0);
    pFVar15 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar14,uVar33);
    *(FName *)(puVar31 + 2) = *pFVar15;
    pTVar16 = FMeshElementIndexer::Find<FTriangleID>
                        (&this->PolygonGroupToTriangles,&local_d8,local_1f8,0);
    TArray<FTriangleID,TSizedDefaultAllocator<32>_>::operator=<FTriangleID_const_,int>
              ((TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)(puVar31 + 4),pTVar16);
    pTVar17 = FMeshElementIndexer::Find<FPolygonID>
                        (&this->PolygonGroupToPolygons,local_c8,local_1f8,0);
    TArray<FPolygonID,TSizedDefaultAllocator<32>_>::operator=<FPolygonID_const_,int>
              ((TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)(puVar31 + 8),pTVar17);
    FVar27 = (ForElementType<FMeshElementContainer>)this->PolygonGroupElements;
    if ((*(int *)((longlong)FVar27 + 0x88) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar33 = local_1f8;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar27 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar27 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar27 + 0x80);
    }
    if ((((int)local_1f8 < 0) || (*(int *)((longlong)FVar27 + 0x18) <= (int)local_1f8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar23 = FVar27;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar27 + 0x10) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar23 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar27 + 0x10);
    }
    uVar9 = uVar33;
    if ((int)uVar33 < 0) {
      uVar9 = uVar33 + 0x1f;
    }
    puVar31 = (uint *)((longlong)FVar23 + (longlong)((int)uVar9 >> 5) * 4);
    *puVar31 = *puVar31 & ~((int)local_1a8 << ((byte)uVar33 & 0x1f));
    *(int *)((longlong)FVar27 + 0x78) = *(int *)((longlong)FVar27 + 0x78) + 1;
    FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar27 + 0x20),uVar33);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToPolygons,local_1f8,0);
    FMeshElementIndexer::RemoveKey(&this->PolygonGroupToTriangles,local_1f8,0);
  }
LAB_1436842c8:
  local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
  goto LAB_143683fe0;
joined_r0x00014368431e:
  if (uVar9 != 0) goto LAB_14368433c;
  lVar21 = (longlong)iStack_130;
  local_118 = local_118 + 0x20;
  iStack_130 = iStack_130 + 1;
  uStack_11c = local_88.NumBits;
  if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
      iStack_130) goto LAB_143684362;
  uVar9 = *(uint *)((longlong)FVar13 + (lVar21 + 1) * 4);
  goto joined_r0x00014368431e;
LAB_14368433c:
  local_1a8 = (ulonglong)(-uVar9 & uVar9);
  uVar22 = local_1a8 * 2 + 1;
  lVar21 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  local_168 = (int)lVar21;
  uStack_11c = local_118 + -1 + local_168;
  if (local_88.NumBits < (int)uStack_11c) {
    uStack_11c = local_88.NumBits;
  }
LAB_143684362:
  local_138 = &local_98;
  uVar9 = local_88.NumBits & 0xffffffe0;
  uStack_12c = (undefined4)local_1a8;
  uStack_114 = local_9c;
  local_128 = &local_88;
  iStack_110 = (int)local_90 - local_64;
  uStack_120 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
  iVar26 = local_88.NumBits >> 5;
  TStack_100._28_4_ = local_9c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  bVar19 = (byte)local_88.NumBits;
  local_1f4 = local_88.NumBits;
  local_108 = local_138;
  TStack_100.Array = local_128;
  if ((local_88.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar33 != local_88.NumBits) {
    FVar13 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_88.AllocatorInstance.SecondaryData;
    }
    uVar33 = -1 << (bVar19 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar26 * 4);
    while (uVar33 == 0) {
      lVar21 = (longlong)iVar26;
      uVar9 = uVar9 + 0x20;
      iVar26 = iVar26 + 1;
      if ((int)((local_88.NumBits - 1U) + ((int)(local_88.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar26) {
        local_1f4 = local_88.NumBits;
        uVar33 = local_88.NumBits;
        goto LAB_143684490;
      }
      uVar33 = *(uint *)((longlong)FVar13 + (lVar21 + 1) * 4);
    }
    uVar22 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_164 = (int)lVar21;
    uVar33 = (uVar9 - 1) + local_164;
    local_1f4 = uVar33;
    if (local_88.NumBits < (int)uVar33) {
      uVar33 = local_88.NumBits;
      local_1f4 = local_88.NumBits;
    }
  }
LAB_143684490:
  do {
    plVar20 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_1f0 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f0);
    }
    if (((TStack_100.CurrentBitIndex == uVar33) && (TStack_100.Array == &local_88)) &&
       (plVar20 == &local_98)) {
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,`FMeshDescription::RemapPolygonGroups'::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,_FMeshDescription::RemapPolygonGroups_::__l2::FOldPolygonGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      return;
    }
    puVar34 = (uint *)0x0;
    puVar31 = (uint *)(*plVar20 + (longlong)TStack_100.CurrentBitIndex * 0x38);
    local_1e0 = *puVar31;
    local_1d8 = *(FName *)(puVar31 + 2);
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = puVar31[6];
    lVar21 = (longlong)(int)local_1c8;
    pvVar3 = *(void **)(puVar31 + 4);
    if (local_1c8 == 0) {
      local_1c4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1c8,0,&local_1d0,local_1c8,&local_1c4);
      memcpy(local_1d0.Data,pvVar3,lVar21 << 2);
    }
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = puVar31[10];
    lVar21 = (longlong)(int)local_1b8;
    pvVar3 = *(void **)(puVar31 + 8);
    if (local_1b8 == 0) {
      local_1b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
      memcpy(local_1c0.Data,pvVar3,lVar21 << 2);
    }
    puVar31 = puVar34;
    if (*(int *)&local_180->field_0x8 != *(int *)&local_180->field_0x34) {
      puVar25 = &local_180->field_0x38;
      if (*(undefined1 **)&local_180->field_0x40 != (undefined1 *)0x0) {
        puVar25 = *(undefined1 **)&local_180->field_0x40;
      }
      uVar33 = *(uint *)(puVar25 + (ulonglong)(*(int *)&local_180->field_0x48 - 1U & local_1e0) * 4)
      ;
      if (uVar33 != 0xffffffff) {
        do {
          puVar31 = (uint *)((longlong)(int)uVar33 * 0x10 + *(longlong *)local_180);
          if (*puVar31 == local_1e0) {
            if (puVar31 != (uint *)0x0) goto LAB_143684635;
            break;
          }
          uVar33 = puVar31[2];
          puVar31 = puVar34;
        } while (uVar33 != 0xffffffff);
      }
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_143684635:
    FVar2 = *(FPolygonGroupID *)(puVar31 + 1);
    FVar13 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(this->PolygonGroupElements,0);
    if (((int)FVar2 < 0) || (*(int *)((longlong)FVar13 + 0x18) <= (int)FVar2)) {
LAB_14368467b:
      pFVar11 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
      FMeshElementContainer::Insert(pFVar11,(int)FVar2);
    }
    else {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = *(ForElementType<unsigned_int> *)((longlong)FVar13 + 0x10);
      }
      FVar10 = FVar2;
      if ((int)FVar2 < 0) {
        FVar10 = (FPolygonGroupID)((int)FVar2 + 0x1f);
      }
      if ((*(uint *)((longlong)FVar13 + (longlong)((int)FVar10 >> 5) * 4) >> ((uint)FVar2 & 0x1f) &
          1) == 0) goto LAB_14368467b;
    }
    FVar7 = local_1d8;
    pTVar14 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_00,0);
    pFVar15 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar14,(int)FVar2);
    uVar33 = local_1c8;
    pFVar6 = local_1e8;
    *pFVar15 = FVar7;
    uVar22 = (ulonglong)(int)local_1c8;
    pFVar1 = local_1d0.Data + uVar22 * 4;
    FVar35.Data = local_1d0.Data;
    while( true ) {
      if ((uint)uVar22 != uVar33) {
        local_1ef = 0;
        `TCheckedPointerIterator<FTriangleID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1ef);
      }
      this_00 = local_178;
      uVar9 = local_1b8;
      if (FVar35.Data == pFVar1) break;
      pFVar4 = (pFVar6->TrianglePolygonGroups).ArrayPtr;
      iVar26 = *(int *)FVar35.Data;
      if (((int)pFVar4[2].Type < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar32 = pFVar4 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar32 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
      }
      pFVar18 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar32,iVar26);
      *pFVar18 = FVar2;
      FMeshElementIndexer::AddReferenceToKey(&pFVar6->PolygonGroupToTriangles,(int)FVar2,iVar26,0);
      uVar22 = (ulonglong)local_1c8;
      FVar35.Data = FVar35.Data + 4;
    }
    uVar22 = (ulonglong)(int)local_1b8;
    pFVar1 = local_1c0.Data + uVar22 * 4;
    FVar35.Data = local_1c0.Data;
    while( true ) {
      if ((uint)uVar22 != uVar9) {
        local_1ee[0] = 0;
        `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1ee);
      }
      if (FVar35.Data == pFVar1) break;
      iVar26 = *(int *)FVar35.Data;
      pFVar4 = (local_1e8->PolygonPolygonGroups).ArrayPtr;
      if (((int)pFVar4[2].Type < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar32 = pFVar4 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar32 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
      }
      pFVar18 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar32,iVar26);
      *pFVar18 = FVar2;
      FMeshElementIndexer::AddReferenceToKey(&local_1e8->PolygonGroupToPolygons,(int)FVar2,iVar26,0)
      ;
      uVar22 = (ulonglong)local_1b8;
      FVar35.Data = FVar35.Data + 4;
    }
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    this = local_1e8;
    uVar33 = local_1f4;
  } while( true );
}

// RemovePolygonTriangles @ 143688e70

void __thiscall FMeshDescription::RemovePolygonTriangles(FMeshDescription *this,FPolygonID param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  FVertexID *pFVar3;
  FTriangleID FVar4;
  FMeshAttributeArraySetBase *pFVar5;
  TMeshAttributeArraySet<FVertexID> *this_00;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar6;
  code *pcVar7;
  FTriangleID *pFVar8;
  bool bVar9;
  int iVar10;
  FTriangleID FVar11;
  int iVar12;
  FPolygonGroupID *pFVar13;
  FPolygonID *pFVar14;
  FPolygonID *pFVar15;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  ForElementType<FMeshElementContainer> FVar16;
  ulonglong uVar17;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> this_02;
  FVertexID *pFVar18;
  ForElementType<FMeshElementContainer> FVar19;
  uint uVar20;
  int iVar21;
  FMeshAttributeArraySetBase *pFVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  undefined1 local_res18 [8];
  FPolygonGroupID local_res20;
  int local_d8 [2];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  longlong local_c0;
  FTriangleID *local_b8;
  TArrayView<FVertexInstanceID,int> local_b0;
  TArrayView<FEdgeID,int> local_a0;
  TArrayView<FVertexID,int> local_90;
  FMeshElementIndexer *local_80;
  FTriangleID *local_78;
  TArrayView<FTriangleID_const_,int> local_70;
  TArrayView<FTriangleID_const_,int> local_60 [2];
  
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_70,(int)param_1,0);
  pFVar13 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                      (&this->PolygonPolygonGroups,(int)param_1);
  local_res20 = *pFVar13;
  uVar20 = local_70.ArrayNum - 1;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (0 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  local_b8 = local_70.DataPtr;
  local_78 = local_70.DataPtr + local_70.ArrayNum;
  if (local_70.DataPtr != local_78) {
    local_80 = &this->PolygonGroupToTriangles;
    do {
      iVar21 = 0;
      pFVar5 = (this->TriangleVertexInstances).ArrayPtr;
      FVar4 = *local_70.DataPtr;
      local_b8 = local_70.DataPtr;
      if ((this->TriangleVertexInstances).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar22 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FVertexInstanceID>::Get
                  ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar22,&local_b0,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar22 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_b0.DataPtr =
             TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                       ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar22,(int)FVar4);
        local_b0.ArrayNum = (this->TriangleVertexInstances).Extent;
        if ((local_b0.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (this->TriangleEdges).ArrayPtr;
      if ((this->TriangleEdges).Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar22 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        TAttributeArrayContainer<FEdgeID>::Get
                  ((TAttributeArrayContainer<FEdgeID> *)pFVar22,&local_a0,(int)FVar4);
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar22 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar22 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        local_a0.DataPtr =
             TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                       ((TMeshAttributeArrayBase<FEdgeID> *)pFVar22,(int)FVar4);
        local_a0.ArrayNum = (this->TriangleEdges).Extent;
        if ((local_a0.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_c0 = 0;
      do {
        lVar23 = local_c0;
        if ((local_b0.ArrayNum <= iVar21) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FMeshElementIndexer::RemoveReferenceFromKey
                  (&this->VertexInstanceToTriangles,
                   *(int *)(&(local_b0.DataPtr)->field_0x0 + lVar23),(int)FVar4,0);
        if ((local_a0.ArrayNum <= iVar21) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_d8[0] = *(int *)(&(local_a0.DataPtr)->field_0x0 + lVar23);
        FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,local_60,local_d8[0],0);
        pFVar8 = local_60[0].DataPtr;
        if (local_60[0].ArrayNum == 2) {
          pFVar14 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&this->TrianglePolygons,(int)*local_60[0].DataPtr);
          pFVar15 = TMeshAttributesRef<int,FPolygonID>::operator[]
                              (&this->TrianglePolygons,(int)pFVar8[1]);
          lVar23 = local_c0;
          if (*pFVar14 == *pFVar15) {
            if (((local_d0.Data <= (FScriptContainerElement *)local_d8) &&
                ((FScriptContainerElement *)local_d8 < local_d0.Data + (longlong)local_c8._4_4_ * 4)
                ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar10 = (int)local_c8;
            if ((int)local_c8 == local_c8._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
            }
            local_c8 = CONCAT44(local_c8._4_4_,iVar10 + 1);
            *(int *)(local_d0.Data + (longlong)iVar10 * 4) = local_d8[0];
            lVar23 = local_c0;
          }
        }
        FMeshElementIndexer::RemoveReferenceFromKey(&this->EdgeToTriangles,local_d8[0],(int)FVar4,0)
        ;
        local_c0 = lVar23 + 4;
        iVar21 = iVar21 + 1;
      } while (iVar21 < 3);
      FMeshElementIndexer::RemoveReferenceFromKey(local_80,(int)local_res20,(int)FVar4,0);
      FVar19 = (ForElementType<FMeshElementContainer>)this->TriangleElements;
      if ((*(int *)((longlong)FVar19 + 0x88) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x80) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar19 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x80);
      }
      if ((((int)FVar4 < 0) || (*(int *)((longlong)FVar19 + 0x18) <= (int)FVar4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar16 = FVar19;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar16 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x10);
      }
      FVar11 = FVar4;
      if ((int)FVar4 < 0) {
        FVar11 = (FTriangleID)((int)FVar4 + 0x1f);
      }
      puVar1 = (uint *)((longlong)FVar16 + (longlong)((int)FVar11 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (FVar4._0_1_ & 0x1f));
      *(int *)((longlong)FVar19 + 0x78) = *(int *)((longlong)FVar19 + 0x78) + 1;
      FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar19 + 0x20),(int)FVar4);
      local_70.DataPtr = local_b8 + 1;
      local_b8 = local_70.DataPtr;
    } while (local_70.DataPtr != local_78);
  }
  FMeshElementIndexer::RemoveKey(&this->PolygonToTriangles,(int)param_1,0);
  iVar21 = (int)local_c8;
  uVar17 = (ulonglong)(int)local_c8;
  pFVar2 = local_d0.Data + uVar17 * 4;
  FVar24.Data = local_d0.Data;
  while( true ) {
    if ((int)uVar17 != iVar21) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar24.Data == pFVar2) {
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      return;
    }
    iVar10 = *(int *)FVar24.Data;
    this_00 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    if ((this->EdgeVertices).Extent == 0) {
      if (((this_00->ArrayForChannels).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (this_00->ArrayForChannels).AllocatorInstance.SecondaryData;
      this_02 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&this_00->ArrayForChannels;
      if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        this_02 = FVar6;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)this_02,&local_90,iVar10);
    }
    else {
      this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
      local_90.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,iVar10);
      local_90.ArrayNum = (this->EdgeVertices).Extent;
      if ((local_90.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar3 = local_90.DataPtr + local_90.ArrayNum;
    for (pFVar18 = local_90.DataPtr; pFVar18 != pFVar3; pFVar18 = pFVar18 + 1) {
      FMeshElementIndexer::RemoveReferenceFromKey(&this->VertexToEdges,(int)*pFVar18,iVar10,0);
    }
    FVar19 = (ForElementType<FMeshElementContainer>)this->EdgeElements;
    if ((*(int *)((longlong)FVar19 + 0x88) < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar19 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x80);
    }
    if (((iVar10 < 0) || (*(int *)((longlong)FVar19 + 0x18) <= iVar10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar16 = FVar19;
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x10) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar16 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar19 + 0x10);
    }
    iVar12 = iVar10;
    if (iVar10 < 0) {
      iVar12 = iVar10 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
    *(int *)((longlong)FVar19 + 0x78) = *(int *)((longlong)FVar19 + 0x78) + 1;
    FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar19 + 0x20),iVar10);
    FMeshElementIndexer::RemoveKey(&this->EdgeToTriangles,iVar10,0);
    uVar17 = local_c8 & 0xffffffff;
    FVar24.Data = FVar24.Data + 4;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ResetIndexers @ 143689ce0

void __thiscall FMeshDescription::ResetIndexers(FMeshDescription *this)

{
  FMeshElementIndexer::Reset(&this->VertexToVertexInstances);
  FMeshElementIndexer::Reset(&this->VertexToEdges);
  FMeshElementIndexer::Reset(&this->VertexInstanceToTriangles);
  FMeshElementIndexer::Reset(&this->EdgeToTriangles);
  FMeshElementIndexer::Reset(&this->UVToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonGroupToTriangles);
  FMeshElementIndexer::Reset(&this->PolygonGroupToPolygons);
  return;
}

// ReverseAllPolygonFacing @ 14368ab10

void __thiscall FMeshDescription::ReverseAllPolygonFacing(FMeshDescription *this)

{
  FPolygonID FVar1;
  TElementIDs local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  TConstIterator local_28;
  
  local_res8.Array = &FMeshElementChannels::Get(this->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_48);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_res8,&local_28);
  while( true ) {
    if ((local_48.CurrentBitIndex == local_28.Iterator.CurrentBitIndex) &&
       (local_48.Array == local_28.Iterator.Array)) break;
    FVar1 = (FPolygonID)0xffffffff;
    if (local_48.CurrentBitIndex < (local_48.Array)->NumBits) {
      FVar1 = (FPolygonID)local_48.CurrentBitIndex;
    }
    ReversePolygonFacing(this,FVar1);
    local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
  }
  return;
}

// ReversePolygonFacing @ 14368abc0

void __thiscall FMeshDescription::ReversePolygonFacing(FMeshDescription *this,FPolygonID param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_48;
  FVertexInstanceID *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FVertexInstanceID_const_,int> local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>(this,param_1,&local_48);
  uVar7 = 0;
  if (0 < local_48.ArrayNum / 2) {
    lVar9 = 0;
    do {
      uVar6 = ~uVar7 + local_48.ArrayNum;
      uVar5 = 0;
      if ((int)uVar6 < local_48.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      iVar8 = local_48.ArrayNum;
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = local_48.ArrayNum;
      }
      pFVar1 = local_48.AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
      uVar6 = 0;
      if ((int)uVar7 < iVar8) {
        uVar6 = ~uVar7 >> 0x1f;
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
      uVar2 = *(undefined4 *)(local_48.AllocatorInstance.Data + lVar9);
      *(undefined4 *)(local_48.AllocatorInstance.Data + lVar9) = *(undefined4 *)pFVar1;
      lVar9 = lVar9 + 4;
      *(undefined4 *)pFVar1 = uVar2;
    } while ((int)uVar7 < local_48.ArrayNum / 2);
  }
  RemovePolygonTriangles(this,param_1);
  iStack_30 = local_48.ArrayNum;
  local_38 = (FVertexInstanceID *)local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iStack_30;
  local_28.DataPtr = local_38;
  CreatePolygonTriangles(this,param_1,&local_28);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ReverseTriangleFacing @ 14368ae30

void __thiscall FMeshDescription::ReverseTriangleFacing(FMeshDescription *this,FTriangleID param_1)

{
  FVertexInstanceID FVar1;
  FVertexID FVar2;
  FEdgeID FVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FVertexInstanceID,int> local_38;
  TArrayView<FVertexID,int> local_28;
  TArrayView<FEdgeID,int> local_18;
  
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
            (&this->TriangleVertexInstances,&local_38,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
            (&this->TriangleVertices,&local_28,(int)param_1);
  TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
            (&this->TriangleEdges,&local_18,(int)param_1);
  if (local_38.ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_38.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar1 = *local_38.DataPtr;
  *local_38.DataPtr = local_38.DataPtr[1];
  local_38.DataPtr[1] = FVar1;
  if (local_28.ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_28.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar2 = *local_28.DataPtr;
  *local_28.DataPtr = local_28.DataPtr[1];
  local_28.DataPtr[1] = FVar2;
  if (local_18.ArrayNum < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_18.ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = local_18.DataPtr[1];
  local_18.DataPtr[1] = local_18.DataPtr[2];
  local_18.DataPtr[2] = FVar3;
  return;
}

// Serialize @ 14368ba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMeshDescription::Serialize(FMeshDescription *this,FArchive *param_1)

{
  int iVar1;
  FVertexID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  TMeshAttributeArraySet<FVertexID> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FMeshElementTypeWrapper *pFVar11;
  TMeshAttributeArrayBase<FVertexID> *pTVar12;
  FVertexID *pFVar13;
  uint uVar14;
  FMeshAttributeArraySetBase *pFVar15;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int local_res20 [2];
  TKeyInitializer<FName_&> local_188;
  FElementIDs local_180;
  TArrayView<FVertexInstanceID,int> local_178;
  TArrayView<FVertexID,int> local_168;
  TArrayView<FVertexID,int> local_158;
  TArrayView<FVertexID,int> local_148;
  TArrayView<FEdgeID,int> local_138;
  FName *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  FConstIterator local_100;
  FArchiveProxy local_d8;
  
  FArchiveProxy::FArchiveProxy(&local_d8,param_1);
  local_d8._padding_ = (longlong)&___7FNameAsStringProxyArchive__6B_;
  FArchive::UsingCustomVersion((FArchive *)&local_d8,&FReleaseObjectVersion::GUID);
  FArchive::UsingCustomVersion((FArchive *)&local_d8,&FEditorObjectVersion::GUID);
  FArchive::UsingCustomVersion((FArchive *)&local_d8,&FUE5MainStreamObjectVersion::GUID);
  if (((byte)local_d8._padding_ & 1) != 0) {
    iVar9 = FArchiveState::CustomVer((FArchiveState *)&local_d8,&FReleaseObjectVersion::GUID);
    if ((iVar9 < 0x11) && (2 < (byte)LogLoad._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
    }
    if (((((byte)local_d8._padding_ & 1) != 0) &&
        (iVar9 = FArchiveState::CustomVer((FArchiveState *)&local_d8,&FReleaseObjectVersion::GUID),
        iVar9 != 0x1f)) &&
       (iVar9 = FArchiveState::CustomVer
                          ((FArchiveState *)&local_d8,&FUE5MainStreamObjectVersion::GUID), iVar9 < 4
       )) {
      SerializeLegacy(this,(FArchive *)&local_d8);
      goto LAB_14368c2c8;
    }
  }
  TSetPrivateFriend::
  Serialize<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
            ((FArchive *)&local_d8,
             (TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
              *)this);
  if (((byte)local_d8._padding_ & 1) != 0) {
    pFVar11 = TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
              ::Find((TMapBase<FName,FMeshElementTypeWrapper,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>_>
                      *)this,UVsName);
    if (pFVar11 == (FMeshElementTypeWrapper *)0x0) {
      if (2 < (byte)LogLoad._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
      local_128 = &UVsName;
      TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&>_>
                ((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                  *)this,&local_188,(bool *)&local_128);
      this->UVElements =
           *(FMeshElementChannels **)
            (*(longlong *)&this->Elements + 8 + (longlong)(int)local_188.Key * 0x18);
    }
    Cache(this);
    local_180.Array = &FMeshElementChannels::Get(this->TriangleElements,0)->BitArray;
    FMeshElementContainer::FElementIDs::begin(&local_180,(FConstIterator *)&local_120);
    FMeshElementContainer::FElementIDs::end(&local_180,&local_100);
    while ((uVar18 = 0, local_120.CurrentBitIndex != local_100.Iterator.CurrentBitIndex ||
           (local_120.Array != local_100.Iterator.Array))) {
      uVar21 = uVar18;
      iVar9 = -1;
      if (local_120.CurrentBitIndex < (local_120.Array)->NumBits) {
        iVar9 = local_120.CurrentBitIndex;
      }
      do {
        pFVar3 = (this->TriangleVertexInstances).ArrayPtr;
        if ((this->TriangleVertexInstances).Extent == 0) {
          if (((int)pFVar3[2].Type < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar15,&local_178,iVar9);
          uVar14 = local_178.ArrayNum;
        }
        else {
          if (((int)pFVar3[2].Type < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          local_178.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                         ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar15,iVar9);
          uVar14 = (this->TriangleVertexInstances).Extent;
          local_178.ArrayNum = uVar14;
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar20 = (int)uVar21;
        if (((int)uVar14 <= iVar20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int *)(&(local_178.DataPtr)->field_0x0 + uVar18);
        pTVar12 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->VertexInstanceVertices).ArrayPtr,0);
        pFVar13 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar12,iVar1);
        pTVar4 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        FVar2 = *pFVar13;
        if ((this->TriangleVertices).Extent == 0) {
          if (((pTVar4->ArrayForChannels).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar4->ArrayForChannels;
          if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar16 = FVar5;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_168,iVar9);
          uVar14 = local_168.ArrayNum;
        }
        else {
          pTVar12 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar4,0);
          local_168.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar12,iVar9);
          uVar14 = (this->TriangleVertices).Extent;
          local_168.ArrayNum = uVar14;
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)uVar14 <= iVar20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(FVertexID *)(&(local_168.DataPtr)->field_0x0 + uVar18) = FVar2;
        FMeshElementIndexer::AddReferenceToKey(&this->VertexInstanceToTriangles,iVar1,iVar9,0);
        uVar21 = (ulonglong)(iVar20 + 1U);
        uVar18 = uVar18 + 4;
      } while ((int)(iVar20 + 1U) < 3);
      lVar19 = 0;
      iVar20 = 0;
      do {
        pTVar4 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        if ((this->TriangleVertices).Extent == 0) {
          if (((pTVar4->ArrayForChannels).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar4->ArrayForChannels;
          if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar16 = FVar5;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_158,iVar9);
          uVar14 = local_158.ArrayNum;
        }
        else {
          pTVar12 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar4,0);
          local_158.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar12,iVar9);
          uVar14 = (this->TriangleVertices).Extent;
          local_158.ArrayNum = uVar14;
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar1 = iVar20 + 1;
        uVar17 = iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                         (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3;
        uVar10 = 0;
        if ((int)uVar17 < (int)uVar14) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        if ((this->TriangleVertices).Extent == 0) {
          if (((pTVar4->ArrayForChannels).ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar4->ArrayForChannels;
          if (FVar5 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar16 = FVar5;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar16,&local_148,iVar9);
          uVar14 = local_148.ArrayNum;
        }
        else {
          pTVar12 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar4,0);
          local_148.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar12,iVar9);
          uVar14 = (this->TriangleVertices).Extent;
          local_148.ArrayNum = uVar14;
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)uVar14 <= iVar20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        GetVertexPairEdge(this,SUB84(local_res20,0),
                          *(FVertexID *)(&(local_148.DataPtr)->field_0x0 + lVar19));
        iVar7 = local_res20[0];
        pFVar3 = (this->TriangleEdges).ArrayPtr;
        if ((this->TriangleEdges).Extent == 0) {
          if (((int)pFVar3[2].Type < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar15,&local_138,iVar9);
          uVar14 = local_138.ArrayNum;
        }
        else {
          if (((int)pFVar3[2].Type < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar15 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          local_138.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar15,iVar9);
          uVar14 = (this->TriangleEdges).Extent;
          local_138.ArrayNum = uVar14;
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)uVar14 <= iVar20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)(&(local_138.DataPtr)->field_0x0 + lVar19) = iVar7;
        FMeshElementIndexer::AddReferenceToKey(&this->EdgeToTriangles,local_res20[0],iVar9,0);
        lVar19 = lVar19 + 4;
        iVar20 = iVar1;
      } while (iVar1 < 3);
      local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
    }
    RebuildIndexers(this);
  }
LAB_14368c2c8:
  FNameAsStringProxyArchive::~FNameAsStringProxyArchive((FNameAsStringProxyArchive *)&local_d8);
  return;
}

// SerializeLegacy @ 14368c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMeshDescription::SerializeLegacy(FMeshDescription *this,FArchive *param_1)

{
  FVertexID FVar1;
  FVertexID FVar2;
  FPolygonGroupID FVar3;
  int iVar4;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TMeshAttributeArraySet<FVertexID> *pTVar5;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar6;
  FMeshAttributeArraySetBase *pFVar7;
  code *pcVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  FFixAttributesSizeHelper<FVertexID> FVar13;
  FFixAttributesSizeHelper<FVertexInstanceID> FVar14;
  FFixAttributesSizeHelper<FEdgeID> FVar15;
  FFixAttributesSizeHelper<FPolygonID> FVar16;
  FFixAttributesSizeHelper<FPolygonGroupID> FVar17;
  FFixAttributesSizeHelper<FTriangleID> FVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  FPolygonID FVar25;
  uint uVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  TMeshAttributeArrayBase<FVertexID> *pTVar28;
  FVertexID *pFVar29;
  FPolygonGroupID *pFVar30;
  FPolygonID *pFVar31;
  FMeshElementContainer *pFVar32;
  byte bVar33;
  ForElementType<FMeshElementContainer> FVar34;
  longlong lVar35;
  ulonglong uVar36;
  ForElementType<FMeshElementContainer> FVar37;
  ForElementType<TMeshAttributeArrayBase<FVertexID>_> FVar38;
  FPolygonID FVar39;
  uint uVar40;
  FMeshAttributeArraySetBase *pFVar41;
  uint uVar42;
  uint *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  FArchiveState *this_00;
  undefined1 auStack_7a8 [32];
  longlong local_788;
  longlong local_780;
  int local_778;
  undefined4 uStack_774;
  undefined1 *local_770;
  undefined8 uStack_768;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  int local_740 [2];
  longlong local_738;
  int local_730;
  uint uStack_72c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_728;
  uint local_720;
  uint uStack_71c;
  uint uStack_718;
  undefined4 uStack_714;
  FArchiveState *local_710;
  int local_708;
  uint uStack_704;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_700;
  undefined4 local_6f8;
  FPolygonID FStack_6f4;
  int iStack_6f0;
  undefined4 uStack_6ec;
  TArrayView<FVertexID,int> local_6e8;
  TArrayView<FVertexID,int> local_6d8;
  TArrayView<FVertexID,int> local_6c8;
  TArrayView<FVertexInstanceID,int> local_6b8;
  TArrayView<FVertexID,int> local_6a8;
  TArrayView<FVertexID,int> local_698;
  TArrayView<FEdgeID,int> local_688;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_658;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5d8;
  int local_5b8;
  int local_5b4;
  ulonglong local_5b0;
  longlong local_5a8;
  undefined1 *local_5a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_598;
  undefined1 *local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_570;
  undefined1 *local_550;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_548;
  undefined1 *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined1 *local_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f8;
  undefined1 *local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4d0;
  FVertexInstanceID *local_4a8;
  int iStack_4a0;
  undefined4 uStack_49c;
  undefined1 *local_498;
  undefined8 uStack_490;
  TBitArray<FDefaultBitArrayAllocator> *local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  TArrayView<FVertexInstanceID_const_,int> local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_418;
  undefined4 local_3dc;
  undefined1 local_3d8 [32];
  uint *local_3b8;
  uint local_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0 [32];
  uint *local_380;
  FPolygonID local_378;
  undefined8 uStack_370;
  undefined1 local_368 [32];
  undefined8 local_348;
  int local_340;
  undefined8 uStack_338;
  undefined1 local_330 [32];
  undefined8 local_310;
  int local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [32];
  undefined8 local_2d8;
  uint local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0 [32];
  undefined8 local_2a0;
  int local_298;
  undefined8 uStack_290;
  undefined1 local_288 [64];
  void *local_248;
  undefined4 local_240;
  int local_238;
  undefined1 local_228 [64];
  void *local_1e8;
  undefined4 local_1e0;
  int local_1d8;
  undefined1 local_1c8 [64];
  void *local_188;
  undefined4 local_180;
  int local_178;
  undefined1 local_168 [64];
  void *local_128;
  undefined4 local_120;
  int local_118;
  undefined1 local_108 [64];
  void *local_c8;
  undefined4 local_c0;
  int local_b8;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  local_2c0._0_8_ = 0;
  local_2c0._8_8_ = 0;
  local_2a0 = 0;
  _local_298 = ___xmm_00000000ffffffff0000008000000000;
  uStack_290 = _UNK_150631d98;
  local_330._0_8_ = 0;
  local_330._8_8_ = 0;
  local_310 = 0;
  _local_308 = ___xmm_00000000ffffffff0000008000000000;
  uStack_300 = _UNK_150631d98;
  local_368._0_8_ = 0;
  local_368._8_8_ = 0;
  local_348 = 0;
  _local_340 = ___xmm_00000000ffffffff0000008000000000;
  uStack_338 = _UNK_150631d98;
  local_3d8._0_8_ = 0;
  local_3d8._8_8_ = 0;
  local_3b8 = (uint *)0x0;
  _local_3b0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_3a8 = _UNK_150631d98;
  local_3a0._0_8_ = 0;
  local_3a0._8_8_ = 0;
  local_380 = (uint *)0x0;
  _local_378 = ___xmm_00000000ffffffff0000008000000000;
  uStack_370 = _UNK_150631d98;
  local_2f8._0_8_ = 0;
  local_2f8._8_8_ = 0;
  local_2d8 = 0;
  _local_2d0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_2c8 = _UNK_150631d98;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._52_4_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_168._32_8_ = 0;
  local_168._40_4_ = 0;
  local_168._52_4_ = 0;
  local_128 = (void *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_1c8._0_8_ = 0;
  local_1c8._8_8_ = 0;
  local_1c8._32_8_ = 0;
  local_1c8._40_4_ = 0;
  local_1c8._52_4_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_228._0_8_ = 0;
  local_228._8_8_ = 0;
  local_228._32_8_ = 0;
  local_228._40_4_ = 0;
  local_228._52_4_ = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_288._0_8_ = 0;
  local_288._8_8_ = 0;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  local_168._44_4_ = 0x80;
  local_168._48_4_ = 0xffffffff;
  local_1c8._44_4_ = 0x80;
  local_1c8._48_4_ = 0xffffffff;
  local_228._44_4_ = 0x80;
  local_228._48_4_ = 0xffffffff;
  local_288._32_8_ = 0;
  local_288._40_4_ = 0;
  local_288._44_4_ = 0x80;
  local_288._48_4_ = 0xffffffff;
  local_288._52_4_ = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_710 = (FArchiveState *)param_1;
  ::operator<<(param_1,(TMeshElementArrayBase<FMeshVertex_Legacy> *)local_2c0);
  ::operator<<(param_1,(TMeshElementArrayBase<FMeshVertexInstance_Legacy> *)local_330);
  ::operator<<(param_1,(TMeshElementArrayBase<FMeshEdge_Legacy> *)local_368);
  ::operator<<(param_1,(TMeshElementArrayBase<FMeshPolygon_Legacy> *)local_3a0);
  ::operator<<(param_1,(TMeshElementArrayBase<FMeshPolygonGroup_Legacy> *)local_2f8);
  ::operator<<(param_1,(FAttributesSetBase *)local_a8);
  ::operator<<(param_1,(FAttributesSetBase *)local_108);
  ::operator<<(param_1,(FAttributesSetBase *)local_168);
  ::operator<<(param_1,(FAttributesSetBase *)local_228);
  ::operator<<(param_1,(FAttributesSetBase *)local_288);
  uVar19 = local_2c0._8_4_;
  local_778 = local_2c0._8_4_;
  uStack_774 = CONCAT31(uStack_774._1_3_,1);
  FVar13._4_4_ = uStack_774;
  FVar13.ExpectedNum = local_2c0._8_4_;
  TAttributesSet<FVertexID>::ForEach<FFixAttributesSizeHelper<FVertexID>_>
            ((TAttributesSet<FVertexID> *)local_a8,FVar13);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_a8,uVar19);
  uVar19 = local_330._8_4_;
  local_778 = local_330._8_4_;
  uStack_774 = CONCAT31(uStack_774._1_3_,1);
  FVar14._4_4_ = uStack_774;
  FVar14.ExpectedNum = local_330._8_4_;
  TAttributesSet<FVertexInstanceID>::ForEach<FFixAttributesSizeHelper<FVertexInstanceID>_>
            ((TAttributesSet<FVertexInstanceID> *)local_108,FVar14);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_108,uVar19);
  uVar19 = local_368._8_4_;
  local_778 = local_368._8_4_;
  uStack_774 = CONCAT31(uStack_774._1_3_,1);
  FVar15._4_4_ = uStack_774;
  FVar15.ExpectedNum = local_368._8_4_;
  TAttributesSet<FEdgeID>::ForEach<FFixAttributesSizeHelper<FEdgeID>_>
            ((TAttributesSet<FEdgeID> *)local_168,FVar15);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_168,uVar19);
  uVar19 = local_3a0._8_4_;
  local_778 = local_3a0._8_4_;
  uStack_774 = CONCAT31(uStack_774._1_3_,1);
  FVar16._4_4_ = uStack_774;
  FVar16.ExpectedNum = local_3a0._8_4_;
  TAttributesSet<FPolygonID>::ForEach<FFixAttributesSizeHelper<FPolygonID>_>
            ((TAttributesSet<FPolygonID> *)local_228,FVar16);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_228,uVar19);
  uVar19 = local_2f8._8_4_;
  local_778 = local_2f8._8_4_;
  uStack_774 = CONCAT31(uStack_774._1_3_,1);
  FVar17._4_4_ = uStack_774;
  FVar17.ExpectedNum = local_2f8._8_4_;
  TAttributesSet<FPolygonGroupID>::ForEach<FFixAttributesSizeHelper<FPolygonGroupID>_>
            ((TAttributesSet<FPolygonGroupID> *)local_288,FVar17);
  FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_288,uVar19);
  iVar21 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (0x22 < iVar21) {
    ::operator<<(param_1,(TMeshElementArrayBase<FMeshTriangle_Legacy> *)local_3d8);
    ::operator<<(param_1,(FAttributesSetBase *)local_1c8);
    uVar19 = local_3d8._8_4_;
    local_778 = local_3d8._8_4_;
    uStack_774 = CONCAT31(uStack_774._1_3_,1);
    FVar18._4_4_ = uStack_774;
    FVar18.ExpectedNum = local_3d8._8_4_;
    TAttributesSet<FTriangleID>::ForEach<FFixAttributesSizeHelper<FTriangleID>_>
              ((TAttributesSet<FTriangleID> *)local_1c8,FVar18);
    FAttributesSetBase::SetNumElements((FAttributesSetBase *)local_1c8,uVar19);
  }
  Initialize(this);
  local_618.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c0 + 0x10);
  local_618._padding_._0_4_ = 0;
  local_618._padding_._4_4_ = 1;
  local_618.UnvisitedBitMask = 0xffffffff;
  local_618.CurrentBitIndex = 0;
  local_618.BaseBitIndex = 0;
  iVar21 = 0;
  if (local_298 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_618);
    iVar21 = local_298;
  }
  uStack_768 = CONCAT44(local_618._padding_._4_4_,(undefined4)local_618._padding_);
  local_770 = local_2c0;
  uStack_758._4_4_ = local_618.CurrentBitIndex;
  uStack_758._0_4_ = local_618.UnvisitedBitMask;
  uStack_750._4_4_ = local_618._28_4_;
  uStack_750._0_4_ = local_618.BaseBitIndex;
  pTStack_760 = local_618.Array;
  TStack_598.Array = local_618.Array;
  local_5a0 = local_770;
  TStack_598._padding_ = uStack_768;
  TStack_598._16_8_ = uStack_758;
  TStack_598._24_8_ = uStack_750;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_458,(TBitArray<FDefaultBitArrayAllocator> *)(local_2c0 + 0x10),iVar21)
  ;
  uStack_768 = pTVar27->_padding_;
  pTVar12 = pTVar27->Array;
  uVar8 = pTVar27->CurrentBitIndex;
  pTStack_760 = pTVar12;
  while (((TStack_598.CurrentBitIndex != uVar8 || (TStack_598.Array != pTVar12)) ||
         (local_5a0 != local_2c0))) {
    FVar37 = (ForElementType<FMeshElementContainer>)this->VertexElements;
    iVar21 = -1;
    if (TStack_598.CurrentBitIndex < (TStack_598.Array)->NumBits) {
      iVar21 = TStack_598.CurrentBitIndex;
    }
    if (*(int *)((longlong)FVar37 + 0x88) < 1) {
      local_788 = 0;
      local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
    }
    FMeshElementContainer::Insert((FMeshElementContainer *)FVar37,iVar21);
    TStack_598.UnvisitedBitMask = TStack_598.UnvisitedBitMask & ~TStack_598._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_598);
  }
  local_5f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_330 + 0x10);
  local_5f8._padding_._0_4_ = 0;
  local_5f8._padding_._4_4_ = 1;
  local_5f8.UnvisitedBitMask = 0xffffffff;
  local_5f8.CurrentBitIndex = 0;
  local_5f8.BaseBitIndex = 0;
  iVar21 = 0;
  if (local_308 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5f8);
    iVar21 = local_308;
  }
  uStack_768 = CONCAT44(local_5f8._padding_._4_4_,(undefined4)local_5f8._padding_);
  local_770 = local_330;
  uStack_758._4_4_ = local_5f8.CurrentBitIndex;
  uStack_758._0_4_ = local_5f8.UnvisitedBitMask;
  uStack_750._4_4_ = local_5f8._28_4_;
  uStack_750._0_4_ = local_5f8.BaseBitIndex;
  pTStack_760 = local_5f8.Array;
  TStack_570.Array = local_5f8.Array;
  local_578 = local_770;
  TStack_570._padding_ = uStack_768;
  TStack_570._16_8_ = uStack_758;
  TStack_570._24_8_ = uStack_750;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_438,(TBitArray<FDefaultBitArrayAllocator> *)(local_330 + 0x10),iVar21)
  ;
  uStack_768 = pTVar27->_padding_;
  pTVar12 = pTVar27->Array;
  uVar9 = pTVar27->CurrentBitIndex;
  pTStack_760 = pTVar12;
  while (((TStack_570.CurrentBitIndex != uVar9 || (TStack_570.Array != pTVar12)) ||
         (local_578 != local_330))) {
    FVar37 = (ForElementType<FMeshElementContainer>)this->VertexInstanceElements;
    iVar21 = -1;
    if (TStack_570.CurrentBitIndex < (TStack_570.Array)->NumBits) {
      iVar21 = TStack_570.CurrentBitIndex;
    }
    if (*(int *)((longlong)FVar37 + 0x88) < 1) {
      local_788 = 0;
      local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
    }
    FMeshElementContainer::Insert((FMeshElementContainer *)FVar37,iVar21);
    FVar1 = *(FVertexID *)(local_330._0_8_ + (longlong)iVar21 * 0x18);
    pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (this->VertexInstanceVertices).ArrayPtr,0);
    pFVar29 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
    *pFVar29 = FVar1;
    FMeshElementIndexer::AddReferenceToKey(&this->VertexToVertexInstances,(int)FVar1,iVar21,0);
    TStack_570.UnvisitedBitMask = TStack_570.UnvisitedBitMask & ~TStack_570._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_570);
  }
  local_5d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10);
  local_5d8._padding_._0_4_ = 0;
  local_5d8._padding_._4_4_ = 1;
  local_5d8.UnvisitedBitMask = 0xffffffff;
  local_5d8.CurrentBitIndex = 0;
  local_5d8.BaseBitIndex = 0;
  iVar21 = 0;
  if (local_340 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5d8);
    iVar21 = local_340;
  }
  uStack_768 = CONCAT44(local_5d8._padding_._4_4_,(undefined4)local_5d8._padding_);
  local_770 = local_368;
  uStack_758._4_4_ = local_5d8.CurrentBitIndex;
  uStack_758._0_4_ = local_5d8.UnvisitedBitMask;
  uStack_750._4_4_ = local_5d8._28_4_;
  uStack_750._0_4_ = local_5d8.BaseBitIndex;
  pTStack_760 = local_5d8.Array;
  TStack_548.Array = local_5d8.Array;
  local_550 = local_770;
  TStack_548._padding_ = uStack_768;
  TStack_548._16_8_ = uStack_758;
  TStack_548._24_8_ = uStack_750;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_418,(TBitArray<FDefaultBitArrayAllocator> *)(local_368 + 0x10),iVar21)
  ;
  uStack_768 = pTVar27->_padding_;
  pTVar12 = pTVar27->Array;
  uVar10 = pTVar27->CurrentBitIndex;
  pTStack_760 = pTVar12;
  while (((TStack_548.CurrentBitIndex != uVar10 || (TStack_548.Array != pTVar12)) ||
         (local_550 != local_368))) {
    FVar37 = (ForElementType<FMeshElementContainer>)this->EdgeElements;
    iVar21 = -1;
    if (TStack_548.CurrentBitIndex < (TStack_548.Array)->NumBits) {
      iVar21 = TStack_548.CurrentBitIndex;
    }
    if (*(int *)((longlong)FVar37 + 0x88) < 1) {
      local_788 = 0;
      local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
    }
    iVar23 = *(int *)((longlong)FVar37 + 0x18);
    if (iVar21 < iVar23) {
      if ((iVar21 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      iVar23 = iVar21;
      if (iVar21 < 0) {
        iVar23 = iVar21 + 0x1f;
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)(iVar23 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << ((byte)iVar21 & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + -1;
    }
    else {
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar21 + 1);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar23,iVar21 - iVar23,false);
      if (((iVar21 < 0) || (*(int *)((longlong)FVar37 + 0x18) <= iVar21)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      iVar22 = iVar21;
      if (iVar21 < 0) {
        iVar22 = iVar21 + 0x1f;
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)(iVar22 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << ((byte)iVar21 & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + (iVar21 - iVar23);
      FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)FVar37 + 0x20),iVar21);
    }
    pTVar5 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    FVar1 = *(FVertexID *)(local_368._0_8_ + (longlong)iVar21 * 0x18);
    FVar2 = *(FVertexID *)(local_368._0_8_ + 4 + (longlong)iVar21 * 0x18);
    if ((this->EdgeVertices).Extent == 0) {
      iVar23 = (pTVar5->ArrayForChannels).ArrayNum;
      if (iVar23 < 1) {
        local_788 = 0;
        local_780 = (longlong)iVar23;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FVar6 = (pTVar5->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar38 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar5->ArrayForChannels;
      if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar38 = FVar6;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar38,&local_6d8,iVar21);
      uVar42 = local_6d8.ArrayNum;
LAB_14368ceef:
      bVar20 = (int)uVar42 < 0;
    }
    else {
      pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar5,0);
      local_6d8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
      uVar42 = (this->EdgeVertices).Extent;
      bVar20 = false;
      local_6d8.ArrayNum = uVar42;
      if ((int)uVar42 < 0) {
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        goto LAB_14368ceef;
      }
    }
    if (uVar42 == 0 || bVar20) {
      local_780 = (longlong)(int)uVar42;
      local_788 = 0;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    *local_6d8.DataPtr = FVar1;
    pTVar5 = (TMeshAttributeArraySet<FVertexID> *)(this->EdgeVertices).ArrayPtr;
    if ((this->EdgeVertices).Extent == 0) {
      iVar23 = (pTVar5->ArrayForChannels).ArrayNum;
      if (iVar23 < 1) {
        local_788 = 0;
        local_780 = (longlong)iVar23;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FVar6 = (pTVar5->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar38 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar5->ArrayForChannels;
      if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
        FVar38 = FVar6;
      }
      TAttributeArrayContainer<FVertexID>::Get
                ((TAttributeArrayContainer<FVertexID> *)FVar38,&local_6c8,iVar21);
      uVar42 = local_6c8.ArrayNum;
    }
    else {
      pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar5,0);
      local_6c8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
      uVar42 = (this->EdgeVertices).Extent;
      local_6c8.ArrayNum = uVar42;
      if (((int)uVar42 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if ((int)uVar42 < 2) {
      local_780 = (longlong)(int)uVar42;
      local_788 = 1;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    local_6c8.DataPtr[1] = FVar2;
    FMeshElementIndexer::AddReferenceToKey(&this->VertexToEdges,(int)FVar1,iVar21,0);
    FMeshElementIndexer::AddReferenceToKey(&this->VertexToEdges,(int)FVar2,iVar21,0);
    TStack_548.UnvisitedBitMask = TStack_548.UnvisitedBitMask & ~TStack_548._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_548);
  }
  local_638.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
  local_638._padding_._4_4_ = 1;
  local_638._padding_._0_4_ = 0;
  local_638.UnvisitedBitMask = 0xffffffff;
  local_638.CurrentBitIndex = 0;
  local_638.BaseBitIndex = 0;
  uVar42 = 0;
  if (local_2d0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_638);
    uVar42 = local_2d0;
  }
  uStack_768 = CONCAT44(local_638._padding_._4_4_,(undefined4)local_638._padding_);
  local_770 = local_2f8;
  uStack_758._4_4_ = local_638.CurrentBitIndex;
  uStack_758._0_4_ = local_638.UnvisitedBitMask;
  uStack_750._4_4_ = local_638._28_4_;
  uStack_750._0_4_ = local_638.BaseBitIndex;
  local_678.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
  bVar33 = (byte)uVar42 & 0x1f;
  pTStack_760 = local_638.Array;
  local_678._padding_._0_4_ = (int)uVar42 >> 5;
  local_678._padding_._4_4_ = 1 << bVar33;
  local_678.UnvisitedBitMask = -1 << bVar33;
  local_678.BaseBitIndex = uVar42 & 0xffffffe0;
  TStack_520.Array = local_638.Array;
  local_678.CurrentBitIndex = uVar42;
  local_528 = local_770;
  TStack_520._padding_ = uStack_768;
  TStack_520._16_8_ = uStack_758;
  TStack_520._24_8_ = uStack_750;
  if (((int)uVar42 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (uVar42 != local_2d0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_678);
  }
  iVar21 = local_678.CurrentBitIndex;
  pTVar12 = local_678.Array;
  uStack_768 = CONCAT44(local_678._padding_._4_4_,(int)local_678._padding_);
  pTStack_760 = local_678.Array;
  uStack_758 = CONCAT44(local_678.CurrentBitIndex,local_678.UnvisitedBitMask);
  uStack_750 = CONCAT44(local_678._28_4_,local_678.BaseBitIndex);
  while (((TStack_520.CurrentBitIndex != iVar21 || (TStack_520.Array != pTVar12)) ||
         (local_528 != local_2f8))) {
    FVar37 = (ForElementType<FMeshElementContainer>)this->PolygonGroupElements;
    uVar42 = 0xffffffff;
    if (TStack_520.CurrentBitIndex < (TStack_520.Array)->NumBits) {
      uVar42 = TStack_520.CurrentBitIndex;
    }
    if (*(int *)((longlong)FVar37 + 0x88) < 1) {
      local_788 = 0;
      local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
    }
    iVar23 = *(int *)((longlong)FVar37 + 0x18);
    bVar33 = (byte)uVar42;
    if ((int)uVar42 < iVar23) {
      if (((int)uVar42 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      if ((int)uVar42 < 0) {
        uVar42 = uVar42 + 0x1f;
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)((int)uVar42 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << (bVar33 & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + -1;
    }
    else {
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,uVar42 + 1);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar23,uVar42 - iVar23,false);
      if ((((int)uVar42 < 0) || (*(int *)((longlong)FVar37 + 0x18) <= (int)uVar42)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      uVar24 = uVar42;
      if ((int)uVar42 < 0) {
        uVar24 = uVar42 + 0x1f;
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)((int)uVar24 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << (bVar33 & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + (uVar42 - iVar23);
      FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)FVar37 + 0x20),uVar42);
    }
    TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
  }
  FVar39 = local_378;
  pTStack_760 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3a0 + 0x10);
  local_708 = 0;
  uStack_704 = 1;
  FStack_6f4 = (FPolygonID)0x0;
  iStack_6f0 = 0;
  if (local_378 != (FPolygonID)0x0) {
    puVar43 = (uint *)(local_3a0 + 0x10);
    if (local_380 != (uint *)0x0) {
      puVar43 = local_380;
    }
    uVar42 = *puVar43;
    while (uVar42 == 0) {
      iStack_6f0 = iStack_6f0 + 0x20;
      lVar35 = (longlong)local_708;
      local_708 = local_708 + 1;
      if ((int)((int)local_378 + -1 + ((int)local_378 + -1 >> 0x1f & 0x1fU)) >> 5 < local_708) {
        FStack_6f4 = local_378;
        goto LAB_14368d3f2;
      }
      uVar42 = puVar43[lVar35 + 1];
    }
    uStack_704 = -uVar42 & uVar42;
    uVar44 = (ulonglong)uStack_704 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar44 != 0) {
      for (; uVar44 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_5b8 = (int)lVar35;
    FStack_6f4 = (FPolygonID)(iStack_6f0 + -1 + local_5b8);
    if ((int)local_378 < (int)FStack_6f4) {
      FStack_6f4 = local_378;
    }
  }
LAB_14368d3f2:
  local_6f8 = 0xffffffff;
  uStack_768 = CONCAT44(uStack_704,local_708);
  local_770 = local_3a0;
  uStack_758._4_4_ = (uint)FStack_6f4;
  uStack_758._0_4_ = 0xffffffff;
  uStack_750._4_4_ = uStack_6ec;
  uStack_750._0_4_ = iStack_6f0;
  local_658.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_3a0 + 0x10);
  bVar33 = (byte)_local_378 & 0x1f;
  local_658.CurrentBitIndex = (int)local_378;
  local_658._padding_._0_4_ = (int)local_378 >> 5;
  local_658._padding_._4_4_ = 1 << bVar33;
  local_658.UnvisitedBitMask = -1 << bVar33;
  local_658.BaseBitIndex = (uint)local_378 & 0xffffffe0;
  pTStack_700 = pTStack_760;
  local_500 = local_770;
  TStack_4f8._padding_ = uStack_768;
  TStack_4f8.Array = pTStack_760;
  TStack_4f8._16_8_ = uStack_758;
  TStack_4f8._24_8_ = uStack_750;
  if (((int)local_378 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (FVar39 != local_378) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_658);
  }
  iVar21 = local_658.CurrentBitIndex;
  pTVar12 = local_658.Array;
  uStack_768 = CONCAT44(local_658._padding_._4_4_,(int)local_658._padding_);
  pTStack_760 = local_658.Array;
  uStack_758 = CONCAT44(local_658.CurrentBitIndex,local_658.UnvisitedBitMask);
  uStack_750 = CONCAT44(local_658._28_4_,local_658.BaseBitIndex);
  this_00 = local_710;
  while( true ) {
    if (((TStack_4f8.CurrentBitIndex == iVar21) && (TStack_4f8.Array == pTVar12)) &&
       (local_500 == local_3a0)) break;
    FVar37 = (ForElementType<FMeshElementContainer>)this->PolygonElements;
    FVar39 = (FPolygonID)0xffffffff;
    if (TStack_4f8.CurrentBitIndex < (TStack_4f8.Array)->NumBits) {
      FVar39 = (FPolygonID)TStack_4f8.CurrentBitIndex;
    }
    if (*(int *)((longlong)FVar37 + 0x88) < 1) {
      local_788 = 0;
      local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
        (ForElementType<FMeshElementContainer>)0x0) {
      FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
    }
    iVar23 = *(int *)((longlong)FVar37 + 0x18);
    if ((int)FVar39 < iVar23) {
      if (((int)FVar39 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      FVar25 = FVar39;
      if ((int)FVar39 < 0) {
        FVar25 = (FPolygonID)((int)FVar39 + 0x1f);
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)((int)FVar25 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << (FVar39._0_1_ & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + -1;
    }
    else {
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,(int)FVar39 + 1);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar23,(int)FVar39 - iVar23,false);
      if ((((int)FVar39 < 0) || (*(int *)((longlong)FVar37 + 0x18) <= (int)FVar39)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar34 = FVar37;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
      }
      FVar25 = FVar39;
      if ((int)FVar39 < 0) {
        FVar25 = (FPolygonID)((int)FVar39 + 0x1f);
      }
      puVar43 = (uint *)((longlong)FVar34 + (longlong)((int)FVar25 >> 5) * 4);
      *puVar43 = *puVar43 | 1 << (FVar39._0_1_ & 0x1f);
      *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + ((int)FVar39 - iVar23)
      ;
      FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)FVar37 + 0x20),(int)FVar39);
    }
    pFVar7 = (this->PolygonPolygonGroups).ArrayPtr;
    FVar3 = *(FPolygonGroupID *)(local_3a0._0_8_ + 0x20 + (longlong)(int)FVar39 * 0x28);
    lVar35 = (longlong)(int)FVar39 * 0x28;
    if ((int)pFVar7[2].Type < 1) {
      local_788 = 0;
      local_780 = (longlong)(int)pFVar7[2].Type;
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar41 = pFVar7 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
    }
    pFVar30 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                        ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar41,(int)FVar39);
    *pFVar30 = FVar3;
    FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToPolygons,(int)FVar3,(int)FVar39,0);
    this_00 = local_710;
    iVar23 = FArchiveState::CustomVer(local_710,&FEditorObjectVersion::GUID);
    if (iVar23 < 0x23) {
      if ((*(int *)(local_3a0._0_8_ + 8 + lVar35) < 3) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("PolygonArray[PolygonID].VertexInstanceIDs.Num() >= 3",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                              ,0x1fd,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_4a8 = *(FVertexInstanceID **)(local_3a0._0_8_ + lVar35);
      iVar23 = *(int *)(local_3a0._0_8_ + 8 + lVar35);
      if ((iVar23 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_468._12_4_ = uStack_49c;
      local_468.ArrayNum = iVar23;
      local_468.DataPtr = local_4a8;
      iStack_4a0 = iVar23;
      CreatePolygonTriangles(this,FVar39,&local_468);
    }
    TStack_4f8.UnvisitedBitMask = TStack_4f8.UnvisitedBitMask & ~TStack_4f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f8);
  }
  iVar21 = FArchiveState::CustomVer(this_00,&FEditorObjectVersion::GUID);
  if (0x22 < iVar21) {
    uVar24 = local_3b0;
    uVar42 = 0;
    uVar26 = 1;
    uStack_758._4_4_ = uVar42;
    uStack_750._0_4_ = uVar42;
    if (local_3b0 != 0) {
      puVar43 = (uint *)(local_3d8 + 0x10);
      if (local_3b8 != (uint *)0x0) {
        puVar43 = local_3b8;
      }
      uVar40 = *puVar43;
      uStack_750._0_4_ = 0;
      uVar42 = 0;
      while (uVar40 == 0) {
        lVar35 = (longlong)(int)uVar42;
        uStack_750._0_4_ = (uint)uStack_750 + 0x20;
        uVar42 = uVar42 + 1;
        uStack_758._4_4_ = local_3b0;
        if ((int)((local_3b0 - 1) + ((int)(local_3b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar42)
        goto LAB_14368d853;
        uVar40 = (puVar43 + 1)[lVar35];
      }
      uVar26 = -uVar40 & uVar40;
      uVar44 = (ulonglong)uVar26 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      local_5b4 = (int)lVar35;
      uStack_758._4_4_ = local_5b4 + -1 + (uint)uStack_750;
      if ((int)local_3b0 < (int)uStack_758._4_4_) {
        uStack_758._4_4_ = local_3b0;
      }
    }
LAB_14368d853:
    local_770 = local_3d8;
    pTStack_760 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3d8 + 0x10);
    uVar40 = local_3b0 & 0xffffffe0;
    uStack_768 = CONCAT44(uVar26,uVar42);
    bVar33 = (byte)_local_3b0 & 0x1f;
    uStack_758._0_4_ = 0xffffffff;
    uStack_72c = 1 << bVar33;
    iVar21 = (int)local_3b0 >> 5;
    uVar42 = -1 << bVar33;
    pTStack_728 = (TBitArray<FDefaultBitArrayAllocator> *)(local_3d8 + 0x10);
    uStack_750._4_4_ = local_3dc;
    uStack_71c = local_3b0;
    TStack_4d0._padding_ = uStack_768;
    TStack_4d0.BaseBitIndex = (uint)uStack_750;
    TStack_4d0._28_4_ = local_3dc;
    TStack_4d0.UnvisitedBitMask = 0xffffffff;
    TStack_4d0.CurrentBitIndex = uStack_758._4_4_;
    local_730 = iVar21;
    local_720 = uVar42;
    uStack_718 = uVar40;
    local_4d8 = local_770;
    TStack_4d0.Array = pTStack_760;
    if ((int)local_3b0 < 0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (uVar24 != local_3b0) {
      puVar43 = (uint *)(local_3d8 + 0x10);
      if (local_3b8 != (uint *)0x0) {
        puVar43 = local_3b8;
      }
      uVar42 = uVar42 & puVar43[iVar21];
      while (uVar42 == 0) {
        uStack_718 = uVar40 + 0x20;
        local_730 = iVar21 + 1;
        uStack_71c = local_3b0;
        if ((int)((local_3b0 - 1) + ((int)(local_3b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_730)
        goto LAB_14368d9c4;
        uVar42 = (puVar43 + 1)[iVar21];
        local_720 = 0xffffffff;
        uVar40 = uStack_718;
        iVar21 = local_730;
      }
      uStack_72c = -uVar42 & uVar42;
      uVar44 = (ulonglong)uStack_72c * 2 + 1;
      lVar35 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      local_778 = (int)lVar35;
      uStack_71c = (uVar40 - 1) + local_778;
      if ((int)local_3b0 < (int)uStack_71c) {
        uStack_71c = local_3b0;
      }
    }
LAB_14368d9c4:
    uStack_768 = CONCAT44(uStack_72c,local_730);
    local_770 = local_3d8;
    uStack_758 = CONCAT44(uStack_71c,local_720);
    uStack_750 = CONCAT44(uStack_714,uStack_718);
    pTStack_760 = pTStack_728;
    local_488 = pTStack_728;
    local_5b0 = (ulonglong)uStack_71c;
    local_498 = local_770;
    uStack_490 = uStack_768;
    uStack_480 = uStack_758;
    local_478 = uStack_750;
    while (((TStack_4d0.CurrentBitIndex != (int)local_5b0 || (TStack_4d0.Array != local_488)) ||
           (this_00 = local_710, local_4d8 != local_498))) {
      FVar37 = (ForElementType<FMeshElementContainer>)this->TriangleElements;
      iVar21 = -1;
      if (TStack_4d0.CurrentBitIndex < (TStack_4d0.Array)->NumBits) {
        iVar21 = TStack_4d0.CurrentBitIndex;
      }
      if (*(int *)((longlong)FVar37 + 0x88) < 1) {
        local_788 = 0;
        local_780 = (longlong)*(int *)((longlong)FVar37 + 0x88);
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar37 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x80);
      }
      iVar23 = *(int *)((longlong)FVar37 + 0x18);
      if (iVar21 < iVar23) {
        if ((iVar21 < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar34 = FVar37;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
        }
        iVar23 = iVar21;
        if (iVar21 < 0) {
          iVar23 = iVar21 + 0x1f;
        }
        puVar43 = (uint *)((longlong)FVar34 + (longlong)(iVar23 >> 5) * 4);
        *puVar43 = *puVar43 | 1 << ((byte)iVar21 & 0x1f);
        *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + -1;
      }
      else {
        TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar21 + 1);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar37,iVar23,iVar21 - iVar23,false);
        if (((iVar21 < 0) || (*(int *)((longlong)FVar37 + 0x18) <= iVar21)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar34 = FVar37;
        if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          FVar34 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar37 + 0x10);
        }
        iVar22 = iVar21;
        if (iVar21 < 0) {
          iVar22 = iVar21 + 0x1f;
        }
        puVar43 = (uint *)((longlong)FVar34 + (longlong)(iVar22 >> 5) * 4);
        *puVar43 = *puVar43 | 1 << ((byte)iVar21 & 0x1f);
        *(int *)((longlong)FVar37 + 0x78) = *(int *)((longlong)FVar37 + 0x78) + (iVar21 - iVar23);
        FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)FVar37 + 0x20),iVar21);
      }
      pFVar7 = (this->TrianglePolygons).ArrayPtr;
      local_5a8 = (longlong)iVar21 * 0x10;
      FVar39 = *(FPolygonID *)(local_3d8._0_8_ + 0xc + local_5a8);
      FVar3 = *(FPolygonGroupID *)(local_3a0._0_8_ + 0x20 + (longlong)(int)FVar39 * 0x28);
      if ((int)pFVar7[2].Type < 1) {
        local_788 = 0;
        local_780 = (longlong)(int)pFVar7[2].Type;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      pFVar41 = pFVar7 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
      }
      pFVar31 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonID> *)pFVar41,iVar21);
      *pFVar31 = FVar39;
      pFVar7 = (this->TrianglePolygonGroups).ArrayPtr;
      if ((int)pFVar7[2].Type < 1) {
        local_788 = 0;
        local_780 = (longlong)(int)pFVar7[2].Type;
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      pFVar41 = pFVar7 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
      }
      pFVar30 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                          ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar41,iVar21);
      *pFVar30 = FVar3;
      FMeshElementIndexer::AddReferenceToKey(&this->PolygonToTriangles,(int)FVar39,iVar21,0);
      FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToTriangles,(int)FVar3,iVar21,0);
      uVar36 = 0;
      local_738 = 0;
      uVar44 = uVar36;
      do {
        lVar35 = local_738;
        pFVar7 = (this->TriangleVertexInstances).ArrayPtr;
        iVar23 = *(int *)(local_3d8._0_8_ + local_5a8 + uVar44);
        uVar42 = pFVar7[2].Type;
        if ((this->TriangleVertexInstances).Extent == 0) {
          if ((int)uVar42 < 1) {
            local_788 = 0;
            local_780 = (longlong)(int)uVar42;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar41 = pFVar7 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar41,&local_6b8,iVar21);
          uVar42 = local_6b8.ArrayNum;
        }
        else {
          if ((int)uVar42 < 1) {
            local_788 = 0;
            local_780 = (longlong)(int)uVar42;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar41 = pFVar7 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
          }
          local_6b8.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                         ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar41,iVar21);
          uVar42 = (this->TriangleVertexInstances).Extent;
          local_6b8.ArrayNum = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar22 = (int)uVar36;
        if ((int)uVar42 <= iVar22) {
          local_780 = (longlong)(int)uVar42;
          local_788 = lVar35;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        *(int *)(&(local_6b8.DataPtr)->field_0x0 + uVar44) = iVar23;
        pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->VertexInstanceVertices).ArrayPtr,0);
        pFVar29 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar23);
        pTVar5 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        FVar1 = *pFVar29;
        if ((this->TriangleVertices).Extent == 0) {
          iVar4 = (pTVar5->ArrayForChannels).ArrayNum;
          if (iVar4 < 1) {
            local_788 = 0;
            local_780 = (longlong)iVar4;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar6 = (pTVar5->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar5->ArrayForChannels;
          if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar38 = FVar6;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar38,&local_6a8,iVar21);
          uVar42 = local_6a8.ArrayNum;
        }
        else {
          pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar5,0);
          local_6a8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
          uVar42 = (this->TriangleVertices).Extent;
          local_6a8.ArrayNum = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar35 = local_738;
        if ((int)uVar42 <= iVar22) {
          local_780 = (longlong)(int)uVar42;
          local_788 = local_738;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        *(FVertexID *)(&(local_6a8.DataPtr)->field_0x0 + uVar44) = FVar1;
        FMeshElementIndexer::AddReferenceToKey(&this->VertexInstanceToTriangles,iVar23,iVar21,0);
        local_738 = lVar35 + 1;
        uVar36 = (ulonglong)(iVar22 + 1U);
        uVar44 = uVar44 + 4;
      } while ((int)(iVar22 + 1U) < 3);
      lVar45 = 0;
      lVar35 = 0;
      iVar23 = 0;
      do {
        pTVar5 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        if ((this->TriangleVertices).Extent == 0) {
          iVar22 = (pTVar5->ArrayForChannels).ArrayNum;
          if (iVar22 < 1) {
            local_788 = 0;
            local_780 = (longlong)iVar22;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar6 = (pTVar5->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar5->ArrayForChannels;
          if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar38 = FVar6;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar38,&local_6e8,iVar21);
          uVar42 = local_6e8.ArrayNum;
        }
        else {
          pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar5,0);
          local_6e8.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
          uVar42 = (this->TriangleVertices).Extent;
          local_6e8.ArrayNum = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        iVar22 = iVar23 + 1;
        local_738 = CONCAT44(local_738._4_4_,iVar22);
        uVar26 = iVar22 + (iVar22 / 3 + (iVar22 >> 0x1f) +
                          (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        uVar24 = 0;
        if ((int)uVar26 < (int)uVar42) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if (uVar24 == 0) {
          local_780 = (longlong)(int)uVar42;
          local_788 = (longlong)(int)uVar26;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pTVar5 = (TMeshAttributeArraySet<FVertexID> *)(this->TriangleVertices).ArrayPtr;
        if ((this->TriangleVertices).Extent == 0) {
          iVar22 = (pTVar5->ArrayForChannels).ArrayNum;
          if (iVar22 < 1) {
            local_788 = 0;
            local_780 = (longlong)iVar22;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          FVar6 = (pTVar5->ArrayForChannels).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)&pTVar5->ArrayForChannels;
          if (FVar6 != (ForElementType<TMeshAttributeArrayBase<FVertexID>_>)0x0) {
            FVar38 = FVar6;
          }
          TAttributeArrayContainer<FVertexID>::Get
                    ((TAttributeArrayContainer<FVertexID> *)FVar38,&local_698,iVar21);
          uVar42 = local_698.ArrayNum;
        }
        else {
          pTVar28 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(pTVar5,0);
          local_698.DataPtr = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar28,iVar21);
          uVar42 = (this->TriangleVertices).Extent;
          local_698.ArrayNum = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if ((int)uVar42 <= iVar23) {
          local_780 = (longlong)(int)uVar42;
          local_788 = lVar35;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        GetVertexPairEdge(this,SUB84(local_740,0),
                          *(FVertexID *)(&(local_698.DataPtr)->field_0x0 + lVar45));
        iVar22 = local_740[0];
        pFVar7 = (this->TriangleEdges).ArrayPtr;
        uVar42 = pFVar7[2].Type;
        if ((this->TriangleEdges).Extent == 0) {
          if ((int)uVar42 < 1) {
            local_788 = 0;
            local_780 = (longlong)(int)uVar42;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar41 = pFVar7 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
          }
          TAttributeArrayContainer<FEdgeID>::Get
                    ((TAttributeArrayContainer<FEdgeID> *)pFVar41,&local_688,iVar21);
          uVar42 = local_688.ArrayNum;
        }
        else {
          if ((int)uVar42 < 1) {
            local_788 = 0;
            local_780 = (longlong)(int)uVar42;
            bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar20) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          pFVar41 = pFVar7 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar7[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar41 = (FMeshAttributeArraySetBase *)pFVar7[2]._padding_;
          }
          local_688.DataPtr =
               TMeshAttributeArrayBase<FEdgeID>::GetElementBase
                         ((TMeshAttributeArrayBase<FEdgeID> *)pFVar41,iVar21);
          uVar42 = (this->TriangleEdges).Extent;
          local_688.ArrayNum = uVar42;
          if (((int)uVar42 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if ((int)uVar42 <= iVar23) {
          local_780 = (longlong)(int)uVar42;
          local_788 = lVar35;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        *(int *)(&(local_688.DataPtr)->field_0x0 + lVar45) = iVar22;
        FMeshElementIndexer::AddReferenceToKey(&this->EdgeToTriangles,local_740[0],iVar21,0);
        lVar35 = lVar35 + 1;
        lVar45 = lVar45 + 4;
        iVar23 = (int)local_738;
      } while ((int)local_738 < 3);
      TStack_4d0.UnvisitedBitMask = TStack_4d0.UnvisitedBitMask & ~TStack_4d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4d0);
    }
  }
  pFVar32 = FMeshElementChannels::Get(this->VertexElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            *)&pFVar32->Attributes,MeshAttribute::Vertex::Position);
  pFVar32 = FMeshElementChannels::Get(this->VertexElements,0);
  FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_a8);
  pFVar32 = FMeshElementChannels::Get(this->VertexInstanceElements,0);
  FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_108);
  pFVar32 = FMeshElementChannels::Get(this->EdgeElements,0);
  FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_168);
  pFVar32 = FMeshElementChannels::Get(this->PolygonElements,0);
  FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_228);
  pFVar32 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
  FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_288);
  iVar21 = FArchiveState::CustomVer(this_00,&FEditorObjectVersion::GUID);
  if (0x22 < iVar21) {
    pFVar32 = FMeshElementChannels::Get(this->TriangleElements,0);
    FAttributesSetBase::AppendAttributesFrom(&pFVar32->Attributes,(FAttributesSetBase *)local_1c8);
  }
  Cache(this);
  FMeshElementIndexer::Build(&this->VertexToVertexInstances);
  FMeshElementIndexer::Build(&this->VertexToEdges);
  FMeshElementIndexer::Build(&this->VertexInstanceToTriangles);
  FMeshElementIndexer::Build(&this->EdgeToTriangles);
  FMeshElementIndexer::Build(&this->UVToTriangles);
  FMeshElementIndexer::Build(&this->PolygonToTriangles);
  FMeshElementIndexer::Build(&this->PolygonGroupToTriangles);
  FMeshElementIndexer::Build(&this->PolygonGroupToPolygons);
  local_240 = 0;
  if (local_248 != (void *)0x0) {
    FMemory::Free(local_248);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_288);
  local_1e0 = 0;
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_228);
  local_180 = 0;
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1c8);
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  local_c0 = 0;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  TSparseArray<FMeshPolygonGroup_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshPolygonGroup_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshPolygonGroup_Legacy,FDefaultSparseArrayAllocator> *)local_2f8);
  TSparseArray<FMeshPolygon_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshPolygon_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshPolygon_Legacy,FDefaultSparseArrayAllocator> *)local_3a0);
  TSparseArray<FMeshTriangle_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshTriangle_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshTriangle_Legacy,FDefaultSparseArrayAllocator> *)local_3d8);
  TSparseArray<FMeshEdge_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshEdge_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshEdge_Legacy,FDefaultSparseArrayAllocator> *)local_368);
  TSparseArray<FMeshVertexInstance_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshVertexInstance_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshVertexInstance_Legacy,FDefaultSparseArrayAllocator> *)local_330);
  TSparseArray<FMeshVertex_Legacy,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMeshVertex_Legacy,FDefaultSparseArrayAllocator>
            ((TSparseArray<FMeshVertex_Legacy,FDefaultSparseArrayAllocator> *)local_2c0);
  return;
}

// SetNumUVChannels @ 143695260

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshDescription::SetNumUVChannels(FMeshDescription *this,int param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FAttributesSetEntry FVar5;
  bool bVar6;
  uint uVar7;
  FMeshElementContainer *pFVar8;
  TMeshAttributesRef<int,TArrayView<FUVID,int>_> *pTVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  FAttributesSetEntry this_00;
  ForElementType<FMeshElementContainer> FVar11;
  longlong *plVar12;
  ulonglong uVar13;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  *this_01;
  uint uVar14;
  ulonglong uVar15;
  FAttributesSetEntry local_res8;
  FName local_res18 [2];
  TMeshAttributesRef<int,TArrayView<FUVID,int>_> local_48;
  
  TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&this->UVElements->Channels,param_1,Default);
  pFVar8 = FMeshElementChannels::Get(this->TriangleElements,0);
  uVar13 = 0;
  pTVar9 = FAttributesSetBase::RegisterIndexAttribute<FUVID_[3],0>
                     (&pFVar8->Attributes,&local_48,MeshAttribute::Triangle::UVIndex,param_1,None);
  uVar7 = pTVar9->Extent;
  uVar1 = *(undefined4 *)&pTVar9->field_0xc;
  (this->TriangleUVs).ArrayPtr = pTVar9->ArrayPtr;
  (this->TriangleUVs).Extent = uVar7;
  *(undefined4 *)&(this->TriangleUVs).field_0xc = uVar1;
  uVar15 = uVar13;
  if (0 < param_1) {
    do {
      FVar11 = (ForElementType<FMeshElementContainer>)this->UVElements;
      uVar14 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar14 < *(int *)((longlong)FVar11 + 0x88)) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res18[0] = MeshAttribute::UV::UVCoordinate;
      if (*(ForElementType<FMeshElementContainer> *)((longlong)FVar11 + 0x80) !=
          (ForElementType<FMeshElementContainer>)0x0) {
        FVar11 = *(ForElementType<FMeshElementContainer> *)((longlong)FVar11 + 0x80);
      }
      this_01 = (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                 *)((longlong)FVar11 + 0x20 + uVar15);
      pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find(this_01,MeshAttribute::UV::UVCoordinate);
      plVar12 = (longlong *)&pTVar10->field_0x8;
      if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      if (plVar12 == (longlong *)0x0) {
LAB_1436953a2:
        uVar1 = *(undefined4 *)&this_01[1].Elements;
        local_res8.Ptr.Ptr =
             (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             (FMeshAttributeArraySetBase *)0x0;
        this_00.Ptr.Ptr =
             (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
             ::operator_new(0x48);
        if (this_00.Ptr.Ptr == (FMeshAttributeArraySetBase *)0x0) {
          this_00.Ptr.Ptr =
               (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
               (FMeshAttributeArraySetBase *)0x0;
        }
        else {
          *(undefined4 *)
           &((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->_padding_ =
               uVar1;
          *(undefined4 *)
           &((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->_padding_ = 2;
          *(undefined4 *)
           ((longlong)
            &((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->_padding_ + 4)
               = 1;
          *(undefined4 *)
           ((longlong)
            &((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->_padding_ + 4)
               = 1;
          (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->ArrayForChannels
          ).AllocatorInstance.SecondaryData =
               (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
          ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->_padding_ =
               (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
          (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->ArrayForChannels
          ).ArrayNum = 0;
          (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->ArrayForChannels
          ).ArrayMax = 1;
          (((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr)->DefaultValue).
          field0_0x0._s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
                    ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)this_00.Ptr.Ptr,1);
        }
        FVar5.Ptr.Ptr = local_res8.Ptr.Ptr;
        if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
          puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
          local_res8.Ptr.Ptr = this_00.Ptr.Ptr;
          (*(code *)*puVar3)(FVar5.Ptr.Ptr,1);
          this_00.Ptr.Ptr = local_res8.Ptr.Ptr;
        }
        local_res8.Ptr.Ptr = this_00.Ptr.Ptr;
        TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
        ::Emplace<FName_const_&,FAttributesSetEntry>
                  ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_01,local_res18,&local_res8);
        if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
          (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
        }
      }
      else {
        plVar2 = (longlong *)*plVar12;
        if (((int)plVar2[1] != 2) || (*(int *)((longlong)plVar2 + 0xc) != 1)) {
          TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
          ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_01,local_res18[0]);
          goto LAB_1436953a2;
        }
        (**(code **)(*plVar2 + 0x70))(plVar2,1);
        *(undefined4 *)(*plVar12 + 0x14) = 1;
      }
      uVar13 = (ulonglong)(uVar14 + 1);
      uVar15 = uVar15 + 0x80;
    } while ((int)(uVar14 + 1) < param_1);
  }
  return;
}

// SetPolygonPolygonGroup @ 143695980

void __thiscall
FMeshDescription::SetPolygonPolygonGroup
          (FMeshDescription *this,FPolygonID param_1,FPolygonGroupID param_2)

{
  FPolygonGroupID FVar1;
  int iVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPolygonGroupID *pFVar6;
  FMeshAttributeArraySetBase *pFVar7;
  int *piVar8;
  TArrayView<int_const_,int> local_38;
  
  pFVar6 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                     (&this->PolygonPolygonGroups,(int)param_1);
  FVar1 = *pFVar6;
  FMeshElementIndexer::RemoveReferenceFromKey
            (&this->PolygonGroupToPolygons,(int)FVar1,(int)param_1,0);
  pFVar6 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                     (&this->PolygonPolygonGroups,(int)param_1);
  *pFVar6 = param_2;
  FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToPolygons,(int)param_2,(int)param_1,0);
  FMeshElementIndexer::Find(&this->PolygonToTriangles,&local_38,(int)param_1,0);
  piVar8 = local_38.DataPtr;
  while( true ) {
    if (piVar8 == local_38.DataPtr + local_38.ArrayNum) {
      return;
    }
    pFVar3 = (this->TrianglePolygonGroups).ArrayPtr;
    iVar2 = *piVar8;
    if (((int)pFVar3[2].Type < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar7 = pFVar3 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
    }
    pFVar6 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                       ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar7,iVar2);
    if ((*pFVar6 != FVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrianglePolygonGroups[TriangleID] == OldPolygonGroupID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                           ,0x477,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FMeshElementIndexer::RemoveReferenceFromKey(&this->PolygonGroupToTriangles,(int)FVar1,iVar2,0);
    pFVar3 = (this->TrianglePolygonGroups).ArrayPtr;
    if (((int)pFVar3[2].Type < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = pFVar3 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar7 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
    }
    pFVar6 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                       ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar7,iVar2);
    *pFVar6 = param_2;
    FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToTriangles,(int)param_2,iVar2,0);
    piVar8 = piVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SetPolygonVertexInstance @ 143695c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143695e1f) */
/* WARNING: Removing unreachable block (ram,0x000143695e51) */
/* WARNING: Removing unreachable block (ram,0x000143695dcb) */
/* WARNING: Removing unreachable block (ram,0x000143695dfd) */
/* WARNING: Removing unreachable block (ram,0x000143695e7c) */
/* WARNING: Removing unreachable block (ram,0x000143695eae) */

void __thiscall
FMeshDescription::SetPolygonVertexInstance
          (FMeshDescription *this,FPolygonID param_1,int param_2,FVertexInstanceID param_3)

{
  FVertexInstanceID FVar1;
  FTriangleID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FVertexInstanceID,int> *pTVar6;
  FVertexInstanceID *pFVar7;
  TMeshAttributeArrayBase<FVertexID> *pTVar8;
  FVertexID *pFVar9;
  FVertexID *pFVar10;
  uint uVar11;
  ForElementType<FVertexInstanceID> FVar12;
  FMeshAttributeArraySetBase *pFVar13;
  FVertexInstanceID *pFVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  TArrayView<FTriangleID_const_,int> local_c8;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_b8;
  TArrayView<FVertexInstanceID,int> local_b0;
  FTriangleID *local_a0;
  TArrayView<FVertexInstanceID,int> local_98;
  TArrayView<FVertexInstanceID,int> local_88;
  TArray<FVertexInstanceID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_c8,(int)param_1,0);
  if (local_c8.ArrayNum == 1) {
    if ((2 < param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerimeterIndex < 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x498,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8 = &this->TriangleVertexInstances;
    pTVar6 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                       (local_b8,&local_98,(int)*local_c8.DataPtr);
    pFVar7 = TArrayView<FVertexInstanceID,int>::operator[](pTVar6,param_2);
    FVar1 = *pFVar7;
    pTVar8 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr
                        ,0);
    pFVar9 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar8,(int)FVar1);
    pTVar8 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr
                        ,0);
    pFVar10 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar8,(int)param_3);
    if ((*pFVar9 != *pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexInstanceVertices[OldVertexInstanceID] == VertexInstanceVertices[VertexInstanceID]"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x49a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FMeshElementIndexer::RemoveReferenceFromKey
              (&this->VertexInstanceToTriangles,(int)FVar1,(int)*local_c8.DataPtr,0);
    pTVar6 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                       (local_b8,&local_88,(int)*local_c8.DataPtr);
    pFVar7 = TArrayView<FVertexInstanceID,int>::operator[](pTVar6,param_2);
    *pFVar7 = param_3;
    FMeshElementIndexer::AddReferenceToKey
              (&this->VertexInstanceToTriangles,(int)param_3,(int)*local_c8.DataPtr,0);
  }
  else {
    local_78.AllocatorInstance.SecondaryData = (ForElementType<FVertexInstanceID>)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 8;
    GetPolygonVertexInstances<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              (this,param_1,&local_78);
    if ((local_78.ArrayNum <= param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerimeterIndex < PolygonVertexInstances.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x4a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = 0;
    if (param_2 < local_78.ArrayNum) {
      uVar11 = (uint)~param_2 >> 0x1f;
    }
    if (uVar11 == 0) {
      local_d0 = (longlong)local_78.ArrayNum;
      local_d8 = (longlong)param_2;
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
    FVar12 = (ForElementType<FVertexInstanceID>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      FVar12 = local_78.AllocatorInstance.SecondaryData;
    }
    FVar1 = *(FVertexInstanceID *)((longlong)FVar12 + (longlong)param_2 * 4);
    pTVar8 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr
                        ,0);
    pFVar9 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar8,(int)FVar1);
    pTVar8 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       ((TMeshAttributeArraySet<FVertexID> *)(this->VertexInstanceVertices).ArrayPtr
                        ,0);
    pFVar10 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar8,(int)param_3);
    if ((*pFVar9 != *pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexInstanceVertices[OldVertexInstanceID] == VertexInstanceVertices[VertexInstanceID]"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshDescription.cpp"
                           ,0x4a4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8 = (TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)local_c8.DataPtr;
    local_a0 = local_c8.DataPtr + local_c8.ArrayNum;
    if (local_c8.DataPtr != local_a0) {
      do {
        pFVar3 = (this->TriangleVertexInstances).ArrayPtr;
        FVar2 = *local_c8.DataPtr;
        uVar11 = pFVar3[2].Type;
        local_b8 = (TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)local_c8.DataPtr;
        if ((this->TriangleVertexInstances).Extent == 0) {
          if ((int)uVar11 < 1) {
            local_d8 = 0;
            local_d0 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar13 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar13 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          TAttributeArrayContainer<FVertexInstanceID>::Get
                    ((TAttributeArrayContainer<FVertexInstanceID> *)pFVar13,&local_b0,(int)FVar2);
        }
        else {
          if ((int)uVar11 < 1) {
            local_d8 = 0;
            local_d0 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar13 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            pFVar13 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          local_b0.DataPtr =
               TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
                         ((TMeshAttributeArrayBase<FVertexInstanceID> *)pFVar13,(int)FVar2);
          local_b0.ArrayNum = (this->TriangleVertexInstances).Extent;
          if ((local_b0.ArrayNum < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar7 = local_b0.DataPtr + local_b0.ArrayNum;
        for (pFVar14 = local_b0.DataPtr; pFVar14 != pFVar7; pFVar14 = pFVar14 + 1) {
          if (*pFVar14 == FVar1) {
            FMeshElementIndexer::RemoveReferenceFromKey
                      (&this->VertexInstanceToTriangles,(int)FVar1,(int)FVar2,0);
            *pFVar14 = param_3;
            FMeshElementIndexer::AddReferenceToKey
                      (&this->VertexInstanceToTriangles,(int)param_3,(int)FVar2,0);
          }
        }
        local_c8.DataPtr = (FTriangleID *)((longlong)local_b8 + 4);
        local_b8 = (TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)local_c8.DataPtr;
      } while (local_c8.DataPtr != local_a0);
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SetPolygonVertexInstances @ 1436961a0

void __thiscall
FMeshDescription::SetPolygonVertexInstances
          (FMeshDescription *this,FPolygonID param_1,
          TArrayView<FVertexInstanceID_const_,int> *param_2)

{
  TArrayView<FVertexInstanceID_const_,int> local_18;
  
  RemovePolygonTriangles(this,param_1);
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  CreatePolygonTriangles(this,param_1,&local_18);
  return;
}

// SetTriangleUVIndices @ 1436963b0

void __thiscall
FMeshDescription::SetTriangleUVIndices
          (FMeshDescription *this,FTriangleID param_1,TArrayView<FUVID_const_,int> *param_2,
          int param_3)

{
  FUVID FVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FUVID,int> local_28;
  
  TMeshAttributesRef<int,TArrayView<FUVID,int>_>::Get
            (&this->TriangleUVs,&local_28,(int)param_1,param_3);
  if (param_2->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = *param_2->DataPtr;
  if (local_28.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *local_28.DataPtr = FVar1;
  if (param_2->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = param_2->DataPtr[1];
  if (local_28.ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.DataPtr[1] = FVar1;
  if (param_2->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = param_2->DataPtr[2];
  if (local_28.ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.DataPtr[2] = FVar1;
  if (param_2->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMeshElementIndexer::AddReferenceToKey
            (&this->UVToTriangles,(int)*param_2->DataPtr,(int)param_1,param_3);
  if (param_2->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMeshElementIndexer::AddReferenceToKey
            (&this->UVToTriangles,(int)param_2->DataPtr[1],(int)param_1,param_3);
  if (param_2->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMeshElementIndexer::AddReferenceToKey
            (&this->UVToTriangles,(int)param_2->DataPtr[2],(int)param_1,param_3);
  return;
}

// SplitPolygon @ 143696a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMeshDescription::SplitPolygon(FMeshDescription *this,FPolygonID param_1)

{
  uint *puVar1;
  FPolygonGroupID FVar2;
  int iVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FPolygonID FVar7;
  FPolygonID FVar8;
  uint uVar9;
  FPolygonGroupID *pFVar10;
  FPolygonID *pFVar11;
  ForElementType<FTriangleID> FVar12;
  ForElementType<FMeshElementContainer> FVar13;
  ForElementType<FMeshElementContainer> this_00;
  FMeshAttributeArraySetBase *pFVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_198 [32];
  TArrayView<FTriangleID_const_,int> local_158;
  ForElementType<FTriangleID> local_148;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FMeshElementIndexer::Find<FTriangleID>(&this->PolygonToTriangles,&local_158,(int)param_1,0);
  local_40 = local_158.ArrayNum;
  if (local_158.ArrayNum != 1) {
    pFVar10 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                        (&this->PolygonPolygonGroups,(int)param_1);
    lVar15 = 4;
    FVar2 = *pFVar10;
    local_148.SecondaryData = (ForElementType<FTriangleID>)0x0;
    if (local_158.ArrayNum == 0) {
      local_3c = 0x40;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FTriangleID>_>
                (4,4,local_158.ArrayNum,0,&local_148,local_158.ArrayNum,&local_3c);
      FVar12 = (ForElementType<FTriangleID>)&local_148;
      if (local_148.SecondaryData != (ForElementType<FTriangleID>)0x0) {
        FVar12 = local_148.SecondaryData;
      }
      memcpy((void *)FVar12,local_158.DataPtr,(longlong)local_158.ArrayNum << 2);
    }
    uVar16 = 1;
    if (1 < local_40) {
      do {
        this_00 = (ForElementType<FMeshElementContainer>)this->PolygonElements;
        if ((*(int *)((longlong)this_00 + 0x88) < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(ForElementType<FMeshElementContainer> *)((longlong)this_00 + 0x80) !=
            (ForElementType<FMeshElementContainer>)0x0) {
          this_00 = *(ForElementType<FMeshElementContainer> *)((longlong)this_00 + 0x80);
        }
        if (*(int *)((longlong)this_00 + 0x78) < 1) {
          FVar7 = (FPolygonID)
                  TBitArray<FDefaultBitArrayAllocator>::Add
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,true);
          FAttributesSetBase::Insert((FAttributesSetBase *)((longlong)this_00 + 0x20),(int)FVar7);
        }
        else {
          FVar7 = (FPolygonID)
                  TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,false,0,
                             *(int *)((longlong)this_00 + 0x18));
          if (FVar7 == (FPolygonID)0xffffffff) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementContainer.h"
                               ,0x47,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(int *)((longlong)this_00 + 0x78) = *(int *)((longlong)this_00 + 0x78) + -1;
          }
          else {
            if ((((int)FVar7 < 0) || (*(int *)((longlong)this_00 + 0x18) <= (int)FVar7)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar13 = this_00;
            if (*(ForElementType<FMeshElementContainer> *)((longlong)this_00 + 0x10) !=
                (ForElementType<FMeshElementContainer>)0x0) {
              FVar13 = *(ForElementType<FMeshElementContainer> *)((longlong)this_00 + 0x10);
            }
            FVar8 = FVar7;
            if ((int)FVar7 < 0) {
              FVar8 = (FPolygonID)((int)FVar7 + 0x1f);
            }
            puVar1 = (uint *)((longlong)FVar13 + (longlong)((int)FVar8 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << (FVar7._0_1_ & 0x1f);
            TBitArray<FDefaultBitArrayAllocator>::CheckInvariants
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00);
            *(int *)((longlong)this_00 + 0x78) = *(int *)((longlong)this_00 + 0x78) + -1;
          }
        }
        pFVar4 = (this->PolygonPolygonGroups).ArrayPtr;
        if (((int)pFVar4[2].Type < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = pFVar4 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar14 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
        }
        pFVar10 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonGroupID> *)pFVar14,(int)FVar7);
        *pFVar10 = FVar2;
        FMeshElementIndexer::AddReferenceToKey
                  (&this->PolygonGroupToPolygons,(int)FVar2,(int)FVar7,0);
        uVar9 = 0;
        if ((int)uVar16 < local_40) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (ForElementType<FTriangleID>)&local_148;
        if (local_148.SecondaryData != (ForElementType<FTriangleID>)0x0) {
          FVar12 = local_148.SecondaryData;
        }
        iVar3 = *(int *)(lVar15 + (longlong)FVar12);
        FMeshElementIndexer::RemoveReferenceFromKey(&this->PolygonToTriangles,(int)param_1,iVar3,0);
        pFVar4 = (this->TrianglePolygons).ArrayPtr;
        if (((int)pFVar4[2].Type < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = pFVar4 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar14 = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
        }
        pFVar11 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                            ((TMeshAttributeArrayBase<FPolygonID> *)pFVar14,iVar3);
        *pFVar11 = FVar7;
        FMeshElementIndexer::AddReferenceToKey(&this->PolygonToTriangles,(int)FVar7,iVar3,0);
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 4;
      } while ((int)uVar16 < local_40);
    }
    if (local_148.SecondaryData != (ForElementType<FTriangleID>)0x0) {
      FMemory::Free((void *)local_148.SecondaryData);
    }
  }
  return;
}

// TransferPolygonGroup @ 143696ec0

void __thiscall
FMeshDescription::TransferPolygonGroup
          (FMeshDescription *this,FPolygonGroupID param_1,FPolygonGroupID param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  TArrayView<FTriangleID_const_,int> *pTVar8;
  TArrayView<FPolygonID_const_,int> *pTVar9;
  FMeshElementContainer *this_00;
  FPolygonGroupID *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FMeshAttributeArraySetBase *this_01;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_78;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<FTriangleID_const_,int> local_58;
  TArrayView<FPolygonID_const_,int> local_48;
  
  if (((param_1 != param_2) &&
      (FVar7 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(this->PolygonGroupElements,0)
      , -1 < (int)param_1)) && ((int)param_1 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >>
           ((uint)param_1 & 0x1f) & 1) != 0) &&
        (FVar7 = (ForElementType<unsigned_int>)
                 FMeshElementChannels::Get(this->PolygonGroupElements,0), -1 < (int)param_2)) &&
       ((int)param_2 < *(int *)((longlong)FVar7 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
      }
      if ((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_2 >> 5) * 4) >>
           ((uint)param_2 & 0x1f) & 1) != 0) {
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        pTVar8 = FMeshElementIndexer::Find<FTriangleID>
                           (&this->PolygonGroupToTriangles,&local_58,(int)param_1,0);
        TArray<FTriangleID,TSizedDefaultAllocator<32>_>::operator=<FTriangleID_const_,int>
                  (&local_68,pTVar8);
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        pTVar9 = FMeshElementIndexer::Find<FPolygonID>
                           (&this->PolygonGroupToPolygons,&local_48,(int)param_1,0);
        TArray<FPolygonID,TSizedDefaultAllocator<32>_>::operator=<FPolygonID_const_,int>
                  (&local_78,pTVar9);
        this_00 = FMeshElementChannels::Get(this->PolygonGroupElements,0);
        FMeshElementContainer::Remove(this_00,(int)param_1);
        FMeshElementIndexer::RemoveKey(&this->PolygonGroupToPolygons,(int)param_1,0);
        FMeshElementIndexer::RemoveKey(&this->PolygonGroupToTriangles,(int)param_1,0);
        iVar5 = local_68.ArrayNum;
        uVar11 = (ulonglong)local_68.ArrayNum;
        pFVar1 = local_68.AllocatorInstance.Data + uVar11 * 4;
        FVar12.Data = local_68.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FTriangleID,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar12.Data == pFVar1) break;
          iVar2 = *(int *)FVar12.Data;
          pFVar10 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                              (&this->TrianglePolygonGroups,iVar2);
          *pFVar10 = param_2;
          FMeshElementIndexer::AddReferenceToKey
                    (&this->PolygonGroupToTriangles,(int)param_2,iVar2,0);
          uVar11 = local_68._8_8_ & 0xffffffff;
          FVar12.Data = FVar12.Data + 4;
        }
        iVar5 = local_78.ArrayNum;
        uVar11 = (ulonglong)local_78.ArrayNum;
        pFVar1 = local_78.AllocatorInstance.Data + uVar11 * 4;
        FVar12.Data = local_78.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar5) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar12.Data == pFVar1) break;
          pFVar3 = (this->PolygonPolygonGroups).ArrayPtr;
          iVar2 = *(int *)FVar12.Data;
          if (((int)pFVar3[2].Type < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_01 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            this_01 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          pFVar10 = TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
                              ((TMeshAttributeArrayBase<FPolygonGroupID> *)this_01,iVar2);
          *pFVar10 = param_2;
          FMeshElementIndexer::AddReferenceToKey(&this->PolygonGroupToPolygons,(int)param_2,iVar2,0)
          ;
          uVar11 = local_78._8_8_ & 0xffffffff;
          FVar12.Data = FVar12.Data + 4;
        }
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// TriangulateMesh @ 143697190

void __thiscall FMeshDescription::TriangulateMesh(FMeshDescription *this)

{
  FPolygonID FVar1;
  TElementIDs local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_48;
  TConstIterator local_28;
  
  local_res8.Array = &FMeshElementChannels::Get(this->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_48);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_res8,&local_28);
  while( true ) {
    if ((local_48.CurrentBitIndex == local_28.Iterator.CurrentBitIndex) &&
       (local_48.Array == local_28.Iterator.Array)) break;
    FVar1 = (FPolygonID)0xffffffff;
    if (local_48.CurrentBitIndex < (local_48.Array)->NumBits) {
      FVar1 = (FPolygonID)local_48.CurrentBitIndex;
    }
    ComputePolygonTriangulation(this,FVar1);
    local_48.UnvisitedBitMask = local_48.UnvisitedBitMask & ~local_48._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_48);
  }
  return;
}

