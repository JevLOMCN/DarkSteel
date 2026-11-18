// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 9

// InterpretResult @ 142ebab40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FSimulationResult * __thiscall
FSlateNavigationEventSimulator::InterpretResult
          (FSlateNavigationEventSimulator *this,FSimulationResult *__return_storage_ptr__,
          FWidgetPath *param_1,FNavigationEvent *param_2,FNavigationReply *param_3,
          FArrangedWidget *param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  EUINavigationRule EVar5;
  undefined4 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWindow *pSVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  EVisibility EVar12;
  bool bVar13;
  char cVar14;
  atomic<int> aVar15;
  uint uVar16;
  FSimulationResult *pFVar17;
  TSharedPtr<FNavigationMetaData,1> *pTVar18;
  FHittestGrid *this_00;
  TSharedPtr<SWidget,1> *pTVar19;
  TSharedRef<SWindow,1> *pTVar20;
  undefined8 *puVar21;
  FSlateApplication *pFVar22;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar23;
  TSharedRef<SWidget,1> *pTVar24;
  FWidgetPath *pFVar25;
  FArrangedWidget *pFVar26;
  longlong *plVar27;
  ForElementType<FArrangedWidget> FVar28;
  SWidget *pSVar29;
  SWidget **ppSVar30;
  uint uVar31;
  ISlateViewport *pIVar32;
  TReferenceControllerBase<1> *pTVar33;
  longlong lVar34;
  undefined1 auStackY_788 [32];
  TReferenceControllerBase<1> *local_740;
  SWidget *local_738;
  FSharedReferencer<1> local_730;
  SWidget *local_728;
  TReferenceControllerBase<1> *local_720;
  SWidget *local_718;
  FSharedReferencer<1> local_710;
  SWidget *local_708;
  FSharedReferencer<1> local_700;
  EUINavigationRule local_6f8;
  TSharedRef<SWindow,1> *local_6e8;
  int local_6e0;
  TSharedRef<SWindow,1> local_6d8;
  TSharedRef<SWidget_const_,1> local_6c8;
  SWidget *local_6b8;
  TReferenceControllerBase<1> *local_6b0;
  TSharedRef<SWidget_const_,1> local_6a8;
  SWidget *local_698;
  TReferenceControllerBase<1> *pTStack_690;
  FWeakWidgetPath local_688;
  TSharedPtr<FNavigationMetaData,1> local_668;
  SWidget *local_658;
  TReferenceControllerBase<1> *pTStack_650;
  TSharedPtr<SWidget,1> local_648;
  TSharedRef<SWindow,1> local_638;
  undefined1 local_628 [8];
  longlong *local_620;
  TSharedRef<SWidget,1> local_618;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  FWidgetPath local_5d8;
  bool local_478;
  FWidgetPath local_470;
  FWidgetPath local_310;
  FWidgetPath local_1b0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_788;
  FSimulationResult::FSimulationResult(__return_storage_ptr__);
  FWidgetPath::operator=(&__return_storage_ptr__->NavigationSource,param_1);
  __return_storage_ptr__->NavigationType = param_2->NavigationType;
  local_710.ReferenceController = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
  local_718 = (param_3->EventHandler).Object;
  if (local_710.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_710.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_710.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_700.ReferenceController = (param_3->FocusRecipient).SharedReferenceCount.ReferenceController
  ;
  local_708 = (param_3->FocusRecipient).Object;
  if (local_700.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_700.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_700.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6f8 = param_3->BoundaryRule;
  if (&__return_storage_ptr__->NavigationReply != (FSimulatedReply *)&local_718) {
    (__return_storage_ptr__->NavigationReply).EventHandler.Object = local_718;
    local_718 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->NavigationReply).EventHandler.SharedReferenceCount,
               &local_710);
  }
  pTVar19 = &(__return_storage_ptr__->NavigationReply).FocusRecipient;
  if (pTVar19 != (TSharedPtr<SWidget,1> *)&local_708) {
    pTVar19->Object = local_708;
    local_708 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->NavigationReply).FocusRecipient.SharedReferenceCount,
               &local_700);
  }
  (__return_storage_ptr__->NavigationReply).BoundaryRule = local_6f8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_710.ReferenceController);
  pTVar7 = (param_3->EventHandler).SharedReferenceCount.ReferenceController;
  pSVar29 = (param_3->EventHandler).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar29 == (SWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar17 = (FSimulationResult *)(*pcVar9)();
    return pFVar17;
  }
  pTVar18 = SWidget::GetMetaData<FNavigationMetaData>(pSVar29,&local_668);
  __return_storage_ptr__->bRoutedHandlerHasNavigationMeta =
       pTVar18->Object != (FNavigationMetaData *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  EVar5 = param_3->BoundaryRule;
  if (EVar5 == Explicit) {
    __return_storage_ptr__->bIsDynamic = true;
    pTVar7 = (param_3->FocusRecipient).SharedReferenceCount.ReferenceController;
    pSVar29 = (param_3->FocusRecipient).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_658 = (__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object;
    pTStack_650 = (__return_storage_ptr__->WidgetThatShouldReceivedFocus).SharedReferenceCount.
                  ReferenceController;
    (__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object = pSVar29;
    (__return_storage_ptr__->WidgetThatShouldReceivedFocus).SharedReferenceCount.ReferenceController
         = pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_650)
    ;
    __return_storage_ptr__->bAlwaysHandleNavigationAttempt = true;
  }
  else if (EVar5 == Custom) {
    __return_storage_ptr__->bIsDynamic = true;
    __return_storage_ptr__->bAlwaysHandleNavigationAttempt = true;
  }
  else if (EVar5 == CustomBoundary) {
    __return_storage_ptr__->bIsDynamic = true;
  }
  else if ((param_2->NavigationType == Next) || (param_2->NavigationType == Previous)) {
    FWeakWidgetPath::FWeakWidgetPath(&local_688,param_1);
    FWeakWidgetPath::ToNextFocusedPath
              (&local_688,&local_310,param_2->NavigationType,param_3,param_4);
    uVar31 = 0;
    if ((int)(local_310.Widgets.Array.ArrayNum - 1U) < local_310.Widgets.Array.ArrayNum) {
      uVar31 = ~(local_310.Widgets.Array.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      pFVar17 = (FSimulationResult *)(*pcVar9)();
      return pFVar17;
    }
    FVar28 = (ForElementType<FArrangedWidget>)&local_310.Widgets.Array;
    if (local_310.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar28 = local_310.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    local_738 = *(SWidget **)
                 ((longlong)((longlong)FVar28 + -0x10) +
                 (longlong)local_310.Widgets.Array.ArrayNum * 0x48);
    local_730.ReferenceController =
         ((FSharedReferencer<1> *)((longlong)FVar28 + -8))
         [(longlong)local_310.Widgets.Array.ArrayNum * 9].ReferenceController;
    if (local_730.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_730.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_730.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&__return_storage_ptr__->WidgetThatShouldReceivedFocus !=
        (TSharedPtr<SWidget,1> *)&local_738) {
      (__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object = local_738;
      local_738 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->WidgetThatShouldReceivedFocus).SharedReferenceCount,
                 &local_730);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_730.ReferenceController);
    if (local_310.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_310.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_310.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar28 = (ForElementType<FArrangedWidget>)&local_310.Widgets.Array;
    if (local_310.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar28 = local_310.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar28,local_310.Widgets.Array.ArrayNum);
    if (local_310.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_310.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    if (local_688.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_688.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_688.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_688.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_688.Widgets.AllocatorInstance.Data,
               local_688.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_688.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_688.Widgets.AllocatorInstance.Data);
    }
  }
  else {
    pFVar26 = FArrangedChildren::Last(&param_1->Widgets);
    pTVar20 = FWidgetPath::GetDeepestWindow(param_1,&local_638);
    this_00 = SWindow::GetHittestGrid(pTVar20->Object);
    pTVar19 = FHittestGrid::FindNextFocusableWidget
                        (this_00,&local_648,pFVar26,param_2->NavigationType,param_3,param_4,
                         *(int *)((longlong)&param_2->_padding_ + 4));
    TSharedPtr<SWidget,1>::operator=(&__return_storage_ptr__->WidgetThatShouldReceivedFocus,pTVar19)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.SharedReferenceCount.ReferenceController);
  }
  if ((__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object == (SWidget *)0x0) {
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_608);
  if (((*(int *)&(this->OnViewportHandleNavigation).field_0x10 == 0) ||
      (plVar27 = *(longlong **)&(this->OnViewportHandleNavigation).field_0x8,
      plVar27 == (longlong *)0x0)) || (cVar14 = (**(code **)(*plVar27 + 0x38))(), cVar14 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    pTVar20 = FWidgetPath::GetWindow(param_1,&local_6d8);
    pIVar32 = (ISlateViewport *)0x0;
    pSVar8 = pTVar20->Object;
    pTVar7 = (pSVar8->Viewport).WeakReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar7->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_6d8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_142ebb134;
        }
        LOCK();
        aVar15 = pTVar7->SharedReferenceCount;
        bVar13 = aVar3 == aVar15;
        if (bVar13) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar15 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar15;
      } while (!bVar13);
      pIVar32 = (pSVar8->Viewport).Object;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d8.SharedReferenceCount.ReferenceController);
    if (pIVar32 != (ISlateViewport *)0x0) {
      puVar21 = (undefined8 *)(**(code **)((longlong)*pIVar32 + 0x158))(pIVar32,local_628);
      pSVar29 = (SWidget *)0x0;
      pTVar33 = (TReferenceControllerBase<1> *)puVar21[1];
      if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar33->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar33 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar15 = pTVar33->SharedReferenceCount;
          bVar13 = aVar3 == aVar15;
          if (bVar13) {
            pTVar33->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar15 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar15;
        } while (!bVar13);
        plVar27 = (longlong *)puVar21[1];
        LOCK();
        piVar2 = (int *)((longlong)plVar27 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (plVar27 != (longlong *)0x0)) {
          (**(code **)(*plVar27 + 8))(plVar27,1);
        }
        puVar21[1] = 0;
        if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
          pSVar29 = (SWidget *)*puVar21;
          *puVar21 = 0;
        }
      }
      if (local_620 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_620 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_620 + 8))(local_620,1);
        }
      }
      if ((pSVar29 != (SWidget *)0x0) &&
         (bVar13 = FWidgetPath::ContainsWidget(param_1,pSVar29), bVar13)) {
        uVar6 = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_5f0);
        if (*(int *)&(this->OnViewportHandleNavigation).field_0x10 == 0) {
          plVar27 = (longlong *)0x0;
        }
        else {
          plVar27 = *(longlong **)&(this->OnViewportHandleNavigation).field_0x8;
        }
        (**(code **)(*plVar27 + 0x60))
                  (plVar27,&local_5d8,uVar6,&__return_storage_ptr__->WidgetThatShouldReceivedFocus);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_5f0);
        __return_storage_ptr__->bHandledByViewport = local_478;
        if ((local_478 != false) &&
           (FWidgetPath::operator=(&__return_storage_ptr__->NavigationDestination,&local_5d8),
           local_478 != false)) {
          FWidgetPath::~FWidgetPath(&local_5d8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_142ebb134:
  if (__return_storage_ptr__->bHandledByViewport != false) {
    return __return_storage_ptr__;
  }
  FWidgetPath::FWidgetPath(&local_470);
  EVar12 = EVisibility::Visible;
  if (((__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object == (SWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar17 = (FSimulationResult *)(*pcVar9)();
    return pFVar17;
  }
  pTVar7 = (__return_storage_ptr__->WidgetThatShouldReceivedFocus).SharedReferenceCount.
           ReferenceController;
  pSVar29 = (__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar29 == (SWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    pFVar17 = (FSimulationResult *)(*pcVar9)();
    return pFVar17;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6c8.Object = pSVar29;
  local_6c8.SharedReferenceCount.ReferenceController = pTVar7;
  pFVar22 = FSlateApplication::Get();
  pTVar23 = (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *)
            (**(code **)(*(longlong *)pFVar22 + 0x40))(pFVar22,&local_6e8);
  bVar13 = FSlateWindowHelper::FindPathToWidget(pTVar23,&local_6c8,&local_470,EVar12);
  __return_storage_ptr__->bCanFindWidgetForSetFocus = bVar13;
  DestructItems<TSharedRef<SWindow,1>,int>(local_6e8,local_6e0);
  if (local_6e8 != (TSharedRef<SWindow,1> *)0x0) {
    FMemory::Free(local_6e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (__return_storage_ptr__->bCanFindWidgetForSetFocus == false) {
    pFVar22 = FSlateApplication::Get();
    EVar12 = EVisibility::Visible;
    pcVar9 = *(code **)(*(longlong *)pFVar22 + 0x20);
    pTVar24 = TSharedPtr<SWidget,1>::ToSharedRef
                        (&__return_storage_ptr__->WidgetThatShouldReceivedFocus,&local_618);
    local_6b8 = pTVar24->Object;
    local_6b0 = (pTVar24->SharedReferenceCount).ReferenceController;
    if (local_6b0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_6b0->SharedReferenceCount = (atomic<int>)((int)local_6b0->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar13 = (bool)(*pcVar9)(pFVar22,&local_6b8,&local_470,EVar12.Value.Value);
    __return_storage_ptr__->bCanFindWidgetForSetFocus = bVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_618.SharedReferenceCount.ReferenceController);
    if (__return_storage_ptr__->bCanFindWidgetForSetFocus == false) goto LAB_142ebb4d3;
  }
  uVar31 = local_470.Widgets.Array.ArrayNum - 1;
  if (-1 < (int)uVar31) {
    lVar34 = (longlong)(int)uVar31 * 0x48;
    do {
      uVar16 = 0;
      if ((int)uVar31 < local_470.Widgets.Array.ArrayNum) {
        uVar16 = ~uVar31 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        pFVar17 = (FSimulationResult *)(*pcVar9)();
        return pFVar17;
      }
      FVar28 = (ForElementType<FArrangedWidget>)&local_470.Widgets.Array;
      if (local_470.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar28 = local_470.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      cVar14 = (**(code **)(**(longlong **)
                              ((longlong)
                               &((TSharedRef<SWidget,1> *)((longlong)FVar28 + 0x38))->Object +
                              lVar34) + 0x198))();
      if (cVar14 != '\0') {
        local_6a8.Object =
             *(SWidget **)
              ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar28 + 0x38))->Object + lVar34);
        local_6a8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)
              ((longlong)&((FSharedReferencer<1> *)((longlong)FVar28 + 0x40))->ReferenceController +
              lVar34);
        if (local_6a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar25 = FWidgetPath::GetPathDownTo(&local_470,&local_1b0,&local_6a8);
        FWidgetPath::operator=(&__return_storage_ptr__->NavigationDestination,pFVar25);
        if (local_1b0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1b0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar28 = (ForElementType<FArrangedWidget>)&local_1b0.Widgets.Array;
        if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar28 = local_1b0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar28,local_1b0.Widgets.Array.ArrayNum);
        if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1b0.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        bVar13 = FWidgetPath::IsValid(&__return_storage_ptr__->NavigationDestination);
        if (bVar13) {
          bVar13 = FWidgetPath::IsValid(&__return_storage_ptr__->NavigationDestination);
          if ((!bVar13) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                                  ,0xac,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            pFVar17 = (FSimulationResult *)(*pcVar9)();
            return pFVar17;
          }
          pFVar26 = FArrangedChildren::operator[]
                              (&(__return_storage_ptr__->NavigationDestination).Widgets,
                               (__return_storage_ptr__->NavigationDestination).Widgets.Array.
                               ArrayNum + -1);
          local_740 = (pFVar26->Widget).SharedReferenceCount.ReferenceController;
          pSVar29 = (pFVar26->Widget).Object;
          if (local_740 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_740->SharedReferenceCount =
                 (atomic<int>)((int)local_740->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            local_740->SharedReferenceCount =
                 (atomic<int>)((int)local_740->SharedReferenceCount + 1);
            UNLOCK();
          }
          ppSVar30 = &local_728;
          bVar13 = false;
          bVar10 = true;
          bVar11 = true;
          local_728 = pSVar29;
          local_720 = local_740;
        }
        else {
          ppSVar30 = &local_698;
          pSVar29 = (SWidget *)0x0;
          bVar11 = false;
          bVar13 = true;
          local_698 = (SWidget *)0x0;
          pTStack_690 = (TReferenceControllerBase<1> *)0x0;
          bVar10 = false;
        }
        if (&__return_storage_ptr__->FocusedWidgetPath != (TSharedPtr<SWidget,1> *)ppSVar30) {
          (__return_storage_ptr__->FocusedWidgetPath).Object = pSVar29;
          *ppSVar30 = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(__return_storage_ptr__->FocusedWidgetPath).SharedReferenceCount,
                     (FSharedReferencer<1> *)(ppSVar30 + 1));
        }
        if (bVar13) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_690);
        }
        if (bVar10) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_720);
        }
        if (bVar11) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_740);
        }
        break;
      }
      lVar34 = lVar34 + -0x48;
      uVar31 = uVar31 - 1;
    } while (-1 < (int)uVar31);
  }
LAB_142ebb4d3:
  if (local_470.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar28 = (ForElementType<FArrangedWidget>)&local_470.Widgets.Array;
  if (local_470.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar28 = local_470.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar28,local_470.Widgets.Array.ArrayNum);
  if (local_470.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_470.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// Simulate @ 142f06730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSimulationResult * __thiscall
FSlateNavigationEventSimulator::Simulate
          (FSlateNavigationEventSimulator *this,FSimulationResult *__return_storage_ptr__,
          FWidgetPath *param_1,int param_2,ENavigationGenesis param_3,EUINavigation param_4)

{
  TSharedPtr<SWidget,1> *pTVar1;
  EUINavigationRule EVar2;
  int iVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  FSimulatedNavigationMetaData *pFVar9;
  bool bVar10;
  int iVar11;
  FArrangedWidget *pFVar12;
  FSimulationResult *pFVar13;
  SWidget **ppSVar14;
  FNavigationReply *pFVar15;
  ulonglong uVar16;
  ERoutedReason EVar17;
  undefined1 auStackY_5d8 [32];
  undefined1 local_5a8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_588;
  ForAnyElementType FStack_580;
  ulonglong local_578;
  EUINavigationRule local_570;
  undefined1 local_568 [8];
  ForAnyElementType local_560;
  ulonglong local_558;
  LARGE_INTEGER local_550;
  SWidget *local_548;
  FSharedReferencer<1> FStack_540;
  SWidget *local_538;
  SWidget *pSStack_530;
  undefined1 local_528 [8];
  void *pvStack_520;
  undefined4 local_518;
  EUINavigationRule local_510;
  SWidget *local_508;
  FSharedReferencer<1> local_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [10];
  bool local_4de;
  uint local_4dc;
  FInputDeviceId local_4d8;
  FWidgetPath *local_4d0;
  EUINavigationRule local_4c0;
  ENavigationGenesis local_4bf;
  undefined8 local_4b8;
  FSharedReferencer<1> local_4b0;
  TSharedPtr<FSimulatedNavigationMetaData,1> local_4a8;
  TSharedRef<SWindow,1> local_498;
  FDestructionSentinel local_488;
  FDestructionSentinel local_470;
  FDestructionSentinel local_458;
  undefined1 local_440 [8];
  TReferenceControllerBase<1> *local_438;
  TReferenceControllerBase<1> *local_428;
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  SWidget *local_3c0;
  TReferenceControllerBase<1> *pTStack_3b8;
  SWidget *local_3b0;
  TReferenceControllerBase<1> *pTStack_3a8;
  SWidget *local_3a0;
  TReferenceControllerBase<1> *pTStack_398;
  SWidget *local_390;
  TReferenceControllerBase<1> *pTStack_388;
  SWidget *local_380;
  TReferenceControllerBase<1> *pTStack_378;
  SWidget *local_370;
  TReferenceControllerBase<1> *pTStack_368;
  FSimulationResult local_360;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  FSimulationResult::FSimulationResult(__return_storage_ptr__);
  bVar10 = FWidgetPath::IsValid(param_1);
  if ((bVar10) && (1 < (byte)(param_4 - Num))) {
    FWidgetPath::GetDeepestWindow(param_1,&local_498);
    local_4e8._8_2_ = local_550.s.LowPart._0_2_ & 0xfe00;
    local_4de = false;
    local_4d0 = (FWidgetPath *)0x0;
    local_4dc = param_2;
    local_4d8.InternalId = param_2;
    QueryPerformanceCounter(&local_550);
    iVar3 = (param_1->Widgets).Array.ArrayNum;
    local_4e8._0_8_ = &___7FNavigationEvent__6B_;
    local_4c0 = param_4;
    local_4bf = param_3;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      pFVar12 = FArrangedChildren::operator[](&param_1->Widgets,iVar3);
      pSVar4 = (pFVar12->Widget).Object;
      if (pSVar4->EnabledStateAttribute !=
          (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
        local_578 = 0;
        local_5a8._0_8_ = (SWidget *)0x0;
        local_5a8._8_8_ = (TReferenceControllerBase<1> *)0x0;
        local_570 = Escape;
        local_5a8._16_8_ = (SWidget *)0x0;
        local_5a8._24_8_ = (TReferenceControllerBase<1> *)0x0;
        local_588.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_580.Data = (FScriptContainerElement *)0x0;
        SWidget::GetMetaData<FSimulatedNavigationMetaData>(pSVar4,&local_4a8);
        pFVar9 = local_4a8.Object;
        if (local_4a8.Object == (FSimulatedNavigationMetaData *)0x0) {
          pFVar15 = SWidget::OnNavigation
                              ((pFVar12->Widget).Object,(FNavigationReply *)local_400,
                               &pFVar12->Geometry,(FNavigationEvent *)local_4e8);
          local_4f8._8_8_ = (pFVar12->Widget).SharedReferenceCount.ReferenceController;
          local_4f8._0_8_ = (pFVar12->Widget).Object;
          if ((TReferenceControllerBase<1> *)local_4f8._8_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            ((TReferenceControllerBase<1> *)local_4f8._8_8_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_4f8._8_8_)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar15 != (FNavigationReply *)local_4f8) {
            (pFVar15->EventHandler).Object = (SWidget *)local_4f8._0_8_;
            local_4f8._0_8_ = (SWidget *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(pFVar15->EventHandler).SharedReferenceCount,
                       (FSharedReferencer<1> *)(local_4f8 + 8));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_4f8._8_8_);
          uVar8 = local_5a8._8_8_;
          pSVar4 = (SWidget *)(pFVar15->EventHandler).SharedReferenceCount.ReferenceController;
          pSVar5 = (pFVar15->EventHandler).Object;
          if (pSVar4 != (SWidget *)0x0) {
            LOCK();
            *(atomic<int> *)&pSVar4->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pSVar4->_padding_ + 1);
            UNLOCK();
          }
          local_380 = (SWidget *)local_5a8._0_8_;
          pTStack_378 = (TReferenceControllerBase<1> *)local_5a8._8_8_;
          local_5a8._0_8_ = pSVar5;
          local_5a8._8_8_ = pSVar4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar8);
          uVar8 = local_5a8._24_8_;
          pSVar4 = (SWidget *)(pFVar15->FocusRecipient).SharedReferenceCount.ReferenceController;
          pSVar5 = (pFVar15->FocusRecipient).Object;
          if (pSVar4 != (SWidget *)0x0) {
            LOCK();
            *(atomic<int> *)&pSVar4->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pSVar4->_padding_ + 1);
            UNLOCK();
          }
          local_370 = (SWidget *)local_5a8._16_8_;
          pTStack_368 = (TReferenceControllerBase<1> *)local_5a8._24_8_;
          local_5a8._16_8_ = pSVar5;
          local_5a8._24_8_ = pSVar4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar8);
          TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>(&local_588,&pFVar15->FocusDelegate);
          local_570 = pFVar15->BoundaryRule;
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e0);
          if ((void *)local_3e0._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_3e0._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_400._24_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_400._8_8_);
        }
        else {
          if ((local_4a8.Object == (FSimulatedNavigationMetaData *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FSimulationResult *)(*pcVar6)();
            return pFVar13;
          }
          if (pFVar9->bIsOnNavigationConst == false) {
            uVar16 = (ulonglong)local_4c0;
            local_558 = 0;
            local_568 = (undefined1  [8])0x0;
            local_560.Data = (FScriptContainerElement *)0x0;
            pSStack_530 = (SWidget *)
                          pFVar9->Rules[uVar16].FocusRecipient.WeakReferenceCount.
                          ReferenceController;
            if (pSStack_530 == (SWidget *)0x0) {
              EVar2 = pFVar9->Rules[uVar16].BoundaryRule;
LAB_142f06a5a:
              local_538 = (SWidget *)0x0;
            }
            else {
              iVar7 = (int)pSStack_530->_padding_;
              do {
                if (iVar7 == 0) {
                  EVar2 = pFVar9->Rules[uVar16].BoundaryRule;
                  pSStack_530 = (SWidget *)0x0;
                  goto LAB_142f06a5a;
                }
                LOCK();
                iVar11 = (int)pSStack_530->_padding_;
                bVar10 = iVar7 == iVar11;
                if (bVar10) {
                  *(int *)&pSStack_530->_padding_ = iVar7 + 1;
                  iVar11 = iVar7;
                }
                UNLOCK();
                iVar7 = iVar11;
              } while (!bVar10);
              local_538 = pFVar9->Rules[uVar16].FocusRecipient.Object;
              EVar2 = pFVar9->Rules[uVar16].BoundaryRule;
              LOCK();
              *(int *)&pSStack_530->_padding_ = (int)pSStack_530->_padding_ + 1;
              UNLOCK();
            }
            pSVar4 = pSStack_530;
            FStack_540.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_548 = (SWidget *)0x0;
            local_518 = 0;
            local_528 = (undefined1  [8])0x0;
            pvStack_520 = (void *)0x0;
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::CopyFrom<FDefaultDelegateUserPolicy>
                      (local_528,
                       (TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy>
                        *)local_568);
            local_510 = EVar2;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pSVar4);
            local_4b0.ReferenceController =
                 (pFVar12->Widget).SharedReferenceCount.ReferenceController;
            local_548 = (pFVar12->Widget).Object;
            if (local_4b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_4b0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_4b0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_4b8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_540,&local_4b0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4b0.ReferenceController);
            pTStack_398 = (TReferenceControllerBase<1> *)local_5a8._8_8_;
            local_3a0 = (SWidget *)local_5a8._0_8_;
            if ((SWidget *)FStack_540.ReferenceController != (SWidget *)0x0) {
              LOCK();
              (FStack_540.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_540.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_5a8._0_8_ = local_548;
            local_5a8._8_8_ = FStack_540.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_398);
            pTStack_388 = (TReferenceControllerBase<1> *)local_5a8._24_8_;
            local_390 = (SWidget *)local_5a8._16_8_;
            if (pSStack_530 != (SWidget *)0x0) {
              LOCK();
              *(atomic<int> *)&pSStack_530->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pSStack_530->_padding_ + 1);
              UNLOCK();
            }
            local_5a8._16_8_ = local_538;
            local_5a8._24_8_ = pSStack_530;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_388);
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::CopyFrom<FDefaultDelegateUserPolicy>
                      (&local_588,
                       (TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy>
                        *)local_528);
            local_570 = local_510;
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_528);
            if (pvStack_520 != (void *)0x0) {
              FMemory::Free(pvStack_520);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_528);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pSStack_530);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_540.ReferenceController);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
                       (FWriteAccessScope *)&local_488);
            if (((int)local_558 != 0) && (local_560.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_560.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_560,0,0,0x10);
              local_558 = local_558 & 0xffffffff00000000;
            }
            if (local_488.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
            }
            if (local_560.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_560.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_568);
          }
          else {
            pSVar4 = (pFVar12->Widget).Object;
            ppSVar14 = (SWidget **)(**(code **)(pSVar4->_padding_ + 0x140))(pSVar4,local_440);
            local_500.ReferenceController =
                 (pFVar12->Widget).SharedReferenceCount.ReferenceController;
            local_508 = (pFVar12->Widget).Object;
            if (local_500.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_500.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_500.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (ppSVar14 != &local_508) {
              *ppSVar14 = local_508;
              local_508 = (SWidget *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(ppSVar14 + 1),&local_500);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_500.ReferenceController);
            uVar8 = local_5a8._8_8_;
            pSVar4 = ppSVar14[1];
            pSVar5 = *ppSVar14;
            if (pSVar4 != (SWidget *)0x0) {
              LOCK();
              *(atomic<int> *)&pSVar4->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pSVar4->_padding_ + 1);
              UNLOCK();
            }
            local_3c0 = (SWidget *)local_5a8._0_8_;
            pTStack_3b8 = (TReferenceControllerBase<1> *)local_5a8._8_8_;
            local_5a8._0_8_ = pSVar5;
            local_5a8._8_8_ = pSVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)uVar8);
            uVar8 = local_5a8._24_8_;
            pSVar4 = ppSVar14[3];
            pSVar5 = ppSVar14[2];
            if (pSVar4 != (SWidget *)0x0) {
              LOCK();
              *(atomic<int> *)&pSVar4->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&pSVar4->_padding_ + 1);
              UNLOCK();
            }
            local_3b0 = (SWidget *)local_5a8._16_8_;
            pTStack_3a8 = (TReferenceControllerBase<1> *)local_5a8._24_8_;
            local_5a8._16_8_ = pSVar5;
            local_5a8._24_8_ = pSVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)uVar8);
            TDelegate<TSharedPtr<SWidget,1>___cdecl(enum_EUINavigation),FDefaultDelegateUserPolicy>
            ::CopyFrom<FDefaultDelegateUserPolicy>
                      (&local_588,
                       (TDelegate<TSharedPtr<SWidget,1>___cdecl(EUINavigation),FDefaultDelegateUserPolicy>
                        *)(ppSVar14 + 4));
            local_570 = *(EUINavigationRule *)(ppSVar14 + 7);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
            if ((void *)local_420._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_420._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_420);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_428);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_438);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4a8.SharedReferenceCount.ReferenceController);
        EVar17 = BoundaryRule;
        if (((local_570 != Escape) || ((SWindow *)(pFVar12->Widget).Object == local_498.Object)) ||
           (iVar3 == 0)) {
          pFVar13 = InterpretResult(this,&local_360,param_1,(FNavigationEvent *)local_4e8,
                                    (FNavigationReply *)local_5a8,pFVar12);
          FWidgetPath::operator=
                    (&__return_storage_ptr__->NavigationSource,&pFVar13->NavigationSource);
          FWidgetPath::operator=
                    (&__return_storage_ptr__->NavigationDestination,&pFVar13->NavigationDestination)
          ;
          __return_storage_ptr__->NavigationType = pFVar13->NavigationType;
          FSimulatedReply::operator=
                    (&__return_storage_ptr__->NavigationReply,&pFVar13->NavigationReply);
          pTVar1 = &pFVar13->WidgetThatShouldReceivedFocus;
          __return_storage_ptr__->RoutedReason = pFVar13->RoutedReason;
          if (&__return_storage_ptr__->WidgetThatShouldReceivedFocus != pTVar1) {
            (__return_storage_ptr__->WidgetThatShouldReceivedFocus).Object = pTVar1->Object;
            pTVar1->Object = (SWidget *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(__return_storage_ptr__->WidgetThatShouldReceivedFocus).SharedReferenceCount
                       ,&(pFVar13->WidgetThatShouldReceivedFocus).SharedReferenceCount);
          }
          pTVar1 = &pFVar13->FocusedWidgetPath;
          if (&__return_storage_ptr__->FocusedWidgetPath != pTVar1) {
            (__return_storage_ptr__->FocusedWidgetPath).Object = pTVar1->Object;
            pTVar1->Object = (SWidget *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(__return_storage_ptr__->FocusedWidgetPath).SharedReferenceCount,
                       &(pFVar13->FocusedWidgetPath).SharedReferenceCount);
          }
          __return_storage_ptr__->bIsDynamic = pFVar13->bIsDynamic;
          __return_storage_ptr__->bAlwaysHandleNavigationAttempt =
               pFVar13->bAlwaysHandleNavigationAttempt;
          __return_storage_ptr__->bCanFindWidgetForSetFocus = pFVar13->bCanFindWidgetForSetFocus;
          __return_storage_ptr__->bRoutedHandlerHasNavigationMeta =
               pFVar13->bRoutedHandlerHasNavigationMeta;
          __return_storage_ptr__->bHandledByViewport = pFVar13->bHandledByViewport;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_360.FocusedWidgetPath.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_360.WidgetThatShouldReceivedFocus.SharedReferenceCount.
                     ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_360.NavigationReply.FocusRecipient.SharedReferenceCount.
                     ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_360.NavigationReply.EventHandler.SharedReferenceCount.ReferenceController
                    );
          FWidgetPath::~FWidgetPath(&local_360.NavigationDestination);
          FWidgetPath::~FWidgetPath(&local_360.NavigationSource);
          if ((SWindow *)(pFVar12->Widget).Object == local_498.Object) {
            __return_storage_ptr__->RoutedReason = Window;
          }
          else {
            if (iVar3 == 0) {
              EVar17 = LastWidget;
            }
            __return_storage_ptr__->RoutedReason = EVar17;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_588,(FWriteAccessScope *)&local_458);
          if (((int)local_578 != 0) && (FStack_580.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_580.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_580,0,0,0x10);
            local_578 = local_578 & 0xffffffff00000000;
          }
          if (local_458.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
          }
          if (FStack_580.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_580.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_588.AccessDetector);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_5a8._24_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_5a8._8_8_);
          break;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_588,(FWriteAccessScope *)&local_470);
        if (((int)local_578 != 0) && (FStack_580.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_580.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_580,0,0,0x10)
          ;
          local_578 = local_578 & 0xffffffff00000000;
        }
        if (local_470.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_470.Accessor,&local_470);
        }
        if (FStack_580.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_580.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_588.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_5a8._24_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_5a8._8_8_);
      }
    }
    FInputEvent::~FInputEvent((FInputEvent *)local_4e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Simulate @ 142f07020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> * __thiscall
FSlateNavigationEventSimulator::Simulate
          (FSlateNavigationEventSimulator *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FWidgetPath *param_1,int param_2,ENavigationGenesis param_3,
          ENavigationStyle param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FSimulationResult *pFVar5;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> *pTVar6;
  EUINavigation *pEVar7;
  undefined1 auStackY_6f8 [32];
  ForAnyElementType local_6a8;
  undefined8 local_6a0;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> *local_698;
  FSimulationResult local_690;
  FSimulationResult local_370;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_6a8.Data = (FScriptContainerElement *)0x0;
  local_6a0 = 0;
  local_698 = __return_storage_ptr__;
  bVar3 = FWidgetPath::IsValid(param_1);
  if (bVar3) {
    if (param_4 == ConceptualNextAndPrevious) {
      pEVar7 = SlateNavigationSimulationInternal::NextPrevious;
      do {
        pFVar5 = Simulate(this,&local_690,param_1,param_2,param_3,*pEVar7);
        if (((local_6a8.Data <= pFVar5) &&
            (pFVar5 < (FSimulationResult *)(local_6a8.Data + (longlong)local_6a0._4_4_ * 800))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar6;
        }
        iVar4 = (int)local_6a0;
        if ((int)local_6a0 == local_6a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (800,8,&local_6a8,(int *)((longlong)&local_6a0 + 4));
        }
        local_6a0 = CONCAT44(local_6a0._4_4_,iVar4 + 1);
        FSimulationResult::FSimulationResult
                  ((FSimulationResult *)(local_6a8.Data + (longlong)iVar4 * 800),pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.FocusedWidgetPath.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.WidgetThatShouldReceivedFocus.SharedReferenceCount.ReferenceController)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.NavigationReply.FocusRecipient.SharedReferenceCount.ReferenceController
                  );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_690.NavigationReply.EventHandler.SharedReferenceCount.ReferenceController);
        FWidgetPath::~FWidgetPath(&local_690.NavigationDestination);
        FWidgetPath::~FWidgetPath(&local_690.NavigationSource);
        pEVar7 = pEVar7 + 1;
      } while ((bool *)pEVar7 != &WidgetReflectorCVars::bEnableFocusOnPick);
    }
    else {
      pEVar7 = SlateNavigationSimulationInternal::FourCardinalDirections;
      do {
        pFVar5 = Simulate(this,&local_370,param_1,param_2,param_3,*pEVar7);
        if (((local_6a8.Data <= pFVar5) &&
            (pFVar5 < (FSimulationResult *)(local_6a8.Data + (longlong)local_6a0._4_4_ * 800))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar6;
        }
        iVar4 = (int)local_6a0;
        if ((int)local_6a0 == local_6a0._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (800,8,&local_6a8,(int *)((longlong)&local_6a0 + 4));
        }
        local_6a0 = CONCAT44(local_6a0._4_4_,iVar4 + 1);
        FSimulationResult::FSimulationResult
                  ((FSimulationResult *)(local_6a8.Data + (longlong)iVar4 * 800),pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_370.FocusedWidgetPath.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_370.WidgetThatShouldReceivedFocus.SharedReferenceCount.ReferenceController)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_370.NavigationReply.FocusRecipient.SharedReferenceCount.ReferenceController
                  );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_370.NavigationReply.EventHandler.SharedReferenceCount.ReferenceController);
        FWidgetPath::~FWidgetPath(&local_370.NavigationDestination);
        FWidgetPath::~FWidgetPath(&local_370.NavigationSource);
        pEVar7 = pEVar7 + 1;
      } while (pEVar7 != SlateNavigationSimulationInternal::NextPrevious);
    }
    __return_storage_ptr__ = local_698;
    FVar2.Data = local_6a8.Data;
    local_6a8.Data = (FScriptContainerElement *)0x0;
    (local_698->AllocatorInstance).Data = FVar2.Data;
    local_698->ArrayNum = (int)local_6a0;
    local_698->ArrayMax = local_6a0._4_4_;
    local_6a0 = 0;
    DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>((FSimulationResult *)0x0,0)
    ;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = local_6a8.Data;
    __return_storage_ptr__->ArrayNum = (int)local_6a0;
    __return_storage_ptr__->ArrayMax = local_6a0._4_4_;
    DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>((FSimulationResult *)0x0,0)
    ;
  }
  if ((FSimulationResult *)local_6a8.Data != (FSimulationResult *)0x0) {
    FMemory::Free(local_6a8.Data);
  }
  return __return_storage_ptr__;
}

