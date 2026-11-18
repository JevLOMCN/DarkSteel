// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// InsertEdgeLoops @ 14c74d150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FGroupEdgeInserter::InsertEdgeLoops
          (FGroupEdgeInserter *this,FEdgeLoopInsertionParams *param_1,FOptionalOutputParams *param_2
          ,FProgressCancel *param_3)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  FGroupTopology *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_128 [32];
  int local_d8 [2];
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  TArray<UE::Geometry::FGroupEdgeInserter::FGroupEdgeSplitPoint,TSizedDefaultAllocator<32>_>
  local_b0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_3 != (FProgressCancel *)0x0) {
    if (param_3->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->CancelF);
    pcVar2 = *(code **)&param_3->CancelF;
    plVar3 = *(longlong **)&(param_3->CancelF).field_0x28;
    plVar12 = (longlong *)&(param_3->CancelF).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar12 = plVar3;
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    bVar5 = (bool)(*pcVar2)(uVar11);
    param_3->WasCancelled = bVar5;
    if (bVar5 != false) {
      return false;
    }
  }
  if ((param_1->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x6a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->Topology == (FGroupTopology *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Topology",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x6b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->SortedInputLengths == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.SortedInputLengths",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x6c,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->GroupEdgeID == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.GroupEdgeID != FDynamicMesh3::InvalidID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x6d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((param_1->StartCornerID == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.StartCornerID != FDynamicMesh3::InvalidID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x6e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar1 = param_1->GroupEdgeID;
  pFVar4 = param_1->Topology;
  uVar10 = 0;
  if ((int)uVar1 < (pFVar4->Edges).ArrayNum) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pFVar14 = (pFVar4->Edges).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x50;
  local_d8[0] = *(int *)pFVar14;
  bVar5 = GroupEdgeInserterLocals::GetEdgeLoopOpposingEdgeAndCorner
                    (param_1->Topology,local_d8[0],param_1->GroupEdgeID,param_1->StartCornerID,
                     &local_c4,&local_c8,&local_cc,param_2);
  local_b4 = *(int *)(pFVar14 + 4);
  bVar7 = GroupEdgeInserterLocals::GetEdgeLoopOpposingEdgeAndCorner
                    (param_1->Topology,local_b4,param_1->GroupEdgeID,param_1->StartCornerID,
                     &local_b8,&local_bc,&local_c0,param_2);
  if ((!bVar5) && (!bVar7)) {
    return false;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  bVar8 = GroupEdgeInserterLocals::InsertNewVertexEndpoints
                    (param_1,param_1->GroupEdgeID,param_1->StartCornerID,&local_b0,param_2);
  if (((bVar8) && (local_b0.ArrayNum != 0)) &&
     ((param_3 == (FProgressCancel *)0x0 || (bVar8 = FProgressCancel::Cancelled(param_3), !bVar8))))
  {
    local_d0 = 0;
    bVar8 = true;
    if (((!bVar5) ||
        (bVar8 = GroupEdgeInserterLocals::InsertEdgeLoopEdgesInDirection
                           (param_1,&local_b0,local_d8[0],local_c4,local_c8,local_cc,
                            (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                            &local_d0,param_2,param_3), iVar13 = local_d0, bVar8)) &&
       (iVar13 = local_d0, bVar7)) {
      local_d8[0] = 0;
      bVar8 = GroupEdgeInserterLocals::InsertEdgeLoopEdgesInDirection
                        (param_1,&local_b0,local_b4,local_b8,local_bc,local_c0,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,local_d8,
                         param_2,param_3);
      iVar13 = iVar13 + local_d8[0];
    }
    if ((((iVar13 != 0) &&
         ((param_3 == (FProgressCancel *)0x0 ||
          (bVar5 = FProgressCancel::Cancelled(param_3), !bVar5)))) &&
        (cVar9 = (**(code **)(param_1->Topology->_padding_ + 8))(), cVar9 != '\0')) &&
       (bVar8 != false)) {
      bVar5 = true;
      goto LAB_14c74d4ca;
    }
  }
  bVar5 = false;
LAB_14c74d4ca:
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  bVar7 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
    return bVar5;
  }
  return bVar5;
}

// InsertGroupEdge @ 14c74d5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FGroupEdgeInserter::InsertGroupEdge
          (FGroupEdgeInserter *this,FGroupEdgeInsertionParams *param_1,
          FOptionalOutputParams *param_2,FProgressCancel *param_3)

{
  FGroupEdgeSplitPoint *pFVar1;
  FGroupEdgeSplitPoint *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  undefined1 auStackY_f8 [32];
  int local_a8 [4];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_3 != (FProgressCancel *)0x0) {
    if (param_3->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->CancelF);
    pcVar3 = *(code **)&param_3->CancelF;
    plVar4 = *(longlong **)&(param_3->CancelF).field_0x28;
    plVar9 = (longlong *)&(param_3->CancelF).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    bVar6 = (bool)(*pcVar3)(uVar8);
    param_3->WasCancelled = bVar6;
    if (bVar6 != false) {
      return false;
    }
  }
  if ((param_1->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Mesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x472,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_1->Topology == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.Topology",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x473,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if ((param_1->GroupID == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.GroupID != FDynamicMesh3::InvalidID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x474,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar1 = &param_1->StartPoint;
  if (((param_1->StartPoint).ElementID == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.StartPoint.ElementID != FDynamicMesh3::InvalidID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x475,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar2 = &param_1->EndPoint;
  if (((param_1->EndPoint).ElementID == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params.EndPoint.ElementID != FDynamicMesh3::InvalidID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                         ,0x476,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (((param_1->StartPoint).bIsVertex == (param_1->EndPoint).bIsVertex) &&
     (pFVar1->ElementID == pFVar2->ElementID)) {
    return false;
  }
  if (param_1->Mode == PlaneCut) {
    pTVar10 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98;
    if (param_2->NewEidsOut != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      pTVar10 = param_2->NewEidsOut;
    }
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    bVar6 = GroupEdgeInserterLocals::EmbedPlaneCutPath
                      (param_1->Mesh,param_1->Topology,param_1->GroupID,pFVar1,pFVar2,
                       param_1->VertexTolerance,param_1->bSimplifyAlongPath,pTVar10,
                       param_2->ChangedTidsOut,param_3);
    if (((!bVar6) ||
        (((param_3 != (FProgressCancel *)0x0 && (bVar6 = FProgressCancel::Cancelled(param_3), bVar6)
          ) || (bVar6 = GroupEdgeInserterLocals::CreateNewGroups
                                  (param_1->Mesh,pTVar10,param_1->GroupID,local_a8,param_2,param_3),
               !bVar6)))) ||
       ((param_3 != (FProgressCancel *)0x0 && (bVar6 = FProgressCancel::Cancelled(param_3), bVar6)))
       ) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar5 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free((void *)local_98._0_8_);
      return false;
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    iVar5 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  else if (param_1->Mode == Retriangulate) {
    bVar6 = GroupEdgeInserterLocals::InsertSingleWithRetriangulation
                      (param_1->Mesh,param_1->Topology,param_1->GroupID,param_1->GroupBoundaryIndex,
                       pFVar1,pFVar2,param_2,param_3);
    if (!bVar6) {
      return false;
    }
    if ((param_3 != (FProgressCancel *)0x0) && (bVar6 = FProgressCancel::Cancelled(param_3), bVar6))
    {
      return false;
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\GroupEdgeInserter.cpp"
                       ,0x49e,L"GroupEdgeInserter:InsertGroupEdge: Unimplemented insertion method.")
    ;
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  (**(code **)(param_1->Topology->_padding_ + 8))();
  return true;
}

