// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 13

// CreateDirectedGraphAlgoAdapter @ 14ad4bd50

TPimplPtr<Metasound::FDirectedGraphAlgoAdapter,0> __cdecl
Metasound::FDirectedGraphAlgo::CreateDirectedGraphAlgoAdapter(IGraph *param_1)

{
  undefined8 *puVar1;
  IGraph *in_RDX;
  
  puVar1 = ::operator_new(0x260);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = UE::Core::Private::PimplPtr::DeleterFunc<Metasound::FDirectedGraphAlgoAdapter>;
    FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter
              ((FDirectedGraphAlgoAdapter *)(puVar1 + 2),in_RDX);
  }
  *param_1 = (IGraph)(puVar1 + 2);
  return (TPimplPtr<Metasound::FDirectedGraphAlgoAdapter,0>)(FDirectedGraphAlgoAdapter *)param_1;
}

// DepthFirstTopologicalSort @ 14ad4e530

bool __cdecl
Metasound::FDirectedGraphAlgo::DepthFirstTopologicalSort
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 auStackX_18 [8];
  undefined8 uStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_80;
  TTuple<int,int> *pTStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *pFStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<TTuple<int,int>_const_,int> TStack_48;
  TArrayView<int_const_,int> TStack_38;
  
  TStack_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_80.ArrayNum = 0;
  TStack_80.ArrayMax = 0;
  pTVar10 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
  pTStack_68 = (TTuple<int,int> *)(pTVar10->AllocatorInstance).Data;
  iStack_60 = pTVar10->ArrayNum;
  if ((iStack_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar11 = FDirectedGraphAlgoAdapter::GetUniqueVertices(param_1);
  pFStack_58 = (pTVar11->AllocatorInstance).Data;
  iStack_50 = pTVar11->ArrayNum;
  if ((iStack_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  TStack_48._12_4_ = uStack_5c;
  TStack_48.ArrayNum = iStack_60;
  TStack_38._12_4_ = uStack_4c;
  TStack_38.ArrayNum = iStack_50;
  TStack_38.DataPtr = (int *)pFStack_58;
  TStack_48.DataPtr = pTStack_68;
  bVar5 = UE::MathCore::Graph::DepthFirstTopologicalSort(&TStack_38,&TStack_48,&TStack_80);
  if (bVar5) {
    uVar13 = param_2->ArrayNum + TStack_80.ArrayNum;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &param_2->ArrayMax;
    iVar12 = TStack_80.ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      iVar12 = TStack_80.ArrayNum;
    }
    pFVar2 = TStack_80.AllocatorInstance.Data + (longlong)iVar12 * 4;
    FVar14.Data = TStack_80.AllocatorInstance.Data;
    iVar9 = iVar12;
    while( true ) {
      if (iVar9 != iVar12) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
      }
      if (FVar14.Data == pFVar2) break;
      uVar13 = *(uint *)FVar14.Data;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->MetasoundUniqueNodes).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uStack_88 = *(undefined8 *)
                   ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                   (longlong)(int)uVar13 * 8);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&uStack_88) &&
          ((FScriptContainerElement *)&uStack_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar14.Data = FVar14.Data + 4;
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = uStack_88;
      iVar9 = TStack_80.ArrayNum;
    }
  }
  if (TStack_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_80.AllocatorInstance.Data);
  }
  return bVar5;
}

