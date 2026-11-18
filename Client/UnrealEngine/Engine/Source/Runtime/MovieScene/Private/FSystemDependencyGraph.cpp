// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// BuildFlowGraph @ 146125530

void __thiscall UE::MovieScene::FSystemDependencyGraph::BuildFlowGraph(FSystemDependencyGraph *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FString local_18;
  
  iVar9 = (this->FlowGraph).SortedEdges.ArrayMax;
  (this->FlowGraph).SortedEdges.ArrayNum = 0;
  if (iVar9 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->FlowGraph).SortedEdges.AllocatorInstance,0,
               &(this->FlowGraph).SortedEdges.ArrayMax);
  }
  (this->FlowGraph).bHasDanglingEdges = false;
  iVar7 = 0;
  iVar9 = (this->Nodes).ArrayNum;
  if (0 < iVar9) {
    do {
      SetupFlowDependencies(this,iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar9);
  }
  if ((this->FlowGraph).bHasDanglingEdges != false) {
    uVar8 = 0;
    (this->FlowGraph).bHasDanglingEdges = false;
    if (0 < (this->FlowGraph).SortedEdges.ArrayNum) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->FlowGraph).SortedEdges.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((this->FlowGraph).SortedEdges.AllocatorInstance.Data + lVar10);
        if ((int)(uVar5 >> 0x10) < (this->FlowGraph).Nodes.NumBits) {
          FVar2 = (this->FlowGraph).Nodes.AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<unsigned_int>)&this->FlowGraph;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar6 = FVar2;
          }
          if (((*(uint *)((longlong)FVar6 + (ulonglong)(uVar5 >> 0x15) * 4) >>
                (uVar5 >> 0x10 & 0x1f) & 1) == 0) ||
             ((this->FlowGraph).Nodes.NumBits <= (int)(uVar5 & 0xffff))) goto LAB_146125687;
          FVar2 = (this->FlowGraph).Nodes.AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<unsigned_int>)&this->FlowGraph;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar6 = FVar2;
          }
          if ((*(uint *)((longlong)FVar6 + (ulonglong)((uVar5 & 0xffff) >> 5) * 4) >> (uVar5 & 0x1f)
              & 1) == 0) goto LAB_146125687;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 4;
        }
        else {
LAB_146125687:
          uVar5 = 0;
          if ((int)uVar8 < (this->FlowGraph).SortedEdges.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (this->FlowGraph).SortedEdges.AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
          iVar9 = ~uVar8 + (this->FlowGraph).SortedEdges.ArrayNum;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + 4,(longlong)iVar9 << 2);
          }
          piVar1 = &(this->FlowGraph).SortedEdges.ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
      } while ((int)uVar8 < (this->FlowGraph).SortedEdges.ArrayNum);
    }
  }
  bVar4 = FDirectedGraph::IsCyclic(&this->FlowGraph);
  if (bVar4) {
    ToString(this,&local_18);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FlowGraph.IsCyclic()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x181,L"Cycle detected in system flow graph! \n\n %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetGraphID @ 14613b1a0

ushort __thiscall
UE::MovieScene::FSystemDependencyGraph::GetGraphID(FSystemDependencyGraph *this,UClass *param_1)

{
  int *piVar1;
  TArray<UE::MovieScene::FSystemDependencyGraph::FNode,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  FWeakObjectPtr *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  ushort local_res8 [4];
  TPairInitializer<FName_&&,unsigned_short_const_&> local_res10;
  longlong local_res20;
  FWeakObjectPtr local_58;
  undefined4 local_50;
  FWeakObjectPtr local_48;
  undefined4 local_40;
  longlong *local_38;
  ushort *local_30;
  
  lVar4 = param_1->_padding_;
  uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
  if (*(int *)&(this->GraphIDsByClass).field_0x8 != *(int *)&(this->GraphIDsByClass).field_0x34) {
    puVar13 = *(undefined1 **)&(this->GraphIDsByClass).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->GraphIDsByClass).field_0x38;
    }
    iVar11 = *(int *)(puVar13 +
                     (ulonglong)
                     (*(int *)&(this->GraphIDsByClass).field_0x48 - 1U &
                     (int)((ulonglong)lVar4 >> 0x20) + uVar10) * 4);
    if (iVar11 != -1) {
      do {
        lVar3 = *(longlong *)&this->GraphIDsByClass + (longlong)iVar11 * 0x14;
        if (*(longlong *)(*(longlong *)&this->GraphIDsByClass + (longlong)iVar11 * 0x14) == lVar4) {
          puVar12 = (ushort *)(lVar3 + 8);
          if (lVar3 == 0) {
            puVar12 = (ushort *)0x0;
          }
          if (puVar12 != (ushort *)0x0) {
            return *puVar12;
          }
          break;
        }
        iVar11 = *(int *)(lVar3 + 0xc);
      } while (iVar11 != -1);
    }
  }
  pTVar2 = &this->Nodes;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_res10.Value = (ushort *)param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res10.Value);
  pFVar5 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  local_40 = CONCAT22(local_40._2_2_,0xffff);
  local_50 = local_40;
  local_58 = local_48;
  if ((pFVar5 <= &local_58) &&
     (&local_58 < (FWeakObjectPtr *)((longlong)pFVar5 + (longlong)(this->Nodes).ArrayMax * 0xc))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
  }
  uVar10 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Nodes).ArrayNum = uVar10 + 1;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  *(FWeakObjectPtr *)(pFVar6 + (longlong)(int)uVar10 * 0xc) = local_58;
  *(undefined4 *)(pFVar6 + (longlong)(int)uVar10 * 0xc + 8) = local_50;
  if (0xfffe < uVar10) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex >= 0 && NewIndex < TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
  }
  local_res8[0] = (ushort)uVar10;
  FDirectedGraph::AllocateNode(&this->ImplicitPrerequisites,local_res8[0]);
  FDirectedGraph::AllocateNode(&this->ImplicitSubsequents,local_res8[0]);
  local_res20 = param_1->_padding_;
  local_38 = &local_res20;
  local_30 = local_res8;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,unsigned_short_const_&>_>
            ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_38);
  FDirectedGraph::AllocateNode(&this->FlowGraph,local_res8[0]);
  this->SerialNumber = this->SerialNumber + 1;
  return local_res8[0];
}

