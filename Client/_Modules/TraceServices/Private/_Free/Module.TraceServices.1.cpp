// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 118

// `dynamic_initializer_for_'LogAnalysisCache'' @ 1413cbdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnalysisCache__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAnalysisCache,L"LogAnalysisCache",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAnalysisCache__);
  return;
}

// `dynamic_initializer_for_'LogNetTrace'' @ 1413cbe30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNetTrace__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNetTrace,L"LogNetTrace",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNetTrace__);
  return;
}

// `dynamic_initializer_for_'LogTraceServices'' @ 1413cbe70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTraceServices__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTraceServices,L"LogTraceServices",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTraceServices__);
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned_int>,int> @ 14d3c2e30

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned_int>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<double>,int> @ 14d3c2e60

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<double>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>,int> @ 14d3c2e90

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>,int> @ 14d3c2ec0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>,int> @ 14d3c2ef0

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>,int> @ 14d3c2f20

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned___int64>,int> @ 14d3c2f50

void __cdecl
DefaultConstructItems<TraceServices::TPagedArrayPage<unsigned___int64>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<TraceServices::FCpuProfilerAnalyzer::FEventScopeState,int> @ 14d3c2f80

void __cdecl
DefaultConstructItems<TraceServices::FCpuProfilerAnalyzer::FEventScopeState,int>
          (void *param_1,int param_2)

{
  return;
}

// DestructItems<TTuple<unsigned_int,FString>,int> @ 14d3c2fb0

