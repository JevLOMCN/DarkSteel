// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// CompareAndLogEdgeArrays @ 14ad4a790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::CompareAndLogEdgeArrays
          (wchar_t *param_1,
          TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *param_2
          ,wchar_t *param_3,
          TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *param_4
          )

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar10 = (param_2->AllocatorInstance).Data;
  bVar6 = true;
  pFVar9 = (param_4->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)param_2->ArrayNum * 0x20;
  pFVar12 = pFVar9 + (longlong)param_4->ArrayNum * 0x20;
joined_r0x00014ad4a7dc:
  do {
    if (pFVar10 == pFVar11) {
      if (pFVar9 != pFVar12) {
        pFVar10 = pFVar9 + 8;
        do {
          if (3 < (byte)LogMetaSound._0_1_) {
            ::FName::ToString((FName *)(pFVar10 + 0x10),&local_48);
            ::FName::ToString((FName *)(pFVar10 + 8),&local_38);
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)
                       &`public:_static_void___cdecl_Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::LogMissingEdge(wchar_t_const*___ptr64,Metasound::DynamicGraph::Debug::FOperatorEdge_const&___ptr64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          pFVar9 = pFVar10 + 0x18;
          pFVar10 = pFVar10 + 0x20;
        } while (pFVar9 != pFVar12);
        bVar6 = false;
      }
      return bVar6;
    }
    pFVar8 = pFVar10 + 8;
    if (pFVar9 == pFVar12) {
      do {
        if (3 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)(pFVar8 + 0x10),&local_48);
          ::FName::ToString((FName *)(pFVar8 + 8),&local_38);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)
                     &`public:_static_void___cdecl_Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::LogMissingEdge(wchar_t_const*___ptr64,Metasound::DynamicGraph::Debug::FOperatorEdge_const&___ptr64)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = pFVar8 + 0x18;
        pFVar8 = pFVar8 + 0x20;
      } while (pFVar10 != pFVar11);
      return false;
    }
    uVar1 = *(ulonglong *)pFVar9;
    uVar2 = *(ulonglong *)pFVar10;
    bVar13 = uVar2 < uVar1;
    if ((uVar2 == uVar1) &&
       (bVar13 = *(ulonglong *)pFVar8 < *(ulonglong *)(pFVar9 + 8),
       *(ulonglong *)pFVar8 == *(ulonglong *)(pFVar9 + 8))) {
      uVar3 = *(ulonglong *)(pFVar10 + 0x10);
      if ((uVar3 != 0) && (uVar4 = *(ulonglong *)(pFVar9 + 0x18), uVar4 != 0)) {
        uVar5 = *(ulonglong *)(pFVar9 + 0x10);
        if (uVar3 == uVar5) {
          iVar7 = *(int *)(pFVar10 + 0x18) - (int)uVar4;
          if (iVar7 == 0) {
            iVar7 = *(int *)(pFVar10 + 0x1c) - (int)(uVar4 >> 0x20);
          }
          bVar13 = SUB41((uint)iVar7 >> 0x1f,0);
        }
        else {
          iVar7 = (int)uVar3 - (int)uVar5;
          if (iVar7 == 0) {
            iVar7 = (int)(uVar3 >> 0x20) - (int)(uVar5 >> 0x20);
          }
          bVar13 = SUB41((uint)iVar7 >> 0x1f,0);
        }
        goto LAB_14ad4a85b;
      }
    }
    else {
LAB_14ad4a85b:
      if (bVar13 != false) {
        if (3 < (byte)LogMetaSound._0_1_) {
          ::FName::ToString((FName *)(pFVar10 + 0x18),&local_58);
          ::FName::ToString((FName *)(pFVar10 + 0x10),&local_68);
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)
                     &`public:_static_void___cdecl_Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::LogMissingEdge(wchar_t_const*___ptr64,Metasound::DynamicGraph::Debug::FOperatorEdge_const&___ptr64)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = pFVar10 + 0x20;
        bVar6 = false;
        goto joined_r0x00014ad4a7dc;
      }
    }
    bVar13 = uVar1 < uVar2;
    if ((uVar1 == uVar2) &&
       (bVar13 = *(ulonglong *)(pFVar9 + 8) < *(ulonglong *)pFVar8,
       *(ulonglong *)(pFVar9 + 8) == *(ulonglong *)pFVar8)) {
      uVar1 = *(ulonglong *)(pFVar9 + 0x10);
      if ((uVar1 != 0) && (uVar2 = *(ulonglong *)(pFVar10 + 0x18), uVar2 != 0)) {
        uVar3 = *(ulonglong *)(pFVar10 + 0x10);
        if (uVar1 == uVar3) {
          iVar7 = *(int *)(pFVar9 + 0x18) - (int)uVar2;
          if (iVar7 == 0) {
            iVar7 = *(int *)(pFVar9 + 0x1c) - (int)(uVar2 >> 0x20);
          }
          bVar13 = SUB41((uint)iVar7 >> 0x1f,0);
        }
        else {
          iVar7 = (int)uVar1 - (int)uVar3;
          if (iVar7 == 0) {
            iVar7 = (int)(uVar1 >> 0x20) - (int)(uVar3 >> 0x20);
          }
          bVar13 = SUB41((uint)iVar7 >> 0x1f,0);
        }
        goto LAB_14ad4a96f;
      }
LAB_14ad4aa1c:
      pFVar10 = pFVar10 + 0x20;
      pFVar9 = pFVar9 + 0x20;
    }
    else {
LAB_14ad4a96f:
      if (bVar13 == false) goto LAB_14ad4aa1c;
      if (3 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString((FName *)(pFVar9 + 0x18),&local_38);
        ::FName::ToString((FName *)(pFVar9 + 0x10),&local_48);
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)
                   &`public:_static_void___cdecl_Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::LogMissingEdge(wchar_t_const*___ptr64,Metasound::DynamicGraph::Debug::FOperatorEdge_const&___ptr64)'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = pFVar9 + 0x20;
      bVar6 = false;
    }
  } while( true );
}

// CompareAndLogGraphRepresentationDiscrepancies @ 14ad4abe0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

bool __cdecl
Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::
CompareAndLogGraphRepresentationDiscrepancies
          (FDynamicOperatorTransactor *param_1,FDynamicOperator *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ulong64 *puVar9;
  ulong64 *puVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> local_88;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> local_78;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> local_68;
  FOperatorEdge local_58;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  plVar8 = (longlong *)(**(code **)((param_1->Graph)._padding_ + 0x58))();
  lVar2 = plVar8[1];
  puVar9 = (ulong64 *)*plVar8;
  puVar10 = puVar9 + (longlong)(int)lVar2 * 0xd;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar2) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Metasound::FDataEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar9 == puVar10) break;
    local_58.FromOperator = *puVar9;
    local_58.ToOperator = puVar9[5];
    local_58.FromVertex = *(FName *)(puVar9 + 2);
    local_58.ToVertex = *(FName *)(puVar9 + 7);
    if (((local_88.AllocatorInstance.Data <= &local_58) &&
        (&local_58 <
         (FOperatorEdge *)(local_88.AllocatorInstance.Data + (longlong)local_88.ArrayMax * 0x20)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar7 = local_88.ArrayNum;
    if (local_88.ArrayNum == local_88.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_88.AllocatorInstance,&local_88.ArrayMax);
    }
    local_88.ArrayNum = iVar7 + 1;
    puVar9 = puVar9 + 0xd;
    *(ulong64 *)&local_88.AllocatorInstance.Data[(longlong)iVar7 * 0x20].field_0x0 =
         local_58.FromOperator;
    *(ulong64 *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 8) = local_58.ToOperator
    ;
    *(FName *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10) =
         local_58.FromVertex;
    ((FName *)(local_88.AllocatorInstance.Data + (longlong)iVar7 * 0x20 + 0x10))[1] =
         local_58.ToVertex;
  }
  FindGraphOperatorEdges(&local_68,&param_1->GraphSorter);
  FindGraphOperatorEdges(&local_78,(FGraphOperatorData *)&param_2->DynamicOperatorData);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)local_88.AllocatorInstance.Data,local_88.ArrayNum,local_res8[0],
             (TLess<void> *)local_res10);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)local_68.AllocatorInstance.Data,local_68.ArrayNum,local_res8[0],
             (TLess<void> *)local_res18);
  AlgoImpl::
  IntroSortInternal<Metasound::DynamicGraph::Debug::FOperatorEdge,int,FIdentityFunctor,TDereferenceWrapper<Metasound::DynamicGraph::Debug::FOperatorEdge,TLess<void>_>_>
            ((FOperatorEdge *)local_78.AllocatorInstance.Data,local_78.ArrayNum,local_res8[0],
             (TLess<void> *)local_res20);
  bVar3 = CompareAndLogEdgeArrays(L"Graph",&local_88,L"GraphSorter",&local_68);
  bVar5 = CompareAndLogEdgeArrays(L"Graph",&local_88,L"DynamicRuntime",&local_78);
  bVar6 = CompareAndLogEdgeArrays(L"DynamicRuntime",&local_78,L"GraphSorter",&local_68);
  if (((bVar3) && (bVar5)) && (bVar6)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((FOperatorEdge *)local_78.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if ((FOperatorEdge *)local_68.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if ((FOperatorEdge *)local_88.AllocatorInstance.Data != (FOperatorEdge *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return bVar3;
}

// FindGraphOperatorEdges @ 14ad51020

TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::FindGraphOperatorEdges
          (TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FGraphOperatorData *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined1 local_res8 [8];
  FGraphOperatorData *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (param_1->OperatorMap).Pairs.ArrayNum;
  uVar11 = (ulonglong)(int)uVar2;
  pFVar15 = (param_1->OperatorMap).Pairs.AllocatorInstance.Data;
  pFVar13 = pFVar15 + uVar11 * 0x78;
  local_res10 = param_1;
  while( true ) {
    if ((local_res10->OperatorMap).Pairs.ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar13) break;
    uVar3 = *(uint *)(pFVar15 + 0x70);
    uVar11 = (ulonglong)(int)uVar3;
    puVar17 = *(undefined8 **)(pFVar15 + 0x68);
    puVar1 = puVar17 + uVar11 * 3;
    piVar16 = (int *)(puVar17 + 2);
    while( true ) {
      if (*(int *)(pFVar15 + 0x70) != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<FName,TArray<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination,TSizedDefaultAllocator<32>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar17 == puVar1) break;
      iVar4 = *piVar16;
      puVar14 = *(undefined8 **)(piVar16 + -2);
      puVar12 = puVar14 + (longlong)iVar4 * 2;
      while( true ) {
        if (*piVar16 != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Metasound::DirectedGraphAlgo::FGraphOperatorData::FVertexDestination_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (puVar14 == puVar12) break;
        local_70 = *(undefined8 *)pFVar15;
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        uStack_68 = *puVar14;
        local_60 = *puVar17;
        uStack_58 = puVar14[1];
        if ((pFVar5 <= (FScriptContainerElement *)&local_70) &&
           ((FScriptContainerElement *)&local_70 <
            pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar10 = (TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>
                       *)(*pcVar7)();
            return pTVar10;
          }
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
        puVar14 = puVar14 + 2;
        pFVar5 = pFVar6 + (longlong)iVar9 * 0x20;
        *(undefined8 *)pFVar5 = local_70;
        *(undefined8 *)(pFVar5 + 8) = uStack_68;
        pFVar6 = pFVar6 + (longlong)iVar9 * 0x20 + 0x10;
        *(undefined8 *)pFVar6 = local_60;
        *(undefined8 *)(pFVar6 + 8) = uStack_58;
      }
      uVar11 = (ulonglong)uVar3;
      puVar17 = puVar17 + 3;
      piVar16 = piVar16 + 6;
    }
    pFVar15 = pFVar15 + 0x78;
    uVar11 = (ulonglong)uVar2;
  }
  return __return_storage_ptr__;
}

// FindGraphOperatorEdges @ 14ad51220

TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::DynamicGraph::Debug::FDynamicOperatorDebugger::FindGraphOperatorEdges
          (TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,FDynamicGraphIncrementalSorter *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *pTVar8;
  bool bVar9;
  TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *local_88;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  TMap<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->OperatorMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b8 = &param_1->OperatorMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = *(int *)&(param_1->OperatorMap).field_0x28;
  iStack_b0 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  local_98 = iStack_b0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->OperatorMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar18;
    }
    uVar12 = *puVar17;
    local_98 = 0;
    iStack_b0 = 0;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ad512cf;
      uVar12 = puVar17[lVar11 + 1];
    }
    uStack_ac = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_9c = local_98 + -1 + local_res18;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14ad512cf:
  iStack_90 = *(int *)&(param_1->OperatorMap).field_0x8 - *(int *)&(param_1->OperatorMap).field_0x34
  ;
  uVar12 = *(uint *)&(param_1->OperatorMap).field_0x28;
  uStack_a0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uVar19 = uVar12 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_a8 = (undefined1 *)pTVar18;
  iStack_94 = iStack_9c;
  local_88 = local_b8;
  local_80 = pTVar18;
  local_78 = local_b8;
  TStack_70.Array = pTVar18;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_> *)
              (*pcVar7)();
    return pTVar10;
  }
  uVar4 = *(uint *)&(param_1->OperatorMap).field_0x28;
  if (uVar12 != uVar4) {
    puVar16 = *(undefined1 **)&(param_1->OperatorMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar18;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ad513d0;
      uVar12 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar12 = local_res20 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14ad513d0:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,Metasound::DynamicGraph::FDynamicGraphIncrementalSorter::FIncrementalSortOperatorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) && (TStack_70.Array == pTVar18)) &&
       (pTVar8 == local_88)) break;
    puVar13 = (undefined8 *)((longlong)TStack_70.CurrentBitIndex * 0x38 + *(longlong *)pTVar8);
    puVar15 = (undefined8 *)puVar13[4];
    iVar3 = *(int *)(puVar13 + 5);
    puVar1 = puVar15 + iVar3;
    while( true ) {
      if (*(int *)(puVar13 + 5) != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar15 == puVar1) break;
      local_d8 = *puVar13;
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      uStack_d0 = *puVar15;
      local_c8 = 0;
      uStack_c0 = 0;
      if (((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x20)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<Metasound::DynamicGraph::Debug::FOperatorEdge,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar10;
      }
      iVar14 = __return_storage_ptr__->ArrayNum;
      if (iVar14 == __return_storage_ptr__->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar14 + 1;
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      puVar15 = puVar15 + 1;
      pFVar5 = pFVar6 + (longlong)iVar14 * 0x20;
      *(undefined8 *)pFVar5 = local_d8;
      *(undefined8 *)(pFVar5 + 8) = uStack_d0;
      pFVar6 = pFVar6 + (longlong)iVar14 * 0x20 + 0x10;
      *(undefined8 *)pFVar6 = local_c8;
      *(undefined8 *)(pFVar6 + 8) = uStack_c0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar18 = local_80;
  }
  return __return_storage_ptr__;
}

