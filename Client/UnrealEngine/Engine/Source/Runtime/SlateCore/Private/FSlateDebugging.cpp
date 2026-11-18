// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 25

// BroadcastAttemptNavigation @ 1424345a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastAttemptNavigation
          (FNavigationEvent *param_1,FNavigationReply *param_2,FWidgetPath *param_3,
          TSharedPtr<SWidget,1> *param_4,ESlateDebuggingNavigationMethod param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_48;
  FNavigationEvent *local_30;
  FNavigationReply *local_28;
  FWidgetPath *local_20;
  TSharedPtr<SWidget,1> *local_18;
  ESlateDebuggingNavigationMethod local_10;
  
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&AttemptNavigationEvent);
  if (bVar2) {
    local_10 = param_5;
    local_30 = param_1;
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&AttemptNavigationEvent,
               (FWriteAccessScope *)&local_48);
    bVar2 = false;
    AttemptNavigationEvent._28_4_ = AttemptNavigationEvent._28_4_ + 1;
    uVar6 = AttemptNavigationEvent._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)AttemptNavigationEvent._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + AttemptNavigationEvent._8_8_) == 0) ||
            (*(longlong **)(lVar7 + AttemptNavigationEvent._8_8_) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + AttemptNavigationEvent._8_8_) + 0x68))(),
           cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    AttemptNavigationEvent._28_4_ = AttemptNavigationEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&AttemptNavigationEvent,false
                );
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// BroadcastCursorQuery @ 142434710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastCursorQuery(TSharedPtr<SWidget_const_,1> *param_1,FCursorReply *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  uint uVar10;
  FWeakReferencer<1> FVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  SWidget *pSVar15;
  bool bVar16;
  uint uStackX_c;
  FDestructionSentinel local_38;
  
  bVar7 = false;
  bVar16 = false;
  if ((LastCursorQuery.WidgetThatOverrideCursorLast_UnsafeToUseForAnythingButCompare ==
       param_1->Object) && (LastCursorQuery.MouseCursor == param_2->MouseCursor)) {
    pTVar13 = (param_2->CursorWidget).SharedReferenceCount.ReferenceController;
    pSVar3 = (param_2->CursorWidget).Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11.ReferenceController = LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController
    ;
    pSVar15 = (SWidget *)0x0;
    if (LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController)->
              SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pSVar15 = (SWidget *)0x0;
          break;
        }
        LOCK();
        aVar9 = (FVar11.ReferenceController)->SharedReferenceCount;
        bVar16 = aVar2 == aVar9;
        if (bVar16) {
          (FVar11.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar9 = aVar2;
        }
        UNLOCK();
        pSVar15 = LastCursorQuery.CursorWidget.Object;
        aVar2 = aVar9;
      } while (!bVar16);
    }
    bVar7 = true;
    bVar16 = true;
    if (pSVar15 == pSVar3) {
      bVar5 = false;
      goto LAB_1424347ab;
    }
  }
  else {
    FVar11.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  bVar5 = true;
LAB_1424347ab:
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar5) {
    LastCursorQuery.WidgetThatOverrideCursorLast_UnsafeToUseForAnythingButCompare = param_1->Object;
    LastCursorQuery.MouseCursor = param_2->MouseCursor;
    pTVar13 = (param_2->CursorWidget).SharedReferenceCount.ReferenceController;
    LastCursorQuery.CursorWidget.Object = (param_2->CursorWidget).Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11.ReferenceController = LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController
    ;
    if (pTVar13 != LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      FVar6.ReferenceController =
           LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController;
      FVar11.ReferenceController = pTVar13;
      if (LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController)->
                  WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
    }
    LastCursorQuery.CursorWidget.WeakReferenceCount.ReferenceController = FVar11.ReferenceController
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&CursorChangedEvent,
               (FWriteAccessScope *)&local_38);
    bVar16 = false;
    CursorChangedEvent._28_4_ = CursorChangedEvent._28_4_ + 1;
    uVar12 = CursorChangedEvent._16_4_ - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 << 4;
      bVar16 = false;
      do {
        uVar10 = 0;
        if ((int)uVar12 < (int)CursorChangedEvent._16_4_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(lVar14 + 8 + CursorChangedEvent._8_8_) == 0) ||
            (*(longlong **)(lVar14 + CursorChangedEvent._8_8_) == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(**(longlong **)(lVar14 + CursorChangedEvent._8_8_) + 0x68))(),
           cVar8 == '\0')) {
          bVar16 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    CursorChangedEvent._28_4_ = CursorChangedEvent._28_4_ + -1;
    if (bVar16) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&CursorChangedEvent,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BroadcastExecuteNavigation @ 142434970

void __cdecl FSlateDebugging::BroadcastExecuteNavigation(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&ExecuteNavigationEvent);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ExecuteNavigationEvent,
               (FWriteAccessScope *)&local_28);
    bVar2 = false;
    ExecuteNavigationEvent._28_4_ = ExecuteNavigationEvent._28_4_ + 1;
    uVar6 = ExecuteNavigationEvent._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)ExecuteNavigationEvent._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + ExecuteNavigationEvent._8_8_) == 0) ||
            (*(longlong **)(lVar7 + ExecuteNavigationEvent._8_8_) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + ExecuteNavigationEvent._8_8_) + 0x68))(),
           cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    ExecuteNavigationEvent._28_4_ = ExecuteNavigationEvent._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&ExecuteNavigationEvent,false
                );
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// BroadcastFocusChanging @ 142434ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastFocusChanging
          (FFocusEvent *param_1,FWeakWidgetPath *param_2,TSharedPtr<SWidget,1> *param_3,
          FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  bool bVar1;
  FSlateDebuggingFocusEventArgs local_38;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FocusEvent);
  if (bVar1) {
    local_38.NewFocusedWidget = param_5;
    local_38.FocusEventType = FocusChanging;
    local_38.FocusEvent = param_1;
    local_38.OldFocusedWidgetPath = param_2;
    local_38.OldFocusedWidget = param_3;
    local_38.NewFocusedWidgetPath = param_4;
    TMulticastDelegate<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FocusEvent,&local_38);
  }
  return;
}