void __cdecl
DestructItems<TTuple<unsigned_int,FString>,int>(TTuple<unsigned_int,FString> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FAnalysisMessage,int> @ 14d3c2ff0

void __cdecl
DestructItems<TraceServices::FAnalysisMessage,int>(FAnalysisMessage *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Message;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FChannelEntry,int> @ 14d3c3030

void __cdecl DestructItems<TraceServices::FChannelEntry,int>(FChannelEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int> @ 14d3c3070

void __cdecl
DestructItems<TraceServices::TTableLayout<TraceServices::FLogMessageInternal>::FColumnDeclaration,int>
          (FColumnDeclaration *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Projector).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-9] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-9]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int> @ 14d3c30d0

void __cdecl
DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
          (FIndexEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TraceServices::TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>,int> @ 14d3c3110

void __cdecl
DestructItems<TraceServices::TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>,int>
          (TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>
           *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FFrame>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 local_res10 [8];
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar4 = &param_1->PagesArray;
    iVar1 = pTVar4->ArrayNum;
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (pTVar4->ArrayNum != iVar1) {
        `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FFrame>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      pFVar2 = pFVar2 + 0x10;
    }
    pFVar2 = (pTVar4->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = (TPagedArray<TraceServices::FFrame,TraceServices::TPagedArrayPage<TraceServices::FFrame>_>
               *)(pTVar4 + 3);
  }
  return;
}

// DestructItems<TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>,int> @ 14d3c31b0

void __cdecl
DestructItems<TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>,int>
          (TSharedPtr<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> *param_1,
          int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<TraceServices::FBookmarkInternal,1>,int> @ 14d3c31f0

void __cdecl
DestructItems<TSharedRef<TraceServices::FBookmarkInternal,1>,int>
          (TSharedRef<TraceServices::FBookmarkInternal,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TraceServices::FRegionLane,int> @ 14d3c3230

void __cdecl DestructItems<TraceServices::FRegionLane,int>(FRegionLane *param_1,int param_2)

{
  int iVar1;
  TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Regions;
    do {
      pTVar5 = &pTVar2->PagesArray;
      iVar1 = pTVar5->ArrayNum;
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (pTVar5->ArrayNum != iVar1) {
          `TCheckedPointerIterator<TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar3 == pFVar4) break;
        pFVar3 = pFVar3 + 0x10;
      }
      pFVar3 = (pTVar5->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pTVar2 = (TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
                *)(pTVar5 + 3);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>_&,`TraceServices::FAnalysisCache::FFileContents::GetId'::__l2::<lambda_1>_> @ 14d3c8250

FIndexEntry * __cdecl
AlgoImpl::
FindByPredicate<TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>_&,_TraceServices::FAnalysisCache::FFileContents::GetId_::__l2::<lambda_1>_>
          (TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FIndexEntry *pFVar4;
  FIndexEntry *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar4 = (FIndexEntry *)(param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      return (FIndexEntry *)0x0;
    }
    ::FString::FString(&local_38,param_2.Name);
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
    iVar3 = (pFVar4->Name).Data.ArrayNum;
    if (iVar3 == local_38.Data.ArrayNum) {
      if (iVar3 < 2) {
        bVar6 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)local_38.Data.AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
    }
    else {
      bVar6 = iVar3 + local_38.Data.ArrayNum == 1;
    }
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (bVar6) break;
    pFVar4 = pFVar4 + 1;
  }
  return pFVar4;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<`TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd'::__l2::<lambda_1>_>_>_>_> @ 14d3c8e30

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar15 = iVar9;
  iVar10 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14d3c8f3d:
      if (iVar10 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
            pTVar14->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) = uVar2;
            iVar15 = 0;
            if (1 < iVar9) {
              do {
                iVar8 = iVar15 * 2;
                iVar10 = iVar8 + 1;
                if (iVar8 + 2 < iVar9) {
                  if (*(uint *)((longlong)param_1 + (longlong)iVar10 * 0x18 + 0xc) <
                      *(uint *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 0x3c)) {
                    iVar10 = iVar8;
                  }
                  iVar10 = iVar10 + 1;
                }
                lVar12 = (longlong)iVar15;
                pTVar1 = param_1 + iVar10;
                if (*(uint *)((longlong)param_1 + lVar12 * 0x18 + 0xc) <=
                    *(uint *)((pTVar1->ElementData).Pad + 0xc)) break;
                uVar4 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10);
                TVar5 = param_1[lVar12]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8);
                param_1[lVar12]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar12].ElementData.Pad + 8) = uVar4;
                *(undefined8 *)((longlong)param_1 + lVar12 * 0x18 + 0x10) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                pTVar1->_s_1 = TVar5;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar2;
                iVar15 = iVar10;
              } while (iVar10 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar10 + -1;
      iVar9 = iVar15 + -2;
      iVar15 = iVar9;
      iVar10 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar13 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (*(uint *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 0xc) <
          *(uint *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x3c)) {
        iVar13 = iVar9;
      }
      iVar13 = iVar13 + 1;
    }
    lVar11 = (longlong)iVar8;
    pTVar14 = param_1 + iVar13;
    if (*(uint *)((longlong)param_1 + lVar11 * 0x18 + 0xc) <=
        *(uint *)((pTVar14->ElementData).Pad + 0xc)) goto LAB_14d3c8f3d;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar9 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10);
    TVar5 = param_1[lVar11]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8);
    param_1[lVar11]._s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)param_1[lVar11].ElementData.Pad + 8) = uVar4;
    *(undefined8 *)((longlong)param_1 + lVar11 * 0x18 + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    pTVar14->_s_1 = TVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// HeapSortInternal<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'[::E]::<lambda_2>_>_> @ 14d3c9050

void __cdecl
AlgoImpl::
HeapSortInternal<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_[::E]::<lambda_2>_>_>
          (FAllocInHeap *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap(unsigned_int,double,unsigned_int,unsigned___int64,unsigned_int)_::_123_::FAllocInHeap,_public:_void___cdecl_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap(unsigned_int,double,unsigned_int,unsigned___int64,unsigned_int)_[::E]::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  FAllocInHeap *pFVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar10 = iVar7;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14d3c9143:
      if (iVar11 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar12 = param_1 + lVar9;
          do {
            uVar2 = pFVar12->Size;
            iVar10 = 0;
            uVar3 = param_1->Address;
            uVar4 = param_1->Size;
            param_1->Address = pFVar12->Address;
            param_1->Size = uVar2;
            pFVar12->Address = uVar3;
            pFVar12->Size = uVar4;
            if (1 < iVar7) {
              do {
                iVar11 = iVar10 * 2;
                iVar6 = iVar11 + 1;
                if (iVar11 + 2 < iVar7) {
                  if (param_1[iVar6].Size < param_1[(longlong)iVar11 + 2].Size) {
                    iVar6 = iVar11;
                  }
                  iVar6 = iVar6 + 1;
                }
                if (param_1[iVar10].Size <= param_1[iVar6].Size) break;
                uVar2 = param_1[iVar6].Size;
                uVar3 = param_1[iVar10].Address;
                uVar4 = param_1[iVar10].Size;
                param_1[iVar10].Address = param_1[iVar6].Address;
                param_1[iVar10].Size = uVar2;
                param_1[iVar6].Address = uVar3;
                param_1[iVar6].Size = uVar4;
                iVar10 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pFVar12 = pFVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar7 = iVar10 + -2;
      iVar10 = iVar7;
      iVar11 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[iVar8].Size < param_1[(longlong)iVar7 + 2].Size) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    if (param_1[iVar6].Size <= param_1[iVar8].Size) goto LAB_14d3c9143;
    uVar2 = param_1[iVar8].Size;
    iVar7 = iVar8 * 2 + 1;
    uVar3 = param_1[iVar6].Address;
    uVar4 = param_1[iVar6].Size;
    param_1[iVar6].Address = param_1[iVar8].Address;
    param_1[iVar6].Size = uVar2;
    param_1[iVar8].Address = uVar3;
    param_1[iVar8].Size = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,`TraceServices::FAnalysisCache::FFileContents::UpdateBlock'::__l34::<lambda_2>,TLess<void>_> @ 14d3c9220

void __cdecl
AlgoImpl::
HeapSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,_TraceServices::FAnalysisCache::FFileContents::UpdateBlock_::__l34::<lambda_2>,TLess<void>_>
          (FBlockEntry *param_1,int param_2,<lambda_2> param_3,TLess<void> param_4)

{
  FBlockEntry *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FBlockEntry *pFVar19;
  int iVar20;
  int iVar21;
  FBlockEntry *pFVar22;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar16 = iVar15 * 2 + 1;
  iVar20 = iVar16;
  iVar21 = iVar15;
  do {
    while (param_2 <= iVar16) {
LAB_14d3c9358:
      if (iVar21 == 0) {
        iVar16 = param_2 + -1;
        lVar18 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar22 = param_1 + lVar18;
          do {
            uVar11 = pFVar22->Flags;
            uVar4 = pFVar22->Offset;
            iVar20 = 0;
            uVar2 = *(undefined8 *)((param_1->Hash).Hash + 0x10);
            uVar12 = param_1->BlockKey;
            uVar13 = param_1->Flags;
            uVar5 = param_1->Offset;
            uVar6 = param_1->CompressedSize;
            uVar7 = param_1->UncompressedSize;
            uVar8 = *(undefined8 *)(param_1->Hash).Hash;
            uVar9 = *(undefined8 *)((param_1->Hash).Hash + 8);
            param_1->BlockKey = pFVar22->BlockKey;
            param_1->Flags = uVar11;
            param_1->Offset = uVar4;
            uVar4 = pFVar22->UncompressedSize;
            param_1->CompressedSize = pFVar22->CompressedSize;
            param_1->UncompressedSize = uVar4;
            uVar10 = *(undefined8 *)((pFVar22->Hash).Hash + 8);
            *(undefined8 *)(param_1->Hash).Hash = *(undefined8 *)(pFVar22->Hash).Hash;
            *(undefined8 *)((param_1->Hash).Hash + 8) = uVar10;
            *(undefined8 *)((param_1->Hash).Hash + 0x10) =
                 *(undefined8 *)((pFVar22->Hash).Hash + 0x10);
            pFVar22->BlockKey = uVar12;
            pFVar22->Flags = uVar13;
            pFVar22->Offset = uVar5;
            pFVar22->CompressedSize = uVar6;
            pFVar22->UncompressedSize = uVar7;
            *(undefined8 *)(pFVar22->Hash).Hash = uVar8;
            *(undefined8 *)((pFVar22->Hash).Hash + 8) = uVar9;
            *(undefined8 *)((pFVar22->Hash).Hash + 0x10) = uVar2;
            if (1 < iVar16) {
              do {
                iVar21 = iVar20 * 2;
                iVar15 = iVar21 + 1;
                if (iVar21 + 2 < iVar16) {
                  if (param_1[(longlong)iVar21 + 2].BlockKey < param_1[iVar15].BlockKey) {
                    iVar15 = iVar21;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar19 = param_1 + iVar15;
                if (pFVar19->BlockKey <= param_1[iVar20].BlockKey) break;
                uVar11 = pFVar19->Flags;
                uVar4 = pFVar19->Offset;
                uVar2 = *(undefined8 *)(param_1[iVar20].Hash.Hash + 0x10);
                pFVar1 = param_1 + iVar20;
                uVar12 = pFVar1->BlockKey;
                uVar13 = pFVar1->Flags;
                uVar5 = pFVar1->Offset;
                uVar6 = param_1[iVar20].CompressedSize;
                uVar7 = (&param_1[iVar20].CompressedSize)[1];
                uVar8 = *(undefined8 *)param_1[iVar20].Hash.Hash;
                uVar9 = *(undefined8 *)(param_1[iVar20].Hash.Hash + 8);
                pFVar1 = param_1 + iVar20;
                pFVar1->BlockKey = pFVar19->BlockKey;
                pFVar1->Flags = uVar11;
                pFVar1->Offset = uVar4;
                uVar4 = pFVar19->UncompressedSize;
                param_1[iVar20].CompressedSize = pFVar19->CompressedSize;
                (&param_1[iVar20].CompressedSize)[1] = uVar4;
                uVar10 = *(undefined8 *)((pFVar19->Hash).Hash + 8);
                *(undefined8 *)param_1[iVar20].Hash.Hash = *(undefined8 *)(pFVar19->Hash).Hash;
                *(undefined8 *)(param_1[iVar20].Hash.Hash + 8) = uVar10;
                *(undefined8 *)(param_1[iVar20].Hash.Hash + 0x10) =
                     *(undefined8 *)((pFVar19->Hash).Hash + 0x10);
                pFVar19->BlockKey = uVar12;
                pFVar19->Flags = uVar13;
                pFVar19->Offset = uVar5;
                pFVar19->CompressedSize = uVar6;
                pFVar19->UncompressedSize = uVar7;
                *(undefined8 *)(pFVar19->Hash).Hash = uVar8;
                *(undefined8 *)((pFVar19->Hash).Hash + 8) = uVar9;
                *(undefined8 *)((pFVar19->Hash).Hash + 0x10) = uVar2;
                iVar20 = iVar15;
              } while (iVar15 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar18 = lVar18 + -1;
            pFVar22 = pFVar22 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar15 = iVar21 + -1;
      iVar16 = iVar20 + -2;
      iVar20 = iVar16;
      iVar21 = iVar15;
    }
    iVar16 = iVar15 * 2;
    iVar17 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      if (param_1[(longlong)iVar16 + 2].BlockKey < param_1[iVar17].BlockKey) {
        iVar17 = iVar16;
      }
      iVar17 = iVar17 + 1;
    }
    pFVar22 = param_1 + iVar17;
    if (pFVar22->BlockKey <= param_1[iVar15].BlockKey) goto LAB_14d3c9358;
    uVar11 = pFVar22->Flags;
    uVar4 = pFVar22->Offset;
    iVar16 = iVar17 * 2 + 1;
    uVar2 = *(undefined8 *)(param_1[iVar15].Hash.Hash + 0x10);
    pFVar19 = param_1 + iVar15;
    uVar12 = pFVar19->BlockKey;
    uVar13 = pFVar19->Flags;
    uVar5 = pFVar19->Offset;
    uVar6 = param_1[iVar15].CompressedSize;
    uVar7 = (&param_1[iVar15].CompressedSize)[1];
    uVar8 = *(undefined8 *)param_1[iVar15].Hash.Hash;
    uVar9 = *(undefined8 *)(param_1[iVar15].Hash.Hash + 8);
    pFVar19 = param_1 + iVar15;
    pFVar19->BlockKey = pFVar22->BlockKey;
    pFVar19->Flags = uVar11;
    pFVar19->Offset = uVar4;
    uVar4 = pFVar22->UncompressedSize;
    param_1[iVar15].CompressedSize = pFVar22->CompressedSize;
    (&param_1[iVar15].CompressedSize)[1] = uVar4;
    uVar10 = *(undefined8 *)((pFVar22->Hash).Hash + 8);
    *(undefined8 *)param_1[iVar15].Hash.Hash = *(undefined8 *)(pFVar22->Hash).Hash;
    *(undefined8 *)(param_1[iVar15].Hash.Hash + 8) = uVar10;
    *(undefined8 *)(param_1[iVar15].Hash.Hash + 0x10) = *(undefined8 *)((pFVar22->Hash).Hash + 0x10)
    ;
    pFVar22->BlockKey = uVar12;
    pFVar22->Flags = uVar13;
    pFVar22->Offset = uVar5;
    pFVar22->CompressedSize = uVar6;
    pFVar22->UncompressedSize = uVar7;
    *(undefined8 *)(pFVar22->Hash).Hash = uVar8;
    *(undefined8 *)((pFVar22->Hash).Hash + 8) = uVar9;
    *(undefined8 *)((pFVar22->Hash).Hash + 0x10) = uVar2;
    iVar15 = iVar17;
  } while( true );
}

// IntCastChecked<unsigned_char,unsigned___int64> @ 14d3c94b0

uchar __cdecl IntCastChecked<unsigned_char,unsigned___int64>(ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if (param_1 != (param_1 & 0xff)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uchar)param_1;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<`TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd'::__l2::<lambda_1>_>_>_>_> @ 14d3c9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_14d3c95d0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_14d3c9620:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x00014d3c9629;
          goto LAB_14d3c9633;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(uint *)((pTVar1->ElementData).Pad + 0xc) <
                *(uint *)((pTVar13->ElementData).Pad + 0xc)) {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_14d3c9755;
      }
LAB_14d3c9746:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_14d3c9755:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x00014d3c9629:
  if (*(uint *)((pTVar12->ElementData).Pad + 0xc) <= *(uint *)((longlong)pTVar9 + 0x24))
  goto LAB_14d3c9620;
LAB_14d3c9633:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(uint *)((longlong)pTVar11 + -0xc) <= *(uint *)((pTVar12->ElementData).Pad + 0xc));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_14d3c9620;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_14d3c9755;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_14d3c9755;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_14d3c9746;
  goto LAB_14d3c95d0;
}

// IntroSortInternal<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'::__l123::FAllocInHeap,`TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap'[::E]::<lambda_2>_>_> @ 14d3c9810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_[::E]::<lambda_2>_>_>
          (FAllocInHeap *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap(unsigned_int,double,unsigned_int,unsigned___int64,unsigned_int)_::_123_::FAllocInHeap,_public:_void___cdecl_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap(unsigned_int,double,unsigned_int,unsigned___int64,unsigned_int)_[::E]::<lambda_2>_>
          param_4)

{
  FAllocInHeap *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  int iVar5;
  FAllocInHeap *pFVar6;
  FAllocInHeap **ppFVar7;
  FAllocInHeap *pFVar8;
  FAllocInHeap *pFVar9;
  FAllocInHeap *pFVar10;
  FAllocInHeap *pFVar11;
  FAllocInHeap *pFVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  FAllocInHeap *local_338;
  FAllocInHeap *local_328;
  FAllocInHeap *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppFVar7 = &local_328;
    do {
      pFVar10 = ppFVar7[1];
      pFVar12 = *ppFVar7;
      pFVar1 = ppFVar7[2];
      iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar11 = pFVar12;
      if ((int)local_338 != 0) {
LAB_14d3c98c0:
        if (8 < iVar5) {
          uVar2 = pFVar11->Size;
          pFVar8 = pFVar10 + 1;
          uVar3 = pFVar11[iVar5 / 2].Address;
          uVar4 = pFVar11[iVar5 / 2].Size;
          pFVar11[iVar5 / 2].Address = pFVar11->Address;
          pFVar11[iVar5 / 2].Size = uVar2;
          pFVar11->Address = uVar3;
          pFVar11->Size = uVar4;
          pFVar12 = pFVar11;
LAB_14d3c98f0:
          pFVar6 = pFVar12;
          pFVar12 = pFVar6 + 1;
          if (pFVar12 <= pFVar10) goto code_r0x00014d3c98f9;
          goto LAB_14d3c9903;
        }
        for (; pFVar1 = pFVar11, pFVar12 = pFVar11, pFVar11 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar8 = pFVar12 + 1, pFVar8 <= pFVar10) {
            pFVar6 = pFVar12 + 1;
            pFVar12 = pFVar8;
            if (pFVar6->Size < pFVar1->Size) {
              pFVar1 = pFVar8;
            }
          }
          uVar2 = pFVar1->Address;
          uVar3 = pFVar1->Size;
          uVar4 = pFVar10->Size;
          pFVar1->Address = pFVar10->Address;
          pFVar1->Size = uVar4;
          pFVar10->Address = uVar2;
          pFVar10->Size = uVar3;
        }
        goto LAB_14d3c99c4;
      }
LAB_14d3c99b3:
      local_338 = pFVar1;
      HeapSortInternal<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,int,FIdentityFunctor,TDereferenceWrapper<_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_::__l123::FAllocInHeap,_TraceServices::FAllocationsProvider::EditUnmarkAllocationAsHeap_[::E]::<lambda_2>_>_>
                (pFVar12,iVar5,param_3,param_4);
LAB_14d3c99c4:
      ppFVar7 = ppFVar7 + -3;
    } while (&local_328 <= ppFVar7);
  }
  return;
code_r0x00014d3c98f9:
  if (pFVar11->Size <= pFVar6[1].Size) goto LAB_14d3c98f0;
LAB_14d3c9903:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar11) break;
  } while (pFVar9[-1].Size <= pFVar11->Size);
  uVar2 = pFVar9[-1].Size;
  if (pFVar12 <= pFVar8) {
    uVar3 = pFVar12->Address;
    uVar4 = pFVar6[1].Size;
    pFVar12->Address = pFVar8->Address;
    pFVar6[1].Size = uVar2;
    pFVar8->Address = uVar3;
    pFVar9[-1].Size = uVar4;
    goto LAB_14d3c98f0;
  }
  uVar3 = pFVar11->Address;
  uVar4 = pFVar11->Size;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar11->Address = pFVar8->Address;
  pFVar11->Size = uVar2;
  pFVar8->Address = uVar3;
  pFVar9[-1].Size = uVar4;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar10 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < pFVar10) {
      *ppFVar7 = pFVar12;
      ppFVar7[1] = pFVar10;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar8 <= pFVar11 + 1) goto LAB_14d3c99c4;
    pFVar10 = pFVar9 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar8) {
      *ppFVar7 = pFVar11;
      ppFVar7[1] = pFVar9 + -2;
      *(int *)(ppFVar7 + 2) = (int)local_338;
      ppFVar7 = ppFVar7 + 3;
    }
    if (pFVar10 <= pFVar12) goto LAB_14d3c99c4;
  }
  iVar5 = (int)((longlong)pFVar10 - (longlong)pFVar12 >> 4) + 1;
  pFVar11 = pFVar12;
  if ((int)local_338 == 0) goto LAB_14d3c99b3;
  goto LAB_14d3c98c0;
}

// IntroSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,`TraceServices::FAnalysisCache::FFileContents::UpdateBlock'::__l34::<lambda_2>,TLess<void>_> @ 14d3c9a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,_TraceServices::FAnalysisCache::FFileContents::UpdateBlock_::__l34::<lambda_2>,TLess<void>_>
          (FBlockEntry *param_1,int param_2,<lambda_2> param_3,TLess<void> param_4)

{
  FBlockEntry *pFVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FBlockEntry *pFVar16;
  FBlockEntry *pFVar17;
  FBlockEntry *pFVar18;
  FBlockEntry *pFVar19;
  FBlockEntry *pFVar20;
  FBlockEntry *pFVar21;
  FBlockEntry **ppFVar22;
  float fVar23;
  undefined1 auStack_378 [48];
  FBlockEntry *local_348;
  FBlockEntry *local_338;
  FBlockEntry *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar23;
    memset(local_320,0,0x2e8);
    ppFVar22 = &local_338;
    do {
      pFVar16 = ppFVar22[1];
      pFVar21 = *ppFVar22;
      pFVar1 = ppFVar22[2];
      local_348._0_4_ = (int)pFVar1;
      iVar15 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x38) + 1;
      pFVar20 = pFVar21;
      if ((int)local_348 != 0) {
LAB_14d3c9b20:
        if (8 < iVar15) {
          uVar12 = pFVar20->Flags;
          uVar3 = pFVar20->Offset;
          pFVar18 = pFVar16 + 1;
          pFVar21 = pFVar20 + iVar15 / 2;
          uVar13 = pFVar21->BlockKey;
          uVar14 = pFVar21->Flags;
          uVar4 = pFVar21->Offset;
          uVar5 = pFVar21->CompressedSize;
          uVar6 = pFVar21->UncompressedSize;
          uVar7 = *(undefined8 *)(pFVar21->Hash).Hash;
          uVar8 = *(undefined8 *)((pFVar21->Hash).Hash + 8);
          uVar2 = *(undefined8 *)((pFVar21->Hash).Hash + 0x10);
          pFVar21->BlockKey = pFVar20->BlockKey;
          pFVar21->Flags = uVar12;
          pFVar21->Offset = uVar3;
          uVar3 = pFVar20->UncompressedSize;
          pFVar21->CompressedSize = pFVar20->CompressedSize;
          pFVar21->UncompressedSize = uVar3;
          uVar9 = *(undefined8 *)((pFVar20->Hash).Hash + 8);
          *(undefined8 *)(pFVar21->Hash).Hash = *(undefined8 *)(pFVar20->Hash).Hash;
          *(undefined8 *)((pFVar21->Hash).Hash + 8) = uVar9;
          *(undefined8 *)((pFVar21->Hash).Hash + 0x10) =
               *(undefined8 *)((pFVar20->Hash).Hash + 0x10);
          pFVar20->BlockKey = uVar13;
          pFVar20->Flags = uVar14;
          pFVar20->Offset = uVar4;
          pFVar20->CompressedSize = uVar5;
          pFVar20->UncompressedSize = uVar6;
          *(undefined8 *)(pFVar20->Hash).Hash = uVar7;
          *(undefined8 *)((pFVar20->Hash).Hash + 8) = uVar8;
          *(undefined8 *)((pFVar20->Hash).Hash + 0x10) = uVar2;
          pFVar21 = pFVar20;
LAB_14d3c9b90:
          pFVar17 = pFVar21;
          pFVar21 = pFVar17 + 1;
          if (pFVar21 <= pFVar16) goto code_r0x00014d3c9b99;
          goto LAB_14d3c9ba1;
        }
        for (; pFVar21 = pFVar20, pFVar1 = pFVar20, pFVar20 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            if (pFVar21->BlockKey < pFVar1->BlockKey) {
              pFVar21 = pFVar1;
            }
          }
          uVar13 = pFVar21->BlockKey;
          uVar14 = pFVar21->Flags;
          uVar3 = pFVar21->Offset;
          uVar2 = *(undefined8 *)((pFVar21->Hash).Hash + 0x10);
          uVar4 = pFVar21->CompressedSize;
          uVar5 = pFVar21->UncompressedSize;
          uVar12 = pFVar16->Flags;
          uVar6 = pFVar16->Offset;
          uVar7 = *(undefined8 *)(pFVar21->Hash).Hash;
          uVar8 = *(undefined8 *)((pFVar21->Hash).Hash + 8);
          pFVar21->BlockKey = pFVar16->BlockKey;
          pFVar21->Flags = uVar12;
          pFVar21->Offset = uVar6;
          uVar6 = pFVar16->UncompressedSize;
          pFVar21->CompressedSize = pFVar16->CompressedSize;
          pFVar21->UncompressedSize = uVar6;
          uVar9 = *(undefined8 *)((pFVar16->Hash).Hash + 8);
          *(undefined8 *)(pFVar21->Hash).Hash = *(undefined8 *)(pFVar16->Hash).Hash;
          *(undefined8 *)((pFVar21->Hash).Hash + 8) = uVar9;
          *(undefined8 *)((pFVar21->Hash).Hash + 0x10) =
               *(undefined8 *)((pFVar16->Hash).Hash + 0x10);
          pFVar16->BlockKey = uVar13;
          pFVar16->Flags = uVar14;
          pFVar16->Offset = uVar3;
          pFVar16->CompressedSize = uVar4;
          pFVar16->UncompressedSize = uVar5;
          *(undefined8 *)(pFVar16->Hash).Hash = uVar7;
          *(undefined8 *)((pFVar16->Hash).Hash + 8) = uVar8;
          *(undefined8 *)((pFVar16->Hash).Hash + 0x10) = uVar2;
        }
        goto LAB_14d3c9d12;
      }
LAB_14d3c9d02:
      local_348 = pFVar1;
      HeapSortInternal<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,_TraceServices::FAnalysisCache::FFileContents::UpdateBlock_::__l34::<lambda_2>,TLess<void>_>
                (pFVar21,iVar15,param_3,param_4);
LAB_14d3c9d12:
      ppFVar22 = ppFVar22 + -3;
    } while (&local_338 <= ppFVar22);
  }
  return;
code_r0x00014d3c9b99:
  if (pFVar21->BlockKey <= pFVar20->BlockKey) goto LAB_14d3c9b90;