// DepthFirstTopologicalSort @ 14ad4e540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::FDirectedGraphAlgo::DepthFirstTopologicalSort
          (IGraph *param_1,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = DirectedGraphAlgo::DepthFirstTopologicalSort(pFVar2,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

// FindReachableNodes @ 14ad51810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodes
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  int iVar1;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 auStackY_148 [32];
  undefined1 auStack_118 [32];
  void *pvStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ForElementType<FSetElementId> FStack_d8;
  int iStack_d0;
  undefined1 auStack_c8 [32];
  void *pvStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ForElementType<FSetElementId> FStack_88;
  int iStack_80;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  TStack_78;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uStack_9c = 0x80;
  auStack_c8._0_8_ = (FScriptContainerElement *)0x0;
  auStack_c8._8_8_ = 0;
  pvStack_a8 = (void *)0x0;
  uStack_a0 = 0;
  uStack_94 = 0;
  FStack_88 = (ForElementType<FSetElementId>)0x0;
  iStack_80 = 0;
  uStack_98 = 0xffffffff;
  DirectedGraphAlgo::FindReachableNodesFromInput
            (param_1,(TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                      *)auStack_c8);
  auStack_118._0_8_ = (FScriptContainerElement *)0x0;
  auStack_118._8_8_ = 0;
  pvStack_f8 = (void *)0x0;
  uStack_f0 = 0;
  uStack_ec = 0x80;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  FStack_d8 = (ForElementType<FSetElementId>)0x0;
  iStack_d0 = 0;
  DirectedGraphAlgo::FindReachableNodesFromOutput
            (param_1,(TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                      *)auStack_118);
  pTVar2 = TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
           ::Union((TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                    *)auStack_c8,&TStack_78,
                   (TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
                    *)auStack_118);
  if (param_2 != pTVar2) {
    TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
    ::
    Move<TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>_>
              (param_2,pTVar2);
  }
  TStack_78.HashSize = 0;
  if (TStack_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::INode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_78.Elements);
  iStack_d0 = 0;
  if (FStack_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_d8);
  }
  iVar1 = SUB84(auStack_118._8_8_,4);
  auStack_118._8_8_ = auStack_118._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)auStack_118,0,(int *)(auStack_118 + 0xc));
  }
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  uStack_f0 = 0;
  if (0x80 < uStack_ec) {
    uStack_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_118 + 0x10),0);
  }
  if (pvStack_f8 != (void *)0x0) {
    FMemory::Free(pvStack_f8);
  }
  if ((FScriptContainerElement *)auStack_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_118._0_8_);
  }
  iStack_80 = 0;
  if (FStack_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_88);
  }
  iVar1 = SUB84(auStack_c8._8_8_,4);
  auStack_c8._8_8_ = auStack_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)auStack_c8,0,(int *)(auStack_c8 + 0xc));
  }
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  uStack_a0 = 0;
  if (0x80 < uStack_9c) {
    uStack_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10),0);
  }
  if (pvStack_a8 != (void *)0x0) {
    FMemory::Free(pvStack_a8);
  }
  if ((FScriptContainerElement *)auStack_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_c8._0_8_);
  }
  return;
}

// FindReachableNodes @ 14ad51820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodes
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  DirectedGraphAlgo::FindReachableNodes(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// FindReachableNodesFromInput @ 14ad51ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodesFromInput
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<TTuple<int,int>_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_118 [32];
  undefined1 auStack_e8 [8];
  undefined8 *puStack_e0;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *pTStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  TArrayView<TTuple<int,int>_const_,int> TStack_b8;
  TArrayView<TTuple<int,int>_const_,int> TStack_a8;
  undefined1 auStack_98 [32];
  void *pvStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = (param_1->InputVertices).AllocatorInstance.Data;
  iVar2 = (param_1->InputVertices).ArrayNum;
  auStack_98._0_8_ = (FScriptContainerElement *)0x0;
  auStack_98._8_8_ = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  pvStack_78 = (void *)0x0;
  uStack_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  FStack_58 = (ForElementType<FSetElementId>)0x0;
  iStack_50 = 0;
  pTStack_d8 = param_2;
  while( true ) {
    if ((param_1->InputVertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_e8);
    }
    if (pFVar6 == pFVar1) break;
    puStack_e0 = (undefined8 *)auStack_98;
    iVar3 = *(int *)pFVar6;
    ppuStack_c8 = &puStack_e0;
    pcStack_d0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromInput'::__l6::<lambda_1>,bool,int>
                 ::Call;
    if ((param_1->Lazy).Tree.bIsInitialized == false) {
      pTVar4 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
      pTVar5 = TArrayView<TTuple<int,int>_const_,int>::
               TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_>
                         (&TStack_a8,pTVar4);
      TStack_b8.DataPtr = pTVar5->DataPtr;
      TStack_b8.ArrayNum = pTVar5->ArrayNum;
      TStack_b8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      UE::MathCore::Graph::BuildDirectedTree(&TStack_b8,&(param_1->Lazy).Tree.Object);
      (param_1->Lazy).Tree.bIsInitialized = true;
    }
    UE::MathCore::Graph::DepthFirstNodeTraversal
              (iVar3,&(param_1->Lazy).Tree.Object,(TFunctionRef<bool___cdecl(int)> *)&pcStack_d0);
    pFVar6 = pFVar6 + 4;
  }
  FDirectedGraphAlgoAdapter::GetNodeSet
            (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_98,pTStack_d8)
  ;
  iStack_50 = 0;
  if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_58);
  }
  iVar2 = SUB84(auStack_98._8_8_,4);
  auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
  }
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_68 = 0xffffffff;
  if (0x80 < uStack_6c) {
    uStack_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),0);
  }
  if (pvStack_78 != (void *)0x0) {
    FMemory::Free(pvStack_78);
  }
  if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_98._0_8_);
  }
  return;
}