// BroadcastFocusLost @ 142434b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastFocusLost
          (FFocusEvent *param_1,FWeakWidgetPath *param_2,TSharedPtr<SWidget,1> *param_3,
          FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  bool bVar1;
  FSlateDebuggingFocusEventArgs local_38;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FocusEvent);
  if (bVar1) {
    local_38.NewFocusedWidget = param_5;
    local_38.FocusEventType = FocusLost;
    local_38.FocusEvent = param_1;
    local_38.OldFocusedWidgetPath = param_2;
    local_38.OldFocusedWidget = param_3;
    local_38.NewFocusedWidgetPath = param_4;
    TMulticastDelegate<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FocusEvent,&local_38);
  }
  return;
}

// BroadcastFocusReceived @ 142434be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastFocusReceived
          (FFocusEvent *param_1,FWeakWidgetPath *param_2,TSharedPtr<SWidget,1> *param_3,
          FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  bool bVar1;
  FSlateDebuggingFocusEventArgs local_38;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FocusEvent);
  if (bVar1) {
    local_38.NewFocusedWidget = param_5;
    local_38.FocusEventType = FocusReceived;
    local_38.FocusEvent = param_1;
    local_38.OldFocusedWidgetPath = param_2;
    local_38.OldFocusedWidget = param_3;
    local_38.NewFocusedWidgetPath = param_4;
    TMulticastDelegate<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FocusEvent,&local_38);
  }
  return;
}

// BroadcastInputEvent @ 142434c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,TSharedPtr<SWidget,1> *param_3)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res20 [8];
  FString local_118;
  FSlateDebuggingInputEventArgs local_108;
  FReply local_e0;
  
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
  if (bVar6) {
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    FReply::FReply(&local_e0,true);
    local_108.Reply = &local_e0;
    local_108.AdditionalContent = &local_118;
    local_108.InputEventType = param_1;
    local_108.InputEvent = param_2;
    local_108.HandlerWidget = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&InputEvent,&local_108);
    FReply::~FReply(&local_e0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = RoutingEvents.ArrayNum;
  pFVar2 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar7 * 8;
  FVar8.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar2) break;
    plVar4 = *(longlong **)FVar8.Data;
    pcVar5 = *(code **)(*plVar4 + 0x18);
    FReply::FReply(&local_e0,true);
    (*pcVar5)(plVar4,param_1,&local_e0,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController
              );
    if (local_e0.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_e0.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_e0.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.FocusRecipient.WeakReferenceCount.ReferenceController)->WeakReferenceCount
      ;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ + 8
                    ))(local_e0.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_e0.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_e0.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_e0.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_e0.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e0._padding_);
    FVar8.Data = FVar8.Data + 8;
  }
  return;
}