// SimulateForEachWidgets @ 142f073b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> * __thiscall
FSlateNavigationEventSimulator::SimulateForEachWidgets
          (FSlateNavigationEventSimulator *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TSharedRef<SWindow,1> *param_1,int param_2,
          ENavigationGenesis param_3,ENavigationStyle param_4)

{
  code *pcVar1;
  EVisibility EVar2;
  FSlateApplication *pFVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1d8 [32];
  SWindow *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FWidgetPath::FWidgetPath(&local_198);
  pFVar3 = FSlateApplication::Get();
  EVar2 = EVisibility::Visible;
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x20);
  local_1a8 = param_1->Object;
  local_1a0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1a0->SharedReferenceCount = (atomic<int>)((int)local_1a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar3,&local_1a8,&local_198,EVar2.Value.Value);
  SimulateForEachWidgets(this,__return_storage_ptr__,&local_198,param_2,param_3,param_4);
  if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar4 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_198.Widgets.Array.ArrayNum);
  if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// SimulateForEachWidgets @ 142f074d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> * __thiscall
FSlateNavigationEventSimulator::SimulateForEachWidgets
          (FSlateNavigationEventSimulator *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TSharedRef<SWindow,1> *param_1,int param_2,
          ENavigationGenesis param_3,EUINavigation param_4)