LAB_14d3c9ba1:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar20) break;
  } while (pFVar20->BlockKey <= pFVar18->BlockKey);
  uVar10 = pFVar18->BlockKey;
  uVar11 = pFVar18->Flags;
  uVar3 = pFVar19[-1].Offset;
  if (pFVar21 <= pFVar18) {
    uVar12 = pFVar21->BlockKey;
    uVar13 = pFVar21->Flags;
    uVar4 = pFVar17[1].Offset;
    uVar5 = pFVar17[1].CompressedSize;
    uVar6 = pFVar17[1].UncompressedSize;
    uVar8 = *(undefined8 *)pFVar17[1].Hash.Hash;
    uVar9 = *(undefined8 *)(pFVar17[1].Hash.Hash + 8);
    uVar2 = *(undefined8 *)(pFVar17[1].Hash.Hash + 0x10);
    pFVar21->BlockKey = uVar10;
    pFVar21->Flags = uVar11;
    pFVar17[1].Offset = uVar3;
    uVar3 = pFVar19[-1].UncompressedSize;
    pFVar17[1].CompressedSize = pFVar19[-1].CompressedSize;
    pFVar17[1].UncompressedSize = uVar3;
    uVar7 = *(undefined8 *)(pFVar19[-1].Hash.Hash + 8);
    *(undefined8 *)pFVar17[1].Hash.Hash = *(undefined8 *)pFVar19[-1].Hash.Hash;
    *(undefined8 *)(pFVar17[1].Hash.Hash + 8) = uVar7;
    *(undefined8 *)(pFVar17[1].Hash.Hash + 0x10) = *(undefined8 *)(pFVar19[-1].Hash.Hash + 0x10);
    pFVar18->BlockKey = uVar12;
    pFVar18->Flags = uVar13;
    pFVar19[-1].Offset = uVar4;
    pFVar19[-1].CompressedSize = uVar5;
    pFVar19[-1].UncompressedSize = uVar6;
    *(undefined8 *)pFVar19[-1].Hash.Hash = uVar8;
    *(undefined8 *)(pFVar19[-1].Hash.Hash + 8) = uVar9;
    *(undefined8 *)(pFVar19[-1].Hash.Hash + 0x10) = uVar2;
    goto LAB_14d3c9b90;
  }
  uVar12 = pFVar20->BlockKey;
  uVar13 = pFVar20->Flags;
  uVar4 = pFVar20->Offset;
  uVar5 = pFVar20->CompressedSize;
  uVar6 = pFVar20->UncompressedSize;
  local_348._0_4_ = (int)local_348 + -1;
  uVar7 = *(undefined8 *)(pFVar20->Hash).Hash;
  uVar8 = *(undefined8 *)((pFVar20->Hash).Hash + 8);
  uVar2 = *(undefined8 *)((pFVar20->Hash).Hash + 0x10);
  pFVar20->BlockKey = uVar10;
  pFVar20->Flags = uVar11;
  pFVar20->Offset = uVar3;
  uVar3 = pFVar19[-1].UncompressedSize;
  pFVar20->CompressedSize = pFVar19[-1].CompressedSize;
  pFVar20->UncompressedSize = uVar3;
  uVar9 = *(undefined8 *)(pFVar19[-1].Hash.Hash + 8);
  *(undefined8 *)(pFVar20->Hash).Hash = *(undefined8 *)pFVar19[-1].Hash.Hash;
  *(undefined8 *)((pFVar20->Hash).Hash + 8) = uVar9;
  *(undefined8 *)((pFVar20->Hash).Hash + 0x10) = *(undefined8 *)(pFVar19[-1].Hash.Hash + 0x10);
  pFVar18->BlockKey = uVar12;
  pFVar18->Flags = uVar13;
  pFVar19[-1].Offset = uVar4;
  pFVar19[-1].CompressedSize = uVar5;
  pFVar19[-1].UncompressedSize = uVar6;
  *(undefined8 *)pFVar19[-1].Hash.Hash = uVar7;
  *(undefined8 *)(pFVar19[-1].Hash.Hash + 8) = uVar8;
  *(undefined8 *)(pFVar19[-1].Hash.Hash + 0x10) = uVar2;
  if (((longlong)pFVar18 + (-0x38 - (longlong)pFVar20)) / 0x38 <
      ((longlong)pFVar16 - (longlong)pFVar21) / 0x38) {
    if (pFVar21 < pFVar16) {
      *ppFVar22 = pFVar21;
      ppFVar22[1] = pFVar16;
      *(int *)(ppFVar22 + 2) = (int)local_348;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar18 <= pFVar20 + 1) goto LAB_14d3c9d12;
    pFVar16 = pFVar19 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar18) {
      *ppFVar22 = pFVar20;
      ppFVar22[1] = pFVar19 + -2;
      *(int *)(ppFVar22 + 2) = (int)local_348;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar16 <= pFVar21) goto LAB_14d3c9d12;
  }
  iVar15 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x38) + 1;
  pFVar20 = pFVar21;
  if ((int)local_348 == 0) goto LAB_14d3c9d02;
  goto LAB_14d3c9b20;
}

// MakeShared<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> @ 14d3c9fa0

TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> * __cdecl
MakeShared<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>
          (TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> *pTVar4;
  
  pTVar3 = operator_new(0x48);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FRequestGroupState *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFRequestGroupState_FAsyncLoadingTraceAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    __return_storage_ptr__->Object = (FRequestGroupState *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FRequestGroupState *)(pTVar3 + 1) == (FRequestGroupState *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState> @ 14d3ca280

TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> *
__cdecl SharedPointerInternals::
        NewIntrusiveReferenceController<1,TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState>
                  (void)

{
  TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
  *pTVar1;
  
  pTVar1 = ::operator_new(0x120);
  if (pTVar1 != (TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
                 *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNetTraceGameInstanceState_FNetTraceAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    (pTVar1->ObjectStorage).Pad[0x10] = '\0';
    (pTVar1->ObjectStorage).Pad[0x11] = '\0';
    (pTVar1->ObjectStorage).Pad[0x12] = '\0';
    (pTVar1->ObjectStorage).Pad[0x13] = '\0';
    (pTVar1->ObjectStorage).Pad[0x14] = '\0';
    (pTVar1->ObjectStorage).Pad[0x15] = '\0';
    (pTVar1->ObjectStorage).Pad[0x16] = '\0';
    (pTVar1->ObjectStorage).Pad[0x17] = '\0';
    (pTVar1->ObjectStorage).Pad[0x18] = '\0';
    (pTVar1->ObjectStorage).Pad[0x19] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x1f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x38] = '\0';
    (pTVar1->ObjectStorage).Pad[0x39] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x48] = '\0';
    (pTVar1->ObjectStorage).Pad[0x49] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x4f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x60] = '\0';
    (pTVar1->ObjectStorage).Pad[0x61] = '\0';
    (pTVar1->ObjectStorage).Pad[0x62] = '\0';
    (pTVar1->ObjectStorage).Pad[99] = '\0';
    (pTVar1->ObjectStorage).Pad[100] = '\0';
    (pTVar1->ObjectStorage).Pad[0x65] = '\0';
    (pTVar1->ObjectStorage).Pad[0x66] = '\0';
    (pTVar1->ObjectStorage).Pad[0x67] = '\0';
    (pTVar1->ObjectStorage).Pad[0x68] = '\0';
    (pTVar1->ObjectStorage).Pad[0x69] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x6f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x88] = '\0';
    (pTVar1->ObjectStorage).Pad[0x89] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x8f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x98] = '\0';
    (pTVar1->ObjectStorage).Pad[0x99] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x9f] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb0] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb1] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb2] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb3] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb6] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb7] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb8] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xba] = '\0';
    (pTVar1->ObjectStorage).Pad[0xbb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xbc] = '\0';
    (pTVar1->ObjectStorage).Pad[0xbd] = '\0';
    (pTVar1->ObjectStorage).Pad[0xbe] = '\0';
    (pTVar1->ObjectStorage).Pad[0xbf] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd8] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xda] = '\0';
    (pTVar1->ObjectStorage).Pad[0xdb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xdc] = '\0';
    (pTVar1->ObjectStorage).Pad[0xdd] = '\0';
    (pTVar1->ObjectStorage).Pad[0xde] = '\0';
    (pTVar1->ObjectStorage).Pad[0xdf] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe8] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xea] = '\0';
    (pTVar1->ObjectStorage).Pad[0xeb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xec] = '\0';
    (pTVar1->ObjectStorage).Pad[0xed] = '\0';
    (pTVar1->ObjectStorage).Pad[0xee] = '\0';
    (pTVar1->ObjectStorage).Pad[0xef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x108] = '\0';
    (pTVar1->ObjectStorage).Pad[0x109] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x10f] = '\0';
    (pTVar1->ObjectStorage).Pad[0] = '\0';
    (pTVar1->ObjectStorage).Pad[1] = '\0';
    (pTVar1->ObjectStorage).Pad[2] = '\0';
    (pTVar1->ObjectStorage).Pad[3] = '\0';
    (pTVar1->ObjectStorage).Pad[4] = '\0';
    (pTVar1->ObjectStorage).Pad[5] = '\0';
    (pTVar1->ObjectStorage).Pad[6] = '\0';
    (pTVar1->ObjectStorage).Pad[7] = '\0';
    (pTVar1->ObjectStorage).Pad[8] = '\0';
    (pTVar1->ObjectStorage).Pad[9] = '\0';
    (pTVar1->ObjectStorage).Pad[10] = '\0';
    (pTVar1->ObjectStorage).Pad[0xb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x20] = '\0';
    (pTVar1->ObjectStorage).Pad[0x21] = '\0';
    (pTVar1->ObjectStorage).Pad[0x22] = '\0';
    (pTVar1->ObjectStorage).Pad[0x23] = '\0';
    (pTVar1->ObjectStorage).Pad[0x24] = '\0';
    (pTVar1->ObjectStorage).Pad[0x25] = '\0';
    (pTVar1->ObjectStorage).Pad[0x26] = '\0';
    (pTVar1->ObjectStorage).Pad[0x27] = '\0';
    (pTVar1->ObjectStorage).Pad[0x28] = '\0';
    (pTVar1->ObjectStorage).Pad[0x29] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c] = 0x80;
    (pTVar1->ObjectStorage).Pad[0x2d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x31] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x32] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x33] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x34] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37] = '\0';
    (pTVar1->ObjectStorage).Pad[0x40] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44] = '\0';
    (pTVar1->ObjectStorage).Pad[0x45] = '\0';
    (pTVar1->ObjectStorage).Pad[0x46] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47] = '\0';
    (pTVar1->ObjectStorage).Pad[0x50] = '\0';
    (pTVar1->ObjectStorage).Pad[0x51] = '\0';
    (pTVar1->ObjectStorage).Pad[0x52] = '\0';
    (pTVar1->ObjectStorage).Pad[0x53] = '\0';
    (pTVar1->ObjectStorage).Pad[0x54] = '\0';
    (pTVar1->ObjectStorage).Pad[0x55] = '\0';
    (pTVar1->ObjectStorage).Pad[0x56] = '\0';
    (pTVar1->ObjectStorage).Pad[0x57] = '\0';
    (pTVar1->ObjectStorage).Pad[0x58] = '\0';
    (pTVar1->ObjectStorage).Pad[0x59] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x5f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x70] = '\0';
    (pTVar1->ObjectStorage).Pad[0x71] = '\0';
    (pTVar1->ObjectStorage).Pad[0x72] = '\0';
    (pTVar1->ObjectStorage).Pad[0x73] = '\0';
    (pTVar1->ObjectStorage).Pad[0x74] = '\0';
    (pTVar1->ObjectStorage).Pad[0x75] = '\0';
    (pTVar1->ObjectStorage).Pad[0x76] = '\0';
    (pTVar1->ObjectStorage).Pad[0x77] = '\0';
    (pTVar1->ObjectStorage).Pad[0x78] = '\0';
    (pTVar1->ObjectStorage).Pad[0x79] = '\0';
    (pTVar1->ObjectStorage).Pad[0x7a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x7b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x7c] = 0x80;
    (pTVar1->ObjectStorage).Pad[0x7d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x7e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x7f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x80] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x81] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x82] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x83] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x84] = '\0';
    (pTVar1->ObjectStorage).Pad[0x85] = '\0';
    (pTVar1->ObjectStorage).Pad[0x86] = '\0';
    (pTVar1->ObjectStorage).Pad[0x87] = '\0';
    (pTVar1->ObjectStorage).Pad[0x90] = '\0';
    (pTVar1->ObjectStorage).Pad[0x91] = '\0';
    (pTVar1->ObjectStorage).Pad[0x92] = '\0';
    (pTVar1->ObjectStorage).Pad[0x93] = '\0';
    (pTVar1->ObjectStorage).Pad[0x94] = '\0';
    (pTVar1->ObjectStorage).Pad[0x95] = '\0';
    (pTVar1->ObjectStorage).Pad[0x96] = '\0';
    (pTVar1->ObjectStorage).Pad[0x97] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa0] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa1] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa2] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa3] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa6] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa7] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa8] = '\0';
    (pTVar1->ObjectStorage).Pad[0xa9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xaa] = '\0';
    (pTVar1->ObjectStorage).Pad[0xab] = '\0';
    (pTVar1->ObjectStorage).Pad[0xac] = '\0';
    (pTVar1->ObjectStorage).Pad[0xad] = '\0';
    (pTVar1->ObjectStorage).Pad[0xae] = '\0';
    (pTVar1->ObjectStorage).Pad[0xaf] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc0] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc1] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc2] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc3] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc6] = '\0';
    (pTVar1->ObjectStorage).Pad[199] = '\0';
    (pTVar1->ObjectStorage).Pad[200] = '\0';
    (pTVar1->ObjectStorage).Pad[0xc9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xca] = '\0';
    (pTVar1->ObjectStorage).Pad[0xcb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xcc] = 0x80;
    (pTVar1->ObjectStorage).Pad[0xcd] = '\0';
    (pTVar1->ObjectStorage).Pad[0xce] = '\0';
    (pTVar1->ObjectStorage).Pad[0xcf] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd0] = 0xff;
    (pTVar1->ObjectStorage).Pad[0xd1] = 0xff;
    (pTVar1->ObjectStorage).Pad[0xd2] = 0xff;
    (pTVar1->ObjectStorage).Pad[0xd3] = 0xff;
    (pTVar1->ObjectStorage).Pad[0xd4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd6] = '\0';
    (pTVar1->ObjectStorage).Pad[0xd7] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe0] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe1] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe2] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe3] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe6] = '\0';
    (pTVar1->ObjectStorage).Pad[0xe7] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf0] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf1] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf2] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf3] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf4] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf5] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf6] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf7] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf8] = '\0';
    (pTVar1->ObjectStorage).Pad[0xf9] = '\0';
    (pTVar1->ObjectStorage).Pad[0xfa] = '\0';
    (pTVar1->ObjectStorage).Pad[0xfb] = '\0';
    (pTVar1->ObjectStorage).Pad[0xfc] = '\0';
    (pTVar1->ObjectStorage).Pad[0xfd] = '\0';
    (pTVar1->ObjectStorage).Pad[0xfe] = '\0';
    (pTVar1->ObjectStorage).Pad[0xff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x100] = '\0';
    (pTVar1->ObjectStorage).Pad[0x101] = '\0';
    (pTVar1->ObjectStorage).Pad[0x102] = '\0';
    (pTVar1->ObjectStorage).Pad[0x103] = '\0';
    (pTVar1->ObjectStorage).Pad[0x104] = '\0';
    (pTVar1->ObjectStorage).Pad[0x105] = '\0';
    (pTVar1->ObjectStorage).Pad[0x106] = '\0';
    (pTVar1->ObjectStorage).Pad[0x107] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
          *)0x0;
}