// BroadcastInputEvent @ 142434ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,FReply *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [16];
  FString local_68;
  TSharedPtr<SWidget,1> local_58;
  FSlateDebuggingInputEventArgs local_48;
  
  if ((char)param_3->_padding_ != '\0') {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
    if (bVar2) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_48.HandlerWidget = &local_58;
      local_48.AdditionalContent = &local_68;
      local_58.Object = (SWidget *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_48.InputEventType = param_1;
      local_48.InputEvent = param_2;
      local_48.Reply = param_3;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&InputEvent,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    local_58.Object = (SWidget *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(**(longlong **)FVar4.Data + 0x18))
              (*(longlong **)FVar4.Data,param_1,param_3,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FVar4.Data = FVar4.Data + 8;
  }
  return;
}

// BroadcastInputEvent @ 142434fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,FReply *param_3,
          TSharedPtr<SWidget,1> *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  FString local_58;
  FSlateDebuggingInputEventArgs local_48;
  
  if ((char)param_3->_padding_ != '\0') {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
    if (bVar2) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_48.AdditionalContent = &local_58;
      local_48.InputEventType = param_1;
      local_48.InputEvent = param_2;
      local_48.Reply = param_3;
      local_48.HandlerWidget = param_4;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&InputEvent,&local_48);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar4.Data + 0x18))
              (*(longlong **)FVar4.Data,param_1,param_3,param_4);
    FVar4.Data = FVar4.Data + 8;
  }
  return;
}

// BroadcastInputEvent @ 1424350c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,FReply *param_3,
          TSharedPtr<SWidget,1> *param_4,FName *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  FString local_58;
  FSlateDebuggingInputEventArgs local_48;
  
  if ((char)param_3->_padding_ != '\0') {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
    if (bVar2) {
      local_48.AdditionalContent = ::FName::ToString(param_5,&local_58);
      local_48.InputEventType = param_1;
      local_48.InputEvent = param_2;
      local_48.Reply = param_3;
      local_48.HandlerWidget = param_4;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&InputEvent,&local_48);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar4.Data + 0x18))
              (*(longlong **)FVar4.Data,param_1,param_3,param_4);
    FVar4.Data = FVar4.Data + 8;
  }
  return;
}

// BroadcastInputEvent @ 1424351c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,FReply *param_3,
          TSharedPtr<SWidget,1> *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  FSlateDebuggingInputEventArgs local_48;
  
  if ((char)param_3->_padding_ != '\0') {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
    if (bVar2) {
      local_48.AdditionalContent = param_5;
      local_48.InputEventType = param_1;
      local_48.InputEvent = param_2;
      local_48.Reply = param_3;
      local_48.HandlerWidget = param_4;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&InputEvent,&local_48);
    }
  }
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar4.Data + 0x18))
              (*(longlong **)FVar4.Data,param_1,param_3,param_4);
    FVar4.Data = FVar4.Data + 8;
  }
  return;
}

// BroadcastInputEvent @ 1424352a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,FReply *param_3,
          TSharedPtr<SWidget,1> *param_4,wchar_t param_5)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [8];
  FString local_58;
  FSlateDebuggingInputEventArgs local_48;
  
  if ((char)param_3->_padding_ != '\0') {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
    if (bVar2) {
      local_48.AdditionalContent = ::FString::ConstructFromPtrSize(&local_58,&param_5,1);
      local_48.InputEventType = param_1;
      local_48.InputEvent = param_2;
      local_48.Reply = param_3;
      local_48.HandlerWidget = param_4;
      TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&InputEvent,&local_48);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar4.Data + 0x18))
              (*(longlong **)FVar4.Data,param_1,param_3,param_4);
    FVar4.Data = FVar4.Data + 8;
  }
  return;
}

// BroadcastInvalidationRootInvalidate @ 1424353a0

