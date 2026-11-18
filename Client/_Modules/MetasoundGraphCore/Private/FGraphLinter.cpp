// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 6

// operator() @ 14ad415b0

void __thiscall
`Metasound::FGraphLinter::ValidateNoDuplicateInputs'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong *plVar2;
  FDataEdge *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FDuplicateInputError *this_00;
  FDuplicateInputError *pFVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  FDuplicateInputError *local_58;
  ForAnyElementType local_50;
  int local_48;
  int aiStack_44 [3];
  FDataEdge *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<Metasound::FDataEdge,int> local_28;
  
  if (**(int **)((longlong)this + 8) < **(int **)this) {
    pFVar9 = (FDuplicateInputError *)0x0;
    **(undefined1 **)((longlong)this + 0x10) = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    aiStack_44[0] = 0;
    uVar12 = (ulonglong)**(int **)((longlong)this + 8);
    if (**(int **)((longlong)this + 8) <= **(int **)this) {
      lVar13 = uVar12 * 8;
      do {
        plVar2 = *(longlong **)((longlong)this + 0x18);
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < (int)plVar2[1]) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FDataEdge **)(lVar13 + *plVar2);
        if (((local_50.Data <= pFVar3) &&
            (pFVar3 < (FDataEdge *)(local_50.Data + (longlong)aiStack_44[0] * 0x68))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_48 == aiStack_44[0]) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&local_50,aiStack_44);
        }
        lVar10 = (longlong)local_48;
        local_48 = local_48 + 1;
        Metasound::FDataEdge::FDataEdge((FDataEdge *)(local_50.Data + lVar10 * 0x68),pFVar3);
        uVar12 = (ulonglong)(uVar11 + 1);
        lVar13 = lVar13 + 8;
      } while ((int)(uVar11 + 1) <= **(int **)this);
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x20);
    this_00 = ::operator_new(0x60);
    iVar8 = local_48;
    if (this_00 != (FDuplicateInputError *)0x0) {
      local_38 = (FDataEdge *)local_50.Data;
      if ((local_48 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_30 = iVar8;
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iVar8;
      local_28.DataPtr = local_38;
      pFVar9 = Metasound::FDuplicateInputError::FDuplicateInputError(this_00,&local_28);
    }
    local_58 = pFVar9;
    if (((pFVar4->Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar8 + 1;
    *(FDuplicateInputError **)(pFVar4->Data + (longlong)iVar8 * 8) = local_58;
    DestructItems<Metasound::FDataEdge,int>((FDataEdge *)local_50.Data,local_48);
    if ((FDataEdge *)local_50.Data != (FDataEdge *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// ValidateEdgeDataTypesMatch @ 14ad699f0

bool __cdecl
Metasound::FGraphLinter::ValidateEdgeDataTypesMatch
          (IGraph *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  FInvalidConnectionDataTypeError *this;
  FInvalidConnectionDataTypeError *pFVar9;
  FName *pFVar10;
  FDataEdge *pFVar11;
  FDataEdge *pFVar12;
  undefined1 local_res8 [8];
  FInvalidConnectionDataTypeError *local_38 [2];
  
  bVar5 = true;
  plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))();
  pFVar11 = (FDataEdge *)*plVar8;
  lVar3 = plVar8[1];
  pFVar10 = (FName *)&(pFVar11->From).Vertex.field_0x10;
  pFVar12 = pFVar11 + (int)lVar3;
  do {
    if ((int)plVar8[1] != (int)lVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return bVar5;
    }
    bVar4 = IsCastable(*pFVar10,pFVar10[5]);
    if (!bVar4) {
      this = ::operator_new(0x60);
      pFVar9 = (FInvalidConnectionDataTypeError *)0x0;
      if (this != (FInvalidConnectionDataTypeError *)0x0) {
        pFVar9 = FInvalidConnectionDataTypeError::FInvalidConnectionDataTypeError(this,pFVar11);
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_38[0] = pFVar9;
      if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      bVar5 = false;
      param_2->ArrayNum = iVar7 + 1;
      *(FInvalidConnectionDataTypeError **)(pFVar1 + (longlong)iVar7 * 8) = local_38[0];
      local_38[0] = (FInvalidConnectionDataTypeError *)0x0;
    }
    pFVar11 = pFVar11 + 1;
    pFVar10 = pFVar10 + 0xd;
  } while( true );
}

// ValidateNoCyclesInGraph @ 14ad69b70

bool __cdecl
Metasound::FGraphLinter::ValidateNoCyclesInGraph
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FGraphCycleError *this;
  FGraphCycleError *pFVar7;
  ForAnyElementType FVar8;
  FStronglyConnectedComponent *pFVar9;
  bool bVar10;
  undefined1 local_res18 [8];
  FGraphCycleError *local_68;
  TArray<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
  local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<Metasound::INode_const_*_const,int> local_38;
  
  bVar10 = true;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  bVar4 = DirectedGraphAlgo::TarjanStronglyConnectedComponents(param_1,&local_60,true);
  if (bVar4) {
    bVar10 = false;
    iVar3 = local_60.ArrayNum;
    pFVar9 = (FStronglyConnectedComponent *)
             (local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 0x20);
    FVar8.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if (local_60.ArrayNum != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((FStronglyConnectedComponent *)FVar8.Data == pFVar9) break;
      this = ::operator_new(0x60);
      pFVar7 = (FGraphCycleError *)0x0;
      if (this != (FGraphCycleError *)0x0) {
        local_48 = (((FStronglyConnectedComponent *)FVar8.Data)->Nodes).AllocatorInstance.Data;
        iVar6 = (((FStronglyConnectedComponent *)FVar8.Data)->Nodes).ArrayNum;
        if ((iVar6 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        local_38._12_4_ = uStack_3c;
        local_38.ArrayNum = iVar6;
        local_38.DataPtr = (INode **)local_48;
        iStack_40 = iVar6;
        pFVar7 = FGraphCycleError::FGraphCycleError
                           (this,&local_38,&((FStronglyConnectedComponent *)FVar8.Data)->Edges);
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_68 = pFVar7;
      if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      FVar8.Data = FVar8.Data + 0x20;
      param_2->ArrayNum = iVar6 + 1;
      *(FGraphCycleError **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_68;
      local_68 = (FGraphCycleError *)0x0;
    }
  }
  DestructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int>
            ((FStronglyConnectedComponent *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
  if ((FStronglyConnectedComponent *)local_60.AllocatorInstance.Data !=
      (FStronglyConnectedComponent *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return bVar10;
}

// ValidateNoCyclesInGraph @ 14ad69da0

bool __cdecl
Metasound::FGraphLinter::ValidateNoCyclesInGraph
          (IGraph *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  puVar5 = ::operator_new(0x260);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ValidateNoCyclesInGraph((FDirectedGraphAlgoAdapter *)&DAT_00000010,param_2);
  }
  else {
    puVar5[1] = 0;
    *puVar5 = UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FDirectedGraphAlgoAdapter>;
    FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter
              ((FDirectedGraphAlgoAdapter *)(puVar5 + 2),param_1);
    pFVar1 = (FDirectedGraphAlgoAdapter *)(puVar5 + 2);
    if (pFVar1 == (FDirectedGraphAlgoAdapter *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Adapter.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundGraphLinter.cpp"
                         ,0xcc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = ValidateNoCyclesInGraph(pFVar1,param_2);
    if (pFVar1 == (FDirectedGraphAlgoAdapter *)0x0) {
      return bVar3;
    }
  }
  (*(code *)*puVar5)(puVar5);
  return bVar3;
}

// ValidateNoDuplicateInputs @ 14ad69e90

bool __cdecl
Metasound::FGraphLinter::ValidateNoDuplicateInputs
          (IGraph *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  code *pcVar1;
  longlong lVar2;
  FIdentityFunctor FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  FDataEdge *pFVar10;
  FDataEdge *pFVar11;
  FInputDataDestination *pFVar12;
  longlong lVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_88 [2];
  FDataEdge *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  uint *local_68;
  uint *local_60;
  FIdentityFunctor *local_58;
  ForAnyElementType *local_50;
  TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
  *local_48;
  
  local_res8[0] = (FIdentityFunctor)0x1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  plVar8 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))();
  lVar13 = 8;
  lVar2 = plVar8[1];
  pFVar10 = (FDataEdge *)*plVar8;
  pFVar11 = pFVar10 + (int)lVar2;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar10 == pFVar11) break;
    local_80 = pFVar10;
    if (((local_78.Data <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 < local_78.Data + (longlong)local_70._4_4_ * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    iVar6 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_78,(int *)((longlong)&local_70 + 4));
    }
    pFVar10 = pFVar10 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar6 + 1);
    *(FDataEdge **)(local_78.Data + (longlong)iVar6 * 8) = local_80;
  }
  AlgoImpl::
  IntroSortInternal<Metasound::FDataEdge_const_*,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>_>
            ((FDataEdge **)local_78.Data,(int)local_70,local_res8[0],
             (TDereferenceWrapper<Metasound::FDataEdge_const_*,bool___cdecl(Metasound::FDataEdge_const_&,Metasound::FDataEdge_const_&)>
              )0x14ad4ae20);
  if (0 < (int)local_70) {
    local_res20[0] = 0;
    local_88[0] = 0;
    local_68 = local_88;
    pFVar12 = &(*(FDataEdge **)local_78.Data)->To;
    local_60 = local_res20;
    local_58 = local_res8;
    local_50 = &local_78;
    iVar6 = (int)local_70;
    uVar7 = 1;
    local_48 = param_2;
    if (1 < (int)local_70) {
      do {
        uVar9 = uVar7;
        uVar7 = 0;
        if ((int)uVar9 < iVar6) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          iVar6 = (int)local_70;
        }
        lVar2 = *(longlong *)(local_78.Data + lVar13);
        if (((*(INode **)(lVar2 + 0x28) != pFVar12->Node) ||
            (*(longlong *)(lVar2 + 0x38) != (pFVar12->Vertex)._padding_)) ||
           (*(longlong *)(lVar2 + 0x40) != (pFVar12->Vertex)._padding_)) {
          `Metasound::FGraphLinter::ValidateNoDuplicateInputs'::__l2::<lambda_1>::operator()
                    (&local_68);
          pFVar12 = (FInputDataDestination *)(lVar2 + 0x28);
          iVar6 = (int)local_70;
          local_res20[0] = uVar9;
        }
        lVar13 = lVar13 + 8;
        uVar7 = uVar9 + 1;
        local_88[0] = uVar9;
      } while ((int)(uVar9 + 1) < iVar6);
    }
    `Metasound::FGraphLinter::ValidateNoDuplicateInputs'::__l2::<lambda_1>::operator()(&local_68);
  }
  FVar3 = local_res8[0];
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return (bool)FVar3;
}

// ValidateVerticesExist @ 14ad6a340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::FGraphLinter::ValidateVerticesExist
          (IGraph *param_1,
          TArray<TUniquePtr<Metasound::IOperatorBuildError,TDefaultDelete<Metasound::IOperatorBuildError>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  FBuildErrorBase *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  FOutputDataSource *pFVar17;
  uint uVar18;
  FBuildErrorBase *pFVar19;
  FBuildErrorBase *pFVar20;
  uint uVar21;
  FOutputDataSource *pFVar22;
  uint uVar23;
  undefined1 auStack_228 [32];
  FBuildErrorBase **local_208;
  FScriptContainerElement *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5 [5];
  FBuildErrorBase *local_1d0;
  FBuildErrorBase *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  TBitArray<FDefaultBitArrayAllocator> *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  IGraph *local_188;
  int local_180;
  int local_17c;
  int local_178;
  longlong *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_b4;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  FInputDataDestination local_80;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1d8 = 1;
  local_188 = param_1;
  plVar7 = (longlong *)(**(code **)((longlong)*param_1 + 0x58))();
  uVar11 = (ulonglong)(int)plVar7[1];
  pFVar17 = (FOutputDataSource *)*plVar7;
  local_1c0 = CONCAT44(local_1c0._4_4_,(int)plVar7[1]);
  pFVar22 = (FOutputDataSource *)(uVar11 * 0x68 + (longlong)pFVar17);
  pFVar20 = (FBuildErrorBase *)0x0;
  while( true ) {
    if ((int)plVar7[1] != (int)uVar11) {
      local_1d7 = 0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d7);
    }
    if (pFVar17 == pFVar22) break;
    if (pFVar17->Node == (INode *)0x0) {
      local_1d8 = 0;
      pFVar8 = ::operator_new(0x60);
      pFVar19 = pFVar20;
      if (pFVar8 != (FBuildErrorBase *)0x0) {
        FDanglingVertexError::FDanglingVertexError((FDanglingVertexError *)pFVar8);
        pFVar8->_padding_ = (longlong)&___7FDanglingVertexError_Metasound__6B_;
        FBuildErrorBase::AddOutputDataSource(pFVar8,pFVar17);
        pFVar19 = pFVar8;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_1d0 = pFVar19;
      if ((pFVar2 <= (FScriptContainerElement *)&local_1d0) &&
         ((FScriptContainerElement *)&local_1d0 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
        local_1f0 = (longlong)param_2->ArrayNum;
        local_1e8 = 8;
        local_208 = &local_1d0;
        local_200 = pFVar2;
        local_1f8 = (longlong)param_2->ArrayMax;
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar6 + 1;
      *(FBuildErrorBase **)(pFVar2 + (longlong)iVar6 * 8) = local_1d0;
      local_1d0 = (FBuildErrorBase *)0x0;
    }
    if (pFVar17->Node != (INode *)0x0) {
      lVar9 = (**(code **)((longlong)*pFVar17->Node + 0x20))();
      lVar12 = *(longlong *)(lVar9 + 0x20);
      lVar9 = (longlong)*(int *)(lVar9 + 0x28) * 0x20 + lVar12;
      if (lVar12 != lVar9) {
        do {
          if (*(longlong *)(lVar12 + 8) == *(longlong *)&(pFVar17->Vertex).field_0x8) {
            if (*(longlong *)(lVar12 + 0x10) == *(longlong *)&(pFVar17->Vertex).field_0x10)
            goto LAB_14ad6a4f6;
            break;
          }
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != lVar9);
      }
    }
    local_1d8 = 0;
    AddBuildError<Metasound::FMissingVertexError,Metasound::FOutputDataSource_const_&>
              (param_2,pFVar17);
LAB_14ad6a4f6:
    if (pFVar17[1].Node == (INode *)0x0) {
      local_1d8 = 0;
      pFVar8 = ::operator_new(0x60);
      pFVar19 = pFVar20;
      if (pFVar8 != (FBuildErrorBase *)0x0) {
        FDanglingVertexError::FDanglingVertexError((FDanglingVertexError *)pFVar8);
        pFVar8->_padding_ = (longlong)&___7FDanglingVertexError_Metasound__6B_;
        FBuildErrorBase::AddInputDataDestination(pFVar8,(FInputDataDestination *)(pFVar17 + 1));
        pFVar19 = pFVar8;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      local_1c8 = pFVar19;
      if ((pFVar2 <= (FScriptContainerElement *)&local_1c8) &&
         ((FScriptContainerElement *)&local_1c8 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
        local_1f0 = (longlong)param_2->ArrayNum;
        local_1e8 = 8;
        local_208 = &local_1c8;
        local_200 = pFVar2;
        local_1f8 = (longlong)param_2->ArrayMax;
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar6 + 1;
      *(FBuildErrorBase **)(pFVar2 + (longlong)iVar6 * 8) = local_1c8;
      local_1c8 = (FBuildErrorBase *)0x0;
    }
    if (pFVar17[1].Node != (INode *)0x0) {
      plVar10 = (longlong *)(**(code **)((longlong)*pFVar17[1].Node + 0x20))();
      lVar12 = *plVar10;
      lVar9 = (longlong)(int)plVar10[1] * 0x38 + lVar12;
      if (lVar12 != lVar9) {
        do {
          if (*(longlong *)(lVar12 + 8) == *(longlong *)&pFVar17[1].Vertex.field_0x8) {
            if (*(longlong *)(lVar12 + 0x10) == *(longlong *)&pFVar17[1].Vertex.field_0x10)
            goto LAB_14ad6a636;
            break;
          }
          lVar12 = lVar12 + 0x38;
        } while (lVar12 != lVar9);
      }
    }
    local_1d8 = 0;
    AddBuildError<Metasound::FMissingVertexError,Metasound::FInputDataDestination_const_&>
              (param_2,(FInputDataDestination *)(pFVar17 + 1));
LAB_14ad6a636:
    uVar11 = local_1c0 & 0xffffffff;
    pFVar17 = (FOutputDataSource *)&pFVar17[2].Vertex.field_0x10;
  }
  plVar7 = (longlong *)(**(code **)((longlong)*local_188 + 0x60))();
  uStack_1b0 = 0;
  uVar21 = *(uint *)(plVar7 + 5);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar7 + 2);
  local_1c0 = 1;
  uStack_1ac = 1;
  uStack_19c = uStack_1b0;
  local_198 = uStack_1b0;
  if (uVar21 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uStack_1ac = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    pFVar19 = pFVar20;
    local_198 = 0;
    uStack_1b0 = 0;
    while (uStack_1ac == 0) {
      iVar6 = (int)pFVar20;
      local_198 = (int)pFVar19 + 0x20;
      pFVar19 = (FBuildErrorBase *)(ulonglong)local_198;
      uStack_1b0 = iVar6 + 1;
      pFVar20 = (FBuildErrorBase *)(ulonglong)uStack_1b0;
      uStack_1ac = 1;
      uStack_19c = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < (int)uStack_1b0)
      goto LAB_14ad6a6dd;
      uStack_1ac = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar6 * 4 + 4);
    }
    uStack_1ac = -uStack_1ac & uStack_1ac;
    uVar11 = (ulonglong)uStack_1ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_180 = (int)lVar12;
    uStack_19c = (local_198 - 1) + local_180;
    if ((int)uVar21 < (int)uStack_19c) {
      uStack_19c = uVar21;
    }
  }
LAB_14ad6a6dd:
  uVar18 = *(uint *)(plVar7 + 5);
  uStack_194 = local_b4;
  iStack_190 = (int)plVar7[1] - *(int *)((longlong)plVar7 + 0x34);
  uVar23 = uVar18 & 0xffffffe0;
  TStack_160._padding_ = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_1a0 = 0xffffffff;
  TStack_160.CurrentBitIndex = uStack_19c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  iVar6 = (int)uVar18 >> 5;
  TStack_160._28_4_ = local_b4;
  TStack_160.BaseBitIndex = local_198;
  uStack_140 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = plVar7;
  local_1a8 = pTVar1;
  local_170 = plVar7;
  local_168 = plVar7;
  TStack_160.Array = pTVar1;
  if ((((int)uVar18 < 0) || ((int)uVar21 < (int)uVar18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar10 = local_170;
  uVar21 = *(uint *)(plVar7 + 5);
  if (uVar18 != uVar21) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar6;
      uVar23 = uVar23 + 0x20;
      iVar6 = iVar6 + 1;
      uVar18 = uVar21;
      if ((int)(((int)(uVar21 - 1) >> 0x1f & 0x1fU) + (uVar21 - 1)) >> 5 < iVar6)
      goto LAB_14ad6a7f0;
      uVar18 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_17c = (int)lVar12;
    uVar18 = (uVar23 - 1) + local_17c;
    if ((int)uVar21 < (int)uVar18) {
      uVar18 = uVar21;
    }
  }
LAB_14ad6a7f0:
  while( true ) {
    plVar7 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_1d6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FInputDataDestination>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d6);
    }
    if (((TStack_160.CurrentBitIndex == uVar18) && (TStack_160.Array == pTVar1)) &&
       (plVar7 == plVar10)) break;
    puVar14 = (undefined8 *)((longlong)TStack_160.CurrentBitIndex * 0x58 + *plVar7);
    local_90 = *puVar14;
    uStack_88 = puVar14[1];
    local_80.Node = (INode *)puVar14[2];
    local_80.Vertex._padding_ = puVar14[4];
    local_80.Vertex._padding_ = puVar14[5];
    local_80.Vertex._padding_._0_4_ = *(undefined4 *)(puVar14 + 6);
    local_80.Vertex._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_80.Vertex.Literal.Value,
               (TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(puVar14 + 7));
    if (local_80.Node != (INode *)0x0) {
      plVar7 = (longlong *)(**(code **)((longlong)*local_80.Node + 0x20))();
      lVar12 = *plVar7;
      lVar9 = (longlong)(int)plVar7[1] * 0x38 + lVar12;
      for (; lVar12 != lVar9; lVar12 = lVar12 + 0x38) {
        if (*(longlong *)(lVar12 + 8) == local_80.Vertex._padding_) {
          if (*(longlong *)(lVar12 + 0x10) == local_80.Vertex._padding_) goto LAB_14ad6a8fd;
          break;
        }
      }
    }
    local_1d8 = 0;
    AddBuildError<Metasound::FMissingVertexError,Metasound::FInputDataDestination_const_&>
              (param_2,&local_80);
LAB_14ad6a8fd:
    uVar11 = (ulonglong)local_80.Vertex.Literal.Value.TypeIndex;
    if ((0xc < local_80.Vertex.Literal.Value.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar11])(&local_80.Vertex.Literal);
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  }
  plVar7 = (longlong *)(**(code **)((longlong)*local_188 + 0x68))();
  iVar6 = (int)plVar7[5];
  uStack_1b0 = 0;
  local_198 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar7 + 2);
  uStack_19c = 0;
  if (iVar6 != 0) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar21 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar21 == 0) {
      lVar12 = (longlong)(int)uStack_1b0;
      local_198 = local_198 + 0x20;
      uStack_1b0 = uStack_1b0 + 1;
      uStack_19c = iVar6;
      if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 < (int)uStack_1b0)
      goto LAB_14ad6a9e0;
      uVar21 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    local_1c0 = (ulonglong)(-uVar21 & uVar21);
    uVar11 = local_1c0 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (int)lVar12;
    uStack_19c = local_198 + -1 + local_178;
    if (iVar6 < (int)uStack_19c) {
      uStack_19c = iVar6;
    }
  }
LAB_14ad6a9e0:
  uVar21 = *(uint *)(plVar7 + 5);
  uStack_1ac = (uint)local_1c0;
  uVar18 = uVar21 & 0xffffffe0;
  uStack_194 = local_94;
  iStack_190 = (int)plVar7[1] - *(int *)((longlong)plVar7 + 0x34);
  uStack_1a0 = 0xffffffff;
  TStack_130._padding_ = CONCAT44(uStack_1ac,uStack_1b0);
  TStack_130.CurrentBitIndex = uStack_19c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar21 >> 5;
  TStack_130._28_4_ = local_94;
  TStack_130.BaseBitIndex = local_198;
  uStack_110 = CONCAT44(uStack_18c,iStack_190);
  local_1b8 = plVar7;
  local_1a8 = pTVar1;
  local_138 = plVar7;
  TStack_130.Array = pTVar1;
  if ((((int)uVar21 < 0) || (iVar6 < (int)uVar21)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar23 = *(uint *)(plVar7 + 5);
  if (uVar21 != uVar23) {
    pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar7[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar7[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar21 = uVar23;
      if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar16)
      goto LAB_14ad6aaf0;
      uVar21 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar21 = (uVar18 - 1) + (int)lVar12;
    if ((int)uVar23 < (int)uVar21) {
      uVar21 = uVar23;
    }
  }
LAB_14ad6aaf0:
  do {
    plVar10 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<Metasound::INode_const_*,FName>,Metasound::FOutputDataSource>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d5);
    }
    if (((TStack_130.CurrentBitIndex == uVar21) && (TStack_130.Array == pTVar1)) &&
       (plVar10 == plVar7)) {
      return (bool)local_1d8;
    }
    puVar15 = (undefined4 *)((longlong)TStack_130.CurrentBitIndex * 0x40 + *plVar10);
    local_108 = *puVar15;
    uStack_104 = puVar15[1];
    uStack_100 = puVar15[2];
    uStack_fc = puVar15[3];
    local_f8._0_8_ = *(undefined8 *)(puVar15 + 4);
    local_e8 = *(longlong *)(puVar15 + 8);
    local_e0 = *(longlong *)(puVar15 + 10);
    local_d8 = puVar15[0xc];
    local_f8._8_8_ = &___7FOutputDataVertex_Metasound__6B_;
    if ((INode *)local_f8._0_8_ != (INode *)0x0) {
      lVar9 = (**(code **)((longlong)*(INode *)local_f8._0_8_ + 0x20))();
      lVar12 = *(longlong *)(lVar9 + 0x20);
      lVar9 = (longlong)*(int *)(lVar9 + 0x28) * 0x20 + lVar12;
      for (; lVar12 != lVar9; lVar12 = lVar12 + 0x20) {
        if (*(longlong *)(lVar12 + 8) == local_e8) {
          if (*(longlong *)(lVar12 + 0x10) == local_e0) goto LAB_14ad6abb6;
          break;
        }
      }
    }
    local_1d8 = 0;
    AddBuildError<Metasound::FMissingVertexError,Metasound::FOutputDataSource_const_&>
              (param_2,(FOutputDataSource *)local_f8);
LAB_14ad6abb6:
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
}