{
  code *pcVar1;
  EVisibility EVar2;
  FSlateApplication *pFVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1c8 [32];
  SWindow *local_198;
  TReferenceControllerBase<1> *local_190;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FWidgetPath::FWidgetPath(&local_188);
  pFVar3 = FSlateApplication::Get();
  EVar2 = EVisibility::Visible;
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x20);
  local_198 = param_1->Object;
  local_190 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_190 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_190->SharedReferenceCount = (atomic<int>)((int)local_190->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar3,&local_198,&local_188,EVar2.Value.Value);
  SimulateForEachWidgets(this,__return_storage_ptr__,&local_188,param_2,param_3,param_4);
  if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar4 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
  if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_188.Widgets.Array.ArrayNum);
  if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// SimulateForEachWidgets @ 142f075f0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> * __thiscall
FSlateNavigationEventSimulator::SimulateForEachWidgets
          (FSlateNavigationEventSimulator *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FWidgetPath *param_1,int param_2,ENavigationGenesis param_3,
          ENavigationStyle param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> *pTVar5;
  EUINavigation *pEVar6;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> local_48;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar3 = FWidgetPath::IsValid(param_1);
  if (bVar3) {
    if (param_4 == ConceptualNextAndPrevious) {
      pEVar6 = SlateNavigationSimulationInternal::NextPrevious;
      do {
        pTVar5 = SimulateForEachWidgets(this,&local_48,param_1,param_2,param_3,*pEVar6);
        if ((__return_storage_ptr__ == pTVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar5;
        }
        iVar1 = pTVar5->ArrayNum;
        if (iVar1 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (800,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 800,
                  (pTVar5->AllocatorInstance).Data,(longlong)iVar1 * 800);
          pTVar5->ArrayNum = 0;
        }
        DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
                  ((FSimulationResult *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if ((FSimulationResult *)local_48.AllocatorInstance.Data != (FSimulationResult *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        pEVar6 = pEVar6 + 1;
      } while ((bool *)pEVar6 != &WidgetReflectorCVars::bEnableFocusOnPick);
    }
    else {
      pEVar6 = SlateNavigationSimulationInternal::FourCardinalDirections;
      do {
        pTVar5 = SimulateForEachWidgets(this,&local_38,param_1,param_2,param_3,*pEVar6);
        if ((__return_storage_ptr__ == pTVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar5;
        }
        iVar1 = pTVar5->ArrayNum;
        if (iVar1 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (800,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
          memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 800,
                  (pTVar5->AllocatorInstance).Data,(longlong)iVar1 * 800);
          pTVar5->ArrayNum = 0;
        }
        DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
                  ((FSimulationResult *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        if ((FSimulationResult *)local_38.AllocatorInstance.Data != (FSimulationResult *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        pEVar6 = pEVar6 + 1;
      } while (pEVar6 != SlateNavigationSimulationInternal::NextPrevious);
    }
  }
  return __return_storage_ptr__;
}

// SimulateForEachWidgets @ 142f07840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> * __thiscall
FSlateNavigationEventSimulator::SimulateForEachWidgets
          (FSlateNavigationEventSimulator *this,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FWidgetPath *param_1,int param_2,ENavigationGenesis param_3,
          EUINavigation param_4)

{
  code *pcVar1;
  bool bVar2;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> *pTVar3;
  FArrangedWidget *pFVar4;
  ForElementType<FArrangedWidget> FVar5;
  undefined1 auStack_1d8 [40];
  TSharedRef<SWidget,1> local_1b0;
  FAppendSimulateRecursive local_1a0;
  FWidgetPath local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar2 = FWidgetPath::IsValid(param_1);
  if (bVar2) {
    local_1a0.Genesis = param_3;
    local_1a0.Navigation = param_4;
    local_1a0.Self = this;
    local_1a0.Result = __return_storage_ptr__;
    local_1a0.UserIndex = param_2;
    FWidgetPath::FWidgetPath(&local_188,param_1);
    bVar2 = FWidgetPath::IsValid(param_1);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                         ,0xac,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    pFVar4 = FArrangedChildren::operator[](&param_1->Widgets,(param_1->Widgets).Array.ArrayNum + -1)
    ;
    local_1b0.Object = (pFVar4->Widget).Object;
    local_1b0.SharedReferenceCount.ReferenceController =
         (pFVar4->Widget).SharedReferenceCount.ReferenceController;
    if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SlateNavigationSimulationInternal::FAppendSimulateRecursive::Execute
              (&local_1a0,&local_188,&local_1b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    if (local_188.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_188.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar5 = (ForElementType<FArrangedWidget>)&local_188.Widgets.Array;
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar5 = local_188.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_188.Widgets.Array.ArrayNum);
    if (local_188.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// ToText @ 142f0fdb0

FText * __cdecl
FSlateNavigationEventSimulator::ToText(FText *__return_storage_ptr__,ENavigationStyle param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_res10 [24];
  
  if (param_1 == FourCardinalDirections) {
    pwVar4 = L"FourCardinalDirections";
    pwVar3 = L"ENavigationStyle_FourCardinalDirections";
  }
  else {
    if (param_1 != ConceptualNextAndPrevious) {
      pFVar2 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (pFVar2->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      __return_storage_ptr__->Flags = pFVar2->Flags;
      return __return_storage_ptr__;
    }
    pwVar4 = L"ConceptualNextAndPrevious";
    pwVar3 = L"ENavigationStyle_ConceptualNextAndPrevious";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SlateNavigationSimulatioN",pwVar3,pwVar4);
  return __return_storage_ptr__;
}

// ToText @ 142f0fe40

FText * __cdecl
FSlateNavigationEventSimulator::ToText(FText *__return_storage_ptr__,ERoutedReason param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_res10 [24];
  
  if (param_1 == BoundaryRule) {
    pwVar4 = L"BoundaryRule";
    pwVar3 = L"ERoutedReason_BoundaryRule";
  }
  else if (param_1 == Window) {
    pwVar4 = L"Window";
    pwVar3 = L"ERoutedReason_Window";
  }
  else {
    if (param_1 != LastWidget) {
      pFVar2 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (pFVar2->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      __return_storage_ptr__->Flags = pFVar2->Flags;
      return __return_storage_ptr__;
    }
    pwVar4 = L"LastWidget";
    pwVar3 = L"ERoutedReason_LastWidget";
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SlateNavigationSimulatioN",pwVar3,pwVar4);
  return __return_storage_ptr__;
}