void __cdecl
FSlateDebugging::BroadcastInvalidationRootInvalidate
          (SWidget *param_1,SWidget *param_2,ESlateDebuggingInvalidateRootReason param_3)

{
  bool bVar1;
  FSlateDebuggingInvalidateArgs local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&WidgetInvalidateEvent);
  if (bVar1) {
    local_28.InvalidateWidgetReason = None;
    local_28.WidgetInvalidated = param_1;
    local_28.WidgetInvalidateInvestigator = param_2;
    local_28.InvalidateInvalidationRootReason = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&WidgetInvalidateEvent,&local_28);
  }
  return;
}

// BroadcastMouseCapture @ 142435410

void __cdecl
FSlateDebugging::BroadcastMouseCapture
          (uint param_1,uint param_2,TSharedPtr<SWidget_const_,1> *param_3)

{
  bool bVar1;
  FSlateDebuggingMouseCaptureEventArgs local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&MouseCaptureEvent);
  if (bVar1) {
    local_28.Captured = true;
    local_28.UserIndex = param_1;
    local_28.PointerIndex = param_2;
    local_28.CaptureWidget = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&MouseCaptureEvent,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// BroadcastMouseCaptureLost @ 142435480

void __cdecl
FSlateDebugging::BroadcastMouseCaptureLost
          (uint param_1,uint param_2,TSharedPtr<SWidget_const_,1> *param_3)

{
  bool bVar1;
  FSlateDebuggingMouseCaptureEventArgs local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&MouseCaptureEvent);
  if (bVar1) {
    local_28.Captured = false;
    local_28.UserIndex = param_1;
    local_28.PointerIndex = param_2;
    local_28.CaptureWidget = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&MouseCaptureEvent,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// BroadcastNoReplyInputEvent @ 1424354f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateDebugging::BroadcastNoReplyInputEvent
          (ESlateDebuggingInputEvent param_1,FInputEvent *param_2,TSharedPtr<SWidget,1> *param_3)

{
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res20 [8];
  FString local_118;
  FSlateDebuggingInputEventArgs local_108;
  FReply local_e0;
  
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&InputEvent);
  if (bVar6) {
    ::FString::FString(&local_118,L"");
    FReply::FReply(&local_e0,false);
    local_108.Reply = &local_e0;
    local_108.AdditionalContent = &local_118;
    local_108.InputEventType = param_1;
    local_108.InputEvent = param_2;
    local_108.HandlerWidget = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&InputEvent,&local_108);
    FReply::~FReply(&local_e0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = RoutingEvents.ArrayNum;
  pFVar2 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar7 * 8;
  FVar8.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar2) break;
    plVar4 = *(longlong **)FVar8.Data;
    pcVar5 = *(code **)(*plVar4 + 0x18);
    FReply::FReply(&local_e0,false);
    (*pcVar5)(plVar4,param_1,&local_e0,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController
              );
    if (local_e0.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))();
      }
    }
    if (local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))();
      }
    }
    if (local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))();
      }
    }
    if (local_e0.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.FocusRecipient.WeakReferenceCount.ReferenceController)->WeakReferenceCount
      ;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ + 8
                    ))();
      }
    }
    if (local_e0.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  ();
      }
    }
    if (local_e0.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_e0.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_e0.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  ();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e0._padding_);
    FVar8.Data = FVar8.Data + 8;
  }
  return;
}

// BroadcastPreProcessInputEvent @ 142435720

void __cdecl
FSlateDebugging::BroadcastPreProcessInputEvent
          (ESlateDebuggingInputEvent param_1,wchar_t *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined1 local_res20 [8];
  
  iVar3 = RoutingEvents.ArrayNum;
  pFVar1 = RoutingEvents.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar2.Data = RoutingEvents.AllocatorInstance.Data;
  while( true ) {
    if (RoutingEvents.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSlateDebugging::IWidgetInputRoutingEvent_*,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (FVar2.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar2.Data + 8))(*(longlong **)FVar2.Data,param_1,param_2,param_3);
    FVar2.Data = FVar2.Data + 8;
  }
  return;
}

// BroadcastWarning @ 1424357c0

