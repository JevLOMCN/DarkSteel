// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// AddNewBoundaryLoopEdges @ 14cb733b0

void __thiscall
FGroupTopologyUtils::AddNewBoundaryLoopEdges
          (FGroupTopologyUtils *this,int param_1,int param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FGroupTopology *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  uint local_58;
  int local_54;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  uVar12 = (ulonglong)(uint)param_1;
  bVar6 = UE::Geometry::FGroupTopology::IsBoundaryEdge(this->GroupTopology,param_1);
  if (bVar6) {
    while( true ) {
      uVar11 = 0xffffffff;
      local_58 = 0xffffffff;
      bVar6 = UE::Geometry::FGroupTopology::IsBoundaryEdge(this->GroupTopology,(uint)uVar12);
      if (!bVar6) break;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      UE::Geometry::FGroupTopology::FindCornerNbrEdges(this->GroupTopology,param_2,&local_50);
      iVar7 = local_50.ArrayNum;
      uVar9 = (ulonglong)local_50.ArrayNum;
      pFVar1 = local_50.AllocatorInstance.Data + uVar9 * 4;
      FVar13.Data = local_50.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar13.Data == pFVar1) break;
        uVar8 = *(uint *)FVar13.Data;
        bVar6 = UE::Geometry::FGroupTopology::IsBoundaryEdge(this->GroupTopology,uVar8);
        uVar5 = local_58;
        if (((bVar6) && (uVar8 != (uint)uVar12)) &&
           (bVar6 = uVar11 != 0xffffffff, uVar11 = uVar8, uVar5 = uVar8, bVar6)) {
          if (local_50.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_50.AllocatorInstance.Data);
          return;
        }
        local_58 = uVar5;
        uVar9 = local_50._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 4;
      }
      if (uVar11 == 0xffffffff) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8221247757428457630>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GroupTopologySelector.cpp"
                           ,0x9e,"NextEdgeIDOut != IndexConstants::InvalidID");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if (!bVar6) {
        return;
      }
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar2 = (param_3->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar10 + (ulonglong)(param_3->HashSize - 1U & uVar11) * 4);
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) == uVar11) {
              return;
            }
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,&local_54,(bool *)&local_58);
      uVar12 = (ulonglong)(int)uVar11;
      pFVar3 = this->GroupTopology;
      uVar8 = 0;
      if ((int)uVar11 < (pFVar3->Edges).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pFVar3->Edges).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar1 + uVar12 * 0x50 + 0x48);
      bVar6 = iVar7 == param_2;
      param_2 = iVar7;
      if (bVar6) {
        param_2 = *(int *)(pFVar1 + uVar12 * 0x50 + 0x4c);
      }
      if ((param_2 == -1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8221247757428457592>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GroupTopologySelector.cpp"
                             ,0x78,"LastCornerID != IndexConstants::InvalidID"), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// AddNewEdgeLoopEdgesFromCorner @ 14cb73650

void __thiscall
FGroupTopologyUtils::AddNewEdgeLoopEdgesFromCorner
          (FGroupTopologyUtils *this,int param_1,int param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  ForElementType<FSetElementId> FVar1;
  FGroupTopology *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  uint local_res10 [2];
  int local_res18 [4];
  
  bVar6 = GetNextEdgeLoopEdge(this,param_1,param_2,(int *)local_res10);
  if (bVar6) {
    do {
      uVar5 = local_res10[0];
      lVar10 = (longlong)(int)local_res10[0];
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar1 = (param_3->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_3->HashSize - 1U & local_res10[0]) * 4)
        ;
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) == local_res10[0]
               ) {
              return;
            }
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,local_res18,(bool *)local_res10);
      pFVar2 = this->GroupTopology;
      uVar8 = 0;
      if ((int)uVar5 < (pFVar2->Edges).ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pFVar2->Edges).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar3 + lVar10 * 0x50 + 0x48);
      if (iVar7 == param_2) {
        iVar7 = *(int *)(pFVar3 + lVar10 * 0x50 + 0x4c);
      }
      if ((iVar7 == -1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8221247757428457504>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GroupTopologySelector.cpp"
                             ,0x20,"LastCornerID != IndexConstants::InvalidID"), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = GetNextEdgeLoopEdge(this,uVar5,iVar7,(int *)local_res10);
      param_2 = iVar7;
    } while (bVar6);
  }
  return;
}

// AddNewEdgeRingEdges @ 14cb737d0

void __thiscall
FGroupTopologyUtils::AddNewEdgeRingEdges
          (FGroupTopologyUtils *this,int param_1,int param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3)