// FindReachableNodesFromInput @ 14ad51af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodesFromInput
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  DirectedGraphAlgo::FindReachableNodesFromInput(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// FindReachableNodesFromOutput @ 14ad51db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodesFromOutput
          (FDirectedGraphAlgoAdapter *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<TTuple<int,int>_const_,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackY_118 [32];
  undefined1 auStack_e8 [8];
  undefined8 *puStack_e0;
  TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
  *pTStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  TArrayView<TTuple<int,int>_const_,int> TStack_b8;
  TArrayView<TTuple<int,int>_const_,int> TStack_a8;
  undefined1 auStack_98 [32];
  void *pvStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ForElementType<FSetElementId> FStack_58;
  int iStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar6 = (param_1->OutputVertices).AllocatorInstance.Data;
  iVar2 = (param_1->OutputVertices).ArrayNum;
  auStack_98._0_8_ = (FScriptContainerElement *)0x0;
  auStack_98._8_8_ = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  pvStack_78 = (void *)0x0;
  uStack_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  FStack_58 = (ForElementType<FSetElementId>)0x0;
  iStack_50 = 0;
  pTStack_d8 = param_2;
  while( true ) {
    if ((param_1->OutputVertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_e8);
    }
    if (pFVar6 == pFVar1) break;
    puStack_e0 = (undefined8 *)auStack_98;
    iVar3 = *(int *)pFVar6;
    ppuStack_c8 = &puStack_e0;
    pcStack_d0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::DirectedGraphAlgo::FindReachableNodesFromOutput'::__l6::<lambda_1>,bool,int>
                 ::Call;
    if ((param_1->Lazy).TransposeTree.bIsInitialized == false) {
      pTVar4 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
      pTVar5 = TArrayView<TTuple<int,int>_const_,int>::
               TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_>
                         (&TStack_a8,pTVar4);
      TStack_b8.DataPtr = pTVar5->DataPtr;
      TStack_b8.ArrayNum = pTVar5->ArrayNum;
      TStack_b8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      UE::MathCore::Graph::BuildTransposeDirectedTree
                (&TStack_b8,&(param_1->Lazy).TransposeTree.Object);
      (param_1->Lazy).TransposeTree.bIsInitialized = true;
    }
    UE::MathCore::Graph::DepthFirstNodeTraversal
              (iVar3,&(param_1->Lazy).TransposeTree.Object,
               (TFunctionRef<bool___cdecl(int)> *)&pcStack_d0);
    pFVar6 = pFVar6 + 4;
  }
  FDirectedGraphAlgoAdapter::GetNodeSet
            (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_98,pTStack_d8)
  ;
  iStack_50 = 0;
  if (FStack_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_58);
  }
  iVar2 = SUB84(auStack_98._8_8_,4);
  auStack_98._8_8_ = auStack_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)auStack_98,0,(int *)(auStack_98 + 0xc));
  }
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_68 = 0xffffffff;
  if (0x80 < uStack_6c) {
    uStack_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10),0);
  }
  if (pvStack_78 != (void *)0x0) {
    FMemory::Free(pvStack_78);
  }
  if ((FScriptContainerElement *)auStack_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_98._0_8_);
  }
  return;
}