void __cdecl FSlateDebugging::BroadcastWarning(FText *param_1,TSharedPtr<SWidget,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&Warning);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Warning,
               (FWriteAccessScope *)&local_28);
    bVar2 = false;
    Warning._28_4_ = Warning._28_4_ + 1;
    uVar6 = Warning._16_4_ - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      bVar2 = false;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (int)Warning._16_4_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((*(int *)(lVar7 + 8 + Warning._8_8_) == 0) ||
            (*(longlong **)(lVar7 + Warning._8_8_) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar7 + Warning._8_8_) + 0x68))(), cVar4 == '\0'))
        {
          bVar2 = true;
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    Warning._28_4_ = Warning._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&Warning,false);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// BroadcastWidgetInvalidate @ 142435920

void __cdecl
FSlateDebugging::BroadcastWidgetInvalidate
          (SWidget *param_1,SWidget *param_2,EInvalidateWidgetReason param_3)

{
  bool bVar1;
  FSlateDebuggingInvalidateArgs local_28;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&WidgetInvalidateEvent);
  if (bVar1) {
    local_28.InvalidateInvalidationRootReason = None;
    local_28.WidgetInvalidated = param_1;
    local_28.WidgetInvalidateInvestigator = param_2;
    local_28.InvalidateWidgetReason = param_3;
    TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&WidgetInvalidateEvent,&local_28);
  }
  return;
}

// BroadcastWidgetUpdated @ 142435990

void __cdecl FSlateDebugging::BroadcastWidgetUpdated(SWidget *param_1,EWidgetUpdateFlags param_2)

{
  bool bVar1;
  FSlateDebuggingWidgetUpdatedEventArgs local_18;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&WidgetUpdatedEvent);
  if (bVar1) {
    local_18.bFromPaint = false;
    local_18.Widget = param_1;
    local_18.UpdateFlags = param_2;
    TMulticastDelegate<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&WidgetUpdatedEvent,&local_18);
  }
  return;
}

// BroadcastWidgetUpdatedByPaint @ 1424359e0

void __cdecl
FSlateDebugging::BroadcastWidgetUpdatedByPaint(SWidget *param_1,EWidgetUpdateFlags param_2)

{
  bool bVar1;
  FSlateDebuggingWidgetUpdatedEventArgs local_18;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&WidgetUpdatedEvent);
  if (bVar1) {
    local_18.bFromPaint = true;
    local_18.Widget = param_1;
    local_18.UpdateFlags = param_2;
    TMulticastDelegate<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&WidgetUpdatedEvent,&local_18);
  }
  return;
}

// ExportWidgetList @ 14243d460

void __cdecl FSlateDebugging::ExportWidgetList(TStringView<wchar_t> *param_1)

{
  return;
}

// GetAllWidgets @ 14243e5d0

TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> * __cdecl FSlateDebugging::GetAllWidgets(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSlateDebugging::GetAllWidgets'::__l2::_dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// RegisterWidgetInputRoutingEvent @ 14244dcf0

void __cdecl FSlateDebugging::RegisterWidgetInputRoutingEvent(IWidgetInputRoutingEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  IWidgetInputRoutingEvent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((param_1 == (IWidgetInputRoutingEvent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\SlateDebugging.cpp"
                         ,0x240,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((RoutingEvents.AllocatorInstance.Data <= (FScriptContainerElement *)local_res8) &&
      ((FScriptContainerElement *)local_res8 <
       RoutingEvents.AllocatorInstance.Data + (longlong)RoutingEvents.ArrayMax * 8)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (RoutingEvents.ArrayNum == RoutingEvents.ArrayMax) {
    RoutingEvents.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RoutingEvents.AllocatorInstance,&RoutingEvents.ArrayMax);
  }
  lVar3 = (longlong)RoutingEvents.ArrayNum;
  RoutingEvents.ArrayNum = RoutingEvents.ArrayNum + 1;
  *(IWidgetInputRoutingEvent **)(RoutingEvents.AllocatorInstance.Data + lVar3 * 8) = local_res8[0];
  return;
}

// UnregisterWidgetInputRoutingEvent @ 1424559d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FSlateDebugging::UnregisterWidgetInputRoutingEvent(IWidgetInputRoutingEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  IWidgetInputRoutingEvent *local_res8 [4];
  
  local_res8[0] = param_1;
  if (param_1 == (IWidgetInputRoutingEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Debugging\\SlateDebugging.cpp"
                       ,0x246,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&RoutingEvents,local_res8,Default);
  return;
}