{
  ForElementType<FSetElementId> FVar1;
  FGroupTopology *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  uint local_res10 [2];
  int local_res18 [2];
  
  if (param_2 != -1) {
    uVar10 = (ulonglong)(uint)param_1;
    while (bVar6 = GetQuadOppositeEdge(this,(int)uVar10,param_2,(int *)local_res10),
          uVar5 = local_res10[0], bVar6) {
      uVar10 = (ulonglong)(int)local_res10[0];
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar1 = (param_3->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_3->HashSize - 1U & local_res10[0]) * 4)
        ;
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) == local_res10[0]
               ) {
              return;
            }
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_3,local_res18,(bool *)local_res10);
      pFVar2 = this->GroupTopology;
      uVar8 = 0;
      if ((int)uVar5 < (pFVar2->Edges).ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pFVar2->Edges).AllocatorInstance.Data;
      iVar7 = *(int *)(pFVar3 + uVar10 * 0x50);
      bVar6 = iVar7 == param_2;
      param_2 = iVar7;
      if (bVar6) {
        param_2 = *(int *)(pFVar3 + uVar10 * 0x50 + 4);
      }
      if (param_2 == -1) {
        return;
      }
    }
  }
  return;
}

// GetEdgeEndpointCorners @ 14cb95dc0

FIndex2i __thiscall
FGroupTopologyUtils::GetEdgeEndpointCorners(FGroupTopologyUtils *this,int param_1)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndex2i FVar5;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar6;
  uint in_R8D;
  
  FVar6._s_0.B = in_register_00000014;
  FVar6._s_0.A = param_1;
  pFVar1 = this->GroupTopology;
  uVar4 = 0;
  if ((int)in_R8D < (pFVar1->Edges).ArrayNum) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar5.field0_0x0;
    }
  }
  *(undefined8 *)FVar6 =
       *(undefined8 *)((pFVar1->Edges).AllocatorInstance.Data + (longlong)(int)in_R8D * 0x50 + 0x48)
  ;
  return (FIndex2i)FVar6;
}

// GetEdgeGroups @ 14cb95e50

FIndex2i __thiscall FGroupTopologyUtils::GetEdgeGroups(FGroupTopologyUtils *this,int param_1)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIndex2i FVar5;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar6;
  uint in_R8D;
  
  FVar6._s_0.B = in_register_00000014;
  FVar6._s_0.A = param_1;
  pFVar1 = this->GroupTopology;
  uVar4 = 0;
  if ((int)in_R8D < (pFVar1->Edges).ArrayNum) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar5.field0_0x0;
    }
  }
  *(undefined8 *)FVar6 =
       *(undefined8 *)((pFVar1->Edges).AllocatorInstance.Data + (longlong)(int)in_R8D * 0x50);
  return (FIndex2i)FVar6;
}

// GetNextBoundaryLoopEdge @ 14cb98760