// FindReachableNodesFromOutput @ 14ad51dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::FDirectedGraphAlgo::FindReachableNodesFromOutput
          (IGraph *param_1,
          TSet<Metasound::INode_const_*,DefaultKeyFuncs<Metasound::INode_const_*,0>,FDefaultSetAllocator>
          *param_2)

{
  FDirectedGraphAlgoAdapter *pFVar1;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  DirectedGraphAlgo::FindReachableNodesFromOutput(pFVar1,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return;
}

// KahnTopologicalSort @ 14ad5ad60

bool __cdecl
Metasound::FDirectedGraphAlgo::KahnTopologicalSort
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 auStackX_18 [8];
  undefined8 uStack_88;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_80;
  TTuple<int,int> *pTStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  FScriptContainerElement *pFStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<TTuple<int,int>_const_,int> TStack_48;
  TArrayView<int_const_,int> TStack_38;
  
  TStack_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_80.ArrayNum = 0;
  TStack_80.ArrayMax = 0;
  pTVar10 = FDirectedGraphAlgoAdapter::GetUniqueEdges(param_1);
  pTStack_68 = (TTuple<int,int> *)(pTVar10->AllocatorInstance).Data;
  iStack_60 = pTVar10->ArrayNum;
  if ((iStack_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar11 = FDirectedGraphAlgoAdapter::GetUniqueVertices(param_1);
  pFStack_58 = (pTVar11->AllocatorInstance).Data;
  iStack_50 = pTVar11->ArrayNum;
  if ((iStack_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  TStack_48._12_4_ = uStack_5c;
  TStack_48.ArrayNum = iStack_60;
  TStack_38._12_4_ = uStack_4c;
  TStack_38.ArrayNum = iStack_50;
  TStack_38.DataPtr = (int *)pFStack_58;
  TStack_48.DataPtr = pTStack_68;
  bVar5 = UE::MathCore::Graph::KahnTopologicalSort(&TStack_38,&TStack_48,&TStack_80);
  if (bVar5) {
    uVar13 = param_2->ArrayNum + TStack_80.ArrayNum;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    piVar1 = &param_2->ArrayMax;
    iVar12 = TStack_80.ArrayNum;
    if (*piVar1 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      iVar12 = TStack_80.ArrayNum;
    }
    pFVar2 = TStack_80.AllocatorInstance.Data + (longlong)iVar12 * 4;
    FVar14.Data = TStack_80.AllocatorInstance.Data;
    iVar9 = iVar12;
    while( true ) {
      if (iVar9 != iVar12) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
      }
      if (FVar14.Data == pFVar2) break;
      uVar13 = *(uint *)FVar14.Data;
      uVar8 = 0;
      if ((int)uVar13 < (param_1->MetasoundUniqueNodes).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uStack_88 = *(undefined8 *)
                   ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                   (longlong)(int)uVar13 * 8);
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&uStack_88) &&
          ((FScriptContainerElement *)&uStack_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar14.Data = FVar14.Data + 4;
      param_2->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = uStack_88;
      iVar9 = TStack_80.ArrayNum;
    }
  }
  if (TStack_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_80.AllocatorInstance.Data);
  }
  return bVar5;
}

// KahnTopologicalSort @ 14ad5ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::FDirectedGraphAlgo::KahnTopologicalSort
          (IGraph *param_1,TArray<Metasound::INode_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = DirectedGraphAlgo::KahnTopologicalSort(pFVar2,param_2);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

// TarjanStronglyConnectedComponents @ 14ad66130

bool __cdecl
Metasound::FDirectedGraphAlgo::TarjanStronglyConnectedComponents
          (FDirectedGraphAlgoAdapter *param_1,
          TArray<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
  *pTVar6;
  TTuple<Metasound::INode_const_*,Metasound::INode_const_*> *pTVar7;
  uint *puVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FDataEdge *pFVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackX_20 [8];
  undefined1 uStack_b8;
  undefined1 auStack_b7 [7];
  ForAnyElementType FStack_b0;
  undefined8 uStack_a8;
  FScriptContainerElement *pFStack_a0;
  undefined8 uStack_98;
  TArray<UE::MathCore::Graph::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_> TStack_90;
  uint uStack_80;
  TBaseKeyIterator<1> TStack_78;
  uint *puStack_60;
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  TStack_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_90.ArrayNum = 0;
  TStack_90.ArrayMax = 0;
  bVar10 = UE::MathCore::Graph::TarjanStronglyConnectedComponents
                     (&param_1->EdgeSet,&TStack_90,param_3);
  if (bVar10) {
    uVar17 = (ulonglong)TStack_90.ArrayNum;
    pFStack_a0 = TStack_90.AllocatorInstance.Data + 8;
    pTStack_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 (TStack_90.AllocatorInstance.Data + uVar17 * 0x20);
    uStack_80 = TStack_90.ArrayNum;
    while( true ) {
      pTVar9 = pTStack_58;
      if (TStack_90.ArrayNum != (int)uVar17) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<UE::MathCore::Graph::FStronglyConnectedComponent,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFStack_a0 + -8);
      if (pTVar1 == pTVar9) break;
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pFVar22 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x20;
      param_2->ArrayNum = iVar12 + 1;
      DefaultConstructItems<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,int>
                (pFVar22,1);
      pFVar19 = (pTVar1->AllocatorInstance).Data;
      iVar12 = *(int *)pFStack_a0;
      pFVar2 = pFVar19 + (longlong)iVar12 * 4;
      while( true ) {
        if (*(int *)pFStack_a0 != iVar12) {
          uStack_b8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&uStack_b8);
        }
        if (pFVar19 == pFVar2) break;
        uVar3 = *(uint *)pFVar19;
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uStack_98 = *(undefined8 *)
                     ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 8);
        if (((*(undefined8 **)&pFVar22->field_0x0 <= &uStack_98) &&
            (&uStack_98 < *(undefined8 **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar14 = *(int *)&pFVar22[8].field_0x0;
        if (iVar14 == *(int *)(pFVar22 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
        }
        pFVar19 = pFVar19 + 4;
        *(int *)&pFVar22[8].field_0x0 = iVar14 + 1;
        *(undefined8 *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar14 * 8) = uStack_98;
      }
      puVar21 = *(uint **)(pFStack_a0 + 8);
      iVar12 = *(int *)(pFStack_a0 + 0x10);
      puStack_60 = puVar21 + (longlong)iVar12 * 2;
      while( true ) {
        puVar8 = puStack_60;
        if (*(int *)(pFStack_a0 + 0x10) != iVar12) {
          auStack_b7[0] = 0;
          `TCheckedPointerIterator<TTuple<int,int>_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStack_b7);
        }
        if (puVar21 == puVar8) break;
        uVar3 = *puVar21;
        FStack_b0.Data = (FScriptContainerElement *)0x0;
        uStack_a8 = 0;
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uVar4 = *(undefined8 *)
                 ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data + (longlong)(int)uVar3 * 8)
        ;
        uVar3 = puVar21[1];
        uVar13 = 0;
        if ((int)uVar3 < (param_1->MetasoundUniqueNodes).ArrayNum) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        uStack_48 = *(undefined8 *)
                     ((param_1->MetasoundUniqueNodes).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 8);
        uStack_50 = uVar4;
        TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  (&TStack_78,
                   (TSet<TTuple<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge>,TDefaultMapHashableKeyFuncs<TTuple<Metasound::INode_const_*,Metasound::INode_const_*>,Metasound::FDataEdge,1>,FDefaultSetAllocator>
                    *)&param_1->MetasoundNodePairEdges,
                   (TTuple<Metasound::INode_const_*,Metasound::INode_const_*> *)&uStack_50);
        pTVar7 = TStack_78.Key;
        pTVar6 = TStack_78.Set;
        iVar14 = TStack_78.NextIndex;
joined_r0x00014ad65e74:
        TStack_78.NextIndex = iVar14;
        if (TStack_78.Index != -1) {
          pFVar20 = (FDataEdge *)
                    (*(longlong *)&pTVar6->Elements + (longlong)TStack_78.Index * 0x80 + 0x10);
          if (((FStack_b0.Data <= pFVar20) &&
              (uStack_a8._4_4_ = (int)((ulonglong)uStack_a8 >> 0x20),
              lVar18 = (longlong)uStack_a8._4_4_,
              pFVar20 < (FDataEdge *)((longlong)FStack_b0.Data + lVar18 * 0x68))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          if ((int)uStack_a8 == uStack_a8._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&FStack_b0,(int *)((longlong)&uStack_a8 + 4));
            uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar15);
          }
          lVar18 = (longlong)(int)uStack_a8;
          uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
          FDataEdge::FDataEdge((FDataEdge *)(FStack_b0.Data + lVar18 * 0x68),pFVar20);
          TStack_78.Index = iVar14;
          if (iVar14 == -1) goto LAB_14ad65f93;
          lVar18 = *(longlong *)&pTVar6->Elements;
          do {
            lVar16 = (longlong)TStack_78.Index * 0x80;
            iVar14 = *(int *)(lVar16 + 0x78 + lVar18);
            if ((*(longlong *)(lVar16 + lVar18) == *(longlong *)pTVar7) &&
               (*(longlong *)(lVar16 + 8 + lVar18) == *(longlong *)&pTVar7->field_0x8)) break;
            TStack_78.Index = iVar14;
          } while (iVar14 != -1);
          goto joined_r0x00014ad65e74;
        }
LAB_14ad65f93:
        pFVar2 = pFVar22 + 0x10;
        if ((pFVar2 == (FScriptContainerElement *)&FStack_b0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
        iVar14 = (int)uStack_a8;
        if ((int)uStack_a8 != 0) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x68,8,(int)uStack_a8,(ForAnyElementType *)pFVar2,
                              (int *)(pFVar22 + 0x18),(int *)(pFVar22 + 0x1c));
          ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
                    (*(FScriptContainerElement **)&pFVar2->field_0x0 + (longlong)iVar15 * 0x68,
                     (FDataEdge *)FStack_b0.Data,iVar14);
        }
        DestructItems<Metasound::FDataEdge,int>((FDataEdge *)FStack_b0.Data,(int)uStack_a8);
        if ((FDataEdge *)FStack_b0.Data != (FDataEdge *)0x0) {
          FMemory::Free(FStack_b0.Data);
        }
        puVar21 = puVar21 + 2;
      }
      pFStack_a0 = pFStack_a0 + 0x20;
      uVar17 = (ulonglong)uStack_80;
    }
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  DestructItems<UE::MathCore::Graph::FStronglyConnectedComponent,int>
            ((FStronglyConnectedComponent *)TStack_90.AllocatorInstance.Data,TStack_90.ArrayNum);
  if ((FStronglyConnectedComponent *)TStack_90.AllocatorInstance.Data !=
      (FStronglyConnectedComponent *)0x0) {
    FMemory::Free(TStack_90.AllocatorInstance.Data);
  }
  return bVar10;
}

// TarjanStronglyConnectedComponents @ 14ad66140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Metasound::FDirectedGraphAlgo::TarjanStronglyConnectedComponents
          (IGraph *param_1,
          TArray<Metasound::DirectedGraphAlgo::FStronglyConnectedComponent,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  bool bVar1;
  FDirectedGraphAlgoAdapter *pFVar2;
  undefined1 auStack_288 [32];
  FDirectedGraphAlgoAdapter local_268;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = FDirectedGraphAlgoAdapter::FDirectedGraphAlgoAdapter(&local_268,param_1);
  bVar1 = DirectedGraphAlgo::TarjanStronglyConnectedComponents(pFVar2,param_2,param_3);
  FDirectedGraphAlgoAdapter::~FDirectedGraphAlgoAdapter(&local_268);
  return bVar1;
}

