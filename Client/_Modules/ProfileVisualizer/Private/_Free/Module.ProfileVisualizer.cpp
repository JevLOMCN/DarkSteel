// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 166

// NAME_DurationColumn'' @ 14116a350

void __cdecl `dynamic_initializer_for_'SEventsTree::NAME_DurationColumn__(void)

{
  FText *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"ProfileVisualizer",L"ColumnDuration",L"Duration");
  pFVar1 = FText::ToString(this);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&SEventsTree::NAME_DurationColumn,pwVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// NAME_NameColumn'' @ 14116a3c0

void __cdecl `dynamic_initializer_for_'SEventsTree::NAME_NameColumn__(void)

{
  FText *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  FText local_18;
  
  this = FText::AsLocalizable_Advanced_LocText(&local_18,L"ProfileVisualizer",L"ColumnName",L"Name")
  ;
  pFVar1 = FText::ToString(this);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&SEventsTree::NAME_NameColumn,pwVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// StyleInstance'' @ 14116a430

void __cdecl `dynamic_initializer_for_'FProfileVisualizerStyle::StyleInstance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FProfileVisualizerStyle::StyleInstance__);
  return;
}

// `dynamic_initializer_for_'GDelayedVisualizerSpawner'' @ 14116a450

void __cdecl _dynamic_initializer_for__GDelayedVisualizerSpawner__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDelayedVisualizerSpawner__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantProfileVisualizer'' @ 14116a470

void __cdecl _dynamic_initializer_for__ModuleRegistrantProfileVisualizer__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ProfileVisualizer";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ProfileVisualizer",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FProfileVisualizerModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'ProfileVisualizerTabId'' @ 14116a4c0

void __cdecl _dynamic_initializer_for__ProfileVisualizerTabId__(void)

{
  FName::FName(&ProfileVisualizerTabId,"VisualizerSpawnPoint");
  return;
}

// `scalar_deleting_destructor' @ 148d4be60

void * __thiscall
IProfileVisualizerModule::_scalar_deleting_destructor_(IProfileVisualizerModule *this,uint param_1)

{
  *this = (IProfileVisualizerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d4c070

void * __thiscall
FProfileVisualizerModule::_scalar_deleting_destructor_(FProfileVisualizerModule *this,uint param_1)

{
  *this = (FProfileVisualizerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int> @ 148d4ce30

void __cdecl
ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
          (void *param_1,TSharedPtr<FVisualizerEvent,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FVisualizerEvent **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,int> @ 148d4dbc0

void __cdecl
DestructItems<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,int>
          (TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<SGraphBar,1>,int> @ 148d4dc00

void __cdecl
DestructItems<TSharedPtr<SGraphBar,1>,int>(TSharedPtr<SGraphBar,1> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TSharedPtr<SGraphBar,1>::~TSharedPtr<SGraphBar,1>(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// GetTypeHash<FVisualizerEvent_const_,1> @ 148d4ed80

uint __cdecl GetTypeHash<FVisualizerEvent_const_,1>(TSharedPtr<FVisualizerEvent_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l19::FCompareEventsByDuration>_> @ 148d4edb0

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_19_::FCompareEventsByDuration>
          param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FVisualizerEvent *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  TSharedPtr<FVisualizerEvent,1> *pTVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FCompareEventsByDuration *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_19_::FCompareEventsByDuration>
              *)&local_res20);
  iVar13 = param_2 + -1;
  lVar14 = (longlong)iVar13;
  if (0 < iVar13) {
    pTVar11 = param_1 + lVar14;
    do {
      pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
      iVar15 = 0;
      pFVar5 = param_1->Object;
      pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar11->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar4;
      pTVar11->Object = pFVar5;
      (pTVar11->SharedReferenceCount).ReferenceController = pTVar6;
      if (1 < iVar13) {
        do {
          iVar9 = iVar15 * 2;
          iVar16 = iVar9 + 1;
          if (iVar9 + 2 < iVar13) {
            lVar1 = (longlong)iVar9 + 2;
            lVar12 = (longlong)iVar9 + 1;
            pTVar4 = param_1[lVar12].SharedReferenceCount.ReferenceController;
            pFVar5 = param_1[lVar12].Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = param_1[lVar1].SharedReferenceCount.ReferenceController;
            pFVar7 = param_1[lVar1].Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar7 == (FVisualizerEvent *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar2 = pFVar7->DurationMs;
            if ((pFVar5 == (FVisualizerEvent *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar3 = pFVar5->DurationMs;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (dVar2 < dVar3) {
              iVar16 = iVar9;
            }
            iVar16 = iVar16 + 1;
          }
          pTVar4 = param_1[iVar16].SharedReferenceCount.ReferenceController;
          pFVar5 = param_1[iVar16].Object;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar6 = param_1[iVar15].SharedReferenceCount.ReferenceController;
          pFVar7 = param_1[iVar15].Object;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar7 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          dVar2 = pFVar7->DurationMs;
          if ((pFVar5 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          dVar3 = pFVar5->DurationMs;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (dVar3 <= dVar2) break;
          pTVar4 = param_1[iVar16].SharedReferenceCount.ReferenceController;
          pFVar5 = param_1[iVar15].Object;
          pTVar6 = param_1[iVar15].SharedReferenceCount.ReferenceController;
          param_1[iVar15].Object = param_1[iVar16].Object;
          param_1[iVar15].SharedReferenceCount.ReferenceController = pTVar4;
          param_1[iVar16].Object = pFVar5;
          param_1[iVar16].SharedReferenceCount.ReferenceController = pTVar6;
          iVar15 = iVar16;
        } while (iVar16 * 2 + 1 < iVar13);
      }
      iVar13 = iVar13 + -1;
      lVar14 = lVar14 + -1;
      pTVar11 = pTVar11 + -1;
    } while (0 < lVar14);
  }
  return;
}

// HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l23::FCompareEventsByDurationDescending>_> @ 148d4f080

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_23_::FCompareEventsByDurationDescending>
          param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FVisualizerEvent *pFVar7;
  code *pcVar8;
  bool bVar9;
  TSharedPtr<FVisualizerEvent,1> *pTVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FCompareEventsByDurationDescending *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_23_::FCompareEventsByDurationDescending>
              *)&local_res20);
  iVar12 = param_2 + -1;
  lVar13 = (longlong)iVar12;
  if (0 < iVar12) {
    pTVar10 = param_1 + lVar13;
    do {
      pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
      iVar16 = 0;
      pFVar5 = param_1->Object;
      pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar10->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar4;
      pTVar10->Object = pFVar5;
      (pTVar10->SharedReferenceCount).ReferenceController = pTVar6;
      if (1 < iVar12) {
        do {
          iVar14 = iVar16 * 2;
          iVar15 = iVar14 + 1;
          if (iVar14 + 2 < iVar12) {
            lVar1 = (longlong)iVar14 + 2;
            lVar11 = (longlong)iVar14 + 1;
            pTVar4 = param_1[lVar11].SharedReferenceCount.ReferenceController;
            pFVar5 = param_1[lVar11].Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = param_1[lVar1].SharedReferenceCount.ReferenceController;
            pFVar7 = param_1[lVar1].Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar5 == (FVisualizerEvent *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar2 = pFVar5->DurationMs;
            if ((pFVar7 == (FVisualizerEvent *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar3 = pFVar7->DurationMs;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (dVar2 < dVar3) {
              iVar15 = iVar14;
            }
            iVar15 = iVar15 + 1;
          }
          pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
          pFVar5 = param_1[iVar15].Object;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar6 = param_1[iVar16].SharedReferenceCount.ReferenceController;
          pFVar7 = param_1[iVar16].Object;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar5 == (FVisualizerEvent *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          dVar2 = pFVar5->DurationMs;
          if ((pFVar7 == (FVisualizerEvent *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          dVar3 = pFVar7->DurationMs;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          if (dVar3 <= dVar2) break;
          pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
          pFVar5 = param_1[iVar16].Object;
          pTVar6 = param_1[iVar16].SharedReferenceCount.ReferenceController;
          param_1[iVar16].Object = param_1[iVar15].Object;
          param_1[iVar16].SharedReferenceCount.ReferenceController = pTVar4;
          param_1[iVar15].Object = pFVar5;
          param_1[iVar15].SharedReferenceCount.ReferenceController = pTVar6;
          iVar16 = iVar15;
        } while (iVar15 * 2 + 1 < iVar12);
      }
      iVar12 = iVar12 + -1;
      lVar13 = lVar13 + -1;
      pTVar10 = pTVar10 + -1;
    } while (0 < lVar13);
  }
  return;
}

// HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l8::FCompareEventsByName>_> @ 148d4f350

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_8_::FCompareEventsByName>
          param_4)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  FVisualizerEvent *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<FVisualizerEvent,1> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  int iVar17;
  TSharedPtr<FVisualizerEvent,1> *pTVar18;
  TSharedPtr<FVisualizerEvent,1> *pTVar19;
  FCompareEventsByName *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_8_::FCompareEventsByName>
              *)&local_res20);
  iVar17 = param_2 + -1;
  lVar12 = (longlong)iVar17;
  if (0 < iVar17) {
    pTVar11 = param_1 + lVar12;
    do {
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar3 = param_1->Object;
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar11->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      pTVar11->Object = pFVar3;
      (pTVar11->SharedReferenceCount).ReferenceController = pTVar5;
      iVar10 = 0;
      if (1 < iVar17) {
        do {
          iVar7 = iVar10 * 2;
          iVar16 = iVar7 + 1;
          if (iVar7 + 2 < iVar17) {
            lVar1 = (longlong)iVar7 + 2;
            lVar13 = (longlong)iVar7 + 1;
            pTVar2 = param_1[lVar13].SharedReferenceCount.ReferenceController;
            pFVar3 = param_1[lVar13].Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar4 = param_1[lVar1].Object;
            pTVar5 = param_1[lVar1].SharedReferenceCount.ReferenceController;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar3 == (FVisualizerEvent *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pFVar4 == (FVisualizerEvent *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pFVar3->EventName).Data.ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
            }
            if ((pFVar4->EventName).Data.ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar4->EventName).Data.AllocatorInstance.Data;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            if (iVar9 < 0) {
              iVar16 = iVar7;
            }
            iVar16 = iVar16 + 1;
          }
          pTVar18 = param_1 + iVar10;
          pTVar19 = param_1 + iVar16;
          pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar19->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
          pFVar4 = pTVar18->Object;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar3 == (FVisualizerEvent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar4 == (FVisualizerEvent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar3->EventName).Data.ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
          }
          if ((pFVar4->EventName).Data.ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar4->EventName).Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          if (-1 < iVar10) break;
          pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar18->Object;
          pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
          pTVar18->Object = pTVar19->Object;
          (pTVar18->SharedReferenceCount).ReferenceController = pTVar2;
          pTVar19->Object = pFVar3;
          (pTVar19->SharedReferenceCount).ReferenceController = pTVar5;
          iVar10 = iVar16;
        } while (iVar16 * 2 + 1 < iVar17);
      }
      lVar12 = lVar12 + -1;
      pTVar11 = pTVar11 + -1;
      iVar17 = iVar17 + -1;
    } while (0 < lVar12);
  }
  return;
}

// HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l12::FCompareEventsByNameDescending>_> @ 148d4f650

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_12_::FCompareEventsByNameDescending>
          param_4)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<FVisualizerEvent,1> *pTVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int iVar17;
  TSharedPtr<FVisualizerEvent,1> *pTVar18;
  TSharedPtr<FVisualizerEvent,1> *pTVar19;
  FCompareEventsByNameDescending *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_12_::FCompareEventsByNameDescending>
              *)&local_res20);
  iVar12 = param_2 + -1;
  lVar15 = (longlong)iVar12;
  if (0 < iVar12) {
    pTVar11 = param_1 + lVar15;
    do {
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar3 = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar11->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      pTVar11->Object = pFVar3;
      (pTVar11->SharedReferenceCount).ReferenceController = pTVar4;
      iVar10 = 0;
      if (1 < iVar12) {
        do {
          iVar7 = iVar10 * 2;
          iVar17 = iVar7 + 1;
          if (iVar7 + 2 < iVar12) {
            lVar1 = (longlong)iVar7 + 2;
            lVar13 = (longlong)iVar7 + 1;
            pTVar2 = param_1[lVar13].SharedReferenceCount.ReferenceController;
            pFVar3 = param_1[lVar13].Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar4 = param_1[lVar1].SharedReferenceCount.ReferenceController;
            pFVar5 = param_1[lVar1].Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar5 == (FVisualizerEvent *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pFVar3 == (FVisualizerEvent *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pFVar5->EventName).Data.ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
            }
            if ((pFVar3->EventName).Data.ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar16);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            if (iVar9 < 0) {
              iVar17 = iVar7;
            }
            iVar17 = iVar17 + 1;
          }
          pTVar18 = param_1 + iVar10;
          pTVar19 = param_1 + iVar17;
          pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar19->Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
          pFVar5 = pTVar18->Object;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar5 == (FVisualizerEvent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar3 == (FVisualizerEvent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((pFVar5->EventName).Data.ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
          }
          if ((pFVar3->EventName).Data.ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar16);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          if (-1 < iVar10) break;
          pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
          pFVar3 = pTVar18->Object;
          pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
          pTVar18->Object = pTVar19->Object;
          (pTVar18->SharedReferenceCount).ReferenceController = pTVar2;
          pTVar19->Object = pFVar3;
          (pTVar19->SharedReferenceCount).ReferenceController = pTVar4;
          iVar10 = iVar17;
        } while (iVar17 * 2 + 1 < iVar12);
      }
      iVar12 = iVar12 + -1;
      lVar15 = lVar15 + -1;
      pTVar11 = pTVar11 + -1;
    } while (0 < lVar15);
  }
  return;
}

// HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l19::FCompareEventsByDuration>_>_> @ 148d4f940

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_19_::FCompareEventsByDuration>_>
          param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FVisualizerEvent *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar9 = iVar13;
  iVar12 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_148d4fb6e:
      if (iVar12 == 0) {
        return;
      }
      iVar11 = iVar12 + -1;
      iVar13 = iVar9 + -2;
      iVar9 = iVar13;
      iVar12 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar15 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar1 = (longlong)iVar13 + 2;
      lVar14 = (longlong)iVar13 + 1;
      pTVar4 = param_1[lVar14].SharedReferenceCount.ReferenceController;
      pFVar5 = param_1[lVar14].Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = param_1[lVar1].SharedReferenceCount.ReferenceController;
      pFVar7 = param_1[lVar1].Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar7 == (FVisualizerEvent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar2 = pFVar7->DurationMs;
      if ((pFVar5 == (FVisualizerEvent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar3 = pFVar5->DurationMs;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (dVar2 < dVar3) {
        iVar15 = iVar13;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
    pFVar5 = param_1[iVar15].Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = param_1[iVar11].SharedReferenceCount.ReferenceController;
    pFVar7 = param_1[iVar11].Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar7 == (FVisualizerEvent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar2 = pFVar7->DurationMs;
    if ((pFVar5 == (FVisualizerEvent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar3 = pFVar5->DurationMs;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (dVar3 <= dVar2) goto LAB_148d4fb6e;
    pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
    iVar13 = iVar15 * 2 + 1;
    pFVar5 = param_1[iVar11].Object;
    pTVar6 = param_1[iVar11].SharedReferenceCount.ReferenceController;
    param_1[iVar11].Object = param_1[iVar15].Object;
    param_1[iVar11].SharedReferenceCount.ReferenceController = pTVar4;
    param_1[iVar15].Object = pFVar5;
    param_1[iVar15].SharedReferenceCount.ReferenceController = pTVar6;
    iVar11 = iVar15;
  } while( true );
}

// HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l23::FCompareEventsByDurationDescending>_>_> @ 148d4fbc0

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_23_::FCompareEventsByDurationDescending>_>
          param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FVisualizerEvent *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar9 = iVar13;
  iVar12 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_148d4fdf6:
      if (iVar12 == 0) {
        return;
      }
      iVar11 = iVar12 + -1;
      iVar13 = iVar9 + -2;
      iVar9 = iVar13;
      iVar12 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar15 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar1 = (longlong)iVar13 + 2;
      lVar14 = (longlong)iVar13 + 1;
      pTVar4 = param_1[lVar14].SharedReferenceCount.ReferenceController;
      pFVar5 = param_1[lVar14].Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = param_1[lVar1].SharedReferenceCount.ReferenceController;
      pFVar7 = param_1[lVar1].Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar5 == (FVisualizerEvent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar2 = pFVar5->DurationMs;
      if ((pFVar7 == (FVisualizerEvent *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar3 = pFVar7->DurationMs;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (dVar2 < dVar3) {
        iVar15 = iVar13;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
    pFVar5 = param_1[iVar15].Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = param_1[iVar11].SharedReferenceCount.ReferenceController;
    pFVar7 = param_1[iVar11].Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FVisualizerEvent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar2 = pFVar5->DurationMs;
    if ((pFVar7 == (FVisualizerEvent *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar3 = pFVar7->DurationMs;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (dVar3 <= dVar2) goto LAB_148d4fdf6;
    pTVar4 = param_1[iVar15].SharedReferenceCount.ReferenceController;
    iVar13 = iVar15 * 2 + 1;
    pFVar5 = param_1[iVar11].Object;
    pTVar6 = param_1[iVar11].SharedReferenceCount.ReferenceController;
    param_1[iVar11].Object = param_1[iVar15].Object;
    param_1[iVar11].SharedReferenceCount.ReferenceController = pTVar4;
    param_1[iVar15].Object = pFVar5;
    param_1[iVar15].SharedReferenceCount.ReferenceController = pTVar6;
    iVar11 = iVar15;
  } while( true );
}

// HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l8::FCompareEventsByName>_>_> @ 148d4fe40

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_8_::FCompareEventsByName>_>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FVisualizerEvent *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  TSharedPtr<FVisualizerEvent,1> *pTVar16;
  TSharedPtr<FVisualizerEvent,1> *pTVar17;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar11 = iVar8 * 2 + 1;
  iVar6 = iVar11;
  iVar9 = iVar8;
  do {
    while (param_2 <= iVar11) {
LAB_148d500c0:
      if (iVar9 == 0) {
        return;
      }
      iVar8 = iVar9 + -1;
      iVar11 = iVar6 + -2;
      iVar6 = iVar11;
      iVar9 = iVar8;
    }
    iVar11 = iVar8 * 2;
    iVar15 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      lVar12 = (longlong)iVar11 + 1;
      pTVar1 = param_1[lVar12].SharedReferenceCount.ReferenceController;
      pFVar2 = param_1[lVar12].Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = param_1[(longlong)iVar11 + 2].SharedReferenceCount.ReferenceController;
      pFVar4 = param_1[(longlong)iVar11 + 2].Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FVisualizerEvent *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar4 == (FVisualizerEvent *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pFVar2->EventName).Data.ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar2->EventName).Data.AllocatorInstance.Data;
      }
      if ((pFVar4->EventName).Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar4->EventName).Data.AllocatorInstance.Data;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (iVar10 < 0) {
        iVar15 = iVar11;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar16 = param_1 + iVar8;
    pTVar17 = param_1 + iVar15;
    pTVar1 = (pTVar17->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar17->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar16->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pFVar4 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pFVar2->EventName).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar2->EventName).Data.AllocatorInstance.Data;
    }
    if ((pFVar4->EventName).Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar4->EventName).Data.AllocatorInstance.Data;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (-1 < iVar11) goto LAB_148d500c0;
    pTVar1 = (pTVar17->SharedReferenceCount).ReferenceController;
    iVar11 = iVar15 * 2 + 1;
    pFVar2 = pTVar16->Object;
    pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
    pTVar16->Object = pTVar17->Object;
    (pTVar16->SharedReferenceCount).ReferenceController = pTVar1;
    pTVar17->Object = pFVar2;
    (pTVar17->SharedReferenceCount).ReferenceController = pTVar3;
    iVar8 = iVar15;
  } while( true );
}

// HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l12::FCompareEventsByNameDescending>_>_> @ 148d50100

void __cdecl
AlgoImpl::
HeapifyInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_12_::FCompareEventsByNameDescending>_>
          param_4)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  TSharedPtr<FVisualizerEvent,1> *pTVar17;
  TSharedPtr<FVisualizerEvent,1> *pTVar18;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar12 = iVar9 * 2 + 1;
  iVar7 = iVar12;
  iVar10 = iVar9;
  do {
    while (param_2 <= iVar12) {
LAB_148d50373:
      if (iVar10 == 0) {
        return;
      }
      iVar9 = iVar10 + -1;
      iVar12 = iVar7 + -2;
      iVar7 = iVar12;
      iVar10 = iVar9;
    }
    iVar12 = iVar9 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      lVar1 = (longlong)iVar12 + 2;
      lVar13 = (longlong)iVar12 + 1;
      pTVar2 = param_1[lVar13].SharedReferenceCount.ReferenceController;
      pFVar3 = param_1[lVar13].Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = param_1[lVar1].SharedReferenceCount.ReferenceController;
      pFVar5 = param_1[lVar1].Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar5 == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar3 == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar5->EventName).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
      }
      if ((pFVar3->EventName).Data.ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (iVar11 < 0) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    pTVar17 = param_1 + iVar9;
    pTVar18 = param_1 + iVar16;
    pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar18->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar17->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FVisualizerEvent *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar3 == (FVisualizerEvent *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar5->EventName).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
    }
    if ((pFVar3->EventName).Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar14,pwVar15);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (-1 < iVar12) goto LAB_148d50373;
    pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
    iVar12 = iVar16 * 2 + 1;
    pFVar3 = pTVar17->Object;
    pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
    pTVar17->Object = pTVar18->Object;
    (pTVar17->SharedReferenceCount).ReferenceController = pTVar2;
    pTVar18->Object = pFVar3;
    (pTVar18->SharedReferenceCount).ReferenceController = pTVar4;
    iVar9 = iVar16;
  } while( true );
}

// IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l19::FCompareEventsByDuration>_> @ 148d503b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_19_::FCompareEventsByDuration>
          param_4)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVisualizerEvent *pFVar6;
  code *pcVar7;
  FVisualizerEvent *pFVar8;
  bool bVar9;
  int iVar10;
  FVisualizerEvent *pFVar11;
  TSharedPtr<FVisualizerEvent,1> *pTVar12;
  TSharedPtr<FVisualizerEvent,1> *pTVar13;
  FVisualizerEvent *pFVar14;
  TSharedPtr<FVisualizerEvent,1> *pTVar15;
  float fVar16;
  undefined1 auStack_3c8 [32];
  FIdentityFunctor local_3a8;
  TSharedPtr<FVisualizerEvent,1> **local_3a0;
  TSharedPtr<FVisualizerEvent,1> *local_398;
  FVisualizerEvent *local_390;
  int local_388;
  FCompareEventsByDuration *local_380;
  TSharedPtr<FVisualizerEvent,1> *local_368;
  TSharedPtr<FVisualizerEvent,1> *local_358;
  TSharedPtr<FVisualizerEvent,1> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3c8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_3a8 = param_3;
    local_380 = param_4.Predicate;
    local_358 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar16;
    memset(local_340,0,0x2e8);
    local_3a0 = &local_358;
    do {
      local_398 = local_3a0[1];
      local_390 = (FVisualizerEvent *)*local_3a0;
      local_368 = local_3a0[2];
      iVar10 = (int)((longlong)local_398 - (longlong)local_390 >> 4) + 1;
      local_388 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_148d504a0:
        pFVar8 = local_390;
        pTVar1 = local_398;
        if (8 < iVar10) {
          pTVar4 = ((FSharedReferencer<1> *)&local_390->Duration)->ReferenceController;
          pTVar12 = local_398 + 1;
          pFVar11 = ((TSharedPtr<FVisualizerEvent,1> *)
                    ((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))->Object;
          pTVar5 = (((TSharedPtr<FVisualizerEvent,1> *)
                    ((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))->SharedReferenceCount).
                   ReferenceController;
          ((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))
          ->Object = (FVisualizerEvent *)local_390->Start;
          (((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))
          ->SharedReferenceCount).ReferenceController = pTVar4;
          local_390->Start = (double)pFVar11;
          ((FSharedReferencer<1> *)&local_390->Duration)->ReferenceController = pTVar5;
          pFVar11 = local_390;
LAB_148d504d3:
          pTVar15 = (TSharedPtr<FVisualizerEvent,1> *)pFVar11;
          pFVar11 = (FVisualizerEvent *)(pTVar15 + 1);
          if (pFVar11 <= pTVar1) goto code_r0x000148d504e0;
          goto LAB_148d50580;
        }
        if (local_390 < local_398) {
          pTVar1 = (TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10);
          do {
            pFVar14 = pFVar8;
            pFVar11 = pFVar8;
            pTVar12 = pTVar1;
            if (pTVar1 <= local_398) {
              do {
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                local_390 = pTVar12->Object;
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar5 = (((TSharedPtr<FVisualizerEvent,1> *)pFVar14)->SharedReferenceCount).
                         ReferenceController;
                pFVar11 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar14)->Object;
                if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar5->SharedReferenceCount =
                       (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((pFVar11 == (FVisualizerEvent *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar6 = local_390;
                dVar2 = pFVar11->DurationMs;
                if ((local_390 == (FVisualizerEvent *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                dVar3 = pFVar6->DurationMs;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar5);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                pFVar11 = (FVisualizerEvent *)pTVar12;
                if (dVar3 <= dVar2) {
                  pFVar11 = pFVar14;
                }
                pTVar12 = pTVar12 + 1;
                pFVar14 = pFVar11;
              } while (pTVar12 <= local_398);
            }
            pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
            pTVar4 = (((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->SharedReferenceCount).
                     ReferenceController;
            pTVar12 = local_398 + -1;
            pTVar5 = (local_398->SharedReferenceCount).ReferenceController;
            ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object = local_398->Object;
            (((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->SharedReferenceCount).ReferenceController
                 = pTVar5;
            local_398->Object = pFVar14;
            (local_398->SharedReferenceCount).ReferenceController = pTVar4;
            param_4.Predicate = local_380;
            local_398 = pTVar12;
          } while (pFVar8 < pTVar12);
        }
        goto LAB_148d5072f;
      }
LAB_148d50719:
      HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>
                ((TSharedPtr<FVisualizerEvent,1> *)local_390,iVar10,param_3,param_4);
LAB_148d5072f:
      local_3a0 = local_3a0 + -3;
    } while (&local_358 <= local_3a0);
  }
  return;
code_r0x000148d504e0:
  pTVar4 = pTVar15[1].SharedReferenceCount.ReferenceController;
  pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
  pFVar6 = (FVisualizerEvent *)pFVar8->Start;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar6 == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar2 = pFVar6->DurationMs;
  if ((pFVar14 == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar3 = pFVar14->DurationMs;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (dVar3 <= dVar2) goto LAB_148d504d3;
LAB_148d50580:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= pFVar8) break;
    pTVar4 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
    pFVar14 = (FVisualizerEvent *)pFVar8->Start;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = pTVar13[-1].SharedReferenceCount.ReferenceController;
    pFVar6 = pTVar12->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar6 == (FVisualizerEvent *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar2 = pFVar6->DurationMs;
    if ((pFVar14 == (FVisualizerEvent *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar3 = pFVar14->DurationMs;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  } while (dVar3 <= dVar2);
  pTVar4 = pTVar13[-1].SharedReferenceCount.ReferenceController;
  if (pFVar11 <= pTVar12) {
    pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
    pTVar5 = pTVar15[1].SharedReferenceCount.ReferenceController;
    ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object = pTVar12->Object;
    pTVar15[1].SharedReferenceCount.ReferenceController = pTVar4;
    pTVar12->Object = pFVar14;
    pTVar13[-1].SharedReferenceCount.ReferenceController = pTVar5;
    goto LAB_148d504d3;
  }
  pFVar14 = (FVisualizerEvent *)pFVar8->Start;
  pTVar5 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
  local_388 = local_388 + -1;
  pFVar8->Start = (double)pTVar12->Object;
  ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController = pTVar4;
  pTVar12->Object = pFVar14;
  pTVar13[-1].SharedReferenceCount.ReferenceController = pTVar5;
  param_4.Predicate = local_380;
  param_3 = local_3a8;
  if ((longlong)((longlong)pTVar12 + (-0x10 - (longlong)pFVar8) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar1 - (longlong)pFVar11 & 0xfffffffffffffff0U)) {
    if (pFVar11 < local_398) {
      *local_3a0 = (TSharedPtr<FVisualizerEvent,1> *)pFVar11;
      local_3a0[1] = local_398;
      *(int *)(local_3a0 + 2) = local_388;
      local_3a0 = local_3a0 + 3;
    }
    if (pTVar12 <= (TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10))
    goto LAB_148d5072f;
    local_398 = pTVar13 + -2;
  }
  else {
    if ((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10) < pTVar12) {
      *local_3a0 = (TSharedPtr<FVisualizerEvent,1> *)local_390;
      local_3a0[1] = pTVar13 + -2;
      *(int *)(local_3a0 + 2) = local_388;
      local_3a0 = local_3a0 + 3;
    }
    local_390 = pFVar11;
    if (local_398 <= pFVar11) goto LAB_148d5072f;
  }
  iVar10 = (int)((longlong)local_398 - (longlong)local_390 >> 4) + 1;
  if (local_388 == 0) goto LAB_148d50719;
  goto LAB_148d504a0;
}

// IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l23::FCompareEventsByDurationDescending>_> @ 148d508b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_23_::FCompareEventsByDurationDescending>
          param_4)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  double dVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVisualizerEvent *pFVar6;
  code *pcVar7;
  FVisualizerEvent *pFVar8;
  bool bVar9;
  int iVar10;
  FVisualizerEvent *pFVar11;
  TSharedPtr<FVisualizerEvent,1> *pTVar12;
  TSharedPtr<FVisualizerEvent,1> *pTVar13;
  FVisualizerEvent *pFVar14;
  TSharedPtr<FVisualizerEvent,1> *pTVar15;
  float fVar16;
  undefined1 auStack_3c8 [32];
  FIdentityFunctor local_3a8;
  TSharedPtr<FVisualizerEvent,1> **local_3a0;
  TSharedPtr<FVisualizerEvent,1> *local_398;
  FVisualizerEvent *local_390;
  int local_388;
  FCompareEventsByDurationDescending *local_380;
  TSharedPtr<FVisualizerEvent,1> *local_368;
  TSharedPtr<FVisualizerEvent,1> *local_358;
  TSharedPtr<FVisualizerEvent,1> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_3c8;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_3a8 = param_3;
    local_380 = param_4.Predicate;
    local_358 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar16;
    memset(local_340,0,0x2e8);
    local_3a0 = &local_358;
    do {
      local_398 = local_3a0[1];
      local_390 = (FVisualizerEvent *)*local_3a0;
      local_368 = local_3a0[2];
      iVar10 = (int)((longlong)local_398 - (longlong)local_390 >> 4) + 1;
      local_388 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_148d509a0:
        pFVar8 = local_390;
        pTVar1 = local_398;
        if (8 < iVar10) {
          pTVar4 = ((FSharedReferencer<1> *)&local_390->Duration)->ReferenceController;
          pTVar12 = local_398 + 1;
          pFVar11 = ((TSharedPtr<FVisualizerEvent,1> *)
                    ((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))->Object;
          pTVar5 = (((TSharedPtr<FVisualizerEvent,1> *)
                    ((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))->SharedReferenceCount).
                   ReferenceController;
          ((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))
          ->Object = (FVisualizerEvent *)local_390->Start;
          (((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + (longlong)(iVar10 / 2) * 0x10))
          ->SharedReferenceCount).ReferenceController = pTVar4;
          local_390->Start = (double)pFVar11;
          ((FSharedReferencer<1> *)&local_390->Duration)->ReferenceController = pTVar5;
          pFVar11 = local_390;
LAB_148d509d3:
          pTVar15 = (TSharedPtr<FVisualizerEvent,1> *)pFVar11;
          pFVar11 = (FVisualizerEvent *)(pTVar15 + 1);
          if (pFVar11 <= pTVar1) goto code_r0x000148d509e0;
          goto LAB_148d50a80;
        }
        if (local_390 < local_398) {
          pTVar1 = (TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10);
          do {
            pFVar14 = pFVar8;
            pFVar11 = pFVar8;
            pTVar12 = pTVar1;
            if (pTVar1 <= local_398) {
              do {
                pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
                pFVar11 = pTVar12->Object;
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar5 = (((TSharedPtr<FVisualizerEvent,1> *)pFVar14)->SharedReferenceCount).
                         ReferenceController;
                local_390 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar14)->Object;
                if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar5->SharedReferenceCount =
                       (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((pFVar11 == (FVisualizerEvent *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar6 = local_390;
                dVar2 = pFVar11->DurationMs;
                if ((local_390 == (FVisualizerEvent *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                dVar3 = pFVar6->DurationMs;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar5);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                pFVar11 = (FVisualizerEvent *)pTVar12;
                if (dVar3 <= dVar2) {
                  pFVar11 = pFVar14;
                }
                pTVar12 = pTVar12 + 1;
                pFVar14 = pFVar11;
              } while (pTVar12 <= local_398);
            }
            pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
            pTVar4 = (((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->SharedReferenceCount).
                     ReferenceController;
            pTVar12 = local_398 + -1;
            pTVar5 = (local_398->SharedReferenceCount).ReferenceController;
            ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object = local_398->Object;
            (((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->SharedReferenceCount).ReferenceController
                 = pTVar5;
            local_398->Object = pFVar14;
            (local_398->SharedReferenceCount).ReferenceController = pTVar4;
            param_4.Predicate = local_380;
            local_398 = pTVar12;
          } while (pFVar8 < pTVar12);
        }
        goto LAB_148d50c2f;
      }
LAB_148d50c19:
      HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>
                ((TSharedPtr<FVisualizerEvent,1> *)local_390,iVar10,param_3,param_4);
LAB_148d50c2f:
      local_3a0 = local_3a0 + -3;
    } while (&local_358 <= local_3a0);
  }
  return;
code_r0x000148d509e0:
  pTVar4 = pTVar15[1].SharedReferenceCount.ReferenceController;
  pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
  pFVar6 = (FVisualizerEvent *)pFVar8->Start;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar14 == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar2 = pFVar14->DurationMs;
  if ((pFVar6 == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar3 = pFVar6->DurationMs;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (dVar3 <= dVar2) goto LAB_148d509d3;
LAB_148d50a80:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= pFVar8) break;
    pTVar4 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
    pFVar14 = (FVisualizerEvent *)pFVar8->Start;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = pTVar13[-1].SharedReferenceCount.ReferenceController;
    pFVar6 = pTVar12->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar14 == (FVisualizerEvent *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar2 = pFVar14->DurationMs;
    if ((pFVar6 == (FVisualizerEvent *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    dVar3 = pFVar6->DurationMs;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  } while (dVar3 <= dVar2);
  pTVar4 = pTVar13[-1].SharedReferenceCount.ReferenceController;
  if (pFVar11 <= pTVar12) {
    pFVar14 = ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object;
    pTVar5 = pTVar15[1].SharedReferenceCount.ReferenceController;
    ((TSharedPtr<FVisualizerEvent,1> *)pFVar11)->Object = pTVar12->Object;
    pTVar15[1].SharedReferenceCount.ReferenceController = pTVar4;
    pTVar12->Object = pFVar14;
    pTVar13[-1].SharedReferenceCount.ReferenceController = pTVar5;
    goto LAB_148d509d3;
  }
  pFVar14 = (FVisualizerEvent *)pFVar8->Start;
  pTVar5 = ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController;
  local_388 = local_388 + -1;
  pFVar8->Start = (double)pTVar12->Object;
  ((FSharedReferencer<1> *)&pFVar8->Duration)->ReferenceController = pTVar4;
  pTVar12->Object = pFVar14;
  pTVar13[-1].SharedReferenceCount.ReferenceController = pTVar5;
  param_4.Predicate = local_380;
  param_3 = local_3a8;
  if ((longlong)((longlong)pTVar12 + (-0x10 - (longlong)pFVar8) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar1 - (longlong)pFVar11 & 0xfffffffffffffff0U)) {
    if (pFVar11 < local_398) {
      *local_3a0 = (TSharedPtr<FVisualizerEvent,1> *)pFVar11;
      local_3a0[1] = local_398;
      *(int *)(local_3a0 + 2) = local_388;
      local_3a0 = local_3a0 + 3;
    }
    if (pTVar12 <= (TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10))
    goto LAB_148d50c2f;
    local_398 = pTVar13 + -2;
  }
  else {
    if ((TSharedPtr<FVisualizerEvent,1> *)((longlong)local_390 + 0x10) < pTVar12) {
      *local_3a0 = (TSharedPtr<FVisualizerEvent,1> *)local_390;
      local_3a0[1] = pTVar13 + -2;
      *(int *)(local_3a0 + 2) = local_388;
      local_3a0 = local_3a0 + 3;
    }
    local_390 = pFVar11;
    if (local_398 <= pFVar11) goto LAB_148d50c2f;
  }
  iVar10 = (int)((longlong)local_398 - (longlong)local_390 >> 4) + 1;
  if (local_388 == 0) goto LAB_148d50c19;
  goto LAB_148d509a0;
}

// IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l8::FCompareEventsByName>_> @ 148d50db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_8_::FCompareEventsByName>
          param_4)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  wchar_t *pwVar9;
  TSharedPtr<FVisualizerEvent,1> *pTVar10;
  TSharedPtr<FVisualizerEvent,1> *pTVar11;
  wchar_t *pwVar12;
  TSharedPtr<FVisualizerEvent,1> *pTVar13;
  TSharedPtr<FVisualizerEvent,1> *pTVar14;
  TSharedPtr<FVisualizerEvent,1> *pTVar15;
  float fVar16;
  undefined1 auStack_3b8 [32];
  FIdentityFunctor local_398;
  TSharedPtr<FVisualizerEvent,1> **local_390;
  TSharedPtr<FVisualizerEvent,1> *local_388;
  int local_380;
  TSharedPtr<FVisualizerEvent,1> *local_378;
  FCompareEventsByName *local_370;
  TSharedPtr<FVisualizerEvent,1> *local_358;
  TSharedPtr<FVisualizerEvent,1> *local_348;
  TSharedPtr<FVisualizerEvent,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_398 = param_3;
    local_370 = param_4.Predicate;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    local_390 = &local_348;
    do {
      local_388 = local_390[1];
      local_378 = *local_390;
      local_358 = local_390[2];
      iVar8 = (int)((longlong)local_388 - (longlong)local_378 >> 4) + 1;
      local_380 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148d50ea0:
        pTVar11 = local_378;
        pTVar1 = local_388;
        if (8 < iVar8) {
          pTVar2 = (local_378->SharedReferenceCount).ReferenceController;
          pTVar10 = local_388 + 1;
          pFVar3 = local_378[iVar8 / 2].Object;
          pTVar4 = local_378[iVar8 / 2].SharedReferenceCount.ReferenceController;
          local_378[iVar8 / 2].Object = local_378->Object;
          local_378[iVar8 / 2].SharedReferenceCount.ReferenceController = pTVar2;
          local_378->Object = pFVar3;
          (local_378->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar13 = local_378;
LAB_148d50ed3:
          pTVar15 = pTVar13;
          pTVar13 = pTVar15 + 1;
          if (pTVar13 <= pTVar1) goto code_r0x000148d50ee0;
          goto LAB_148d50fa3;
        }
        if (local_378 < local_388) {
          pTVar1 = local_378 + 1;
          do {
            pTVar13 = pTVar1;
            pTVar15 = pTVar11;
            pTVar10 = pTVar11;
            if (pTVar1 <= local_388) {
              do {
                pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
                pFVar3 = pTVar13->Object;
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
                pFVar5 = pTVar15->Object;
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((pFVar3 == (FVisualizerEvent *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((pFVar5 == (FVisualizerEvent *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((pFVar3->EventName).Data.ArrayNum == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
                }
                if ((pFVar5->EventName).Data.ArrayNum == 0) {
                  pwVar9 = L"";
                }
                else {
                  pwVar9 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
                }
                iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                pTVar10 = pTVar13;
                if (-1 < iVar8) {
                  pTVar10 = pTVar15;
                }
                pTVar13 = pTVar13 + 1;
                pTVar11 = local_378;
                pTVar15 = pTVar10;
              } while (pTVar13 <= local_388);
            }
            pFVar3 = pTVar10->Object;
            pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
            pTVar13 = local_388 + -1;
            pTVar4 = (local_388->SharedReferenceCount).ReferenceController;
            pTVar10->Object = local_388->Object;
            (pTVar10->SharedReferenceCount).ReferenceController = pTVar4;
            local_388->Object = pFVar3;
            (local_388->SharedReferenceCount).ReferenceController = pTVar2;
            param_4.Predicate = local_370;
            local_388 = pTVar13;
          } while (pTVar11 < pTVar13);
        }
        goto LAB_148d51170;
      }
LAB_148d5115d:
      HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>
                (local_378,iVar8,param_3,param_4);
LAB_148d51170:
      local_390 = local_390 + -3;
    } while (&local_348 <= local_390);
  }
  return;
code_r0x000148d50ee0:
  pTVar2 = pTVar15[1].SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar13->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FVisualizerEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar5 == (FVisualizerEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar3->EventName).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
  }
  if ((pFVar5->EventName).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (-1 < iVar8) goto LAB_148d50ed3;
LAB_148d50fa3:
  do {
    pTVar14 = pTVar10;
    pTVar10 = pTVar14 + -1;
    if (pTVar10 <= pTVar11) break;
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = pTVar14[-1].SharedReferenceCount.ReferenceController;
    pFVar5 = pTVar10->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar5 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar3->EventName).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
    }
    if ((pFVar5->EventName).Data.ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while (-1 < iVar8);
  pTVar2 = pTVar14[-1].SharedReferenceCount.ReferenceController;
  if (pTVar13 <= pTVar10) {
    pFVar3 = pTVar13->Object;
    pTVar4 = pTVar15[1].SharedReferenceCount.ReferenceController;
    pTVar13->Object = pTVar10->Object;
    pTVar15[1].SharedReferenceCount.ReferenceController = pTVar2;
    pTVar10->Object = pFVar3;
    pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
    goto LAB_148d50ed3;
  }
  pFVar3 = pTVar11->Object;
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_380 = local_380 + -1;
  pTVar11->Object = pTVar10->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar2;
  pTVar10->Object = pFVar3;
  pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
  param_4.Predicate = local_370;
  param_3 = local_398;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar1 - (longlong)pTVar13 & 0xfffffffffffffff0U)) {
    if (pTVar13 < local_388) {
      *local_390 = pTVar13;
      local_390[1] = local_388;
      *(int *)(local_390 + 2) = local_380;
      local_390 = local_390 + 3;
    }
    if (pTVar10 <= local_378 + 1) goto LAB_148d51170;
    local_388 = pTVar14 + -2;
  }
  else {
    if (local_378 + 1 < pTVar10) {
      *local_390 = local_378;
      local_390[1] = pTVar14 + -2;
      *(int *)(local_390 + 2) = local_380;
      local_390 = local_390 + 3;
    }
    local_378 = pTVar13;
    if (local_388 <= pTVar13) goto LAB_148d51170;
  }
  iVar8 = (int)((longlong)local_388 - (longlong)local_378 >> 4) + 1;
  if (local_380 == 0) goto LAB_148d5115d;
  goto LAB_148d50ea0;
}

// IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,`SEventsTree::SortEventsList'::__l12::FCompareEventsByNameDescending>_> @ 148d51310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_protected:_void___cdecl_SEventsTree::SortEventsList(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&)_::_12_::FCompareEventsByNameDescending>
          param_4)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FVisualizerEvent *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  wchar_t *pwVar9;
  TSharedPtr<FVisualizerEvent,1> *pTVar10;
  TSharedPtr<FVisualizerEvent,1> *pTVar11;
  wchar_t *pwVar12;
  TSharedPtr<FVisualizerEvent,1> *pTVar13;
  TSharedPtr<FVisualizerEvent,1> *pTVar14;
  TSharedPtr<FVisualizerEvent,1> *pTVar15;
  float fVar16;
  undefined1 auStack_3b8 [32];
  FIdentityFunctor local_398;
  TSharedPtr<FVisualizerEvent,1> **local_390;
  TSharedPtr<FVisualizerEvent,1> *local_388;
  int local_380;
  TSharedPtr<FVisualizerEvent,1> *local_378;
  FCompareEventsByNameDescending *local_370;
  TSharedPtr<FVisualizerEvent,1> *local_358;
  TSharedPtr<FVisualizerEvent,1> *local_348;
  TSharedPtr<FVisualizerEvent,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_398 = param_3;
    local_370 = param_4.Predicate;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    local_390 = &local_348;
    do {
      local_388 = local_390[1];
      local_378 = *local_390;
      local_358 = local_390[2];
      iVar8 = (int)((longlong)local_388 - (longlong)local_378 >> 4) + 1;
      local_380 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148d51400:
        pTVar11 = local_378;
        pTVar1 = local_388;
        if (8 < iVar8) {
          pTVar2 = (local_378->SharedReferenceCount).ReferenceController;
          pTVar10 = local_388 + 1;
          pFVar3 = local_378[iVar8 / 2].Object;
          pTVar4 = local_378[iVar8 / 2].SharedReferenceCount.ReferenceController;
          local_378[iVar8 / 2].Object = local_378->Object;
          local_378[iVar8 / 2].SharedReferenceCount.ReferenceController = pTVar2;
          local_378->Object = pFVar3;
          (local_378->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar13 = local_378;
LAB_148d51433:
          pTVar15 = pTVar13;
          pTVar13 = pTVar15 + 1;
          if (pTVar13 <= pTVar1) goto code_r0x000148d51440;
          goto LAB_148d51503;
        }
        if (local_378 < local_388) {
          pTVar1 = local_378 + 1;
          do {
            pTVar13 = pTVar1;
            pTVar15 = pTVar11;
            pTVar10 = pTVar11;
            if (pTVar1 <= local_388) {
              do {
                pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
                pFVar3 = pTVar13->Object;
                if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar2->SharedReferenceCount =
                       (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar4 = (pTVar15->SharedReferenceCount).ReferenceController;
                pFVar5 = pTVar15->Object;
                if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar4->SharedReferenceCount =
                       (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((pFVar5 == (FVisualizerEvent *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((pFVar3 == (FVisualizerEvent *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((pFVar5->EventName).Data.ArrayNum == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
                }
                if ((pFVar3->EventName).Data.ArrayNum == 0) {
                  pwVar9 = L"";
                }
                else {
                  pwVar9 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
                }
                iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar4);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                pTVar10 = pTVar13;
                if (-1 < iVar8) {
                  pTVar10 = pTVar15;
                }
                pTVar13 = pTVar13 + 1;
                pTVar11 = local_378;
                pTVar15 = pTVar10;
              } while (pTVar13 <= local_388);
            }
            pFVar3 = pTVar10->Object;
            pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
            pTVar13 = local_388 + -1;
            pTVar4 = (local_388->SharedReferenceCount).ReferenceController;
            pTVar10->Object = local_388->Object;
            (pTVar10->SharedReferenceCount).ReferenceController = pTVar4;
            local_388->Object = pFVar3;
            (local_388->SharedReferenceCount).ReferenceController = pTVar2;
            param_4.Predicate = local_370;
            local_388 = pTVar13;
          } while (pTVar11 < pTVar13);
        }
        goto LAB_148d516d0;
      }
LAB_148d516bd:
      HeapSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>
                (local_378,iVar8,param_3,param_4);
LAB_148d516d0:
      local_390 = local_390 + -3;
    } while (&local_348 <= local_390);
  }
  return;
code_r0x000148d51440:
  pTVar2 = pTVar15[1].SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar13->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar5 == (FVisualizerEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar3 == (FVisualizerEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar5->EventName).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
  }
  if ((pFVar3->EventName).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
  }
  iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (-1 < iVar8) goto LAB_148d51433;
LAB_148d51503:
  do {
    pTVar14 = pTVar10;
    pTVar10 = pTVar14 + -1;
    if (pTVar10 <= pTVar11) break;
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = pTVar14[-1].SharedReferenceCount.ReferenceController;
    pFVar5 = pTVar10->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar5 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar3 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar5->EventName).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar5->EventName).Data.AllocatorInstance.Data;
    }
    if ((pFVar3->EventName).Data.ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar3->EventName).Data.AllocatorInstance.Data;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while (-1 < iVar8);
  pTVar2 = pTVar14[-1].SharedReferenceCount.ReferenceController;
  if (pTVar13 <= pTVar10) {
    pFVar3 = pTVar13->Object;
    pTVar4 = pTVar15[1].SharedReferenceCount.ReferenceController;
    pTVar13->Object = pTVar10->Object;
    pTVar15[1].SharedReferenceCount.ReferenceController = pTVar2;
    pTVar10->Object = pFVar3;
    pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
    goto LAB_148d51433;
  }
  pFVar3 = pTVar11->Object;
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_380 = local_380 + -1;
  pTVar11->Object = pTVar10->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar2;
  pTVar10->Object = pFVar3;
  pTVar14[-1].SharedReferenceCount.ReferenceController = pTVar4;
  param_4.Predicate = local_370;
  param_3 = local_398;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar1 - (longlong)pTVar13 & 0xfffffffffffffff0U)) {
    if (pTVar13 < local_388) {
      *local_390 = pTVar13;
      local_390[1] = local_388;
      *(int *)(local_390 + 2) = local_380;
      local_390 = local_390 + 3;
    }
    if (pTVar10 <= local_378 + 1) goto LAB_148d516d0;
    local_388 = pTVar14 + -2;
  }
  else {
    if (local_378 + 1 < pTVar10) {
      *local_390 = local_378;
      local_390[1] = pTVar14 + -2;
      *(int *)(local_390 + 2) = local_380;
      local_390 = local_390 + 3;
    }
    local_378 = pTVar13;
    if (local_388 <= pTVar13) goto LAB_148d516d0;
  }
  iVar8 = (int)((longlong)local_388 - (longlong)local_378 >> 4) + 1;
  if (local_380 == 0) goto LAB_148d516bd;
  goto LAB_148d51400;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>,int_&,int_&> @ 148d51870

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_2,int *param_3,
                    int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&> @ 148d51890

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>
          (TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_> @ 148d518a0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FVisualizerEvent,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_> @ 148d518b0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SEventItem,1>_> @ 148d518c0

T1RequiredArgs<TSharedRef<SEventItem,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SEventItem,1>_>(TSharedRef<SEventItem,1> *param_1)

{
  SEventItem *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SEventItem,1>_&&>)param_1;
}

// MakeTDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> @ 148d518d0

TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_> @ 148d51980

TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FVisualizerEvent,1>_>::STableRow<TSharedPtr<FVisualizerEvent,1>_>
              ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_> @ 148d51b30

TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FVisualizerEvent,1>_>::STableRow<TSharedPtr<FVisualizerEvent,1>_>
              ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 148d51ce0

TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FVisualizerEvent,1>_>::STableRow<TSharedPtr<FVisualizerEvent,1>_>
              ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> @ 148d51e90

TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs> @ 148d51f40

TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 148d51ff0

TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> * __cdecl
MakeTDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
          (TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *pTVar4
  ;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *local_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SEventItem *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x4a0);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VSEventItem___00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x490);
    STableRow<TSharedPtr<FVisualizerEvent,1>_>::STableRow<TSharedPtr<FVisualizerEvent,1>_>
              ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ = (longlong)&SEventItem::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount = &SEventItem::_vftable__for__SBorder__;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar3[0x48]._padding_ = 0;
    pTVar3[0x49].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<SEventItem,1>::TSharedRef<SEventItem,1>
            ((TSharedRef<SEventItem,1> *)(local_48 + 0x10),(SEventItem *)(pTVar5 + 1),pTVar5);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> *)
      local_48) {
    (__return_storage_ptr__->_Widget).Object = (SEventItem *)local_48._16_8_;
    local_48._0_8_ = (SEventItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  TSharedRef<SEventItem,1>::~TSharedRef<SEventItem,1>((TSharedRef<SEventItem,1> *)(local_48 + 0x10))
  ;
  if (((__return_storage_ptr__->_Widget).Object == (SEventItem *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x490);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SEventsTree,RequiredArgs::T0RequiredArgs> @ 148d52250

TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEventsTree,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_> @ 148d52300

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_> @ 148d523b0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_> * __cdecl
MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>
          (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<SEventItem,1>_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SEventItem,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGraphBar,RequiredArgs::T0RequiredArgs> @ 148d52460

TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGraphBar,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_> @ 148d52510

TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs> @ 148d525c0

TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STimeline,RequiredArgs::T0RequiredArgs> @ 148d52670

TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STimeline,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<FVisualizerEvent,1>_>_> @ 148d52720

TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,STreeView<TSharedPtr<FVisualizerEvent,1>_>_>(void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *)0x0)
  {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<FVisualizerEvent,1>_>::SListView<TSharedPtr<FVisualizerEvent,1>_>
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)&pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<FVisualizerEvent,1>_>::_vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<FVisualizerEvent,1>_>::_vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFVisualizerEvent___00____6B_;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<FVisualizerEvent,1>_>::SetItemsSource'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &
                    ___7__FArrayPointer_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<FVisualizerEvent,1>_>::SetItemsSource
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)&pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)&local_res8);
  return pTVar4;
}

// Reverse<TSharedPtr<FVisualizerEvent,1>_> @ 148d53d40

void __cdecl
AlgoImpl::Reverse<TSharedPtr<FVisualizerEvent,1>_>
          (TSharedPtr<FVisualizerEvent,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FVisualizerEvent,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 148d578d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// operator[] @ 148d59590

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
NamedSlotProperty<SHeaderRow::FColumn::FArguments>::operator[]
          (NamedSlotProperty<SHeaderRow::FColumn::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// `vcall'{152,{flat}}'_}' @ 148d5b524

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FVisualizerEvent,1> >::`vcall'{152,{flat}}' }'
    */

void __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FVisualizerEvent,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d5b527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 148d5b534

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FVisualizerEvent,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d5b548

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   FVisualizerEvent,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)
                      &this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d5b558

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FVisualizerEvent,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 148d5b568

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   FVisualizerEvent,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<FVisualizerEvent,1>_> *)&this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d5b57c

/* [thunk]:public: virtual void * __ptr64 __cdecl SEventItem::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
SEventItem::_vector_deleting_destructor__adjustor_8__(SEventItem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SEventItem *)&this[-1].EventDuration.Getter.field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148d5b590

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b5c0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
            *)&this->ItemsSource->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b680

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_
  ;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
            *)&((this->ItemsSource).Object)->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b700

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b730

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b760

void * __thiscall
IBaseDelegateInstance<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b790

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b7c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b7f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FGeometry),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b820

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b850

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b880

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b8b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b8e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b910

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b940

void * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FVisualizerEvent,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5b9a0

void * __thiscall
SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::~STableRow<TSharedPtr<FVisualizerEvent,1>_>
            ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ba40

void * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FVisualizerEvent,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5baa0

void * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<FVisualizerEvent,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bb00

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bb30

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bb60

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bb90

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bbf0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FVisualizerEvent,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bc50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bcb0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bd10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bd70

void * __thiscall
TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SBarVisualizer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bdd0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEventItem_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5be30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5be90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy,double>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bef0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEventsTree_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bf50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5bfb0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c010

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c070

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c0d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c140

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c1a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c210

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c270

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(FGeometry),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c2d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c330

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c390

void * __thiscall
TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SBarVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c3f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c450

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c4b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c510

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c570

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c5d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c630

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c690

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEventsTree,1,void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c6f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c750

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c7b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c810

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c870

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c8d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SProfileVisualizer,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c930

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c960

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c990

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5c9d0

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FVisualizerEvent,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ca10

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ca40

void * __thiscall
TCommonDelegateInstanceState<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy,FName>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ca70

void * __thiscall
TCommonDelegateInstanceState<double___cdecl(void),FDefaultDelegateUserPolicy,double>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<double___cdecl(void),FDefaultDelegateUserPolicy,double>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5caa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cad0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FVisualizerEvent,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cb00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FGeometry),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cb30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cb60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cb90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cbc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cbf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cc20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cc50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cc80

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,unsigned_char>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ccb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ccf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cd30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cd70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cdb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cdf0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SBarVisualizer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SBarVisualizer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ce30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEventItem,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SEventItem,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ce70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEventsTree,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SEventsTree,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x398);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5ceb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGraphBar,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SGraphBar,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cef0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cf30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProfileVisualizer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SProfileVisualizer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x338);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cf70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STimeline,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STimeline,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cfb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVisualizerEvent,SharedPointerInternals::DefaultDeleter<FVisualizerEvent>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FVisualizerEvent,SharedPointerInternals::DefaultDeleter<FVisualizerEvent>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5cff0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDelayedVisualizerSpawner,SharedPointerInternals::DefaultDeleter<FDelayedVisualizerSpawner>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FDelayedVisualizerSpawner,SharedPointerInternals::DefaultDeleter<FDelayedVisualizerSpawner>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d030

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FProfileVisualizerStyle::FStyle,SharedPointerInternals::DefaultDeleter<FProfileVisualizerStyle::FStyle>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FProfileVisualizerStyle::FStyle,SharedPointerInternals::DefaultDeleter<FProfileVisualizerStyle::FStyle>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d070

void * __thiscall
TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FVisualizerEvent,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d0e0

void * __thiscall
FDelayedVisualizerSpawner::_scalar_deleting_destructor_
          (FDelayedVisualizerSpawner *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDelayedVisualizerSpawner__6B_;
  DestructItems<TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1>,int>
            ((TSharedPtr<FDelayedVisualizerSpawner::FPendingWindow,1> *)
             (this->VisualizerDataToSpawn).AllocatorInstance.Data,
             (this->VisualizerDataToSpawn).ArrayNum);
  pFVar1 = (this->VisualizerDataToSpawn).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DataLock);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d150

void * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleListView::_scalar_deleting_destructor_
          (FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d190

void * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleTableRow::_scalar_deleting_destructor_
          (FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d1d0

void * __thiscall
FProfileVisualizerStyle::FStyle::_scalar_deleting_destructor_(FStyle *this,uint param_1)

{
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d210

void * __thiscall SBarVisualizer::_scalar_deleting_destructor_(SBarVisualizer *this,uint param_1)

{
  ~SBarVisualizer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d270

void * __thiscall SEventItem::_scalar_deleting_destructor_(SEventItem *this,uint param_1)

{
  ~SEventItem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x490);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d2d0

void * __thiscall SEventsTree::_scalar_deleting_destructor_(SEventsTree *this,uint param_1)

{
  ~SEventsTree(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d330

void * __thiscall SGraphBar::_scalar_deleting_destructor_(SGraphBar *this,uint param_1)

{
  ~SGraphBar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d390

void * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::_scalar_deleting_destructor_
          (SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&this->OwnerListView);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d400

void * __thiscall
SProfileVisualizer::_scalar_deleting_destructor_(SProfileVisualizer *this,uint param_1)

{
  ~SProfileVisualizer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x328);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d5d460

void * __thiscall STimeline::_scalar_deleting_destructor_(STimeline *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// ClearEventsSelection @ 148d5dc30

void __cdecl
ClearEventsSelection(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 + 8);
      lVar3 = *(longlong *)(pFVar1 + lVar9);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar3 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)(lVar3 + 0x30) = 0;
      if ((lVar3 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(lVar3 + 0x50) != 0) {
        ClearEventsSelection
                  ((TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                   (lVar3 + 0x48));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DisplayProfileVisualizer @ 148d73210

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DisplayProfileVisualizer
          (TSharedPtr<FVisualizerEvent,1> *param_1,wchar_t *param_2,FText *param_3,
          FLinearColor *param_4)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_d8;
  FString local_c8;
  TSharedPtr<FVisualizerEvent,1> local_b8;
  FText local_a8;
  FText local_98;
  FFormatArgumentValue local_88;
  FText local_68;
  FText local_58;
  FText local_48;
  TSharedRef<SDockTab,1> local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\ProfileVisualizerModule.cpp"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Pairs.ArrayNum = 0;
  local_d8.Pairs.ArrayMax = 0;
  pFVar3 = FText::FromString(&local_68,param_2);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,pFVar3);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FString::FString(&local_c8,L"ProfilerType");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_d8,&local_c8,&local_88);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"ProfileVisualizer",L"WindowTitle",L"{ProfilerType} Visualizer");
  pFVar4 = FTextFormat::FTextFormat(&local_28,pFVar3,Default);
  FText::Format(&local_98,pFVar4,&local_d8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ProfileVisualizer",L"ProfilerType",L"{ProfilerType} Profile");
  pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
  FText::Format(&local_a8,pFVar4,&local_d8);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeProfileVisualizerWindow(&local_38,&local_b8,&local_98,&local_a8,param_3,param_4,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data,
             local_d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_d8.Pairs.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InitProfileVisualizer @ 148d7f230

void __cdecl InitProfileVisualizer(void)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  TRawPtrProxy<FProfileVisualizerStyle::FStyle> local_res10;
  TRawPtrProxy<FDelayedVisualizerSpawner> local_res18 [2];
  
  local_res10.Object = operator_new(0x400);
  if ((FSlateStyleSet *)local_res10.Object == (FSlateStyleSet *)0x0) {
    local_res10.Object = (FStyle *)0x0;
  }
  else {
    FName::FName(&local_res8,"ProfileVisualizerStyle");
    FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)local_res10.Object,&local_res8);
    ((FSlateStyleSet *)local_res10.Object)->_padding_ =
         (longlong)&___7FStyle_FProfileVisualizerStyle__6B_;
  }
  TSharedPtr<FProfileVisualizerStyle::FStyle,1>::operator=<FProfileVisualizerStyle::FStyle>
            (&FProfileVisualizerStyle::StyleInstance,&local_res10);
  if (FProfileVisualizerStyle::StyleInstance.Object == (FStyle *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GDelayedVisualizerSpawner.Object == (FDelayedVisualizerSpawner *)0x0) {
    local_res18[0].Object = operator_new(0x40);
    if (local_res18[0].Object == (FDelayedVisualizerSpawner *)0x0) {
      local_res18[0].Object = (FDelayedVisualizerSpawner *)0x0;
    }
    else {
      FTickableGameObject::FTickableGameObject
                ((FTickableGameObject *)local_res18[0].Object,NewObject);
      (local_res18[0].Object)->_padding_ = (longlong)&___7FDelayedVisualizerSpawner__6B_;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&(local_res18[0].Object)->DataLock,4000);
      ((local_res18[0].Object)->VisualizerDataToSpawn).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      ((local_res18[0].Object)->VisualizerDataToSpawn).ArrayNum = 0;
      ((local_res18[0].Object)->VisualizerDataToSpawn).ArrayMax = 0;
    }
    TSharedPtr<FDelayedVisualizerSpawner,1>::operator=<FDelayedVisualizerSpawner>
              (&GDelayedVisualizerSpawner,local_res18);
  }
  return;
}

// MakeProfileVisualizerWindow @ 148d81d80

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
MakeProfileVisualizerWindow
          (TSharedRef<SDockTab,1> *__return_storage_ptr__,TSharedPtr<FVisualizerEvent,1> *param_1,
          FText *param_2,FText *param_3,FText *param_4,FLinearColor *param_5,bool param_6)

{
  byte *pbVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FVisualizerEvent *pFVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  code *pcVar7;
  undefined8 uVar8;
  SDockTab *pSVar9;
  SProfileVisualizer *pSVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  FArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SDockTab,1> *pTVar17;
  TSharedRef<FGlobalTabmanager,1> *pTVar18;
  T0RequiredArgs local_res8 [8];
  TSharedPtr<FVisualizerEvent,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_798 [2];
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_790;
  TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs> local_778;
  FText local_760;
  bool local_750;
  undefined1 local_748 [8];
  ForAnyElementType FStack_740;
  ulonglong local_738;
  undefined1 local_730 [4];
  undefined1 local_72c [4];
  undefined1 local_728 [4];
  undefined1 local_724 [4];
  undefined1 local_720 [4];
  FName local_71c;
  FMemScope local_710;
  FName local_708;
  FMemScope local_700;
  FDestructionSentinel local_6f8;
  FVisualizerEvent *local_6e0;
  TReferenceControllerBase<1> *pTStack_6d8;
  SWidget *local_6d0;
  TReferenceControllerBase<1> *pTStack_6c8;
  FArguments local_6c0;
  FArguments local_478;
  
  local_res10 = param_1;
  pFVar15 = SDockTab::FArguments::FArguments(&local_478);
  local_760.TextData.Reference = (param_2->TextData).Reference;
  if (local_760.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_760.TextData.Reference + 8))
              (local_760.TextData.Reference,local_730);
  }
  local_760.Flags = param_2->Flags;
  local_750 = true;
  local_738 = 0;
  local_748 = (undefined1  [8])0x0;
  FStack_740.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar15->_Label).Value,&local_760);
  (pFVar15->_Label).bIsSet = local_750;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_6f8);
  if (((int)local_738 != 0) && (FStack_740.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_740.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10);
    local_738 = local_738 & 0xffffffff00000000;
  }
  if (local_6f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
  }
  if (FStack_740.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_740.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_748);
  if (local_760.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_760.TextData.Reference + 0x10))();
  }
  pFVar15->_TabRole = NomadTab;
  pFVar16 = SProfileVisualizer::FArguments::FArguments(&local_6c0);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6e0 = (pFVar16->_ProfileData).Object;
  pTStack_6d8 = (pFVar16->_ProfileData).SharedReferenceCount.ReferenceController;
  (pFVar16->_ProfileData).Object = pFVar4;
  (pFVar16->_ProfileData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pIVar5 = (param_3->TextData).Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_72c);
  }
  uVar2 = param_3->Flags;
  pIVar6 = (pFVar16->_ProfilerType).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (pFVar16->_ProfilerType).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_728);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (pFVar16->_ProfilerType).Flags = uVar2;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  pIVar5 = (param_4->TextData).Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_724);
  }
  uVar2 = param_4->Flags;
  pIVar6 = (pFVar16->_HeaderMessageText).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (pFVar16->_HeaderMessageText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_720);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (pFVar16->_HeaderMessageText).Flags = uVar2;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  uVar8 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&(pFVar16->_HeaderMessageTextColor).field0_0x0 =
       *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&(pFVar16->_HeaderMessageTextColor).field0_0x0 + 8) = uVar8;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_71c = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_710,&local_71c,true);
  TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SProfileVisualizer,RequiredArgs::T0RequiredArgs>
            (&local_778,"SProfileVisualizer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\ProfileVisualizerModule.cpp"
             ,0x21,local_res8);
  FMemScope::~FMemScope(&local_710);
  FLLMScope::~FLLMScope(local_res20);
  pSVar10 = local_778._Widget.Object;
  if (local_778._Widget.Object == (SProfileVisualizer *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_778._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SProfileVisualizer::Construct(local_778._Widget.Object,pFVar16);
  if (local_778._Widget.Object == (SProfileVisualizer *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  if (((local_778._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_778._Widget.Object)->_padding_ + 0x228))(local_778._Widget.Object);
    bVar14 = 0;
    if (cVar13 != '\0') goto LAB_148d820d6;
  }
  else {
LAB_148d820d6:
    bVar14 = 0x20;
  }
  *(byte *)&(local_778._Widget.Object)->_padding_ =
       (byte)(local_778._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_778._Widget.Object)->_padding_ =
       (byte)(local_778._Widget.Object)->_padding_ | bVar14;
  if (local_778._Widget.Object == (SProfileVisualizer *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_778._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_778._Widget.Object == (SProfileVisualizer *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  FVar11.ReferenceController = local_778._Widget.SharedReferenceCount.ReferenceController;
  local_778._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_778._Widget.Object = (SProfileVisualizer *)0x0;
  if (pSVar10 == (SProfileVisualizer *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6d0 = (pFVar15->_Content).Widget.Object;
  pTStack_6c8 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = (SWidget *)pSVar10;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6c8);
  FLLMScope::FLLMScope(local_798,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_700,&local_708,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_790,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\ProfileVisualizerModule.cpp"
             ,0x1d,local_res18);
  FMemScope::~FMemScope(&local_700);
  FLLMScope::~FLLMScope(local_798);
  pSVar9 = local_790._Widget.Object;
  if (local_790._Widget.Object == (SDockTab *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_790._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SDockTab::Construct(local_790._Widget.Object,pFVar15);
  if (local_790._Widget.Object == (SDockTab *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  if (((local_790._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar13 = (**(code **)((local_790._Widget.Object)->_padding_ + 0x228))(local_790._Widget.Object);
    bVar14 = 0;
    if (cVar13 == '\0') goto LAB_148d822b7;
  }
  bVar14 = 0x20;
LAB_148d822b7:
  *(byte *)&(local_790._Widget.Object)->_padding_ =
       (byte)(local_790._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_790._Widget.Object)->_padding_ =
       (byte)(local_790._Widget.Object)->_padding_ | bVar14;
  if (local_790._Widget.Object == (SDockTab *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_790._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_790._Widget.Object == (SDockTab *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_790._Widget.SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->Object = local_790._Widget.Object;
  local_790._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_790._Widget.Object = (SDockTab *)0x0;
  if (pSVar9 == (SDockTab *)0x0) {
    bVar12 = FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      pTVar17 = (TSharedRef<SDockTab,1> *)(*pcVar7)();
      return pTVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_778._Widget.SharedReferenceCount.ReferenceController);
  if (local_6c0._HeaderMessageText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6c0._HeaderMessageText.TextData.Reference + 0x10))();
  }
  if (local_6c0._ProfilerType.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6c0._ProfilerType.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c0._ProfileData.SharedReferenceCount.ReferenceController);
  if (local_6c0._LayoutString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0._LayoutString.Data.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6c0);
  SDockTab::FArguments::~FArguments(&local_478);
  if (param_6) {
    pTVar18 = FGlobalTabmanager::Get();
    FTabManager::InsertNewDocumentTab
              ((FTabManager *)pTVar18->Object,ProfileVisualizerTabId,RequireClosedTab,
               __return_storage_ptr__);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ShutdownProfileVisualizer @ 148d919d0

void __cdecl ShutdownProfileVisualizer(void)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> local_20;
  undefined8 local_18;
  FSharedReferencer<1> local_10;
  
  if (FProfileVisualizerStyle::StyleInstance.Object != (FStyle *)0x0) {
    FSlateStyleRegistry::UnRegisterSlateStyle
              ((ISlateStyle *)FProfileVisualizerStyle::StyleInstance.Object);
    if ((FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController ==
         (TReferenceControllerBase<1> *)0x0) ||
       ((FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount != (atomic<int>)0x1)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2713369477856100301>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\ProfileVisualizerStyle.cpp"
                         ,0x33,"StyleInstance.IsUnique()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FProfileVisualizerStyle::StyleInstance.Object = (FStyle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FProfileVisualizerStyle::StyleInstance.SharedReferenceCount,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  GDelayedVisualizerSpawner.Object = (FDelayedVisualizerSpawner *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&GDelayedVisualizerSpawner.SharedReferenceCount,&local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  return;
}

// IMPLEMENT_MODULE_ProfileVisualizer @ 148d940c0

void __cdecl IMPLEMENT_MODULE_ProfileVisualizer(void)

{
  return;
}

// StyleInstance'' @ 15040c5f0

void __cdecl `dynamic_atexit_destructor_for_'FProfileVisualizerStyle::StyleInstance__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'GDelayedVisualizerSpawner'' @ 15040c610

void __cdecl _dynamic_atexit_destructor_for__GDelayedVisualizerSpawner__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (GDelayedVisualizerSpawner.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15040c630

void __cdecl
`SListView<TSharedPtr<FVisualizerEvent,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FVisualizerEvent,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FVisualizerEvent,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FVisualizerEvent,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Units'' @ 15040c650

void __cdecl
`SEventsTree::GetDurationColumnTitle'::__l2::_dynamic_atexit_destructor_for__Units__(void)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &::_TSS0;
  lVar2 = 3;
  do {
    plVar1 = (longlong *)(piVar3 + -4);
    piVar3 = piVar3 + -4;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  return;
}