// GetGraphID @ 14613b400

ushort __thiscall
UE::MovieScene::FSystemDependencyGraph::GetGraphID
          (FSystemDependencyGraph *this,FComponentTypeID param_1)

{
  int *piVar1;
  TArray<UE::MovieScene::FSystemDependencyGraph::FNode,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FWeakObjectPtr *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ushort local_res8 [4];
  ushort local_res10 [4];
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,unsigned_short_const_&> local_res18;
  FWeakObjectPtr local_58;
  undefined4 local_50;
  FWeakObjectPtr local_48;
  undefined4 local_40;
  ushort *local_38;
  ushort *local_30;
  
  if (*(int *)&(this->GraphIDsByComponent).field_0x8 !=
      *(int *)&(this->GraphIDsByComponent).field_0x34) {
    puVar12 = *(undefined1 **)&(this->GraphIDsByComponent).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->GraphIDsByComponent).field_0x38;
    }
    iVar9 = *(int *)(puVar12 +
                    ((ulonglong)(*(int *)&(this->GraphIDsByComponent).field_0x48 - 1) &
                    (ulonglong)param_1.Value) * 4);
    if (iVar9 != -1) {
      do {
        lVar3 = *(longlong *)&this->GraphIDsByComponent + (longlong)iVar9 * 0xc;
        if (*(ushort *)(*(longlong *)&this->GraphIDsByComponent + (longlong)iVar9 * 0xc) ==
            param_1.Value) {
          puVar11 = (ushort *)(lVar3 + 2);
          if (lVar3 == 0) {
            puVar11 = (ushort *)0x0;
          }
          if (puVar11 != (ushort *)0x0) {
            return *puVar11;
          }
          break;
        }
        iVar9 = *(int *)(lVar3 + 4);
      } while (iVar9 != -1);
    }
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  pTVar2 = &this->Nodes;
  local_res18.Value = (ushort *)0x0;
  local_res10[0] = param_1.Value;
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_res18.Value);
  pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
  local_40 = CONCAT22(local_40._2_2_,param_1.Value);
  local_50 = local_40;
  local_58 = local_48;
  if ((pFVar4 <= &local_58) &&
     (&local_58 < (FWeakObjectPtr *)((longlong)pFVar4 + (longlong)(this->Nodes).ArrayMax * 0xc))) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
  }
  uVar10 = (this->Nodes).ArrayNum;
  piVar1 = &(this->Nodes).ArrayMax;
  if (uVar10 == *piVar1) {
    uVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Nodes).ArrayNum = uVar10 + 1;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  *(FWeakObjectPtr *)(pFVar5 + (longlong)(int)uVar10 * 0xc) = local_58;
  *(undefined4 *)(pFVar5 + (longlong)(int)uVar10 * 0xc + 8) = local_50;
  if (0xfffe < uVar10) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex >= 0 && NewIndex < TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                       ,0x34,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
  }
  local_res8[0] = (ushort)uVar10;
  FDirectedGraph::AllocateNode(&this->ImplicitPrerequisites,local_res8[0]);
  FDirectedGraph::AllocateNode(&this->ImplicitSubsequents,local_res8[0]);
  local_38 = local_res10;
  local_30 = local_res8;
  TSet<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FComponentTypeID,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->GraphIDsByComponent,&local_res18,(bool *)&local_38);
  FDirectedGraph::AllocateNode(&this->FlowGraph,local_res8[0]);
  this->SerialNumber = this->SerialNumber + 1;
  return local_res8[0];
}

// PrintFilteredFlowGraph @ 14614a0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FSystemDependencyGraph::PrintFilteredFlowGraph
          (FSystemDependencyGraph *this,
          TArrayView<TBitArray<FDefaultBitArrayAllocator>_const_,int> *param_1,
          TStringBuilderBase<wchar_t> *param_2)