// Reverse<wchar_t_const_*> @ 14d3ca6f0

void __cdecl AlgoImpl::Reverse<wchar_t_const_*>(wchar_t **param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t **ppwVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppwVar2 = param_1 + (param_2 + -1);
    do {
      pwVar1 = param_1[lVar3];
      param_1[lVar3] = *ppwVar2;
      lVar3 = lVar3 + 1;
      *ppwVar2 = pwVar1;
      ppwVar2 = ppwVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// Sort<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<`TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd'::__l2::<lambda_1>_>_> @ 14d3ca750

void __thiscall
TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>
          (TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FCpuProfilerAnalyzer::FTimerInfo,0>_>::FValueComparisonClass<_public:_virtual_void___cdecl_TraceServices::FCpuProfilerAnalyzer::OnAnalysisEnd(void)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// UpperBoundInternal<double,int,double,FIdentityFunctor,TLess<void>_> @ 14d3ca7e0

int __cdecl
AlgoImpl::UpperBoundInternal<double,int,double,FIdentityFunctor,TLess<void>_>
          (double *param_1,int param_2,double *param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = iVar1 + (param_2 & 1U);
      if (*param_3 < param_1[iVar1]) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// WriteData<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_> @ 14d3ca830

void __cdecl
TraceServices::
WriteData<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
          (TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *param_1,
          FEventData *param_2,ushort param_3,FMetadataProvider *param_4,IAnalysisSession *param_5)

{
  FField *pFVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  byte bVar6;
  uint uVar7;
  EType EVar8;
  int iVar9;
  FEventTypeInfo *this;
  longlong *plVar10;
  FEventFieldInfo *this_00;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  char *pcVar15;
  void *pvVar16;
  byte bVar17;
  ForElementType<unsigned_char> FVar18;
  uint uVar19;
  uint local_res20 [2];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  FEventFieldHandle local_ac;
  FString local_a8;
  undefined4 local_98;
  uint uStack_94;
  undefined2 local_90;
  undefined2 uStack_8e;
  uint uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  FWriter local_80;
  TStringView<wchar_t> local_70;
  undefined8 local_60;
  uint uStack_58;
  undefined4 uStack_54;
  FScriptContainerElement *local_50;
  int local_48;
  
  this = UE::Trace::IAnalyzer::FEventData::GetTypeInfo(param_2);
  plVar10 = (longlong *)(**(code **)(param_4->_padding_ + 0x30))(param_4,param_3);
  if ((plVar10 == (longlong *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Schema",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                         ,0xe5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_80.FieldCount = (uchar)plVar10[1];
  pFVar1 = (FField *)*plVar10;
  uVar19 = 0;
  local_80.Offset = '\0';
  local_80.Buffer = pFVar1;
  uVar7 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(this);
  if (uVar7 != 0) {
    do {
      this_00 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldInfo(this,uVar19);
      EVar8 = UE::Trace::IAnalyzer::FEventFieldInfo::GetType(this_00);
      switch(EVar8) {
      case AnsiString:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        pcVar15 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_00);
        UE::Trace::IAnalyzer::FEventData::GetString(param_2,pcVar15,&local_a8);
        local_50 = local_a8.Data.AllocatorInstance.Data;
        local_48 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          local_48 = 0;
        }
        pvVar16 = (void *)(**(code **)((longlong)*param_5 + 200))(param_5,&local_50);
        FMetadataSchema::FWriter::
        WriteField<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_80,(uchar)uVar19,pvVar16,'\b',param_1);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        break;
      case WideString:
        local_70.DataPtr = (wchar_t *)0x0;
        local_70.Size = 0;
        pcVar15 = UE::Trace::IAnalyzer::FEventFieldInfo::GetName(this_00);
        UE::Trace::IAnalyzer::FEventData::GetString(param_2,pcVar15,&local_70);
        pvVar16 = (void *)(**(code **)((longlong)*param_5 + 200))(param_5,&local_70);
        FMetadataSchema::FWriter::
        WriteField<TArray<unsigned_char,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>_>
                  (&local_80,(uchar)uVar19,pvVar16,'\b',param_1);
        break;
      case Reference8:
      case Reference16:
      case Reference32:
      case Reference64:
        uVar5 = UE::Trace::IAnalyzer::FEventFieldInfo::GetSize(this_00);
        if (uVar5 == '\x01') {
          puVar14 = UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl
                              (param_2,uVar19,&local_b0);
          uStack_84 = local_b0;
          local_88 = CONCAT31(local_88._1_3_,*puVar14);
          bVar17 = pFVar1[uVar19 & 0xff].Offset;
          if (param_1->ArrayNum < (int)(bVar17 + 8)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                              (1,1,8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            FVar2 = (param_1->AllocatorInstance).SecondaryData;
            FVar18 = (ForElementType<unsigned_char>)param_1;
            if (FVar2 != (ForElementType<unsigned_char>)0x0) {
              FVar18 = FVar2;
            }
            *(undefined8 *)((longlong)iVar9 + (longlong)FVar18) = 0;
            bVar17 = pFVar1[uVar19 & 0xff].Offset;
          }
          FVar2 = (param_1->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<unsigned_char>)param_1;
          if (FVar2 != (ForElementType<unsigned_char>)0x0) {
            FVar18 = FVar2;
          }
          *(ulonglong *)((ulonglong)bVar17 + (longlong)FVar18) = CONCAT44(uStack_84,local_88);
        }
        else if (uVar5 == '\x02') {
          puVar13 = UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl
                              (param_2,uVar19,&local_b4);
          local_90 = *puVar13;
          uStack_8c = local_b4;
          bVar17 = pFVar1[uVar19 & 0xff].Offset;
          if (param_1->ArrayNum < (int)(bVar17 + 8)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                              (1,1,8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            FVar2 = (param_1->AllocatorInstance).SecondaryData;
            FVar18 = (ForElementType<unsigned_char>)param_1;
            if (FVar2 != (ForElementType<unsigned_char>)0x0) {
              FVar18 = FVar2;
            }
            *(undefined8 *)((longlong)iVar9 + (longlong)FVar18) = 0;
            bVar17 = pFVar1[uVar19 & 0xff].Offset;
          }
          FVar2 = (param_1->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<unsigned_char>)param_1;
          if (FVar2 != (ForElementType<unsigned_char>)0x0) {
            FVar18 = FVar2;
          }
          *(ulonglong *)((ulonglong)bVar17 + (longlong)FVar18) =
               CONCAT44(uStack_8c,CONCAT22(uStack_8e,local_90));
        }
        else if (uVar5 == '\x04') {
          puVar12 = UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl
                              (param_2,uVar19,&local_b8);
          local_98 = *puVar12;
          uStack_94 = local_b8;
          bVar17 = pFVar1[uVar19 & 0xff].Offset;
          if (param_1->ArrayNum < (int)(bVar17 + 8)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                              (1,1,8,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            FVar2 = (param_1->AllocatorInstance).SecondaryData;
            FVar18 = (ForElementType<unsigned_char>)param_1;
            if (FVar2 != (ForElementType<unsigned_char>)0x0) {
              FVar18 = FVar2;
            }
            *(undefined8 *)((longlong)iVar9 + (longlong)FVar18) = 0;
            bVar17 = pFVar1[uVar19 & 0xff].Offset;
          }
          FVar2 = (param_1->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<unsigned_char>)param_1;
          if (FVar2 != (ForElementType<unsigned_char>)0x0) {
            FVar18 = FVar2;
          }
          *(ulonglong *)((ulonglong)bVar17 + (longlong)FVar18) = CONCAT44(uStack_94,local_98);
        }
        else if (uVar5 == '\b') {
          puVar11 = UE::Trace::IAnalyzer::FEventData::GetReferenceValueImpl
                              (param_2,uVar19,local_res20);
          local_60 = *puVar11;
          uStack_58 = local_res20[0];
          bVar17 = pFVar1[uVar19 & 0xff].Offset;
          if (param_1->ArrayNum < (int)(bVar17 + 0x10)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                              (1,1,0x10,&param_1->AllocatorInstance,&param_1->ArrayNum,
                               &param_1->ArrayMax);
            FVar2 = (param_1->AllocatorInstance).SecondaryData;
            FVar18 = (ForElementType<unsigned_char>)param_1;
            if (FVar2 != (ForElementType<unsigned_char>)0x0) {
              FVar18 = FVar2;
            }
            *(undefined8 *)((longlong)iVar9 + (longlong)FVar18) = 0;
            ((undefined8 *)((longlong)iVar9 + (longlong)FVar18))[1] = 0;
            bVar17 = pFVar1[uVar19 & 0xff].Offset;
          }
          FVar2 = (param_1->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<unsigned_char>)param_1;
          if (FVar2 != (ForElementType<unsigned_char>)0x0) {
            FVar18 = FVar2;
          }
          *(undefined8 *)((ulonglong)bVar17 + (longlong)FVar18) = local_60;
          ((undefined8 *)((ulonglong)bVar17 + (longlong)FVar18))[1] = CONCAT44(uStack_54,uStack_58);
        }
        else {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\MetadataAnalysis.cpp"
                             ,0x10d,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        break;
      default:
        UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldHandleUnchecked(this,(uint)&local_ac);
        pvVar16 = UE::Trace::IAnalyzer::FEventData::GetValueRaw(param_2,local_ac);
        bVar6 = UE::Trace::IAnalyzer::FEventFieldInfo::GetSize(this_00);
        bVar17 = pFVar1[uVar19 & 0xff].Offset;
        if (param_1->ArrayNum < (int)((uint)bVar6 + (uint)bVar17)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                            (1,1,(uint)bVar6,&param_1->AllocatorInstance,&param_1->ArrayNum,
                             &param_1->ArrayMax);
          FVar2 = (param_1->AllocatorInstance).SecondaryData;
          FVar18 = (ForElementType<unsigned_char>)param_1;
          if (FVar2 != (ForElementType<unsigned_char>)0x0) {
            FVar18 = FVar2;
          }
          memset((void *)((longlong)iVar9 + (longlong)FVar18),0,(longlong)(int)(uint)bVar6);
          bVar17 = pFVar1[uVar19 & 0xff].Offset;
        }
        FVar2 = (param_1->AllocatorInstance).SecondaryData;
        FVar18 = (ForElementType<unsigned_char>)param_1;
        if (FVar2 != (ForElementType<unsigned_char>)0x0) {
          FVar18 = FVar2;
        }
        memcpy((void *)((ulonglong)bVar17 + (longlong)FVar18),pvVar16,(ulonglong)bVar6);
      }
      uVar19 = uVar19 + 1;
      uVar7 = UE::Trace::IAnalyzer::FEventTypeInfo::GetFieldCount(this);
    } while (uVar19 < uVar7);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d3d1af4

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FAllocationsProvider::`vector
   deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FAllocationsProvider::_vector_deleting_destructor__adjustor_8__
          (FAllocationsProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FAllocationsProvider *)(this[-1].ValueTimelinesU32 + 6),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d3d1b04

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FBookmarkProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FBookmarkProvider::_vector_deleting_destructor__adjustor_8__
          (FBookmarkProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FBookmarkProvider *)(this[-1].TempBuffer + 0xfffc),param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d3d1b14

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FLogProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FLogProvider::_vector_deleting_destructor__adjustor_8__
          (FLogProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FLogProvider *)&this[-1].NumInserts,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d3d1b24

/* [thunk]:public: virtual void * __ptr64 __cdecl TraceServices::FRegionProvider::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
TraceServices::FRegionProvider::_vector_deleting_destructor__adjustor_8__
          (FRegionProvider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FRegionProvider *)&this[-1].NumWarnings,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d3d1b40

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1b70

void * __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1ba0

void * __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::CreateBlocks'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1be0

void * __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::GetBlocks'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1c20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1c50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(void_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FString_(__cdecl*)(void_const_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_AVFString__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1c90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1cd0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1d10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FAsyncLoadingTraceAnalyzer::FRequestGroupState,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1d50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TraceServices::FMiscTraceAnalyzer::FThreadState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FMiscTraceAnalyzer::FThreadState,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1d90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FStatsAnalyzer::FThreadState,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FStatsAnalyzer::FThreadState,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1dd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FAnalysisSession,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FAnalysisSession,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1e10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarkProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FBookmarkProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40088);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1e50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FBookmarksAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FBookmarksAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40038);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1e90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FChannelProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FChannelProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1ed0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCounterProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCounterProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1f10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCountersAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCountersAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1f50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FCpuProfilerAnalyzer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FCpuProfilerAnalyzer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1f90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FDefinitionProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FDefinitionProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d1fd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FFrameProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FFrameProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2010

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FLogProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FLogProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x401a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2050

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FRegionProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FRegionProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2090

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FScreenshotProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FScreenshotProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d20d0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TraceServices::FThreadProvider,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TraceServices::FThreadProvider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2110

void * __thiscall
TraceServices::FAllocationsAnalyzer::_scalar_deleting_destructor_
          (FAllocationsAnalyzer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAllocationsAnalyzer_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2150

void * __thiscall
TraceServices::FAllocationsProvider::_scalar_deleting_destructor_
          (FAllocationsProvider *this,uint param_1)

{
  ~FAllocationsProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2190

void * __thiscall
TraceServices::FAnalysisCache::_scalar_deleting_destructor_(FAnalysisCache *this,uint param_1)

{
  ~FAnalysisCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d21d0

void * __thiscall
TraceServices::FAnalysisService::_scalar_deleting_destructor_(FAnalysisService *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnalysisService_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2210

void * __thiscall
TraceServices::FAnalysisSession::_scalar_deleting_destructor_(FAnalysisSession *this,uint param_1)

{
  ~FAnalysisSession(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2250

void * __thiscall
TraceServices::FAnalyzerWrapper::_scalar_deleting_destructor_(FAnalyzerWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAnalyzerWrapper_TraceServices__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InnerAnalyzer).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d22a0

void * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::_scalar_deleting_destructor_
          (FAsyncLoadingTraceAnalyzer *this,uint param_1)

{
  ~FAsyncLoadingTraceAnalyzer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40270);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d22e0

void * __thiscall
TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState::_scalar_deleting_destructor_
          (FAsyncPackageState *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->ImportedByAsyncPackages).HashSize = 0;
  FVar1 = (this->ImportedByAsyncPackages).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ImportedByAsyncPackages).Elements);
  (this->ImportedAsyncPackages).HashSize = 0;
  FVar1 = (this->ImportedAsyncPackages).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TraceServices::FAsyncLoadingTraceAnalyzer::FAsyncPackageState_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ImportedAsyncPackages).Elements);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2370

void * __thiscall
TraceServices::FBookmarkProvider::_scalar_deleting_destructor_(FBookmarkProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IBookmarkProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableBookmarkProvider__;
  DestructItems<TSharedRef<TraceServices::FBookmarkInternal,1>,int>
            ((TSharedRef<TraceServices::FBookmarkInternal,1> *)
             (this->Bookmarks).AllocatorInstance.Data,(this->Bookmarks).ArrayNum);
  pFVar1 = (this->Bookmarks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SpecMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SpecMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40078);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2400

void * __thiscall
TraceServices::FBookmarksAnalyzer::_scalar_deleting_destructor_
          (FBookmarksAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40028);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2430

void * __thiscall
TraceServices::FCallstacksAnalyzer::_scalar_deleting_destructor_
          (FCallstacksAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2460

void * __thiscall
TraceServices::FChannelProvider::_scalar_deleting_destructor_(FChannelProvider *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FChannelProvider_TraceServices__6B_;
  DestructItems<TraceServices::FChannelEntry,int>
            ((FChannelEntry *)(this->Channels).AllocatorInstance.Data,(this->Channels).ArrayNum);
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d24c0

void * __thiscall
TraceServices::FCookAnalyzer::_scalar_deleting_destructor_(FCookAnalyzer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCookAnalyzer_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2500

void * __thiscall
TraceServices::FCountersAnalyzer::_scalar_deleting_destructor_(FCountersAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->EditableCountersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EditableCountersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EditableCountersMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2560

void * __thiscall
TraceServices::FCpuProfilerAnalyzer::_scalar_deleting_destructor_
          (FCpuProfilerAnalyzer *this,uint param_1)

{
  ~FCpuProfilerAnalyzer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d25a0

void * __thiscall
TraceServices::FCsvProfilerAnalyzer::_scalar_deleting_destructor_
          (FCsvProfilerAnalyzer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  longlong lVar3;
  FCsvProfilerAnalyzer *pFVar4;
  
  this->_padding_ = (longlong)&___7FCsvProfilerAnalyzer_TraceServices__6B_;
  OnAnalysisEnd(this);
  pFVar4 = this + 1;
  lVar3 = 2;
  do {
    pFVar1 = pFVar4[-1].FrameBoundaries[1].AllocatorInstance.Data;
    pFVar4 = (FCsvProfilerAnalyzer *)(pFVar4[-1].FrameBoundaries + 1);
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  pFVar1 = (this->StatSeriesInstanceArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatSeriesDefinitionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StatSeriesStringMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatSeriesStringMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<int,FString>,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StatSeriesStringMap);
  *(undefined4 *)&(this->StatSeriesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatSeriesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FCsvProfilerAnalyzer::FStatSeriesDefinition_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StatSeriesMap);
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoryMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoryMap);
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ThreadStatesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FCsvProfilerAnalyzer::FThreadState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStatesMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d26e0

void * __thiscall
TraceServices::FDiagnosticsAnalyzer::_scalar_deleting_destructor_
          (FDiagnosticsAnalyzer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDiagnosticsAnalyzer_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2720

void * __thiscall
`TraceServices::FAnalysisService::StartAnalysis'::__l2::FFileDataStream::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2770

void * __thiscall
TraceServices::FFrameProvider::_scalar_deleting_destructor_(FFrameProvider *this,uint param_1)

{
  ~FFrameProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d27b0

void * __thiscall
TraceServices::FGpuProfilerAnalyzer::_scalar_deleting_destructor_
          (FGpuProfilerAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Queues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Queues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FGpuProfilerAnalyzer::FQueue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Queues);
  *(undefined4 *)&(this->TimerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TimerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TimerMap);
  *(undefined4 *)&(this->BreadcrumbMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BreadcrumbMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BreadcrumbMap);
  *(undefined4 *)&(this->SpecIdToTimerIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpecIdToTimerIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecIdToTimerIdMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2880

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TraceServices::FLogProvider::_scalar_deleting_destructor_(FLogProvider *this,uint param_1)

{
  ~FLogProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40190);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d28c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TraceServices::FLogTraceAnalyzer::_scalar_deleting_destructor_(FLogTraceAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d28f0

void * __thiscall
TraceServices::FMemoryAnalyzer::_scalar_deleting_destructor_(FMemoryAnalyzer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FMemoryAnalyzer_TraceServices__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2930

void * __thiscall
TraceServices::FMetadataAnalysis::_scalar_deleting_destructor_(FMetadataAnalysis *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FMetadataAnalysis_TraceServices__6B_;
  *(undefined4 *)&(this->EncounteredMetadataTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EncounteredMetadataTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EncounteredMetadataTypes);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d29a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TraceServices::FMiscTraceAnalyzer::_scalar_deleting_destructor_
          (FMiscTraceAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ThreadStateMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ThreadStateMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FMiscTraceAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStateMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2a10

void * __thiscall
TraceServices::FModuleAnalyzer::_scalar_deleting_destructor_(FModuleAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2a40

void * __thiscall
TraceServices::FNetTraceAnalyzer::_scalar_deleting_destructor_(FNetTraceAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ActiveGameInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveGameInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveGameInstances);
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap);
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TraceEventTypeToNetProfilerEventTypeIndexMap);
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TracedNameIdToNetProfilerNameIdMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2b10

void * __thiscall
TraceServices::FOldGpuProfilerAnalyzer::_scalar_deleting_destructor_
          (FOldGpuProfilerAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->EventTypeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EventTypeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventTypeMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2b70

void * __thiscall
TraceServices::FPlatformEventTraceAnalyzer::_scalar_deleting_destructor_
          (FPlatformEventTraceAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2ba0

/* WARNING: Enum "EFileActivityType": Some values do not have unique names */

void * __thiscall
TraceServices::FPlatformFileTraceAnalyzer::_scalar_deleting_destructor_
          (FPlatformFileTraceAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ActiveWritesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveWritesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveWritesMap);
  *(undefined4 *)&(this->ActiveReadsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveReadsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveReadsMap);
  *(undefined4 *)&(this->PendingCloseMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingCloseMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingCloseMap);
  *(undefined4 *)&(this->PendingReOpenMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingReOpenMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingReOpenMap);
  *(undefined4 *)&(this->PendingOpenMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingOpenMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FPlatformFileTraceAnalyzer::FPendingActivity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingOpenMap);
  *(undefined4 *)&(this->OpenFilesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OpenFilesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenFilesMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2cc0

void * __thiscall
TraceServices::FRegionProvider::_scalar_deleting_destructor_(FRegionProvider *this,uint param_1)

{
  ~FRegionProvider(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x218);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2d00

void * __thiscall
TraceServices::FScreenshotProvider::_scalar_deleting_destructor_
          (FScreenshotProvider *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FScreenshotProvider_TraceServices__6B_;
  *(undefined4 *)&(this->Screenshots).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Screenshots).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<TraceServices::FScreenshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Screenshots);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2d70

void * __thiscall
TraceServices::FSlabAllocator::_scalar_deleting_destructor_(FSlabAllocator *this,uint param_1)

{
  ~FSlabAllocator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2db0

void * __thiscall
TraceServices::FStatsAnalyzer::_scalar_deleting_destructor_(FStatsAnalyzer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ThreadStatesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ThreadStatesMap);
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FloatResetEveryFrameCountersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FloatResetEveryFrameCountersMap);
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Int64ResetEveryFrameCountersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Int64ResetEveryFrameCountersMap);
  *(undefined4 *)&(this->EditableCountersMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EditableCountersMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EditableCountersMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2e80

void * __thiscall
TraceServices::FStringStore::_scalar_deleting_destructor_(FStringStore *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FStringStore_TraceServices__6B_;
  pFVar1 = (this->FindStoredStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StoredStrings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StoredStrings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,wchar_t_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StoredStrings);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Cs);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2f10

void * __thiscall
TraceServices::FStringsAnalyzer::_scalar_deleting_destructor_(FStringsAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2f40

void * __thiscall
TraceServices::FTasksAnalyzer::_scalar_deleting_destructor_(FTasksAnalyzer *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2f70

void * __thiscall
TraceServices::FVerseAnalyzer::_scalar_deleting_destructor_(FVerseAnalyzer *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Timers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Timers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Timers);
  pFVar2 = (this->LastSampleStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d2fe0

void * __thiscall
TraceServices::IAllocationsProvider::_scalar_deleting_destructor_
          (IAllocationsProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d3010

void * __thiscall
TraceServices::IAnalysisCache::_scalar_deleting_destructor_(IAnalysisCache *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d3040

void * __thiscall
TraceServices::IAnalysisSession::_scalar_deleting_destructor_(IAnalysisSession *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d3070

void * __thiscall
TraceServices::IEditableProvider::_scalar_deleting_destructor_(IEditableProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d30a0

void * __thiscall
TraceServices::ILinearAllocator::_scalar_deleting_destructor_(ILinearAllocator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d30d0

void * __thiscall
TraceServices::IProvider::_scalar_deleting_destructor_(IProvider *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3d3100

void * __thiscall
TraceServices::IStringStore::_scalar_deleting_destructor_(IStringStore *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// CreateAnalysisSession @ 14d3d60e0

TSharedPtr<TraceServices::IAnalysisSession,1> * __cdecl
TraceServices::CreateAnalysisSession
          (TSharedPtr<TraceServices::IAnalysisSession,1> *__return_storage_ptr__,uint param_1,
          wchar_t *param_2,
          TUniquePtr<UE::Trace::IInDataStream,TDefaultDelete<UE::Trace::IInDataStream>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<TraceServices::IAnalysisSession,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x2f8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IAnalysisSession *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalysisSession_TraceServices___00_SharedPointerInternals__6B_
    ;
    FAnalysisSession::FAnalysisSession((FAnalysisSession *)(pTVar3 + 1),param_1,param_2,param_3);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IAnalysisSession *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateBookmarksAnalyzer @ 14d3d6440

TSharedPtr<UE::Trace::IAnalyzer,1> * __cdecl
TraceServices::CreateBookmarksAnalyzer
          (TSharedPtr<UE::Trace::IAnalyzer,1> *__return_storage_ptr__,IAnalysisSession *param_1,
          IEditableBookmarkProvider *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Trace::IAnalyzer,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x40038);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IAnalyzer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBookmarksAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar3[2]._padding_ = (longlong)param_2;
    *(IAnalysisSession **)&pTVar3[1].SharedReferenceCount = param_1;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = (longlong)&___7FBookmarksAnalyzer_TraceServices__6B_;
    pTVar3[3]._padding_ = -1;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Trace::IAnalyzer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IAnalyzer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateCountersAnalyzer @ 14d3d66b0

TSharedPtr<UE::Trace::IAnalyzer,1> * __cdecl
TraceServices::CreateCountersAnalyzer
          (TSharedPtr<UE::Trace::IAnalyzer,1> *__return_storage_ptr__,IAnalysisSession *param_1,
          IEditableCounterProvider *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Trace::IAnalyzer,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x78);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IAnalyzer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[2]._padding_ = (longlong)param_2;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCountersAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    *(IAnalysisSession **)&pTVar3[1].SharedReferenceCount = param_1;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[1]._padding_ = (longlong)&___7FCountersAnalyzer_TraceServices__6B_;
    *(undefined4 *)&pTVar3[5]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[5]._padding_ + 4) = 0x80;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[7]._padding_ = 0;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Trace::IAnalyzer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IAnalyzer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateCpuProfilerAnalyzer @ 14d3d67b0

TSharedPtr<UE::Trace::IAnalyzer,1> * __cdecl
TraceServices::CreateCpuProfilerAnalyzer
          (TSharedPtr<UE::Trace::IAnalyzer,1> *__return_storage_ptr__,IAnalysisSession *param_1,
          IEditableTimingProfilerProvider *param_2,IEditableThreadProvider *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::Trace::IAnalyzer,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x1a0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IAnalyzer *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCpuProfilerAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    *(IEditableThreadProvider **)&pTVar3[2].SharedReferenceCount = param_3;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[2]._padding_ = (longlong)param_2;
    pTVar3[1]._padding_ = (longlong)&___7FCpuProfilerAnalyzer_TraceServices__6B_;
    *(IAnalysisSession **)&pTVar3[1].SharedReferenceCount = param_1;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[6]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[6]._padding_ = 0xffffffff;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[0xb]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[0xb]._padding_ = 0xffffffff;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[0x10]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[0x10]._padding_ = 0xffffffff;
    pTVar3[0x11]._padding_ = 0;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12]._padding_ = 0;
    pTVar3[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x12].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x14]._padding_ = 0;
    pTVar3[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x14].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[0x15]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[0x15]._padding_ = 0xffffffff;
    pTVar3[0x16]._padding_ = 0;
    pTVar3[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18]._padding_ = 0;
    pTVar3[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x18].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x19]._padding_ = 0;
    pTVar3[0x19].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x17]._padding_ = -1;
    pTVar3[0x17].SharedReferenceCount = (atomic<int>)0xffffffff;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::Trace::IAnalyzer,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IAnalyzer *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAllocationsProviderName @ 14d3dff40

FName __cdecl TraceServices::GetAllocationsProviderName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"AllocationsProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = ::Name;
  return in_RCX;
}

// ReadAllocationsProvider @ 14d3fd0a0

IAllocationsProvider * __cdecl TraceServices::ReadAllocationsProvider(IAnalysisSession *param_1)

{
  IAllocationsProvider *pIVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,"AllocationsProvider");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0] = ::Name;
  pIVar1 = (IAllocationsProvider *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_res8);
  return pIVar1;
}

// StringFormat @ 14d403b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
TraceServices::StringFormat
          (wchar_t *param_1,ulong64 param_2,wchar_t *param_3,ulong64 param_4,wchar_t *param_5,
          uchar *param_6)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_2b8 [32];
  FFormatArgsStreamContext FStack_288;
  FFormatArgSpec FStack_268;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (param_6 != (uchar *)0x0) {
    FStack_288.ArgumentCount = *param_6;
    FStack_288.DescriptorPtr = param_6 + 1;
    FStack_288.PayloadPtr = FStack_288.DescriptorPtr + FStack_288.ArgumentCount;
    if (FStack_288.ArgumentCount != 0) {
      FStack_288._1_2_ = CONCAT11(*FStack_288.DescriptorPtr,*FStack_288.DescriptorPtr) & 0x3fc0;
      goto LAB_14d3df2f0;
    }
  }
  FStack_288.ArgumentTypeCategory = '\0';
  FStack_288.ArgumentTypeSize = '\0';
LAB_14d3df2f0:
  pwVar1 = param_1 + param_2;
  if (FStack_288.ArgumentCount == 0) {
    wcsncpy(param_1,param_5,param_2 - 1);
    pwVar1[-1] = L'\0';
  }
  else {
    wVar2 = *param_5;
    while ((wVar2 != L'\0' && (param_1 != pwVar1))) {
      pwVar4 = FFormatArgsHelper::ExtractNextFormatArg(param_5,&FStack_268);
      iVar3 = (int)((longlong)pwVar1 - (longlong)param_1 >> 1);
      if (FStack_268.PassthroughLength < iVar3) {
        iVar3 = FStack_268.PassthroughLength;
      }
      if (iVar3 != 0) {
        wcsncpy(param_1,param_5,(longlong)iVar3);
        param_1 = param_1 + iVar3;
        *param_1 = L'\0';
      }
      if (FStack_268.Valid != false) {
        iVar3 = FFormatArgsHelper::FormatArgument
                          (param_1,(int)((longlong)pwVar1 - (longlong)param_1 >> 1),param_3,
                           (int)param_4,&FStack_268,&FStack_288);
        if (iVar3 < 0) {
          return;
        }
        param_1 = param_1 + iVar3;
      }
      wVar2 = *pwVar4;
      param_5 = pwVar4;
    }
  }
  return;
}

// Table2Csv @ 14d403b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TraceServices::Table2Csv(IUntypedTable *param_1,wchar_t *param_2)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  IFileManager *pIVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  longlong *plVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  char *_Str;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_218 [32];
  FString local_1f8;
  FString local_1e8;
  longlong *local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FScriptContainerElement local_188 [128];
  ForAnyElementType local_108;
  FScriptContainerElement *local_100;
  int local_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pIVar8 = IFileManager::Get();
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,param_2,0);
  bVar5 = false;
  if (plVar9 != (longlong *)0x0) {
    pFVar17 = (FScriptContainerElement *)0x0;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    local_1d8 = plVar9;
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar11 = (FScriptContainerElement *)(**(code **)(*plVar10 + 8))(plVar10);
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      do {
        pwVar12 = (wchar_t *)(**(code **)(*plVar10 + 0x10))(plVar10,pFVar17);
        sVar13 = wcslen(pwVar12);
        ::FString::AppendChars(&local_1e8,pwVar12,(int)sVar13);
        pwVar12 = L",";
        if (pFVar11 + -1 <= pFVar17) {
          pwVar12 = L"\n";
        }
        ::FString::AppendChars(&local_1e8,pwVar12,1);
        pFVar17 = pFVar17 + 1;
        plVar9 = local_1d8;
      } while (pFVar17 < pFVar11);
    }
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar16.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    StringCast<char,128,wchar_t>(&local_e8,(wchar_t *)FVar16.Data);
    (**(code **)(*plVar9 + 0x188))(plVar9);
    plVar14 = (longlong *)(**(code **)((longlong)*param_1 + 0x18))(param_1);
    cVar4 = (**(code **)(*plVar14 + 8))(plVar14);
    if (cVar4 != '\0') {
      FVar16.Data = (FScriptContainerElement *)0x0;
      do {
        local_1f8.Data.ArrayNum = 0;
        local_1f8.Data.ArrayMax = 0;
        local_1f8.Data.AllocatorInstance.Data = FVar16.Data;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
LAB_14d403f0b:
          pwVar12 = L"";
          local_108.Data = FVar16.Data;
LAB_14d403f1c:
          FVar16.Data = local_108.Data;
          sVar13 = wcslen(pwVar12);
          local_f8 = (int)sVar13;
          uVar19 = local_f8 + 1;
          if (0x80 < uVar19) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_108,0,uVar19,1);
            FVar16.Data = local_108.Data;
          }
          lVar18 = (longlong)(int)uVar19;
          pFVar17 = local_188;
          if (FVar16.Data != (FScriptContainerElement *)0x0) {
            pFVar17 = FVar16.Data;
          }
          bVar5 = false;
          lVar15 = 0;
          local_100 = pFVar17;
          if (0 < (int)uVar19) {
            do {
              uVar1 = *(ushort *)((longlong)pwVar12 + lVar15 * 2);
              pFVar17[lVar15] = SUB21(uVar1,0);
              lVar15 = lVar15 + 1;
              bVar5 = (bool)(bVar5 | 0x7f < uVar1);
            } while (lVar15 < lVar18);
            if (bVar5) {
              lVar15 = 0;
              do {
                if (0x7f < *(ushort *)((longlong)pwVar12 + lVar15 * 2)) {
                  pFVar17[lVar15] = (FScriptContainerElement)0x3f;
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 < lVar18);
            }
          }
          if ((pFVar17 + lVar18 == (FScriptContainerElement *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Result",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                 ,0x25,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          FVar16.Data = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar17 = FVar16.Data;
          do {
            iVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,pFVar17);
            if (iVar7 == 1) {
              cVar4 = (**(code **)(*plVar14 + 0x20))(plVar14,pFVar17);
              _Str = "false";
              if (cVar4 != '\0') {
                _Str = "true";
              }
              sVar13 = strlen(_Str);
              ::FString::AppendChars(&local_1f8,_Str,(int)sVar13);
              FVar16.Data = (FScriptContainerElement *)0x0;
            }
            else {
              iVar3 = (int)FVar16.Data;
              if (iVar7 == 2) {
                (**(code **)(*plVar14 + 0x28))(plVar14,pFVar17);
                ::FString::PrintfImpl(&local_1a0,L"%lld");
                iVar7 = local_1a0.Data.ArrayNum + -1;
                if (local_1a0.Data.ArrayNum == 0) {
                  iVar7 = iVar3;
                }
                ::FString::AppendChars
                          (&local_1f8,(wchar_t *)local_1a0.Data.AllocatorInstance.Data,iVar7);
                if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                }
              }
              else if (iVar7 == 3) {
                (**(code **)(*plVar14 + 0x30))(plVar14,pFVar17);
                ::FString::PrintfImpl(&local_1b0,L"%f");
                iVar7 = local_1b0.Data.ArrayNum + -1;
                if (local_1b0.Data.ArrayNum == 0) {
                  iVar7 = iVar3;
                }
                ::FString::AppendChars
                          (&local_1f8,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar7);
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
              }
              else if (iVar7 == 4) {
                (**(code **)(*plVar14 + 0x38))(plVar14,pFVar17);
                ::FString::PrintfImpl(&local_1c0,L"%f");
                iVar7 = local_1c0.Data.ArrayNum + -1;
                if (local_1c0.Data.ArrayNum == 0) {
                  iVar7 = iVar3;
                }
                ::FString::AppendChars
                          (&local_1f8,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar7);
                if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                }
              }
              else if (iVar7 == 5) {
                pwVar12 = (wchar_t *)(**(code **)(*plVar14 + 0x40))(plVar14,pFVar17);
                ::FString::FString(&local_1d0,pwVar12);
                ::FString::ReplaceInline(&local_1d0,L",",L" ",IgnoreCase);
                iVar7 = local_1d0.Data.ArrayNum + -1;
                if (local_1d0.Data.ArrayNum == 0) {
                  iVar7 = iVar3;
                }
                ::FString::AppendChars
                          (&local_1f8,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar7);
                if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                }
              }
            }
            pwVar12 = L",";
            if (pFVar11 + -1 <= pFVar17) {
              pwVar12 = L"\n";
            }
            ::FString::AppendChars(&local_1f8,pwVar12,1);
            pFVar17 = pFVar17 + 1;
          } while (pFVar17 < pFVar11);
          plVar9 = local_1d8;
          if (local_1f8.Data.ArrayNum == 0) goto LAB_14d403f0b;
          local_108.Data = (FScriptContainerElement *)0x0;
          pwVar12 = (wchar_t *)local_1f8.Data.AllocatorInstance.Data;
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d403f1c;
          local_100 = local_1f8.Data.AllocatorInstance.Data;
          local_f8 = 0;
          FVar16.Data = local_1f8.Data.AllocatorInstance.Data;
        }
        (**(code **)(*plVar9 + 0x188))(plVar9);
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*plVar14 + 0x10))(plVar14);
        cVar4 = (**(code **)(*plVar14 + 8))(plVar14);
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar9 + 0x210))(plVar9);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)*plVar14)(plVar14,1);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    (**(code **)*plVar9)(plVar9,1);
    bVar5 = true;
  }
  return bVar5;
}

// `dynamic_atexit_destructor_for_'LogAnalysisCache'' @ 1504561a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnalysisCache__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnalysisCache);
  return;
}

// `dynamic_atexit_destructor_for_'LogNetTrace'' @ 1504561c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNetTrace__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNetTrace);
  return;
}

// `dynamic_atexit_destructor_for_'LogTraceServices'' @ 1504561e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTraceServices__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTraceServices);
  return;
}