bool __thiscall
FGroupTopologyUtils::GetNextBoundaryLoopEdge
          (FGroupTopologyUtils *this,int param_1,int param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  *param_3 = -1;
  bVar5 = UE::Geometry::FGroupTopology::IsBoundaryEdge(this->GroupTopology,param_1);
  if (!bVar5) {
    return false;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UE::Geometry::FGroupTopology::FindCornerNbrEdges(this->GroupTopology,param_2,&local_38);
  iVar4 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    iVar2 = *(int *)FVar8.Data;
    bVar5 = UE::Geometry::FGroupTopology::IsBoundaryEdge(this->GroupTopology,iVar2);
    if ((bVar5) && (iVar2 != param_1)) {
      if (*param_3 != -1) {
        *param_3 = -1;
        bVar5 = false;
        goto LAB_14cb98852;
      }
      *param_3 = iVar2;
    }
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  if (*param_3 == -1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8221247757428457630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GroupTopologySelector.cpp"
                       ,0x9e,"NextEdgeIDOut != IndexConstants::InvalidID");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
LAB_14cb98852:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetNextEdgeLoopEdge @ 14cb98890

bool __thiscall
FGroupTopologyUtils::GetNextEdgeLoopEdge
          (FGroupTopologyUtils *this,int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  FGroupTopology *pFVar2;
  FDynamicMesh3 *this_00;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [8];
  uint *local_res20;
  undefined1 local_78;
  undefined1 local_77 [3];
  uint local_74;
  uint local_70;
  int *local_68;
  FGroup *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  int *local_48;
  
  *param_3 = -1;
  pFVar2 = this->GroupTopology;
  uVar9 = 0;
  if (param_2 < (pFVar2->Corners).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  local_res20 = (uint *)param_3;
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar17 = (pFVar2->Corners).AllocatorInstance.Data;
  pFVar16 = pFVar17 + (longlong)param_2 * 0x18;
  if (*(int *)(pFVar17 + (longlong)param_2 * 0x18 + 0x10) == 4) {
    this_00 = this->GroupTopology->Mesh;
    local_50 = pFVar16;
    iVar7 = UE::Geometry::FGroupTopology::GetCornerVertexID(this->GroupTopology,param_2);
    bVar5 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex(this_00,iVar7);
    if (!bVar5) {
      pFVar2 = this->GroupTopology;
      uVar9 = 0;
      if (param_1 < (pFVar2->Edges).ArrayNum) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_70 = *(uint *)(pFVar16 + 0x10);
      uVar10 = (ulonglong)(int)local_70;
      piVar14 = *(int **)(pFVar16 + 8);
      pFVar17 = (pFVar2->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50;
      piVar12 = piVar14 + uVar10;
      local_48 = piVar12;
      while( true ) {
        local_68 = piVar14;
        if (*(int *)(pFVar16 + 0x10) != (int)uVar10) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (piVar14 == piVar12) break;
        iVar7 = *piVar14;
        if ((iVar7 != *(int *)pFVar17) && (iVar7 != *(int *)(pFVar17 + 4))) {
          local_60 = UE::Geometry::FGroupTopology::FindGroupByID(this->GroupTopology,iVar7);
          local_74 = (local_60->Boundaries).ArrayNum;
          uVar10 = (ulonglong)(int)local_74;
          pFVar15 = (local_60->Boundaries).AllocatorInstance.Data;
          local_58 = pFVar15 + uVar10 * 0x28;
          while( true ) {
            pFVar4 = local_58;
            if ((local_60->Boundaries).ArrayNum != (int)uVar10) {
              local_78 = 0;
              `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_78);
            }
            piVar12 = local_48;
            piVar14 = local_68;
            pFVar16 = local_50;
            if (pFVar15 == pFVar4) break;
            puVar11 = *(uint **)pFVar15;
            iVar7 = *(int *)(pFVar15 + 8);
            puVar1 = puVar11 + iVar7;
            while( true ) {
              if (*(int *)(pFVar15 + 8) != iVar7) {
                local_77[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_77);
              }
              if (puVar11 == puVar1) break;
              uVar9 = *puVar11;
              lVar13 = (longlong)(int)uVar9;
              pFVar2 = this->GroupTopology;
              uVar8 = 0;
              if ((int)uVar9 < (pFVar2->Edges).ArrayNum) {
                uVar8 = ~uVar9 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pFVar16 = (pFVar2->Edges).AllocatorInstance.Data;
              if ((*(int *)(pFVar16 + lVar13 * 0x50 + 0x48) == param_2) ||
                 (*(int *)(pFVar16 + lVar13 * 0x50 + 0x4c) == param_2)) {
                if ((*(int *)(pFVar16 + lVar13 * 0x50) != *(int *)pFVar17) &&
                   (((*(int *)(pFVar16 + lVar13 * 0x50) != *(int *)(pFVar17 + 4) &&
                     (*(int *)(pFVar16 + lVar13 * 0x50 + 4) != *(int *)pFVar17)) &&
                    (*(int *)(pFVar16 + lVar13 * 0x50 + 4) != *(int *)(pFVar17 + 4))))) {
                  *local_res20 = uVar9;
                  return true;
                }
              }
              puVar11 = puVar11 + 1;
            }
            pFVar15 = pFVar15 + 0x28;
            uVar10 = (ulonglong)local_74;
          }
        }
        uVar10 = (ulonglong)local_70;
        piVar14 = piVar14 + 1;
      }
    }
  }
  return false;
}

// GetQuadOppositeEdge @ 14cb994c0

bool __thiscall
FGroupTopologyUtils::GetQuadOppositeEdge
          (FGroupTopologyUtils *this,int param_1,int param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FGroup *pFVar8;
  char *pcVar9;
  int *piVar10;
  atomic<unsigned_char> *paVar11;
  uint uVar12;
  longlong lVar13;
  
  pFVar8 = UE::Geometry::FGroupTopology::FindGroupByID(this->GroupTopology,param_2);
  if (pFVar8 == (FGroup *)0x0) {
    pcVar9 = "Group";
    iVar7 = 0xc1;
    paVar11 = &bGEnsureHasExecuted<8221247757428457665>;
  }
  else {
    uVar12 = 0;
    if (0 < (pFVar8->Boundaries).ArrayNum) {
      lVar13 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar12 < (pFVar8->Boundaries).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (pFVar8->Boundaries).AllocatorInstance.Data;
        piVar2 = *(int **)(pFVar1 + lVar13);
        for (piVar10 = piVar2; piVar10 != piVar2 + *(int *)(pFVar1 + lVar13 + 8);
            piVar10 = piVar10 + 1) {
          if (*piVar10 == param_1) {
            iVar7 = (int)((longlong)piVar10 - (longlong)piVar2 >> 2);
            if (iVar7 != -1) {
              if (*(int *)(pFVar1 + lVar13 + 8) != 4) {
                return false;
              }
              uVar12 = iVar7 + 2U & 0x80000003;
              if ((int)uVar12 < 0) {
                uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
              }
              uVar6 = 0;
              if ((int)uVar12 < 4) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              *param_3 = *(int *)(*(longlong *)(pFVar1 + lVar13) + (longlong)(int)uVar12 * 4);
              return true;
            }
            break;
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x28;
      } while ((int)uVar12 < (pFVar8->Boundaries).ArrayNum);
    }
    pcVar9 = "false";
    iVar7 = 0xd6;
    paVar11 = &bGEnsureHasExecuted<8221247757428457686>;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar11,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\GroupTopologySelector.cpp"
                     ,iVar7,pcVar9);
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