{
  uint uVar1;
  code *pcVar2;
  ushort uVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  wchar_t *local_f8;
  undefined4 local_e8;
  int local_e4;
  longlong local_e0;
  FScriptContainerElement *local_d8;
  TStringBuilderBase<wchar_t> *local_d0;
  FDiscoverCyclicEdges local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d0 = param_2;
  FDirectedGraph::FDiscoverCyclicEdges::FDiscoverCyclicEdges(&local_c8,&this->FlowGraph);
  FDirectedGraph::FDiscoverCyclicEdges::Search(&local_c8);
  if (((this->FlowGraph).bHasDanglingEdges != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x11c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar10 = (this->FlowGraph).SortedEdges.AllocatorInstance.Data;
  iVar6 = (this->FlowGraph).SortedEdges.ArrayNum;
  local_e4 = iVar6;
  local_d8 = pFVar10;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar11 = 0;
  if (0 < iVar6) {
    local_e0 = 0;
    do {
      if ((int)uVar11 < 0) {
        local_100 = (longlong)iVar6;
        local_108 = local_e0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(uint *)pFVar10;
      uVar7 = 0;
      iVar6 = param_1->ArrayNum;
      local_e8 = uVar1;
      if (0 < iVar6) {
        lVar12 = 0;
        do {
          uVar9 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < iVar6) {
            uVar8 = uVar9;
          }
          if (uVar8 == 0) {
            local_100 = (longlong)iVar6;
            local_108 = (longlong)(int)uVar7;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if ((int)(uVar1 & 0xffff) <
              *(int *)((longlong)(&param_1->DataPtr->AllocatorInstance + 1) + lVar12)) {
            uVar8 = 0;
            if ((int)uVar7 < iVar6) {
              uVar8 = uVar9;
            }
            if (uVar8 == 0) {
              local_100 = (longlong)iVar6;
              local_108 = (longlong)(int)uVar7;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            FVar5 = (ForElementType<unsigned_int>)
                    ((longlong)(param_1->DataPtr->AllocatorInstance).InlineData + lVar12);
            if ((*(int *)((longlong)FVar5 + 0x18) <= (int)(uVar1 & 0xffff)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
            }
            if ((*(uint *)((longlong)FVar5 + (ulonglong)(ushort)((ushort)uVar1 >> 5) * 4) >>
                 (uVar1 & 0x1f) & 1) != 0) {
              iVar6 = param_1->ArrayNum;
              uVar8 = 0;
              if ((int)uVar7 < iVar6) {
                uVar8 = uVar9;
              }
              if (uVar8 == 0) {
                local_108 = (longlong)(int)uVar7;
                local_100 = (longlong)iVar6;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              uVar3 = local_e8._2_2_;
              if ((int)(uint)local_e8._2_2_ <
                  *(int *)((longlong)(&param_1->DataPtr->AllocatorInstance + 1) + lVar12)) {
                uVar8 = 0;
                if ((int)uVar7 < iVar6) {
                  uVar8 = uVar9;
                }
                if (uVar8 == 0) {
                  local_100 = (longlong)iVar6;
                  local_108 = (longlong)(int)uVar7;
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld");
                  if (bVar4) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                }
                FVar5 = (ForElementType<unsigned_int>)
                        ((longlong)(param_1->DataPtr->AllocatorInstance).InlineData + lVar12);
                uVar8 = (uint)uVar3;
                if ((*(int *)((longlong)FVar5 + 0x18) <= (int)uVar8) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5c6,L""), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
                }
                if ((*(uint *)((longlong)FVar5 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                    != 0) {
                  if ((int)(uVar11 & 0xffff) < local_c8.CyclicEdges.NumBits) {
                    FVar5 = (ForElementType<unsigned_int>)&local_c8;
                    if (local_c8.CyclicEdges.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar5 = local_c8.CyclicEdges.AllocatorInstance.SecondaryData;
                    }
                    if ((*(uint *)((longlong)FVar5 + (ulonglong)((uVar11 & 0xffff) >> 5) * 4) >>
                         (uVar11 & 0x1f) & 1) == 0) goto LAB_14614a42a;
                    bVar4 = true;
                  }
                  else {
LAB_14614a42a:
                    bVar4 = false;
                  }
                  local_f8 = L"#3992ad";
                  if (bVar4) {
                    local_f8 = L"#FF0000";
                  }
                  local_100 = CONCAT44(local_100._4_4_,uVar7);
                  local_108 = CONCAT44(local_108._4_4_,uVar8);
                  TStringBuilderBase<wchar_t>::AppendfImpl
                            (local_d0,L"\tflow_node%d_%d -> flow_node%d_%d [color=\"%s\"];\n");
                }
              }
            }
          }
          iVar6 = param_1->ArrayNum;
          uVar7 = uVar7 + 1;
          lVar12 = lVar12 + 0x20;
          pFVar10 = local_d8;
        } while ((int)uVar7 < iVar6);
      }
      pFVar10 = pFVar10 + 4;
      local_e0 = local_e0 + 1;
      uVar11 = uVar11 + 1;
      iVar6 = local_e4;
      local_d8 = pFVar10;
    } while ((int)uVar11 < local_e4);
  }
  if (local_c8.EdgeChain.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_c8.EdgeChain.AllocatorInstance.SecondaryData);
  }
  if (local_c8.VisitedEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.VisitedEdges.AllocatorInstance.SecondaryData);
  }
  if (local_c8.CyclicEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.CyclicEdges.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetupFlowDependencies @ 1461542b0

void __thiscall
UE::MovieScene::FSystemDependencyGraph::SetupFlowDependencies
          (FSystemDependencyGraph *this,int param_1)

{
  FDirectionalEdge *pFVar1;
  FDirectionalEdge FVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  FDirectionalEdge *pFVar8;
  FDirectionalEdge *pFVar9;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_78;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_68;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_58;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_48;
  
  uVar5 = (ushort)param_1;
  FDirectedGraph::GetEdgesFrom(&this->ImplicitPrerequisites,&local_78,uVar5);
  for (pFVar9 = local_78.DataPtr; pFVar9 != local_78.DataPtr + local_78.ArrayNum;
      pFVar9 = pFVar9 + 1) {
    FVar2 = *pFVar9;
    uVar7 = (uint)FVar2 >> 0x10;
    if (((this->Nodes).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = FVar2.ToNode;
    if (*(short *)((this->Nodes).AllocatorInstance.Data + (ulonglong)uVar7 * 0xc + 8) == -1) {
      if (((uVar6 == 0xffff) || (uVar5 == 0xffff)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("UpstreamID != TNumericLimits<uint16>::Max() && DownstreamID != TNumericLimits<uint16>::Max()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                             ,0x1b5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FDirectedGraph::MakeEdge(&this->FlowGraph,uVar6,uVar5);
    }
    else {
      FDirectedGraph::GetEdgesFrom(&this->ImplicitPrerequisites,&local_68,uVar6);
      pFVar1 = local_68.DataPtr + local_68.ArrayNum;
      for (pFVar8 = local_68.DataPtr; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
        FVar2 = *pFVar8;
        if (((FVar2.ToNode == 0xffff) || (uVar5 == 0xffff)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("UpstreamID != TNumericLimits<uint16>::Max() && DownstreamID != TNumericLimits<uint16>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                               ,0x1b5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDirectedGraph::MakeEdge(&this->FlowGraph,FVar2.ToNode,uVar5);
      }
    }
  }
  FDirectedGraph::GetEdgesFrom(&this->ImplicitSubsequents,&local_58,uVar5);
  pFVar9 = local_58.DataPtr;
  while( true ) {
    if (pFVar9 == local_58.DataPtr + local_58.ArrayNum) {
      return;
    }
    FVar2 = *pFVar9;
    uVar7 = (uint)FVar2 >> 0x10;
    if (((this->Nodes).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar6 = FVar2.ToNode;
    if (*(short *)((this->Nodes).AllocatorInstance.Data + (ulonglong)uVar7 * 0xc + 8) == -1) {
      if (((uVar5 == 0xffff) || (uVar6 == 0xffff)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("UpstreamID != TNumericLimits<uint16>::Max() && DownstreamID != TNumericLimits<uint16>::Max()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                             ,0x1b5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FDirectedGraph::MakeEdge(&this->FlowGraph,uVar5,uVar6);
    }
    else {
      FDirectedGraph::GetEdgesFrom(&this->ImplicitSubsequents,&local_48,uVar6);
      pFVar1 = local_48.DataPtr + local_48.ArrayNum;
      for (pFVar8 = local_48.DataPtr; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
        FVar2 = *pFVar8;
        if (((uVar5 == 0xffff) || (FVar2.ToNode == 0xffff)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("UpstreamID != TNumericLimits<uint16>::Max() && DownstreamID != TNumericLimits<uint16>::Max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                               ,0x1b5,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDirectedGraph::MakeEdge(&this->FlowGraph,uVar5,FVar2.ToNode);
      }
    }
    pFVar9 = pFVar9 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SortByFlowOrder @ 146154ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder
          (FSystemDependencyGraph *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
  FVar3;
  ushort uVar4;
  undefined2 uVar5;
  ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
  FVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
  FVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_128 [32];
  TLess<void> local_d8;
  undefined1 local_d7;
  FSortableID local_d6 [3];
  ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
  local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  UpdateCache(this);
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  local_c8.SecondaryData =
       (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
        )0x0;
  local_40 = 0;
  local_3c = 0x20;
  pFVar2 = pFVar14 + (longlong)iVar10 * 2;
  do {
    if (param_1->ArrayNum != iVar10) {
      local_d7 = 0;
      `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_d7);
    }
    if (pFVar14 == pFVar2) {
      FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
                )&local_c8;
      if (local_c8.SecondaryData !=
          (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
           )0x0) {
        FVar13 = local_c8.SecondaryData;
      }
      AlgoImpl::
      IntroSortInternal<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID,int,UE::Core::Private::TProjectionMemberData<unsigned_short__UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID::*>,TLess<void>_>
                ((FSortableID *)FVar13,local_40,
                 (TProjectionMemberData<unsigned_short__public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID::*>
                  )0x2,local_d8);
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = 0;
      if (param_1->ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,&param_1->AllocatorInstance,0,piVar1);
      }
      uVar8 = local_40;
      uVar12 = (ulonglong)(int)local_40;
      FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
                )&local_c8;
      if (local_c8.SecondaryData !=
          (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
           )0x0) {
        FVar13 = local_c8.SecondaryData;
      }
      FVar3 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
               )((longlong)FVar13 + uVar12 * 4);
      while( true ) {
        if ((uint)uVar12 != uVar8) {
          local_d8 = (TLess<void>)0x0;
          `TCheckedPointerIterator<`UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder'::__l2::FSortableID,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_d8);
        }
        if (FVar13 == FVar3) break;
        FVar6 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
                 )(param_1->AllocatorInstance).Data;
        if ((((ulonglong)FVar6 <= (ulonglong)FVar13) &&
            ((ulonglong)FVar13 < (ulonglong)((longlong)FVar6 + (longlong)*piVar1 * 2))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        uVar5 = *(undefined2 *)FVar13;
        FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
                  )((longlong)FVar13 + 4);
        *(undefined2 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 2) = uVar5;
        uVar12 = (ulonglong)local_40;
      }
      if (local_c8.SecondaryData !=
          (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
           )0x0) {
        FMemory::Free((void *)local_c8.SecondaryData);
      }
      return;
    }
    uVar4 = *(ushort *)pFVar14;
    local_d6[0].NodeID = uVar4;
    if (((this->ReverseLookupFlowOrderNodes).ArrayNum <= (int)(uint)uVar4) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_d6[0].FlowOrder =
         *(ushort *)
          ((this->ReverseLookupFlowOrderNodes).AllocatorInstance.Data + (ulonglong)uVar4 * 2);
    FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
              )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
         )0x0) {
      FVar13 = local_c8.SecondaryData;
    }
    if ((ulonglong)FVar13 <= local_d6) {
      FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
                )&local_c8;
      if (local_c8.SecondaryData !=
          (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
           )0x0) {
        FVar13 = local_c8.SecondaryData;
      }
      if ((local_d6 < (FSortableID *)((longlong)FVar13 + (longlong)(int)local_3c * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (local_40 == local_3c) {
      local_40 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder_::__l2::FSortableID>_>
                           (0x204,&local_c8,(int *)&local_3c);
    }
    lVar11 = (longlong)(int)local_40;
    FVar13 = (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
              )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<_public:_void___cdecl_UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder(TArray<unsigned_short,TSizedDefaultAllocator<32>_>_&)_::_2_::FSortableID>
         )0x0) {
      FVar13 = local_c8.SecondaryData;
    }
    pFVar14 = pFVar14 + 2;
    local_40 = local_40 + 1;
    *(FSortableID *)((longlong)FVar13 + lVar11 * 4) = local_d6[0];
  } while( true );
}

// ToString @ 146157880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::FSystemDependencyGraph::ToString
          (FSystemDependencyGraph *this,FString *__return_storage_ptr__)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *this_00;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  UClass *pUVar8;
  UMovieSceneEntitySystem *pUVar9;
  longlong lVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  ForElementType<unsigned_int> FVar14;
  wchar_t *pwVar15;
  ESystemPhase EVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  byte bVar25;
  undefined1 auStack_2f8 [32];
  FScriptContainerElement *local_2d8;
  longlong local_2d0;
  undefined4 local_2c8;
  FString *local_2c0;
  FString local_2b8;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  int local_29c;
  FSystemDependencyGraph *local_298;
  longlong local_290;
  undefined4 *local_288;
  longlong local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  FDiscoverCyclicEdges local_108;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_48.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_2f8);
  uVar23 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_2c0 = __return_storage_ptr__;
  local_298 = this;
  ::FString::AppendChars(__return_storage_ptr__,L"\ndigraph FMovieSceneEntitySystemGraph {\n",0x28);
  ::FString::AppendChars(__return_storage_ptr__,L"\tnode [shape=record,height=.1];\n",0x20);
  ::FString::FString(&local_88,L"\tsubgraph cluster_flow_0 { label=\"Spawn\"; color=\"#0e868c\";\n")
  ;
  ::FString::FString(&local_78,
                     L"\tsubgraph cluster_flow_1 { label=\"Instantiation\"; color=\"#96c74c\";\n");
  ::FString::FString(&local_68,
                     L"\tsubgraph cluster_flow_2 { label=\"Evaluation\"; color=\"#6dc74c\";\n");
  ::FString::FString(&local_58,
                     L"\tsubgraph cluster_flow_3 { label=\"Finalization\"; color=\"#aa42f5\";\n");
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  uVar21 = 0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  if (((this->FlowGraph).bHasDanglingEdges != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x11c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  iVar22 = (this->FlowGraph).SortedEdges.ArrayNum;
  pFVar24 = (this->FlowGraph).SortedEdges.AllocatorInstance.Data;
  if ((iVar22 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  pFVar2 = pFVar24 + (longlong)iVar22 * 4;
  lVar10 = local_2d0;
  for (; pFVar24 != pFVar2; pFVar24 = pFVar24 + 4) {
    local_2c8 = *(uint *)pFVar24;
    uVar17 = local_2c8 & 0xffff;
    iVar22 = (this->Nodes).ArrayNum;
    local_2d0 = (longlong)iVar22;
    if ((iVar22 <= (int)uVar17) &&
       (local_2d8 = (FScriptContainerElement *)(ulonglong)uVar17,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       lVar10 = local_2d0, bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar5)();
      return pFVar7;
    }
    local_2d0 = lVar10;
    iVar22 = (this->Nodes).ArrayNum;
    uVar18 = (ulonglong)local_2c8._2_2_;
    uVar20 = (uint)local_2c8._2_2_;
    if (*(short *)((this->Nodes).AllocatorInstance.Data + (longlong)(ulonglong)uVar17 * 0xc + 8) ==
        -1) {
      if (iVar22 <= (int)uVar20) {
        local_2d8 = (FScriptContainerElement *)(longlong)(int)uVar20;
        local_2d0 = (longlong)iVar22;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
      }
      if (*(short *)((this->Nodes).AllocatorInstance.Data + uVar18 * 0xc + 8) != -1) {
        uVar18 = (ulonglong)(ushort)local_2c8;
        iVar22 = (this->Nodes).ArrayNum;
        if (iVar22 <= (int)(local_2c8 & 0xffff)) {
          local_2d8 = (FScriptContainerElement *)(longlong)(int)(local_2c8 & 0xffff);
          local_2d0 = (longlong)iVar22;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar5)();
            return pFVar7;
          }
        }
        pUVar8 = (UClass *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((this->Nodes).AllocatorInstance.Data + uVar18 * 0xc));
        if (pUVar8 != (UClass *)0x0) {
          pUVar9 = UClass::GetDefaultObject<UMovieSceneEntitySystem>(pUVar8);
          EVar16 = pUVar9->Phase;
          if ((int)local_150 != local_124) {
            puVar13 = local_120;
            if (local_118 != (undefined1 *)0x0) {
              puVar13 = local_118;
            }
            for (iVar22 = *(int *)(puVar13 +
                                  ((ulonglong)(local_110 - 1) & (ulonglong)local_2c8._2_2_) * 4);
                iVar22 != -1; iVar22 = *(int *)(local_158 + 4 + (longlong)iVar22 * 0xc)) {
              if (*(ushort *)(local_158 + (longlong)iVar22 * 0xc) == local_2c8._2_2_) {
                if ((iVar22 != -1) && (lVar10 = local_158 + (longlong)iVar22 * 0xc, lVar10 != 0))
                goto LAB_146157d4d;
                break;
              }
            }
          }
          local_280 = (longlong)&local_2c8 + 2;
          local_2d8 = (FScriptContainerElement *)0x0;
          TSet<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>,TDefaultMapHashableKeyFuncs<unsigned_short,enum_UE::MovieScene::ESystemPhase,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<unsigned_short_const_&>_>
                    (&local_158,(uint)&local_2a4,
                     (TKeyInitializer<unsigned_short_const_&> *)(ulonglong)local_2c8._2_2_,
                     (bool *)&local_280);
          iVar22 = local_2a4;
          goto LAB_146157d3e;
        }
      }
    }
    else {
      if (iVar22 <= (int)uVar20) {
        local_2d8 = (FScriptContainerElement *)(longlong)(int)uVar20;
        local_2d0 = (longlong)iVar22;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
      }
      pUVar8 = (UClass *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->Nodes).AllocatorInstance.Data + uVar18 * 0xc));
      if (pUVar8 != (UClass *)0x0) {
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar8 = UMovieSceneEntitySystem::StaticClass();
        lVar10 = *(longlong *)&pUVar4->field_0x10;
        iVar22 = (int)pUVar8->_padding_;
        if (((*(int *)(lVar10 + 0x38) < iVar22) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
             &pUVar8->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
        EVar16 = pUVar4[1].field_0xa;
        if ((int)local_150 != local_124) {
          puVar13 = local_120;
          if (local_118 != (undefined1 *)0x0) {
            puVar13 = local_118;
          }
          for (iVar22 = *(int *)(puVar13 + (ulonglong)(local_110 - 1U & local_2c8 & 0xffff) * 4);
              iVar22 != -1; iVar22 = *(int *)(local_158 + 4 + (longlong)iVar22 * 0xc)) {
            if (*(short *)(local_158 + (longlong)iVar22 * 0xc) == (short)local_2c8) {
              if ((iVar22 != -1) && (lVar10 = local_158 + (longlong)iVar22 * 0xc, lVar10 != 0))
              goto LAB_146157d4d;
              break;
            }
          }
        }
        local_288 = &local_2c8;
        local_2d8 = (FScriptContainerElement *)0x0;
        TSet<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>,TDefaultMapHashableKeyFuncs<unsigned_short,enum_UE::MovieScene::ESystemPhase,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<unsigned_short_const_&>_>
                  (&local_158,(uint)&local_2a8,
                   (TKeyInitializer<unsigned_short_const_&> *)(ulonglong)(local_2c8 & 0xffff),
                   (bool *)&local_288);
        iVar22 = local_2a8;
LAB_146157d3e:
        lVar10 = local_158 + (longlong)iVar22 * 0xc;
LAB_146157d4d:
        *(ESystemPhase *)(lVar10 + 2) = *(ESystemPhase *)(lVar10 + 2) | EVar16;
      }
    }
    lVar10 = local_2d0;
  }
  uVar18 = uVar23;
  local_2d0 = lVar10;
  if (0 < (this->Nodes).ArrayNum) {
    do {
      iVar22 = (this->Nodes).ArrayNum;
      uVar20 = (uint)uVar18;
      uVar17 = uVar21;
      if ((int)uVar20 < iVar22) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_2d8 = (FScriptContainerElement *)(longlong)(int)uVar20;
        local_2d0 = (longlong)iVar22;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
      }
      this_00 = (FWeakObjectPtr *)
                ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar20 * 0xc);
      pUVar8 = (UClass *)FWeakObjectPtr::Get(this_00);
      if (pUVar8 == (UClass *)0x0) {
        if ((short)this_00[1].ObjectIndex != -1) {
          FComponentRegistry::GetComponentTypeChecked
                    (&GComponentRegistry,(FComponentTypeID)(ushort)this_00[1].ObjectIndex);
          if ((int)local_150 != local_124) {
            puVar13 = local_120;
            if (local_118 != (undefined1 *)0x0) {
              puVar13 = local_118;
            }
            for (iVar22 = *(int *)(puVar13 + ((ulonglong)(local_110 - 1) & uVar18 & 0xffff) * 4);
                iVar22 != -1; iVar22 = *(int *)(local_158 + 4 + (longlong)iVar22 * 0xc)) {
              if (*(short *)(local_158 + (longlong)iVar22 * 0xc) == (short)uVar18) {
                if (((iVar22 != -1) && (lVar10 = local_158 + (longlong)iVar22 * 0xc, lVar10 != 0))
                   && (pbVar1 = (byte *)(lVar10 + 2), pbVar1 != (byte *)0x0)) {
                  if ((*pbVar1 & 2) != 0) {
                    ::FString::PrintfImpl(&local_1d8,L"\t\tflow_node%d_0[label=\"%s\"];\n");
                    uVar17 = uVar21;
                    if (local_1d8.Data.ArrayNum != 0) {
                      uVar17 = local_1d8.Data.ArrayNum - 1;
                    }
                    ::FString::AppendChars
                              (&local_88,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,uVar17);
                    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*pbVar1 & 4) != 0) {
                    ::FString::PrintfImpl(&local_1c8,L"\t\tflow_node%d_1[label=\"%s\"];\n");
                    uVar17 = uVar21;
                    if (local_1c8.Data.ArrayNum != 0) {
                      uVar17 = local_1c8.Data.ArrayNum - 1;
                    }
                    ::FString::AppendChars
                              (&local_78,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,uVar17);
                    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*pbVar1 & 0x18) != 0) {
                    ::FString::PrintfImpl(&local_1b8,L"\t\tflow_node%d_2[label=\"%s\"];\n");
                    uVar17 = uVar21;
                    if (local_1b8.Data.ArrayNum != 0) {
                      uVar17 = local_1b8.Data.ArrayNum - 1;
                    }
                    ::FString::AppendChars
                              (&local_68,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,uVar17);
                    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*pbVar1 & 0x20) != 0) {
                    ::FString::PrintfImpl(&local_1a8,L"\t\tflow_node%d_3[label=\"%s\"];\n");
                    uVar17 = uVar21;
                    if (local_1a8.Data.ArrayNum != 0) {
                      uVar17 = local_1a8.Data.ArrayNum - 1;
                    }
                    ::FString::AppendChars
                              (&local_58,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,uVar17);
                    FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
                    goto LAB_146158256;
                  }
                }
                break;
              }
            }
          }
        }
      }
      else {
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar11 = UMovieSceneEntitySystem::StaticClass();
        lVar10 = *(longlong *)&pUVar4->field_0x10;
        iVar22 = (int)pUVar11->_padding_;
        if (((*(int *)(lVar10 + 0x38) < iVar22) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
             &pUVar11->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
        bVar25 = pUVar4[1].field_0xa;
        if ((bVar25 & 2) != 0) {
          local_278 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_278,&local_248);
          ::FString::PrintfImpl(&local_258,L"\t\tflow_node%d_0[label=\"%s\"];\n");
          uVar17 = uVar21;
          if (local_258.Data.ArrayNum != 0) {
            uVar17 = local_258.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_88,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar17);
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar25 & 4) != 0) {
          local_270 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_270,&local_228);
          ::FString::PrintfImpl(&local_238,L"\t\tflow_node%d_1[label=\"%s\"];\n");
          uVar17 = uVar21;
          if (local_238.Data.ArrayNum != 0) {
            uVar17 = local_238.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_238.Data.AllocatorInstance.Data,uVar17);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar25 & 0x18) != 0) {
          local_268 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_268,&local_208);
          ::FString::PrintfImpl(&local_218,L"\t\tflow_node%d_2[label=\"%s\"];\n");
          uVar17 = uVar21;
          if (local_218.Data.ArrayNum != 0) {
            uVar17 = local_218.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_68,(wchar_t *)local_218.Data.AllocatorInstance.Data,uVar17);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
        }
        if ((bVar25 & 0x20) != 0) {
          local_260 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_260,&local_1e8);
          ::FString::PrintfImpl(&local_1f8,L"\t\tflow_node%d_3[label=\"%s\"];\n");
          uVar17 = uVar21;
          if (local_1f8.Data.ArrayNum != 0) {
            uVar17 = local_1f8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_58,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,uVar17);
          FVar12.Data = local_1e8.Data.AllocatorInstance.Data;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            FVar12.Data = local_1e8.Data.AllocatorInstance.Data;
          }
LAB_146158256:
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
        }
      }
      uVar18 = (ulonglong)(uVar20 + 1);
    } while ((int)(uVar20 + 1) < (this->Nodes).ArrayNum);
  }
  pFVar7 = &local_88;
  do {
    iVar3 = (pFVar7->Data).ArrayNum;
    iVar22 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar22 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar22);
    ::FString::AppendChars(__return_storage_ptr__,L"\t}\n",3);
    pFVar7 = pFVar7 + 1;
  } while (pFVar7 != &local_48);
  FDirectedGraph::FDiscoverCyclicEdges::FDiscoverCyclicEdges(&local_108,&this->FlowGraph);
  FDirectedGraph::FDiscoverCyclicEdges::Search(&local_108);
  if (((this->FlowGraph).bHasDanglingEdges != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x11c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  iVar22 = (this->FlowGraph).SortedEdges.ArrayNum;
  pFVar24 = (this->FlowGraph).SortedEdges.AllocatorInstance.Data;
  local_29c = iVar22;
  if ((iVar22 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  if (0 < iVar22) {
    local_290 = 0;
    do {
      uVar21 = *(uint *)pFVar24;
      uVar17 = (uint)(uVar23 & 0xffff);
      if ((int)uVar17 < local_108.CyclicEdges.NumBits) {
        FVar14 = (ForElementType<unsigned_int>)&local_108;
        if (local_108.CyclicEdges.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_108.CyclicEdges.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar14 + ((uVar23 & 0xffff) >> 5) * 4) >> (uVar17 & 0x1f) & 1) == 0
           ) goto LAB_1461583a0;
        bVar6 = true;
      }
      else {
LAB_1461583a0:
        bVar6 = false;
      }
      pwVar15 = L"#39ad3b";
      if (bVar6) {
        pwVar15 = L"#FF0000";
      }
      local_2a0 = uVar21;
      ::FString::FString(&local_2b8,pwVar15);
      iVar22 = (this->Nodes).ArrayNum;
      bVar25 = 0;
      uVar21 = uVar21 & 0xffff;
      if (iVar22 <= (int)uVar21) {
        local_2d8 = (FScriptContainerElement *)(longlong)(int)uVar21;
        local_2d0 = (longlong)iVar22;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
      }
      pUVar8 = (UClass *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->Nodes).AllocatorInstance.Data + (ulonglong)uVar21 * 0xc))
      ;
      if (pUVar8 != (UClass *)0x0) {
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar8 = UMovieSceneEntitySystem::StaticClass();
        lVar10 = *(longlong *)&pUVar4->field_0x10;
        iVar22 = (int)pUVar8->_padding_;
        if (((*(int *)(lVar10 + 0x38) < iVar22) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
             &pUVar8->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
        bVar25 = pUVar4[1].field_0xa;
      }
      bVar19 = 0;
      uVar18 = (ulonglong)local_2a0._2_2_;
      iVar22 = (local_298->Nodes).ArrayNum;
      if (iVar22 <= (int)(uint)local_2a0._2_2_) {
        local_2d8 = (FScriptContainerElement *)(longlong)(int)(uint)local_2a0._2_2_;
        local_2d0 = (longlong)iVar22;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
      }
      pUVar8 = (UClass *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((local_298->Nodes).AllocatorInstance.Data + uVar18 * 0xc));
      if (pUVar8 != (UClass *)0x0) {
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar8 = UMovieSceneEntitySystem::StaticClass();
        lVar10 = *(longlong *)&pUVar4->field_0x10;
        iVar22 = (int)pUVar8->_padding_;
        if (((*(int *)(lVar10 + 0x38) < iVar22) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
             &pUVar8->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar5)();
          return pFVar7;
        }
        bVar19 = pUVar4[1].field_0xa;
      }
      pFVar7 = local_2c0;
      if ((bVar25 == 0) || ((bVar25 & 2) != 0)) {
        if ((bVar19 == 0) || ((bVar19 & 2) != 0)) {
          local_2d8 = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            local_2d8 = local_2b8.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_198,L"\tflow_node%d_0 -> flow_node%d_0 [color=\"%s\"];\n");
          pFVar7 = local_2c0;
          if (local_198.Data.ArrayNum == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_198.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(local_2c0,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar22);
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
        if (bVar25 != 0) goto LAB_1461585db;
LAB_1461585e1:
        if ((bVar19 == 0) || ((bVar19 & 4) != 0)) {
          local_2d8 = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            local_2d8 = local_2b8.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_188,L"\tflow_node%d_1 -> flow_node%d_1 [color=\"%s\"];\n");
          if (local_188.Data.ArrayNum == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_188.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(pFVar7,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar22);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
        }
        if (bVar25 != 0) goto LAB_14615864a;
LAB_146158650:
        if ((bVar19 == 0) || ((bVar19 & 0x18) != 0)) {
          local_2d8 = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            local_2d8 = local_2b8.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_178,L"\tflow_node%d_2 -> flow_node%d_2 [color=\"%s\"];\n");
          if (local_178.Data.ArrayNum == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_178.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(pFVar7,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar22);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        if (bVar25 != 0) goto LAB_1461586c5;
LAB_1461586cb:
        if ((bVar19 == 0) || (__return_storage_ptr__ = local_2c0, (bVar19 & 0x20) != 0)) {
          local_2d8 = (FScriptContainerElement *)L"";
          if (local_2b8.Data.ArrayNum != 0) {
            local_2d8 = local_2b8.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_168,L"\tflow_node%d_3 -> flow_node%d_3 [color=\"%s\"];\n");
          __return_storage_ptr__ = local_2c0;
          if (local_168.Data.ArrayNum == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_168.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(local_2c0,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar22);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
LAB_1461585db:
        if ((bVar25 & 4) != 0) goto LAB_1461585e1;
LAB_14615864a:
        if ((bVar25 & 0x18) != 0) goto LAB_146158650;
LAB_1461586c5:
        __return_storage_ptr__ = local_2c0;
        if ((bVar25 & 0x20) != 0) goto LAB_1461586cb;
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      local_290 = local_290 + 1;
      uVar21 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar21;
      pFVar24 = pFVar24 + 4;
      this = local_298;
    } while ((int)uVar21 < local_29c);
  }
  if (local_108.EdgeChain.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_108.EdgeChain.AllocatorInstance.SecondaryData);
  }
  if (local_108.VisitedEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108.VisitedEdges.AllocatorInstance.SecondaryData);
  }
  if (local_108.CyclicEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108.CyclicEdges.AllocatorInstance.SecondaryData);
  }
  ::FString::AppendChars(__return_storage_ptr__,L"}",1);
  local_110 = 0;
  if (local_118 != (undefined1 *)0x0) {
    FMemory::Free(local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,enum_UE::MovieScene::ESystemPhase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateCache @ 14615ed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::MovieScene::FSystemDependencyGraph::UpdateCache(FSystemDependencyGraph *this)

{
  int *piVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined2 uVar4;
  ushort uVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 auStackY_f8 [32];
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  FDepthFirstSearch local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->PreviousSerialNumber != this->SerialNumber) {
    BuildFlowGraph(this);
    FDirectedGraph::FDepthFirstSearch::FDepthFirstSearch(&local_88,&this->FlowGraph);
    FDirectedGraph::FindEdgeUpstreamNodes(&this->FlowGraph,&local_b0);
    iVar11 = 0;
    uVar13 = 0;
    iVar14 = 0;
    uVar8 = 1;
    iVar17 = local_b0.NumBits;
    if (iVar17 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_b0.AllocatorInstance.SecondaryData;
      }
      uVar12 = *(uint *)FVar15;
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar11;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar11 + 1;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) {
          uVar13 = local_b0._24_8_ & 0xffffffff;
          goto LAB_14615ee1e;
        }
        uVar12 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar9 * 4);
      }
      uVar8 = -uVar12 & uVar12;
      uVar13 = (ulonglong)uVar8 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = (int)lVar9 + -1 + iVar14;
      uVar13 = (ulonglong)uVar12;
      if (iVar17 < (int)uVar12) {
        uVar13 = local_b0._24_8_ & 0xffffffff;
      }
    }
LAB_14615ee1e:
    if ((int)uVar13 < iVar17) {
      uVar12 = 0xffffffff;
      do {
        if (((this->Nodes).ArrayNum <= (int)((uint)uVar13 & 0xffff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Nodes.IsValidIndex(NodeID)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                               ,0x161,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FDirectedGraph::FDepthFirstSearch::Search(&local_88,(ushort)uVar13);
        uVar12 = uVar12 & ~uVar8;
        iVar17 = local_b0.NumBits;
        FVar15 = (ForElementType<unsigned_int>)&local_b0;
        if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_b0.AllocatorInstance.SecondaryData;
        }
        uVar10 = uVar12 & *(uint *)((longlong)FVar15 + (longlong)iVar11 * 4);
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar11;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar11 + 1;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) {
            uVar13 = local_b0._24_8_ & 0xffffffff;
            goto LAB_14615eef3;
          }
          uVar12 = 0xffffffff;
          uVar10 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar9 * 4);
        }
        uVar8 = -uVar10 & uVar10;
        uVar13 = (ulonglong)uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar10 = (int)lVar9 + -1 + iVar14;
        uVar13 = (ulonglong)uVar10;
        if (iVar17 < (int)uVar10) {
          uVar13 = local_b0._24_8_ & 0xffffffff;
        }
LAB_14615eef3:
      } while ((int)uVar13 < iVar17);
    }
    _Src.Data = local_88.PostNodes.AllocatorInstance.Data;
    if (0 < local_88.PostNodes.ArrayNum / 2) {
      lVar9 = 0;
      pFVar16 = local_88.PostNodes.AllocatorInstance.Data +
                (longlong)(local_88.PostNodes.ArrayNum + -1) * 2;
      do {
        uVar4 = *(undefined2 *)(local_88.PostNodes.AllocatorInstance.Data + lVar9 * 2);
        *(undefined2 *)(local_88.PostNodes.AllocatorInstance.Data + lVar9 * 2) =
             *(undefined2 *)pFVar16;
        lVar9 = lVar9 + 1;
        *(undefined2 *)pFVar16 = uVar4;
        pFVar16 = pFVar16 + -2;
      } while (lVar9 < local_88.PostNodes.ArrayNum / 2);
    }
    pTVar2 = &this->FlowOrderNodes;
    if ((FDepthFirstSearch *)pTVar2 != &local_88) {
      iVar11 = (this->FlowOrderNodes).ArrayMax;
      piVar1 = &(this->FlowOrderNodes).ArrayMax;
      (this->FlowOrderNodes).ArrayNum = local_88.PostNodes.ArrayNum;
      if ((local_88.PostNodes.ArrayNum == 0) && (iVar11 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.PostNodes.ArrayNum,iVar11,&pTVar2->AllocatorInstance,
                   local_88.PostNodes.ArrayNum,piVar1);
        if (local_88.PostNodes.ArrayNum != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src.Data,
                 (longlong)local_88.PostNodes.ArrayNum * 2);
        }
      }
    }
    uVar8 = (this->Nodes).ArrayNum;
    pTVar3 = &this->ReverseLookupFlowOrderNodes;
    iVar11 = (this->ReverseLookupFlowOrderNodes).ArrayNum;
    piVar1 = &(this->ReverseLookupFlowOrderNodes).ArrayNum;
    if (iVar11 < (int)uVar8) {
      iVar14 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (2,2,uVar8 - iVar11,&pTVar3->AllocatorInstance,piVar1,
                          &(this->ReverseLookupFlowOrderNodes).ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 2,0,
             (longlong)(int)(uVar8 - iVar11) * 2);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar11) {
        uVar12 = iVar11 - uVar8;
        if (((int)(uVar8 | uVar12) < 0) &&
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
        if (uVar12 != 0) {
          pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 2;
          iVar11 = (*piVar1 - uVar8) - uVar12;
          if (iVar11 != 0) {
            memmove(pFVar16,pFVar16 + (longlong)(int)uVar12 * 2,(longlong)iVar11 * 2);
          }
          *piVar1 = *piVar1 - uVar12;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&pTVar3->AllocatorInstance,*piVar1,
                     &(this->ReverseLookupFlowOrderNodes).ArrayMax);
        }
      }
    }
    uVar8 = 0;
    if (0 < (this->FlowOrderNodes).ArrayNum) {
      do {
        uVar12 = 0;
        if ((int)uVar8 < (this->FlowOrderNodes).ArrayNum) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar5 = *(ushort *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 2);
        if ((*piVar1 <= (int)(uint)uVar5) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(short *)((pTVar3->AllocatorInstance).Data + (ulonglong)uVar5 * 2) = (short)uVar8;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->FlowOrderNodes).ArrayNum);
    }
    this->PreviousSerialNumber = this->SerialNumber;
    if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
    }
    if (local_88.IsVisiting.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.IsVisiting.AllocatorInstance.SecondaryData);
    }
    if (local_88.Visited.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.Visited.AllocatorInstance.SecondaryData);
    }
    if (local_88.PostNodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.PostNodes.AllocatorInstance.Data);
    }
  }
  return;
}

